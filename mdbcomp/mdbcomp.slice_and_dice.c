/*
** Automatically generated from `slice_and_dice.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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


/* :- module mdbcomp.slice_and_dice. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__slice_and_dice__init
ENDINIT
*/

#include "mdbcomp.slice_and_dice.mih"
#include "mdbcomp.slice_and_dice.mh"


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
#include "float.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"




#line 73 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 76 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 79 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 82 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 85 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;

#line 88 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 91 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 94 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 97 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;

#line 100 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 103 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 106 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 109 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0[3];

#line 112 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0[3];

#line 115 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0;

#line 118 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0[1];

#line 121 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0[1];

#line 124 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0[1];

#line 127 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0[1];

#line 130 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0[6];

#line 133 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0[6];

#line 136 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0;

#line 139 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0[1];

#line 142 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0[1];

#line 145 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0[1];

#line 148 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0[1];

#line 151 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0[3];

#line 154 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0[3];

#line 157 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0;

#line 160 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0[1];

#line 163 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0[1];

#line 166 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0[1];

#line 169 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0[1];

#line 172 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 175 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0[2];

#line 178 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0[2];

#line 181 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0;

#line 184 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0[1];

#line 187 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0[1];

#line 190 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0[1];

#line 193 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0[1];

#line 196 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0[4];

#line 199 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0[4];

#line 202 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0;

#line 205 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0[1];

#line 208 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0[1];

#line 211 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0[1];

#line 214 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0[1];

#line 217 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0[3];

#line 220 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0[3];

#line 223 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0;

#line 226 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0[1];

#line 229 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0[1];

#line 232 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0[1];

#line 235 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0[1];

#line 238 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0;

#line 241 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1;

#line 244 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0[2];

#line 247 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0[2];

#line 250 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0[2];

#line 253 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0_10001(
#line 256 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 258 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 261 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0_10001(
#line 264 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 266 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 268 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 271 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001(
#line 274 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 276 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 279 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001(
#line 282 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 284 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 286 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 289 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001(
#line 292 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 294 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 297 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001(
#line 300 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 302 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 304 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 307 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001(
#line 310 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 312 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 315 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001(
#line 318 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 320 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 322 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 325 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001(
#line 328 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 330 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 333 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001(
#line 336 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 338 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 340 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 343 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001(
#line 346 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 348 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 351 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001(
#line 354 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 356 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 358 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 361 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0_10001(
#line 364 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 366 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 369 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0_10001(
#line 372 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 374 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 376 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 379 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001(
#line 382 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 384 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 387 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001(
#line 390 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 392 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 394 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 397 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001(
#line 400 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 402 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 405 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001(
#line 408 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 410 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 412 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 415 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001(
#line 418 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 420 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 423 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001(
#line 426 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 428 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 430 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 433 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001(
#line 436 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 438 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 441 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001(
#line 444 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 446 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 448 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 856 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8(
#line 856 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 856 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 854 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7(
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 853 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6(
#line 853 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 853 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 852 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5(
#line 852 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 852 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 851 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4(
#line 851 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 851 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 850 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3(
#line 850 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 850 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 849 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2(
#line 849 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 849 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 846 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1(
#line 846 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 846 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_7,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_8);

#line 841 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(
#line 841 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCounts_8,
#line 841 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__TotalPassTests_9,
#line 841 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_11,
#line 841 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_12,
#line 841 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_13);

#line 618 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__618__1_2_p_0(
#line 618 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__HeadVar__1_55,
#line 618 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__HeadVar__2_87);

#line 317 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(
#line 317 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 317 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 317 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3);

#line 317 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(
#line 317 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_1,
#line 317 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 436 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(
#line 436 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 436 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 436 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3);

#line 436 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(
#line 436 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 436 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 704 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(
#line 704 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 704 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 704 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3);

#line 704 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(
#line 704 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 704 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 994 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_path_port_1_f_0(
#line 994 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1);

#line 967 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_proc_label_1_f_0(
#line 967 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_3);

#line 951 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_float_2_f_0(
#line 951 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__DecimalPlaces_4,
#line 951 "slice_and_dice.m"
  MR_Float mdbcomp__slice_and_dice__Flt_5);

#line 947 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__bracket_int_1_f_0(
#line 947 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__X_3);

#line 922 "slice_and_dice.m"
static MR_Float MR_CALL 
mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0(
#line 922 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Dice_4,
#line 922 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__LabelLayout_5);

#line 868 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(
#line 868 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__DiceLabelCount_9,
#line 868 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_10,
#line 868 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__PathPort_11,
#line 868 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__FormattedContext_12,
#line 868 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__PassCount_13,
#line 868 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__PassTests_14,
#line 868 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__FailCount_15,
#line 868 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__FailTests_16);

#line 833 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(
#line 833 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
#line 833 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 833 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__DiceLabelCount_7);

#line 830 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1(
#line 830 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 830 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 830 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

#line 825 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(
#line 825 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
#line 825 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcDice_6,
#line 825 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
#line 825 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);

#line 751 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(
#line 751 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 751 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
#line 751 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
#line 751 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8);

#line 717 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(
#line 717 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 717 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
#line 717 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
#line 717 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8);

#line 711 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(
#line 711 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_3,
#line 711 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 658 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0(
#line 658 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_10,
#line 658 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_11,
#line 658 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_12,
#line 658 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__MaxRow_13,
#line 658 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_14,
#line 658 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__DiceStr_15,
#line 658 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__Problem_16);

#line 634 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(
#line 634 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_7,
#line 634 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__PathPort_8,
#line 634 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_9,
#line 634 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__FormattedContext_10,
#line 634 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__Count_11,
#line 634 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__Tests_12);

#line 627 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6(
#line 627 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 627 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 618 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5(
#line 618 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 618 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 612 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4(
#line 612 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 612 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 611 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3(
#line 611 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 611 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 610 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2(
#line 610 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 610 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 608 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1(
#line 608 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 608 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6);

#line 603 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(
#line 603 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCounts_7,
#line 603 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__TotalTests_8,
#line 603 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_9,
#line 603 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybePathColumns_10,
#line 603 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_11);

#line 595 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(
#line 595 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
#line 595 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 595 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__SliceLabelCount_7);

#line 591 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1(
#line 591 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 591 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 591 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

#line 586 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(
#line 586 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
#line 586 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcSlice_6,
#line 586 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
#line 586 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);

#line 536 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(
#line 536 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 536 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
#line 536 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
#line 536 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8);

#line 454 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(
#line 454 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 454 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
#line 454 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
#line 454 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8);

#line 449 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(
#line 449 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_2);

#line 443 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(
#line 443 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_3,
#line 443 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 370 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(
#line 370 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 370 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_2,
#line 370 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_3,
#line 370 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_4);

#line 352 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1(
#line 352 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 352 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 352 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

#line 347 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(
#line 347 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FileName_7,
#line 347 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Kind_8,
#line 347 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__PathPort_9,
#line 347 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_10,
#line 347 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17,
#line 347 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18);

#line 342 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2(
#line 342 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 342 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 342 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 342 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 342 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 338 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1(
#line 338 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 338 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 338 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 338 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 338 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 329 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(
#line 329 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Kind_6,
#line 329 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_7,
#line 329 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_8,
#line 329 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15,
#line 329 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16);

#line 308 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0(
#line 308 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 308 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Dice_2);

#line 299 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0(
#line 299 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 299 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__HeadVar__2_2);

#line 258 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(
#line 258 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_4,
#line 258 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_5,
#line 258 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_6);

#line 247 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1(
#line 247 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 247 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 247 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

#line 242 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(
#line 242 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FileName_6,
#line 242 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__PathPort_7,
#line 242 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_8,
#line 242 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15,
#line 242 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16);

#line 237 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2(
#line 237 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 237 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 237 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 237 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 237 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 233 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1(
#line 233 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 233 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 233 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 233 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 233 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 225 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(
#line 225 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_5,
#line 225 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_6,
#line 225 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13,
#line 225 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14);

#line 681 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3(
#line 681 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 681 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 681 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 681 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3);

#line 676 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2(
#line 676 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 676 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 823 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1(
#line 823 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 823 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 823 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 823 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 823 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 327 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_2(
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 327 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 327 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_1(
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 327 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 414 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4(
#line 414 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 414 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 414 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 414 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3);

#line 408 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3(
#line 408 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 408 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 401 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2(
#line 401 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 401 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 584 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1(
#line 584 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 584 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 584 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 584 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 584 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 223 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0_1(
#line 223 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 223 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 223 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 223 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 223 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);


static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_1[24][3];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_2[15][2];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_3[6][7];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_4[6][5];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_5[5][4];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_6[2][8];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_7[5][6];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_8[2][9];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_9[1][11];




static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_1[24][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__string__string__type_ctor_info_justified_column_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_2[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_slice_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[1])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_5[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[1])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[2])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_9[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[2])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[3])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_2[15][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 84)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 116)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 67)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 99)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 68)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 100)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 83)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 115)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 70)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 102)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 80)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 112)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[13])))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_3[6][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_4[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_5[5][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_dice_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[0])),
    ((MR_Box) (mdbcomp__slice_and_dice__read_dice_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[5])),
    ((MR_Box) (mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[4])),
    ((MR_Box) (mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_6[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_7[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_8[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0)),
    ((MR_Box) (&mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "mdbcomp.slice_and_dice.mh"
#include "mdbcomp.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"

#line 924 "slice_and_dice.m"
MR_Float 
MR_MDBCOMP_get_suspicion_for_label_layout(
#line 924 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Dice_4,
#line 924 "slice_and_dice.m"
  const MR_LabelLayout * mdbcomp__slice_and_dice__LabelLayout_5)
#line 924 "slice_and_dice.m"
{
#line 924 "slice_and_dice.m"
	MR_Box mdbcomp__slice_and_dice__boxed_LabelLayout_5;
	MR_Float ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdbcomp__slice_and_dice__LabelLayout_5, mdbcomp__slice_and_dice__boxed_LabelLayout_5);
	ret_value = (MR_Float)mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0((MR_Word) mdbcomp__slice_and_dice__Dice_4, mdbcomp__slice_and_dice__boxed_LabelLayout_5);
	return ret_value;
}

#line 654 "slice_and_dice.m"
void 
MR_MDBCOMP_read_dice_to_string(
#line 654 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_10,
#line 654 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_11,
#line 654 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_12,
#line 654 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__MaxRow_13,
#line 654 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_14,
#line 654 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__DiceStr_15,
#line 654 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__Problem_16)
#line 654 "slice_and_dice.m"
{
#line 654 "slice_and_dice.m"
	mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0((MR_String) mdbcomp__slice_and_dice__PassFile_10, (MR_String) mdbcomp__slice_and_dice__FailFile_11, (MR_String) mdbcomp__slice_and_dice__SortStr_12, (MR_Integer) mdbcomp__slice_and_dice__MaxRow_13, (MR_String) mdbcomp__slice_and_dice__Module_14, (MR_String *) mdbcomp__slice_and_dice__DiceStr_15, (MR_String *) mdbcomp__slice_and_dice__Problem_16);
}

#line 310 "slice_and_dice.m"
void 
MR_MDBCOMP_det_maybe_dice_error_to_dice(
#line 310 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 310 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Dice_2)
#line 310 "slice_and_dice.m"
{
#line 310 "slice_and_dice.m"
	mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Word *) mdbcomp__slice_and_dice__Dice_2);
}

#line 302 "slice_and_dice.m"
void 
MR_MDBCOMP_maybe_dice_error_to_problem_string(
#line 302 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 302 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__HeadVar__2_2)
#line 302 "slice_and_dice.m"
{
#line 302 "slice_and_dice.m"
	mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1, (MR_String *) mdbcomp__slice_and_dice__HeadVar__2_2);
}

#line 272 "slice_and_dice.m"
void 
MR_MDBCOMP_read_dice(
#line 272 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_6,
#line 272 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_7,
#line 272 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 272 "slice_and_dice.m"
{
#line 272 "slice_and_dice.m"
	mdbcomp__slice_and_dice__read_dice_5_p_0((MR_String) mdbcomp__slice_and_dice__PassFile_6, (MR_String) mdbcomp__slice_and_dice__FailFile_7, (MR_Word *) mdbcomp__slice_and_dice__Result_8);
}


#line 1804 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1813 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 1822 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 1831 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 1840 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0
  }
};

#line 1848 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1857 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1866 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1875 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0
  }
};

#line 1883 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 1892 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1901 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1910 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
};

#line 1917 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0[3] = {
  (MR_String) "num_pass_tests",
  (MR_String) "num_fail_tests",
  (MR_String) "dice_proc_map"
};

#line 1924 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0 = {
  (MR_String) "dice",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0,
  NULL,
  NULL
};

#line 1939 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0
};

#line 1944 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0
  }
};

#line 1953 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0
};

#line 1958 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0[1] = {
  (MR_Integer) 0
};

#line 1963 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice",
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0
  },
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0
};

#line 1984 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1994 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0[6] = {
  (MR_String) "dice_filename",
  (MR_String) "dice_linenumber",
  (MR_String) "pass_count",
  (MR_String) "pass_tests",
  (MR_String) "fail_count",
  (MR_String) "fail_tests"
};

#line 2004 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0 = {
  (MR_String) "dice_exec_count",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0,
  NULL,
  NULL
};

#line 2019 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0
};

#line 2024 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0
  }
};

#line 2033 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0
};

#line 2038 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0[1] = {
  (MR_Integer) 0
};

#line 2043 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice_exec_count",
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0
  },
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0
};

#line 2064 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
};

#line 2071 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0[3] = {
  (MR_String) "dlc_proc_label",
  (MR_String) "dlc_path_port",
  (MR_String) "dlc_counts"
};

#line 2078 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0 = {
  (MR_String) "dice_label_count",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0,
  NULL,
  NULL
};

#line 2093 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0
};

#line 2098 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0
  }
};

#line 2107 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0
};

#line 2112 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0[1] = {
  (MR_Integer) 0
};

#line 2117 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice_label_count",
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0
  },
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0
};

#line 2138 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "dice_proc_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2159 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "proc_dice",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2180 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "proc_slice",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2201 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 2210 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
};

#line 2216 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0[2] = {
  (MR_String) "num_tests",
  (MR_String) "slice_proc_map"
};

#line 2222 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0 = {
  (MR_String) "slice",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0,
  NULL,
  NULL
};

#line 2237 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0
};

#line 2242 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0
  }
};

#line 2251 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0
};

#line 2256 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0[1] = {
  (MR_Integer) 0
};

#line 2261 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice",
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0
  },
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0
};

#line 2282 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2290 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0[4] = {
  (MR_String) "slice_filename",
  (MR_String) "slice_linenumber",
  (MR_String) "slice_count",
  (MR_String) "slice_tests"
};

#line 2298 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0 = {
  (MR_String) "slice_exec_count",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0,
  NULL,
  NULL
};

#line 2313 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0
};

#line 2318 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0
  }
};

#line 2327 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0
};

#line 2332 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0[1] = {
  (MR_Integer) 0
};

#line 2337 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice_exec_count",
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0
  },
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0
};

#line 2358 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
};

#line 2365 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0[3] = {
  (MR_String) "slc_proc_label",
  (MR_String) "slc_path_port",
  (MR_String) "slc_counts"
};

#line 2372 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0 = {
  (MR_String) "slice_label_count",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0,
  NULL,
  NULL
};

#line 2387 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0
};

#line 2392 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0
  }
};

#line 2401 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0
};

#line 2406 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0[1] = {
  (MR_Integer) 0
};

#line 2411 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice_label_count",
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0
  },
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0
};

#line 2432 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "slice_proc_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2453 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0 = {
  (MR_String) "pass_slice",
  (MR_Integer) 0
};

#line 2459 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1 = {
  (MR_String) "fail_slice",
  (MR_Integer) 1
};

#line 2465 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0[2] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0,
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1
};

#line 2471 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0[2] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1,
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0
};

#line 2477 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2483 "mdbcomp.slice_and_dice.c"
const MR_TypeCtorInfo_Struct mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001)),
  ((MR_Box) (mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001)),
  (MR_String) "mdbcomp.slice_and_dice",
  (MR_String) "trace_counts_kind",
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0
  },
  {
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0
};

#line 2504 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0_10001(
#line 2507 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2509 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2511 "mdbcomp.slice_and_dice.c"
{
#line 2513 "mdbcomp.slice_and_dice.c"
  {
#line 2515 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2518 "mdbcomp.slice_and_dice.c"
    {
#line 2520 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2523 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2525 "mdbcomp.slice_and_dice.c"
  }
#line 2527 "mdbcomp.slice_and_dice.c"
}

#line 2530 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0_10001(
#line 2533 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2535 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2537 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2539 "mdbcomp.slice_and_dice.c"
{
#line 2541 "mdbcomp.slice_and_dice.c"
  {
#line 2543 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2546 "mdbcomp.slice_and_dice.c"
    {
#line 2548 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____dice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2551 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2553 "mdbcomp.slice_and_dice.c"
  }
#line 2555 "mdbcomp.slice_and_dice.c"
}

#line 2558 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001(
#line 2561 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2563 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2565 "mdbcomp.slice_and_dice.c"
{
#line 2567 "mdbcomp.slice_and_dice.c"
  {
#line 2569 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2572 "mdbcomp.slice_and_dice.c"
    {
#line 2574 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2577 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2579 "mdbcomp.slice_and_dice.c"
  }
#line 2581 "mdbcomp.slice_and_dice.c"
}

#line 2584 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001(
#line 2587 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2589 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2591 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2593 "mdbcomp.slice_and_dice.c"
{
#line 2595 "mdbcomp.slice_and_dice.c"
  {
#line 2597 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2600 "mdbcomp.slice_and_dice.c"
    {
#line 2602 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2605 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2607 "mdbcomp.slice_and_dice.c"
  }
#line 2609 "mdbcomp.slice_and_dice.c"
}

#line 2612 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001(
#line 2615 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2617 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2619 "mdbcomp.slice_and_dice.c"
{
#line 2621 "mdbcomp.slice_and_dice.c"
  {
#line 2623 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2626 "mdbcomp.slice_and_dice.c"
    {
#line 2628 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2631 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2633 "mdbcomp.slice_and_dice.c"
  }
#line 2635 "mdbcomp.slice_and_dice.c"
}

#line 2638 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001(
#line 2641 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2643 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2645 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2647 "mdbcomp.slice_and_dice.c"
{
#line 2649 "mdbcomp.slice_and_dice.c"
  {
#line 2651 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2654 "mdbcomp.slice_and_dice.c"
    {
#line 2656 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2659 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2661 "mdbcomp.slice_and_dice.c"
  }
#line 2663 "mdbcomp.slice_and_dice.c"
}

#line 2666 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001(
#line 2669 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2671 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2673 "mdbcomp.slice_and_dice.c"
{
#line 2675 "mdbcomp.slice_and_dice.c"
  {
#line 2677 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2680 "mdbcomp.slice_and_dice.c"
    {
#line 2682 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2685 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2687 "mdbcomp.slice_and_dice.c"
  }
#line 2689 "mdbcomp.slice_and_dice.c"
}

#line 2692 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001(
#line 2695 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2697 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2699 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2701 "mdbcomp.slice_and_dice.c"
{
#line 2703 "mdbcomp.slice_and_dice.c"
  {
#line 2705 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2708 "mdbcomp.slice_and_dice.c"
    {
#line 2710 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2713 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2715 "mdbcomp.slice_and_dice.c"
  }
#line 2717 "mdbcomp.slice_and_dice.c"
}

#line 2720 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001(
#line 2723 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2725 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2727 "mdbcomp.slice_and_dice.c"
{
#line 2729 "mdbcomp.slice_and_dice.c"
  {
#line 2731 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2734 "mdbcomp.slice_and_dice.c"
    {
#line 2736 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____proc_dice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2739 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2741 "mdbcomp.slice_and_dice.c"
  }
#line 2743 "mdbcomp.slice_and_dice.c"
}

#line 2746 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001(
#line 2749 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2751 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2753 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2755 "mdbcomp.slice_and_dice.c"
{
#line 2757 "mdbcomp.slice_and_dice.c"
  {
#line 2759 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2762 "mdbcomp.slice_and_dice.c"
    {
#line 2764 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____proc_dice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2767 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2769 "mdbcomp.slice_and_dice.c"
  }
#line 2771 "mdbcomp.slice_and_dice.c"
}

#line 2774 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001(
#line 2777 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2779 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2781 "mdbcomp.slice_and_dice.c"
{
#line 2783 "mdbcomp.slice_and_dice.c"
  {
#line 2785 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2788 "mdbcomp.slice_and_dice.c"
    {
#line 2790 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____proc_slice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2793 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2795 "mdbcomp.slice_and_dice.c"
  }
#line 2797 "mdbcomp.slice_and_dice.c"
}

#line 2800 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001(
#line 2803 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2805 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2807 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2809 "mdbcomp.slice_and_dice.c"
{
#line 2811 "mdbcomp.slice_and_dice.c"
  {
#line 2813 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2816 "mdbcomp.slice_and_dice.c"
    {
#line 2818 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____proc_slice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2821 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2823 "mdbcomp.slice_and_dice.c"
  }
#line 2825 "mdbcomp.slice_and_dice.c"
}

#line 2828 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0_10001(
#line 2831 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2833 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2835 "mdbcomp.slice_and_dice.c"
{
#line 2837 "mdbcomp.slice_and_dice.c"
  {
#line 2839 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2842 "mdbcomp.slice_and_dice.c"
    {
#line 2844 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2847 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2849 "mdbcomp.slice_and_dice.c"
  }
#line 2851 "mdbcomp.slice_and_dice.c"
}

#line 2854 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0_10001(
#line 2857 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2859 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2861 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2863 "mdbcomp.slice_and_dice.c"
{
#line 2865 "mdbcomp.slice_and_dice.c"
  {
#line 2867 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2870 "mdbcomp.slice_and_dice.c"
    {
#line 2872 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____slice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2875 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2877 "mdbcomp.slice_and_dice.c"
  }
#line 2879 "mdbcomp.slice_and_dice.c"
}

#line 2882 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001(
#line 2885 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2887 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2889 "mdbcomp.slice_and_dice.c"
{
#line 2891 "mdbcomp.slice_and_dice.c"
  {
#line 2893 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2896 "mdbcomp.slice_and_dice.c"
    {
#line 2898 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2901 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2903 "mdbcomp.slice_and_dice.c"
  }
#line 2905 "mdbcomp.slice_and_dice.c"
}

#line 2908 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001(
#line 2911 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2913 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2915 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2917 "mdbcomp.slice_and_dice.c"
{
#line 2919 "mdbcomp.slice_and_dice.c"
  {
#line 2921 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2924 "mdbcomp.slice_and_dice.c"
    {
#line 2926 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2929 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2931 "mdbcomp.slice_and_dice.c"
  }
#line 2933 "mdbcomp.slice_and_dice.c"
}

#line 2936 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001(
#line 2939 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2941 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2943 "mdbcomp.slice_and_dice.c"
{
#line 2945 "mdbcomp.slice_and_dice.c"
  {
#line 2947 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2950 "mdbcomp.slice_and_dice.c"
    {
#line 2952 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2955 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2957 "mdbcomp.slice_and_dice.c"
  }
#line 2959 "mdbcomp.slice_and_dice.c"
}

#line 2962 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001(
#line 2965 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2967 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2969 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2971 "mdbcomp.slice_and_dice.c"
{
#line 2973 "mdbcomp.slice_and_dice.c"
  {
#line 2975 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2978 "mdbcomp.slice_and_dice.c"
    {
#line 2980 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2983 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2985 "mdbcomp.slice_and_dice.c"
  }
#line 2987 "mdbcomp.slice_and_dice.c"
}

#line 2990 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001(
#line 2993 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2995 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2997 "mdbcomp.slice_and_dice.c"
{
#line 2999 "mdbcomp.slice_and_dice.c"
  {
#line 3001 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 3004 "mdbcomp.slice_and_dice.c"
    {
#line 3006 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 3009 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 3011 "mdbcomp.slice_and_dice.c"
  }
#line 3013 "mdbcomp.slice_and_dice.c"
}

#line 3016 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001(
#line 3019 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 3021 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 3023 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 3025 "mdbcomp.slice_and_dice.c"
{
#line 3027 "mdbcomp.slice_and_dice.c"
  {
#line 3029 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 3032 "mdbcomp.slice_and_dice.c"
    {
#line 3034 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 3037 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 3039 "mdbcomp.slice_and_dice.c"
  }
#line 3041 "mdbcomp.slice_and_dice.c"
}

#line 3044 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001(
#line 3047 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 3049 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 3051 "mdbcomp.slice_and_dice.c"
{
#line 3053 "mdbcomp.slice_and_dice.c"
  {
#line 3055 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 3058 "mdbcomp.slice_and_dice.c"
    {
#line 3060 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 3063 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 3065 "mdbcomp.slice_and_dice.c"
  }
#line 3067 "mdbcomp.slice_and_dice.c"
}

#line 3070 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001(
#line 3073 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 3075 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 3077 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 3079 "mdbcomp.slice_and_dice.c"
{
#line 3081 "mdbcomp.slice_and_dice.c"
  {
#line 3083 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 3086 "mdbcomp.slice_and_dice.c"
    {
#line 3088 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 3091 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 3093 "mdbcomp.slice_and_dice.c"
  }
#line 3095 "mdbcomp.slice_and_dice.c"
}

#line 856 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8(
#line 856 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 856 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 856 "slice_and_dice.m"
{
#line 856 "slice_and_dice.m"
  {
#line 856 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 856 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 856 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv13_HeadVar__3_3;

#line 856 "slice_and_dice.m"
    {
#line 856 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv13_HeadVar__3_3 = mdbcomp__slice_and_dice__format_float_2_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), MR_unbox_float(mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 856 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv13_HeadVar__3_3));
#line 856 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 856 "slice_and_dice.m"
  }
#line 856 "slice_and_dice.m"
}

#line 854 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7(
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 854 "slice_and_dice.m"
{
#line 854 "slice_and_dice.m"
  {
#line 854 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_3;
#line 854 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 854 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__conv12_R1_6;

#line 854 "slice_and_dice.m"
    {
#line 854 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv12_R1_6 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 854 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_3 = MR_box_float(mdbcomp__slice_and_dice__conv12_R1_6);
#line 854 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_3;
#line 854 "slice_and_dice.m"
  }
#line 854 "slice_and_dice.m"
}

#line 853 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6(
#line 853 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 853 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 853 "slice_and_dice.m"
{
#line 853 "slice_and_dice.m"
  {
#line 853 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 853 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 853 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv11_HeadVar__2_2;

#line 853 "slice_and_dice.m"
    {
#line 853 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv11_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 853 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv11_HeadVar__2_2));
#line 853 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 853 "slice_and_dice.m"
  }
#line 853 "slice_and_dice.m"
}

#line 852 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5(
#line 852 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 852 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 852 "slice_and_dice.m"
{
#line 852 "slice_and_dice.m"
  {
#line 852 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 852 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 852 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv10_HeadVar__2_2;

#line 852 "slice_and_dice.m"
    {
#line 852 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv10_HeadVar__2_2 = mdbcomp__slice_and_dice__bracket_int_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 852 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv10_HeadVar__2_2));
#line 852 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 852 "slice_and_dice.m"
  }
#line 852 "slice_and_dice.m"
}

#line 851 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4(
#line 851 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 851 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 851 "slice_and_dice.m"
{
#line 851 "slice_and_dice.m"
  {
#line 851 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 851 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 851 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv9_HeadVar__2_2;

#line 851 "slice_and_dice.m"
    {
#line 851 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv9_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 851 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv9_HeadVar__2_2));
#line 851 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 851 "slice_and_dice.m"
  }
#line 851 "slice_and_dice.m"
}

#line 850 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3(
#line 850 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 850 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 850 "slice_and_dice.m"
{
#line 850 "slice_and_dice.m"
  {
#line 850 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 850 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 850 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv8_HeadVar__2_2;

#line 850 "slice_and_dice.m"
    {
#line 850 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv8_HeadVar__2_2 = mdbcomp__slice_and_dice__format_path_port_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 850 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv8_HeadVar__2_2));
#line 850 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 850 "slice_and_dice.m"
  }
#line 850 "slice_and_dice.m"
}

#line 849 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2(
#line 849 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 849 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 849 "slice_and_dice.m"
{
#line 849 "slice_and_dice.m"
  {
#line 849 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 849 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 849 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv7_Str_4;

#line 849 "slice_and_dice.m"
    {
#line 849 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv7_Str_4 = mdbcomp__slice_and_dice__format_proc_label_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 849 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv7_Str_4));
#line 849 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 849 "slice_and_dice.m"
  }
#line 849 "slice_and_dice.m"
}

#line 846 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1(
#line 846 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 846 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_7,
#line 846 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_8)
#line 846 "slice_and_dice.m"
{
#line 846 "slice_and_dice.m"
  {
#line 846 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv6_ProcLabel_10;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv5_PathPort_11;
#line 846 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv4_FormattedContext_12;
#line 846 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv3_PassCount_13;
#line 846 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv2_PassTests_14;
#line 846 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv1_FailCount_15;
#line 846 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv0_FailTests_16;

#line 846 "slice_and_dice.m"
    {
#line 846 "slice_and_dice.m"
      mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv6_ProcLabel_10, &mdbcomp__slice_and_dice__conv5_PathPort_11, &mdbcomp__slice_and_dice__conv4_FormattedContext_12, &mdbcomp__slice_and_dice__conv3_PassCount_13, &mdbcomp__slice_and_dice__conv2_PassTests_14, &mdbcomp__slice_and_dice__conv1_FailCount_15, &mdbcomp__slice_and_dice__conv0_FailTests_16);
    }
#line 846 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv6_ProcLabel_10));
#line 846 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv5_PathPort_11));
#line 846 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv4_FormattedContext_12));
#line 846 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_5 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_PassCount_13));
#line 846 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_6 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_PassTests_14));
#line 846 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_7 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_FailCount_15));
#line 846 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_8 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_FailTests_16));
#line 846 "slice_and_dice.m"
  }
#line 846 "slice_and_dice.m"
}

#line 841 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(
#line 841 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCounts_8,
#line 841 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__TotalPassTests_9,
#line 841 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_11,
#line 841 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_12,
#line 841 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_13)
#line 841 "slice_and_dice.m"
{
#line 845 "slice_and_dice.m"
  {
#line 845 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 845 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__Str_14;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_94_94 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_95_95 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_96_96 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_108_108;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabels_15;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPorts_16;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedContexts_17;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PassCounts_18;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PassTests_19;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FailCounts_20;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedProcLabels_22;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedPathPorts_23;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PassCountStrs_24;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PassTestsStrs_25;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FailCountStrs_26;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__SuspicionIndices_27;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedSuspicionIndices_28;
#line 845 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__TotalPassTestsStr_29;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Columns_30;
#line 845 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_41_41;
#line 845 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_42_42;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_44_44;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_45_45;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_46_46;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_48_48;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_49_49;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_50_50;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_51_51;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_53_53;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_54_54;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_55_55;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_56_56;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_58_58;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_59_59;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_60_60;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_61_61;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_64_64;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_65_65;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_66_66;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_67_67;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_69_69;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_70_70;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_71_71;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_72_72;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_75_75;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_76_76;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_77_77;
#line 845 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_78_78;
#line 845 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_82_82;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice___FailTests_21;

#line 846 "slice_and_dice.m"
    {
#line 846 "slice_and_dice.m"
      mercury__list__map7_9_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0, mdbcomp__slice_and_dice__TypeCtorInfo_94_94, mdbcomp__slice_and_dice__TypeCtorInfo_95_95, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[17], mdbcomp__slice_and_dice__LabelCounts_8, &mdbcomp__slice_and_dice__ProcLabels_15, &mdbcomp__slice_and_dice__PathPorts_16, &mdbcomp__slice_and_dice__FormattedContexts_17, &mdbcomp__slice_and_dice__PassCounts_18, &mdbcomp__slice_and_dice__PassTests_19, &mdbcomp__slice_and_dice__FailCounts_20, &mdbcomp__slice_and_dice___FailTests_21);
    }
#line 849 "slice_and_dice.m"
    {
#line 849 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedProcLabels_22 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_94_94, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[18], mdbcomp__slice_and_dice__ProcLabels_15);
    }
#line 850 "slice_and_dice.m"
    {
#line 850 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedPathPorts_23 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_95_95, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[19], mdbcomp__slice_and_dice__PathPorts_16);
    }
#line 851 "slice_and_dice.m"
    {
#line 851 "slice_and_dice.m"
      mdbcomp__slice_and_dice__PassCountStrs_24 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[20], mdbcomp__slice_and_dice__PassCounts_18);
    }
#line 852 "slice_and_dice.m"
    {
#line 852 "slice_and_dice.m"
      mdbcomp__slice_and_dice__PassTestsStrs_25 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[21], mdbcomp__slice_and_dice__PassTests_19);
    }
#line 853 "slice_and_dice.m"
    {
#line 853 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FailCountStrs_26 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[22], mdbcomp__slice_and_dice__FailCounts_20);
    }
#line 3544 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_108_108 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 854 "slice_and_dice.m"
    {
#line 854 "slice_and_dice.m"
      mdbcomp__slice_and_dice__SuspicionIndices_27 = mercury__list__map_corresponding_3_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_108_108, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[23], mdbcomp__slice_and_dice__PassCounts_18, mdbcomp__slice_and_dice__FailCounts_20);
    }
#line 856 "slice_and_dice.m"
    {
#line 856 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedSuspicionIndices_28 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_108_108, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[4], mdbcomp__slice_and_dice__SuspicionIndices_27);
    }
#line 857 "slice_and_dice.m"
    {
#line 857 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_42_42 = mercury__string__int_to_string_thousands_1_f_0(mdbcomp__slice_and_dice__TotalPassTests_9);
    }
#line 857 "slice_and_dice.m"
    {
#line 857 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_41_41 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_42_42, (MR_String) ")");
    }
#line 857 "slice_and_dice.m"
    {
#line 857 "slice_and_dice.m"
      mdbcomp__slice_and_dice__TotalPassTestsStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "(", mdbcomp__slice_and_dice__V_41_41);
    }
#line 859 "slice_and_dice.m"
    {
#line 859 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_46_46, 0) = ((MR_Box) ((MR_String) "Procedure"));
#line 859 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_46_46, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedProcLabels_22));
#line 859 "slice_and_dice.m"
    }
#line 859 "slice_and_dice.m"
    {
#line 859 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 859 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_45_45, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_46_46));
#line 859 "slice_and_dice.m"
    }
#line 859 "slice_and_dice.m"
    {
#line 859 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 859 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_44_44, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_45_45));
#line 859 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_44_44, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxPredColumns_11));
#line 859 "slice_and_dice.m"
    }
#line 860 "slice_and_dice.m"
    {
#line 860 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_51_51, 0) = ((MR_Box) ((MR_String) "Path/Port"));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_51_51, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedPathPorts_23));
#line 860 "slice_and_dice.m"
    }
#line 860 "slice_and_dice.m"
    {
#line 860 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_50_50, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_51_51));
#line 860 "slice_and_dice.m"
    }
#line 860 "slice_and_dice.m"
    {
#line 860 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_49_49, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_50_50));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_49_49, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxPathColumns_12));
#line 860 "slice_and_dice.m"
    }
#line 861 "slice_and_dice.m"
    {
#line 861 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_56_56, 0) = ((MR_Box) ((MR_String) "File:Line"));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_56_56, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedContexts_17));
#line 861 "slice_and_dice.m"
    }
#line 861 "slice_and_dice.m"
    {
#line 861 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_55_55, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_56_56));
#line 861 "slice_and_dice.m"
    }
#line 861 "slice_and_dice.m"
    {
#line 861 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_54_54, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_55_55));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_54_54, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxFileColumns_13));
#line 861 "slice_and_dice.m"
    }
#line 862 "slice_and_dice.m"
    {
#line 862 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_61_61, 0) = ((MR_Box) ((MR_String) "Pass"));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_61_61, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PassCountStrs_24));
#line 862 "slice_and_dice.m"
    }
#line 862 "slice_and_dice.m"
    {
#line 862 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_60_60, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_61_61));
#line 862 "slice_and_dice.m"
    }
#line 862 "slice_and_dice.m"
    {
#line 862 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_59_59, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_60_60));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 862 "slice_and_dice.m"
    }
#line 863 "slice_and_dice.m"
    {
#line 863 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_67_67, 0) = ((MR_Box) (mdbcomp__slice_and_dice__TotalPassTestsStr_29));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_67_67, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PassTestsStrs_25));
#line 863 "slice_and_dice.m"
    }
#line 863 "slice_and_dice.m"
    {
#line 863 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_66_66, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_67_67));
#line 863 "slice_and_dice.m"
    }
#line 863 "slice_and_dice.m"
    {
#line 863 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_65_65, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_66_66));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "slice_and_dice.m"
    }
#line 864 "slice_and_dice.m"
    {
#line 864 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_72_72, 0) = ((MR_Box) ((MR_String) "Fail"));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_72_72, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FailCountStrs_26));
#line 864 "slice_and_dice.m"
    }
#line 864 "slice_and_dice.m"
    {
#line 864 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_71_71, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_72_72));
#line 864 "slice_and_dice.m"
    }
#line 864 "slice_and_dice.m"
    {
#line 864 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_70_70, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_71_71));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "slice_and_dice.m"
    }
#line 865 "slice_and_dice.m"
    {
#line 865 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_78_78, 0) = ((MR_Box) ((MR_String) "Suspicion"));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_78_78, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedSuspicionIndices_28));
#line 865 "slice_and_dice.m"
    }
#line 865 "slice_and_dice.m"
    {
#line 865 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_77_77, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_78_78));
#line 865 "slice_and_dice.m"
    }
#line 865 "slice_and_dice.m"
    {
#line 865 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_76_76, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_77_77));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "slice_and_dice.m"
    }
#line 864 "slice_and_dice.m"
    {
#line 864 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_75_75, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_76_76));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "slice_and_dice.m"
    }
#line 863 "slice_and_dice.m"
    {
#line 863 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_69_69, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_70_70));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_69_69, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_75_75));
#line 863 "slice_and_dice.m"
    }
#line 862 "slice_and_dice.m"
    {
#line 862 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_64_64, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_65_65));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_64_64, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_69_69));
#line 862 "slice_and_dice.m"
    }
#line 861 "slice_and_dice.m"
    {
#line 861 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_58_58, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_59_59));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_58_58, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_64_64));
#line 861 "slice_and_dice.m"
    }
#line 860 "slice_and_dice.m"
    {
#line 860 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_53_53, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_54_54));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_53_53, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_58_58));
#line 860 "slice_and_dice.m"
    }
#line 859 "slice_and_dice.m"
    {
#line 859 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_48_48, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_49_49));
#line 859 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_48_48, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_53_53));
#line 859 "slice_and_dice.m"
    }
#line 858 "slice_and_dice.m"
    {
#line 858 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Columns_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Columns_30, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_44_44));
#line 858 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Columns_30, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_48_48));
#line 858 "slice_and_dice.m"
    }
#line 866 "slice_and_dice.m"
    {
#line 866 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_82_82 = mercury__string__format_table_max_2_f_0(mdbcomp__slice_and_dice__Columns_30, (MR_String) " ");
    }
#line 866 "slice_and_dice.m"
    {
#line 866 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__Str_14 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_82_82, (MR_String) "\n");
    }
#line 845 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__Str_14;
#line 845 "slice_and_dice.m"
  }
#line 841 "slice_and_dice.m"
}

#line 618 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__618__1_2_p_0(
#line 618 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__HeadVar__1_55,
#line 618 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__HeadVar__2_87)
#line 618 "slice_and_dice.m"
{
#line 618 "slice_and_dice.m"
  {
#line 618 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__HeadVar__1_55 == mdbcomp__slice_and_dice__HeadVar__2_87);

#line 618 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 618 "slice_and_dice.m"
  }
#line 618 "slice_and_dice.m"
}

#line 317 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(
#line 317 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 317 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 317 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 317 "slice_and_dice.m"
{
#line 317 "slice_and_dice.m"
  {
#line 317 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 317 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 317 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 317 "slice_and_dice.m"
    {
#line 317 "slice_and_dice.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__Cast_HeadVar1_4, mdbcomp__slice_and_dice__Cast_HeadVar2_5);
#line 317 "slice_and_dice.m"
      return;
    }
#line 317 "slice_and_dice.m"
  }
#line 317 "slice_and_dice.m"
}

#line 317 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(
#line 317 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_1,
#line 317 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 317 "slice_and_dice.m"
{
#line 3916 "mdbcomp.slice_and_dice.c"
  {
#line 3918 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__HeadVar__2_1 == mdbcomp__slice_and_dice__HeadVar__2_2);

#line 3921 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 3923 "mdbcomp.slice_and_dice.c"
  }
#line 317 "slice_and_dice.m"
}

#line 36 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0(
#line 36 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 36 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 36 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 36 "slice_and_dice.m"
{
#line 36 "slice_and_dice.m"
  {
#line 36 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 36 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_4 = mdbcomp__slice_and_dice__HeadVar__2_2;
#line 36 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_5 = mdbcomp__slice_and_dice__HeadVar__3_3;

#line 36 "slice_and_dice.m"
    {
#line 36 "slice_and_dice.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_5)));
#line 36 "slice_and_dice.m"
      return;
    }
#line 36 "slice_and_dice.m"
  }
#line 36 "slice_and_dice.m"
}

#line 36 "slice_and_dice.m"
MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0(
#line 36 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 36 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 36 "slice_and_dice.m"
{
#line 36 "slice_and_dice.m"
  {
#line 36 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 36 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_3 = mdbcomp__slice_and_dice__HeadVar__1_1;
#line 36 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_4 = mdbcomp__slice_and_dice__HeadVar__2_2;

#line 36 "slice_and_dice.m"
    {
#line 36 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3], ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_4)));
    }
#line 36 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 36 "slice_and_dice.m"
  }
#line 36 "slice_and_dice.m"
}

#line 436 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(
#line 436 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 436 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 436 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 436 "slice_and_dice.m"
{
#line 436 "slice_and_dice.m"
  {
#line 436 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 436 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 436 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_13 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 436 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_12 == mdbcomp__slice_and_dice__CastY_13);
#line 436 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 4014 "mdbcomp.slice_and_dice.c"
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
#line 436 "slice_and_dice.m"
    else
#line 436 "slice_and_dice.m"
      {
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_10_10;

#line 436 "slice_and_dice.m"
        {
#line 436 "slice_and_dice.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__V_10_10, mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_7_7);
        }
#line 4040 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_10_10 == (MR_Integer) 0);
#line 436 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 436 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 436 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_10_10;
#line 436 "slice_and_dice.m"
        else
#line 436 "slice_and_dice.m"
          {
#line 436 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_11_11;

#line 436 "slice_and_dice.m"
            {
#line 436 "slice_and_dice.m"
              mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__V_11_11, mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_8_8);
            }
#line 4060 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_11_11 == (MR_Integer) 0);
#line 436 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 436 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 436 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_11_11;
#line 436 "slice_and_dice.m"
            else
#line 436 "slice_and_dice.m"
              {
#line 436 "slice_and_dice.m"
                mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__V_6_6, mdbcomp__slice_and_dice__V_9_9);
#line 436 "slice_and_dice.m"
                return;
              }
#line 436 "slice_and_dice.m"
          }
#line 436 "slice_and_dice.m"
      }
#line 436 "slice_and_dice.m"
  }
#line 436 "slice_and_dice.m"
}

#line 436 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(
#line 436 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 436 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 436 "slice_and_dice.m"
{
#line 436 "slice_and_dice.m"
  {
#line 436 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 436 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
#line 436 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

#line 436 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
#line 436 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 436 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 436 "slice_and_dice.m"
    else
#line 436 "slice_and_dice.m"
      {
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 436 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

#line 4127 "mdbcomp.slice_and_dice.c"
        {
#line 4129 "mdbcomp.slice_and_dice.c"
          mdbcomp__slice_and_dice__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdbcomp__slice_and_dice__V_3_3, mdbcomp__slice_and_dice__V_6_6);
        }
#line 436 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 436 "slice_and_dice.m"
          {
#line 4136 "mdbcomp.slice_and_dice.c"
            {
#line 4138 "mdbcomp.slice_and_dice.c"
              mdbcomp__slice_and_dice__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_7_7);
            }
#line 436 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 4143 "mdbcomp.slice_and_dice.c"
              {
#line 4145 "mdbcomp.slice_and_dice.c"
                return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_8_8);
              }
#line 436 "slice_and_dice.m"
          }
#line 436 "slice_and_dice.m"
      }
#line 436 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 436 "slice_and_dice.m"
  }
#line 436 "slice_and_dice.m"
}

#line 40 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(
#line 40 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 40 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 40 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 40 "slice_and_dice.m"
{
#line 40 "slice_and_dice.m"
  {
#line 40 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 40 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_15 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 40 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_16 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 40 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_15 == mdbcomp__slice_and_dice__CastY_16);
#line 40 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 4183 "mdbcomp.slice_and_dice.c"
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "slice_and_dice.m"
    else
#line 40 "slice_and_dice.m"
      {
#line 40 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 3)));
#line 40 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 3)));
#line 40 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_12_12;

#line 40 "slice_and_dice.m"
        {
#line 40 "slice_and_dice.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__slice_and_dice__V_12_12, mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_8_8);
        }
#line 4213 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_12_12 == (MR_Integer) 0);
#line 40 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 40 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 40 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_12_12;
#line 40 "slice_and_dice.m"
        else
#line 40 "slice_and_dice.m"
          {
#line 40 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_13_13;

#line 40 "slice_and_dice.m"
            {
#line 40 "slice_and_dice.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__V_13_13, mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_9_9);
            }
#line 4233 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_13_13 == (MR_Integer) 0);
#line 40 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 40 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 40 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_13_13;
#line 40 "slice_and_dice.m"
            else
#line 40 "slice_and_dice.m"
              {
#line 40 "slice_and_dice.m"
                MR_Word mdbcomp__slice_and_dice__V_14_14;

#line 40 "slice_and_dice.m"
                {
#line 40 "slice_and_dice.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__V_14_14, mdbcomp__slice_and_dice__V_6_6, mdbcomp__slice_and_dice__V_10_10);
                }
#line 4253 "mdbcomp.slice_and_dice.c"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_14_14 == (MR_Integer) 0);
#line 40 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 40 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 40 "slice_and_dice.m"
                  *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_14_14;
#line 40 "slice_and_dice.m"
                else
#line 40 "slice_and_dice.m"
                  {
#line 40 "slice_and_dice.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__V_7_7, mdbcomp__slice_and_dice__V_11_11);
#line 40 "slice_and_dice.m"
                    return;
                  }
#line 40 "slice_and_dice.m"
              }
#line 40 "slice_and_dice.m"
          }
#line 40 "slice_and_dice.m"
      }
#line 40 "slice_and_dice.m"
  }
#line 40 "slice_and_dice.m"
}

#line 40 "slice_and_dice.m"
MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(
#line 40 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 40 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 40 "slice_and_dice.m"
{
#line 40 "slice_and_dice.m"
  {
#line 40 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 40 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_11 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
#line 40 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

#line 40 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_11 == mdbcomp__slice_and_dice__CastY_12);
#line 40 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 40 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 40 "slice_and_dice.m"
    else
#line 40 "slice_and_dice.m"
      {
#line 40 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 3)));
#line 40 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
#line 40 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 3)));

#line 4326 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__V_3_3, mdbcomp__slice_and_dice__V_7_7) == 0);
#line 40 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 40 "slice_and_dice.m"
          {
#line 4332 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_4_4 == mdbcomp__slice_and_dice__V_8_8);
#line 40 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 40 "slice_and_dice.m"
              {
#line 4338 "mdbcomp.slice_and_dice.c"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_5_5 == mdbcomp__slice_and_dice__V_9_9);
#line 40 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 4342 "mdbcomp.slice_and_dice.c"
                  mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_6_6 == mdbcomp__slice_and_dice__V_10_10);
#line 40 "slice_and_dice.m"
              }
#line 40 "slice_and_dice.m"
          }
#line 40 "slice_and_dice.m"
      }
#line 40 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 40 "slice_and_dice.m"
  }
#line 40 "slice_and_dice.m"
}

#line 30 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0(
#line 30 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 30 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 30 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 30 "slice_and_dice.m"
{
#line 30 "slice_and_dice.m"
  {
#line 30 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 30 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 30 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 30 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
#line 30 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 4381 "mdbcomp.slice_and_dice.c"
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "slice_and_dice.m"
    else
#line 30 "slice_and_dice.m"
      {
#line 30 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 30 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
#line 30 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8;

#line 30 "slice_and_dice.m"
        {
#line 30 "slice_and_dice.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__V_8_8, mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_6_6);
        }
#line 4403 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_8_8 == (MR_Integer) 0);
#line 30 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 30 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 30 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_8_8;
#line 30 "slice_and_dice.m"
        else
#line 30 "slice_and_dice.m"
          {
#line 30 "slice_and_dice.m"
            {
#line 30 "slice_and_dice.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__V_5_5)), ((MR_Box) (mdbcomp__slice_and_dice__V_7_7)));
#line 30 "slice_and_dice.m"
              return;
            }
#line 30 "slice_and_dice.m"
          }
#line 30 "slice_and_dice.m"
      }
#line 30 "slice_and_dice.m"
  }
#line 30 "slice_and_dice.m"
}

#line 30 "slice_and_dice.m"
MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0(
#line 30 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 30 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 30 "slice_and_dice.m"
{
#line 30 "slice_and_dice.m"
  {
#line 30 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 30 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_7 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
#line 30 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_8 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

#line 30 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_7 == mdbcomp__slice_and_dice__CastY_8);
#line 30 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 30 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 30 "slice_and_dice.m"
    else
#line 30 "slice_and_dice.m"
      {
#line 30 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_9_9;
#line 30 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 30 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 30 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));

#line 4470 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_3_3 == mdbcomp__slice_and_dice__V_5_5);
#line 30 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 30 "slice_and_dice.m"
          {
#line 4476 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__TypeInfo_9_9 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3];
#line 4478 "mdbcomp.slice_and_dice.c"
            {
#line 4480 "mdbcomp.slice_and_dice.c"
              return mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__slice_and_dice__TypeInfo_9_9, ((MR_Box) (mdbcomp__slice_and_dice__V_4_4)), ((MR_Box) (mdbcomp__slice_and_dice__V_6_6)));
            }
#line 30 "slice_and_dice.m"
          }
#line 30 "slice_and_dice.m"
      }
#line 30 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 30 "slice_and_dice.m"
  }
#line 30 "slice_and_dice.m"
}

#line 38 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0(
#line 38 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 38 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 38 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 38 "slice_and_dice.m"
{
#line 38 "slice_and_dice.m"
  {
#line 38 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 38 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_4 = mdbcomp__slice_and_dice__HeadVar__2_2;
#line 38 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_5 = mdbcomp__slice_and_dice__HeadVar__3_3;

#line 38 "slice_and_dice.m"
    {
#line 38 "slice_and_dice.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_5)));
#line 38 "slice_and_dice.m"
      return;
    }
#line 38 "slice_and_dice.m"
  }
#line 38 "slice_and_dice.m"
}

#line 38 "slice_and_dice.m"
MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0(
#line 38 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 38 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 38 "slice_and_dice.m"
{
#line 38 "slice_and_dice.m"
  {
#line 38 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 38 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_3 = mdbcomp__slice_and_dice__HeadVar__1_1;
#line 38 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_4 = mdbcomp__slice_and_dice__HeadVar__2_2;

#line 38 "slice_and_dice.m"
    {
#line 38 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_4)));
    }
#line 38 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 38 "slice_and_dice.m"
  }
#line 38 "slice_and_dice.m"
}

#line 98 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0(
#line 98 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 98 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 98 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 98 "slice_and_dice.m"
{
#line 98 "slice_and_dice.m"
  {
#line 98 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 98 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_4 = mdbcomp__slice_and_dice__HeadVar__2_2;
#line 98 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_5 = mdbcomp__slice_and_dice__HeadVar__3_3;

#line 98 "slice_and_dice.m"
    {
#line 98 "slice_and_dice.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_5)));
#line 98 "slice_and_dice.m"
      return;
    }
#line 98 "slice_and_dice.m"
  }
#line 98 "slice_and_dice.m"
}

#line 98 "slice_and_dice.m"
MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0(
#line 98 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 98 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 98 "slice_and_dice.m"
{
#line 98 "slice_and_dice.m"
  {
#line 98 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 98 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_3 = mdbcomp__slice_and_dice__HeadVar__1_1;
#line 98 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_4 = mdbcomp__slice_and_dice__HeadVar__2_2;

#line 98 "slice_and_dice.m"
    {
#line 98 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_4)));
    }
#line 98 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 98 "slice_and_dice.m"
  }
#line 98 "slice_and_dice.m"
}

#line 96 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0(
#line 96 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 96 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 96 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 96 "slice_and_dice.m"
{
#line 96 "slice_and_dice.m"
  {
#line 96 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 96 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_4 = mdbcomp__slice_and_dice__HeadVar__2_2;
#line 96 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_5 = mdbcomp__slice_and_dice__HeadVar__3_3;

#line 96 "slice_and_dice.m"
    {
#line 96 "slice_and_dice.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_5)));
#line 96 "slice_and_dice.m"
      return;
    }
#line 96 "slice_and_dice.m"
  }
#line 96 "slice_and_dice.m"
}

#line 96 "slice_and_dice.m"
MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0(
#line 96 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 96 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 96 "slice_and_dice.m"
{
#line 96 "slice_and_dice.m"
  {
#line 96 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 96 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar1_3 = mdbcomp__slice_and_dice__HeadVar__1_1;
#line 96 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Cast_HeadVar2_4 = mdbcomp__slice_and_dice__HeadVar__2_2;

#line 96 "slice_and_dice.m"
    {
#line 96 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__slice_and_dice__Cast_HeadVar2_4)));
    }
#line 96 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 96 "slice_and_dice.m"
  }
#line 96 "slice_and_dice.m"
}

#line 704 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(
#line 704 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 704 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 704 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 704 "slice_and_dice.m"
{
#line 704 "slice_and_dice.m"
  {
#line 704 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 704 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 704 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_13 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 704 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_12 == mdbcomp__slice_and_dice__CastY_13);
#line 704 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 4704 "mdbcomp.slice_and_dice.c"
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
#line 704 "slice_and_dice.m"
    else
#line 704 "slice_and_dice.m"
      {
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_10_10;

#line 704 "slice_and_dice.m"
        {
#line 704 "slice_and_dice.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__V_10_10, mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_7_7);
        }
#line 4730 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_10_10 == (MR_Integer) 0);
#line 704 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 704 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 704 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_10_10;
#line 704 "slice_and_dice.m"
        else
#line 704 "slice_and_dice.m"
          {
#line 704 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_11_11;

#line 704 "slice_and_dice.m"
            {
#line 704 "slice_and_dice.m"
              mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__V_11_11, mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_8_8);
            }
#line 4750 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_11_11 == (MR_Integer) 0);
#line 704 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 704 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 704 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_11_11;
#line 704 "slice_and_dice.m"
            else
#line 704 "slice_and_dice.m"
              {
#line 704 "slice_and_dice.m"
                mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__V_6_6, mdbcomp__slice_and_dice__V_9_9);
#line 704 "slice_and_dice.m"
                return;
              }
#line 704 "slice_and_dice.m"
          }
#line 704 "slice_and_dice.m"
      }
#line 704 "slice_and_dice.m"
  }
#line 704 "slice_and_dice.m"
}

#line 704 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(
#line 704 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 704 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 704 "slice_and_dice.m"
{
#line 704 "slice_and_dice.m"
  {
#line 704 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 704 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
#line 704 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

#line 704 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
#line 704 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 704 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 704 "slice_and_dice.m"
    else
#line 704 "slice_and_dice.m"
      {
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 704 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

#line 4817 "mdbcomp.slice_and_dice.c"
        {
#line 4819 "mdbcomp.slice_and_dice.c"
          mdbcomp__slice_and_dice__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdbcomp__slice_and_dice__V_3_3, mdbcomp__slice_and_dice__V_6_6);
        }
#line 704 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 704 "slice_and_dice.m"
          {
#line 4826 "mdbcomp.slice_and_dice.c"
            {
#line 4828 "mdbcomp.slice_and_dice.c"
              mdbcomp__slice_and_dice__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_7_7);
            }
#line 704 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 4833 "mdbcomp.slice_and_dice.c"
              {
#line 4835 "mdbcomp.slice_and_dice.c"
                return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_8_8);
              }
#line 704 "slice_and_dice.m"
          }
#line 704 "slice_and_dice.m"
      }
#line 704 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 704 "slice_and_dice.m"
  }
#line 704 "slice_and_dice.m"
}

#line 100 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(
#line 100 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 100 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 100 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 100 "slice_and_dice.m"
{
#line 100 "slice_and_dice.m"
  {
#line 100 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 100 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_21 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 100 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_22 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 100 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_21 == mdbcomp__slice_and_dice__CastY_22);
#line 100 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 4873 "mdbcomp.slice_and_dice.c"
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
#line 100 "slice_and_dice.m"
    else
#line 100 "slice_and_dice.m"
      {
#line 100 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 4)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 5)));
#line 100 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 3)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 4)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 5)));
#line 100 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_16_16;

#line 100 "slice_and_dice.m"
        {
#line 100 "slice_and_dice.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__slice_and_dice__V_16_16, mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_10_10);
        }
#line 4911 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_16_16 == (MR_Integer) 0);
#line 100 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 100 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_16_16;
#line 100 "slice_and_dice.m"
        else
#line 100 "slice_and_dice.m"
          {
#line 100 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_17_17;

#line 100 "slice_and_dice.m"
            {
#line 100 "slice_and_dice.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__V_17_17, mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_11_11);
            }
#line 4931 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_17_17 == (MR_Integer) 0);
#line 100 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 100 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_17_17;
#line 100 "slice_and_dice.m"
            else
#line 100 "slice_and_dice.m"
              {
#line 100 "slice_and_dice.m"
                MR_Word mdbcomp__slice_and_dice__V_18_18;

#line 100 "slice_and_dice.m"
                {
#line 100 "slice_and_dice.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__V_18_18, mdbcomp__slice_and_dice__V_6_6, mdbcomp__slice_and_dice__V_12_12);
                }
#line 4951 "mdbcomp.slice_and_dice.c"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_18_18 == (MR_Integer) 0);
#line 100 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 100 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
                  *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_18_18;
#line 100 "slice_and_dice.m"
                else
#line 100 "slice_and_dice.m"
                  {
#line 100 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__V_19_19;

#line 100 "slice_and_dice.m"
                    {
#line 100 "slice_and_dice.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__V_19_19, mdbcomp__slice_and_dice__V_7_7, mdbcomp__slice_and_dice__V_13_13);
                    }
#line 4971 "mdbcomp.slice_and_dice.c"
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_19_19 == (MR_Integer) 0);
#line 100 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 100 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
                      *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_19_19;
#line 100 "slice_and_dice.m"
                    else
#line 100 "slice_and_dice.m"
                      {
#line 100 "slice_and_dice.m"
                        MR_Word mdbcomp__slice_and_dice__V_20_20;

#line 100 "slice_and_dice.m"
                        {
#line 100 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__V_20_20, mdbcomp__slice_and_dice__V_8_8, mdbcomp__slice_and_dice__V_14_14);
                        }
#line 4991 "mdbcomp.slice_and_dice.c"
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_20_20 == (MR_Integer) 0);
#line 100 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 100 "slice_and_dice.m"
                        if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
                          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_20_20;
#line 100 "slice_and_dice.m"
                        else
#line 100 "slice_and_dice.m"
                          {
#line 100 "slice_and_dice.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__V_9_9, mdbcomp__slice_and_dice__V_15_15);
#line 100 "slice_and_dice.m"
                            return;
                          }
#line 100 "slice_and_dice.m"
                      }
#line 100 "slice_and_dice.m"
                  }
#line 100 "slice_and_dice.m"
              }
#line 100 "slice_and_dice.m"
          }
#line 100 "slice_and_dice.m"
      }
#line 100 "slice_and_dice.m"
  }
#line 100 "slice_and_dice.m"
}

#line 100 "slice_and_dice.m"
MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(
#line 100 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 100 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 100 "slice_and_dice.m"
{
#line 100 "slice_and_dice.m"
  {
#line 100 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 100 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_15 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
#line 100 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_16 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

#line 100 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_15 == mdbcomp__slice_and_dice__CastY_16);
#line 100 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 100 "slice_and_dice.m"
    else
#line 100 "slice_and_dice.m"
      {
#line 100 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 3)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 4)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 5)));
#line 100 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 4)));
#line 100 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 5)));

#line 5076 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__V_3_3, mdbcomp__slice_and_dice__V_9_9) == 0);
#line 100 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
          {
#line 5082 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_4_4 == mdbcomp__slice_and_dice__V_10_10);
#line 100 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
              {
#line 5088 "mdbcomp.slice_and_dice.c"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_5_5 == mdbcomp__slice_and_dice__V_11_11);
#line 100 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
                  {
#line 5094 "mdbcomp.slice_and_dice.c"
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_6_6 == mdbcomp__slice_and_dice__V_12_12);
#line 100 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
                      {
#line 5100 "mdbcomp.slice_and_dice.c"
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_7_7 == mdbcomp__slice_and_dice__V_13_13);
#line 100 "slice_and_dice.m"
                        if (mdbcomp__slice_and_dice__succeeded)
#line 5104 "mdbcomp.slice_and_dice.c"
                          mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_8_8 == mdbcomp__slice_and_dice__V_14_14);
#line 100 "slice_and_dice.m"
                      }
#line 100 "slice_and_dice.m"
                  }
#line 100 "slice_and_dice.m"
              }
#line 100 "slice_and_dice.m"
          }
#line 100 "slice_and_dice.m"
      }
#line 100 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 100 "slice_and_dice.m"
  }
#line 100 "slice_and_dice.m"
}

#line 89 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0(
#line 89 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 89 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 89 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 89 "slice_and_dice.m"
{
#line 89 "slice_and_dice.m"
  {
#line 89 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 89 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 89 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_13 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 89 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_12 == mdbcomp__slice_and_dice__CastY_13);
#line 89 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 5147 "mdbcomp.slice_and_dice.c"
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "slice_and_dice.m"
    else
#line 89 "slice_and_dice.m"
      {
#line 89 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
#line 89 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
#line 89 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
#line 89 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_10_10;

#line 89 "slice_and_dice.m"
        {
#line 89 "slice_and_dice.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__V_10_10, mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_7_7);
        }
#line 5173 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_10_10 == (MR_Integer) 0);
#line 89 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 89 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 89 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_10_10;
#line 89 "slice_and_dice.m"
        else
#line 89 "slice_and_dice.m"
          {
#line 89 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_11_11;

#line 89 "slice_and_dice.m"
            {
#line 89 "slice_and_dice.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__V_11_11, mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_8_8);
            }
#line 5193 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_11_11 == (MR_Integer) 0);
#line 89 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 89 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 89 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_11_11;
#line 89 "slice_and_dice.m"
            else
#line 89 "slice_and_dice.m"
              {
#line 89 "slice_and_dice.m"
                {
#line 89 "slice_and_dice.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], mdbcomp__slice_and_dice__HeadVar__1_1, ((MR_Box) (mdbcomp__slice_and_dice__V_6_6)), ((MR_Box) (mdbcomp__slice_and_dice__V_9_9)));
#line 89 "slice_and_dice.m"
                  return;
                }
#line 89 "slice_and_dice.m"
              }
#line 89 "slice_and_dice.m"
          }
#line 89 "slice_and_dice.m"
      }
#line 89 "slice_and_dice.m"
  }
#line 89 "slice_and_dice.m"
}

#line 89 "slice_and_dice.m"
MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0(
#line 89 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 89 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 89 "slice_and_dice.m"
{
#line 89 "slice_and_dice.m"
  {
#line 89 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 89 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
#line 89 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

#line 89 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
#line 89 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 89 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 89 "slice_and_dice.m"
    else
#line 89 "slice_and_dice.m"
      {
#line 89 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_11_11;
#line 89 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
#line 89 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

#line 5266 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_3_3 == mdbcomp__slice_and_dice__V_6_6);
#line 89 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 89 "slice_and_dice.m"
          {
#line 5272 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_4_4 == mdbcomp__slice_and_dice__V_7_7);
#line 89 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 89 "slice_and_dice.m"
              {
#line 5278 "mdbcomp.slice_and_dice.c"
                mdbcomp__slice_and_dice__TypeInfo_11_11 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4];
#line 5280 "mdbcomp.slice_and_dice.c"
                {
#line 5282 "mdbcomp.slice_and_dice.c"
                  return mdbcomp__slice_and_dice__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__slice_and_dice__TypeInfo_11_11, ((MR_Box) (mdbcomp__slice_and_dice__V_5_5)), ((MR_Box) (mdbcomp__slice_and_dice__V_8_8)));
                }
#line 89 "slice_and_dice.m"
              }
#line 89 "slice_and_dice.m"
          }
#line 89 "slice_and_dice.m"
      }
#line 89 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 89 "slice_and_dice.m"
  }
#line 89 "slice_and_dice.m"
}

#line 994 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_path_port_1_f_0(
#line 994 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1)
#line 994 "slice_and_dice.m"
{
#line 996 "slice_and_dice.m"
  {
#line 996 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 996 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__HeadVar__2_2;

#line 996 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 998 "slice_and_dice.m"
      {
#line 998 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__Path_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 998 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_7_7;
#line 998 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_8_8;

#line 999 "slice_and_dice.m"
        {
#line 999 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_8_8 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdbcomp__slice_and_dice__Path_5);
        }
#line 999 "slice_and_dice.m"
        {
#line 999 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_7_7 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_8_8, (MR_String) ">");
        }
#line 998 "slice_and_dice.m"
        {
#line 998 "slice_and_dice.m"
          return mdbcomp__slice_and_dice__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "<", mdbcomp__slice_and_dice__V_7_7);
        }
#line 998 "slice_and_dice.m"
      }
#line 996 "slice_and_dice.m"
    else
#line 996 "slice_and_dice.m"
      if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1000 "slice_and_dice.m"
        {
#line 1000 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__Port_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 1000 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__Path_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 1000 "slice_and_dice.m"
          MR_String mdbcomp__slice_and_dice__V_12_12;
#line 1000 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__V_13_13;
#line 1000 "slice_and_dice.m"
          MR_String mdbcomp__slice_and_dice__V_14_14;
#line 1000 "slice_and_dice.m"
          MR_String mdbcomp__slice_and_dice__V_16_16;
#line 1000 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__V_17_17;

#line 1001 "slice_and_dice.m"
          {
#line 1001 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "slice_and_dice.m"
            MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_13_13, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Port_10));
#line 1001 "slice_and_dice.m"
          }
#line 1001 "slice_and_dice.m"
          {
#line 1001 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_12_12 = mdbcomp__slice_and_dice__format_path_port_1_f_0(mdbcomp__slice_and_dice__V_13_13);
          }
#line 1002 "slice_and_dice.m"
          {
#line 1002 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "slice_and_dice.m"
            MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_17_17, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Path_11));
#line 1002 "slice_and_dice.m"
          }
#line 1001 "slice_and_dice.m"
          {
#line 1001 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_16_16 = mdbcomp__slice_and_dice__format_path_port_1_f_0(mdbcomp__slice_and_dice__V_17_17);
          }
#line 1001 "slice_and_dice.m"
          {
#line 1001 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdbcomp__slice_and_dice__V_16_16);
          }
#line 1000 "slice_and_dice.m"
          {
#line 1000 "slice_and_dice.m"
            return mdbcomp__slice_and_dice__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_12_12, mdbcomp__slice_and_dice__V_14_14);
          }
#line 1000 "slice_and_dice.m"
        }
#line 996 "slice_and_dice.m"
      else
#line 996 "slice_and_dice.m"
        {
#line 996 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__Port_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));

#line 997 "slice_and_dice.m"
          {
#line 997 "slice_and_dice.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mdbcomp__slice_and_dice__HeadVar__2_2, mdbcomp__slice_and_dice__Port_3);
          }
#line 996 "slice_and_dice.m"
        }
#line 996 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__HeadVar__2_2;
#line 996 "slice_and_dice.m"
  }
#line 994 "slice_and_dice.m"
}

#line 967 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_proc_label_1_f_0(
#line 967 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_3)
#line 967 "slice_and_dice.m"
{
#line 972 "slice_and_dice.m"
  {
#line 972 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 972 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__Str_4;

#line 972 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
#line 972 "slice_and_dice.m"
      {
#line 972 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 1)));
#line 972 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SymModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 2)));
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 3)));
#line 972 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 4)));
#line 972 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__ModeNo_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 5)));
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Module_11;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__ArityStr_12;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__PredOrFuncStr_13;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_31_31;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_33_33;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_34_34;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_36_36;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_37_37;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_39_39;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_40_40;
#line 972 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_42_42;
#line 971 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 0)));

#line 973 "slice_and_dice.m"
        {
#line 973 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Module_11 = mdbcomp__prim_data__sym_name_to_string_1_f_0(mdbcomp__slice_and_dice__SymModule_7);
        }
#line 978 "slice_and_dice.m"
        if ((mdbcomp__slice_and_dice__PredOrFunc_6 == (MR_Integer) 1))
#line 975 "slice_and_dice.m"
          {
#line 975 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_29_29 = (mdbcomp__slice_and_dice__Arity_9 - (MR_Integer) 1);

#line 976 "slice_and_dice.m"
            {
#line 976 "slice_and_dice.m"
              mdbcomp__slice_and_dice__ArityStr_12 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__V_29_29);
            }
#line 977 "slice_and_dice.m"
            mdbcomp__slice_and_dice__PredOrFuncStr_13 = (MR_String) "func";
#line 975 "slice_and_dice.m"
          }
#line 978 "slice_and_dice.m"
        else
#line 979 "slice_and_dice.m"
          {
#line 980 "slice_and_dice.m"
            {
#line 980 "slice_and_dice.m"
              mdbcomp__slice_and_dice__ArityStr_12 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__Arity_9);
            }
#line 981 "slice_and_dice.m"
            mdbcomp__slice_and_dice__PredOrFuncStr_13 = (MR_String) "pred";
#line 979 "slice_and_dice.m"
          }
#line 984 "slice_and_dice.m"
        {
#line 984 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_42_42 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__ModeNo_10);
        }
#line 984 "slice_and_dice.m"
        {
#line 984 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdbcomp__slice_and_dice__V_42_42);
        }
#line 984 "slice_and_dice.m"
        {
#line 984 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_39_39 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__ArityStr_12, mdbcomp__slice_and_dice__V_40_40);
        }
#line 983 "slice_and_dice.m"
        {
#line 983 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdbcomp__slice_and_dice__V_39_39);
        }
#line 983 "slice_and_dice.m"
        {
#line 983 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_36_36 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Name_8, mdbcomp__slice_and_dice__V_37_37);
        }
#line 983 "slice_and_dice.m"
        {
#line 983 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdbcomp__slice_and_dice__V_36_36);
        }
#line 983 "slice_and_dice.m"
        {
#line 983 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_33_33 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Module_11, mdbcomp__slice_and_dice__V_34_34);
        }
#line 983 "slice_and_dice.m"
        {
#line 983 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdbcomp__slice_and_dice__V_33_33);
        }
#line 983 "slice_and_dice.m"
        {
#line 983 "slice_and_dice.m"
          return mdbcomp__slice_and_dice__Str_4 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__PredOrFuncStr_13, mdbcomp__slice_and_dice__V_31_31);
        }
#line 972 "slice_and_dice.m"
      }
#line 972 "slice_and_dice.m"
    else
#line 987 "slice_and_dice.m"
      {
#line 987 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SpecialPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 1)));
#line 987 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__TypeName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 3)));
#line 987 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_20_20;
#line 987 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_22_22;
#line 987 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_23_23;
#line 987 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_25_25;
#line 987 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_26_26;
#line 987 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_28_28;
#line 987 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SymModule_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 2)));
#line 987 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Name_44;
#line 987 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__Arity_45;
#line 987 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Module_46;
#line 986 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 0)));
#line 986 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 4)));
#line 986 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 5)));
#line 989 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_19_19;

#line 988 "slice_and_dice.m"
        {
#line 988 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Module_46 = mdbcomp__prim_data__sym_name_to_string_1_f_0(mdbcomp__slice_and_dice__SymModule_43);
        }
#line 989 "slice_and_dice.m"
        {
#line 989 "slice_and_dice.m"
          mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__slice_and_dice__SpecialPredId_15, &mdbcomp__slice_and_dice__Name_44, &mdbcomp__slice_and_dice__V_19_19, &mdbcomp__slice_and_dice__Arity_45);
        }
#line 990 "slice_and_dice.m"
        {
#line 990 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_28_28 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__Arity_45);
        }
#line 990 "slice_and_dice.m"
        {
#line 990 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdbcomp__slice_and_dice__V_28_28);
        }
#line 990 "slice_and_dice.m"
        {
#line 990 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__TypeName_16, mdbcomp__slice_and_dice__V_26_26);
        }
#line 990 "slice_and_dice.m"
        {
#line 990 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdbcomp__slice_and_dice__V_25_25);
        }
#line 990 "slice_and_dice.m"
        {
#line 990 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_22_22 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Module_46, mdbcomp__slice_and_dice__V_23_23);
        }
#line 990 "slice_and_dice.m"
        {
#line 990 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) " for ", mdbcomp__slice_and_dice__V_22_22);
        }
#line 990 "slice_and_dice.m"
        {
#line 990 "slice_and_dice.m"
          return mdbcomp__slice_and_dice__Str_4 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Name_44, mdbcomp__slice_and_dice__V_20_20);
        }
#line 987 "slice_and_dice.m"
      }
#line 972 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__Str_4;
#line 972 "slice_and_dice.m"
  }
#line 967 "slice_and_dice.m"
}

#line 951 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_float_2_f_0(
#line 951 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__DecimalPlaces_4,
#line 951 "slice_and_dice.m"
  MR_Float mdbcomp__slice_and_dice__Flt_5)
#line 951 "slice_and_dice.m"
{
#line 953 "slice_and_dice.m"
  {
#line 953 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 953 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__HeadVar__3_3;
#line 953 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_7_7;
#line 953 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_8_8;
#line 953 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_9_9;
#line 953 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_10_10;

#line 954 "slice_and_dice.m"
    {
#line 954 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_8_8, 0) = ((MR_Box) (mdbcomp__slice_and_dice__DecimalPlaces_4));
#line 954 "slice_and_dice.m"
    }
#line 954 "slice_and_dice.m"
    {
#line 954 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 954 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_10_10, 0) = MR_box_float(mdbcomp__slice_and_dice__Flt_5);
#line 954 "slice_and_dice.m"
    }
#line 954 "slice_and_dice.m"
    {
#line 954 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_9_9, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_10_10));
#line 954 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_9_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 954 "slice_and_dice.m"
    }
#line 954 "slice_and_dice.m"
    {
#line 954 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 954 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_7_7, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_8_8));
#line 954 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_7_7, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_9_9));
#line 954 "slice_and_dice.m"
    }
#line 953 "slice_and_dice.m"
    {
#line 953 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__HeadVar__3_3 = mercury__string__format_2_f_0((MR_String) "%.*f", mdbcomp__slice_and_dice__V_7_7);
    }
#line 953 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__HeadVar__3_3;
#line 953 "slice_and_dice.m"
  }
#line 951 "slice_and_dice.m"
}

#line 947 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__bracket_int_1_f_0(
#line 947 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__X_3)
#line 947 "slice_and_dice.m"
{
#line 949 "slice_and_dice.m"
  {
#line 949 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 949 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__HeadVar__2_2;
#line 949 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_5_5;
#line 949 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_6_6;

#line 949 "slice_and_dice.m"
    {
#line 949 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_6_6 = mercury__string__int_to_string_thousands_1_f_0(mdbcomp__slice_and_dice__X_3);
    }
#line 949 "slice_and_dice.m"
    {
#line 949 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_5_5 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_6_6, (MR_String) ")");
    }
#line 949 "slice_and_dice.m"
    {
#line 949 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "(", mdbcomp__slice_and_dice__V_5_5);
    }
#line 949 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__HeadVar__2_2;
#line 949 "slice_and_dice.m"
  }
#line 947 "slice_and_dice.m"
}

#line 922 "slice_and_dice.m"
static MR_Float MR_CALL 
mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0(
#line 922 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Dice_4,
#line 922 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__LabelLayout_5)
#line 922 "slice_and_dice.m"
{
#line 928 "slice_and_dice.m"
  {
#line 928 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 928 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__Suspicion_6;
#line 928 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__ProcLayout_7;
#line 928 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabel_8;
#line 928 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPort_9;
#line 939 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPortMap_10;
#line 932 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_12_12;
#line 932 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_15_15;
#line 932 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_16_16;
#line 932 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__conv0_PathPortMap_10;

#line 929 "slice_and_dice.m"
    {
#line 929 "slice_and_dice.m"
      mdbcomp__slice_and_dice__ProcLayout_7 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdbcomp__slice_and_dice__LabelLayout_5);
    }
#line 930 "slice_and_dice.m"
    {
#line 930 "slice_and_dice.m"
      mdbcomp__slice_and_dice__ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdbcomp__slice_and_dice__ProcLayout_7);
    }
#line 931 "slice_and_dice.m"
    {
#line 931 "slice_and_dice.m"
      mdbcomp__slice_and_dice__PathPort_9 = mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0(mdbcomp__slice_and_dice__LabelLayout_5);
    }
#line 932 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_4, (MR_Integer) 0)));
#line 932 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_4, (MR_Integer) 1)));
#line 932 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_4, (MR_Integer) 2)));
#line 932 "slice_and_dice.m"
    {
#line 932 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], mdbcomp__slice_and_dice__V_12_12, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_8)), &mdbcomp__slice_and_dice__conv0_PathPortMap_10);
    }
#line 932 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 932 "slice_and_dice.m"
      {
#line 932 "slice_and_dice.m"
        mdbcomp__slice_and_dice__PathPortMap_10 = ((MR_Word) mdbcomp__slice_and_dice__conv0_PathPortMap_10);
#line 932 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 932 "slice_and_dice.m"
      }
#line 939 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 936 "slice_and_dice.m"
      {
#line 936 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ExecCount_11;
#line 933 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv1_ExecCount_11;

#line 933 "slice_and_dice.m"
        {
#line 933 "slice_and_dice.m"
          mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, mdbcomp__slice_and_dice__PathPortMap_10, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_9)), &mdbcomp__slice_and_dice__conv1_ExecCount_11);
        }
#line 933 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 933 "slice_and_dice.m"
          {
#line 933 "slice_and_dice.m"
            mdbcomp__slice_and_dice__ExecCount_11 = ((MR_Word) mdbcomp__slice_and_dice__conv1_ExecCount_11);
#line 933 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 933 "slice_and_dice.m"
          }
#line 936 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 934 "slice_and_dice.m"
          {
#line 934 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 2)));
#line 934 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 4)));
#line 934 "slice_and_dice.m"
            MR_String mdbcomp__slice_and_dice__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 0)));
#line 934 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 1)));
#line 934 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 3)));
#line 934 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 5)));

#line 916 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_20_20 > (MR_Integer) 0);
#line 916 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 916 "slice_and_dice.m"
              mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_13_13 == (MR_Integer) 0);
#line 918 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 917 "slice_and_dice.m"
              mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 1.0000000000000000;
#line 918 "slice_and_dice.m"
            else
#line 919 "slice_and_dice.m"
              mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 0.0000000000000000;
#line 934 "slice_and_dice.m"
          }
#line 936 "slice_and_dice.m"
        else
#line 937 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 0.0000000000000000;
#line 936 "slice_and_dice.m"
      }
#line 939 "slice_and_dice.m"
    else
#line 940 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 0.0000000000000000;
#line 928 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__Suspicion_6;
#line 928 "slice_and_dice.m"
  }
#line 922 "slice_and_dice.m"
}

#line 868 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(
#line 868 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__DiceLabelCount_9,
#line 868 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_10,
#line 868 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__PathPort_11,
#line 868 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__FormattedContext_12,
#line 868 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__PassCount_13,
#line 868 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__PassTests_14,
#line 868 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__FailCount_15,
#line 868 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__FailTests_16)
#line 868 "slice_and_dice.m"
{
#line 873 "slice_and_dice.m"
  {
#line 873 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 873 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ExecCounts_17;
#line 873 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_18;
#line 873 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__LineNumber_19;
#line 873 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_23_23;
#line 873 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_25_25;

#line 874 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__DiceLabelCount_9, (MR_Integer) 0)));
#line 874 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__PathPort_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__DiceLabelCount_9, (MR_Integer) 1)));
#line 874 "slice_and_dice.m"
    mdbcomp__slice_and_dice__ExecCounts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__DiceLabelCount_9, (MR_Integer) 2)));
#line 875 "slice_and_dice.m"
    mdbcomp__slice_and_dice__FileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 0)));
#line 875 "slice_and_dice.m"
    mdbcomp__slice_and_dice__LineNumber_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 1)));
#line 875 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__PassCount_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 2)));
#line 875 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__PassTests_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 3)));
#line 875 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__FailCount_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 4)));
#line 875 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__FailTests_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 5)));
#line 1007 "slice_and_dice.m"
    {
#line 1007 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_25_25 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__LineNumber_19);
    }
#line 1007 "slice_and_dice.m"
    {
#line 1007 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdbcomp__slice_and_dice__V_25_25);
    }
#line 1007 "slice_and_dice.m"
    {
#line 1007 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__FormattedContext_12 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__FileName_18, mdbcomp__slice_and_dice__V_23_23);
    }
#line 873 "slice_and_dice.m"
  }
#line 868 "slice_and_dice.m"
}

#line 833 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(
#line 833 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
#line 833 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 833 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__DiceLabelCount_7)
#line 833 "slice_and_dice.m"
{
#line 836 "slice_and_dice.m"
  {
#line 836 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 836 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPort_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 836 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ExecCount_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));

#line 837 "slice_and_dice.m"
    {
#line 837 "slice_and_dice.m"
      MR_Word base;
#line 837 "slice_and_dice.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 837 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__DiceLabelCount_7 = base;
#line 837 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_4));
#line 837 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PathPort_5));
#line 837 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_6));
#line 837 "slice_and_dice.m"
    }
#line 836 "slice_and_dice.m"
  }
#line 833 "slice_and_dice.m"
}

#line 830 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1(
#line 830 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 830 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 830 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
#line 830 "slice_and_dice.m"
{
#line 830 "slice_and_dice.m"
  {
#line 830 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 830 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_DiceLabelCount_7;

#line 830 "slice_and_dice.m"
    {
#line 830 "slice_and_dice.m"
      mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_DiceLabelCount_7);
    }
#line 830 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_DiceLabelCount_7));
#line 830 "slice_and_dice.m"
  }
#line 830 "slice_and_dice.m"
}

#line 825 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(
#line 825 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
#line 825 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcDice_6,
#line 825 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
#line 825 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11)
#line 825 "slice_and_dice.m"
{
#line 828 "slice_and_dice.m"
  {
#line 828 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 828 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_19_19;
#line 828 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcExecCounts_8;
#line 828 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__NewLabelCounts_9;
#line 828 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_12_12;

#line 829 "slice_and_dice.m"
    {
#line 829 "slice_and_dice.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, mdbcomp__slice_and_dice__ProcDice_6, &mdbcomp__slice_and_dice__ProcExecCounts_8);
    }
#line 830 "slice_and_dice.m"
    {
#line 830 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 830 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[2]));
#line 830 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 1) = ((MR_Box) (mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1));
#line 830 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 830 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 3) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_5));
#line 830 "slice_and_dice.m"
    }
#line 6089 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;
#line 830 "slice_and_dice.m"
    {
#line 830 "slice_and_dice.m"
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[7], mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__V_12_12, mdbcomp__slice_and_dice__ProcExecCounts_8, &mdbcomp__slice_and_dice__NewLabelCounts_9);
    }
#line 831 "slice_and_dice.m"
    {
#line 831 "slice_and_dice.m"
      mercury__list__append_3_p_1(mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10, mdbcomp__slice_and_dice__NewLabelCounts_9, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);
#line 831 "slice_and_dice.m"
      return;
    }
#line 828 "slice_and_dice.m"
  }
#line 825 "slice_and_dice.m"
}

#line 751 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(
#line 751 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 751 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
#line 751 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
#line 751 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 751 "slice_and_dice.m"
{
#line 808 "slice_and_dice.m"
  while (MR_TRUE)
#line 808 "slice_and_dice.m"
    {
#line 808 "slice_and_dice.m"
      /* tailcall optimized into a loop */
#line 808 "slice_and_dice.m"
      {
#line 808 "slice_and_dice.m"
        MR_bool mdbcomp__slice_and_dice__succeeded;
#line 808 "slice_and_dice.m"
        MR_Char mdbcomp__slice_and_dice__C_9;
#line 808 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Rest_10;

#line 757 "slice_and_dice.m"
        {
#line 757 "slice_and_dice.m"
          mdbcomp__slice_and_dice__succeeded = mercury__string__first_char_3_p_3(mdbcomp__slice_and_dice__SortStr_5, &mdbcomp__slice_and_dice__C_9, &mdbcomp__slice_and_dice__Rest_10);
        }
#line 808 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 799 "slice_and_dice.m"
          {
#line 799 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Result0_11;
#line 801 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_43_43;
#line 801 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_44_44;

#line 759 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 112);
#line 762 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 760 "slice_and_dice.m"
              {
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 760 "slice_and_dice.m"
                MR_String mdbcomp__slice_and_dice__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 760 "slice_and_dice.m"
                MR_String mdbcomp__slice_and_dice__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 760 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));

#line 760 "slice_and_dice.m"
                {
#line 760 "slice_and_dice.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_14_14, mdbcomp__slice_and_dice__V_15_15);
                }
#line 760 "slice_and_dice.m"
              }
#line 762 "slice_and_dice.m"
            else
#line 765 "slice_and_dice.m"
              {
#line 762 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 80);
#line 765 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 763 "slice_and_dice.m"
                  {
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 763 "slice_and_dice.m"
                    MR_String mdbcomp__slice_and_dice__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 763 "slice_and_dice.m"
                    MR_String mdbcomp__slice_and_dice__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 763 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));

#line 763 "slice_and_dice.m"
                    {
#line 763 "slice_and_dice.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_16_16, mdbcomp__slice_and_dice__V_17_17);
                    }
#line 763 "slice_and_dice.m"
                  }
#line 765 "slice_and_dice.m"
                else
#line 768 "slice_and_dice.m"
                  {
#line 765 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 102);
#line 768 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 766 "slice_and_dice.m"
                      {
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 766 "slice_and_dice.m"
                        MR_String mdbcomp__slice_and_dice__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 766 "slice_and_dice.m"
                        MR_String mdbcomp__slice_and_dice__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 766 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));

#line 766 "slice_and_dice.m"
                        {
#line 766 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_18_18, mdbcomp__slice_and_dice__V_19_19);
                        }
#line 766 "slice_and_dice.m"
                      }
#line 768 "slice_and_dice.m"
                    else
#line 771 "slice_and_dice.m"
                      {
#line 768 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 70);
#line 771 "slice_and_dice.m"
                        if (mdbcomp__slice_and_dice__succeeded)
#line 769 "slice_and_dice.m"
                          {
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 769 "slice_and_dice.m"
                            MR_String mdbcomp__slice_and_dice__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 769 "slice_and_dice.m"
                            MR_String mdbcomp__slice_and_dice__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 769 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));

#line 769 "slice_and_dice.m"
                            {
#line 769 "slice_and_dice.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_20_20, mdbcomp__slice_and_dice__V_21_21);
                            }
#line 769 "slice_and_dice.m"
                          }
#line 771 "slice_and_dice.m"
                        else
#line 777 "slice_and_dice.m"
                          {
#line 771 "slice_and_dice.m"
                            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 115);
#line 777 "slice_and_dice.m"
                            if (mdbcomp__slice_and_dice__succeeded)
#line 772 "slice_and_dice.m"
                              {
#line 772 "slice_and_dice.m"
                                MR_Float mdbcomp__slice_and_dice__V_22_22;
#line 772 "slice_and_dice.m"
                                MR_Float mdbcomp__slice_and_dice__V_23_23;
#line 772 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 772 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_26_26;
#line 772 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 772 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_103_103;
#line 773 "slice_and_dice.m"
                                MR_String mdbcomp__slice_and_dice__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 773 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 773 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 773 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 775 "slice_and_dice.m"
                                MR_String mdbcomp__slice_and_dice__V_100_100;
#line 775 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_101_101;
#line 775 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_102_102;
#line 775 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_104_104;

#line 772 "slice_and_dice.m"
                                {
#line 772 "slice_and_dice.m"
                                  mdbcomp__slice_and_dice__V_22_22 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__V_24_24, mdbcomp__slice_and_dice__V_93_93);
                                }
#line 775 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 775 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 775 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 775 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 775 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 775 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 772 "slice_and_dice.m"
                                {
#line 772 "slice_and_dice.m"
                                  mdbcomp__slice_and_dice__V_23_23 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__V_26_26, mdbcomp__slice_and_dice__V_103_103);
                                }
#line 772 "slice_and_dice.m"
                                {
#line 772 "slice_and_dice.m"
                                  mercury__private_builtin__builtin_compare_float_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_22_22, mdbcomp__slice_and_dice__V_23_23);
                                }
#line 772 "slice_and_dice.m"
                              }
#line 777 "slice_and_dice.m"
                            else
#line 783 "slice_and_dice.m"
                              {
#line 777 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 83);
#line 783 "slice_and_dice.m"
                                if (mdbcomp__slice_and_dice__succeeded)
#line 778 "slice_and_dice.m"
                                  {
#line 778 "slice_and_dice.m"
                                    MR_Float mdbcomp__slice_and_dice__V_28_28;
#line 778 "slice_and_dice.m"
                                    MR_Float mdbcomp__slice_and_dice__V_29_29;
#line 778 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 778 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_32_32;
#line 778 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 778 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_123_123;
#line 779 "slice_and_dice.m"
                                    MR_String mdbcomp__slice_and_dice__V_110_110 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 779 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 779 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 779 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 781 "slice_and_dice.m"
                                    MR_String mdbcomp__slice_and_dice__V_120_120;
#line 781 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_121_121;
#line 781 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_122_122;
#line 781 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_124_124;

#line 778 "slice_and_dice.m"
                                    {
#line 778 "slice_and_dice.m"
                                      mdbcomp__slice_and_dice__V_28_28 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__V_30_30, mdbcomp__slice_and_dice__V_113_113);
                                    }
#line 781 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 781 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 781 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 781 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 781 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 781 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 778 "slice_and_dice.m"
                                    {
#line 778 "slice_and_dice.m"
                                      mdbcomp__slice_and_dice__V_29_29 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__V_32_32, mdbcomp__slice_and_dice__V_123_123);
                                    }
#line 778 "slice_and_dice.m"
                                    {
#line 778 "slice_and_dice.m"
                                      mercury__private_builtin__builtin_compare_float_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_28_28, mdbcomp__slice_and_dice__V_29_29);
                                    }
#line 778 "slice_and_dice.m"
                                  }
#line 783 "slice_and_dice.m"
                                else
#line 790 "slice_and_dice.m"
                                  {
#line 783 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 100);
#line 790 "slice_and_dice.m"
                                    if (mdbcomp__slice_and_dice__succeeded)
#line 786 "slice_and_dice.m"
                                      {
#line 786 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__Diff1_12;
#line 786 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__Diff2_13;
#line 786 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 786 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_36_36;
#line 786 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 786 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_143_143;
#line 785 "slice_and_dice.m"
                                        MR_String mdbcomp__slice_and_dice__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 785 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 785 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 785 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 787 "slice_and_dice.m"
                                        MR_String mdbcomp__slice_and_dice__V_140_140;
#line 787 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_141_141;
#line 787 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_142_142;
#line 787 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_144_144;

#line 785 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__Diff1_12 = (mdbcomp__slice_and_dice__V_34_34 - mdbcomp__slice_and_dice__V_133_133);
#line 787 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_140_140 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 787 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 787 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 787 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 787 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 787 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 787 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__Diff2_13 = (mdbcomp__slice_and_dice__V_36_36 - mdbcomp__slice_and_dice__V_143_143);
#line 789 "slice_and_dice.m"
                                        {
#line 789 "slice_and_dice.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Diff1_12, mdbcomp__slice_and_dice__Diff2_13);
                                        }
#line 786 "slice_and_dice.m"
                                      }
#line 790 "slice_and_dice.m"
                                    else
#line 797 "slice_and_dice.m"
                                      {
#line 790 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 68);
#line 797 "slice_and_dice.m"
                                        if (mdbcomp__slice_and_dice__succeeded)
#line 793 "slice_and_dice.m"
                                          {
#line 793 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 793 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_40_40;
#line 793 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__Diff1_46;
#line 793 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__Diff2_47;
#line 793 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 793 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_163_163;
#line 792 "slice_and_dice.m"
                                            MR_String mdbcomp__slice_and_dice__V_150_150 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 792 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 792 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 792 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 794 "slice_and_dice.m"
                                            MR_String mdbcomp__slice_and_dice__V_160_160;
#line 794 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_161_161;
#line 794 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_162_162;
#line 794 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_164_164;

#line 792 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__Diff1_46 = (mdbcomp__slice_and_dice__V_38_38 - mdbcomp__slice_and_dice__V_153_153);
#line 794 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_160_160 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 794 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_161_161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 794 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 794 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 794 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_163_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 794 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 794 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__Diff2_47 = (mdbcomp__slice_and_dice__V_40_40 - mdbcomp__slice_and_dice__V_163_163);
#line 796 "slice_and_dice.m"
                                            {
#line 796 "slice_and_dice.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Diff2_47, mdbcomp__slice_and_dice__Diff1_46);
                                            }
#line 793 "slice_and_dice.m"
                                          }
#line 797 "slice_and_dice.m"
                                        else
#line 798 "slice_and_dice.m"
                                          {
#line 798 "slice_and_dice.m"
                                            {
#line 798 "slice_and_dice.m"
                                              mercury__require__error_1_p_0((MR_String) "dice_exec_count_compare: invalid sort string");
#line 798 "slice_and_dice.m"
                                              return;
                                            }
#line 798 "slice_and_dice.m"
                                          }
#line 797 "slice_and_dice.m"
                                      }
#line 790 "slice_and_dice.m"
                                  }
#line 783 "slice_and_dice.m"
                              }
#line 777 "slice_and_dice.m"
                          }
#line 771 "slice_and_dice.m"
                      }
#line 768 "slice_and_dice.m"
                  }
#line 765 "slice_and_dice.m"
              }
#line 801 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Result0_11 == (MR_Integer) 0);
#line 801 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 801 "slice_and_dice.m"
              {
#line 802 "slice_and_dice.m"
                {
#line 802 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__V_43_43 = mercury__string__length_1_f_0(mdbcomp__slice_and_dice__Rest_10);
                }
#line 802 "slice_and_dice.m"
                mdbcomp__slice_and_dice__V_44_44 = (MR_Integer) 0;
#line 802 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_43_43 > mdbcomp__slice_and_dice__V_44_44);
#line 801 "slice_and_dice.m"
              }
#line 805 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 804 "slice_and_dice.m"
              {
#line 804 "slice_and_dice.m"
                /* direct tailcall eliminated */
#line 804 "slice_and_dice.m"
                {
#line 804 "slice_and_dice.m"
                  MR_String mdbcomp__slice_and_dice__SortStr__tmp_copy_5 = mdbcomp__slice_and_dice__Rest_10;

#line 804 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__SortStr_5 = mdbcomp__slice_and_dice__SortStr__tmp_copy_5;
#line 804 "slice_and_dice.m"
                }
#line 804 "slice_and_dice.m"
                continue;
#line 804 "slice_and_dice.m"
              }
#line 805 "slice_and_dice.m"
            else
#line 806 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__Result_8 = mdbcomp__slice_and_dice__Result0_11;
#line 799 "slice_and_dice.m"
          }
#line 808 "slice_and_dice.m"
        else
#line 809 "slice_and_dice.m"
          {
#line 809 "slice_and_dice.m"
            {
#line 809 "slice_and_dice.m"
              mercury__require__error_1_p_0((MR_String) "dice_exec_count_compare: empty sort string");
#line 809 "slice_and_dice.m"
              return;
            }
#line 809 "slice_and_dice.m"
          }
#line 808 "slice_and_dice.m"
      }
#line 808 "slice_and_dice.m"
      break;
#line 808 "slice_and_dice.m"
    }
#line 751 "slice_and_dice.m"
}

#line 717 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(
#line 717 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 717 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
#line 717 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
#line 717 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 717 "slice_and_dice.m"
{
#line 746 "slice_and_dice.m"
  {
#line 746 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__SortStr_5, (MR_String) "") == 0);
#line 746 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 2)));
#line 746 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 1)));
#line 746 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 0)));
#line 746 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 2)));
#line 746 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 1)));
#line 746 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 0)));

#line 746 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 723 "slice_and_dice.m"
      {
#line 723 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ProcLabelResult_15;

#line 725 "slice_and_dice.m"
        {
#line 725 "slice_and_dice.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__ProcLabelResult_15, mdbcomp__slice_and_dice__V_27_27, mdbcomp__slice_and_dice__V_30_30);
        }
#line 729 "slice_and_dice.m"
        if ((mdbcomp__slice_and_dice__ProcLabelResult_15 == (MR_Integer) 1))
#line 727 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
#line 729 "slice_and_dice.m"
        else
#line 729 "slice_and_dice.m"
          if ((mdbcomp__slice_and_dice__ProcLabelResult_15 == (MR_Integer) 0))
#line 730 "slice_and_dice.m"
            {
#line 730 "slice_and_dice.m"
              MR_Word mdbcomp__slice_and_dice__PathPortResult_16;
#line 530 "slice_and_dice.m"
              MR_Word mdbcomp__slice_and_dice__ResultPrime_36;

#line 501 "slice_and_dice.m"
              if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_26_26)) == (MR_mktag((MR_Integer) 1))))
#line 502 "slice_and_dice.m"
                {
#line 502 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__RevPathA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 502 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__RevPathB_38;
#line 502 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__PathA_39;
#line 502 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__PathB_40;

#line 503 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 503 "slice_and_dice.m"
                  if (mdbcomp__slice_and_dice__succeeded)
#line 503 "slice_and_dice.m"
                    {
#line 503 "slice_and_dice.m"
                      mdbcomp__slice_and_dice__RevPathB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 505 "slice_and_dice.m"
                      {
#line 505 "slice_and_dice.m"
                        mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_37, &mdbcomp__slice_and_dice__PathA_39);
                      }
#line 506 "slice_and_dice.m"
                      {
#line 506 "slice_and_dice.m"
                        mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_38, &mdbcomp__slice_and_dice__PathB_40);
                      }
#line 507 "slice_and_dice.m"
                      {
#line 507 "slice_and_dice.m"
                        mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_39, mdbcomp__slice_and_dice__PathB_40);
                      }
#line 507 "slice_and_dice.m"
                      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 503 "slice_and_dice.m"
                    }
#line 502 "slice_and_dice.m"
                }
#line 501 "slice_and_dice.m"
              else
#line 501 "slice_and_dice.m"
                if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_26_26)) == (MR_mktag((MR_Integer) 2))))
#line 510 "slice_and_dice.m"
                  {
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortResult_41;
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortA_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortB_51;
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__RevPathA_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 1)));
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__RevPathB_53;
#line 510 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_61_61;
#line 510 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_62_62;

#line 511 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 2)));
#line 511 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 511 "slice_and_dice.m"
                      {
#line 511 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__PortB_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 511 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__RevPathB_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 1)));
#line 513 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_61_61 = (MR_Integer) mdbcomp__slice_and_dice__PortA_50;
#line 513 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_62_62 = (MR_Integer) mdbcomp__slice_and_dice__PortB_51;
#line 513 "slice_and_dice.m"
                        {
#line 513 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__PortResult_41, mdbcomp__slice_and_dice__V_61_61, mdbcomp__slice_and_dice__V_62_62);
                        }
#line 517 "slice_and_dice.m"
                        if ((mdbcomp__slice_and_dice__PortResult_41 == (MR_Integer) 1))
#line 516 "slice_and_dice.m"
                          mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 1;
#line 517 "slice_and_dice.m"
                        else
#line 517 "slice_and_dice.m"
                          if ((mdbcomp__slice_and_dice__PortResult_41 == (MR_Integer) 0))
#line 518 "slice_and_dice.m"
                            {
#line 518 "slice_and_dice.m"
                              MR_Word mdbcomp__slice_and_dice__PathA_42;
#line 518 "slice_and_dice.m"
                              MR_Word mdbcomp__slice_and_dice__PathB_43;

#line 519 "slice_and_dice.m"
                              {
#line 519 "slice_and_dice.m"
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_52, &mdbcomp__slice_and_dice__PathA_42);
                              }
#line 520 "slice_and_dice.m"
                              {
#line 520 "slice_and_dice.m"
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_53, &mdbcomp__slice_and_dice__PathB_43);
                              }
#line 521 "slice_and_dice.m"
                              {
#line 521 "slice_and_dice.m"
                                mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_42, mdbcomp__slice_and_dice__PathB_43);
                              }
#line 518 "slice_and_dice.m"
                            }
#line 517 "slice_and_dice.m"
                          else
#line 524 "slice_and_dice.m"
                            mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 2;
#line 517 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 511 "slice_and_dice.m"
                      }
#line 510 "slice_and_dice.m"
                  }
#line 501 "slice_and_dice.m"
                else
#line 496 "slice_and_dice.m"
                  {
#line 496 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 496 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortB_35;
#line 496 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_63_63;
#line 496 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_64_64;

#line 497 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 0)));
#line 497 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 497 "slice_and_dice.m"
                      {
#line 497 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__PortB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 499 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_63_63 = (MR_Integer) mdbcomp__slice_and_dice__PortA_34;
#line 499 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_64_64 = (MR_Integer) mdbcomp__slice_and_dice__PortB_35;
#line 499 "slice_and_dice.m"
                        {
#line 499 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__V_63_63, mdbcomp__slice_and_dice__V_64_64);
                        }
#line 499 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 497 "slice_and_dice.m"
                      }
#line 496 "slice_and_dice.m"
                  }
#line 530 "slice_and_dice.m"
              if (mdbcomp__slice_and_dice__succeeded)
#line 529 "slice_and_dice.m"
                mdbcomp__slice_and_dice__PathPortResult_16 = mdbcomp__slice_and_dice__ResultPrime_36;
#line 530 "slice_and_dice.m"
              else
#line 533 "slice_and_dice.m"
                {
#line 533 "slice_and_dice.m"
                  mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__PathPortResult_16, mdbcomp__slice_and_dice__V_26_26, mdbcomp__slice_and_dice__V_29_29);
                }
#line 735 "slice_and_dice.m"
              if ((mdbcomp__slice_and_dice__PathPortResult_16 == (MR_Integer) 1))
#line 733 "slice_and_dice.m"
                *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
#line 735 "slice_and_dice.m"
              else
#line 735 "slice_and_dice.m"
                if ((mdbcomp__slice_and_dice__PathPortResult_16 == (MR_Integer) 0))
#line 737 "slice_and_dice.m"
                  {
#line 737 "slice_and_dice.m"
                    mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(mdbcomp__slice_and_dice__Result_8, mdbcomp__slice_and_dice__V_25_25, mdbcomp__slice_and_dice__V_28_28);
#line 737 "slice_and_dice.m"
                    return;
                  }
#line 735 "slice_and_dice.m"
                else
#line 739 "slice_and_dice.m"
                  *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
#line 730 "slice_and_dice.m"
            }
#line 729 "slice_and_dice.m"
          else
#line 743 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
#line 723 "slice_and_dice.m"
      }
#line 746 "slice_and_dice.m"
    else
#line 747 "slice_and_dice.m"
      {
#line 747 "slice_and_dice.m"
        mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(mdbcomp__slice_and_dice__SortStr_5, mdbcomp__slice_and_dice__V_25_25, mdbcomp__slice_and_dice__V_28_28, mdbcomp__slice_and_dice__Result_8);
#line 747 "slice_and_dice.m"
        return;
      }
#line 746 "slice_and_dice.m"
  }
#line 717 "slice_and_dice.m"
}

#line 711 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(
#line 711 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_3,
#line 711 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 711 "slice_and_dice.m"
{
#line 714 "slice_and_dice.m"
  {
#line 714 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 714 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Label_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 714 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcSymModule_11;
#line 714 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__SymModule_20;
#line 714 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 714 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

#line 961 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__Label_4)) == (MR_mktag((MR_Integer) 0))))
#line 960 "slice_and_dice.m"
      {
#line 960 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
#line 960 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
#line 960 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_12_12;
#line 960 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_13_13;
#line 960 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_14_14;

#line 960 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
#line 960 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
#line 960 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
#line 960 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
#line 960 "slice_and_dice.m"
      }
#line 961 "slice_and_dice.m"
    else
#line 962 "slice_and_dice.m"
      {
#line 962 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
#line 962 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
#line 962 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_17_17;
#line 962 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_18_18;
#line 962 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_19_19;

#line 962 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
#line 962 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
#line 962 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
#line 962 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
#line 962 "slice_and_dice.m"
      }
#line 964 "slice_and_dice.m"
    {
#line 964 "slice_and_dice.m"
      mdbcomp__slice_and_dice__SymModule_20 = mdbcomp__prim_data__string_to_sym_name_1_f_0(mdbcomp__slice_and_dice__Module_3);
    }
#line 965 "slice_and_dice.m"
    {
#line 965 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__prim_data__is_submodule_2_p_0(mdbcomp__slice_and_dice__ProcSymModule_11, mdbcomp__slice_and_dice__SymModule_20);
    }
#line 714 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 714 "slice_and_dice.m"
  }
#line 711 "slice_and_dice.m"
}

#line 658 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0(
#line 658 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_10,
#line 658 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_11,
#line 658 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_12,
#line 658 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__MaxRow_13,
#line 658 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_14,
#line 658 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__DiceStr_15,
#line 658 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__Problem_16)
#line 658 "slice_and_dice.m"
{
#line 662 "slice_and_dice.m"
  {
#line 662 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 663 "slice_and_dice.m"
    {
#line 663 "slice_and_dice.m"
      mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(mdbcomp__slice_and_dice__PassFile_10, mdbcomp__slice_and_dice__FailFile_11, mdbcomp__slice_and_dice__SortStr_12, mdbcomp__slice_and_dice__MaxRow_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdbcomp__slice_and_dice__Module_14, mdbcomp__slice_and_dice__DiceStr_15, mdbcomp__slice_and_dice__Problem_16);
#line 663 "slice_and_dice.m"
      return;
    }
#line 662 "slice_and_dice.m"
  }
#line 658 "slice_and_dice.m"
}

#line 634 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(
#line 634 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_7,
#line 634 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__PathPort_8,
#line 634 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_9,
#line 634 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__FormattedContext_10,
#line 634 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__Count_11,
#line 634 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__Tests_12)
#line 634 "slice_and_dice.m"
{
#line 638 "slice_and_dice.m"
  {
#line 638 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 638 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ExecCounts_13;
#line 638 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_14;
#line 638 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__LineNumber_15;
#line 638 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_19_19;
#line 638 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_21_21;

#line 639 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__PathPort_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_7, (MR_Integer) 0)));
#line 639 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_7, (MR_Integer) 1)));
#line 639 "slice_and_dice.m"
    mdbcomp__slice_and_dice__ExecCounts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_7, (MR_Integer) 2)));
#line 640 "slice_and_dice.m"
    mdbcomp__slice_and_dice__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 0)));
#line 640 "slice_and_dice.m"
    mdbcomp__slice_and_dice__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 1)));
#line 640 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__Count_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 2)));
#line 640 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__Tests_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 3)));
#line 1007 "slice_and_dice.m"
    {
#line 1007 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_21_21 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__LineNumber_15);
    }
#line 1007 "slice_and_dice.m"
    {
#line 1007 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdbcomp__slice_and_dice__V_21_21);
    }
#line 1007 "slice_and_dice.m"
    {
#line 1007 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__FormattedContext_10 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__FileName_14, mdbcomp__slice_and_dice__V_19_19);
    }
#line 638 "slice_and_dice.m"
  }
#line 634 "slice_and_dice.m"
}

#line 627 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6(
#line 627 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 627 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 627 "slice_and_dice.m"
{
#line 627 "slice_and_dice.m"
  {
#line 627 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 627 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 627 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv8_HeadVar__2_2;

#line 627 "slice_and_dice.m"
    {
#line 627 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv8_HeadVar__2_2 = mdbcomp__slice_and_dice__bracket_int_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 627 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv8_HeadVar__2_2));
#line 627 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 627 "slice_and_dice.m"
  }
#line 627 "slice_and_dice.m"
}

#line 618 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5(
#line 618 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 618 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 618 "slice_and_dice.m"
{
#line 618 "slice_and_dice.m"
  {
#line 618 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 618 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

#line 618 "slice_and_dice.m"
    {
#line 618 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__618__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 618 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 618 "slice_and_dice.m"
  }
#line 618 "slice_and_dice.m"
}

#line 612 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4(
#line 612 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 612 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 612 "slice_and_dice.m"
{
#line 612 "slice_and_dice.m"
  {
#line 612 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 612 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 612 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv7_HeadVar__2_2;

#line 612 "slice_and_dice.m"
    {
#line 612 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv7_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 612 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv7_HeadVar__2_2));
#line 612 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 612 "slice_and_dice.m"
  }
#line 612 "slice_and_dice.m"
}

#line 611 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3(
#line 611 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 611 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 611 "slice_and_dice.m"
{
#line 611 "slice_and_dice.m"
  {
#line 611 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 611 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 611 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv6_HeadVar__2_2;

#line 611 "slice_and_dice.m"
    {
#line 611 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv6_HeadVar__2_2 = mdbcomp__slice_and_dice__format_path_port_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 611 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv6_HeadVar__2_2));
#line 611 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 611 "slice_and_dice.m"
  }
#line 611 "slice_and_dice.m"
}

#line 610 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2(
#line 610 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 610 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 610 "slice_and_dice.m"
{
#line 610 "slice_and_dice.m"
  {
#line 610 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 610 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 610 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv5_Str_4;

#line 610 "slice_and_dice.m"
    {
#line 610 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv5_Str_4 = mdbcomp__slice_and_dice__format_proc_label_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 610 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv5_Str_4));
#line 610 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 610 "slice_and_dice.m"
  }
#line 610 "slice_and_dice.m"
}

#line 608 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1(
#line 608 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 608 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
#line 608 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6)
#line 608 "slice_and_dice.m"
{
#line 608 "slice_and_dice.m"
  {
#line 608 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv4_PathPort_8;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv3_ProcLabel_9;
#line 608 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv2_FormattedContext_10;
#line 608 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv1_Count_11;
#line 608 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv0_Tests_12;

#line 608 "slice_and_dice.m"
    {
#line 608 "slice_and_dice.m"
      mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv4_PathPort_8, &mdbcomp__slice_and_dice__conv3_ProcLabel_9, &mdbcomp__slice_and_dice__conv2_FormattedContext_10, &mdbcomp__slice_and_dice__conv1_Count_11, &mdbcomp__slice_and_dice__conv0_Tests_12);
    }
#line 608 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv4_PathPort_8));
#line 608 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_ProcLabel_9));
#line 608 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_FormattedContext_10));
#line 608 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_5 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_Count_11));
#line 608 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_6 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_Tests_12));
#line 608 "slice_and_dice.m"
  }
#line 608 "slice_and_dice.m"
}

#line 603 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(
#line 603 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCounts_7,
#line 603 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__TotalTests_8,
#line 603 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_9,
#line 603 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybePathColumns_10,
#line 603 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_11)
#line 603 "slice_and_dice.m"
{
#line 607 "slice_and_dice.m"
  {
#line 607 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 607 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__Str_12;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_78_78 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabels_13;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPorts_14;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedContexts_15;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Counts_16;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Tests_17;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedProcLabels_18;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedPathPorts_19;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__CountStrs_20;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__AlwaysColumns_21;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__OtherTests_23;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Columns_24;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_33_33;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_34_34;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_35_35;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_37_37;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_38_38;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_39_39;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_40_40;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_42_42;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_43_43;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_44_44;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_45_45;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_47_47;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_48_48;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_49_49;
#line 607 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_50_50;
#line 607 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_67_67;
#line 618 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice___OneTests_22;

#line 608 "slice_and_dice.m"
    {
#line 608 "slice_and_dice.m"
      mercury__list__map5_7_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0, mdbcomp__slice_and_dice__TypeCtorInfo_77_77, mdbcomp__slice_and_dice__TypeCtorInfo_78_78, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, mdbcomp__slice_and_dice__TypeCtorInfo_80_80, mdbcomp__slice_and_dice__TypeCtorInfo_80_80, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[12], mdbcomp__slice_and_dice__LabelCounts_7, &mdbcomp__slice_and_dice__ProcLabels_13, &mdbcomp__slice_and_dice__PathPorts_14, &mdbcomp__slice_and_dice__FormattedContexts_15, &mdbcomp__slice_and_dice__Counts_16, &mdbcomp__slice_and_dice__Tests_17);
    }
#line 610 "slice_and_dice.m"
    {
#line 610 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedProcLabels_18 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_77_77, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[13], mdbcomp__slice_and_dice__ProcLabels_13);
    }
#line 611 "slice_and_dice.m"
    {
#line 611 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedPathPorts_19 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_78_78, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[14], mdbcomp__slice_and_dice__PathPorts_14);
    }
#line 612 "slice_and_dice.m"
    {
#line 612 "slice_and_dice.m"
      mdbcomp__slice_and_dice__CountStrs_20 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_80_80, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[15], mdbcomp__slice_and_dice__Counts_16);
    }
#line 614 "slice_and_dice.m"
    {
#line 614 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_35_35, 0) = ((MR_Box) ((MR_String) "Procedure"));
#line 614 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_35_35, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedProcLabels_18));
#line 614 "slice_and_dice.m"
    }
#line 614 "slice_and_dice.m"
    {
#line 614 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 614 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_34_34, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_35_35));
#line 614 "slice_and_dice.m"
    }
#line 614 "slice_and_dice.m"
    {
#line 614 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 614 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_33_33, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_34_34));
#line 614 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_33_33, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxPredColumns_9));
#line 614 "slice_and_dice.m"
    }
#line 615 "slice_and_dice.m"
    {
#line 615 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_40_40, 0) = ((MR_Box) ((MR_String) "Path/Port"));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_40_40, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedPathPorts_19));
#line 615 "slice_and_dice.m"
    }
#line 615 "slice_and_dice.m"
    {
#line 615 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_39_39, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_40_40));
#line 615 "slice_and_dice.m"
    }
#line 615 "slice_and_dice.m"
    {
#line 615 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_39_39));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybePathColumns_10));
#line 615 "slice_and_dice.m"
    }
#line 616 "slice_and_dice.m"
    {
#line 616 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_45_45, 0) = ((MR_Box) ((MR_String) "File:Line"));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_45_45, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedContexts_15));
#line 616 "slice_and_dice.m"
    }
#line 616 "slice_and_dice.m"
    {
#line 616 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_44_44, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_45_45));
#line 616 "slice_and_dice.m"
    }
#line 616 "slice_and_dice.m"
    {
#line 616 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_43_43, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_44_44));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_43_43, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxFileColumns_11));
#line 616 "slice_and_dice.m"
    }
#line 617 "slice_and_dice.m"
    {
#line 617 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_50_50, 0) = ((MR_Box) ((MR_String) "Count"));
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_50_50, 1) = ((MR_Box) (mdbcomp__slice_and_dice__CountStrs_20));
#line 617 "slice_and_dice.m"
    }
#line 617 "slice_and_dice.m"
    {
#line 617 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_49_49, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_50_50));
#line 617 "slice_and_dice.m"
    }
#line 617 "slice_and_dice.m"
    {
#line 617 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_48_48, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_49_49));
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "slice_and_dice.m"
    }
#line 616 "slice_and_dice.m"
    {
#line 616 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_47_47, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_48_48));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 616 "slice_and_dice.m"
    }
#line 615 "slice_and_dice.m"
    {
#line 615 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_42_42, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_43_43));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_42_42, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_47_47));
#line 615 "slice_and_dice.m"
    }
#line 614 "slice_and_dice.m"
    {
#line 614 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_37_37, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_38_38));
#line 614 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_37_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_42_42));
#line 614 "slice_and_dice.m"
    }
#line 613 "slice_and_dice.m"
    {
#line 613 "slice_and_dice.m"
      mdbcomp__slice_and_dice__AlwaysColumns_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__AlwaysColumns_21, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_33_33));
#line 613 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__AlwaysColumns_21, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_37_37));
#line 613 "slice_and_dice.m"
    }
#line 618 "slice_and_dice.m"
    {
#line 618 "slice_and_dice.m"
      mercury__list__filter_4_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_80_80, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[3], mdbcomp__slice_and_dice__Tests_17, &mdbcomp__slice_and_dice___OneTests_22, &mdbcomp__slice_and_dice__OtherTests_23);
    }
#line 625 "slice_and_dice.m"
    if ((mdbcomp__slice_and_dice__OtherTests_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 624 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Columns_24 = mdbcomp__slice_and_dice__AlwaysColumns_21;
#line 625 "slice_and_dice.m"
    else
#line 626 "slice_and_dice.m"
      {
#line 626 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TestsStrs_27;
#line 626 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__TotalTestsStr_28;
#line 626 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_58_58;
#line 626 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_59_59;
#line 626 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_61_61;
#line 626 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_62_62;
#line 626 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_63_63;
#line 626 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_64_64;

#line 627 "slice_and_dice.m"
        {
#line 627 "slice_and_dice.m"
          mdbcomp__slice_and_dice__TestsStrs_27 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_80_80, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[16], mdbcomp__slice_and_dice__Tests_17);
        }
#line 628 "slice_and_dice.m"
        {
#line 628 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_59_59 = mercury__string__int_to_string_thousands_1_f_0(mdbcomp__slice_and_dice__TotalTests_8);
        }
#line 628 "slice_and_dice.m"
        {
#line 628 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_58_58 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_59_59, (MR_String) ")");
        }
#line 628 "slice_and_dice.m"
        {
#line 628 "slice_and_dice.m"
          mdbcomp__slice_and_dice__TotalTestsStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", mdbcomp__slice_and_dice__V_58_58);
        }
#line 630 "slice_and_dice.m"
        {
#line 630 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_64_64, 0) = ((MR_Box) (mdbcomp__slice_and_dice__TotalTestsStr_28));
#line 630 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_64_64, 1) = ((MR_Box) (mdbcomp__slice_and_dice__TestsStrs_27));
#line 630 "slice_and_dice.m"
        }
#line 630 "slice_and_dice.m"
        {
#line 630 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 630 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_63_63, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_64_64));
#line 630 "slice_and_dice.m"
        }
#line 630 "slice_and_dice.m"
        {
#line 630 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 630 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_62_62, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_63_63));
#line 630 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "slice_and_dice.m"
        }
#line 629 "slice_and_dice.m"
        {
#line 629 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_61_61, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_62_62));
#line 629 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 629 "slice_and_dice.m"
        }
#line 629 "slice_and_dice.m"
        {
#line 629 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Columns_24 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[6], mdbcomp__slice_and_dice__AlwaysColumns_21, mdbcomp__slice_and_dice__V_61_61);
        }
#line 626 "slice_and_dice.m"
      }
#line 632 "slice_and_dice.m"
    {
#line 632 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_67_67 = mercury__string__format_table_max_2_f_0(mdbcomp__slice_and_dice__Columns_24, (MR_String) " ");
    }
#line 632 "slice_and_dice.m"
    {
#line 632 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__Str_12 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_67_67, (MR_String) "\n");
    }
#line 607 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__Str_12;
#line 607 "slice_and_dice.m"
  }
#line 603 "slice_and_dice.m"
}

#line 595 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(
#line 595 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
#line 595 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 595 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__SliceLabelCount_7)
#line 595 "slice_and_dice.m"
{
#line 598 "slice_and_dice.m"
  {
#line 598 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 598 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPort_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 598 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ExecCount_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));

#line 599 "slice_and_dice.m"
    {
#line 599 "slice_and_dice.m"
      MR_Word base;
#line 599 "slice_and_dice.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 599 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__SliceLabelCount_7 = base;
#line 599 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_4));
#line 599 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PathPort_5));
#line 599 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_6));
#line 599 "slice_and_dice.m"
    }
#line 598 "slice_and_dice.m"
  }
#line 595 "slice_and_dice.m"
}

#line 591 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1(
#line 591 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 591 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 591 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
#line 591 "slice_and_dice.m"
{
#line 591 "slice_and_dice.m"
  {
#line 591 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 591 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_SliceLabelCount_7;

#line 591 "slice_and_dice.m"
    {
#line 591 "slice_and_dice.m"
      mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_SliceLabelCount_7);
    }
#line 591 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_SliceLabelCount_7));
#line 591 "slice_and_dice.m"
  }
#line 591 "slice_and_dice.m"
}

#line 586 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(
#line 586 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
#line 586 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcSlice_6,
#line 586 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
#line 586 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11)
#line 586 "slice_and_dice.m"
{
#line 589 "slice_and_dice.m"
  {
#line 589 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 589 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_19_19;
#line 589 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcExecCounts_8;
#line 589 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__NewLabelCounts_9;
#line 589 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_12_12;

#line 590 "slice_and_dice.m"
    {
#line 590 "slice_and_dice.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0, mdbcomp__slice_and_dice__ProcSlice_6, &mdbcomp__slice_and_dice__ProcExecCounts_8);
    }
#line 591 "slice_and_dice.m"
    {
#line 591 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 591 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[1]));
#line 591 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 1) = ((MR_Box) (mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1));
#line 591 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 591 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 3) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_5));
#line 591 "slice_and_dice.m"
    }
#line 7825 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;
#line 591 "slice_and_dice.m"
    {
#line 591 "slice_and_dice.m"
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[5], mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__V_12_12, mdbcomp__slice_and_dice__ProcExecCounts_8, &mdbcomp__slice_and_dice__NewLabelCounts_9);
    }
#line 593 "slice_and_dice.m"
    {
#line 593 "slice_and_dice.m"
      mercury__list__append_3_p_1(mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10, mdbcomp__slice_and_dice__NewLabelCounts_9, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);
#line 593 "slice_and_dice.m"
      return;
    }
#line 589 "slice_and_dice.m"
  }
#line 586 "slice_and_dice.m"
}

#line 536 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(
#line 536 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 536 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
#line 536 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
#line 536 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 536 "slice_and_dice.m"
{
#line 565 "slice_and_dice.m"
  while (MR_TRUE)
#line 565 "slice_and_dice.m"
    {
#line 565 "slice_and_dice.m"
      /* tailcall optimized into a loop */
#line 565 "slice_and_dice.m"
      {
#line 565 "slice_and_dice.m"
        MR_bool mdbcomp__slice_and_dice__succeeded;
#line 565 "slice_and_dice.m"
        MR_Char mdbcomp__slice_and_dice__C_9;
#line 565 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Rest_10;

#line 541 "slice_and_dice.m"
        {
#line 541 "slice_and_dice.m"
          mdbcomp__slice_and_dice__succeeded = mercury__string__first_char_3_p_3(mdbcomp__slice_and_dice__SortStr_5, &mdbcomp__slice_and_dice__C_9, &mdbcomp__slice_and_dice__Rest_10);
        }
#line 565 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 556 "slice_and_dice.m"
          {
#line 556 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Result0_11;
#line 558 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_21_21;
#line 558 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_22_22;

#line 542 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 99);
#line 545 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 543 "slice_and_dice.m"
              {
#line 543 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 543 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 543 "slice_and_dice.m"
                MR_String mdbcomp__slice_and_dice__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 543 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 543 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 543 "slice_and_dice.m"
                MR_String mdbcomp__slice_and_dice__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 543 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 543 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));

#line 543 "slice_and_dice.m"
                {
#line 543 "slice_and_dice.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_12_12, mdbcomp__slice_and_dice__V_13_13);
                }
#line 543 "slice_and_dice.m"
              }
#line 545 "slice_and_dice.m"
            else
#line 548 "slice_and_dice.m"
              {
#line 545 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 67);
#line 548 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 546 "slice_and_dice.m"
                  {
#line 546 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 546 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 546 "slice_and_dice.m"
                    MR_String mdbcomp__slice_and_dice__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 546 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 546 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 546 "slice_and_dice.m"
                    MR_String mdbcomp__slice_and_dice__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 546 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 546 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));

#line 546 "slice_and_dice.m"
                    {
#line 546 "slice_and_dice.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_14_14, mdbcomp__slice_and_dice__V_15_15);
                    }
#line 546 "slice_and_dice.m"
                  }
#line 548 "slice_and_dice.m"
                else
#line 551 "slice_and_dice.m"
                  {
#line 548 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 116);
#line 551 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 549 "slice_and_dice.m"
                      {
#line 549 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 549 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 549 "slice_and_dice.m"
                        MR_String mdbcomp__slice_and_dice__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 549 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 549 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 549 "slice_and_dice.m"
                        MR_String mdbcomp__slice_and_dice__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 549 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 549 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));

#line 549 "slice_and_dice.m"
                        {
#line 549 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_16_16, mdbcomp__slice_and_dice__V_17_17);
                        }
#line 549 "slice_and_dice.m"
                      }
#line 551 "slice_and_dice.m"
                    else
#line 554 "slice_and_dice.m"
                      {
#line 551 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 84);
#line 554 "slice_and_dice.m"
                        if (mdbcomp__slice_and_dice__succeeded)
#line 552 "slice_and_dice.m"
                          {
#line 552 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 552 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 552 "slice_and_dice.m"
                            MR_String mdbcomp__slice_and_dice__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 552 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 552 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 552 "slice_and_dice.m"
                            MR_String mdbcomp__slice_and_dice__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 552 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 552 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));

#line 552 "slice_and_dice.m"
                            {
#line 552 "slice_and_dice.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_18_18, mdbcomp__slice_and_dice__V_19_19);
                            }
#line 552 "slice_and_dice.m"
                          }
#line 554 "slice_and_dice.m"
                        else
#line 555 "slice_and_dice.m"
                          {
#line 555 "slice_and_dice.m"
                            {
#line 555 "slice_and_dice.m"
                              mercury__require__error_1_p_0((MR_String) "slice_exec_count_compare: invalid sort string");
#line 555 "slice_and_dice.m"
                              return;
                            }
#line 555 "slice_and_dice.m"
                          }
#line 554 "slice_and_dice.m"
                      }
#line 551 "slice_and_dice.m"
                  }
#line 548 "slice_and_dice.m"
              }
#line 558 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Result0_11 == (MR_Integer) 0);
#line 558 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 558 "slice_and_dice.m"
              {
#line 559 "slice_and_dice.m"
                {
#line 559 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__V_21_21 = mercury__string__length_1_f_0(mdbcomp__slice_and_dice__Rest_10);
                }
#line 559 "slice_and_dice.m"
                mdbcomp__slice_and_dice__V_22_22 = (MR_Integer) 0;
#line 559 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_21_21 > mdbcomp__slice_and_dice__V_22_22);
#line 558 "slice_and_dice.m"
              }
#line 562 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 561 "slice_and_dice.m"
              {
#line 561 "slice_and_dice.m"
                /* direct tailcall eliminated */
#line 561 "slice_and_dice.m"
                {
#line 561 "slice_and_dice.m"
                  MR_String mdbcomp__slice_and_dice__SortStr__tmp_copy_5 = mdbcomp__slice_and_dice__Rest_10;

#line 561 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__SortStr_5 = mdbcomp__slice_and_dice__SortStr__tmp_copy_5;
#line 561 "slice_and_dice.m"
                }
#line 561 "slice_and_dice.m"
                continue;
#line 561 "slice_and_dice.m"
              }
#line 562 "slice_and_dice.m"
            else
#line 563 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__Result_8 = mdbcomp__slice_and_dice__Result0_11;
#line 556 "slice_and_dice.m"
          }
#line 565 "slice_and_dice.m"
        else
#line 566 "slice_and_dice.m"
          {
#line 566 "slice_and_dice.m"
            {
#line 566 "slice_and_dice.m"
              mercury__require__error_1_p_0((MR_String) "slice_exec_count_compare: empty sort string");
#line 566 "slice_and_dice.m"
              return;
            }
#line 566 "slice_and_dice.m"
          }
#line 565 "slice_and_dice.m"
      }
#line 565 "slice_and_dice.m"
      break;
#line 565 "slice_and_dice.m"
    }
#line 536 "slice_and_dice.m"
}

#line 454 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(
#line 454 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 454 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
#line 454 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
#line 454 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 454 "slice_and_dice.m"
{
#line 483 "slice_and_dice.m"
  {
#line 483 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__SortStr_5, (MR_String) "") == 0);
#line 483 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 2)));
#line 483 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 1)));
#line 483 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 0)));
#line 483 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 2)));
#line 483 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 1)));
#line 483 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 0)));

#line 483 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 460 "slice_and_dice.m"
      {
#line 460 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ProcLabelResult_15;

#line 462 "slice_and_dice.m"
        {
#line 462 "slice_and_dice.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__ProcLabelResult_15, mdbcomp__slice_and_dice__V_27_27, mdbcomp__slice_and_dice__V_30_30);
        }
#line 466 "slice_and_dice.m"
        if ((mdbcomp__slice_and_dice__ProcLabelResult_15 == (MR_Integer) 1))
#line 464 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
#line 466 "slice_and_dice.m"
        else
#line 466 "slice_and_dice.m"
          if ((mdbcomp__slice_and_dice__ProcLabelResult_15 == (MR_Integer) 0))
#line 467 "slice_and_dice.m"
            {
#line 467 "slice_and_dice.m"
              MR_Word mdbcomp__slice_and_dice__PathPortResult_16;
#line 530 "slice_and_dice.m"
              MR_Word mdbcomp__slice_and_dice__ResultPrime_36;

#line 501 "slice_and_dice.m"
              if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_26_26)) == (MR_mktag((MR_Integer) 1))))
#line 502 "slice_and_dice.m"
                {
#line 502 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__RevPathA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 502 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__RevPathB_38;
#line 502 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__PathA_39;
#line 502 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__PathB_40;

#line 503 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 503 "slice_and_dice.m"
                  if (mdbcomp__slice_and_dice__succeeded)
#line 503 "slice_and_dice.m"
                    {
#line 503 "slice_and_dice.m"
                      mdbcomp__slice_and_dice__RevPathB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 505 "slice_and_dice.m"
                      {
#line 505 "slice_and_dice.m"
                        mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_37, &mdbcomp__slice_and_dice__PathA_39);
                      }
#line 506 "slice_and_dice.m"
                      {
#line 506 "slice_and_dice.m"
                        mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_38, &mdbcomp__slice_and_dice__PathB_40);
                      }
#line 507 "slice_and_dice.m"
                      {
#line 507 "slice_and_dice.m"
                        mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_39, mdbcomp__slice_and_dice__PathB_40);
                      }
#line 507 "slice_and_dice.m"
                      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 503 "slice_and_dice.m"
                    }
#line 502 "slice_and_dice.m"
                }
#line 501 "slice_and_dice.m"
              else
#line 501 "slice_and_dice.m"
                if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_26_26)) == (MR_mktag((MR_Integer) 2))))
#line 510 "slice_and_dice.m"
                  {
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortResult_41;
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortA_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortB_51;
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__RevPathA_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 1)));
#line 510 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__RevPathB_53;
#line 510 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_61_61;
#line 510 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_62_62;

#line 511 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 2)));
#line 511 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 511 "slice_and_dice.m"
                      {
#line 511 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__PortB_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 511 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__RevPathB_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 1)));
#line 513 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_61_61 = (MR_Integer) mdbcomp__slice_and_dice__PortA_50;
#line 513 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_62_62 = (MR_Integer) mdbcomp__slice_and_dice__PortB_51;
#line 513 "slice_and_dice.m"
                        {
#line 513 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__PortResult_41, mdbcomp__slice_and_dice__V_61_61, mdbcomp__slice_and_dice__V_62_62);
                        }
#line 517 "slice_and_dice.m"
                        if ((mdbcomp__slice_and_dice__PortResult_41 == (MR_Integer) 1))
#line 516 "slice_and_dice.m"
                          mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 1;
#line 517 "slice_and_dice.m"
                        else
#line 517 "slice_and_dice.m"
                          if ((mdbcomp__slice_and_dice__PortResult_41 == (MR_Integer) 0))
#line 518 "slice_and_dice.m"
                            {
#line 518 "slice_and_dice.m"
                              MR_Word mdbcomp__slice_and_dice__PathA_42;
#line 518 "slice_and_dice.m"
                              MR_Word mdbcomp__slice_and_dice__PathB_43;

#line 519 "slice_and_dice.m"
                              {
#line 519 "slice_and_dice.m"
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_52, &mdbcomp__slice_and_dice__PathA_42);
                              }
#line 520 "slice_and_dice.m"
                              {
#line 520 "slice_and_dice.m"
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_53, &mdbcomp__slice_and_dice__PathB_43);
                              }
#line 521 "slice_and_dice.m"
                              {
#line 521 "slice_and_dice.m"
                                mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_42, mdbcomp__slice_and_dice__PathB_43);
                              }
#line 518 "slice_and_dice.m"
                            }
#line 517 "slice_and_dice.m"
                          else
#line 524 "slice_and_dice.m"
                            mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 2;
#line 517 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 511 "slice_and_dice.m"
                      }
#line 510 "slice_and_dice.m"
                  }
#line 501 "slice_and_dice.m"
                else
#line 496 "slice_and_dice.m"
                  {
#line 496 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 496 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortB_35;
#line 496 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_63_63;
#line 496 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_64_64;

#line 497 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 0)));
#line 497 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 497 "slice_and_dice.m"
                      {
#line 497 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__PortB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 499 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_63_63 = (MR_Integer) mdbcomp__slice_and_dice__PortA_34;
#line 499 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_64_64 = (MR_Integer) mdbcomp__slice_and_dice__PortB_35;
#line 499 "slice_and_dice.m"
                        {
#line 499 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__V_63_63, mdbcomp__slice_and_dice__V_64_64);
                        }
#line 499 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 497 "slice_and_dice.m"
                      }
#line 496 "slice_and_dice.m"
                  }
#line 530 "slice_and_dice.m"
              if (mdbcomp__slice_and_dice__succeeded)
#line 529 "slice_and_dice.m"
                mdbcomp__slice_and_dice__PathPortResult_16 = mdbcomp__slice_and_dice__ResultPrime_36;
#line 530 "slice_and_dice.m"
              else
#line 533 "slice_and_dice.m"
                {
#line 533 "slice_and_dice.m"
                  mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__PathPortResult_16, mdbcomp__slice_and_dice__V_26_26, mdbcomp__slice_and_dice__V_29_29);
                }
#line 472 "slice_and_dice.m"
              if ((mdbcomp__slice_and_dice__PathPortResult_16 == (MR_Integer) 1))
#line 470 "slice_and_dice.m"
                *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
#line 472 "slice_and_dice.m"
              else
#line 472 "slice_and_dice.m"
                if ((mdbcomp__slice_and_dice__PathPortResult_16 == (MR_Integer) 0))
#line 474 "slice_and_dice.m"
                  {
#line 474 "slice_and_dice.m"
                    mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(mdbcomp__slice_and_dice__Result_8, mdbcomp__slice_and_dice__V_25_25, mdbcomp__slice_and_dice__V_28_28);
#line 474 "slice_and_dice.m"
                    return;
                  }
#line 472 "slice_and_dice.m"
                else
#line 476 "slice_and_dice.m"
                  *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
#line 467 "slice_and_dice.m"
            }
#line 466 "slice_and_dice.m"
          else
#line 480 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
#line 460 "slice_and_dice.m"
      }
#line 483 "slice_and_dice.m"
    else
#line 484 "slice_and_dice.m"
      {
#line 484 "slice_and_dice.m"
        mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(mdbcomp__slice_and_dice__SortStr_5, mdbcomp__slice_and_dice__V_25_25, mdbcomp__slice_and_dice__V_28_28, mdbcomp__slice_and_dice__Result_8);
#line 484 "slice_and_dice.m"
        return;
      }
#line 483 "slice_and_dice.m"
  }
#line 454 "slice_and_dice.m"
}

#line 449 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(
#line 449 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_2)
#line 449 "slice_and_dice.m"
{
#line 451 "slice_and_dice.m"
  {
#line 451 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 451 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_3_3;
#line 451 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_2, (MR_Integer) 2)));
#line 452 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_2, (MR_Integer) 0)));
#line 452 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_2, (MR_Integer) 1)));
#line 452 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_5_5, (MR_Integer) 0)));
#line 452 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_5_5, (MR_Integer) 1)));
#line 452 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_10_10;

#line 452 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_5_5, (MR_Integer) 2)));
#line 452 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_5_5, (MR_Integer) 3)));
#line 452 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_3_3 > (MR_Integer) 0);
#line 451 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 451 "slice_and_dice.m"
  }
#line 449 "slice_and_dice.m"
}

#line 443 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(
#line 443 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_3,
#line 443 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 443 "slice_and_dice.m"
{
#line 446 "slice_and_dice.m"
  {
#line 446 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 446 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Label_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 446 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcSymModule_11;
#line 446 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__SymModule_20;
#line 446 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 446 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

#line 961 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__Label_4)) == (MR_mktag((MR_Integer) 0))))
#line 960 "slice_and_dice.m"
      {
#line 960 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
#line 960 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
#line 960 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_12_12;
#line 960 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_13_13;
#line 960 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_14_14;

#line 960 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
#line 960 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
#line 960 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
#line 960 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
#line 960 "slice_and_dice.m"
      }
#line 961 "slice_and_dice.m"
    else
#line 962 "slice_and_dice.m"
      {
#line 962 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
#line 962 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
#line 962 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_17_17;
#line 962 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_18_18;
#line 962 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_19_19;

#line 962 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
#line 962 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
#line 962 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
#line 962 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
#line 962 "slice_and_dice.m"
      }
#line 964 "slice_and_dice.m"
    {
#line 964 "slice_and_dice.m"
      mdbcomp__slice_and_dice__SymModule_20 = mdbcomp__prim_data__string_to_sym_name_1_f_0(mdbcomp__slice_and_dice__Module_3);
    }
#line 965 "slice_and_dice.m"
    {
#line 965 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__prim_data__is_submodule_2_p_0(mdbcomp__slice_and_dice__ProcSymModule_11, mdbcomp__slice_and_dice__SymModule_20);
    }
#line 446 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 446 "slice_and_dice.m"
  }
#line 443 "slice_and_dice.m"
}

#line 370 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(
#line 370 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 370 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_2,
#line 370 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_3,
#line 370 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_4)
#line 370 "slice_and_dice.m"
{
#line 373 "slice_and_dice.m"
  {
#line 373 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 373 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_2, (MR_Integer) 2)));
#line 373 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_2, (MR_Integer) 1)));
#line 373 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 5)));
#line 373 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 4)));
#line 373 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 3)));
#line 373 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 2)));
#line 373 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 1)));
#line 373 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 0)));
#line 380 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_2, (MR_Integer) 0)));

#line 373 "slice_and_dice.m"
    if ((mdbcomp__slice_and_dice__HeadVar__1_1 == (MR_Integer) 1))
#line 379 "slice_and_dice.m"
      {
#line 379 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_31_31 = (mdbcomp__slice_and_dice__V_37_37 + mdbcomp__slice_and_dice__V_34_34);
#line 379 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_32_32 = (mdbcomp__slice_and_dice__V_36_36 + mdbcomp__slice_and_dice__V_33_33);

#line 383 "slice_and_dice.m"
        {
#line 383 "slice_and_dice.m"
          MR_Word base;
#line 383 "slice_and_dice.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 383 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__ExecCounts_4 = base;
#line 383 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_41_41));
#line 383 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_40_40));
#line 383 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__V_39_39));
#line 383 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdbcomp__slice_and_dice__V_38_38));
#line 383 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdbcomp__slice_and_dice__V_31_31));
#line 383 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdbcomp__slice_and_dice__V_32_32));
#line 383 "slice_and_dice.m"
        }
#line 379 "slice_and_dice.m"
      }
#line 373 "slice_and_dice.m"
    else
#line 373 "slice_and_dice.m"
      {
#line 373 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_17_17 = (mdbcomp__slice_and_dice__V_39_39 + mdbcomp__slice_and_dice__V_34_34);
#line 373 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_18_18 = (mdbcomp__slice_and_dice__V_38_38 + mdbcomp__slice_and_dice__V_33_33);

#line 377 "slice_and_dice.m"
        {
#line 377 "slice_and_dice.m"
          MR_Word base;
#line 377 "slice_and_dice.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 377 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__ExecCounts_4 = base;
#line 377 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_41_41));
#line 377 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_40_40));
#line 377 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__V_17_17));
#line 377 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdbcomp__slice_and_dice__V_18_18));
#line 377 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdbcomp__slice_and_dice__V_37_37));
#line 377 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdbcomp__slice_and_dice__V_36_36));
#line 377 "slice_and_dice.m"
        }
#line 373 "slice_and_dice.m"
      }
#line 373 "slice_and_dice.m"
  }
#line 370 "slice_and_dice.m"
}

#line 352 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1(
#line 352 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 352 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 352 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
#line 352 "slice_and_dice.m"
{
#line 352 "slice_and_dice.m"
  {
#line 352 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 352 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_ExecCounts_4;

#line 352 "slice_and_dice.m"
    {
#line 352 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 4))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_ExecCounts_4);
    }
#line 352 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_ExecCounts_4));
#line 352 "slice_and_dice.m"
  }
#line 352 "slice_and_dice.m"
}

#line 347 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(
#line 347 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FileName_7,
#line 347 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Kind_8,
#line 347 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__PathPort_9,
#line 347 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_10,
#line 347 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17,
#line 347 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18)
#line 347 "slice_and_dice.m"
{
#line 356 "slice_and_dice.m"
  {
#line 356 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 356 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__UpdatedProcDice_12;
#line 352 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_19_19;

#line 352 "slice_and_dice.m"
    {
#line 352 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 352 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[5]));
#line 352 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1));
#line 352 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 352 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Kind_8));
#line 352 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 4) = ((MR_Box) (mdbcomp__slice_and_dice__LineNoAndCount_10));
#line 352 "slice_and_dice.m"
    }
#line 352 "slice_and_dice.m"
    {
#line 352 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__transform_value_4_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, mdbcomp__slice_and_dice__V_19_19, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_9)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17, &mdbcomp__slice_and_dice__UpdatedProcDice_12);
    }
#line 356 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 355 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18 = mdbcomp__slice_and_dice__UpdatedProcDice_12;
#line 356 "slice_and_dice.m"
    else
#line 357 "slice_and_dice.m"
      {
#line 357 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_10, (MR_Integer) 0)));
#line 357 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__ExecCount_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_10, (MR_Integer) 1)));
#line 357 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__NumTests_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_10, (MR_Integer) 2)));
#line 357 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__InitCount_16;

#line 362 "slice_and_dice.m"
        if ((mdbcomp__slice_and_dice__Kind_8 == (MR_Integer) 1))
#line 363 "slice_and_dice.m"
          {
#line 364 "slice_and_dice.m"
            {
#line 364 "slice_and_dice.m"
              mdbcomp__slice_and_dice__InitCount_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 364 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_7));
#line 364 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_13));
#line 364 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 2) = ((MR_Box) ((MR_Integer) 0));
#line 364 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 3) = ((MR_Box) ((MR_Integer) 0));
#line 364 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 4) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_14));
#line 364 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 5) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_15));
#line 364 "slice_and_dice.m"
            }
#line 363 "slice_and_dice.m"
          }
#line 362 "slice_and_dice.m"
        else
#line 359 "slice_and_dice.m"
          {
#line 360 "slice_and_dice.m"
            {
#line 360 "slice_and_dice.m"
              mdbcomp__slice_and_dice__InitCount_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 360 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_7));
#line 360 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_13));
#line 360 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_14));
#line 360 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 3) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_15));
#line 360 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 4) = ((MR_Box) ((MR_Integer) 0));
#line 360 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 5) = ((MR_Box) ((MR_Integer) 0));
#line 360 "slice_and_dice.m"
            }
#line 359 "slice_and_dice.m"
          }
#line 367 "slice_and_dice.m"
        {
#line 367 "slice_and_dice.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_9)), ((MR_Box) (mdbcomp__slice_and_dice__InitCount_16)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17, mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18);
#line 367 "slice_and_dice.m"
          return;
        }
#line 357 "slice_and_dice.m"
      }
#line 356 "slice_and_dice.m"
  }
#line 347 "slice_and_dice.m"
}

#line 342 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2(
#line 342 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 342 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 342 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 342 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 342 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 342 "slice_and_dice.m"
{
#line 342 "slice_and_dice.m"
  {
#line 342 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 342 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcDice_18;

#line 342 "slice_and_dice.m"
    {
#line 342 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 4))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcDice_18);
    }
#line 342 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcDice_18));
#line 342 "slice_and_dice.m"
  }
#line 342 "slice_and_dice.m"
}

#line 338 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1(
#line 338 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 338 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 338 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 338 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 338 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 338 "slice_and_dice.m"
{
#line 338 "slice_and_dice.m"
  {
#line 338 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 338 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcDice_18;

#line 338 "slice_and_dice.m"
    {
#line 338 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 4))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcDice_18);
    }
#line 338 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcDice_18));
#line 338 "slice_and_dice.m"
  }
#line 338 "slice_and_dice.m"
}

#line 329 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(
#line 329 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Kind_6,
#line 329 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_7,
#line 329 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_8,
#line 329 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15,
#line 329 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16)
#line 329 "slice_and_dice.m"
{
#line 334 "slice_and_dice.m"
  {
#line 334 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 334 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_7, (MR_Integer) 1)));
#line 334 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_7, (MR_Integer) 2)));
#line 335 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice___ModuleNameSym_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_7, (MR_Integer) 0)));
#line 341 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FoundProcDice_13;
#line 337 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__conv0_FoundProcDice_13;

#line 337 "slice_and_dice.m"
    {
#line 337 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_12)), &mdbcomp__slice_and_dice__conv0_FoundProcDice_13);
    }
#line 337 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 337 "slice_and_dice.m"
      {
#line 337 "slice_and_dice.m"
        mdbcomp__slice_and_dice__FoundProcDice_13 = ((MR_Word) mdbcomp__slice_and_dice__conv0_FoundProcDice_13);
#line 337 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 337 "slice_and_dice.m"
      }
#line 341 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 339 "slice_and_dice.m"
      {
#line 339 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_31_31;
#line 339 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__MergedProcDice_14;
#line 339 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_17_17;
#line 338 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv2_MergedProcDice_14;

#line 338 "slice_and_dice.m"
        {
#line 338 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 338 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[0]));
#line 338 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1));
#line 338 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 338 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_11));
#line 338 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 4) = ((MR_Box) (mdbcomp__slice_and_dice__Kind_6));
#line 338 "slice_and_dice.m"
        }
#line 8907 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeInfo_31_31 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1];
#line 338 "slice_and_dice.m"
        {
#line 338 "slice_and_dice.m"
          mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_31_31, mdbcomp__slice_and_dice__V_17_17, mdbcomp__slice_and_dice__ProcTraceCounts_8, ((MR_Box) (mdbcomp__slice_and_dice__FoundProcDice_13)), &mdbcomp__slice_and_dice__conv2_MergedProcDice_14);
        }
#line 338 "slice_and_dice.m"
        mdbcomp__slice_and_dice__MergedProcDice_14 = ((MR_Word) mdbcomp__slice_and_dice__conv2_MergedProcDice_14);
#line 340 "slice_and_dice.m"
        {
#line 340 "slice_and_dice.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_31_31, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_12)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcDice_14)), mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15, mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16);
#line 340 "slice_and_dice.m"
          return;
        }
#line 339 "slice_and_dice.m"
      }
#line 341 "slice_and_dice.m"
    else
#line 343 "slice_and_dice.m"
      {
#line 343 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_37_37;
#line 343 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_40_40;
#line 343 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_19_19;
#line 343 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_20_20;
#line 343 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__MergedProcDice_22;
#line 342 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv4_MergedProcDice_22;

#line 342 "slice_and_dice.m"
        {
#line 342 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 342 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[0]));
#line 342 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2));
#line 342 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 342 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_11));
#line 342 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 4) = ((MR_Box) (mdbcomp__slice_and_dice__Kind_6));
#line 342 "slice_and_dice.m"
        }
#line 8958 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeCtorInfo_37_37 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 342 "slice_and_dice.m"
        {
#line 342 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_20_20 = mercury__map__init_0_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_37_37, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0);
        }
#line 8965 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeInfo_40_40 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1];
#line 342 "slice_and_dice.m"
        {
#line 342 "slice_and_dice.m"
          mercury__map__foldl_4_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_37_37, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_40_40, mdbcomp__slice_and_dice__V_19_19, mdbcomp__slice_and_dice__ProcTraceCounts_8, ((MR_Box) (mdbcomp__slice_and_dice__V_20_20)), &mdbcomp__slice_and_dice__conv4_MergedProcDice_22);
        }
#line 342 "slice_and_dice.m"
        mdbcomp__slice_and_dice__MergedProcDice_22 = ((MR_Word) mdbcomp__slice_and_dice__conv4_MergedProcDice_22);
#line 344 "slice_and_dice.m"
        {
#line 344 "slice_and_dice.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_40_40, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_12)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcDice_22)), mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15, mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16);
#line 344 "slice_and_dice.m"
          return;
        }
#line 343 "slice_and_dice.m"
      }
#line 334 "slice_and_dice.m"
  }
#line 329 "slice_and_dice.m"
}

#line 308 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0(
#line 308 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 308 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Dice_2)
#line 308 "slice_and_dice.m"
{
#line 313 "slice_and_dice.m"
  {
#line 313 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 313 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 314 "slice_and_dice.m"
      {
#line 315 "slice_and_dice.m"
        {
#line 315 "slice_and_dice.m"
          mercury__require__error_1_p_0((MR_String) "det_maybe_dice_error_to_dice: result is error");
#line 315 "slice_and_dice.m"
          return;
        }
#line 314 "slice_and_dice.m"
      }
#line 313 "slice_and_dice.m"
    else
#line 313 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__Dice_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "slice_and_dice.m"
  }
#line 308 "slice_and_dice.m"
}

#line 299 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0(
#line 299 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 299 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__HeadVar__2_2)
#line 299 "slice_and_dice.m"
{
#line 305 "slice_and_dice.m"
  {
#line 305 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 305 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 306 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 305 "slice_and_dice.m"
    else
#line 305 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__HeadVar__2_2 = (MR_String) "";
#line 305 "slice_and_dice.m"
  }
#line 299 "slice_and_dice.m"
}

#line 258 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(
#line 258 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_4,
#line 258 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_5,
#line 258 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_6)
#line 258 "slice_and_dice.m"
{
#line 261 "slice_and_dice.m"
  {
#line 261 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 261 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__ExecCount_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_4, (MR_Integer) 1)));
#line 261 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__NumTests_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_4, (MR_Integer) 2)));
#line 261 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 0)));
#line 261 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 1)));
#line 261 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Exec_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 2)));
#line 261 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Tests_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 3)));
#line 261 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_14_14 = (mdbcomp__slice_and_dice__Exec_12 + mdbcomp__slice_and_dice__ExecCount_8);
#line 261 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_15_15 = (mdbcomp__slice_and_dice__Tests_13 + mdbcomp__slice_and_dice__NumTests_9);
#line 262 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice___LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_4, (MR_Integer) 0)));

#line 264 "slice_and_dice.m"
    {
#line 264 "slice_and_dice.m"
      MR_Word base;
#line 264 "slice_and_dice.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 264 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__ExecCounts_6 = base;
#line 264 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_10));
#line 264 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_11));
#line 264 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__V_14_14));
#line 264 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdbcomp__slice_and_dice__V_15_15));
#line 264 "slice_and_dice.m"
    }
#line 261 "slice_and_dice.m"
  }
#line 258 "slice_and_dice.m"
}

#line 247 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1(
#line 247 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 247 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 247 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
#line 247 "slice_and_dice.m"
{
#line 247 "slice_and_dice.m"
  {
#line 247 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 247 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_ExecCounts_6;

#line 247 "slice_and_dice.m"
    {
#line 247 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_ExecCounts_6);
    }
#line 247 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_ExecCounts_6));
#line 247 "slice_and_dice.m"
  }
#line 247 "slice_and_dice.m"
}

#line 242 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(
#line 242 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FileName_6,
#line 242 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__PathPort_7,
#line 242 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_8,
#line 242 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15,
#line 242 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16)
#line 242 "slice_and_dice.m"
{
#line 251 "slice_and_dice.m"
  {
#line 251 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 251 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__UpdatedProcSlice_10;
#line 247 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_17_17;

#line 247 "slice_and_dice.m"
    {
#line 247 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 247 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[0]));
#line 247 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1));
#line 247 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 247 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 3) = ((MR_Box) (mdbcomp__slice_and_dice__LineNoAndCount_8));
#line 247 "slice_and_dice.m"
    }
#line 247 "slice_and_dice.m"
    {
#line 247 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__transform_value_4_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, mdbcomp__slice_and_dice__V_17_17, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_7)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15, &mdbcomp__slice_and_dice__UpdatedProcSlice_10);
    }
#line 251 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 250 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16 = mdbcomp__slice_and_dice__UpdatedProcSlice_10;
#line 251 "slice_and_dice.m"
    else
#line 252 "slice_and_dice.m"
      {
#line 252 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_8, (MR_Integer) 0)));
#line 252 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__ExecCount_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_8, (MR_Integer) 1)));
#line 252 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__NumTests_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_8, (MR_Integer) 2)));
#line 252 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SliceExecCount_14;

#line 253 "slice_and_dice.m"
        {
#line 253 "slice_and_dice.m"
          mdbcomp__slice_and_dice__SliceExecCount_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 253 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_6));
#line 253 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_11));
#line 253 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_12));
#line 253 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 3) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_13));
#line 253 "slice_and_dice.m"
        }
#line 255 "slice_and_dice.m"
        {
#line 255 "slice_and_dice.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_7)), ((MR_Box) (mdbcomp__slice_and_dice__SliceExecCount_14)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15, mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16);
#line 255 "slice_and_dice.m"
          return;
        }
#line 252 "slice_and_dice.m"
      }
#line 251 "slice_and_dice.m"
  }
#line 242 "slice_and_dice.m"
}

#line 237 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2(
#line 237 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 237 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 237 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 237 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 237 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 237 "slice_and_dice.m"
{
#line 237 "slice_and_dice.m"
  {
#line 237 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 237 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcSlice_16;

#line 237 "slice_and_dice.m"
    {
#line 237 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcSlice_16);
    }
#line 237 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcSlice_16));
#line 237 "slice_and_dice.m"
  }
#line 237 "slice_and_dice.m"
}

#line 233 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1(
#line 233 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 233 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 233 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 233 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 233 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 233 "slice_and_dice.m"
{
#line 233 "slice_and_dice.m"
  {
#line 233 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 233 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcSlice_16;

#line 233 "slice_and_dice.m"
    {
#line 233 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcSlice_16);
    }
#line 233 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcSlice_16));
#line 233 "slice_and_dice.m"
  }
#line 233 "slice_and_dice.m"
}

#line 225 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(
#line 225 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_5,
#line 225 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_6,
#line 225 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13,
#line 225 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14)
#line 225 "slice_and_dice.m"
{
#line 229 "slice_and_dice.m"
  {
#line 229 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 229 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_5, (MR_Integer) 1)));
#line 229 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_5, (MR_Integer) 2)));
#line 230 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice___ModuleNameSym_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_5, (MR_Integer) 0)));
#line 236 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FoundProcSlice_11;
#line 232 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__conv0_FoundProcSlice_11;

#line 232 "slice_and_dice.m"
    {
#line 232 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_10)), &mdbcomp__slice_and_dice__conv0_FoundProcSlice_11);
    }
#line 232 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 232 "slice_and_dice.m"
      {
#line 232 "slice_and_dice.m"
        mdbcomp__slice_and_dice__FoundProcSlice_11 = ((MR_Word) mdbcomp__slice_and_dice__conv0_FoundProcSlice_11);
#line 232 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 232 "slice_and_dice.m"
      }
#line 236 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 234 "slice_and_dice.m"
      {
#line 234 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_29_29;
#line 234 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__MergedProcSlice_12;
#line 234 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_15_15;
#line 233 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv2_MergedProcSlice_12;

#line 233 "slice_and_dice.m"
        {
#line 233 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 233 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_15_15, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[1]));
#line 233 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_15_15, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1));
#line 233 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 233 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_15_15, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_9));
#line 233 "slice_and_dice.m"
        }
#line 9364 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeInfo_29_29 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0];
#line 233 "slice_and_dice.m"
        {
#line 233 "slice_and_dice.m"
          mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_29_29, mdbcomp__slice_and_dice__V_15_15, mdbcomp__slice_and_dice__ProcTraceCounts_6, ((MR_Box) (mdbcomp__slice_and_dice__FoundProcSlice_11)), &mdbcomp__slice_and_dice__conv2_MergedProcSlice_12);
        }
#line 233 "slice_and_dice.m"
        mdbcomp__slice_and_dice__MergedProcSlice_12 = ((MR_Word) mdbcomp__slice_and_dice__conv2_MergedProcSlice_12);
#line 235 "slice_and_dice.m"
        {
#line 235 "slice_and_dice.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_29_29, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_10)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcSlice_12)), mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13, mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14);
#line 235 "slice_and_dice.m"
          return;
        }
#line 234 "slice_and_dice.m"
      }
#line 236 "slice_and_dice.m"
    else
#line 238 "slice_and_dice.m"
      {
#line 238 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_35_35;
#line 238 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_38_38;
#line 238 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_17_17;
#line 238 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_18_18;
#line 238 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__MergedProcSlice_20;
#line 237 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv4_MergedProcSlice_20;

#line 237 "slice_and_dice.m"
        {
#line 237 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 237 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[1]));
#line 237 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2));
#line 237 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 237 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_9));
#line 237 "slice_and_dice.m"
        }
#line 9413 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeCtorInfo_35_35 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 237 "slice_and_dice.m"
        {
#line 237 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_18_18 = mercury__map__init_0_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_35_35, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0);
        }
#line 9420 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeInfo_38_38 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0];
#line 237 "slice_and_dice.m"
        {
#line 237 "slice_and_dice.m"
          mercury__map__foldl_4_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_35_35, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_38_38, mdbcomp__slice_and_dice__V_17_17, mdbcomp__slice_and_dice__ProcTraceCounts_6, ((MR_Box) (mdbcomp__slice_and_dice__V_18_18)), &mdbcomp__slice_and_dice__conv4_MergedProcSlice_20);
        }
#line 237 "slice_and_dice.m"
        mdbcomp__slice_and_dice__MergedProcSlice_20 = ((MR_Word) mdbcomp__slice_and_dice__conv4_MergedProcSlice_20);
#line 239 "slice_and_dice.m"
        {
#line 239 "slice_and_dice.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_38_38, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_10)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcSlice_20)), mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13, mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14);
#line 239 "slice_and_dice.m"
          return;
        }
#line 238 "slice_and_dice.m"
      }
#line 229 "slice_and_dice.m"
  }
#line 225 "slice_and_dice.m"
}

#line 182 "slice_and_dice.m"
MR_Float MR_CALL 
mdbcomp__slice_and_dice__suspicion_ratio_binary_2_f_0(
#line 182 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__PassCount_4,
#line 182 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__FailCount_5)
#line 182 "slice_and_dice.m"
{
#line 918 "slice_and_dice.m"
  {
#line 918 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__FailCount_5 > (MR_Integer) 0);
#line 918 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__R_6;

#line 916 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 916 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__PassCount_4 == (MR_Integer) 0);
#line 918 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 917 "slice_and_dice.m"
      mdbcomp__slice_and_dice__R_6 = (MR_Float) 1.0000000000000000;
#line 918 "slice_and_dice.m"
    else
#line 919 "slice_and_dice.m"
      mdbcomp__slice_and_dice__R_6 = (MR_Float) 0.0000000000000000;
#line 918 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__R_6;
#line 918 "slice_and_dice.m"
  }
#line 182 "slice_and_dice.m"
}

#line 176 "slice_and_dice.m"
MR_Float MR_CALL 
mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_f_0(
#line 176 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__PassCount_6,
#line 176 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__PassTests_7,
#line 176 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__FailCount_8,
#line 176 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__FailTests_9)
#line 176 "slice_and_dice.m"
{
#line 905 "slice_and_dice.m"
  {
#line 905 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__FailCount_8 == (MR_Integer) 0);
#line 905 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__R_10;

#line 905 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 904 "slice_and_dice.m"
      mdbcomp__slice_and_dice__R_10 = (MR_Float) 0.0000000000000000;
#line 905 "slice_and_dice.m"
    else
#line 910 "slice_and_dice.m"
      {
#line 910 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__PassNorm_11;
#line 910 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__FailNorm_12;
#line 910 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_15_15;
#line 910 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_16_16;
#line 910 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_17_17;
#line 910 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_18_18;

#line 906 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__PassTests_7 == (MR_Integer) 0);
#line 908 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 907 "slice_and_dice.m"
          mdbcomp__slice_and_dice__PassNorm_11 = (MR_Float) 0.0000000000000000;
#line 908 "slice_and_dice.m"
        else
#line 909 "slice_and_dice.m"
          {
#line 909 "slice_and_dice.m"
            MR_Float mdbcomp__slice_and_dice__V_13_13;
#line 909 "slice_and_dice.m"
            MR_Float mdbcomp__slice_and_dice__V_14_14;

#line 909 "slice_and_dice.m"
            {
#line 909 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_13_13 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__PassCount_6);
            }
#line 909 "slice_and_dice.m"
            {
#line 909 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_14_14 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__PassTests_7);
            }
#line 909 "slice_and_dice.m"
            {
#line 909 "slice_and_dice.m"
              mdbcomp__slice_and_dice__PassNorm_11 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__V_13_13, mdbcomp__slice_and_dice__V_14_14);
            }
#line 909 "slice_and_dice.m"
          }
#line 911 "slice_and_dice.m"
        {
#line 911 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_15_15 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__FailCount_8);
        }
#line 911 "slice_and_dice.m"
        {
#line 911 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_16_16 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__FailTests_9);
        }
#line 911 "slice_and_dice.m"
        {
#line 911 "slice_and_dice.m"
          mdbcomp__slice_and_dice__FailNorm_12 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__V_15_15, mdbcomp__slice_and_dice__V_16_16);
        }
#line 912 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_18_18 = (mdbcomp__slice_and_dice__FailNorm_12 - mdbcomp__slice_and_dice__PassNorm_11);
#line 912 "slice_and_dice.m"
        {
#line 912 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_17_17 = mercury__float__max_2_f_0(mdbcomp__slice_and_dice__V_18_18, (MR_Float) 0.0000000000000000);
        }
#line 912 "slice_and_dice.m"
        {
#line 912 "slice_and_dice.m"
          return mdbcomp__slice_and_dice__R_10 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__V_17_17, mdbcomp__slice_and_dice__FailNorm_12);
        }
#line 910 "slice_and_dice.m"
      }
#line 905 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__R_10;
#line 905 "slice_and_dice.m"
  }
#line 176 "slice_and_dice.m"
}

#line 167 "slice_and_dice.m"
MR_Float MR_CALL 
mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(
#line 167 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__PassCount_4,
#line 167 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__FailCount_5)
#line 167 "slice_and_dice.m"
{
#line 888 "slice_and_dice.m"
  {
#line 888 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 888 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__R1_6;
#line 888 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Denominator_7 = (mdbcomp__slice_and_dice__PassCount_4 + mdbcomp__slice_and_dice__FailCount_5);

#line 890 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Denominator_7 == (MR_Integer) 0);
#line 890 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 896 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 891 "slice_and_dice.m"
      {
#line 891 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__R_8;
#line 891 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_9_9;
#line 891 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_10_10;

#line 891 "slice_and_dice.m"
        {
#line 891 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_9_9 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__FailCount_5);
        }
#line 891 "slice_and_dice.m"
        {
#line 891 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_10_10 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__Denominator_7);
        }
#line 891 "slice_and_dice.m"
        {
#line 891 "slice_and_dice.m"
          mdbcomp__slice_and_dice__R_8 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__V_9_9, mdbcomp__slice_and_dice__V_10_10);
        }
#line 892 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__R_8 >= ((MR_Float) 0.20000000000000001));
#line 894 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 893 "slice_and_dice.m"
          mdbcomp__slice_and_dice__R1_6 = mdbcomp__slice_and_dice__R_8;
#line 894 "slice_and_dice.m"
        else
#line 894 "slice_and_dice.m"
          mdbcomp__slice_and_dice__R1_6 = (MR_Float) 0.0000000000000000;
#line 891 "slice_and_dice.m"
      }
#line 896 "slice_and_dice.m"
    else
#line 899 "slice_and_dice.m"
      mdbcomp__slice_and_dice__R1_6 = (MR_Float) 0.0000000000000000;
#line 888 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__R1_6;
#line 888 "slice_and_dice.m"
  }
#line 167 "slice_and_dice.m"
}

#line 681 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3(
#line 681 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 681 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 681 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 681 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3)
#line 681 "slice_and_dice.m"
{
#line 681 "slice_and_dice.m"
  {
#line 681 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 681 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv2_Result_8;

#line 681 "slice_and_dice.m"
    {
#line 681 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), &mdbcomp__slice_and_dice__conv2_Result_8);
    }
#line 681 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_Result_8));
#line 681 "slice_and_dice.m"
  }
#line 681 "slice_and_dice.m"
}

#line 676 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2(
#line 676 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 676 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 676 "slice_and_dice.m"
{
#line 676 "slice_and_dice.m"
  {
#line 676 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 676 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

#line 676 "slice_and_dice.m"
    {
#line 676 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 676 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 676 "slice_and_dice.m"
  }
#line 676 "slice_and_dice.m"
}

#line 823 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1(
#line 823 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 823 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 823 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 823 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 823 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 823 "slice_and_dice.m"
{
#line 823 "slice_and_dice.m"
  {
#line 823 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 823 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11;

#line 823 "slice_and_dice.m"
    {
#line 823 "slice_and_dice.m"
      mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11);
    }
#line 823 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11));
#line 823 "slice_and_dice.m"
  }
#line 823 "slice_and_dice.m"
}

#line 158 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(
#line 158 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_13,
#line 158 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_14,
#line 158 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_15,
#line 158 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__MaxRow_16,
#line 158 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_17,
#line 158 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_18,
#line 158 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_19,
#line 158 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_20,
#line 158 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__DiceStr_21,
#line 158 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__Problem_22)
#line 158 "slice_and_dice.m"
{
#line 696 "slice_and_dice.m"
  {
#line 696 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 814 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_23_66;
#line 814 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Chrs_46;
#line 814 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ChrSet_47;
#line 814 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_48_48;

#line 815 "slice_and_dice.m"
    {
#line 815 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Chrs_46 = mercury__string__to_char_list_1_f_0(mdbcomp__slice_and_dice__SortStr_15);
    }
#line 9795 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_23_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 816 "slice_and_dice.m"
    {
#line 816 "slice_and_dice.m"
      mdbcomp__slice_and_dice__ChrSet_47 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_23_66, mdbcomp__slice_and_dice__Chrs_46);
    }
#line 817 "slice_and_dice.m"
    {
#line 817 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_48_48 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_23_66, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[14]));
    }
#line 817 "slice_and_dice.m"
    {
#line 817 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__set__subset_2_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_23_66, mdbcomp__slice_and_dice__ChrSet_47, mdbcomp__slice_and_dice__V_48_48);
    }
#line 696 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 670 "slice_and_dice.m"
      {
#line 670 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ReadDiceResult_24;

#line 670 "slice_and_dice.m"
        {
#line 670 "slice_and_dice.m"
          mdbcomp__slice_and_dice__read_dice_5_p_0(mdbcomp__slice_and_dice__PassFile_13, mdbcomp__slice_and_dice__FailFile_14, &mdbcomp__slice_and_dice__ReadDiceResult_24);
        }
#line 692 "slice_and_dice.m"
        if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadDiceResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 693 "slice_and_dice.m"
          {
#line 693 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Problem_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadDiceResult_24, (MR_Integer) 0)));
#line 694 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__DiceStr_21 = (MR_String) "";
#line 693 "slice_and_dice.m"
          }
#line 692 "slice_and_dice.m"
        else
#line 672 "slice_and_dice.m"
          {
#line 672 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_44_44;
#line 672 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Dice_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadDiceResult_24, (MR_Integer) 0)));
#line 672 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalPassTests_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_25, (MR_Integer) 0)));
#line 672 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__DiceProcMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_25, (MR_Integer) 2)));
#line 672 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__LabelCounts_29;
#line 672 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__FilteredLabelCounts_30;
#line 672 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__SortedLabelCounts_31;
#line 672 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__TopNLabelCounts_33;
#line 672 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_38_38;
#line 673 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalFailTests_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_25, (MR_Integer) 1)));
#line 823 "slice_and_dice.m"
            MR_Box mdbcomp__slice_and_dice__conv1_LabelCounts_29;
#line 685 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Taken_32;

#line 823 "slice_and_dice.m"
            {
#line 823 "slice_and_dice.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_2[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[11], mdbcomp__slice_and_dice__DiceProcMap_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdbcomp__slice_and_dice__conv1_LabelCounts_29);
            }
#line 823 "slice_and_dice.m"
            mdbcomp__slice_and_dice__LabelCounts_29 = ((MR_Word) mdbcomp__slice_and_dice__conv1_LabelCounts_29);
#line 675 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__Module_20, (MR_String) "") == 0);
#line 675 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 678 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 676 "slice_and_dice.m"
              {
#line 676 "slice_and_dice.m"
                MR_Word mdbcomp__slice_and_dice__V_37_37;

#line 676 "slice_and_dice.m"
                {
#line 676 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 676 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[1]));
#line 676 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2));
#line 676 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 676 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Module_20));
#line 676 "slice_and_dice.m"
                }
#line 676 "slice_and_dice.m"
                {
#line 676 "slice_and_dice.m"
                  mercury__list__filter_3_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0, mdbcomp__slice_and_dice__V_37_37, mdbcomp__slice_and_dice__LabelCounts_29, &mdbcomp__slice_and_dice__FilteredLabelCounts_30);
                }
#line 676 "slice_and_dice.m"
              }
#line 678 "slice_and_dice.m"
            else
#line 679 "slice_and_dice.m"
              mdbcomp__slice_and_dice__FilteredLabelCounts_30 = mdbcomp__slice_and_dice__LabelCounts_29;
#line 681 "slice_and_dice.m"
            {
#line 681 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 681 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[4]));
#line 681 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3));
#line 681 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 681 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 3) = ((MR_Box) (mdbcomp__slice_and_dice__SortStr_15));
#line 681 "slice_and_dice.m"
            }
#line 9920 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__TypeCtorInfo_44_44 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;
#line 681 "slice_and_dice.m"
            {
#line 681 "slice_and_dice.m"
              mercury__list__sort_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_44_44, mdbcomp__slice_and_dice__V_38_38, mdbcomp__slice_and_dice__FilteredLabelCounts_30, &mdbcomp__slice_and_dice__SortedLabelCounts_31);
            }
#line 683 "slice_and_dice.m"
            {
#line 683 "slice_and_dice.m"
              mdbcomp__slice_and_dice__succeeded = mercury__list__take_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_44_44, mdbcomp__slice_and_dice__MaxRow_16, mdbcomp__slice_and_dice__SortedLabelCounts_31, &mdbcomp__slice_and_dice__Taken_32);
            }
#line 685 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 684 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__Taken_32;
#line 685 "slice_and_dice.m"
            else
#line 686 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__SortedLabelCounts_31;
#line 688 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Problem_22 = (MR_String) "";
#line 689 "slice_and_dice.m"
            {
#line 689 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__DiceStr_21 = mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(mdbcomp__slice_and_dice__TopNLabelCounts_33, mdbcomp__slice_and_dice__TotalPassTests_26, mdbcomp__slice_and_dice__MaybeMaxPredColumns_17, mdbcomp__slice_and_dice__MaybeMaxPathColumns_18, mdbcomp__slice_and_dice__MaybeMaxFileColumns_19);
            }
#line 672 "slice_and_dice.m"
          }
#line 670 "slice_and_dice.m"
      }
#line 696 "slice_and_dice.m"
    else
#line 697 "slice_and_dice.m"
      {
#line 697 "slice_and_dice.m"
        *mdbcomp__slice_and_dice__Problem_22 = (MR_String) "Invalid sort string";
#line 698 "slice_and_dice.m"
        *mdbcomp__slice_and_dice__DiceStr_21 = (MR_String) "";
#line 697 "slice_and_dice.m"
      }
#line 696 "slice_and_dice.m"
  }
#line 158 "slice_and_dice.m"
}

#line 327 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_2(
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 327 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 327 "slice_and_dice.m"
{
#line 327 "slice_and_dice.m"
  {
#line 327 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 327 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv2_STATE_VARIABLE_DiceProcMap_16;

#line 327 "slice_and_dice.m"
    {
#line 327 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv2_STATE_VARIABLE_DiceProcMap_16);
    }
#line 327 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_STATE_VARIABLE_DiceProcMap_16));
#line 327 "slice_and_dice.m"
  }
#line 327 "slice_and_dice.m"
}

#line 327 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_1(
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 327 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 327 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 327 "slice_and_dice.m"
{
#line 327 "slice_and_dice.m"
  {
#line 327 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 327 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_DiceProcMap_16;

#line 327 "slice_and_dice.m"
    {
#line 327 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_DiceProcMap_16);
    }
#line 327 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_DiceProcMap_16));
#line 327 "slice_and_dice.m"
  }
#line 327 "slice_and_dice.m"
}

#line 128 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0(
#line 128 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_6,
#line 128 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_7,
#line 128 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 128 "slice_and_dice.m"
{
#line 275 "slice_and_dice.m"
  {
#line 275 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 275 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ReadPassResult_10;

#line 276 "slice_and_dice.m"
    {
#line 276 "slice_and_dice.m"
      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__slice_and_dice__PassFile_6, &mdbcomp__slice_and_dice__ReadPassResult_10);
    }
#line 294 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadPassResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 295 "slice_and_dice.m"
      {
#line 295 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Problem_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadPassResult_10, (MR_Integer) 0)));

#line 296 "slice_and_dice.m"
        {
#line 296 "slice_and_dice.m"
          MR_Word base;
#line 296 "slice_and_dice.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_8 = base;
#line 296 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Problem_29));
#line 296 "slice_and_dice.m"
        }
#line 295 "slice_and_dice.m"
      }
#line 294 "slice_and_dice.m"
    else
#line 278 "slice_and_dice.m"
      {
#line 278 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__PassFileType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadPassResult_10, (MR_Integer) 0)));
#line 278 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__PassTraceCounts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadPassResult_10, (MR_Integer) 1)));
#line 278 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ReadFailResult_13;

#line 279 "slice_and_dice.m"
        {
#line 279 "slice_and_dice.m"
          mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__slice_and_dice__FailFile_7, &mdbcomp__slice_and_dice__ReadFailResult_13);
        }
#line 290 "slice_and_dice.m"
        if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadFailResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 291 "slice_and_dice.m"
          {
#line 291 "slice_and_dice.m"
            MR_String mdbcomp__slice_and_dice__Problem_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadFailResult_13, (MR_Integer) 0)));

#line 292 "slice_and_dice.m"
            {
#line 292 "slice_and_dice.m"
              MR_Word base;
#line 292 "slice_and_dice.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 292 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__Result_8 = base;
#line 292 "slice_and_dice.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Problem_21));
#line 292 "slice_and_dice.m"
            }
#line 291 "slice_and_dice.m"
          }
#line 290 "slice_and_dice.m"
        else
#line 281 "slice_and_dice.m"
          {
#line 281 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__FailFileType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadFailResult_13, (MR_Integer) 0)));
#line 281 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__FailTraceCounts_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadFailResult_13, (MR_Integer) 1)));
#line 281 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__PassDiceProcMap_16;
#line 281 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__DiceProcMap_17;
#line 281 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalPassTests_18;
#line 281 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalFailTests_19;
#line 281 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Dice_20;
#line 281 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_27_27;
#line 327 "slice_and_dice.m"
            MR_Box mdbcomp__slice_and_dice__conv1_PassDiceProcMap_16;
#line 327 "slice_and_dice.m"
            MR_Box mdbcomp__slice_and_dice__conv3_DiceProcMap_17;

#line 282 "slice_and_dice.m"
            {
#line 282 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_27_27 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1]);
            }
#line 327 "slice_and_dice.m"
            {
#line 327 "slice_and_dice.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[1], mdbcomp__slice_and_dice__PassTraceCounts_12, ((MR_Box) (mdbcomp__slice_and_dice__V_27_27)), &mdbcomp__slice_and_dice__conv1_PassDiceProcMap_16);
            }
#line 327 "slice_and_dice.m"
            mdbcomp__slice_and_dice__PassDiceProcMap_16 = ((MR_Word) mdbcomp__slice_and_dice__conv1_PassDiceProcMap_16);
#line 327 "slice_and_dice.m"
            {
#line 327 "slice_and_dice.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[2], mdbcomp__slice_and_dice__FailTraceCounts_15, ((MR_Box) (mdbcomp__slice_and_dice__PassDiceProcMap_16)), &mdbcomp__slice_and_dice__conv3_DiceProcMap_17);
            }
#line 327 "slice_and_dice.m"
            mdbcomp__slice_and_dice__DiceProcMap_17 = ((MR_Word) mdbcomp__slice_and_dice__conv3_DiceProcMap_17);
#line 286 "slice_and_dice.m"
            {
#line 286 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TotalPassTests_18 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(mdbcomp__slice_and_dice__PassFileType_11);
            }
#line 287 "slice_and_dice.m"
            {
#line 287 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TotalFailTests_19 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(mdbcomp__slice_and_dice__FailFileType_14);
            }
#line 288 "slice_and_dice.m"
            {
#line 288 "slice_and_dice.m"
              mdbcomp__slice_and_dice__Dice_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 288 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_20, 0) = ((MR_Box) (mdbcomp__slice_and_dice__TotalPassTests_18));
#line 288 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_20, 1) = ((MR_Box) (mdbcomp__slice_and_dice__TotalFailTests_19));
#line 288 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_20, 2) = ((MR_Box) (mdbcomp__slice_and_dice__DiceProcMap_17));
#line 288 "slice_and_dice.m"
            }
#line 289 "slice_and_dice.m"
            {
#line 289 "slice_and_dice.m"
              MR_Word base;
#line 289 "slice_and_dice.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 289 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__Result_8 = base;
#line 289 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Dice_20));
#line 289 "slice_and_dice.m"
            }
#line 281 "slice_and_dice.m"
          }
#line 278 "slice_and_dice.m"
      }
#line 275 "slice_and_dice.m"
  }
#line 128 "slice_and_dice.m"
}

#line 414 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4(
#line 414 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 414 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 414 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 414 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3)
#line 414 "slice_and_dice.m"
{
#line 414 "slice_and_dice.m"
  {
#line 414 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 414 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv2_Result_8;

#line 414 "slice_and_dice.m"
    {
#line 414 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), &mdbcomp__slice_and_dice__conv2_Result_8);
    }
#line 414 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_Result_8));
#line 414 "slice_and_dice.m"
  }
#line 414 "slice_and_dice.m"
}

#line 408 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3(
#line 408 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 408 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 408 "slice_and_dice.m"
{
#line 408 "slice_and_dice.m"
  {
#line 408 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 408 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

#line 408 "slice_and_dice.m"
    {
#line 408 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 408 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 408 "slice_and_dice.m"
  }
#line 408 "slice_and_dice.m"
}

#line 401 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2(
#line 401 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 401 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 401 "slice_and_dice.m"
{
#line 401 "slice_and_dice.m"
  {
#line 401 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 401 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

#line 401 "slice_and_dice.m"
    {
#line 401 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 401 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 401 "slice_and_dice.m"
  }
#line 401 "slice_and_dice.m"
}

#line 584 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1(
#line 584 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 584 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 584 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 584 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 584 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 584 "slice_and_dice.m"
{
#line 584 "slice_and_dice.m"
  {
#line 584 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 584 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11;

#line 584 "slice_and_dice.m"
    {
#line 584 "slice_and_dice.m"
      mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11);
    }
#line 584 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11));
#line 584 "slice_and_dice.m"
  }
#line 584 "slice_and_dice.m"
}

#line 83 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0(
#line 83 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__File_12,
#line 83 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr0_13,
#line 83 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__MaxRows_14,
#line 83 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_15,
#line 83 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_16,
#line 83 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_17,
#line 83 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_18,
#line 83 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__SliceStr_19,
#line 83 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__Problem_20)
#line 83 "slice_and_dice.m"
{
#line 428 "slice_and_dice.m"
  {
#line 428 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 571 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_18_65;
#line 571 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Chrs0_50;
#line 571 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Chrs_52;
#line 571 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ChrSet_53;
#line 571 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_55_55;
#line 575 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ChrsPrime_51;
#line 573 "slice_and_dice.m"
    MR_Char mdbcomp__slice_and_dice__V_54_54;

#line 572 "slice_and_dice.m"
    {
#line 572 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Chrs0_50 = mercury__string__to_char_list_1_f_0(mdbcomp__slice_and_dice__SortStr0_13);
    }
#line 573 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__Chrs0_50)) == (MR_mktag((MR_Integer) 1)));
#line 573 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 573 "slice_and_dice.m"
      {
#line 573 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_54_54 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Chrs0_50, (MR_Integer) 0)));
#line 573 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ChrsPrime_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Chrs0_50, (MR_Integer) 1)));
#line 573 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_54_54 == (MR_Char) 122);
#line 573 "slice_and_dice.m"
      }
#line 575 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 574 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Chrs_52 = mdbcomp__slice_and_dice__ChrsPrime_51;
#line 575 "slice_and_dice.m"
    else
#line 576 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Chrs_52 = mdbcomp__slice_and_dice__Chrs0_50;
#line 10393 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_18_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 578 "slice_and_dice.m"
    {
#line 578 "slice_and_dice.m"
      mdbcomp__slice_and_dice__ChrSet_53 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_18_65, mdbcomp__slice_and_dice__Chrs_52);
    }
#line 579 "slice_and_dice.m"
    {
#line 579 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_55_55 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_18_65, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[6]));
    }
#line 579 "slice_and_dice.m"
    {
#line 579 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__set__subset_2_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_18_65, mdbcomp__slice_and_dice__ChrSet_53, mdbcomp__slice_and_dice__V_55_55);
    }
#line 428 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 395 "slice_and_dice.m"
      {
#line 395 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ReadSliceResult_22;

#line 395 "slice_and_dice.m"
        {
#line 395 "slice_and_dice.m"
          mdbcomp__slice_and_dice__read_slice_4_p_0(mdbcomp__slice_and_dice__File_12, &mdbcomp__slice_and_dice__ReadSliceResult_22);
        }
#line 424 "slice_and_dice.m"
        if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadSliceResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 425 "slice_and_dice.m"
          {
#line 425 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Problem_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadSliceResult_22, (MR_Integer) 0)));
#line 426 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__SliceStr_19 = (MR_String) "";
#line 425 "slice_and_dice.m"
          }
#line 424 "slice_and_dice.m"
        else
#line 397 "slice_and_dice.m"
          {
#line 397 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_48_48;
#line 397 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Slice_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadSliceResult_22, (MR_Integer) 0)));
#line 397 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalTests_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_23, (MR_Integer) 0)));
#line 397 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__SliceProcMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_23, (MR_Integer) 1)));
#line 397 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__LabelCounts_26;
#line 397 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27;
#line 397 "slice_and_dice.m"
            MR_String mdbcomp__slice_and_dice__SortStr_29;
#line 397 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__FilteredLabelCounts_30;
#line 397 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__SortedLabelCounts_31;
#line 397 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__TopNLabelCounts_33;
#line 397 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_40_40;
#line 584 "slice_and_dice.m"
            MR_Box mdbcomp__slice_and_dice__conv1_LabelCounts_26;
#line 410 "slice_and_dice.m"
            MR_String mdbcomp__slice_and_dice__SortStrPrime_28;
#line 418 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Taken_32;

#line 584 "slice_and_dice.m"
            {
#line 584 "slice_and_dice.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_2[0], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[9], mdbcomp__slice_and_dice__SliceProcMap_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdbcomp__slice_and_dice__conv1_LabelCounts_26);
            }
#line 584 "slice_and_dice.m"
            mdbcomp__slice_and_dice__LabelCounts_26 = ((MR_Word) mdbcomp__slice_and_dice__conv1_LabelCounts_26);
#line 400 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__Module_18, (MR_String) "") == 0);
#line 400 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 403 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 401 "slice_and_dice.m"
              {
#line 401 "slice_and_dice.m"
                MR_Word mdbcomp__slice_and_dice__V_37_37;

#line 401 "slice_and_dice.m"
                {
#line 401 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 401 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[0]));
#line 401 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2));
#line 401 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 401 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Module_18));
#line 401 "slice_and_dice.m"
                }
#line 401 "slice_and_dice.m"
                {
#line 401 "slice_and_dice.m"
                  mercury__list__filter_3_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0, mdbcomp__slice_and_dice__V_37_37, mdbcomp__slice_and_dice__LabelCounts_26, &mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27);
                }
#line 401 "slice_and_dice.m"
              }
#line 403 "slice_and_dice.m"
            else
#line 404 "slice_and_dice.m"
              mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27 = mdbcomp__slice_and_dice__LabelCounts_26;
#line 406 "slice_and_dice.m"
            {
#line 406 "slice_and_dice.m"
              mdbcomp__slice_and_dice__succeeded = mercury__string__append_3_p_1((MR_String) "z", &mdbcomp__slice_and_dice__SortStrPrime_28, mdbcomp__slice_and_dice__SortStr0_13);
            }
#line 410 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 407 "slice_and_dice.m"
              {
#line 407 "slice_and_dice.m"
                mdbcomp__slice_and_dice__SortStr_29 = mdbcomp__slice_and_dice__SortStrPrime_28;
#line 408 "slice_and_dice.m"
                {
#line 408 "slice_and_dice.m"
                  mercury__list__filter_3_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[10], mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27, &mdbcomp__slice_and_dice__FilteredLabelCounts_30);
                }
#line 407 "slice_and_dice.m"
              }
#line 410 "slice_and_dice.m"
            else
#line 411 "slice_and_dice.m"
              {
#line 411 "slice_and_dice.m"
                mdbcomp__slice_and_dice__SortStr_29 = mdbcomp__slice_and_dice__SortStr0_13;
#line 412 "slice_and_dice.m"
                mdbcomp__slice_and_dice__FilteredLabelCounts_30 = mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27;
#line 411 "slice_and_dice.m"
              }
#line 414 "slice_and_dice.m"
            {
#line 414 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 414 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_40_40, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[2]));
#line 414 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_40_40, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4));
#line 414 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 414 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_40_40, 3) = ((MR_Box) (mdbcomp__slice_and_dice__SortStr_29));
#line 414 "slice_and_dice.m"
            }
#line 10550 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;
#line 414 "slice_and_dice.m"
            {
#line 414 "slice_and_dice.m"
              mercury__list__sort_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_48_48, mdbcomp__slice_and_dice__V_40_40, mdbcomp__slice_and_dice__FilteredLabelCounts_30, &mdbcomp__slice_and_dice__SortedLabelCounts_31);
            }
#line 416 "slice_and_dice.m"
            {
#line 416 "slice_and_dice.m"
              mdbcomp__slice_and_dice__succeeded = mercury__list__take_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_48_48, mdbcomp__slice_and_dice__MaxRows_14, mdbcomp__slice_and_dice__SortedLabelCounts_31, &mdbcomp__slice_and_dice__Taken_32);
            }
#line 418 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 417 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__Taken_32;
#line 418 "slice_and_dice.m"
            else
#line 419 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__SortedLabelCounts_31;
#line 421 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Problem_20 = (MR_String) "";
#line 422 "slice_and_dice.m"
            {
#line 422 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__SliceStr_19 = mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(mdbcomp__slice_and_dice__TopNLabelCounts_33, mdbcomp__slice_and_dice__TotalTests_24, mdbcomp__slice_and_dice__MaybeMaxPredColumns_15, mdbcomp__slice_and_dice__MaybeMaxPathColumns_16, mdbcomp__slice_and_dice__MaybeMaxFileColumns_17);
            }
#line 397 "slice_and_dice.m"
          }
#line 395 "slice_and_dice.m"
      }
#line 428 "slice_and_dice.m"
    else
#line 429 "slice_and_dice.m"
      {
#line 429 "slice_and_dice.m"
        *mdbcomp__slice_and_dice__Problem_20 = (MR_String) "Invalid sort string";
#line 430 "slice_and_dice.m"
        *mdbcomp__slice_and_dice__SliceStr_19 = (MR_String) "";
#line 429 "slice_and_dice.m"
      }
#line 428 "slice_and_dice.m"
  }
#line 83 "slice_and_dice.m"
}

#line 223 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0_1(
#line 223 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 223 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 223 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 223 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 223 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 223 "slice_and_dice.m"
{
#line 223 "slice_and_dice.m"
  {
#line 223 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 223 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_SliceProcMap_14;

#line 223 "slice_and_dice.m"
    {
#line 223 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_SliceProcMap_14);
    }
#line 223 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_SliceProcMap_14));
#line 223 "slice_and_dice.m"
  }
#line 223 "slice_and_dice.m"
}

#line 58 "slice_and_dice.m"
void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0(
#line 58 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__File_5,
#line 58 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_6)
#line 58 "slice_and_dice.m"
{
#line 204 "slice_and_dice.m"
  {
#line 204 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 204 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ReadResult_8;

#line 205 "slice_and_dice.m"
    {
#line 205 "slice_and_dice.m"
      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__slice_and_dice__File_5, &mdbcomp__slice_and_dice__ReadResult_8);
    }
#line 212 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadResult_8)) == (MR_mktag((MR_Integer) 1))))
#line 213 "slice_and_dice.m"
      {
#line 213 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Problem_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadResult_8, (MR_Integer) 0)));

#line 214 "slice_and_dice.m"
        {
#line 214 "slice_and_dice.m"
          MR_Word base;
#line 214 "slice_and_dice.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_6 = base;
#line 214 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Problem_14));
#line 214 "slice_and_dice.m"
        }
#line 213 "slice_and_dice.m"
      }
#line 212 "slice_and_dice.m"
    else
#line 207 "slice_and_dice.m"
      {
#line 207 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__FileType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadResult_8, (MR_Integer) 0)));
#line 207 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TraceCounts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadResult_8, (MR_Integer) 1)));
#line 207 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SliceProcMap_11;
#line 207 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__NumTests_12;
#line 207 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__Slice_13;
#line 207 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_18_18;
#line 223 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv1_SliceProcMap_11;

#line 208 "slice_and_dice.m"
        {
#line 208 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_18_18 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0]);
        }
#line 223 "slice_and_dice.m"
        {
#line 223 "slice_and_dice.m"
          mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[8], mdbcomp__slice_and_dice__TraceCounts_10, ((MR_Box) (mdbcomp__slice_and_dice__V_18_18)), &mdbcomp__slice_and_dice__conv1_SliceProcMap_11);
        }
#line 223 "slice_and_dice.m"
        mdbcomp__slice_and_dice__SliceProcMap_11 = ((MR_Word) mdbcomp__slice_and_dice__conv1_SliceProcMap_11);
#line 209 "slice_and_dice.m"
        {
#line 209 "slice_and_dice.m"
          mdbcomp__slice_and_dice__NumTests_12 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(mdbcomp__slice_and_dice__FileType_9);
        }
#line 210 "slice_and_dice.m"
        {
#line 210 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Slice_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_13, 0) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_12));
#line 210 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_13, 1) = ((MR_Box) (mdbcomp__slice_and_dice__SliceProcMap_11));
#line 210 "slice_and_dice.m"
        }
#line 211 "slice_and_dice.m"
        {
#line 211 "slice_and_dice.m"
          MR_Word base;
#line 211 "slice_and_dice.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 211 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_6 = base;
#line 211 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Slice_13));
#line 211 "slice_and_dice.m"
        }
#line 207 "slice_and_dice.m"
      }
#line 204 "slice_and_dice.m"
  }
#line 58 "slice_and_dice.m"
}

void mercury__mdbcomp__slice_and_dice__init(void)
{
}

void mercury__mdbcomp__slice_and_dice__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0);
	MR_register_type_ctor_info(&mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0);
}

void mercury__mdbcomp__slice_and_dice__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.slice_and_dice. */
