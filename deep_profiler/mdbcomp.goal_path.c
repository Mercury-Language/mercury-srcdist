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
#include "integer.mih"
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




#line 70 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0;

#line 73 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1[2];

#line 76 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1;

#line 79 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[1];

#line 82 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[1];

#line 85 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_containing_goal_0[2];

#line 88 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0[2];

#line 91 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0[2];

#line 94 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 97 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0;

#line 100 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1[2];

#line 103 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1;

#line 106 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[1];

#line 109 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[1];

#line 112 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0[2];

#line 115 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[2];

#line 118 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0[2];

#line 121 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1[1];

#line 124 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1;

#line 127 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 130 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1;

#line 133 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 136 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0[1];

#line 139 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0;

#line 142 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0[1];

#line 145 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0;

#line 148 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1[1];

#line 151 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1;

#line 154 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2[2];

#line 157 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2;

#line 160 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3;

#line 163 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4;

#line 166 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5;

#line 169 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6;

#line 172 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7[1];

#line 175 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7;

#line 178 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8;

#line 181 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9;

#line 184 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10;

#line 187 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11[1];

#line 190 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11;

#line 193 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[7];

#line 196 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[1];

#line 199 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[1];

#line 202 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[3];

#line 205 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0[4];

#line 208 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_goal_path_step_0[12];

#line 211 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_path_step_0[12];

#line 214 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 217 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 220 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0;

#line 223 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1;

#line 226 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_value_ordered_maybe_cut_0[2];

#line 229 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[2];

#line 232 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0[2];

#line 235 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0;

#line 238 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[1];

#line 241 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1;

#line 244 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[1];

#line 247 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[1];

#line 250 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0[2];

#line 253 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[2];

#line 256 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[2];

#line 259 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0;

#line 262 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1[2];

#line 265 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1;

#line 268 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[1];

#line 271 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[1];

#line 274 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0[2];

#line 277 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[2];

#line 280 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[2];

#line 283 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0_10001(
#line 286 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 288 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 291 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0_10001(
#line 294 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 296 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 298 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 301 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001(
#line 304 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 306 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 309 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001(
#line 312 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 314 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 316 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 319 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001(
#line 322 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 324 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 327 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001(
#line 330 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 332 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 334 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 337 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001(
#line 340 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 342 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 344 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 347 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001(
#line 350 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 352 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2,
#line 354 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3,
#line 356 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_4);

#line 359 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001(
#line 362 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 364 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 367 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001(
#line 370 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 372 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 374 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 377 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0_10001(
#line 380 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 382 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 385 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0_10001(
#line 388 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 390 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 392 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 395 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0_10001(
#line 398 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 400 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 403 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0_10001(
#line 406 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 408 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 410 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 413 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0_10001(
#line 416 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 418 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 421 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0_10001(
#line 424 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 426 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 428 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 431 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001(
#line 434 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 436 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 439 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001(
#line 442 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 444 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 446 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 449 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001(
#line 452 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 454 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 457 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001(
#line 460 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 462 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 464 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 467 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0_10001(
#line 470 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 472 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 475 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0_10001(
#line 478 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 480 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 482 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 485 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001(
#line 488 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 490 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 493 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001(
#line 496 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 498 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 500 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 503 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001(
#line 506 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 508 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 511 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001(
#line 514 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 516 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 518 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 466 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__466__1_2_p_0(
#line 466 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__1_16,
#line 466 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__2_23);

#line 642 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(
#line 642 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 642 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2,
#line 642 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_3);

#line 617 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(
#line 617 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 617 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2,
#line 617 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_3);

#line 604 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(
#line 604 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 604 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2,
#line 604 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_3);

#line 593 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(
#line 593 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 593 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2,
#line 593 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_3);

#line 505 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(
#line 505 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1);

#line 493 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_to_strings_1_f_0(
#line 493 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1);

#line 439 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(
#line 439 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 439 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2);

#line 419 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_strings_2_p_0(
#line 419 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 419 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2);

#line 377 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_last_loop_3_p_0(
#line 377 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 377 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 377 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3);

#line 364 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(
#line 364 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__Head_1,
#line 364 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 364 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3,
#line 364 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__4_4);

#line 588 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1(
#line 588 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 588 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 588 "mdbcomp.goal_path.m"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2);

#line 466 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1(
#line 466 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 466 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 435 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1(
#line 435 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 435 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 435 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1(
#line 435 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 435 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 416 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1(
#line 416 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 416 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 416 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0_1(
#line 416 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 416 "mdbcomp.goal_path.m"
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



#line 799 "mdbcomp.goal_path.c"
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

#line 814 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

#line 820 "mdbcomp.goal_path.c"
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

#line 835 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

#line 840 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1
};

#line 845 "mdbcomp.goal_path.c"
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

#line 859 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

#line 865 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 871 "mdbcomp.goal_path.c"
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

#line 888 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 897 "mdbcomp.goal_path.c"
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

#line 914 "mdbcomp.goal_path.c"
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

#line 929 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 935 "mdbcomp.goal_path.c"
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

#line 950 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

#line 955 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1
};

#line 960 "mdbcomp.goal_path.c"
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

#line 974 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

#line 980 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 986 "mdbcomp.goal_path.c"
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

#line 1003 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1[1] = {
  (MR_Integer) 0
};

#line 1008 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1016 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1
  }
};

#line 1024 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 = {
  (MR_String) "goal_attr_array",
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1,
  NULL
};

#line 1031 "mdbcomp.goal_path.c"
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

#line 1048 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1057 "mdbcomp.goal_path.c"
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

#line 1074 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0[1] = {
  (MR_Integer) 0
};

#line 1079 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0 = {
  (MR_String) "goal_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1086 "mdbcomp.goal_path.c"
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

#line 1103 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1108 "mdbcomp.goal_path.c"
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

#line 1123 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1128 "mdbcomp.goal_path.c"
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

#line 1143 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0
};

#line 1149 "mdbcomp.goal_path.c"
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

#line 1164 "mdbcomp.goal_path.c"
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

#line 1179 "mdbcomp.goal_path.c"
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

#line 1194 "mdbcomp.goal_path.c"
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

#line 1209 "mdbcomp.goal_path.c"
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

#line 1224 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0
};

#line 1229 "mdbcomp.goal_path.c"
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

#line 1244 "mdbcomp.goal_path.c"
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

#line 1259 "mdbcomp.goal_path.c"
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

#line 1274 "mdbcomp.goal_path.c"
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

#line 1289 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1294 "mdbcomp.goal_path.c"
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

#line 1309 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[7] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10
};

#line 1320 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0
};

#line 1325 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1
};

#line 1330 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[3] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11
};

#line 1337 "mdbcomp.goal_path.c"
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

#line 1361 "mdbcomp.goal_path.c"
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

#line 1377 "mdbcomp.goal_path.c"
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

#line 1393 "mdbcomp.goal_path.c"
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

#line 1410 "mdbcomp.goal_path.c"
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

#line 1427 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1436 "mdbcomp.goal_path.c"
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

#line 1453 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1462 "mdbcomp.goal_path.c"
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

#line 1479 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0 = {
  (MR_String) "scope_is_cut",
  (MR_Integer) 0
};

#line 1485 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1 = {
  (MR_String) "scope_is_no_cut",
  (MR_Integer) 1
};

#line 1491 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_value_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

#line 1497 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

#line 1503 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1509 "mdbcomp.goal_path.c"
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

#line 1526 "mdbcomp.goal_path.c"
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

#line 1541 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1546 "mdbcomp.goal_path.c"
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

#line 1561 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

#line 1566 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1
};

#line 1571 "mdbcomp.goal_path.c"
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

#line 1585 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

#line 1591 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1597 "mdbcomp.goal_path.c"
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

#line 1614 "mdbcomp.goal_path.c"
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

#line 1629 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

#line 1635 "mdbcomp.goal_path.c"
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

#line 1650 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

#line 1655 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1
};

#line 1660 "mdbcomp.goal_path.c"
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

#line 1674 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

#line 1680 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1686 "mdbcomp.goal_path.c"
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

#line 1703 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0_10001(
#line 1706 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1708 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1710 "mdbcomp.goal_path.c"
{
#line 1712 "mdbcomp.goal_path.c"
  {
#line 1714 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1717 "mdbcomp.goal_path.c"
    {
#line 1719 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____containing_goal_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1722 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1724 "mdbcomp.goal_path.c"
  }
#line 1726 "mdbcomp.goal_path.c"
}

#line 1729 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0_10001(
#line 1732 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1734 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1736 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1738 "mdbcomp.goal_path.c"
{
#line 1740 "mdbcomp.goal_path.c"
  {
#line 1742 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1745 "mdbcomp.goal_path.c"
    {
#line 1747 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____containing_goal_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1750 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1752 "mdbcomp.goal_path.c"
  }
#line 1754 "mdbcomp.goal_path.c"
}

#line 1757 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001(
#line 1760 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1762 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1764 "mdbcomp.goal_path.c"
{
#line 1766 "mdbcomp.goal_path.c"
  {
#line 1768 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1771 "mdbcomp.goal_path.c"
    {
#line 1773 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____containing_goal_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1776 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1778 "mdbcomp.goal_path.c"
  }
#line 1780 "mdbcomp.goal_path.c"
}

#line 1783 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001(
#line 1786 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1788 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1790 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1792 "mdbcomp.goal_path.c"
{
#line 1794 "mdbcomp.goal_path.c"
  {
#line 1796 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1799 "mdbcomp.goal_path.c"
    {
#line 1801 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____containing_goal_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1804 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1806 "mdbcomp.goal_path.c"
  }
#line 1808 "mdbcomp.goal_path.c"
}

#line 1811 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001(
#line 1814 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1816 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1818 "mdbcomp.goal_path.c"
{
#line 1820 "mdbcomp.goal_path.c"
  {
#line 1822 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1825 "mdbcomp.goal_path.c"
    {
#line 1827 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1830 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1832 "mdbcomp.goal_path.c"
  }
#line 1834 "mdbcomp.goal_path.c"
}

#line 1837 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001(
#line 1840 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1842 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1844 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1846 "mdbcomp.goal_path.c"
{
#line 1848 "mdbcomp.goal_path.c"
  {
#line 1850 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1853 "mdbcomp.goal_path.c"
    {
#line 1855 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1858 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1860 "mdbcomp.goal_path.c"
  }
#line 1862 "mdbcomp.goal_path.c"
}

#line 1865 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001(
#line 1868 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1870 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1872 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1874 "mdbcomp.goal_path.c"
{
#line 1876 "mdbcomp.goal_path.c"
  {
#line 1878 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1881 "mdbcomp.goal_path.c"
    {
#line 1883 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_attr_array_1_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1886 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1888 "mdbcomp.goal_path.c"
  }
#line 1890 "mdbcomp.goal_path.c"
}

#line 1893 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001(
#line 1896 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1898 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2,
#line 1900 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3,
#line 1902 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_4)
#line 1904 "mdbcomp.goal_path.c"
{
#line 1906 "mdbcomp.goal_path.c"
  {
#line 1908 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1911 "mdbcomp.goal_path.c"
    {
#line 1913 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_attr_array_1_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), &mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_3), ((MR_Word) mdbcomp__goal_path__wrapper_arg_4));
    }
#line 1916 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_2 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1918 "mdbcomp.goal_path.c"
  }
#line 1920 "mdbcomp.goal_path.c"
}

#line 1923 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001(
#line 1926 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1928 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1930 "mdbcomp.goal_path.c"
{
#line 1932 "mdbcomp.goal_path.c"
  {
#line 1934 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1937 "mdbcomp.goal_path.c"
    {
#line 1939 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_forward_path_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1942 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1944 "mdbcomp.goal_path.c"
  }
#line 1946 "mdbcomp.goal_path.c"
}

#line 1949 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001(
#line 1952 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1954 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1956 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1958 "mdbcomp.goal_path.c"
{
#line 1960 "mdbcomp.goal_path.c"
  {
#line 1962 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1965 "mdbcomp.goal_path.c"
    {
#line 1967 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_forward_path_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1970 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1972 "mdbcomp.goal_path.c"
  }
#line 1974 "mdbcomp.goal_path.c"
}

#line 1977 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0_10001(
#line 1980 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1982 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1984 "mdbcomp.goal_path.c"
{
#line 1986 "mdbcomp.goal_path.c"
  {
#line 1988 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1991 "mdbcomp.goal_path.c"
    {
#line 1993 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_id_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1996 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1998 "mdbcomp.goal_path.c"
  }
#line 2000 "mdbcomp.goal_path.c"
}

#line 2003 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0_10001(
#line 2006 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2008 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2010 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2012 "mdbcomp.goal_path.c"
{
#line 2014 "mdbcomp.goal_path.c"
  {
#line 2016 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2019 "mdbcomp.goal_path.c"
    {
#line 2021 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_id_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2024 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2026 "mdbcomp.goal_path.c"
  }
#line 2028 "mdbcomp.goal_path.c"
}

#line 2031 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0_10001(
#line 2034 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2036 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2038 "mdbcomp.goal_path.c"
{
#line 2040 "mdbcomp.goal_path.c"
  {
#line 2042 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2045 "mdbcomp.goal_path.c"
    {
#line 2047 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2050 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2052 "mdbcomp.goal_path.c"
  }
#line 2054 "mdbcomp.goal_path.c"
}

#line 2057 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0_10001(
#line 2060 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2062 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2064 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2066 "mdbcomp.goal_path.c"
{
#line 2068 "mdbcomp.goal_path.c"
  {
#line 2070 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2073 "mdbcomp.goal_path.c"
    {
#line 2075 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_path_step_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2078 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2080 "mdbcomp.goal_path.c"
  }
#line 2082 "mdbcomp.goal_path.c"
}

#line 2085 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0_10001(
#line 2088 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2090 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2092 "mdbcomp.goal_path.c"
{
#line 2094 "mdbcomp.goal_path.c"
  {
#line 2096 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2099 "mdbcomp.goal_path.c"
    {
#line 2101 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_string_0_0(((MR_String) mdbcomp__goal_path__wrapper_arg_1), ((MR_String) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2104 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2106 "mdbcomp.goal_path.c"
  }
#line 2108 "mdbcomp.goal_path.c"
}

#line 2111 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0_10001(
#line 2114 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2116 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2118 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2120 "mdbcomp.goal_path.c"
{
#line 2122 "mdbcomp.goal_path.c"
  {
#line 2124 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2127 "mdbcomp.goal_path.c"
    {
#line 2129 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_path_string_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_String) mdbcomp__goal_path__wrapper_arg_2), ((MR_String) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2132 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2134 "mdbcomp.goal_path.c"
  }
#line 2136 "mdbcomp.goal_path.c"
}

#line 2139 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001(
#line 2142 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2144 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2146 "mdbcomp.goal_path.c"
{
#line 2148 "mdbcomp.goal_path.c"
  {
#line 2150 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2153 "mdbcomp.goal_path.c"
    {
#line 2155 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2158 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2160 "mdbcomp.goal_path.c"
  }
#line 2162 "mdbcomp.goal_path.c"
}

#line 2165 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001(
#line 2168 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2170 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2172 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2174 "mdbcomp.goal_path.c"
{
#line 2176 "mdbcomp.goal_path.c"
  {
#line 2178 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2181 "mdbcomp.goal_path.c"
    {
#line 2183 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2186 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2188 "mdbcomp.goal_path.c"
  }
#line 2190 "mdbcomp.goal_path.c"
}

#line 2193 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001(
#line 2196 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2198 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2200 "mdbcomp.goal_path.c"
{
#line 2202 "mdbcomp.goal_path.c"
  {
#line 2204 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2207 "mdbcomp.goal_path.c"
    {
#line 2209 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2212 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2214 "mdbcomp.goal_path.c"
  }
#line 2216 "mdbcomp.goal_path.c"
}

#line 2219 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001(
#line 2222 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2224 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2226 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2228 "mdbcomp.goal_path.c"
{
#line 2230 "mdbcomp.goal_path.c"
  {
#line 2232 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2235 "mdbcomp.goal_path.c"
    {
#line 2237 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2240 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2242 "mdbcomp.goal_path.c"
  }
#line 2244 "mdbcomp.goal_path.c"
}

#line 2247 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0_10001(
#line 2250 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2252 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2254 "mdbcomp.goal_path.c"
{
#line 2256 "mdbcomp.goal_path.c"
  {
#line 2258 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2261 "mdbcomp.goal_path.c"
    {
#line 2263 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_cut_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2266 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2268 "mdbcomp.goal_path.c"
  }
#line 2270 "mdbcomp.goal_path.c"
}

#line 2273 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0_10001(
#line 2276 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2278 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2280 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2282 "mdbcomp.goal_path.c"
{
#line 2284 "mdbcomp.goal_path.c"
  {
#line 2286 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2289 "mdbcomp.goal_path.c"
    {
#line 2291 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____maybe_cut_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2294 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2296 "mdbcomp.goal_path.c"
  }
#line 2298 "mdbcomp.goal_path.c"
}

#line 2301 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001(
#line 2304 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2306 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2308 "mdbcomp.goal_path.c"
{
#line 2310 "mdbcomp.goal_path.c"
  {
#line 2312 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2315 "mdbcomp.goal_path.c"
    {
#line 2317 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2320 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2322 "mdbcomp.goal_path.c"
  }
#line 2324 "mdbcomp.goal_path.c"
}

#line 2327 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001(
#line 2330 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2332 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2334 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2336 "mdbcomp.goal_path.c"
{
#line 2338 "mdbcomp.goal_path.c"
  {
#line 2340 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2343 "mdbcomp.goal_path.c"
    {
#line 2345 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2348 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2350 "mdbcomp.goal_path.c"
  }
#line 2352 "mdbcomp.goal_path.c"
}

#line 2355 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001(
#line 2358 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2360 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2362 "mdbcomp.goal_path.c"
{
#line 2364 "mdbcomp.goal_path.c"
  {
#line 2366 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2369 "mdbcomp.goal_path.c"
    {
#line 2371 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2374 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2376 "mdbcomp.goal_path.c"
  }
#line 2378 "mdbcomp.goal_path.c"
}

#line 2381 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001(
#line 2384 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2386 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2388 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2390 "mdbcomp.goal_path.c"
{
#line 2392 "mdbcomp.goal_path.c"
  {
#line 2394 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2397 "mdbcomp.goal_path.c"
    {
#line 2399 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2402 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2404 "mdbcomp.goal_path.c"
  }
#line 2406 "mdbcomp.goal_path.c"
}

#line 466 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__466__1_2_p_0(
#line 466 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__1_16,
#line 466 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__2_23)
#line 466 "mdbcomp.goal_path.m"
{
#line 466 "mdbcomp.goal_path.m"
  {
#line 466 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__1_16 == mdbcomp__goal_path__HeadVar__2_23);

#line 466 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 466 "mdbcomp.goal_path.m"
  }
#line 466 "mdbcomp.goal_path.m"
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
#line 2454 "mdbcomp.goal_path.c"
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
#line 2466 "mdbcomp.goal_path.c"
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
#line 2479 "mdbcomp.goal_path.c"
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
#line 2497 "mdbcomp.goal_path.c"
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
#line 2585 "mdbcomp.goal_path.c"
            {
#line 2587 "mdbcomp.goal_path.c"
              mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__goal_path__V_5_5, mdbcomp__goal_path__V_7_7);
            }
#line 71 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 2592 "mdbcomp.goal_path.c"
              {
#line 2594 "mdbcomp.goal_path.c"
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
#line 2632 "mdbcomp.goal_path.c"
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
#line 2644 "mdbcomp.goal_path.c"
        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "mdbcomp.goal_path.m"
    else
#line 93 "mdbcomp.goal_path.m"
      {
#line 93 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 93 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2655 "mdbcomp.goal_path.c"
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
#line 2736 "mdbcomp.goal_path.c"
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
#line 2790 "mdbcomp.goal_path.c"
  {
#line 2792 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__2_1 == mdbcomp__goal_path__HeadVar__2_2);

#line 2795 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2797 "mdbcomp.goal_path.c"
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
#line 248 "mdbcomp.goal_path.m"
      return;
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
      return mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[3], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
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
#line 249 "mdbcomp.goal_path.m"
      return;
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
      return mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[2], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
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
#line 3009 "mdbcomp.goal_path.c"
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
#line 3087 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3093 "mdbcomp.goal_path.c"
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
#line 3106 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3112 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3118 "mdbcomp.goal_path.c"
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
#line 3192 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3198 "mdbcomp.goal_path.c"
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
#line 3211 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3217 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3223 "mdbcomp.goal_path.c"
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
#line 3297 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3303 "mdbcomp.goal_path.c"
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
#line 3316 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3322 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3328 "mdbcomp.goal_path.c"
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
#line 3402 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3408 "mdbcomp.goal_path.c"
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
#line 3421 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3427 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3433 "mdbcomp.goal_path.c"
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
#line 3507 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3513 "mdbcomp.goal_path.c"
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
#line 3526 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3532 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3538 "mdbcomp.goal_path.c"
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
#line 3612 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3618 "mdbcomp.goal_path.c"
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
#line 3631 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3637 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3643 "mdbcomp.goal_path.c"
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
#line 3717 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3723 "mdbcomp.goal_path.c"
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
#line 3736 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3742 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3748 "mdbcomp.goal_path.c"
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
#line 3785 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 3791 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 3797 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 3:
#line 3803 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 4:
#line 3809 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 5:
#line 3815 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 6:
#line 3821 "mdbcomp.goal_path.c"
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
#line 77 "mdbcomp.goal_path.m"
                    return;
                  }
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 3849 "mdbcomp.goal_path.c"
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
#line 3862 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 3868 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 3874 "mdbcomp.goal_path.c"
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
#line 3909 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 3915 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 3921 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 3:
#line 3927 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 4:
#line 3933 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 5:
#line 3939 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 6:
#line 3945 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 3955 "mdbcomp.goal_path.c"
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
#line 77 "mdbcomp.goal_path.m"
                    return;
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
#line 3986 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 3992 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 3998 "mdbcomp.goal_path.c"
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
#line 4042 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4048 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4054 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 3:
#line 4060 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 4:
#line 4066 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 5:
#line 4072 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 6:
#line 4078 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 4088 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 4094 "mdbcomp.goal_path.c"
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
#line 4121 "mdbcomp.goal_path.c"
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
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4144 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4150 "mdbcomp.goal_path.c"
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
#line 4185 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4191 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4197 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 3:
#line 4203 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 4:
#line 4209 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 5:
#line 4215 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 6:
#line 4221 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 4231 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 4237 "mdbcomp.goal_path.c"
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
#line 4250 "mdbcomp.goal_path.c"
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
#line 77 "mdbcomp.goal_path.m"
                            return;
                          }
#line 77 "mdbcomp.goal_path.m"
                        }
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4278 "mdbcomp.goal_path.c"
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
#line 4313 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4319 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4325 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 3:
#line 4331 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 4:
#line 4337 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 5:
#line 4343 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 6:
#line 4349 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 4359 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 4365 "mdbcomp.goal_path.c"
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
#line 4378 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4384 "mdbcomp.goal_path.c"
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
#line 77 "mdbcomp.goal_path.m"
                            return;
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
#line 4591 "mdbcomp.goal_path.c"
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
#line 4616 "mdbcomp.goal_path.c"
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
#line 4654 "mdbcomp.goal_path.c"
                    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_7_7 == mdbcomp__goal_path__V_9_9);
#line 77 "mdbcomp.goal_path.m"
                    if (mdbcomp__goal_path__succeeded)
#line 4658 "mdbcomp.goal_path.c"
                      {
#line 4660 "mdbcomp.goal_path.c"
                        return mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(mdbcomp__goal_path__V_8_8, mdbcomp__goal_path__V_10_10);
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
#line 4686 "mdbcomp.goal_path.c"
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
#line 4711 "mdbcomp.goal_path.c"
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
#line 4756 "mdbcomp.goal_path.c"
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

#line 4814 "mdbcomp.goal_path.c"
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
#line 247 "mdbcomp.goal_path.m"
      return;
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
      return mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[1], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
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
#line 4913 "mdbcomp.goal_path.c"
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

#line 4926 "mdbcomp.goal_path.c"
        {
#line 4928 "mdbcomp.goal_path.c"
          mdbcomp__goal_path__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4930 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4932 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_8));
#line 4934 "mdbcomp.goal_path.c"
        }
#line 289 "mdbcomp.goal_path.m"
        {
#line 289 "mdbcomp.goal_path.m"
          mercury__array____Compare____array_1_0(mdbcomp__goal_path__TypeInfo_10_10, mdbcomp__goal_path__HeadVar__1_1, (MR_ArrayPtr) mdbcomp__goal_path__V_4_4, (MR_ArrayPtr) mdbcomp__goal_path__V_5_5);
#line 289 "mdbcomp.goal_path.m"
          return;
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

#line 4987 "mdbcomp.goal_path.c"
        {
#line 4989 "mdbcomp.goal_path.c"
          mdbcomp__goal_path__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4991 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4993 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_9_9, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_7));
#line 4995 "mdbcomp.goal_path.c"
        }
#line 4997 "mdbcomp.goal_path.c"
        {
#line 4999 "mdbcomp.goal_path.c"
          return mdbcomp__goal_path__succeeded = mercury__array____Unify____array_1_0(mdbcomp__goal_path__TypeInfo_9_9, (MR_ArrayPtr) mdbcomp__goal_path__V_3_3, (MR_ArrayPtr) mdbcomp__goal_path__V_4_4);
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
#line 5041 "mdbcomp.goal_path.c"
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
#line 5053 "mdbcomp.goal_path.c"
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
#line 5066 "mdbcomp.goal_path.c"
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
#line 5084 "mdbcomp.goal_path.c"
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
#line 5196 "mdbcomp.goal_path.c"
                {
#line 5198 "mdbcomp.goal_path.c"
                  mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__V_5_5, mdbcomp__goal_path__V_7_7);
                }
#line 67 "mdbcomp.goal_path.m"
                if (mdbcomp__goal_path__succeeded)
#line 5203 "mdbcomp.goal_path.c"
                  {
#line 5205 "mdbcomp.goal_path.c"
                    /* direct tailcall eliminated */
#line 5207 "mdbcomp.goal_path.c"
                    {
#line 5209 "mdbcomp.goal_path.c"
                      MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__V_6_6;
#line 5211 "mdbcomp.goal_path.c"
                      MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__V_8_8;

#line 5214 "mdbcomp.goal_path.c"
                      mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 5216 "mdbcomp.goal_path.c"
                      mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 5218 "mdbcomp.goal_path.c"
                    }
#line 5220 "mdbcomp.goal_path.c"
                    continue;
#line 5222 "mdbcomp.goal_path.c"
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
#line 246 "mdbcomp.goal_path.m"
      return;
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
      return mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[0], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
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
#line 5325 "mdbcomp.goal_path.c"
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
#line 5337 "mdbcomp.goal_path.c"
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
#line 5350 "mdbcomp.goal_path.c"
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
#line 5372 "mdbcomp.goal_path.c"
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
#line 235 "mdbcomp.goal_path.m"
                return;
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

#line 5483 "mdbcomp.goal_path.c"
                mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_11_11 == mdbcomp__goal_path__V_12_12);
#line 62 "mdbcomp.goal_path.m"
              }
#line 235 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 5489 "mdbcomp.goal_path.c"
              {
#line 5491 "mdbcomp.goal_path.c"
                return mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__V_6_6, mdbcomp__goal_path__V_8_8);
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

#line 642 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(
#line 642 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 642 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2,
#line 642 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_3)
#line 642 "mdbcomp.goal_path.m"
{
#line 647 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 647 "mdbcomp.goal_path.m"
    {
#line 647 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 647 "mdbcomp.goal_path.m"
      {
#line 647 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 647 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_3 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2;
#line 647 "mdbcomp.goal_path.m"
        else
#line 648 "mdbcomp.goal_path.m"
          {
#line 648 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 648 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 648 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 0)));
#line 648 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__ContainingGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 1)));
#line 648 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalReversePath_12;
#line 648 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_18_18;

#line 653 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__ContainingGoal_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 653 "mdbcomp.goal_path.m"
            else
#line 654 "mdbcomp.goal_path.m"
              {
#line 654 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 0)));
#line 654 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__Step_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 1)));
#line 654 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalReversePath_15;
#line 655 "mdbcomp.goal_path.m"
                MR_Box mdbcomp__goal_path__conv0_ContainingGoalReversePath_15;

#line 655 "mdbcomp.goal_path.m"
                {
#line 655 "mdbcomp.goal_path.m"
                  mercury__bimap__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2, ((MR_Box) (mdbcomp__goal_path__ContainingGoalId_13)), &mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
                }
#line 655 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__ContainingGoalReversePath_15 = ((MR_Word) mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
#line 657 "mdbcomp.goal_path.m"
                {
#line 657 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 0) = ((MR_Box) (mdbcomp__goal_path__ContainingGoalReversePath_15));
#line 657 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 1) = ((MR_Box) (mdbcomp__goal_path__Step_14));
#line 657 "mdbcomp.goal_path.m"
                }
#line 654 "mdbcomp.goal_path.m"
              }
#line 659 "mdbcomp.goal_path.m"
            {
#line 659 "mdbcomp.goal_path.m"
              mercury__bimap__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, ((MR_Box) (mdbcomp__goal_path__GoalId_10)), ((MR_Box) (mdbcomp__goal_path__GoalReversePath_12)), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2, &mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_18_18);
            }
#line 660 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 660 "mdbcomp.goal_path.m"
            {
#line 660 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__Tail_8;
#line 660 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_18_18;

#line 660 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0__tmp_copy_2;
#line 660 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 660 "mdbcomp.goal_path.m"
            }
#line 660 "mdbcomp.goal_path.m"
            continue;
#line 648 "mdbcomp.goal_path.m"
          }
#line 647 "mdbcomp.goal_path.m"
      }
#line 647 "mdbcomp.goal_path.m"
      break;
#line 647 "mdbcomp.goal_path.m"
    }
#line 642 "mdbcomp.goal_path.m"
}

#line 617 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(
#line 617 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 617 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2,
#line 617 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_3)
#line 617 "mdbcomp.goal_path.m"
{
#line 622 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 622 "mdbcomp.goal_path.m"
    {
#line 622 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 622 "mdbcomp.goal_path.m"
      {
#line 622 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 622 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_3 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2;
#line 622 "mdbcomp.goal_path.m"
        else
#line 623 "mdbcomp.goal_path.m"
          {
#line 623 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 623 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 623 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 0)));
#line 623 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__ContainingGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 1)));
#line 623 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalReversePath_12;
#line 623 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_18_18;

#line 628 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__ContainingGoal_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 627 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 628 "mdbcomp.goal_path.m"
            else
#line 629 "mdbcomp.goal_path.m"
              {
#line 629 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 0)));
#line 629 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__Step_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 1)));
#line 629 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalReversePath_15;
#line 630 "mdbcomp.goal_path.m"
                MR_Box mdbcomp__goal_path__conv0_ContainingGoalReversePath_15;

#line 630 "mdbcomp.goal_path.m"
                {
#line 630 "mdbcomp.goal_path.m"
                  mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2, ((MR_Box) (mdbcomp__goal_path__ContainingGoalId_13)), &mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
                }
#line 630 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__ContainingGoalReversePath_15 = ((MR_Word) mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
#line 632 "mdbcomp.goal_path.m"
                {
#line 632 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 0) = ((MR_Box) (mdbcomp__goal_path__ContainingGoalReversePath_15));
#line 632 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 1) = ((MR_Box) (mdbcomp__goal_path__Step_14));
#line 632 "mdbcomp.goal_path.m"
                }
#line 629 "mdbcomp.goal_path.m"
              }
#line 634 "mdbcomp.goal_path.m"
            {
#line 634 "mdbcomp.goal_path.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, ((MR_Box) (mdbcomp__goal_path__GoalId_10)), ((MR_Box) (mdbcomp__goal_path__GoalReversePath_12)), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2, &mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_18_18);
            }
#line 635 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 635 "mdbcomp.goal_path.m"
            {
#line 635 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__Tail_8;
#line 635 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_18_18;

#line 635 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0__tmp_copy_2;
#line 635 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 635 "mdbcomp.goal_path.m"
            }
#line 635 "mdbcomp.goal_path.m"
            continue;
#line 623 "mdbcomp.goal_path.m"
          }
#line 622 "mdbcomp.goal_path.m"
      }
#line 622 "mdbcomp.goal_path.m"
      break;
#line 622 "mdbcomp.goal_path.m"
    }
#line 617 "mdbcomp.goal_path.m"
}

#line 604 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(
#line 604 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 604 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2,
#line 604 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_3)
#line 604 "mdbcomp.goal_path.m"
{
#line 607 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 607 "mdbcomp.goal_path.m"
    {
#line 607 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 607 "mdbcomp.goal_path.m"
      {
#line 607 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 607 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_3 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2;
#line 607 "mdbcomp.goal_path.m"
        else
#line 608 "mdbcomp.goal_path.m"
          {
#line 608 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__FirstStep_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 608 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__LaterSteps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 608 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12;

#line 609 "mdbcomp.goal_path.m"
            {
#line 609 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12, 0) = ((MR_Box) (mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2));
#line 609 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__FirstStep_7));
#line 609 "mdbcomp.goal_path.m"
            }
#line 610 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 610 "mdbcomp.goal_path.m"
            {
#line 610 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__LaterSteps_8;
#line 610 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12;

#line 610 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0__tmp_copy_2;
#line 610 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 610 "mdbcomp.goal_path.m"
            }
#line 610 "mdbcomp.goal_path.m"
            continue;
#line 608 "mdbcomp.goal_path.m"
          }
#line 607 "mdbcomp.goal_path.m"
      }
#line 607 "mdbcomp.goal_path.m"
      break;
#line 607 "mdbcomp.goal_path.m"
    }
#line 604 "mdbcomp.goal_path.m"
}

#line 593 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(
#line 593 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 593 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2,
#line 593 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_3)
#line 593 "mdbcomp.goal_path.m"
{
#line 596 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 596 "mdbcomp.goal_path.m"
    {
#line 596 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 596 "mdbcomp.goal_path.m"
      {
#line 596 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 596 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 596 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_3 = mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2;
#line 596 "mdbcomp.goal_path.m"
        else
#line 597 "mdbcomp.goal_path.m"
          {
#line 597 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__EarlierSteps_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 597 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__LastStep_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 597 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12;

#line 598 "mdbcomp.goal_path.m"
            {
#line 598 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 598 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12, 0) = ((MR_Box) (mdbcomp__goal_path__LastStep_8));
#line 598 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2));
#line 598 "mdbcomp.goal_path.m"
            }
#line 599 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 599 "mdbcomp.goal_path.m"
            {
#line 599 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__EarlierSteps_7;
#line 599 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12;

#line 599 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0__tmp_copy_2;
#line 599 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 599 "mdbcomp.goal_path.m"
            }
#line 599 "mdbcomp.goal_path.m"
            continue;
#line 597 "mdbcomp.goal_path.m"
          }
#line 596 "mdbcomp.goal_path.m"
      }
#line 596 "mdbcomp.goal_path.m"
      break;
#line 596 "mdbcomp.goal_path.m"
    }
#line 593 "mdbcomp.goal_path.m"
}

#line 505 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(
#line 505 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1)
#line 505 "mdbcomp.goal_path.m"
{
#line 507 "mdbcomp.goal_path.m"
  {
#line 507 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 507 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__2_2;

#line 507 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 507 "mdbcomp.goal_path.m"
    else
#line 508 "mdbcomp.goal_path.m"
      {
#line 508 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 508 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 508 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_5;
#line 508 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_6;

#line 514 "mdbcomp.goal_path.m"
#line 514 "mdbcomp.goal_path.m"
        switch (MR_tag((MR_Word) mdbcomp__goal_path__Step_4)) {
#line 514 "mdbcomp.goal_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 514 "mdbcomp.goal_path.m"
          case (MR_Integer) 0:
#line 514 "mdbcomp.goal_path.m"
#line 514 "mdbcomp.goal_path.m"
            switch (MR_unmkbody(mdbcomp__goal_path__Step_4)) {
#line 514 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 520 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "\?;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 521 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "t;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 522 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "e;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 3:
#line 523 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "~;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 4:
#line 527 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "=;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 5:
#line 526 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "r;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 6:
#line 528 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "a;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
            }
#line 514 "mdbcomp.goal_path.m"
            break;
#line 514 "mdbcomp.goal_path.m"
          case (MR_Integer) 1:
#line 514 "mdbcomp.goal_path.m"
            {
#line 514 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__Step_4, (MR_Integer) 0)));
#line 514 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_9_9;
#line 514 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_10_10;

#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_10_10 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_7);
              }
#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_9_9 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_10_10, (MR_String) ";");
              }
#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "c", mdbcomp__goal_path__V_9_9);
              }
#line 514 "mdbcomp.goal_path.m"
            }
#line 514 "mdbcomp.goal_path.m"
            break;
#line 514 "mdbcomp.goal_path.m"
          case (MR_Integer) 2:
#line 515 "mdbcomp.goal_path.m"
            {
#line 515 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__Step_4, (MR_Integer) 0)));
#line 515 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_14_14;
#line 515 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_15_15;

#line 515 "mdbcomp.goal_path.m"
              {
#line 515 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_15_15 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_12);
              }
#line 515 "mdbcomp.goal_path.m"
              {
#line 515 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_14_14 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_15_15, (MR_String) ";");
              }
#line 515 "mdbcomp.goal_path.m"
              {
#line 515 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "d", mdbcomp__goal_path__V_14_14);
              }
#line 515 "mdbcomp.goal_path.m"
            }
#line 514 "mdbcomp.goal_path.m"
            break;
#line 514 "mdbcomp.goal_path.m"
          case (MR_Integer) 3:
#line 514 "mdbcomp.goal_path.m"
#line 514 "mdbcomp.goal_path.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 0)))) {
#line 514 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 514 "mdbcomp.goal_path.m"
                {
#line 514 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 2)));
#line 514 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 1)));

#line 514 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "mdbcomp.goal_path.m"
                    {
#line 518 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_31_31;
#line 518 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_32_32;

#line 519 "mdbcomp.goal_path.m"
                      {
#line 519 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_32_32 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                      }
#line 519 "mdbcomp.goal_path.m"
                      {
#line 519 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_31_31 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_32_32, (MR_String) "-na;");
                      }
#line 519 "mdbcomp.goal_path.m"
                      {
#line 519 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_31_31);
                      }
#line 518 "mdbcomp.goal_path.m"
                    }
#line 514 "mdbcomp.goal_path.m"
                  else
#line 516 "mdbcomp.goal_path.m"
                    {
#line 516 "mdbcomp.goal_path.m"
                      MR_Integer mdbcomp__goal_path__M_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_42_42, (MR_Integer) 0)));
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_21_21;
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_22_22;
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_23_23;
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_25_25;
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_26_26;

#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_22_22 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_26_26 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__M_18);
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_26_26, (MR_String) ";");
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdbcomp__goal_path__V_25_25);
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_21_21 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_22_22, mdbcomp__goal_path__V_23_23);
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_21_21);
                      }
#line 516 "mdbcomp.goal_path.m"
                    }
#line 514 "mdbcomp.goal_path.m"
                }
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 514 "mdbcomp.goal_path.m"
                {
#line 514 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 1)));

#line 514 "mdbcomp.goal_path.m"
#line 514 "mdbcomp.goal_path.m"
                  switch (mdbcomp__goal_path__V_41_41) {
#line 514 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 514 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 524 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "q!;";
#line 514 "mdbcomp.goal_path.m"
                      break;
#line 514 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 525 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "q;";
#line 514 "mdbcomp.goal_path.m"
                      break;
#line 514 "mdbcomp.goal_path.m"
                  }
#line 514 "mdbcomp.goal_path.m"
                }
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 529 "mdbcomp.goal_path.m"
                {
#line 529 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__N_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 1)));
#line 529 "mdbcomp.goal_path.m"
                  MR_String mdbcomp__goal_path__V_38_38;
#line 529 "mdbcomp.goal_path.m"
                  MR_String mdbcomp__goal_path__V_39_39;

#line 530 "mdbcomp.goal_path.m"
                  {
#line 530 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_39_39 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_36);
                  }
#line 530 "mdbcomp.goal_path.m"
                  {
#line 530 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_38_38 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_39_39, (MR_String) ";");
                  }
#line 530 "mdbcomp.goal_path.m"
                  {
#line 530 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "o", mdbcomp__goal_path__V_38_38);
                  }
#line 529 "mdbcomp.goal_path.m"
                }
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
            }
#line 514 "mdbcomp.goal_path.m"
            break;
#line 514 "mdbcomp.goal_path.m"
        }
#line 510 "mdbcomp.goal_path.m"
        {
#line 510 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__Strs_6 = mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(mdbcomp__goal_path__Steps_3);
        }
#line 508 "mdbcomp.goal_path.m"
        {
#line 508 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__goal_path__Str_5));
#line 508 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 1) = ((MR_Box) (mdbcomp__goal_path__Strs_6));
#line 508 "mdbcomp.goal_path.m"
        }
#line 508 "mdbcomp.goal_path.m"
      }
#line 507 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__2_2;
#line 507 "mdbcomp.goal_path.m"
  }
#line 505 "mdbcomp.goal_path.m"
}

#line 493 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_to_strings_1_f_0(
#line 493 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1)
#line 493 "mdbcomp.goal_path.m"
{
#line 495 "mdbcomp.goal_path.m"
  {
#line 495 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 495 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__2_2;

#line 495 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "mdbcomp.goal_path.m"
    else
#line 496 "mdbcomp.goal_path.m"
      {
#line 496 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 496 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 496 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_5;
#line 496 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_6;

#line 514 "mdbcomp.goal_path.m"
#line 514 "mdbcomp.goal_path.m"
        switch (MR_tag((MR_Word) mdbcomp__goal_path__Step_3)) {
#line 514 "mdbcomp.goal_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 514 "mdbcomp.goal_path.m"
          case (MR_Integer) 0:
#line 514 "mdbcomp.goal_path.m"
#line 514 "mdbcomp.goal_path.m"
            switch (MR_unmkbody(mdbcomp__goal_path__Step_3)) {
#line 514 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 520 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "\?;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 521 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "t;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 522 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "e;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 3:
#line 523 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "~;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 4:
#line 527 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "=;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 5:
#line 526 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "r;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 6:
#line 528 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "a;";
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
            }
#line 514 "mdbcomp.goal_path.m"
            break;
#line 514 "mdbcomp.goal_path.m"
          case (MR_Integer) 1:
#line 514 "mdbcomp.goal_path.m"
            {
#line 514 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__Step_3, (MR_Integer) 0)));
#line 514 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_9_9;
#line 514 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_10_10;

#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_10_10 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_7);
              }
#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_9_9 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_10_10, (MR_String) ";");
              }
#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "c", mdbcomp__goal_path__V_9_9);
              }
#line 514 "mdbcomp.goal_path.m"
            }
#line 514 "mdbcomp.goal_path.m"
            break;
#line 514 "mdbcomp.goal_path.m"
          case (MR_Integer) 2:
#line 515 "mdbcomp.goal_path.m"
            {
#line 515 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__Step_3, (MR_Integer) 0)));
#line 515 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_14_14;
#line 515 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_15_15;

#line 515 "mdbcomp.goal_path.m"
              {
#line 515 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_15_15 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_12);
              }
#line 515 "mdbcomp.goal_path.m"
              {
#line 515 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_14_14 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_15_15, (MR_String) ";");
              }
#line 515 "mdbcomp.goal_path.m"
              {
#line 515 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "d", mdbcomp__goal_path__V_14_14);
              }
#line 515 "mdbcomp.goal_path.m"
            }
#line 514 "mdbcomp.goal_path.m"
            break;
#line 514 "mdbcomp.goal_path.m"
          case (MR_Integer) 3:
#line 514 "mdbcomp.goal_path.m"
#line 514 "mdbcomp.goal_path.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 0)))) {
#line 514 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 514 "mdbcomp.goal_path.m"
                {
#line 514 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 2)));
#line 514 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 1)));

#line 514 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 518 "mdbcomp.goal_path.m"
                    {
#line 518 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_31_31;
#line 518 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_32_32;

#line 519 "mdbcomp.goal_path.m"
                      {
#line 519 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_32_32 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                      }
#line 519 "mdbcomp.goal_path.m"
                      {
#line 519 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_31_31 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_32_32, (MR_String) "-na;");
                      }
#line 519 "mdbcomp.goal_path.m"
                      {
#line 519 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_31_31);
                      }
#line 518 "mdbcomp.goal_path.m"
                    }
#line 514 "mdbcomp.goal_path.m"
                  else
#line 516 "mdbcomp.goal_path.m"
                    {
#line 516 "mdbcomp.goal_path.m"
                      MR_Integer mdbcomp__goal_path__M_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_42_42, (MR_Integer) 0)));
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_21_21;
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_22_22;
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_23_23;
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_25_25;
#line 516 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_26_26;

#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_22_22 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_26_26 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__M_18);
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_26_26, (MR_String) ";");
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdbcomp__goal_path__V_25_25);
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_21_21 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_22_22, mdbcomp__goal_path__V_23_23);
                      }
#line 517 "mdbcomp.goal_path.m"
                      {
#line 517 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_21_21);
                      }
#line 516 "mdbcomp.goal_path.m"
                    }
#line 514 "mdbcomp.goal_path.m"
                }
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 514 "mdbcomp.goal_path.m"
                {
#line 514 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 1)));

#line 514 "mdbcomp.goal_path.m"
#line 514 "mdbcomp.goal_path.m"
                  switch (mdbcomp__goal_path__V_41_41) {
#line 514 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 514 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 524 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "q!;";
#line 514 "mdbcomp.goal_path.m"
                      break;
#line 514 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 525 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "q;";
#line 514 "mdbcomp.goal_path.m"
                      break;
#line 514 "mdbcomp.goal_path.m"
                  }
#line 514 "mdbcomp.goal_path.m"
                }
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 529 "mdbcomp.goal_path.m"
                {
#line 529 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__N_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 1)));
#line 529 "mdbcomp.goal_path.m"
                  MR_String mdbcomp__goal_path__V_38_38;
#line 529 "mdbcomp.goal_path.m"
                  MR_String mdbcomp__goal_path__V_39_39;

#line 530 "mdbcomp.goal_path.m"
                  {
#line 530 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_39_39 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_36);
                  }
#line 530 "mdbcomp.goal_path.m"
                  {
#line 530 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_38_38 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_39_39, (MR_String) ";");
                  }
#line 530 "mdbcomp.goal_path.m"
                  {
#line 530 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "o", mdbcomp__goal_path__V_38_38);
                  }
#line 529 "mdbcomp.goal_path.m"
                }
#line 514 "mdbcomp.goal_path.m"
                break;
#line 514 "mdbcomp.goal_path.m"
            }
#line 514 "mdbcomp.goal_path.m"
            break;
#line 514 "mdbcomp.goal_path.m"
        }
#line 498 "mdbcomp.goal_path.m"
        {
#line 498 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__Strs_6 = mdbcomp__goal_path__goal_path_to_strings_1_f_0(mdbcomp__goal_path__Steps_4);
        }
#line 496 "mdbcomp.goal_path.m"
        {
#line 496 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__goal_path__Str_5));
#line 496 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 1) = ((MR_Box) (mdbcomp__goal_path__Strs_6));
#line 496 "mdbcomp.goal_path.m"
        }
#line 496 "mdbcomp.goal_path.m"
      }
#line 495 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__2_2;
#line 495 "mdbcomp.goal_path.m"
  }
#line 493 "mdbcomp.goal_path.m"
}

#line 439 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(
#line 439 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 439 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2)
#line 439 "mdbcomp.goal_path.m"
{
#line 442 "mdbcomp.goal_path.m"
  {
#line 442 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 442 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "mdbcomp.goal_path.m"
      {
#line 442 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 442 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 442 "mdbcomp.goal_path.m"
      }
#line 442 "mdbcomp.goal_path.m"
    else
#line 443 "mdbcomp.goal_path.m"
      {
#line 443 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 443 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 443 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__HeadSteps_5;
#line 443 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TailStep_6;

#line 444 "mdbcomp.goal_path.m"
        {
#line 444 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(mdbcomp__goal_path__Strs_4, &mdbcomp__goal_path__HeadSteps_5);
        }
#line 443 "mdbcomp.goal_path.m"
        if (mdbcomp__goal_path__succeeded)
#line 443 "mdbcomp.goal_path.m"
          {
#line 445 "mdbcomp.goal_path.m"
            {
#line 445 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_step_from_string_2_p_0(mdbcomp__goal_path__Str_3, &mdbcomp__goal_path__TailStep_6);
            }
#line 443 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 443 "mdbcomp.goal_path.m"
              {
#line 443 "mdbcomp.goal_path.m"
                {
#line 443 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 443 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__2_2 = base;
#line 443 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__HeadSteps_5));
#line 443 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__TailStep_6));
#line 443 "mdbcomp.goal_path.m"
                }
#line 443 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 443 "mdbcomp.goal_path.m"
              }
#line 443 "mdbcomp.goal_path.m"
          }
#line 443 "mdbcomp.goal_path.m"
      }
#line 442 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 442 "mdbcomp.goal_path.m"
  }
#line 439 "mdbcomp.goal_path.m"
}

#line 419 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_strings_2_p_0(
#line 419 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 419 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2)
#line 419 "mdbcomp.goal_path.m"
{
#line 422 "mdbcomp.goal_path.m"
  {
#line 422 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 422 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 422 "mdbcomp.goal_path.m"
      {
#line 422 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 422 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 422 "mdbcomp.goal_path.m"
      }
#line 422 "mdbcomp.goal_path.m"
    else
#line 423 "mdbcomp.goal_path.m"
      {
#line 423 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 423 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 423 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__HeadStep_5;
#line 423 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__LaterSteps_6;

#line 424 "mdbcomp.goal_path.m"
        {
#line 424 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_step_from_string_2_p_0(mdbcomp__goal_path__Str_3, &mdbcomp__goal_path__HeadStep_5);
        }
#line 423 "mdbcomp.goal_path.m"
        if (mdbcomp__goal_path__succeeded)
#line 423 "mdbcomp.goal_path.m"
          {
#line 425 "mdbcomp.goal_path.m"
            {
#line 425 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(mdbcomp__goal_path__Strs_4, &mdbcomp__goal_path__LaterSteps_6);
            }
#line 423 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 423 "mdbcomp.goal_path.m"
              {
#line 423 "mdbcomp.goal_path.m"
                {
#line 423 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 423 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__2_2 = base;
#line 423 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__HeadStep_5));
#line 423 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__LaterSteps_6));
#line 423 "mdbcomp.goal_path.m"
                }
#line 423 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 423 "mdbcomp.goal_path.m"
              }
#line 423 "mdbcomp.goal_path.m"
          }
#line 423 "mdbcomp.goal_path.m"
      }
#line 422 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 422 "mdbcomp.goal_path.m"
  }
#line 419 "mdbcomp.goal_path.m"
}

#line 377 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_last_loop_3_p_0(
#line 377 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 377 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 377 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3)
#line 377 "mdbcomp.goal_path.m"
{
#line 380 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 380 "mdbcomp.goal_path.m"
    {
#line 380 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 380 "mdbcomp.goal_path.m"
      {
#line 380 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 380 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__3_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 380 "mdbcomp.goal_path.m"
        else
#line 381 "mdbcomp.goal_path.m"
          {
#line 381 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__TailHead_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 381 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__TailTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 382 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 382 "mdbcomp.goal_path.m"
            {
#line 382 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__TailHead_6;
#line 382 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__TailTail_7;

#line 382 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 382 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 382 "mdbcomp.goal_path.m"
            }
#line 382 "mdbcomp.goal_path.m"
            continue;
#line 381 "mdbcomp.goal_path.m"
          }
#line 380 "mdbcomp.goal_path.m"
      }
#line 380 "mdbcomp.goal_path.m"
      break;
#line 380 "mdbcomp.goal_path.m"
    }
#line 377 "mdbcomp.goal_path.m"
}

#line 364 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(
#line 364 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__Head_1,
#line 364 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 364 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3,
#line 364 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__4_4)
#line 364 "mdbcomp.goal_path.m"
{
#line 367 "mdbcomp.goal_path.m"
  {
#line 367 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 367 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "mdbcomp.goal_path.m"
      {
#line 367 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 367 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__4_4 = mdbcomp__goal_path__Head_1;
#line 367 "mdbcomp.goal_path.m"
      }
#line 367 "mdbcomp.goal_path.m"
    else
#line 369 "mdbcomp.goal_path.m"
      {
#line 369 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TailHead_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 369 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TailTail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 369 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__AllButLastGoalPath0_11;

#line 370 "mdbcomp.goal_path.m"
        {
#line 370 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(mdbcomp__goal_path__TailHead_7, mdbcomp__goal_path__TailTail_8, &mdbcomp__goal_path__AllButLastGoalPath0_11, mdbcomp__goal_path__HeadVar__4_4);
        }
#line 372 "mdbcomp.goal_path.m"
        {
#line 372 "mdbcomp.goal_path.m"
          MR_Word base;
#line 372 "mdbcomp.goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__3_3 = base;
#line 372 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__Head_1));
#line 372 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__AllButLastGoalPath0_11));
#line 372 "mdbcomp.goal_path.m"
        }
#line 369 "mdbcomp.goal_path.m"
      }
#line 367 "mdbcomp.goal_path.m"
  }
#line 364 "mdbcomp.goal_path.m"
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
#line 674 "mdbcomp.goal_path.m"
  {
#line 674 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 674 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__Attr_6;
#line 674 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_13_13;
#line 674 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__Array_4 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__1_1;
#line 674 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__Index_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 674 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__MaybeAttr_7;
#line 675 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__conv0_MaybeAttr_7;

#line 6871 "mdbcomp.goal_path.c"
    {
#line 6873 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6875 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6877 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_13_13, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_11));
#line 6879 "mdbcomp.goal_path.c"
    }
#line 675 "mdbcomp.goal_path.m"
    {
#line 675 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__conv0_MaybeAttr_7 = mercury__array__lookup_2_f_0(mdbcomp__goal_path__TypeInfo_13_13, (MR_ArrayPtr) mdbcomp__goal_path__Array_4, mdbcomp__goal_path__Index_5);
    }
#line 675 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__MaybeAttr_7 = ((MR_Word) mdbcomp__goal_path__conv0_MaybeAttr_7);
#line 678 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__MaybeAttr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 679 "mdbcomp.goal_path.m"
      {
#line 680 "mdbcomp.goal_path.m"
        {
#line 680 "mdbcomp.goal_path.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.goal_path", (MR_String) "function \140mdbcomp.goal_path.get_goal_attribute_det\'/2", (MR_String) "Goal attribute array slot empty");
        }
#line 679 "mdbcomp.goal_path.m"
      }
#line 678 "mdbcomp.goal_path.m"
    else
#line 677 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__Attr_6 = (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__MaybeAttr_7, (MR_Integer) 0));
#line 674 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__Attr_6;
#line 674 "mdbcomp.goal_path.m"
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
#line 671 "mdbcomp.goal_path.m"
  {
#line 671 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 671 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_14_14;
#line 671 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__Index_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 671 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__STATE_VARIABLE_Array_0_8 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__3_3;
#line 671 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__STATE_VARIABLE_Array_9;
#line 671 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_10_10;
#line 672 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__conv0_STATE_VARIABLE_Array_9;

#line 672 "mdbcomp.goal_path.m"
    {
#line 672 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 672 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_10_10, 0) = mdbcomp__goal_path__Value_6;
#line 672 "mdbcomp.goal_path.m"
    }
#line 6950 "mdbcomp.goal_path.c"
    {
#line 6952 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6954 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6956 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_14_14, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_12));
#line 6958 "mdbcomp.goal_path.c"
    }
#line 672 "mdbcomp.goal_path.m"
    {
#line 672 "mdbcomp.goal_path.m"
      mercury__array__set_4_p_0(mdbcomp__goal_path__TypeInfo_14_14, mdbcomp__goal_path__Index_5, ((MR_Box) (mdbcomp__goal_path__V_10_10)), (MR_ArrayPtr) mdbcomp__goal_path__STATE_VARIABLE_Array_0_8, &mdbcomp__goal_path__conv0_STATE_VARIABLE_Array_9);
    }
#line 672 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__STATE_VARIABLE_Array_9 = (MR_ArrayPtr) mdbcomp__goal_path__conv0_STATE_VARIABLE_Array_9;
#line 671 "mdbcomp.goal_path.m"
    *mdbcomp__goal_path__HeadVar__4_4 = (MR_Word) mdbcomp__goal_path__STATE_VARIABLE_Array_9;
#line 671 "mdbcomp.goal_path.m"
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
#line 667 "mdbcomp.goal_path.m"
  {
#line 667 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 667 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__3_3;
#line 667 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_12_12;
#line 667 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__LastGoalIdNum_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 667 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__V_6_6;
#line 667 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__V_7_7;
#line 667 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_9_9;
#line 668 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__conv0_V_6_6;

#line 7004 "mdbcomp.goal_path.c"
    {
#line 7006 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7008 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 7010 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_10));
#line 7012 "mdbcomp.goal_path.c"
    }
#line 668 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_7_7 = (mdbcomp__goal_path__LastGoalIdNum_4 + (MR_Integer) 1);
#line 668 "mdbcomp.goal_path.m"
    {
#line 668 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 668 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_9_9, 0) = mdbcomp__goal_path__Default_5;
#line 668 "mdbcomp.goal_path.m"
    }
#line 668 "mdbcomp.goal_path.m"
    {
#line 668 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__conv0_V_6_6 = mercury__array__init_2_f_0(mdbcomp__goal_path__TypeInfo_12_12, mdbcomp__goal_path__V_7_7, ((MR_Box) (mdbcomp__goal_path__V_9_9)));
    }
#line 668 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_6_6 = (MR_ArrayPtr) mdbcomp__goal_path__conv0_V_6_6;
#line 668 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) mdbcomp__goal_path__V_6_6;
#line 667 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__3_3;
#line 667 "mdbcomp.goal_path.m"
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
#line 664 "mdbcomp.goal_path.m"
  {
#line 664 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 664 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__2_2;
#line 664 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_10_10;
#line 664 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__LastGoalIdNum_3 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 664 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__V_4_4;
#line 664 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__V_5_5;
#line 665 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__conv0_V_4_4;

#line 7066 "mdbcomp.goal_path.c"
    {
#line 7068 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7070 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 7072 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_8));
#line 7074 "mdbcomp.goal_path.c"
    }
#line 665 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_5_5 = (mdbcomp__goal_path__LastGoalIdNum_3 + (MR_Integer) 1);
#line 665 "mdbcomp.goal_path.m"
    {
#line 665 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__conv0_V_4_4 = mercury__array__init_2_f_0(mdbcomp__goal_path__TypeInfo_10_10, mdbcomp__goal_path__V_5_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 665 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_4_4 = (MR_ArrayPtr) mdbcomp__goal_path__conv0_V_4_4;
#line 665 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) mdbcomp__goal_path__V_4_4;
#line 664 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__2_2;
#line 664 "mdbcomp.goal_path.m"
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
#line 637 "mdbcomp.goal_path.m"
  {
#line 637 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 637 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ReverseGoalPathBiMap_4;
#line 637 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeCtorInfo_7_7 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 637 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoalList_5;
#line 637 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_6_6;

#line 638 "mdbcomp.goal_path.m"
    {
#line 638 "mdbcomp.goal_path.m"
      mercury__map__to_assoc_list_2_p_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_3, &mdbcomp__goal_path__ContainingGoalList_5);
    }
#line 640 "mdbcomp.goal_path.m"
    {
#line 640 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_6_6 = mercury__bimap__init_0_f_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
    }
#line 639 "mdbcomp.goal_path.m"
    {
#line 639 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(mdbcomp__goal_path__ContainingGoalList_5, mdbcomp__goal_path__V_6_6, &mdbcomp__goal_path__ReverseGoalPathBiMap_4);
    }
#line 637 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__ReverseGoalPathBiMap_4;
#line 637 "mdbcomp.goal_path.m"
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
#line 612 "mdbcomp.goal_path.m"
  {
#line 612 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 612 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ReverseGoalPathMap_4;
#line 612 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeCtorInfo_7_7 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 612 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoalList_5;
#line 612 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_6_6;

#line 613 "mdbcomp.goal_path.m"
    {
#line 613 "mdbcomp.goal_path.m"
      mercury__map__to_assoc_list_2_p_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_3, &mdbcomp__goal_path__ContainingGoalList_5);
    }
#line 615 "mdbcomp.goal_path.m"
    {
#line 615 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_6_6 = mercury__map__init_0_f_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
    }
#line 614 "mdbcomp.goal_path.m"
    {
#line 614 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(mdbcomp__goal_path__ContainingGoalList_5, mdbcomp__goal_path__V_6_6, &mdbcomp__goal_path__ReverseGoalPathMap_4);
    }
#line 612 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__ReverseGoalPathMap_4;
#line 612 "mdbcomp.goal_path.m"
  }
#line 278 "mdbcomp.goal_path.m"
}

#line 588 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1(
#line 588 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 588 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 588 "mdbcomp.goal_path.m"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2)
#line 588 "mdbcomp.goal_path.m"
{
#line 588 "mdbcomp.goal_path.m"
  {
#line 588 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;
#line 588 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__conv0_ForwardGoalPath_4;

#line 588 "mdbcomp.goal_path.m"
    {
#line 588 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_p_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), &mdbcomp__goal_path__conv0_ForwardGoalPath_4);
    }
#line 588 "mdbcomp.goal_path.m"
    *mdbcomp__goal_path__wrapper_arg_2 = ((MR_Box) (mdbcomp__goal_path__conv0_ForwardGoalPath_4));
#line 588 "mdbcomp.goal_path.m"
  }
#line 588 "mdbcomp.goal_path.m"
}

#line 272 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0(
#line 272 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_3)
#line 272 "mdbcomp.goal_path.m"
{
#line 586 "mdbcomp.goal_path.m"
  {
#line 586 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 586 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ForwardGoalPathMap_4;
#line 586 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeCtorInfo_7_16 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 586 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ReverseGoalPathMap_5;
#line 586 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoalList_14;
#line 586 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_15_15;

#line 613 "mdbcomp.goal_path.m"
    {
#line 613 "mdbcomp.goal_path.m"
      mercury__map__to_assoc_list_2_p_0(mdbcomp__goal_path__TypeCtorInfo_7_16, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_3, &mdbcomp__goal_path__ContainingGoalList_14);
    }
#line 615 "mdbcomp.goal_path.m"
    {
#line 615 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_15_15 = mercury__map__init_0_f_0(mdbcomp__goal_path__TypeCtorInfo_7_16, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
    }
#line 614 "mdbcomp.goal_path.m"
    {
#line 614 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(mdbcomp__goal_path__ContainingGoalList_14, mdbcomp__goal_path__V_15_15, &mdbcomp__goal_path__ReverseGoalPathMap_5);
    }
#line 588 "mdbcomp.goal_path.m"
    {
#line 588 "mdbcomp.goal_path.m"
      mercury__map__map_values_only_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path_scalar_common_1[8], mdbcomp__goal_path__ReverseGoalPathMap_5, &mdbcomp__goal_path__ForwardGoalPathMap_4);
    }
#line 586 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__ForwardGoalPathMap_4;
#line 586 "mdbcomp.goal_path.m"
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
#line 575 "mdbcomp.goal_path.m"
  {
#line 575 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 575 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPath_6;
#line 575 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoal_7;
#line 576 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__conv0_ContainingGoal_7;

#line 576 "mdbcomp.goal_path.m"
    {
#line 576 "mdbcomp.goal_path.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_4, ((MR_Box) (mdbcomp__goal_path__GoalId_5)), &mdbcomp__goal_path__conv0_ContainingGoal_7);
    }
#line 576 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__ContainingGoal_7 = ((MR_Word) mdbcomp__goal_path__conv0_ContainingGoal_7);
#line 580 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__ContainingGoal_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 579 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "mdbcomp.goal_path.m"
    else
#line 581 "mdbcomp.goal_path.m"
      {
#line 581 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__ParentGoalId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_7, (MR_Integer) 0)));
#line 581 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__LastStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_7, (MR_Integer) 1)));
#line 581 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__EarlierPath_10;

#line 582 "mdbcomp.goal_path.m"
        {
#line 582 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__EarlierPath_10 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(mdbcomp__goal_path__ContainingGoalMap_4, mdbcomp__goal_path__ParentGoalId_8);
        }
#line 583 "mdbcomp.goal_path.m"
        {
#line 583 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 0) = ((MR_Box) (mdbcomp__goal_path__EarlierPath_10));
#line 583 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 1) = ((MR_Box) (mdbcomp__goal_path__LastStep_9));
#line 583 "mdbcomp.goal_path.m"
        }
#line 581 "mdbcomp.goal_path.m"
      }
#line 575 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPath_6;
#line 575 "mdbcomp.goal_path.m"
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
#line 571 "mdbcomp.goal_path.m"
  {
#line 571 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 571 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPath_6;
#line 571 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevGoalPath_7;

#line 572 "mdbcomp.goal_path.m"
    {
#line 572 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__RevGoalPath_7 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(mdbcomp__goal_path__ContainingGoalMap_4, mdbcomp__goal_path__GoalId_5);
    }
#line 591 "mdbcomp.goal_path.m"
    {
#line 591 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevGoalPath_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__GoalPath_6);
    }
#line 571 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPath_6;
#line 571 "mdbcomp.goal_path.m"
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
#line 564 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 564 "mdbcomp.goal_path.m"
    {
#line 564 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 564 "mdbcomp.goal_path.m"
      {
#line 564 "mdbcomp.goal_path.m"
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

#line 7402 "mdbcomp.goal_path.c"
              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_12_12 == mdbcomp__goal_path__V_13_13);
#line 62 "mdbcomp.goal_path.m"
            }
#line 62 "mdbcomp.goal_path.m"
        }
#line 564 "mdbcomp.goal_path.m"
        if (!(mdbcomp__goal_path__succeeded))
#line 566 "mdbcomp.goal_path.m"
          {
#line 566 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalContainingB_7;
#line 566 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__ParentGoalIdB_8;
#line 566 "mdbcomp.goal_path.m"
            MR_Box mdbcomp__goal_path__conv0_GoalContainingB_7;
#line 567 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_9_9;

#line 566 "mdbcomp.goal_path.m"
            {
#line 566 "mdbcomp.goal_path.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalId_4, ((MR_Box) (mdbcomp__goal_path__GoalIdB_6)), &mdbcomp__goal_path__conv0_GoalContainingB_7);
            }
#line 566 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__GoalContainingB_7 = ((MR_Word) mdbcomp__goal_path__conv0_GoalContainingB_7);
#line 567 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__GoalContainingB_7)) == (MR_mktag((MR_Integer) 1)));
#line 567 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 567 "mdbcomp.goal_path.m"
              {
#line 567 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__ParentGoalIdB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalContainingB_7, (MR_Integer) 0)));
#line 567 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalContainingB_7, (MR_Integer) 1)));
#line 568 "mdbcomp.goal_path.m"
                /* direct tailcall eliminated */
#line 568 "mdbcomp.goal_path.m"
                {
#line 568 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__GoalIdB__tmp_copy_6 = mdbcomp__goal_path__ParentGoalIdB_8;

#line 568 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__GoalIdB_6 = mdbcomp__goal_path__GoalIdB__tmp_copy_6;
#line 568 "mdbcomp.goal_path.m"
                }
#line 568 "mdbcomp.goal_path.m"
                continue;
#line 567 "mdbcomp.goal_path.m"
              }
#line 566 "mdbcomp.goal_path.m"
          }
#line 564 "mdbcomp.goal_path.m"
        return mdbcomp__goal_path__succeeded;
#line 564 "mdbcomp.goal_path.m"
      }
#line 564 "mdbcomp.goal_path.m"
      break;
#line 564 "mdbcomp.goal_path.m"
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
#line 532 "mdbcomp.goal_path.m"
  {
#line 532 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 532 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "mdbcomp.goal_path.m"
      *mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "mdbcomp.goal_path.m"
    else
#line 534 "mdbcomp.goal_path.m"
      {
#line 534 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 534 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 534 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps_5;
#line 534 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step_6;

#line 543 "mdbcomp.goal_path.m"
#line 543 "mdbcomp.goal_path.m"
        switch (MR_tag((MR_Word) mdbcomp__goal_path__Step0_4)) {
#line 543 "mdbcomp.goal_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 543 "mdbcomp.goal_path.m"
          case (MR_Integer) 0:
#line 543 "mdbcomp.goal_path.m"
#line 543 "mdbcomp.goal_path.m"
            switch (MR_unmkbody(mdbcomp__goal_path__Step0_4)) {
#line 543 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 545 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 546 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 547 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 3:
#line 548 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 4:
#line 550 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 5:
#line 551 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 6:
#line 552 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
            }
#line 543 "mdbcomp.goal_path.m"
            break;
#line 543 "mdbcomp.goal_path.m"
          case (MR_Integer) 1:
#line 543 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
            break;
#line 543 "mdbcomp.goal_path.m"
          case (MR_Integer) 2:
#line 544 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
            break;
#line 543 "mdbcomp.goal_path.m"
          case (MR_Integer) 3:
#line 543 "mdbcomp.goal_path.m"
#line 543 "mdbcomp.goal_path.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 0)))) {
#line 543 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 556 "mdbcomp.goal_path.m"
                {
#line 556 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 1)));
#line 556 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 2)));

#line 557 "mdbcomp.goal_path.m"
                  {
#line 557 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__Step_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 557 "mdbcomp.goal_path.m"
                    MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 557 "mdbcomp.goal_path.m"
                    MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_6, 1) = ((MR_Box) (mdbcomp__goal_path__N_14));
#line 557 "mdbcomp.goal_path.m"
                    MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_6, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "mdbcomp.goal_path.m"
                  }
#line 556 "mdbcomp.goal_path.m"
                }
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 549 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 553 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 543 "mdbcomp.goal_path.m"
                break;
#line 543 "mdbcomp.goal_path.m"
            }
#line 543 "mdbcomp.goal_path.m"
            break;
#line 543 "mdbcomp.goal_path.m"
        }
#line 536 "mdbcomp.goal_path.m"
        {
#line 536 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(mdbcomp__goal_path__Steps0_3, &mdbcomp__goal_path__Steps_5);
        }
#line 534 "mdbcomp.goal_path.m"
        {
#line 534 "mdbcomp.goal_path.m"
          MR_Word base;
#line 534 "mdbcomp.goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__2_2 = base;
#line 534 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__Steps_5));
#line 534 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__Step_6));
#line 534 "mdbcomp.goal_path.m"
        }
#line 534 "mdbcomp.goal_path.m"
      }
#line 532 "mdbcomp.goal_path.m"
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
#line 400 "mdbcomp.goal_path.m"
  {
#line 400 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 400 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathA_7;
#line 400 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathB_8;
#line 400 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RelativePath_9;
#line 400 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_18_18;

#line 591 "mdbcomp.goal_path.m"
    {
#line 591 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathA_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathA_7);
    }
#line 591 "mdbcomp.goal_path.m"
    {
#line 591 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathB_8);
    }
#line 406 "mdbcomp.goal_path.m"
    {
#line 406 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdbcomp__goal_path__PathA_7, mdbcomp__goal_path__PathB_8, &mdbcomp__goal_path__RelativePath_9);
    }
#line 400 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 400 "mdbcomp.goal_path.m"
      {
#line 602 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "mdbcomp.goal_path.m"
        {
#line 602 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(mdbcomp__goal_path__RelativePath_9, mdbcomp__goal_path__V_18_18, mdbcomp__goal_path__RevRelativePath_6);
        }
#line 602 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 400 "mdbcomp.goal_path.m"
      }
#line 400 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 400 "mdbcomp.goal_path.m"
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
#line 394 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 394 "mdbcomp.goal_path.m"
    {
#line 394 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 394 "mdbcomp.goal_path.m"
      {
#line 394 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 394 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "mdbcomp.goal_path.m"
          {
#line 394 "mdbcomp.goal_path.m"
            *mdbcomp__goal_path__HeadVar__3_3 = mdbcomp__goal_path__HeadVar__2_2;
#line 394 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = MR_TRUE;
#line 394 "mdbcomp.goal_path.m"
          }
#line 394 "mdbcomp.goal_path.m"
        else
#line 396 "mdbcomp.goal_path.m"
          {
#line 396 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__StepA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 396 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__PathA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 396 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__StepB_7;
#line 396 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__PathB_8;

#line 395 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 395 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 395 "mdbcomp.goal_path.m"
              {
#line 395 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__StepB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__PathB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 397 "mdbcomp.goal_path.m"
                {
#line 397 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__StepA_5, mdbcomp__goal_path__StepB_7);
                }
#line 396 "mdbcomp.goal_path.m"
                if (mdbcomp__goal_path__succeeded)
#line 398 "mdbcomp.goal_path.m"
                  {
#line 398 "mdbcomp.goal_path.m"
                    /* direct tailcall eliminated */
#line 398 "mdbcomp.goal_path.m"
                    {
#line 398 "mdbcomp.goal_path.m"
                      MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__PathA_6;
#line 398 "mdbcomp.goal_path.m"
                      MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__PathB_8;

#line 398 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 398 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 398 "mdbcomp.goal_path.m"
                    }
#line 398 "mdbcomp.goal_path.m"
                    continue;
#line 398 "mdbcomp.goal_path.m"
                  }
#line 395 "mdbcomp.goal_path.m"
              }
#line 396 "mdbcomp.goal_path.m"
          }
#line 394 "mdbcomp.goal_path.m"
        return mdbcomp__goal_path__succeeded;
#line 394 "mdbcomp.goal_path.m"
      }
#line 394 "mdbcomp.goal_path.m"
      break;
#line 394 "mdbcomp.goal_path.m"
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
#line 400 "mdbcomp.goal_path.m"
  {
#line 400 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 400 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathA_9;
#line 400 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathB_10;
#line 400 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RelativePath_11;
#line 400 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_20_20;
#line 602 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_5_5;

#line 591 "mdbcomp.goal_path.m"
    {
#line 591 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathA_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathA_9);
    }
#line 591 "mdbcomp.goal_path.m"
    {
#line 591 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathB_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathB_10);
    }
#line 406 "mdbcomp.goal_path.m"
    {
#line 406 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdbcomp__goal_path__PathA_9, mdbcomp__goal_path__PathB_10, &mdbcomp__goal_path__RelativePath_11);
    }
#line 400 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 400 "mdbcomp.goal_path.m"
      {
#line 602 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "mdbcomp.goal_path.m"
        {
#line 602 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(mdbcomp__goal_path__RelativePath_11, mdbcomp__goal_path__V_20_20, &mdbcomp__goal_path__V_5_5);
        }
#line 602 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 400 "mdbcomp.goal_path.m"
      }
#line 400 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 400 "mdbcomp.goal_path.m"
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
#line 410 "mdbcomp.goal_path.m"
  {
#line 410 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 410 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_5_5;

#line 410 "mdbcomp.goal_path.m"
    {
#line 410 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdbcomp__goal_path__PathA_3, mdbcomp__goal_path__PathB_4, &mdbcomp__goal_path__V_5_5);
    }
#line 410 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 410 "mdbcomp.goal_path.m"
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
#line 601 "mdbcomp.goal_path.m"
  {
#line 601 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 602 "mdbcomp.goal_path.m"
    {
#line 602 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(mdbcomp__goal_path__ForwardGoalPath_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdbcomp__goal_path__ReverseGoalPath_4);
#line 602 "mdbcomp.goal_path.m"
      return;
    }
#line 601 "mdbcomp.goal_path.m"
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
#line 590 "mdbcomp.goal_path.m"
  {
#line 590 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 591 "mdbcomp.goal_path.m"
    {
#line 591 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__ReverseGoalPath_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdbcomp__goal_path__ForwardGoalPath_4);
#line 591 "mdbcomp.goal_path.m"
      return;
    }
#line 590 "mdbcomp.goal_path.m"
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
#line 487 "mdbcomp.goal_path.m"
  {
#line 487 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__1_1 == (MR_Char) 59);

#line 487 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 487 "mdbcomp.goal_path.m"
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
#line 500 "mdbcomp.goal_path.m"
  {
#line 500 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 500 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__GoalPathStr_4;
#line 500 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevStepStrs_5;
#line 500 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_6;

#line 501 "mdbcomp.goal_path.m"
    {
#line 501 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__RevStepStrs_5 = mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(mdbcomp__goal_path__GoalPath_3);
    }
#line 502 "mdbcomp.goal_path.m"
    {
#line 502 "mdbcomp.goal_path.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__goal_path__RevStepStrs_5, &mdbcomp__goal_path__StepStrs_6);
    }
#line 503 "mdbcomp.goal_path.m"
    {
#line 503 "mdbcomp.goal_path.m"
      mercury__string__append_list_2_p_0(mdbcomp__goal_path__StepStrs_6, &mdbcomp__goal_path__GoalPathStr_4);
    }
#line 500 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPathStr_4;
#line 500 "mdbcomp.goal_path.m"
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
#line 489 "mdbcomp.goal_path.m"
  {
#line 489 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 489 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__GoalPathStr_4;
#line 489 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_5;

#line 490 "mdbcomp.goal_path.m"
    {
#line 490 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_5 = mdbcomp__goal_path__goal_path_to_strings_1_f_0(mdbcomp__goal_path__GoalPath_3);
    }
#line 491 "mdbcomp.goal_path.m"
    {
#line 491 "mdbcomp.goal_path.m"
      mercury__string__append_list_2_p_0(mdbcomp__goal_path__StepStrs_5, &mdbcomp__goal_path__GoalPathStr_4);
    }
#line 489 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPathStr_4;
#line 489 "mdbcomp.goal_path.m"
  }
#line 188 "mdbcomp.goal_path.m"
}

#line 466 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1(
#line 466 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 466 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 466 "mdbcomp.goal_path.m"
{
#line 466 "mdbcomp.goal_path.m"
  {
#line 466 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 466 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 466 "mdbcomp.goal_path.m"
    {
#line 466 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__466__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 466 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 466 "mdbcomp.goal_path.m"
  }
#line 466 "mdbcomp.goal_path.m"
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
#line 454 "mdbcomp.goal_path.m"
  {
#line 454 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 454 "mdbcomp.goal_path.m"
    MR_Char mdbcomp__goal_path__First_5;
#line 454 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__Rest_6;

#line 455 "mdbcomp.goal_path.m"
    {
#line 455 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mercury__string__first_char_3_p_3(mdbcomp__goal_path__String_3, &mdbcomp__goal_path__First_5, &mdbcomp__goal_path__Rest_6);
    }
#line 454 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 461 "mdbcomp.goal_path.m"
#line 461 "mdbcomp.goal_path.m"
      switch (mdbcomp__goal_path__First_5) {
#line 461 "mdbcomp.goal_path.m"
        default:
#line 461 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = MR_FALSE;
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 61:
#line 482 "mdbcomp.goal_path.m"
          {
#line 482 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 482 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 482 "mdbcomp.goal_path.m"
              {
#line 482 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 482 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 482 "mdbcomp.goal_path.m"
              }
#line 482 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 63:
#line 475 "mdbcomp.goal_path.m"
          {
#line 475 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 475 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 475 "mdbcomp.goal_path.m"
              {
#line 475 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 475 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 475 "mdbcomp.goal_path.m"
              }
#line 475 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 97:
#line 483 "mdbcomp.goal_path.m"
          {
#line 483 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 483 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 483 "mdbcomp.goal_path.m"
              {
#line 483 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 483 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 483 "mdbcomp.goal_path.m"
              }
#line 483 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 99:
#line 461 "mdbcomp.goal_path.m"
          {
#line 461 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__N_8;

#line 462 "mdbcomp.goal_path.m"
            {
#line 462 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__Rest_6, &mdbcomp__goal_path__N_8);
            }
#line 461 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 461 "mdbcomp.goal_path.m"
              {
#line 461 "mdbcomp.goal_path.m"
                {
#line 461 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 461 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 461 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__Step_4 = base;
#line 461 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__N_8));
#line 461 "mdbcomp.goal_path.m"
                }
#line 461 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 461 "mdbcomp.goal_path.m"
              }
#line 461 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 100:
#line 463 "mdbcomp.goal_path.m"
          {
#line 463 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__N_10;

#line 464 "mdbcomp.goal_path.m"
            {
#line 464 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__Rest_6, &mdbcomp__goal_path__N_10);
            }
#line 463 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 463 "mdbcomp.goal_path.m"
              {
#line 463 "mdbcomp.goal_path.m"
                {
#line 463 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 463 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 463 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__Step_4 = base;
#line 463 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__goal_path__N_10));
#line 463 "mdbcomp.goal_path.m"
                }
#line 463 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 463 "mdbcomp.goal_path.m"
              }
#line 463 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 101:
#line 477 "mdbcomp.goal_path.m"
          {
#line 477 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 477 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 477 "mdbcomp.goal_path.m"
              {
#line 477 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 477 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 477 "mdbcomp.goal_path.m"
              }
#line 477 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 111:
#line 484 "mdbcomp.goal_path.m"
          {
#line 484 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__N_25;

#line 485 "mdbcomp.goal_path.m"
            {
#line 485 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__Rest_6, &mdbcomp__goal_path__N_25);
            }
#line 484 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 484 "mdbcomp.goal_path.m"
              {
#line 484 "mdbcomp.goal_path.m"
                {
#line 484 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 484 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__Step_4 = base;
#line 484 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 484 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__goal_path__N_25));
#line 484 "mdbcomp.goal_path.m"
                }
#line 484 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 484 "mdbcomp.goal_path.m"
              }
#line 484 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 113:
#line 461 "mdbcomp.goal_path.m"
          if ((strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0))
#line 480 "mdbcomp.goal_path.m"
            {
#line 480 "mdbcomp.goal_path.m"
              *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__goal_path_scalar_common_3[0]);
#line 480 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = MR_TRUE;
#line 480 "mdbcomp.goal_path.m"
            }
#line 461 "mdbcomp.goal_path.m"
          else
#line 461 "mdbcomp.goal_path.m"
          if ((strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "!") == 0))
#line 479 "mdbcomp.goal_path.m"
            {
#line 479 "mdbcomp.goal_path.m"
              *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__goal_path_scalar_common_3[1]);
#line 479 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = MR_TRUE;
#line 479 "mdbcomp.goal_path.m"
            }
#line 461 "mdbcomp.goal_path.m"
          else
#line 461 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = MR_FALSE;
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 114:
#line 481 "mdbcomp.goal_path.m"
          {
#line 481 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 481 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 481 "mdbcomp.goal_path.m"
              {
#line 481 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 481 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 481 "mdbcomp.goal_path.m"
              }
#line 481 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 115:
#line 465 "mdbcomp.goal_path.m"
          {
#line 465 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__N_12;
#line 465 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__MaybeM_13;
#line 465 "mdbcomp.goal_path.m"
            MR_String mdbcomp__goal_path__NStr_14;
#line 465 "mdbcomp.goal_path.m"
            MR_String mdbcomp__goal_path__MStr_15;
#line 465 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_17_17;
#line 465 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_20_20;
#line 465 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_21_21;

#line 466 "mdbcomp.goal_path.m"
            {
#line 466 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__V_17_17 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_2[1], mdbcomp__goal_path__Rest_6);
            }
#line 466 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 466 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 466 "mdbcomp.goal_path.m"
              {
#line 466 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__NStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_17_17, (MR_Integer) 0)));
#line 466 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_17_17, (MR_Integer) 1)));
#line 466 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 466 "mdbcomp.goal_path.m"
                if (mdbcomp__goal_path__succeeded)
#line 466 "mdbcomp.goal_path.m"
                  {
#line 466 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__MStr_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_20_20, (MR_Integer) 0)));
#line 466 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_20_20, (MR_Integer) 1)));
#line 466 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "mdbcomp.goal_path.m"
                    if (mdbcomp__goal_path__succeeded)
#line 465 "mdbcomp.goal_path.m"
                      {
#line 467 "mdbcomp.goal_path.m"
                        {
#line 467 "mdbcomp.goal_path.m"
                          mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__NStr_14, &mdbcomp__goal_path__N_12);
                        }
#line 465 "mdbcomp.goal_path.m"
                        if (mdbcomp__goal_path__succeeded)
#line 465 "mdbcomp.goal_path.m"
                          {
#line 469 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__MStr_15, (MR_String) "na") == 0);
#line 471 "mdbcomp.goal_path.m"
                            if (mdbcomp__goal_path__succeeded)
#line 470 "mdbcomp.goal_path.m"
                              {
#line 470 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__MaybeM_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 470 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 470 "mdbcomp.goal_path.m"
                              }
#line 471 "mdbcomp.goal_path.m"
                            else
#line 472 "mdbcomp.goal_path.m"
                              {
#line 472 "mdbcomp.goal_path.m"
                                MR_Integer mdbcomp__goal_path__M_16;

#line 472 "mdbcomp.goal_path.m"
                                {
#line 472 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__MStr_15, &mdbcomp__goal_path__M_16);
                                }
#line 472 "mdbcomp.goal_path.m"
                                if (mdbcomp__goal_path__succeeded)
#line 472 "mdbcomp.goal_path.m"
                                  {
#line 473 "mdbcomp.goal_path.m"
                                    {
#line 473 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__MaybeM_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 473 "mdbcomp.goal_path.m"
                                      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__MaybeM_13, 0) = ((MR_Box) (mdbcomp__goal_path__M_16));
#line 473 "mdbcomp.goal_path.m"
                                    }
#line 473 "mdbcomp.goal_path.m"
                                    mdbcomp__goal_path__succeeded = MR_TRUE;
#line 472 "mdbcomp.goal_path.m"
                                  }
#line 472 "mdbcomp.goal_path.m"
                              }
#line 465 "mdbcomp.goal_path.m"
                            if (mdbcomp__goal_path__succeeded)
#line 465 "mdbcomp.goal_path.m"
                              {
#line 465 "mdbcomp.goal_path.m"
                                {
#line 465 "mdbcomp.goal_path.m"
                                  MR_Word base;
#line 465 "mdbcomp.goal_path.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 465 "mdbcomp.goal_path.m"
                                  *mdbcomp__goal_path__Step_4 = base;
#line 465 "mdbcomp.goal_path.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 465 "mdbcomp.goal_path.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__goal_path__N_12));
#line 465 "mdbcomp.goal_path.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdbcomp__goal_path__MaybeM_13));
#line 465 "mdbcomp.goal_path.m"
                                }
#line 465 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 465 "mdbcomp.goal_path.m"
                              }
#line 465 "mdbcomp.goal_path.m"
                          }
#line 465 "mdbcomp.goal_path.m"
                      }
#line 466 "mdbcomp.goal_path.m"
                  }
#line 466 "mdbcomp.goal_path.m"
              }
#line 465 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 116:
#line 476 "mdbcomp.goal_path.m"
          {
#line 476 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 476 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 476 "mdbcomp.goal_path.m"
              {
#line 476 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 476 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 476 "mdbcomp.goal_path.m"
              }
#line 476 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
        case (MR_Char) 126:
#line 478 "mdbcomp.goal_path.m"
          {
#line 478 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 478 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 478 "mdbcomp.goal_path.m"
              {
#line 478 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 478 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 478 "mdbcomp.goal_path.m"
              }
#line 478 "mdbcomp.goal_path.m"
          }
#line 461 "mdbcomp.goal_path.m"
          break;
#line 461 "mdbcomp.goal_path.m"
      }
#line 454 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 454 "mdbcomp.goal_path.m"
  }
#line 183 "mdbcomp.goal_path.m"
}

#line 435 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1(
#line 435 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 435 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 435 "mdbcomp.goal_path.m"
{
#line 435 "mdbcomp.goal_path.m"
  {
#line 435 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 435 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 435 "mdbcomp.goal_path.m"
    {
#line 435 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 435 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 435 "mdbcomp.goal_path.m"
  }
#line 435 "mdbcomp.goal_path.m"
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
#line 450 "mdbcomp.goal_path.m"
  {
#line 450 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 450 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPathPrime_5;
#line 434 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_11;
#line 434 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevStepStrs_12;

#line 435 "mdbcomp.goal_path.m"
    {
#line 435 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_11 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[7], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 436 "mdbcomp.goal_path.m"
    {
#line 436 "mdbcomp.goal_path.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__goal_path__StepStrs_11, &mdbcomp__goal_path__RevStepStrs_12);
    }
#line 437 "mdbcomp.goal_path.m"
    {
#line 437 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(mdbcomp__goal_path__RevStepStrs_12, &mdbcomp__goal_path__GoalPathPrime_5);
    }
#line 450 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 449 "mdbcomp.goal_path.m"
      *mdbcomp__goal_path__GoalPath_4 = mdbcomp__goal_path__GoalPathPrime_5;
#line 450 "mdbcomp.goal_path.m"
    else
#line 451 "mdbcomp.goal_path.m"
      {
#line 451 "mdbcomp.goal_path.m"
        {
#line 451 "mdbcomp.goal_path.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.goal_path", (MR_String) "predicate \140mdbcomp.goal_path.rev_goal_path_from_string_det\'/2", (MR_String) "rev_goal_path_from_string failed");
#line 451 "mdbcomp.goal_path.m"
          return;
        }
#line 451 "mdbcomp.goal_path.m"
      }
#line 450 "mdbcomp.goal_path.m"
  }
#line 177 "mdbcomp.goal_path.m"
}

#line 435 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1(
#line 435 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 435 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 435 "mdbcomp.goal_path.m"
{
#line 435 "mdbcomp.goal_path.m"
  {
#line 435 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 435 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 435 "mdbcomp.goal_path.m"
    {
#line 435 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 435 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 435 "mdbcomp.goal_path.m"
  }
#line 435 "mdbcomp.goal_path.m"
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
#line 434 "mdbcomp.goal_path.m"
  {
#line 434 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 434 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_5;
#line 434 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevStepStrs_6;

#line 435 "mdbcomp.goal_path.m"
    {
#line 435 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_5 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[6], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 436 "mdbcomp.goal_path.m"
    {
#line 436 "mdbcomp.goal_path.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__goal_path__StepStrs_5, &mdbcomp__goal_path__RevStepStrs_6);
    }
#line 437 "mdbcomp.goal_path.m"
    {
#line 437 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(mdbcomp__goal_path__RevStepStrs_6, mdbcomp__goal_path__GoalPath_4);
    }
#line 434 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 434 "mdbcomp.goal_path.m"
  }
#line 171 "mdbcomp.goal_path.m"
}

#line 416 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1(
#line 416 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 416 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 416 "mdbcomp.goal_path.m"
{
#line 416 "mdbcomp.goal_path.m"
  {
#line 416 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 416 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 416 "mdbcomp.goal_path.m"
    {
#line 416 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 416 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 416 "mdbcomp.goal_path.m"
  }
#line 416 "mdbcomp.goal_path.m"
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
#line 430 "mdbcomp.goal_path.m"
  {
#line 430 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 430 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPathPrime_5;
#line 415 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_11;

#line 416 "mdbcomp.goal_path.m"
    {
#line 416 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_11 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[5], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 417 "mdbcomp.goal_path.m"
    {
#line 417 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(mdbcomp__goal_path__StepStrs_11, &mdbcomp__goal_path__GoalPathPrime_5);
    }
#line 430 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 429 "mdbcomp.goal_path.m"
      *mdbcomp__goal_path__GoalPath_4 = mdbcomp__goal_path__GoalPathPrime_5;
#line 430 "mdbcomp.goal_path.m"
    else
#line 431 "mdbcomp.goal_path.m"
      {
#line 431 "mdbcomp.goal_path.m"
        {
#line 431 "mdbcomp.goal_path.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.goal_path", (MR_String) "predicate \140mdbcomp.goal_path.goal_path_from_string_det\'/2", (MR_String) "goal_path_from_string failed");
#line 431 "mdbcomp.goal_path.m"
          return;
        }
#line 431 "mdbcomp.goal_path.m"
      }
#line 430 "mdbcomp.goal_path.m"
  }
#line 166 "mdbcomp.goal_path.m"
}

#line 416 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0_1(
#line 416 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 416 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 416 "mdbcomp.goal_path.m"
{
#line 416 "mdbcomp.goal_path.m"
  {
#line 416 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 416 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 416 "mdbcomp.goal_path.m"
    {
#line 416 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 416 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 416 "mdbcomp.goal_path.m"
  }
#line 416 "mdbcomp.goal_path.m"
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
#line 415 "mdbcomp.goal_path.m"
  {
#line 415 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 415 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_5;

#line 416 "mdbcomp.goal_path.m"
    {
#line 416 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_5 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[4], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 417 "mdbcomp.goal_path.m"
    {
#line 417 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(mdbcomp__goal_path__StepStrs_5, mdbcomp__goal_path__GoalPath_4);
    }
#line 415 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 415 "mdbcomp.goal_path.m"
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
#line 392 "mdbcomp.goal_path.m"
  {
#line 392 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 392 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_3_3;

#line 392 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 392 "mdbcomp.goal_path.m"
      {
#line 392 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 392 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__LastStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 392 "mdbcomp.goal_path.m"
      }
#line 392 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 392 "mdbcomp.goal_path.m"
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
#line 390 "mdbcomp.goal_path.m"
  {
#line 390 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 390 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 390 "mdbcomp.goal_path.m"
      {
#line 390 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__GoalPath_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 390 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__LastStep_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 390 "mdbcomp.goal_path.m"
      }
#line 390 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 390 "mdbcomp.goal_path.m"
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
#line 384 "mdbcomp.goal_path.m"
  {
#line 384 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__GoalPath_3)) == (MR_mktag((MR_Integer) 1)));
#line 384 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_5_5;

#line 384 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 384 "mdbcomp.goal_path.m"
      {
#line 384 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__FirstStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_3, (MR_Integer) 0)));
#line 384 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_3, (MR_Integer) 1)));
#line 384 "mdbcomp.goal_path.m"
      }
#line 384 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 384 "mdbcomp.goal_path.m"
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
#line 384 "mdbcomp.goal_path.m"
  {
#line 384 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 384 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 384 "mdbcomp.goal_path.m"
      {
#line 384 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__FirstStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 384 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__OtherSteps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "mdbcomp.goal_path.m"
      }
#line 384 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 384 "mdbcomp.goal_path.m"
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
#line 374 "mdbcomp.goal_path.m"
  {
#line 374 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 374 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadStep_3;
#line 374 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TailSteps_4;

#line 374 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 374 "mdbcomp.goal_path.m"
      {
#line 374 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__HeadStep_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 374 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__TailSteps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 375 "mdbcomp.goal_path.m"
        {
#line 375 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_last_loop_3_p_0(mdbcomp__goal_path__HeadStep_3, mdbcomp__goal_path__TailSteps_4, mdbcomp__goal_path__LastStep_5);
        }
#line 375 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 374 "mdbcomp.goal_path.m"
      }
#line 374 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 374 "mdbcomp.goal_path.m"
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
#line 360 "mdbcomp.goal_path.m"
  {
#line 360 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 360 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadStep_4;
#line 360 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TailSteps_5;

#line 359 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 359 "mdbcomp.goal_path.m"
      {
#line 359 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__HeadStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 359 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__TailSteps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 361 "mdbcomp.goal_path.m"
        {
#line 361 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(mdbcomp__goal_path__HeadStep_4, mdbcomp__goal_path__TailSteps_5, mdbcomp__goal_path__AllButLastGoalPath_6, mdbcomp__goal_path__LastStep_7);
        }
#line 361 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 359 "mdbcomp.goal_path.m"
      }
#line 360 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 360 "mdbcomp.goal_path.m"
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
#line 357 "mdbcomp.goal_path.m"
  {
#line 357 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 357 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPath_6;

#line 357 "mdbcomp.goal_path.m"
    {
#line 357 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 0) = ((MR_Box) (mdbcomp__goal_path__GoalPath0_4));
#line 357 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 1) = ((MR_Box) (mdbcomp__goal_path__NewStep_5));
#line 357 "mdbcomp.goal_path.m"
    }
#line 357 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPath_6;
#line 357 "mdbcomp.goal_path.m"
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
#line 351 "mdbcomp.goal_path.m"
  {
#line 351 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 351 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__3_3;

#line 351 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "mdbcomp.goal_path.m"
      {
#line 351 "mdbcomp.goal_path.m"
        {
#line 351 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__goal_path__NewStep_2));
#line 351 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "mdbcomp.goal_path.m"
        }
#line 351 "mdbcomp.goal_path.m"
      }
#line 351 "mdbcomp.goal_path.m"
    else
#line 353 "mdbcomp.goal_path.m"
      {
#line 353 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__OldStep_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 353 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__GoalPath0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 353 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__GoalPath_9;

#line 354 "mdbcomp.goal_path.m"
        {
#line 354 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__GoalPath_9 = mdbcomp__goal_path__goal_path_add_at_end_2_f_0(mdbcomp__goal_path__GoalPath0_7, mdbcomp__goal_path__NewStep_2);
        }
#line 353 "mdbcomp.goal_path.m"
        {
#line 353 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__goal_path__OldStep_6));
#line 353 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__goal_path__GoalPath_9));
#line 353 "mdbcomp.goal_path.m"
        }
#line 353 "mdbcomp.goal_path.m"
      }
#line 351 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__3_3;
#line 351 "mdbcomp.goal_path.m"
  }
#line 114 "mdbcomp.goal_path.m"
}

#line 110 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__whole_body_goal_id_0_f_0(void)
#line 110 "mdbcomp.goal_path.m"
{
#line 349 "mdbcomp.goal_path.m"
  {
#line 349 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 349 "mdbcomp.goal_path.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 349 "mdbcomp.goal_path.m"
  }
#line 110 "mdbcomp.goal_path.m"
}

#line 108 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__goal_id_for_head_constraints_0_f_0(void)
#line 108 "mdbcomp.goal_path.m"
{
#line 344 "mdbcomp.goal_path.m"
  {
#line 344 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 344 "mdbcomp.goal_path.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
#line 344 "mdbcomp.goal_path.m"
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
#line 341 "mdbcomp.goal_path.m"
  {
#line 341 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 341 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__GoalIdNum_2 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;

#line 342 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__GoalIdNum_2 >= (MR_Integer) 0);
#line 341 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 341 "mdbcomp.goal_path.m"
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
