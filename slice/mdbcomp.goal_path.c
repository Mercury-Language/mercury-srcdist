/*
** Automatically generated from `mdbcomp.goal_path.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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




#line 68 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0;

#line 71 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1[2];

#line 74 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1;

#line 77 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[1];

#line 80 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[1];

#line 83 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_containing_goal_0[2];

#line 86 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0[2];

#line 89 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0[2];

#line 92 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 95 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0;

#line 98 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1[2];

#line 101 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1;

#line 104 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[1];

#line 107 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[1];

#line 110 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0[2];

#line 113 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[2];

#line 116 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0[2];

#line 119 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1[1];

#line 122 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1;

#line 125 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 128 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1;

#line 131 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 134 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0[1];

#line 137 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0;

#line 140 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0[1];

#line 143 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0;

#line 146 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1[1];

#line 149 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1;

#line 152 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2[2];

#line 155 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2;

#line 158 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3;

#line 161 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4;

#line 164 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5;

#line 167 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6;

#line 170 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7[1];

#line 173 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7;

#line 176 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8;

#line 179 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9;

#line 182 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10;

#line 185 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11[1];

#line 188 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11;

#line 191 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[7];

#line 194 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[1];

#line 197 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[1];

#line 200 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[3];

#line 203 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0[4];

#line 206 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_goal_path_step_0[12];

#line 209 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_path_step_0[12];

#line 212 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 215 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 218 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0;

#line 221 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1;

#line 224 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_value_ordered_maybe_cut_0[2];

#line 227 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[2];

#line 230 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0[2];

#line 233 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0;

#line 236 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[1];

#line 239 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1;

#line 242 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[1];

#line 245 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[1];

#line 248 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0[2];

#line 251 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[2];

#line 254 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[2];

#line 257 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0;

#line 260 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1[2];

#line 263 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1;

#line 266 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[1];

#line 269 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[1];

#line 272 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0[2];

#line 275 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[2];

#line 278 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[2];

#line 281 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0_10001(
#line 284 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 286 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 289 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0_10001(
#line 292 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 294 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 296 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 299 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001(
#line 302 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 304 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 307 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001(
#line 310 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 312 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 314 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 317 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001(
#line 320 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 322 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 325 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001(
#line 328 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 330 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 332 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 335 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001(
#line 338 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 340 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 342 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 345 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001(
#line 348 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 350 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2,
#line 352 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3,
#line 354 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_4);

#line 357 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001(
#line 360 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 362 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 365 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001(
#line 368 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 370 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 372 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 375 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0_10001(
#line 378 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 380 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 383 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0_10001(
#line 386 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 388 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 390 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 393 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0_10001(
#line 396 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 398 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 401 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0_10001(
#line 404 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 406 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 408 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 411 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0_10001(
#line 414 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 416 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 419 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0_10001(
#line 422 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 424 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 426 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 429 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001(
#line 432 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 434 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 437 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001(
#line 440 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 442 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 444 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 447 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001(
#line 450 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 452 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 455 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001(
#line 458 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 460 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 462 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 465 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0_10001(
#line 468 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 470 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 473 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0_10001(
#line 476 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 478 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 480 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 483 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001(
#line 486 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 488 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 491 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001(
#line 494 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 496 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 498 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 501 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001(
#line 504 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 506 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 509 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001(
#line 512 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 514 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 516 "mdbcomp.goal_path.c"
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



#line 801 "mdbcomp.goal_path.c"
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

#line 816 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

#line 822 "mdbcomp.goal_path.c"
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

#line 837 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

#line 842 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1
};

#line 847 "mdbcomp.goal_path.c"
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

#line 861 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

#line 867 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 873 "mdbcomp.goal_path.c"
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

#line 894 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 903 "mdbcomp.goal_path.c"
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

#line 924 "mdbcomp.goal_path.c"
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

#line 939 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 945 "mdbcomp.goal_path.c"
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

#line 960 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

#line 965 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1
};

#line 970 "mdbcomp.goal_path.c"
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

#line 984 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

#line 990 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 996 "mdbcomp.goal_path.c"
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

#line 1017 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1[1] = {
  (MR_Integer) 0
};

#line 1022 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1030 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1
  }
};

#line 1038 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 = {
  (MR_String) "goal_attr_array",
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1,
  NULL
};

#line 1045 "mdbcomp.goal_path.c"
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

#line 1066 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1075 "mdbcomp.goal_path.c"
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

#line 1096 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0[1] = {
  (MR_Integer) 0
};

#line 1101 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0 = {
  (MR_String) "goal_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1108 "mdbcomp.goal_path.c"
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

#line 1129 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1134 "mdbcomp.goal_path.c"
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

#line 1149 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1154 "mdbcomp.goal_path.c"
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

#line 1169 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0
};

#line 1175 "mdbcomp.goal_path.c"
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

#line 1190 "mdbcomp.goal_path.c"
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

#line 1205 "mdbcomp.goal_path.c"
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

#line 1220 "mdbcomp.goal_path.c"
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

#line 1235 "mdbcomp.goal_path.c"
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

#line 1250 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0
};

#line 1255 "mdbcomp.goal_path.c"
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

#line 1270 "mdbcomp.goal_path.c"
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

#line 1285 "mdbcomp.goal_path.c"
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

#line 1300 "mdbcomp.goal_path.c"
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

#line 1315 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1320 "mdbcomp.goal_path.c"
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

#line 1335 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[7] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10
};

#line 1346 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0
};

#line 1351 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1
};

#line 1356 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[3] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11
};

#line 1363 "mdbcomp.goal_path.c"
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

#line 1387 "mdbcomp.goal_path.c"
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

#line 1403 "mdbcomp.goal_path.c"
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

#line 1419 "mdbcomp.goal_path.c"
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

#line 1440 "mdbcomp.goal_path.c"
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

#line 1461 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1470 "mdbcomp.goal_path.c"
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

#line 1491 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1500 "mdbcomp.goal_path.c"
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

#line 1521 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0 = {
  (MR_String) "scope_is_cut",
  (MR_Integer) 0
};

#line 1527 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1 = {
  (MR_String) "scope_is_no_cut",
  (MR_Integer) 1
};

#line 1533 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_value_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

#line 1539 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

#line 1545 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1551 "mdbcomp.goal_path.c"
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

#line 1572 "mdbcomp.goal_path.c"
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

#line 1587 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1592 "mdbcomp.goal_path.c"
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

#line 1607 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

#line 1612 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1
};

#line 1617 "mdbcomp.goal_path.c"
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

#line 1631 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

#line 1637 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1643 "mdbcomp.goal_path.c"
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

#line 1664 "mdbcomp.goal_path.c"
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

#line 1679 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

#line 1685 "mdbcomp.goal_path.c"
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

#line 1700 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

#line 1705 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1
};

#line 1710 "mdbcomp.goal_path.c"
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

#line 1724 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

#line 1730 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1736 "mdbcomp.goal_path.c"
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

#line 1757 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____containing_goal_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1776 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1778 "mdbcomp.goal_path.c"
  }
#line 1780 "mdbcomp.goal_path.c"
}

#line 1783 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0_10001(
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
      mdbcomp__goal_path____Compare____containing_goal_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1804 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1806 "mdbcomp.goal_path.c"
  }
#line 1808 "mdbcomp.goal_path.c"
}

#line 1811 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____containing_goal_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1830 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1832 "mdbcomp.goal_path.c"
  }
#line 1834 "mdbcomp.goal_path.c"
}

#line 1837 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001(
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
      mdbcomp__goal_path____Compare____containing_goal_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1858 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1860 "mdbcomp.goal_path.c"
  }
#line 1862 "mdbcomp.goal_path.c"
}

#line 1865 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001(
#line 1868 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1870 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1872 "mdbcomp.goal_path.c"
{
#line 1874 "mdbcomp.goal_path.c"
  {
#line 1876 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1879 "mdbcomp.goal_path.c"
    {
#line 1881 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1884 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1886 "mdbcomp.goal_path.c"
  }
#line 1888 "mdbcomp.goal_path.c"
}

#line 1891 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001(
#line 1894 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1896 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1898 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1900 "mdbcomp.goal_path.c"
{
#line 1902 "mdbcomp.goal_path.c"
  {
#line 1904 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1907 "mdbcomp.goal_path.c"
    {
#line 1909 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1912 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1914 "mdbcomp.goal_path.c"
  }
#line 1916 "mdbcomp.goal_path.c"
}

#line 1919 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001(
#line 1922 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1924 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1926 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1928 "mdbcomp.goal_path.c"
{
#line 1930 "mdbcomp.goal_path.c"
  {
#line 1932 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1935 "mdbcomp.goal_path.c"
    {
#line 1937 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_attr_array_1_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1940 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1942 "mdbcomp.goal_path.c"
  }
#line 1944 "mdbcomp.goal_path.c"
}

#line 1947 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001(
#line 1950 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1952 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2,
#line 1954 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3,
#line 1956 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_4)
#line 1958 "mdbcomp.goal_path.c"
{
#line 1960 "mdbcomp.goal_path.c"
  {
#line 1962 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1965 "mdbcomp.goal_path.c"
    {
#line 1967 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_attr_array_1_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), &mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_3), ((MR_Word) mdbcomp__goal_path__wrapper_arg_4));
    }
#line 1970 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_2 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1972 "mdbcomp.goal_path.c"
  }
#line 1974 "mdbcomp.goal_path.c"
}

#line 1977 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_forward_path_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1996 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1998 "mdbcomp.goal_path.c"
  }
#line 2000 "mdbcomp.goal_path.c"
}

#line 2003 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001(
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
      mdbcomp__goal_path____Compare____goal_forward_path_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2024 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2026 "mdbcomp.goal_path.c"
  }
#line 2028 "mdbcomp.goal_path.c"
}

#line 2031 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_id_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2050 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2052 "mdbcomp.goal_path.c"
  }
#line 2054 "mdbcomp.goal_path.c"
}

#line 2057 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0_10001(
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
      mdbcomp__goal_path____Compare____goal_id_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2078 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2080 "mdbcomp.goal_path.c"
  }
#line 2082 "mdbcomp.goal_path.c"
}

#line 2085 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2104 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2106 "mdbcomp.goal_path.c"
  }
#line 2108 "mdbcomp.goal_path.c"
}

#line 2111 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0_10001(
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
      mdbcomp__goal_path____Compare____goal_path_step_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2132 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2134 "mdbcomp.goal_path.c"
  }
#line 2136 "mdbcomp.goal_path.c"
}

#line 2139 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_string_0_0(((MR_String) mdbcomp__goal_path__wrapper_arg_1), ((MR_String) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2158 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2160 "mdbcomp.goal_path.c"
  }
#line 2162 "mdbcomp.goal_path.c"
}

#line 2165 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0_10001(
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
      mdbcomp__goal_path____Compare____goal_path_string_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_String) mdbcomp__goal_path__wrapper_arg_2), ((MR_String) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2186 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2188 "mdbcomp.goal_path.c"
  }
#line 2190 "mdbcomp.goal_path.c"
}

#line 2193 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2212 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2214 "mdbcomp.goal_path.c"
  }
#line 2216 "mdbcomp.goal_path.c"
}

#line 2219 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001(
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
      mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2240 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2242 "mdbcomp.goal_path.c"
  }
#line 2244 "mdbcomp.goal_path.c"
}

#line 2247 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2266 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2268 "mdbcomp.goal_path.c"
  }
#line 2270 "mdbcomp.goal_path.c"
}

#line 2273 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001(
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
      mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2294 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2296 "mdbcomp.goal_path.c"
  }
#line 2298 "mdbcomp.goal_path.c"
}

#line 2301 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_cut_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2320 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2322 "mdbcomp.goal_path.c"
  }
#line 2324 "mdbcomp.goal_path.c"
}

#line 2327 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0_10001(
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
      mdbcomp__goal_path____Compare____maybe_cut_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2348 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2350 "mdbcomp.goal_path.c"
  }
#line 2352 "mdbcomp.goal_path.c"
}

#line 2355 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001(
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
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2374 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2376 "mdbcomp.goal_path.c"
  }
#line 2378 "mdbcomp.goal_path.c"
}

#line 2381 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001(
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
      mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2402 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2404 "mdbcomp.goal_path.c"
  }
#line 2406 "mdbcomp.goal_path.c"
}

#line 2409 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001(
#line 2412 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2414 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2416 "mdbcomp.goal_path.c"
{
#line 2418 "mdbcomp.goal_path.c"
  {
#line 2420 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2423 "mdbcomp.goal_path.c"
    {
#line 2425 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2428 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2430 "mdbcomp.goal_path.c"
  }
#line 2432 "mdbcomp.goal_path.c"
}

#line 2435 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001(
#line 2438 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2440 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2442 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2444 "mdbcomp.goal_path.c"
{
#line 2446 "mdbcomp.goal_path.c"
  {
#line 2448 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2451 "mdbcomp.goal_path.c"
    {
#line 2453 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2456 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2458 "mdbcomp.goal_path.c"
  }
#line 2460 "mdbcomp.goal_path.c"
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
#line 2508 "mdbcomp.goal_path.c"
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
#line 2520 "mdbcomp.goal_path.c"
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
#line 2533 "mdbcomp.goal_path.c"
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
#line 2551 "mdbcomp.goal_path.c"
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
#line 2639 "mdbcomp.goal_path.c"
              {
#line 2641 "mdbcomp.goal_path.c"
                mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__goal_path__V_5_5, mdbcomp__goal_path__V_7_7);
              }
#line 71 "mdbcomp.goal_path.m"
              if (mdbcomp__goal_path__succeeded)
#line 2646 "mdbcomp.goal_path.c"
                {
#line 2648 "mdbcomp.goal_path.c"
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
#line 2686 "mdbcomp.goal_path.c"
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
#line 2698 "mdbcomp.goal_path.c"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "mdbcomp.goal_path.m"
      else
#line 93 "mdbcomp.goal_path.m"
        {
#line 93 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 93 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2709 "mdbcomp.goal_path.c"
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
#line 2790 "mdbcomp.goal_path.c"
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
#line 2844 "mdbcomp.goal_path.c"
  {
#line 2846 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__2_1 == mdbcomp__goal_path__HeadVar__2_2);

#line 2849 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2851 "mdbcomp.goal_path.c"
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
#line 3063 "mdbcomp.goal_path.c"
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
#line 3113 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3119 "mdbcomp.goal_path.c"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3125 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3131 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 3135 "mdbcomp.goal_path.c"
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
#line 3185 "mdbcomp.goal_path.c"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3191 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3197 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3203 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 3207 "mdbcomp.goal_path.c"
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
#line 3257 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3263 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3269 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3275 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 3279 "mdbcomp.goal_path.c"
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
#line 3329 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3335 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3341 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3347 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 3351 "mdbcomp.goal_path.c"
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
#line 3401 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3407 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3413 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3419 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 3423 "mdbcomp.goal_path.c"
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
#line 3473 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3479 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3485 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3491 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 3495 "mdbcomp.goal_path.c"
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
#line 3545 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3551 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3557 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3563 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 3567 "mdbcomp.goal_path.c"
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
#line 3580 "mdbcomp.goal_path.c"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3586 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3592 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3598 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3604 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3610 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3616 "mdbcomp.goal_path.c"
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
#line 3640 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 77 "mdbcomp.goal_path.m"
                                          if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3646 "mdbcomp.goal_path.c"
                                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                          else
#line 77 "mdbcomp.goal_path.m"
                                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3652 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                            else
#line 3656 "mdbcomp.goal_path.c"
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
#line 3671 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3677 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3683 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3689 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3695 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3701 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3707 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3713 "mdbcomp.goal_path.c"
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
#line 3737 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                            else
#line 77 "mdbcomp.goal_path.m"
                                              if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3743 "mdbcomp.goal_path.c"
                                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                              else
#line 3747 "mdbcomp.goal_path.c"
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
#line 3762 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3768 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3774 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3780 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3786 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3792 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3798 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 77 "mdbcomp.goal_path.m"
                                          if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3804 "mdbcomp.goal_path.c"
                                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                          else
#line 77 "mdbcomp.goal_path.m"
                                            if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3810 "mdbcomp.goal_path.c"
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
#line 3834 "mdbcomp.goal_path.c"
                                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                                else
#line 3838 "mdbcomp.goal_path.c"
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
#line 3853 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3859 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3865 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3871 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3877 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3883 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 77 "mdbcomp.goal_path.m"
                                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3889 "mdbcomp.goal_path.c"
                                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                          else
#line 77 "mdbcomp.goal_path.m"
                                            if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3895 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                            else
#line 77 "mdbcomp.goal_path.m"
                                              if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3901 "mdbcomp.goal_path.c"
                                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                              else
#line 77 "mdbcomp.goal_path.m"
                                                if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3907 "mdbcomp.goal_path.c"
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
#line 3933 "mdbcomp.goal_path.c"
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
#line 3948 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3954 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3960 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3966 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3972 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3978 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 77 "mdbcomp.goal_path.m"
                                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3984 "mdbcomp.goal_path.c"
                                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                          else
#line 77 "mdbcomp.goal_path.m"
                                            if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3990 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                            else
#line 77 "mdbcomp.goal_path.m"
                                              if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3996 "mdbcomp.goal_path.c"
                                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                              else
#line 77 "mdbcomp.goal_path.m"
                                                if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4002 "mdbcomp.goal_path.c"
                                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                                else
#line 77 "mdbcomp.goal_path.m"
                                                  if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4008 "mdbcomp.goal_path.c"
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
#line 4026 "mdbcomp.goal_path.c"
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
#line 4200 "mdbcomp.goal_path.c"
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
#line 4225 "mdbcomp.goal_path.c"
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
#line 4250 "mdbcomp.goal_path.c"
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
#line 4275 "mdbcomp.goal_path.c"
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
#line 4304 "mdbcomp.goal_path.c"
                                  mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_7_7 == mdbcomp__goal_path__V_9_9);
#line 77 "mdbcomp.goal_path.m"
                                  if (mdbcomp__goal_path__succeeded)
#line 4308 "mdbcomp.goal_path.c"
                                    {
#line 4310 "mdbcomp.goal_path.c"
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
#line 4348 "mdbcomp.goal_path.c"
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

#line 4406 "mdbcomp.goal_path.c"
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
#line 4505 "mdbcomp.goal_path.c"
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

#line 4518 "mdbcomp.goal_path.c"
        {
#line 4520 "mdbcomp.goal_path.c"
          mdbcomp__goal_path__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4522 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4524 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_8));
#line 4526 "mdbcomp.goal_path.c"
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

#line 4579 "mdbcomp.goal_path.c"
        {
#line 4581 "mdbcomp.goal_path.c"
          mdbcomp__goal_path__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4583 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4585 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_9_9, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_7));
#line 4587 "mdbcomp.goal_path.c"
        }
#line 4589 "mdbcomp.goal_path.c"
        {
#line 4591 "mdbcomp.goal_path.c"
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
#line 4633 "mdbcomp.goal_path.c"
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
#line 4645 "mdbcomp.goal_path.c"
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
#line 4658 "mdbcomp.goal_path.c"
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
#line 4676 "mdbcomp.goal_path.c"
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
#line 4788 "mdbcomp.goal_path.c"
                  {
#line 4790 "mdbcomp.goal_path.c"
                    mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__V_5_5, mdbcomp__goal_path__V_7_7);
                  }
#line 67 "mdbcomp.goal_path.m"
                  if (mdbcomp__goal_path__succeeded)
#line 4795 "mdbcomp.goal_path.c"
                    {
#line 4797 "mdbcomp.goal_path.c"
                      /* direct tailcall eliminated */
#line 4799 "mdbcomp.goal_path.c"
                      {
#line 4801 "mdbcomp.goal_path.c"
                        MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__V_6_6;
#line 4803 "mdbcomp.goal_path.c"
                        MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__V_8_8;

#line 4806 "mdbcomp.goal_path.c"
                        mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 4808 "mdbcomp.goal_path.c"
                        mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 4810 "mdbcomp.goal_path.c"
                      }
#line 4812 "mdbcomp.goal_path.c"
                      continue;
#line 4814 "mdbcomp.goal_path.c"
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
#line 4917 "mdbcomp.goal_path.c"
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
#line 4929 "mdbcomp.goal_path.c"
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
#line 4942 "mdbcomp.goal_path.c"
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
#line 4964 "mdbcomp.goal_path.c"
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

#line 5075 "mdbcomp.goal_path.c"
                  mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_11_11 == mdbcomp__goal_path__V_12_12);
#line 62 "mdbcomp.goal_path.m"
                }
#line 227 "mdbcomp.goal_path.m"
              if (mdbcomp__goal_path__succeeded)
#line 5081 "mdbcomp.goal_path.c"
                {
#line 5083 "mdbcomp.goal_path.c"
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
#line 516 "mdbcomp.goal_path.m"
                              {
#line 516 "mdbcomp.goal_path.m"
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
#line 505 "mdbcomp.goal_path.m"
                                    {
#line 505 "mdbcomp.goal_path.m"
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
#line 503 "mdbcomp.goal_path.m"
                                    {
#line 503 "mdbcomp.goal_path.m"
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
#line 516 "mdbcomp.goal_path.m"
                              {
#line 516 "mdbcomp.goal_path.m"
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
#line 505 "mdbcomp.goal_path.m"
                                    {
#line 505 "mdbcomp.goal_path.m"
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
#line 503 "mdbcomp.goal_path.m"
                                    {
#line 503 "mdbcomp.goal_path.m"
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

#line 6375 "mdbcomp.goal_path.c"
    {
#line 6377 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6379 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6381 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_13_13, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_11));
#line 6383 "mdbcomp.goal_path.c"
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
#line 6454 "mdbcomp.goal_path.c"
    {
#line 6456 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6458 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6460 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_14_14, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_12));
#line 6462 "mdbcomp.goal_path.c"
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

#line 6508 "mdbcomp.goal_path.c"
    {
#line 6510 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6512 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6514 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_10));
#line 6516 "mdbcomp.goal_path.c"
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
#line 654 "mdbcomp.goal_path.m"
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

#line 6570 "mdbcomp.goal_path.c"
    {
#line 6572 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6574 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6576 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_8));
#line 6578 "mdbcomp.goal_path.c"
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
#line 651 "mdbcomp.goal_path.m"
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
#line 626 "mdbcomp.goal_path.m"
    {
#line 626 "mdbcomp.goal_path.m"
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
#line 601 "mdbcomp.goal_path.m"
    {
#line 601 "mdbcomp.goal_path.m"
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
#line 601 "mdbcomp.goal_path.m"
    {
#line 601 "mdbcomp.goal_path.m"
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

#line 6906 "mdbcomp.goal_path.c"
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

#line 383 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 383 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 383 "mdbcomp.goal_path.m"
              {
#line 383 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__StepB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 383 "mdbcomp.goal_path.m"
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
#line 383 "mdbcomp.goal_path.m"
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

#line 347 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 347 "mdbcomp.goal_path.m"
      {
#line 347 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__HeadStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 347 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__TailSteps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 348 "mdbcomp.goal_path.m"
        {
#line 348 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(mdbcomp__goal_path__HeadStep_4, mdbcomp__goal_path__TailSteps_5, mdbcomp__goal_path__AllButLastGoalPath_6, mdbcomp__goal_path__LastStep_7);
        }
#line 348 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 347 "mdbcomp.goal_path.m"
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
