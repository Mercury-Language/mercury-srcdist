/*
** Automatically generated from `slice_and_dice.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 77 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;

#line 80 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 83 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 86 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 89 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;

#line 92 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 95 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 98 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 101 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;

#line 104 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 107 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 110 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

#line 113 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0[3];

#line 116 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0[3];

#line 119 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0;

#line 122 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0[1];

#line 125 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0[1];

#line 128 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0[1];

#line 131 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0[1];

#line 134 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0[6];

#line 137 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0[6];

#line 140 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0;

#line 143 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0[1];

#line 146 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0[1];

#line 149 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0[1];

#line 152 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0[1];

#line 155 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0[3];

#line 158 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0[3];

#line 161 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0;

#line 164 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0[1];

#line 167 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0[1];

#line 170 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0[1];

#line 173 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0[1];

#line 176 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;

#line 179 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0[2];

#line 182 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0[2];

#line 185 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0;

#line 188 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0[1];

#line 191 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0[1];

#line 194 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0[1];

#line 197 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0[1];

#line 200 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0[4];

#line 203 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0[4];

#line 206 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0;

#line 209 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0[1];

#line 212 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0[1];

#line 215 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0[1];

#line 218 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0[1];

#line 221 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0[3];

#line 224 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0[3];

#line 227 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0;

#line 230 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0[1];

#line 233 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0[1];

#line 236 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0[1];

#line 239 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0[1];

#line 242 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0;

#line 245 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1;

#line 248 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0[2];

#line 251 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0[2];

#line 254 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0[2];

#line 257 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0_10001(
#line 260 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 262 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 265 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0_10001(
#line 268 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 270 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 272 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 275 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001(
#line 278 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 280 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 283 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001(
#line 286 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 288 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 290 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 293 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001(
#line 296 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 298 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 301 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001(
#line 304 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 306 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 308 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 311 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001(
#line 314 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 316 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 319 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001(
#line 322 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 324 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 326 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 329 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001(
#line 332 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 334 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 337 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001(
#line 340 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 342 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 344 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 347 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001(
#line 350 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 352 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 355 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001(
#line 358 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 360 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 362 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 365 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0_10001(
#line 368 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 370 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 373 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0_10001(
#line 376 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 378 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 380 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 383 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001(
#line 386 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 388 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 391 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001(
#line 394 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 396 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 398 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 401 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001(
#line 404 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 406 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 409 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001(
#line 412 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 414 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 416 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 419 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001(
#line 422 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 424 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 427 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001(
#line 430 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 432 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 434 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 437 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001(
#line 440 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 442 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 445 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001(
#line 448 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 450 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 452 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3);

#line 857 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8(
#line 857 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 857 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 855 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7(
#line 855 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 855 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 855 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2);

#line 854 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6(
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 853 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5(
#line 853 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 853 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 852 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4(
#line 852 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 852 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 851 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3(
#line 851 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 851 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 850 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2(
#line 850 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 850 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 847 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1(
#line 847 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 847 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_7,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_8);

#line 842 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(
#line 842 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCounts_8,
#line 842 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__TotalPassTests_9,
#line 842 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_11,
#line 842 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_12,
#line 842 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_13);

#line 619 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__619__1_2_p_0(
#line 619 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__HeadVar__1_55,
#line 619 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__HeadVar__2_87);

#line 318 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(
#line 318 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 318 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 318 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3);

#line 318 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(
#line 318 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_1,
#line 318 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 437 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(
#line 437 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 437 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 437 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3);

#line 437 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(
#line 437 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 437 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 705 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(
#line 705 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 705 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 705 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3);

#line 705 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(
#line 705 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 705 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 995 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_path_port_1_f_0(
#line 995 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1);

#line 968 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_proc_label_1_f_0(
#line 968 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_3);

#line 952 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_float_2_f_0(
#line 952 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__DecimalPlaces_4,
#line 952 "slice_and_dice.m"
  MR_Float mdbcomp__slice_and_dice__Flt_5);

#line 948 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__bracket_int_1_f_0(
#line 948 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__X_3);

#line 923 "slice_and_dice.m"
static MR_Float MR_CALL 
mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0(
#line 923 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Dice_4,
#line 923 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__LabelLayout_5);

#line 869 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(
#line 869 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__DiceLabelCount_9,
#line 869 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_10,
#line 869 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__PathPort_11,
#line 869 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__FormattedContext_12,
#line 869 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__PassCount_13,
#line 869 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__PassTests_14,
#line 869 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__FailCount_15,
#line 869 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__FailTests_16);

#line 834 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(
#line 834 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
#line 834 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 834 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__DiceLabelCount_7);

#line 831 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1(
#line 831 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 831 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 831 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

#line 826 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(
#line 826 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
#line 826 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcDice_6,
#line 826 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
#line 826 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);

#line 752 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(
#line 752 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 752 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
#line 752 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
#line 752 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8);

#line 718 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(
#line 718 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 718 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
#line 718 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
#line 718 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8);

#line 712 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(
#line 712 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_3,
#line 712 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 659 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0(
#line 659 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_10,
#line 659 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_11,
#line 659 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_12,
#line 659 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__MaxRow_13,
#line 659 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_14,
#line 659 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__DiceStr_15,
#line 659 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__Problem_16);

#line 635 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(
#line 635 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_7,
#line 635 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__PathPort_8,
#line 635 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_9,
#line 635 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__FormattedContext_10,
#line 635 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__Count_11,
#line 635 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__Tests_12);

#line 628 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6(
#line 628 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 628 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 619 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5(
#line 619 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 619 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 613 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4(
#line 613 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 613 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 612 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3(
#line 612 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 612 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 611 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2(
#line 611 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 611 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 609 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1(
#line 609 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 609 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6);

#line 604 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(
#line 604 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCounts_7,
#line 604 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__TotalTests_8,
#line 604 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_9,
#line 604 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybePathColumns_10,
#line 604 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_11);

#line 596 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(
#line 596 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
#line 596 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 596 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__SliceLabelCount_7);

#line 592 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1(
#line 592 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 592 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 592 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

#line 587 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(
#line 587 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
#line 587 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcSlice_6,
#line 587 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
#line 587 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);

#line 537 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(
#line 537 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 537 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
#line 537 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
#line 537 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8);

#line 455 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(
#line 455 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 455 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
#line 455 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
#line 455 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8);

#line 450 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(
#line 450 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_2);

#line 444 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(
#line 444 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_3,
#line 444 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2);

#line 371 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(
#line 371 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 371 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_2,
#line 371 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_3,
#line 371 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_4);

#line 353 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1(
#line 353 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 353 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 353 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

#line 348 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(
#line 348 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FileName_7,
#line 348 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Kind_8,
#line 348 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__PathPort_9,
#line 348 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_10,
#line 348 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17,
#line 348 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18);

#line 343 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2(
#line 343 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 343 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 343 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 343 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 343 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 339 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1(
#line 339 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 339 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 339 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 339 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 339 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 330 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(
#line 330 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Kind_6,
#line 330 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_7,
#line 330 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_8,
#line 330 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15,
#line 330 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16);

#line 309 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0(
#line 309 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 309 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Dice_2);

#line 300 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0(
#line 300 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 300 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__HeadVar__2_2);

#line 259 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(
#line 259 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_4,
#line 259 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_5,
#line 259 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_6);

#line 248 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1(
#line 248 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 248 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 248 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2);

#line 243 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(
#line 243 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FileName_6,
#line 243 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__PathPort_7,
#line 243 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_8,
#line 243 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15,
#line 243 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16);

#line 238 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2(
#line 238 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 238 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 238 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 238 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 238 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 234 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1(
#line 234 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 234 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 234 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 234 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 234 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 226 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(
#line 226 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_5,
#line 226 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_6,
#line 226 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13,
#line 226 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14);

#line 682 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3(
#line 682 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 682 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 682 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 682 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3);

#line 677 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2(
#line 677 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 677 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 824 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1(
#line 824 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 824 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 824 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 824 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 824 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 328 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_2(
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 328 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 328 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_1(
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 328 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 415 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4(
#line 415 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 415 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 415 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 415 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3);

#line 409 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3(
#line 409 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 409 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 402 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2(
#line 402 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 402 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1);

#line 585 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1(
#line 585 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 585 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 585 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 585 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 585 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);

#line 224 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0_1(
#line 224 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 224 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 224 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 224 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 224 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4);


static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_1[24][3];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_2[15][2];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_3[6][7];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_4[6][5];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_5[5][4];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_6[2][8];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_7[5][6];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_8[2][9];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_9[1][1];

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_10[1][11];




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
    ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_10[0])),
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

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_9[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box mdbcomp__slice_and_dice_scalar_common_10[1][11] = {
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

#line 925 "slice_and_dice.m"
MR_Float 
MR_MDBCOMP_get_suspicion_for_label_layout(
#line 925 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Dice_4,
#line 925 "slice_and_dice.m"
  const MR_LabelLayout * mdbcomp__slice_and_dice__LabelLayout_5)
#line 925 "slice_and_dice.m"
{
#line 925 "slice_and_dice.m"
	MR_Box mdbcomp__slice_and_dice__boxed_LabelLayout_5;
	MR_Float ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdbcomp__slice_and_dice__LabelLayout_5, mdbcomp__slice_and_dice__boxed_LabelLayout_5);
	ret_value = (MR_Float)mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0((MR_Word) mdbcomp__slice_and_dice__Dice_4, mdbcomp__slice_and_dice__boxed_LabelLayout_5);
	return ret_value;
}

#line 655 "slice_and_dice.m"
void 
MR_MDBCOMP_read_dice_to_string(
#line 655 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_10,
#line 655 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_11,
#line 655 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_12,
#line 655 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__MaxRow_13,
#line 655 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_14,
#line 655 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__DiceStr_15,
#line 655 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__Problem_16)
#line 655 "slice_and_dice.m"
{
#line 655 "slice_and_dice.m"
	mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0((MR_String) mdbcomp__slice_and_dice__PassFile_10, (MR_String) mdbcomp__slice_and_dice__FailFile_11, (MR_String) mdbcomp__slice_and_dice__SortStr_12, (MR_Integer) mdbcomp__slice_and_dice__MaxRow_13, (MR_String) mdbcomp__slice_and_dice__Module_14, (MR_String *) mdbcomp__slice_and_dice__DiceStr_15, (MR_String *) mdbcomp__slice_and_dice__Problem_16);
}

#line 311 "slice_and_dice.m"
void 
MR_MDBCOMP_det_maybe_dice_error_to_dice(
#line 311 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 311 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Dice_2)
#line 311 "slice_and_dice.m"
{
#line 311 "slice_and_dice.m"
	mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Word *) mdbcomp__slice_and_dice__Dice_2);
}

#line 303 "slice_and_dice.m"
void 
MR_MDBCOMP_maybe_dice_error_to_problem_string(
#line 303 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 303 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__HeadVar__2_2)
#line 303 "slice_and_dice.m"
{
#line 303 "slice_and_dice.m"
	mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1, (MR_String *) mdbcomp__slice_and_dice__HeadVar__2_2);
}

#line 273 "slice_and_dice.m"
void 
MR_MDBCOMP_read_dice(
#line 273 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_6,
#line 273 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_7,
#line 273 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 273 "slice_and_dice.m"
{
#line 273 "slice_and_dice.m"
	mdbcomp__slice_and_dice__read_dice_5_p_0((MR_String) mdbcomp__slice_and_dice__PassFile_6, (MR_String) mdbcomp__slice_and_dice__FailFile_7, (MR_Word *) mdbcomp__slice_and_dice__Result_8);
}


#line 1817 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0
  }
};

#line 1826 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 1835 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 1844 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 1853 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0
  }
};

#line 1861 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1870 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_proc_label_0__plain_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1879 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__pti_tree234_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1888 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__slice_and_dice__list__pti_list_1__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0
  }
};

#line 1896 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 1905 "mdbcomp.slice_and_dice.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__slice_and_dice__pair__pti_pair_2__plain_mdbcomp__trace_counts__type_ctor_info_path_port_0__plain_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
    (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1914 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
  }
};

#line 1923 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
};

#line 1930 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_0_0[3] = {
  (MR_String) "num_pass_tests",
  (MR_String) "num_fail_tests",
  (MR_String) "dice_proc_map"
};

#line 1937 "mdbcomp.slice_and_dice.c"
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

#line 1952 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0
};

#line 1957 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0
  }
};

#line 1966 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_0_0
};

#line 1971 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_0[1] = {
  (MR_Integer) 0
};

#line 1976 "mdbcomp.slice_and_dice.c"
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

#line 1997 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2007 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0[6] = {
  (MR_String) "dice_filename",
  (MR_String) "dice_linenumber",
  (MR_String) "pass_count",
  (MR_String) "pass_tests",
  (MR_String) "fail_count",
  (MR_String) "fail_tests"
};

#line 2017 "mdbcomp.slice_and_dice.c"
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

#line 2032 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0
};

#line 2037 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0
  }
};

#line 2046 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0
};

#line 2051 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0[1] = {
  (MR_Integer) 0
};

#line 2056 "mdbcomp.slice_and_dice.c"
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

#line 2077 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_dice_label_count_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
};

#line 2084 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_dice_label_count_0_0[3] = {
  (MR_String) "dlc_proc_label",
  (MR_String) "dlc_path_port",
  (MR_String) "dlc_counts"
};

#line 2091 "mdbcomp.slice_and_dice.c"
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

#line 2106 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0
};

#line 2111 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0
  }
};

#line 2120 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0
};

#line 2125 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0[1] = {
  (MR_Integer) 0
};

#line 2130 "mdbcomp.slice_and_dice.c"
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

#line 2151 "mdbcomp.slice_and_dice.c"
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

#line 2172 "mdbcomp.slice_and_dice.c"
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

#line 2193 "mdbcomp.slice_and_dice.c"
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

#line 2214 "mdbcomp.slice_and_dice.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_TypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
  }
};

#line 2223 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
};

#line 2229 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_0_0[2] = {
  (MR_String) "num_tests",
  (MR_String) "slice_proc_map"
};

#line 2235 "mdbcomp.slice_and_dice.c"
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

#line 2250 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0
};

#line 2255 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0
  }
};

#line 2264 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_0_0
};

#line 2269 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_0[1] = {
  (MR_Integer) 0
};

#line 2274 "mdbcomp.slice_and_dice.c"
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

#line 2295 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2303 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0[4] = {
  (MR_String) "slice_filename",
  (MR_String) "slice_linenumber",
  (MR_String) "slice_count",
  (MR_String) "slice_tests"
};

#line 2311 "mdbcomp.slice_and_dice.c"
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

#line 2326 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0
};

#line 2331 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0
  }
};

#line 2340 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0
};

#line 2345 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0[1] = {
  (MR_Integer) 0
};

#line 2350 "mdbcomp.slice_and_dice.c"
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

#line 2371 "mdbcomp.slice_and_dice.c"
static const MR_PseudoTypeInfo mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_types_slice_label_count_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0,
  (MR_PseudoTypeInfo) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
};

#line 2378 "mdbcomp.slice_and_dice.c"
static const MR_ConstString mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__field_names_slice_label_count_0_0[3] = {
  (MR_String) "slc_proc_label",
  (MR_String) "slc_path_port",
  (MR_String) "slc_counts"
};

#line 2385 "mdbcomp.slice_and_dice.c"
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

#line 2400 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0
};

#line 2405 "mdbcomp.slice_and_dice.c"
static const MR_DuPtagLayout mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0
  }
};

#line 2414 "mdbcomp.slice_and_dice.c"
static const MR_DuFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0[1] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0
};

#line 2419 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0[1] = {
  (MR_Integer) 0
};

#line 2424 "mdbcomp.slice_and_dice.c"
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

#line 2445 "mdbcomp.slice_and_dice.c"
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

#line 2466 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0 = {
  (MR_String) "pass_slice",
  (MR_Integer) 0
};

#line 2472 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDesc mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1 = {
  (MR_String) "fail_slice",
  (MR_Integer) 1
};

#line 2478 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0[2] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0,
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1
};

#line 2484 "mdbcomp.slice_and_dice.c"
static const MR_EnumFunctorDescPtr mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0[2] = {
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1,
  &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0
};

#line 2490 "mdbcomp.slice_and_dice.c"
static const MR_Integer mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2496 "mdbcomp.slice_and_dice.c"
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

#line 2517 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_0_0_10001(
#line 2520 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2522 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2524 "mdbcomp.slice_and_dice.c"
{
#line 2526 "mdbcomp.slice_and_dice.c"
  {
#line 2528 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2531 "mdbcomp.slice_and_dice.c"
    {
#line 2533 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2536 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2538 "mdbcomp.slice_and_dice.c"
  }
#line 2540 "mdbcomp.slice_and_dice.c"
}

#line 2543 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_0_0_10001(
#line 2546 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2548 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2550 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2552 "mdbcomp.slice_and_dice.c"
{
#line 2554 "mdbcomp.slice_and_dice.c"
  {
#line 2556 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2559 "mdbcomp.slice_and_dice.c"
    {
#line 2561 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____dice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2564 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2566 "mdbcomp.slice_and_dice.c"
  }
#line 2568 "mdbcomp.slice_and_dice.c"
}

#line 2571 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0_10001(
#line 2574 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2576 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2578 "mdbcomp.slice_and_dice.c"
{
#line 2580 "mdbcomp.slice_and_dice.c"
  {
#line 2582 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2585 "mdbcomp.slice_and_dice.c"
    {
#line 2587 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2590 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2592 "mdbcomp.slice_and_dice.c"
  }
#line 2594 "mdbcomp.slice_and_dice.c"
}

#line 2597 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0_10001(
#line 2600 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2602 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2604 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2606 "mdbcomp.slice_and_dice.c"
{
#line 2608 "mdbcomp.slice_and_dice.c"
  {
#line 2610 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2613 "mdbcomp.slice_and_dice.c"
    {
#line 2615 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2618 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2620 "mdbcomp.slice_and_dice.c"
  }
#line 2622 "mdbcomp.slice_and_dice.c"
}

#line 2625 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0_10001(
#line 2628 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2630 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2632 "mdbcomp.slice_and_dice.c"
{
#line 2634 "mdbcomp.slice_and_dice.c"
  {
#line 2636 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2639 "mdbcomp.slice_and_dice.c"
    {
#line 2641 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2644 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2646 "mdbcomp.slice_and_dice.c"
  }
#line 2648 "mdbcomp.slice_and_dice.c"
}

#line 2651 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0_10001(
#line 2654 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2656 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2658 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2660 "mdbcomp.slice_and_dice.c"
{
#line 2662 "mdbcomp.slice_and_dice.c"
  {
#line 2664 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2667 "mdbcomp.slice_and_dice.c"
    {
#line 2669 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2672 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2674 "mdbcomp.slice_and_dice.c"
  }
#line 2676 "mdbcomp.slice_and_dice.c"
}

#line 2679 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0_10001(
#line 2682 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2684 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2686 "mdbcomp.slice_and_dice.c"
{
#line 2688 "mdbcomp.slice_and_dice.c"
  {
#line 2690 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2693 "mdbcomp.slice_and_dice.c"
    {
#line 2695 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_proc_map_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2698 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2700 "mdbcomp.slice_and_dice.c"
  }
#line 2702 "mdbcomp.slice_and_dice.c"
}

#line 2705 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0_10001(
#line 2708 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2710 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2712 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2714 "mdbcomp.slice_and_dice.c"
{
#line 2716 "mdbcomp.slice_and_dice.c"
  {
#line 2718 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2721 "mdbcomp.slice_and_dice.c"
    {
#line 2723 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____dice_proc_map_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2726 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2728 "mdbcomp.slice_and_dice.c"
  }
#line 2730 "mdbcomp.slice_and_dice.c"
}

#line 2733 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_dice_0_0_10001(
#line 2736 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2738 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2740 "mdbcomp.slice_and_dice.c"
{
#line 2742 "mdbcomp.slice_and_dice.c"
  {
#line 2744 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2747 "mdbcomp.slice_and_dice.c"
    {
#line 2749 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____proc_dice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2752 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2754 "mdbcomp.slice_and_dice.c"
  }
#line 2756 "mdbcomp.slice_and_dice.c"
}

#line 2759 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_dice_0_0_10001(
#line 2762 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2764 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2766 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2768 "mdbcomp.slice_and_dice.c"
{
#line 2770 "mdbcomp.slice_and_dice.c"
  {
#line 2772 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2775 "mdbcomp.slice_and_dice.c"
    {
#line 2777 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____proc_dice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2780 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2782 "mdbcomp.slice_and_dice.c"
  }
#line 2784 "mdbcomp.slice_and_dice.c"
}

#line 2787 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____proc_slice_0_0_10001(
#line 2790 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2792 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2794 "mdbcomp.slice_and_dice.c"
{
#line 2796 "mdbcomp.slice_and_dice.c"
  {
#line 2798 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2801 "mdbcomp.slice_and_dice.c"
    {
#line 2803 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____proc_slice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2806 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2808 "mdbcomp.slice_and_dice.c"
  }
#line 2810 "mdbcomp.slice_and_dice.c"
}

#line 2813 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____proc_slice_0_0_10001(
#line 2816 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2818 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2820 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2822 "mdbcomp.slice_and_dice.c"
{
#line 2824 "mdbcomp.slice_and_dice.c"
  {
#line 2826 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2829 "mdbcomp.slice_and_dice.c"
    {
#line 2831 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____proc_slice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2834 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2836 "mdbcomp.slice_and_dice.c"
  }
#line 2838 "mdbcomp.slice_and_dice.c"
}

#line 2841 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_0_0_10001(
#line 2844 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2846 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2848 "mdbcomp.slice_and_dice.c"
{
#line 2850 "mdbcomp.slice_and_dice.c"
  {
#line 2852 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2855 "mdbcomp.slice_and_dice.c"
    {
#line 2857 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2860 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2862 "mdbcomp.slice_and_dice.c"
  }
#line 2864 "mdbcomp.slice_and_dice.c"
}

#line 2867 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_0_0_10001(
#line 2870 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2872 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2874 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2876 "mdbcomp.slice_and_dice.c"
{
#line 2878 "mdbcomp.slice_and_dice.c"
  {
#line 2880 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2883 "mdbcomp.slice_and_dice.c"
    {
#line 2885 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____slice_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2888 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2890 "mdbcomp.slice_and_dice.c"
  }
#line 2892 "mdbcomp.slice_and_dice.c"
}

#line 2895 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0_10001(
#line 2898 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2900 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2902 "mdbcomp.slice_and_dice.c"
{
#line 2904 "mdbcomp.slice_and_dice.c"
  {
#line 2906 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2909 "mdbcomp.slice_and_dice.c"
    {
#line 2911 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2914 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2916 "mdbcomp.slice_and_dice.c"
  }
#line 2918 "mdbcomp.slice_and_dice.c"
}

#line 2921 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0_10001(
#line 2924 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2926 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2928 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2930 "mdbcomp.slice_and_dice.c"
{
#line 2932 "mdbcomp.slice_and_dice.c"
  {
#line 2934 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2937 "mdbcomp.slice_and_dice.c"
    {
#line 2939 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2942 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2944 "mdbcomp.slice_and_dice.c"
  }
#line 2946 "mdbcomp.slice_and_dice.c"
}

#line 2949 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0_10001(
#line 2952 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2954 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 2956 "mdbcomp.slice_and_dice.c"
{
#line 2958 "mdbcomp.slice_and_dice.c"
  {
#line 2960 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 2963 "mdbcomp.slice_and_dice.c"
    {
#line 2965 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 2968 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 2970 "mdbcomp.slice_and_dice.c"
  }
#line 2972 "mdbcomp.slice_and_dice.c"
}

#line 2975 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0_10001(
#line 2978 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 2980 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 2982 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 2984 "mdbcomp.slice_and_dice.c"
{
#line 2986 "mdbcomp.slice_and_dice.c"
  {
#line 2988 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 2991 "mdbcomp.slice_and_dice.c"
    {
#line 2993 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 2996 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 2998 "mdbcomp.slice_and_dice.c"
  }
#line 3000 "mdbcomp.slice_and_dice.c"
}

#line 3003 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0_10001(
#line 3006 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 3008 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 3010 "mdbcomp.slice_and_dice.c"
{
#line 3012 "mdbcomp.slice_and_dice.c"
  {
#line 3014 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 3017 "mdbcomp.slice_and_dice.c"
    {
#line 3019 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_proc_map_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 3022 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 3024 "mdbcomp.slice_and_dice.c"
  }
#line 3026 "mdbcomp.slice_and_dice.c"
}

#line 3029 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0_10001(
#line 3032 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 3034 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 3036 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 3038 "mdbcomp.slice_and_dice.c"
{
#line 3040 "mdbcomp.slice_and_dice.c"
  {
#line 3042 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 3045 "mdbcomp.slice_and_dice.c"
    {
#line 3047 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____slice_proc_map_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 3050 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 3052 "mdbcomp.slice_and_dice.c"
  }
#line 3054 "mdbcomp.slice_and_dice.c"
}

#line 3057 "mdbcomp.slice_and_dice.c"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0_10001(
#line 3060 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 3062 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 3064 "mdbcomp.slice_and_dice.c"
{
#line 3066 "mdbcomp.slice_and_dice.c"
  {
#line 3068 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 3071 "mdbcomp.slice_and_dice.c"
    {
#line 3073 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 3076 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 3078 "mdbcomp.slice_and_dice.c"
  }
#line 3080 "mdbcomp.slice_and_dice.c"
}

#line 3083 "mdbcomp.slice_and_dice.c"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0_10001(
#line 3086 "mdbcomp.slice_and_dice.c"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_1,
#line 3088 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 3090 "mdbcomp.slice_and_dice.c"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3)
#line 3092 "mdbcomp.slice_and_dice.c"
{
#line 3094 "mdbcomp.slice_and_dice.c"
  {
#line 3096 "mdbcomp.slice_and_dice.c"
    MR_Word mdbcomp__slice_and_dice__conv0_HeadVar__1_1;

#line 3099 "mdbcomp.slice_and_dice.c"
    {
#line 3101 "mdbcomp.slice_and_dice.c"
      mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(&mdbcomp__slice_and_dice__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3));
    }
#line 3104 "mdbcomp.slice_and_dice.c"
    *mdbcomp__slice_and_dice__wrapper_arg_1 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_HeadVar__1_1));
#line 3106 "mdbcomp.slice_and_dice.c"
  }
#line 3108 "mdbcomp.slice_and_dice.c"
}

#line 857 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_8(
#line 857 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 857 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 857 "slice_and_dice.m"
{
#line 857 "slice_and_dice.m"
  {
#line 857 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 857 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 857 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv13_HeadVar__3_3;

#line 857 "slice_and_dice.m"
    {
#line 857 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv13_HeadVar__3_3 = mdbcomp__slice_and_dice__format_float_2_f_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), MR_unbox_float(mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 857 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv13_HeadVar__3_3));
#line 857 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 857 "slice_and_dice.m"
  }
#line 857 "slice_and_dice.m"
}

#line 855 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_7(
#line 855 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 855 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 855 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2)
#line 855 "slice_and_dice.m"
{
#line 855 "slice_and_dice.m"
  {
#line 855 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_3;
#line 855 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 855 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__conv12_R1_6;

#line 855 "slice_and_dice.m"
    {
#line 855 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv12_R1_6 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_2));
    }
#line 855 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_3 = MR_box_float(mdbcomp__slice_and_dice__conv12_R1_6);
#line 855 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_3;
#line 855 "slice_and_dice.m"
  }
#line 855 "slice_and_dice.m"
}

#line 854 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_6(
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 854 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 854 "slice_and_dice.m"
{
#line 854 "slice_and_dice.m"
  {
#line 854 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 854 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 854 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv11_HeadVar__2_2;

#line 854 "slice_and_dice.m"
    {
#line 854 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv11_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 854 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv11_HeadVar__2_2));
#line 854 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 854 "slice_and_dice.m"
  }
#line 854 "slice_and_dice.m"
}

#line 853 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_5(
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
    MR_String mdbcomp__slice_and_dice__conv10_HeadVar__2_2;

#line 853 "slice_and_dice.m"
    {
#line 853 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv10_HeadVar__2_2 = mdbcomp__slice_and_dice__bracket_int_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 853 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv10_HeadVar__2_2));
#line 853 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 853 "slice_and_dice.m"
  }
#line 853 "slice_and_dice.m"
}

#line 852 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_4(
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
    MR_String mdbcomp__slice_and_dice__conv9_HeadVar__2_2;

#line 852 "slice_and_dice.m"
    {
#line 852 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv9_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 852 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv9_HeadVar__2_2));
#line 852 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 852 "slice_and_dice.m"
  }
#line 852 "slice_and_dice.m"
}

#line 851 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_3(
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
    MR_String mdbcomp__slice_and_dice__conv8_HeadVar__2_2;

#line 851 "slice_and_dice.m"
    {
#line 851 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv8_HeadVar__2_2 = mdbcomp__slice_and_dice__format_path_port_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 851 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv8_HeadVar__2_2));
#line 851 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 851 "slice_and_dice.m"
  }
#line 851 "slice_and_dice.m"
}

#line 850 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_2(
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
    MR_String mdbcomp__slice_and_dice__conv7_Str_4;

#line 850 "slice_and_dice.m"
    {
#line 850 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv7_Str_4 = mdbcomp__slice_and_dice__format_proc_label_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 850 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv7_Str_4));
#line 850 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 850 "slice_and_dice.m"
  }
#line 850 "slice_and_dice.m"
}

#line 847 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0_1(
#line 847 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 847 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_7,
#line 847 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_8)
#line 847 "slice_and_dice.m"
{
#line 847 "slice_and_dice.m"
  {
#line 847 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 847 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv6_ProcLabel_10;
#line 847 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv5_PathPort_11;
#line 847 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv4_FormattedContext_12;
#line 847 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv3_PassCount_13;
#line 847 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv2_PassTests_14;
#line 847 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv1_FailCount_15;
#line 847 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv0_FailTests_16;

#line 847 "slice_and_dice.m"
    {
#line 847 "slice_and_dice.m"
      mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv6_ProcLabel_10, &mdbcomp__slice_and_dice__conv5_PathPort_11, &mdbcomp__slice_and_dice__conv4_FormattedContext_12, &mdbcomp__slice_and_dice__conv3_PassCount_13, &mdbcomp__slice_and_dice__conv2_PassTests_14, &mdbcomp__slice_and_dice__conv1_FailCount_15, &mdbcomp__slice_and_dice__conv0_FailTests_16);
    }
#line 847 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv6_ProcLabel_10));
#line 847 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv5_PathPort_11));
#line 847 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv4_FormattedContext_12));
#line 847 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_5 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_PassCount_13));
#line 847 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_6 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_PassTests_14));
#line 847 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_7 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_FailCount_15));
#line 847 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_8 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_FailTests_16));
#line 847 "slice_and_dice.m"
  }
#line 847 "slice_and_dice.m"
}

#line 842 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(
#line 842 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCounts_8,
#line 842 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__TotalPassTests_9,
#line 842 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_11,
#line 842 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPathColumns_12,
#line 842 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_13)
#line 842 "slice_and_dice.m"
{
#line 846 "slice_and_dice.m"
  {
#line 846 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 846 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__Str_14;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_94_94 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_95_95 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_96_96 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_108_108;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabels_15;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPorts_16;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedContexts_17;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PassCounts_18;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PassTests_19;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FailCounts_20;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedProcLabels_22;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedPathPorts_23;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PassCountStrs_24;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PassTestsStrs_25;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FailCountStrs_26;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__SuspicionIndices_27;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedSuspicionIndices_28;
#line 846 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__TotalPassTestsStr_29;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Columns_30;
#line 846 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_41_41;
#line 846 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_42_42;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_44_44;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_45_45;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_46_46;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_48_48;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_49_49;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_50_50;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_51_51;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_53_53;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_54_54;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_55_55;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_56_56;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_58_58;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_59_59;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_60_60;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_61_61;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_64_64;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_65_65;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_66_66;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_67_67;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_69_69;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_70_70;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_71_71;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_72_72;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_75_75;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_76_76;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_77_77;
#line 846 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_78_78;
#line 846 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_82_82;
#line 847 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice___FailTests_21;

#line 847 "slice_and_dice.m"
    {
#line 847 "slice_and_dice.m"
      mercury__list__map7_9_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0, mdbcomp__slice_and_dice__TypeCtorInfo_94_94, mdbcomp__slice_and_dice__TypeCtorInfo_95_95, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[17], mdbcomp__slice_and_dice__LabelCounts_8, &mdbcomp__slice_and_dice__ProcLabels_15, &mdbcomp__slice_and_dice__PathPorts_16, &mdbcomp__slice_and_dice__FormattedContexts_17, &mdbcomp__slice_and_dice__PassCounts_18, &mdbcomp__slice_and_dice__PassTests_19, &mdbcomp__slice_and_dice__FailCounts_20, &mdbcomp__slice_and_dice___FailTests_21);
    }
#line 850 "slice_and_dice.m"
    {
#line 850 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedProcLabels_22 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_94_94, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[18], mdbcomp__slice_and_dice__ProcLabels_15);
    }
#line 851 "slice_and_dice.m"
    {
#line 851 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedPathPorts_23 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_95_95, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[19], mdbcomp__slice_and_dice__PathPorts_16);
    }
#line 852 "slice_and_dice.m"
    {
#line 852 "slice_and_dice.m"
      mdbcomp__slice_and_dice__PassCountStrs_24 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[20], mdbcomp__slice_and_dice__PassCounts_18);
    }
#line 853 "slice_and_dice.m"
    {
#line 853 "slice_and_dice.m"
      mdbcomp__slice_and_dice__PassTestsStrs_25 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[21], mdbcomp__slice_and_dice__PassTests_19);
    }
#line 854 "slice_and_dice.m"
    {
#line 854 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FailCountStrs_26 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[22], mdbcomp__slice_and_dice__FailCounts_20);
    }
#line 3557 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_108_108 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 855 "slice_and_dice.m"
    {
#line 855 "slice_and_dice.m"
      mdbcomp__slice_and_dice__SuspicionIndices_27 = mercury__list__map_corresponding_3_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_97_97, mdbcomp__slice_and_dice__TypeCtorInfo_108_108, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[23], mdbcomp__slice_and_dice__PassCounts_18, mdbcomp__slice_and_dice__FailCounts_20);
    }
#line 857 "slice_and_dice.m"
    {
#line 857 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedSuspicionIndices_28 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_108_108, mdbcomp__slice_and_dice__TypeCtorInfo_96_96, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[4], mdbcomp__slice_and_dice__SuspicionIndices_27);
    }
#line 858 "slice_and_dice.m"
    {
#line 858 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_42_42 = mercury__string__int_to_string_thousands_1_f_0(mdbcomp__slice_and_dice__TotalPassTests_9);
    }
#line 858 "slice_and_dice.m"
    {
#line 858 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_41_41 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_42_42, (MR_String) ")");
    }
#line 858 "slice_and_dice.m"
    {
#line 858 "slice_and_dice.m"
      mdbcomp__slice_and_dice__TotalPassTestsStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "(", mdbcomp__slice_and_dice__V_41_41);
    }
#line 860 "slice_and_dice.m"
    {
#line 860 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_46_46, 0) = ((MR_Box) ((MR_String) "Procedure"));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_46_46, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedProcLabels_22));
#line 860 "slice_and_dice.m"
    }
#line 860 "slice_and_dice.m"
    {
#line 860 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_45_45, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_46_46));
#line 860 "slice_and_dice.m"
    }
#line 860 "slice_and_dice.m"
    {
#line 860 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_44_44, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_45_45));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_44_44, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxPredColumns_11));
#line 860 "slice_and_dice.m"
    }
#line 861 "slice_and_dice.m"
    {
#line 861 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_51_51, 0) = ((MR_Box) ((MR_String) "Path/Port"));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_51_51, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedPathPorts_23));
#line 861 "slice_and_dice.m"
    }
#line 861 "slice_and_dice.m"
    {
#line 861 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_50_50, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_51_51));
#line 861 "slice_and_dice.m"
    }
#line 861 "slice_and_dice.m"
    {
#line 861 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_49_49, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_50_50));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_49_49, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxPathColumns_12));
#line 861 "slice_and_dice.m"
    }
#line 862 "slice_and_dice.m"
    {
#line 862 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_56_56, 0) = ((MR_Box) ((MR_String) "File:Line"));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_56_56, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedContexts_17));
#line 862 "slice_and_dice.m"
    }
#line 862 "slice_and_dice.m"
    {
#line 862 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_55_55, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_56_56));
#line 862 "slice_and_dice.m"
    }
#line 862 "slice_and_dice.m"
    {
#line 862 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_54_54, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_55_55));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_54_54, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxFileColumns_13));
#line 862 "slice_and_dice.m"
    }
#line 863 "slice_and_dice.m"
    {
#line 863 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_61_61, 0) = ((MR_Box) ((MR_String) "Pass"));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_61_61, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PassCountStrs_24));
#line 863 "slice_and_dice.m"
    }
#line 863 "slice_and_dice.m"
    {
#line 863 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_60_60, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_61_61));
#line 863 "slice_and_dice.m"
    }
#line 863 "slice_and_dice.m"
    {
#line 863 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_59_59, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_60_60));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "slice_and_dice.m"
    }
#line 864 "slice_and_dice.m"
    {
#line 864 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_67_67, 0) = ((MR_Box) (mdbcomp__slice_and_dice__TotalPassTestsStr_29));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_67_67, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PassTestsStrs_25));
#line 864 "slice_and_dice.m"
    }
#line 864 "slice_and_dice.m"
    {
#line 864 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_66_66, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_67_67));
#line 864 "slice_and_dice.m"
    }
#line 864 "slice_and_dice.m"
    {
#line 864 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_65_65, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_66_66));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 864 "slice_and_dice.m"
    }
#line 865 "slice_and_dice.m"
    {
#line 865 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_72_72, 0) = ((MR_Box) ((MR_String) "Fail"));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_72_72, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FailCountStrs_26));
#line 865 "slice_and_dice.m"
    }
#line 865 "slice_and_dice.m"
    {
#line 865 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_71_71, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_72_72));
#line 865 "slice_and_dice.m"
    }
#line 865 "slice_and_dice.m"
    {
#line 865 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_70_70, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_71_71));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 865 "slice_and_dice.m"
    }
#line 866 "slice_and_dice.m"
    {
#line 866 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_78_78, 0) = ((MR_Box) ((MR_String) "Suspicion"));
#line 866 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_78_78, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedSuspicionIndices_28));
#line 866 "slice_and_dice.m"
    }
#line 866 "slice_and_dice.m"
    {
#line 866 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 866 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_77_77, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_78_78));
#line 866 "slice_and_dice.m"
    }
#line 866 "slice_and_dice.m"
    {
#line 866 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 866 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_76_76, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_77_77));
#line 866 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "slice_and_dice.m"
    }
#line 866 "slice_and_dice.m"
    {
#line 866 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_75_75, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_76_76));
#line 866 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "slice_and_dice.m"
    }
#line 865 "slice_and_dice.m"
    {
#line 865 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_69_69, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_70_70));
#line 865 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_69_69, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_75_75));
#line 865 "slice_and_dice.m"
    }
#line 864 "slice_and_dice.m"
    {
#line 864 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_64_64, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_65_65));
#line 864 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_64_64, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_69_69));
#line 864 "slice_and_dice.m"
    }
#line 863 "slice_and_dice.m"
    {
#line 863 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_58_58, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_59_59));
#line 863 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_58_58, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_64_64));
#line 863 "slice_and_dice.m"
    }
#line 862 "slice_and_dice.m"
    {
#line 862 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_53_53, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_54_54));
#line 862 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_53_53, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_58_58));
#line 862 "slice_and_dice.m"
    }
#line 861 "slice_and_dice.m"
    {
#line 861 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_48_48, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_49_49));
#line 861 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_48_48, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_53_53));
#line 861 "slice_and_dice.m"
    }
#line 860 "slice_and_dice.m"
    {
#line 860 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Columns_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Columns_30, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_44_44));
#line 860 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Columns_30, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_48_48));
#line 860 "slice_and_dice.m"
    }
#line 867 "slice_and_dice.m"
    {
#line 867 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_82_82 = mercury__string__format_table_max_2_f_0(mdbcomp__slice_and_dice__Columns_30, (MR_String) " ");
    }
#line 867 "slice_and_dice.m"
    {
#line 867 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__Str_14 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_82_82, (MR_String) "\n");
    }
#line 846 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__Str_14;
#line 846 "slice_and_dice.m"
  }
#line 842 "slice_and_dice.m"
}

#line 619 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__619__1_2_p_0(
#line 619 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__HeadVar__1_55,
#line 619 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__HeadVar__2_87)
#line 619 "slice_and_dice.m"
{
#line 619 "slice_and_dice.m"
  {
#line 619 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__HeadVar__1_55 == mdbcomp__slice_and_dice__HeadVar__2_87);

#line 619 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 619 "slice_and_dice.m"
  }
#line 619 "slice_and_dice.m"
}

#line 318 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____trace_counts_kind_0_0(
#line 318 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 318 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 318 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 318 "slice_and_dice.m"
{
#line 318 "slice_and_dice.m"
  {
#line 318 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 318 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 318 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 318 "slice_and_dice.m"
    {
#line 318 "slice_and_dice.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__Cast_HeadVar1_4, mdbcomp__slice_and_dice__Cast_HeadVar2_5);
#line 318 "slice_and_dice.m"
      return;
    }
#line 318 "slice_and_dice.m"
  }
#line 318 "slice_and_dice.m"
}

#line 318 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____trace_counts_kind_0_0(
#line 318 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_1,
#line 318 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 318 "slice_and_dice.m"
{
#line 3929 "mdbcomp.slice_and_dice.c"
  {
#line 3931 "mdbcomp.slice_and_dice.c"
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__HeadVar__2_1 == mdbcomp__slice_and_dice__HeadVar__2_2);

#line 3934 "mdbcomp.slice_and_dice.c"
    return mdbcomp__slice_and_dice__succeeded;
#line 3936 "mdbcomp.slice_and_dice.c"
  }
#line 318 "slice_and_dice.m"
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

#line 437 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____slice_label_count_0_0(
#line 437 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 437 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 437 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 437 "slice_and_dice.m"
{
#line 437 "slice_and_dice.m"
  {
#line 437 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 437 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 437 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_13 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 437 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_12 == mdbcomp__slice_and_dice__CastY_13);
#line 437 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 4027 "mdbcomp.slice_and_dice.c"
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
#line 437 "slice_and_dice.m"
    else
#line 437 "slice_and_dice.m"
      {
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_10_10;

#line 437 "slice_and_dice.m"
        {
#line 437 "slice_and_dice.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__V_10_10, mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_7_7);
        }
#line 4053 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_10_10 == (MR_Integer) 0);
#line 437 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 437 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 437 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_10_10;
#line 437 "slice_and_dice.m"
        else
#line 437 "slice_and_dice.m"
          {
#line 437 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_11_11;

#line 437 "slice_and_dice.m"
            {
#line 437 "slice_and_dice.m"
              mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__V_11_11, mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_8_8);
            }
#line 4073 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_11_11 == (MR_Integer) 0);
#line 437 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 437 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 437 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_11_11;
#line 437 "slice_and_dice.m"
            else
#line 437 "slice_and_dice.m"
              {
#line 437 "slice_and_dice.m"
                mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__V_6_6, mdbcomp__slice_and_dice__V_9_9);
#line 437 "slice_and_dice.m"
                return;
              }
#line 437 "slice_and_dice.m"
          }
#line 437 "slice_and_dice.m"
      }
#line 437 "slice_and_dice.m"
  }
#line 437 "slice_and_dice.m"
}

#line 437 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____slice_label_count_0_0(
#line 437 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 437 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 437 "slice_and_dice.m"
{
#line 437 "slice_and_dice.m"
  {
#line 437 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 437 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
#line 437 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

#line 437 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
#line 437 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 437 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 437 "slice_and_dice.m"
    else
#line 437 "slice_and_dice.m"
      {
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 437 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

#line 4140 "mdbcomp.slice_and_dice.c"
        {
#line 4142 "mdbcomp.slice_and_dice.c"
          mdbcomp__slice_and_dice__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdbcomp__slice_and_dice__V_3_3, mdbcomp__slice_and_dice__V_6_6);
        }
#line 437 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 437 "slice_and_dice.m"
          {
#line 4149 "mdbcomp.slice_and_dice.c"
            {
#line 4151 "mdbcomp.slice_and_dice.c"
              mdbcomp__slice_and_dice__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_7_7);
            }
#line 437 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 4156 "mdbcomp.slice_and_dice.c"
              {
#line 4158 "mdbcomp.slice_and_dice.c"
                return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____slice_exec_count_0_0(mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_8_8);
              }
#line 437 "slice_and_dice.m"
          }
#line 437 "slice_and_dice.m"
      }
#line 437 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 437 "slice_and_dice.m"
  }
#line 437 "slice_and_dice.m"
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
#line 4196 "mdbcomp.slice_and_dice.c"
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
#line 4226 "mdbcomp.slice_and_dice.c"
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
#line 4246 "mdbcomp.slice_and_dice.c"
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
#line 4266 "mdbcomp.slice_and_dice.c"
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

#line 4339 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__V_3_3, mdbcomp__slice_and_dice__V_7_7) == 0);
#line 40 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 40 "slice_and_dice.m"
          {
#line 4345 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_4_4 == mdbcomp__slice_and_dice__V_8_8);
#line 40 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 40 "slice_and_dice.m"
              {
#line 4351 "mdbcomp.slice_and_dice.c"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_5_5 == mdbcomp__slice_and_dice__V_9_9);
#line 40 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 4355 "mdbcomp.slice_and_dice.c"
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
#line 4394 "mdbcomp.slice_and_dice.c"
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
#line 4416 "mdbcomp.slice_and_dice.c"
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

#line 4483 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_3_3 == mdbcomp__slice_and_dice__V_5_5);
#line 30 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 30 "slice_and_dice.m"
          {
#line 4489 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__TypeInfo_9_9 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3];
#line 4491 "mdbcomp.slice_and_dice.c"
            {
#line 4493 "mdbcomp.slice_and_dice.c"
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

#line 705 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice____Compare____dice_label_count_0_0(
#line 705 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__HeadVar__1_1,
#line 705 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 705 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__3_3)
#line 705 "slice_and_dice.m"
{
#line 705 "slice_and_dice.m"
  {
#line 705 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 705 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_12 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;
#line 705 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_13 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__3_3;

#line 705 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_12 == mdbcomp__slice_and_dice__CastY_13);
#line 705 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 4717 "mdbcomp.slice_and_dice.c"
      *mdbcomp__slice_and_dice__HeadVar__1_1 = (MR_Integer) 0;
#line 705 "slice_and_dice.m"
    else
#line 705 "slice_and_dice.m"
      {
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 0)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 1)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__3_3, (MR_Integer) 2)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_10_10;

#line 705 "slice_and_dice.m"
        {
#line 705 "slice_and_dice.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__V_10_10, mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_7_7);
        }
#line 4743 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_10_10 == (MR_Integer) 0);
#line 705 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 705 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 705 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_10_10;
#line 705 "slice_and_dice.m"
        else
#line 705 "slice_and_dice.m"
          {
#line 705 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_11_11;

#line 705 "slice_and_dice.m"
            {
#line 705 "slice_and_dice.m"
              mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__V_11_11, mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_8_8);
            }
#line 4763 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_11_11 == (MR_Integer) 0);
#line 705 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 705 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 705 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__HeadVar__1_1 = mdbcomp__slice_and_dice__V_11_11;
#line 705 "slice_and_dice.m"
            else
#line 705 "slice_and_dice.m"
              {
#line 705 "slice_and_dice.m"
                mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(mdbcomp__slice_and_dice__HeadVar__1_1, mdbcomp__slice_and_dice__V_6_6, mdbcomp__slice_and_dice__V_9_9);
#line 705 "slice_and_dice.m"
                return;
              }
#line 705 "slice_and_dice.m"
          }
#line 705 "slice_and_dice.m"
      }
#line 705 "slice_and_dice.m"
  }
#line 705 "slice_and_dice.m"
}

#line 705 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice____Unify____dice_label_count_0_0(
#line 705 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 705 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 705 "slice_and_dice.m"
{
#line 705 "slice_and_dice.m"
  {
#line 705 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 705 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastX_9 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__1_1;
#line 705 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__CastY_10 = (MR_Integer) mdbcomp__slice_and_dice__HeadVar__2_2;

#line 705 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__CastX_9 == mdbcomp__slice_and_dice__CastY_10);
#line 705 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 705 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 705 "slice_and_dice.m"
    else
#line 705 "slice_and_dice.m"
      {
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 2)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 705 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

#line 4830 "mdbcomp.slice_and_dice.c"
        {
#line 4832 "mdbcomp.slice_and_dice.c"
          mdbcomp__slice_and_dice__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdbcomp__slice_and_dice__V_3_3, mdbcomp__slice_and_dice__V_6_6);
        }
#line 705 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 705 "slice_and_dice.m"
          {
#line 4839 "mdbcomp.slice_and_dice.c"
            {
#line 4841 "mdbcomp.slice_and_dice.c"
              mdbcomp__slice_and_dice__succeeded = mdbcomp__trace_counts____Unify____path_port_0_0(mdbcomp__slice_and_dice__V_4_4, mdbcomp__slice_and_dice__V_7_7);
            }
#line 705 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 4846 "mdbcomp.slice_and_dice.c"
              {
#line 4848 "mdbcomp.slice_and_dice.c"
                return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice____Unify____dice_exec_count_0_0(mdbcomp__slice_and_dice__V_5_5, mdbcomp__slice_and_dice__V_8_8);
              }
#line 705 "slice_and_dice.m"
          }
#line 705 "slice_and_dice.m"
      }
#line 705 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 705 "slice_and_dice.m"
  }
#line 705 "slice_and_dice.m"
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
#line 4886 "mdbcomp.slice_and_dice.c"
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
#line 4924 "mdbcomp.slice_and_dice.c"
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
#line 4944 "mdbcomp.slice_and_dice.c"
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
#line 4964 "mdbcomp.slice_and_dice.c"
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
#line 4984 "mdbcomp.slice_and_dice.c"
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
#line 5004 "mdbcomp.slice_and_dice.c"
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

#line 5089 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__V_3_3, mdbcomp__slice_and_dice__V_9_9) == 0);
#line 100 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
          {
#line 5095 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_4_4 == mdbcomp__slice_and_dice__V_10_10);
#line 100 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
              {
#line 5101 "mdbcomp.slice_and_dice.c"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_5_5 == mdbcomp__slice_and_dice__V_11_11);
#line 100 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
                  {
#line 5107 "mdbcomp.slice_and_dice.c"
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_6_6 == mdbcomp__slice_and_dice__V_12_12);
#line 100 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 100 "slice_and_dice.m"
                      {
#line 5113 "mdbcomp.slice_and_dice.c"
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_7_7 == mdbcomp__slice_and_dice__V_13_13);
#line 100 "slice_and_dice.m"
                        if (mdbcomp__slice_and_dice__succeeded)
#line 5117 "mdbcomp.slice_and_dice.c"
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
#line 5160 "mdbcomp.slice_and_dice.c"
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
#line 5186 "mdbcomp.slice_and_dice.c"
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
#line 5206 "mdbcomp.slice_and_dice.c"
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

#line 5279 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_3_3 == mdbcomp__slice_and_dice__V_6_6);
#line 89 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 89 "slice_and_dice.m"
          {
#line 5285 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_4_4 == mdbcomp__slice_and_dice__V_7_7);
#line 89 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 89 "slice_and_dice.m"
              {
#line 5291 "mdbcomp.slice_and_dice.c"
                mdbcomp__slice_and_dice__TypeInfo_11_11 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4];
#line 5293 "mdbcomp.slice_and_dice.c"
                {
#line 5295 "mdbcomp.slice_and_dice.c"
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

#line 995 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_path_port_1_f_0(
#line 995 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1)
#line 995 "slice_and_dice.m"
{
#line 997 "slice_and_dice.m"
  {
#line 997 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 997 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__HeadVar__2_2;

#line 997 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 999 "slice_and_dice.m"
      {
#line 999 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__Path_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 999 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_7_7;
#line 999 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_8_8;

#line 1000 "slice_and_dice.m"
        {
#line 1000 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_8_8 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(mdbcomp__slice_and_dice__Path_5);
        }
#line 1000 "slice_and_dice.m"
        {
#line 1000 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_7_7 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_8_8, (MR_String) ">");
        }
#line 1000 "slice_and_dice.m"
        {
#line 1000 "slice_and_dice.m"
          return mdbcomp__slice_and_dice__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "<", mdbcomp__slice_and_dice__V_7_7);
        }
#line 999 "slice_and_dice.m"
      }
#line 997 "slice_and_dice.m"
    else
#line 997 "slice_and_dice.m"
      if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1001 "slice_and_dice.m"
        {
#line 1001 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__Port_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 1001 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__Path_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 1)));
#line 1001 "slice_and_dice.m"
          MR_String mdbcomp__slice_and_dice__V_12_12;
#line 1001 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__V_13_13;
#line 1001 "slice_and_dice.m"
          MR_String mdbcomp__slice_and_dice__V_14_14;
#line 1001 "slice_and_dice.m"
          MR_String mdbcomp__slice_and_dice__V_16_16;
#line 1001 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__V_17_17;

#line 1002 "slice_and_dice.m"
          {
#line 1002 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "slice_and_dice.m"
            MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_13_13, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Port_10));
#line 1002 "slice_and_dice.m"
          }
#line 1002 "slice_and_dice.m"
          {
#line 1002 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_12_12 = mdbcomp__slice_and_dice__format_path_port_1_f_0(mdbcomp__slice_and_dice__V_13_13);
          }
#line 1003 "slice_and_dice.m"
          {
#line 1003 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "slice_and_dice.m"
            MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_17_17, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Path_11));
#line 1003 "slice_and_dice.m"
          }
#line 1003 "slice_and_dice.m"
          {
#line 1003 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_16_16 = mdbcomp__slice_and_dice__format_path_port_1_f_0(mdbcomp__slice_and_dice__V_17_17);
          }
#line 1002 "slice_and_dice.m"
          {
#line 1002 "slice_and_dice.m"
            mdbcomp__slice_and_dice__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdbcomp__slice_and_dice__V_16_16);
          }
#line 1002 "slice_and_dice.m"
          {
#line 1002 "slice_and_dice.m"
            return mdbcomp__slice_and_dice__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_12_12, mdbcomp__slice_and_dice__V_14_14);
          }
#line 1001 "slice_and_dice.m"
        }
#line 997 "slice_and_dice.m"
      else
#line 997 "slice_and_dice.m"
        {
#line 997 "slice_and_dice.m"
          MR_Word mdbcomp__slice_and_dice__Port_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));

#line 998 "slice_and_dice.m"
          {
#line 998 "slice_and_dice.m"
            mdbcomp__trace_counts__string_to_trace_port_2_p_1(&mdbcomp__slice_and_dice__HeadVar__2_2, mdbcomp__slice_and_dice__Port_3);
          }
#line 997 "slice_and_dice.m"
        }
#line 997 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__HeadVar__2_2;
#line 997 "slice_and_dice.m"
  }
#line 995 "slice_and_dice.m"
}

#line 968 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_proc_label_1_f_0(
#line 968 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_3)
#line 968 "slice_and_dice.m"
{
#line 973 "slice_and_dice.m"
  {
#line 973 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 973 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__Str_4;

#line 973 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
#line 973 "slice_and_dice.m"
      {
#line 973 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 1)));
#line 973 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SymModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 2)));
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 3)));
#line 973 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 4)));
#line 973 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__ModeNo_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 5)));
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Module_11;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__ArityStr_12;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__PredOrFuncStr_13;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_31_31;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_33_33;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_34_34;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_36_36;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_37_37;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_39_39;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_40_40;
#line 973 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_42_42;
#line 972 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 0)));

#line 974 "slice_and_dice.m"
        {
#line 974 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Module_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__slice_and_dice__SymModule_7);
        }
#line 979 "slice_and_dice.m"
        if ((mdbcomp__slice_and_dice__PredOrFunc_6 == (MR_Integer) 1))
#line 976 "slice_and_dice.m"
          {
#line 976 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_29_29 = (mdbcomp__slice_and_dice__Arity_9 - (MR_Integer) 1);

#line 977 "slice_and_dice.m"
            {
#line 977 "slice_and_dice.m"
              mdbcomp__slice_and_dice__ArityStr_12 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__V_29_29);
            }
#line 978 "slice_and_dice.m"
            mdbcomp__slice_and_dice__PredOrFuncStr_13 = (MR_String) "func";
#line 976 "slice_and_dice.m"
          }
#line 979 "slice_and_dice.m"
        else
#line 980 "slice_and_dice.m"
          {
#line 981 "slice_and_dice.m"
            {
#line 981 "slice_and_dice.m"
              mdbcomp__slice_and_dice__ArityStr_12 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__Arity_9);
            }
#line 982 "slice_and_dice.m"
            mdbcomp__slice_and_dice__PredOrFuncStr_13 = (MR_String) "pred";
#line 980 "slice_and_dice.m"
          }
#line 985 "slice_and_dice.m"
        {
#line 985 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_42_42 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__ModeNo_10);
        }
#line 985 "slice_and_dice.m"
        {
#line 985 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdbcomp__slice_and_dice__V_42_42);
        }
#line 985 "slice_and_dice.m"
        {
#line 985 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_39_39 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__ArityStr_12, mdbcomp__slice_and_dice__V_40_40);
        }
#line 985 "slice_and_dice.m"
        {
#line 985 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdbcomp__slice_and_dice__V_39_39);
        }
#line 984 "slice_and_dice.m"
        {
#line 984 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_36_36 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Name_8, mdbcomp__slice_and_dice__V_37_37);
        }
#line 984 "slice_and_dice.m"
        {
#line 984 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdbcomp__slice_and_dice__V_36_36);
        }
#line 984 "slice_and_dice.m"
        {
#line 984 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_33_33 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Module_11, mdbcomp__slice_and_dice__V_34_34);
        }
#line 984 "slice_and_dice.m"
        {
#line 984 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdbcomp__slice_and_dice__V_33_33);
        }
#line 984 "slice_and_dice.m"
        {
#line 984 "slice_and_dice.m"
          return mdbcomp__slice_and_dice__Str_4 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__PredOrFuncStr_13, mdbcomp__slice_and_dice__V_31_31);
        }
#line 973 "slice_and_dice.m"
      }
#line 973 "slice_and_dice.m"
    else
#line 988 "slice_and_dice.m"
      {
#line 988 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SpecialPredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 1)));
#line 988 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__TypeName_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 3)));
#line 988 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_20_20;
#line 988 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_22_22;
#line 988 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_23_23;
#line 988 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_25_25;
#line 988 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_26_26;
#line 988 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_28_28;
#line 988 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SymModule_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 2)));
#line 988 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Name_44;
#line 988 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__Arity_45;
#line 988 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Module_46;
#line 987 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 0)));
#line 987 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 4)));
#line 987 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ProcLabel_3, (MR_Integer) 5)));
#line 990 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_19_19;

#line 989 "slice_and_dice.m"
        {
#line 989 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Module_46 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdbcomp__slice_and_dice__SymModule_43);
        }
#line 990 "slice_and_dice.m"
        {
#line 990 "slice_and_dice.m"
          mdbcomp__prim_data__special_pred_name_arity_4_p_0(mdbcomp__slice_and_dice__SpecialPredId_15, &mdbcomp__slice_and_dice__Name_44, &mdbcomp__slice_and_dice__V_19_19, &mdbcomp__slice_and_dice__Arity_45);
        }
#line 992 "slice_and_dice.m"
        {
#line 992 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_28_28 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__Arity_45);
        }
#line 991 "slice_and_dice.m"
        {
#line 991 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdbcomp__slice_and_dice__V_28_28);
        }
#line 991 "slice_and_dice.m"
        {
#line 991 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__TypeName_16, mdbcomp__slice_and_dice__V_26_26);
        }
#line 991 "slice_and_dice.m"
        {
#line 991 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdbcomp__slice_and_dice__V_25_25);
        }
#line 991 "slice_and_dice.m"
        {
#line 991 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_22_22 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Module_46, mdbcomp__slice_and_dice__V_23_23);
        }
#line 991 "slice_and_dice.m"
        {
#line 991 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) " for ", mdbcomp__slice_and_dice__V_22_22);
        }
#line 991 "slice_and_dice.m"
        {
#line 991 "slice_and_dice.m"
          return mdbcomp__slice_and_dice__Str_4 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__Name_44, mdbcomp__slice_and_dice__V_20_20);
        }
#line 988 "slice_and_dice.m"
      }
#line 973 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__Str_4;
#line 973 "slice_and_dice.m"
  }
#line 968 "slice_and_dice.m"
}

#line 952 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_float_2_f_0(
#line 952 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__DecimalPlaces_4,
#line 952 "slice_and_dice.m"
  MR_Float mdbcomp__slice_and_dice__Flt_5)
#line 952 "slice_and_dice.m"
{
#line 954 "slice_and_dice.m"
  {
#line 954 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 954 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__HeadVar__3_3;

#line 955 "slice_and_dice.m"
    {
#line 955 "slice_and_dice.m"
      mercury__string__format__format_float_component_nowidth_prec_5_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_9[0], mdbcomp__slice_and_dice__DecimalPlaces_4, (MR_Integer) 2, mdbcomp__slice_and_dice__Flt_5, &mdbcomp__slice_and_dice__HeadVar__3_3);
    }
#line 954 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__HeadVar__3_3;
#line 954 "slice_and_dice.m"
  }
#line 952 "slice_and_dice.m"
}

#line 948 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__bracket_int_1_f_0(
#line 948 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__X_3)
#line 948 "slice_and_dice.m"
{
#line 950 "slice_and_dice.m"
  {
#line 950 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 950 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__HeadVar__2_2;
#line 950 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_5_5;
#line 950 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_6_6;

#line 950 "slice_and_dice.m"
    {
#line 950 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_6_6 = mercury__string__int_to_string_thousands_1_f_0(mdbcomp__slice_and_dice__X_3);
    }
#line 950 "slice_and_dice.m"
    {
#line 950 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_5_5 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_6_6, (MR_String) ")");
    }
#line 950 "slice_and_dice.m"
    {
#line 950 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "(", mdbcomp__slice_and_dice__V_5_5);
    }
#line 950 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__HeadVar__2_2;
#line 950 "slice_and_dice.m"
  }
#line 948 "slice_and_dice.m"
}

#line 923 "slice_and_dice.m"
static MR_Float MR_CALL 
mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_f_0(
#line 923 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Dice_4,
#line 923 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__LabelLayout_5)
#line 923 "slice_and_dice.m"
{
#line 929 "slice_and_dice.m"
  {
#line 929 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 929 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__Suspicion_6;
#line 929 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__ProcLayout_7;
#line 929 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabel_8;
#line 929 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPort_9;
#line 940 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPortMap_10;
#line 933 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_12_12;
#line 933 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_15_15;
#line 933 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_16_16;
#line 933 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__conv0_PathPortMap_10;

#line 930 "slice_and_dice.m"
    {
#line 930 "slice_and_dice.m"
      mdbcomp__slice_and_dice__ProcLayout_7 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdbcomp__slice_and_dice__LabelLayout_5);
    }
#line 931 "slice_and_dice.m"
    {
#line 931 "slice_and_dice.m"
      mdbcomp__slice_and_dice__ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdbcomp__slice_and_dice__ProcLayout_7);
    }
#line 932 "slice_and_dice.m"
    {
#line 932 "slice_and_dice.m"
      mdbcomp__slice_and_dice__PathPort_9 = mdbcomp__rtti_access__get_path_port_from_label_layout_1_f_0(mdbcomp__slice_and_dice__LabelLayout_5);
    }
#line 933 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_4, (MR_Integer) 0)));
#line 933 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_4, (MR_Integer) 1)));
#line 933 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_4, (MR_Integer) 2)));
#line 933 "slice_and_dice.m"
    {
#line 933 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], mdbcomp__slice_and_dice__V_12_12, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_8)), &mdbcomp__slice_and_dice__conv0_PathPortMap_10);
    }
#line 933 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 933 "slice_and_dice.m"
      {
#line 933 "slice_and_dice.m"
        mdbcomp__slice_and_dice__PathPortMap_10 = ((MR_Word) mdbcomp__slice_and_dice__conv0_PathPortMap_10);
#line 933 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 933 "slice_and_dice.m"
      }
#line 940 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 937 "slice_and_dice.m"
      {
#line 937 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ExecCount_11;
#line 934 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv1_ExecCount_11;

#line 934 "slice_and_dice.m"
        {
#line 934 "slice_and_dice.m"
          mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, mdbcomp__slice_and_dice__PathPortMap_10, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_9)), &mdbcomp__slice_and_dice__conv1_ExecCount_11);
        }
#line 934 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 934 "slice_and_dice.m"
          {
#line 934 "slice_and_dice.m"
            mdbcomp__slice_and_dice__ExecCount_11 = ((MR_Word) mdbcomp__slice_and_dice__conv1_ExecCount_11);
#line 934 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 934 "slice_and_dice.m"
          }
#line 937 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 935 "slice_and_dice.m"
          {
#line 935 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 2)));
#line 935 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 4)));
#line 935 "slice_and_dice.m"
            MR_String mdbcomp__slice_and_dice__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 0)));
#line 935 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 1)));
#line 935 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 3)));
#line 935 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount_11, (MR_Integer) 5)));

#line 917 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_20_20 > (MR_Integer) 0);
#line 917 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 917 "slice_and_dice.m"
              mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_13_13 == (MR_Integer) 0);
#line 919 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 918 "slice_and_dice.m"
              mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 1.0000000000000000;
#line 919 "slice_and_dice.m"
            else
#line 920 "slice_and_dice.m"
              mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 0.0000000000000000;
#line 935 "slice_and_dice.m"
          }
#line 937 "slice_and_dice.m"
        else
#line 938 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 0.0000000000000000;
#line 937 "slice_and_dice.m"
      }
#line 940 "slice_and_dice.m"
    else
#line 941 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Suspicion_6 = (MR_Float) 0.0000000000000000;
#line 929 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__Suspicion_6;
#line 929 "slice_and_dice.m"
  }
#line 923 "slice_and_dice.m"
}

#line 869 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_p_0(
#line 869 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__DiceLabelCount_9,
#line 869 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_10,
#line 869 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__PathPort_11,
#line 869 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__FormattedContext_12,
#line 869 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__PassCount_13,
#line 869 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__PassTests_14,
#line 869 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__FailCount_15,
#line 869 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__FailTests_16)
#line 869 "slice_and_dice.m"
{
#line 874 "slice_and_dice.m"
  {
#line 874 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 874 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ExecCounts_17;
#line 874 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_18;
#line 874 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__LineNumber_19;
#line 874 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_23_23;
#line 874 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_25_25;

#line 875 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__DiceLabelCount_9, (MR_Integer) 0)));
#line 875 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__PathPort_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__DiceLabelCount_9, (MR_Integer) 1)));
#line 875 "slice_and_dice.m"
    mdbcomp__slice_and_dice__ExecCounts_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__DiceLabelCount_9, (MR_Integer) 2)));
#line 876 "slice_and_dice.m"
    mdbcomp__slice_and_dice__FileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 0)));
#line 876 "slice_and_dice.m"
    mdbcomp__slice_and_dice__LineNumber_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 1)));
#line 876 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__PassCount_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 2)));
#line 876 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__PassTests_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 3)));
#line 876 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__FailCount_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 4)));
#line 876 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__FailTests_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_17, (MR_Integer) 5)));
#line 1008 "slice_and_dice.m"
    {
#line 1008 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_25_25 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__LineNumber_19);
    }
#line 1008 "slice_and_dice.m"
    {
#line 1008 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdbcomp__slice_and_dice__V_25_25);
    }
#line 1008 "slice_and_dice.m"
    {
#line 1008 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__FormattedContext_12 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__FileName_18, mdbcomp__slice_and_dice__V_23_23);
    }
#line 874 "slice_and_dice.m"
  }
#line 869 "slice_and_dice.m"
}

#line 834 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(
#line 834 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
#line 834 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 834 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__DiceLabelCount_7)
#line 834 "slice_and_dice.m"
{
#line 837 "slice_and_dice.m"
  {
#line 837 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 837 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPort_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 837 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ExecCount_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));

#line 838 "slice_and_dice.m"
    {
#line 838 "slice_and_dice.m"
      MR_Word base;
#line 838 "slice_and_dice.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 838 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__DiceLabelCount_7 = base;
#line 838 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_4));
#line 838 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PathPort_5));
#line 838 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_6));
#line 838 "slice_and_dice.m"
    }
#line 837 "slice_and_dice.m"
  }
#line 834 "slice_and_dice.m"
}

#line 831 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1(
#line 831 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 831 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 831 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
#line 831 "slice_and_dice.m"
{
#line 831 "slice_and_dice.m"
  {
#line 831 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 831 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_DiceLabelCount_7;

#line 831 "slice_and_dice.m"
    {
#line 831 "slice_and_dice.m"
      mdbcomp__slice_and_dice__make_dice_label_count_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_DiceLabelCount_7);
    }
#line 831 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_DiceLabelCount_7));
#line 831 "slice_and_dice.m"
  }
#line 831 "slice_and_dice.m"
}

#line 826 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(
#line 826 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
#line 826 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcDice_6,
#line 826 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
#line 826 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11)
#line 826 "slice_and_dice.m"
{
#line 829 "slice_and_dice.m"
  {
#line 829 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 829 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_19_19;
#line 829 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcExecCounts_8;
#line 829 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__NewLabelCounts_9;
#line 829 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_12_12;

#line 830 "slice_and_dice.m"
    {
#line 830 "slice_and_dice.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, mdbcomp__slice_and_dice__ProcDice_6, &mdbcomp__slice_and_dice__ProcExecCounts_8);
    }
#line 831 "slice_and_dice.m"
    {
#line 831 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 831 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[2]));
#line 831 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 1) = ((MR_Box) (mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0_1));
#line 831 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 831 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 3) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_5));
#line 831 "slice_and_dice.m"
    }
#line 6058 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;
#line 831 "slice_and_dice.m"
    {
#line 831 "slice_and_dice.m"
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[7], mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__V_12_12, mdbcomp__slice_and_dice__ProcExecCounts_8, &mdbcomp__slice_and_dice__NewLabelCounts_9);
    }
#line 832 "slice_and_dice.m"
    {
#line 832 "slice_and_dice.m"
      mercury__list__append_3_p_1(mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10, mdbcomp__slice_and_dice__NewLabelCounts_9, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);
#line 832 "slice_and_dice.m"
      return;
    }
#line 829 "slice_and_dice.m"
  }
#line 826 "slice_and_dice.m"
}

#line 752 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(
#line 752 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 752 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
#line 752 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
#line 752 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 752 "slice_and_dice.m"
{
#line 809 "slice_and_dice.m"
  while (MR_TRUE)
#line 809 "slice_and_dice.m"
    {
#line 809 "slice_and_dice.m"
      /* tailcall optimized into a loop */
#line 809 "slice_and_dice.m"
      {
#line 809 "slice_and_dice.m"
        MR_bool mdbcomp__slice_and_dice__succeeded;
#line 809 "slice_and_dice.m"
        MR_Char mdbcomp__slice_and_dice__C_9;
#line 809 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Rest_10;

#line 758 "slice_and_dice.m"
        {
#line 758 "slice_and_dice.m"
          mdbcomp__slice_and_dice__succeeded = mercury__string__first_char_3_p_3(mdbcomp__slice_and_dice__SortStr_5, &mdbcomp__slice_and_dice__C_9, &mdbcomp__slice_and_dice__Rest_10);
        }
#line 809 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 800 "slice_and_dice.m"
          {
#line 800 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Result0_11;
#line 802 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_43_43;
#line 802 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_44_44;

#line 760 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 112);
#line 763 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 761 "slice_and_dice.m"
              {
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 761 "slice_and_dice.m"
                MR_String mdbcomp__slice_and_dice__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 761 "slice_and_dice.m"
                MR_String mdbcomp__slice_and_dice__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 761 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));

#line 761 "slice_and_dice.m"
                {
#line 761 "slice_and_dice.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_14_14, mdbcomp__slice_and_dice__V_15_15);
                }
#line 761 "slice_and_dice.m"
              }
#line 763 "slice_and_dice.m"
            else
#line 766 "slice_and_dice.m"
              {
#line 763 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 80);
#line 766 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 764 "slice_and_dice.m"
                  {
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 764 "slice_and_dice.m"
                    MR_String mdbcomp__slice_and_dice__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 764 "slice_and_dice.m"
                    MR_String mdbcomp__slice_and_dice__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 764 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));

#line 764 "slice_and_dice.m"
                    {
#line 764 "slice_and_dice.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_16_16, mdbcomp__slice_and_dice__V_17_17);
                    }
#line 764 "slice_and_dice.m"
                  }
#line 766 "slice_and_dice.m"
                else
#line 769 "slice_and_dice.m"
                  {
#line 766 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 102);
#line 769 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 767 "slice_and_dice.m"
                      {
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 767 "slice_and_dice.m"
                        MR_String mdbcomp__slice_and_dice__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 767 "slice_and_dice.m"
                        MR_String mdbcomp__slice_and_dice__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 767 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));

#line 767 "slice_and_dice.m"
                        {
#line 767 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_18_18, mdbcomp__slice_and_dice__V_19_19);
                        }
#line 767 "slice_and_dice.m"
                      }
#line 769 "slice_and_dice.m"
                    else
#line 772 "slice_and_dice.m"
                      {
#line 769 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 70);
#line 772 "slice_and_dice.m"
                        if (mdbcomp__slice_and_dice__succeeded)
#line 770 "slice_and_dice.m"
                          {
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 770 "slice_and_dice.m"
                            MR_String mdbcomp__slice_and_dice__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 770 "slice_and_dice.m"
                            MR_String mdbcomp__slice_and_dice__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 770 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));

#line 770 "slice_and_dice.m"
                            {
#line 770 "slice_and_dice.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_20_20, mdbcomp__slice_and_dice__V_21_21);
                            }
#line 770 "slice_and_dice.m"
                          }
#line 772 "slice_and_dice.m"
                        else
#line 778 "slice_and_dice.m"
                          {
#line 772 "slice_and_dice.m"
                            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 115);
#line 778 "slice_and_dice.m"
                            if (mdbcomp__slice_and_dice__succeeded)
#line 773 "slice_and_dice.m"
                              {
#line 773 "slice_and_dice.m"
                                MR_Float mdbcomp__slice_and_dice__V_22_22;
#line 773 "slice_and_dice.m"
                                MR_Float mdbcomp__slice_and_dice__V_23_23;
#line 773 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 773 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_26_26;
#line 773 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 773 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_103_103;
#line 774 "slice_and_dice.m"
                                MR_String mdbcomp__slice_and_dice__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 774 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 774 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 774 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 776 "slice_and_dice.m"
                                MR_String mdbcomp__slice_and_dice__V_100_100;
#line 776 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_101_101;
#line 776 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_102_102;
#line 776 "slice_and_dice.m"
                                MR_Integer mdbcomp__slice_and_dice__V_104_104;

#line 774 "slice_and_dice.m"
                                {
#line 774 "slice_and_dice.m"
                                  mdbcomp__slice_and_dice__V_22_22 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__V_24_24, mdbcomp__slice_and_dice__V_93_93);
                                }
#line 776 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 776 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 776 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 776 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 776 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 776 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 776 "slice_and_dice.m"
                                {
#line 776 "slice_and_dice.m"
                                  mdbcomp__slice_and_dice__V_23_23 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__V_26_26, mdbcomp__slice_and_dice__V_103_103);
                                }
#line 773 "slice_and_dice.m"
                                {
#line 773 "slice_and_dice.m"
                                  mercury__private_builtin__builtin_compare_float_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_22_22, mdbcomp__slice_and_dice__V_23_23);
                                }
#line 773 "slice_and_dice.m"
                              }
#line 778 "slice_and_dice.m"
                            else
#line 784 "slice_and_dice.m"
                              {
#line 778 "slice_and_dice.m"
                                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 83);
#line 784 "slice_and_dice.m"
                                if (mdbcomp__slice_and_dice__succeeded)
#line 779 "slice_and_dice.m"
                                  {
#line 779 "slice_and_dice.m"
                                    MR_Float mdbcomp__slice_and_dice__V_28_28;
#line 779 "slice_and_dice.m"
                                    MR_Float mdbcomp__slice_and_dice__V_29_29;
#line 779 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 779 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_32_32;
#line 779 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_113_113 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 779 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_123_123;
#line 780 "slice_and_dice.m"
                                    MR_String mdbcomp__slice_and_dice__V_110_110 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 780 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 780 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 780 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_114_114 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 782 "slice_and_dice.m"
                                    MR_String mdbcomp__slice_and_dice__V_120_120;
#line 782 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_121_121;
#line 782 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_122_122;
#line 782 "slice_and_dice.m"
                                    MR_Integer mdbcomp__slice_and_dice__V_124_124;

#line 780 "slice_and_dice.m"
                                    {
#line 780 "slice_and_dice.m"
                                      mdbcomp__slice_and_dice__V_28_28 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__V_30_30, mdbcomp__slice_and_dice__V_113_113);
                                    }
#line 782 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_120_120 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 782 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 782 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 782 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 782 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 782 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 782 "slice_and_dice.m"
                                    {
#line 782 "slice_and_dice.m"
                                      mdbcomp__slice_and_dice__V_29_29 = mdbcomp__slice_and_dice__suspicion_ratio_2_f_0(mdbcomp__slice_and_dice__V_32_32, mdbcomp__slice_and_dice__V_123_123);
                                    }
#line 779 "slice_and_dice.m"
                                    {
#line 779 "slice_and_dice.m"
                                      mercury__private_builtin__builtin_compare_float_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_28_28, mdbcomp__slice_and_dice__V_29_29);
                                    }
#line 779 "slice_and_dice.m"
                                  }
#line 784 "slice_and_dice.m"
                                else
#line 791 "slice_and_dice.m"
                                  {
#line 784 "slice_and_dice.m"
                                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 100);
#line 791 "slice_and_dice.m"
                                    if (mdbcomp__slice_and_dice__succeeded)
#line 787 "slice_and_dice.m"
                                      {
#line 787 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__Diff1_12;
#line 787 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__Diff2_13;
#line 787 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 787 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_36_36;
#line 787 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 787 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_143_143;
#line 786 "slice_and_dice.m"
                                        MR_String mdbcomp__slice_and_dice__V_130_130 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 786 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 786 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 786 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 788 "slice_and_dice.m"
                                        MR_String mdbcomp__slice_and_dice__V_140_140;
#line 788 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_141_141;
#line 788 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_142_142;
#line 788 "slice_and_dice.m"
                                        MR_Integer mdbcomp__slice_and_dice__V_144_144;

#line 786 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__Diff1_12 = (mdbcomp__slice_and_dice__V_34_34 - mdbcomp__slice_and_dice__V_133_133);
#line 788 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_140_140 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 788 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 788 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 788 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_142_142 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 788 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_143_143 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 788 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__V_144_144 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 788 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__Diff2_13 = (mdbcomp__slice_and_dice__V_36_36 - mdbcomp__slice_and_dice__V_143_143);
#line 790 "slice_and_dice.m"
                                        {
#line 790 "slice_and_dice.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Diff1_12, mdbcomp__slice_and_dice__Diff2_13);
                                        }
#line 787 "slice_and_dice.m"
                                      }
#line 791 "slice_and_dice.m"
                                    else
#line 798 "slice_and_dice.m"
                                      {
#line 791 "slice_and_dice.m"
                                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 68);
#line 798 "slice_and_dice.m"
                                        if (mdbcomp__slice_and_dice__succeeded)
#line 794 "slice_and_dice.m"
                                          {
#line 794 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 794 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_40_40;
#line 794 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__Diff1_46;
#line 794 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__Diff2_47;
#line 794 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 4)));
#line 794 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_163_163;
#line 793 "slice_and_dice.m"
                                            MR_String mdbcomp__slice_and_dice__V_150_150 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 793 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_151_151 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 793 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 793 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 5)));
#line 795 "slice_and_dice.m"
                                            MR_String mdbcomp__slice_and_dice__V_160_160;
#line 795 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_161_161;
#line 795 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_162_162;
#line 795 "slice_and_dice.m"
                                            MR_Integer mdbcomp__slice_and_dice__V_164_164;

#line 793 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__Diff1_46 = (mdbcomp__slice_and_dice__V_38_38 - mdbcomp__slice_and_dice__V_153_153);
#line 795 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_160_160 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 795 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_161_161 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 795 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 795 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 795 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_163_163 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 4)));
#line 795 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__V_164_164 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 5)));
#line 795 "slice_and_dice.m"
                                            mdbcomp__slice_and_dice__Diff2_47 = (mdbcomp__slice_and_dice__V_40_40 - mdbcomp__slice_and_dice__V_163_163);
#line 797 "slice_and_dice.m"
                                            {
#line 797 "slice_and_dice.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__Diff2_47, mdbcomp__slice_and_dice__Diff1_46);
                                            }
#line 794 "slice_and_dice.m"
                                          }
#line 798 "slice_and_dice.m"
                                        else
#line 799 "slice_and_dice.m"
                                          {
#line 799 "slice_and_dice.m"
                                            {
#line 799 "slice_and_dice.m"
                                              mercury__require__error_1_p_0((MR_String) "dice_exec_count_compare: invalid sort string");
#line 799 "slice_and_dice.m"
                                              return;
                                            }
#line 799 "slice_and_dice.m"
                                          }
#line 798 "slice_and_dice.m"
                                      }
#line 791 "slice_and_dice.m"
                                  }
#line 784 "slice_and_dice.m"
                              }
#line 778 "slice_and_dice.m"
                          }
#line 772 "slice_and_dice.m"
                      }
#line 769 "slice_and_dice.m"
                  }
#line 766 "slice_and_dice.m"
              }
#line 802 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Result0_11 == (MR_Integer) 0);
#line 802 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 802 "slice_and_dice.m"
              {
#line 803 "slice_and_dice.m"
                {
#line 803 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__V_43_43 = mercury__string__length_1_f_0(mdbcomp__slice_and_dice__Rest_10);
                }
#line 803 "slice_and_dice.m"
                mdbcomp__slice_and_dice__V_44_44 = (MR_Integer) 0;
#line 803 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_43_43 > mdbcomp__slice_and_dice__V_44_44);
#line 802 "slice_and_dice.m"
              }
#line 806 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 805 "slice_and_dice.m"
              {
#line 805 "slice_and_dice.m"
                /* direct tailcall eliminated */
#line 805 "slice_and_dice.m"
                {
#line 805 "slice_and_dice.m"
                  MR_String mdbcomp__slice_and_dice__SortStr__tmp_copy_5 = mdbcomp__slice_and_dice__Rest_10;

#line 805 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__SortStr_5 = mdbcomp__slice_and_dice__SortStr__tmp_copy_5;
#line 805 "slice_and_dice.m"
                }
#line 805 "slice_and_dice.m"
                continue;
#line 805 "slice_and_dice.m"
              }
#line 806 "slice_and_dice.m"
            else
#line 807 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__Result_8 = mdbcomp__slice_and_dice__Result0_11;
#line 800 "slice_and_dice.m"
          }
#line 809 "slice_and_dice.m"
        else
#line 810 "slice_and_dice.m"
          {
#line 810 "slice_and_dice.m"
            {
#line 810 "slice_and_dice.m"
              mercury__require__error_1_p_0((MR_String) "dice_exec_count_compare: empty sort string");
#line 810 "slice_and_dice.m"
              return;
            }
#line 810 "slice_and_dice.m"
          }
#line 809 "slice_and_dice.m"
      }
#line 809 "slice_and_dice.m"
      break;
#line 809 "slice_and_dice.m"
    }
#line 752 "slice_and_dice.m"
}

#line 718 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(
#line 718 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 718 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
#line 718 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
#line 718 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 718 "slice_and_dice.m"
{
#line 747 "slice_and_dice.m"
  {
#line 747 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__SortStr_5, (MR_String) "") == 0);
#line 747 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 2)));
#line 747 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 1)));
#line 747 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 0)));
#line 747 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 2)));
#line 747 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 1)));
#line 747 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 0)));

#line 747 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 724 "slice_and_dice.m"
      {
#line 724 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ProcLabelResult_15;

#line 726 "slice_and_dice.m"
        {
#line 726 "slice_and_dice.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__ProcLabelResult_15, mdbcomp__slice_and_dice__V_27_27, mdbcomp__slice_and_dice__V_30_30);
        }
#line 730 "slice_and_dice.m"
        if ((mdbcomp__slice_and_dice__ProcLabelResult_15 == (MR_Integer) 1))
#line 728 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
#line 730 "slice_and_dice.m"
        else
#line 730 "slice_and_dice.m"
          if ((mdbcomp__slice_and_dice__ProcLabelResult_15 == (MR_Integer) 0))
#line 731 "slice_and_dice.m"
            {
#line 731 "slice_and_dice.m"
              MR_Word mdbcomp__slice_and_dice__PathPortResult_16;
#line 531 "slice_and_dice.m"
              MR_Word mdbcomp__slice_and_dice__ResultPrime_36;

#line 502 "slice_and_dice.m"
              if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_26_26)) == (MR_mktag((MR_Integer) 1))))
#line 503 "slice_and_dice.m"
                {
#line 503 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__RevPathA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 503 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__RevPathB_38;
#line 503 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__PathA_39;
#line 503 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__PathB_40;

#line 504 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 504 "slice_and_dice.m"
                  if (mdbcomp__slice_and_dice__succeeded)
#line 504 "slice_and_dice.m"
                    {
#line 504 "slice_and_dice.m"
                      mdbcomp__slice_and_dice__RevPathB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 506 "slice_and_dice.m"
                      {
#line 506 "slice_and_dice.m"
                        mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_37, &mdbcomp__slice_and_dice__PathA_39);
                      }
#line 507 "slice_and_dice.m"
                      {
#line 507 "slice_and_dice.m"
                        mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_38, &mdbcomp__slice_and_dice__PathB_40);
                      }
#line 508 "slice_and_dice.m"
                      {
#line 508 "slice_and_dice.m"
                        mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_39, mdbcomp__slice_and_dice__PathB_40);
                      }
#line 508 "slice_and_dice.m"
                      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 504 "slice_and_dice.m"
                    }
#line 503 "slice_and_dice.m"
                }
#line 502 "slice_and_dice.m"
              else
#line 502 "slice_and_dice.m"
                if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_26_26)) == (MR_mktag((MR_Integer) 2))))
#line 511 "slice_and_dice.m"
                  {
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortResult_41;
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortA_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortB_51;
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__RevPathA_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 1)));
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__RevPathB_53;
#line 511 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_61_61;
#line 511 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_62_62;

#line 512 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 2)));
#line 512 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 512 "slice_and_dice.m"
                      {
#line 512 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__PortB_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 512 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__RevPathB_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 1)));
#line 514 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_61_61 = (MR_Integer) mdbcomp__slice_and_dice__PortA_50;
#line 514 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_62_62 = (MR_Integer) mdbcomp__slice_and_dice__PortB_51;
#line 514 "slice_and_dice.m"
                        {
#line 514 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__PortResult_41, mdbcomp__slice_and_dice__V_61_61, mdbcomp__slice_and_dice__V_62_62);
                        }
#line 518 "slice_and_dice.m"
                        if ((mdbcomp__slice_and_dice__PortResult_41 == (MR_Integer) 1))
#line 517 "slice_and_dice.m"
                          mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 1;
#line 518 "slice_and_dice.m"
                        else
#line 518 "slice_and_dice.m"
                          if ((mdbcomp__slice_and_dice__PortResult_41 == (MR_Integer) 0))
#line 519 "slice_and_dice.m"
                            {
#line 519 "slice_and_dice.m"
                              MR_Word mdbcomp__slice_and_dice__PathA_42;
#line 519 "slice_and_dice.m"
                              MR_Word mdbcomp__slice_and_dice__PathB_43;

#line 520 "slice_and_dice.m"
                              {
#line 520 "slice_and_dice.m"
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_52, &mdbcomp__slice_and_dice__PathA_42);
                              }
#line 521 "slice_and_dice.m"
                              {
#line 521 "slice_and_dice.m"
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_53, &mdbcomp__slice_and_dice__PathB_43);
                              }
#line 522 "slice_and_dice.m"
                              {
#line 522 "slice_and_dice.m"
                                mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_42, mdbcomp__slice_and_dice__PathB_43);
                              }
#line 519 "slice_and_dice.m"
                            }
#line 518 "slice_and_dice.m"
                          else
#line 525 "slice_and_dice.m"
                            mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 2;
#line 518 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 512 "slice_and_dice.m"
                      }
#line 511 "slice_and_dice.m"
                  }
#line 502 "slice_and_dice.m"
                else
#line 497 "slice_and_dice.m"
                  {
#line 497 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 497 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortB_35;
#line 497 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_63_63;
#line 497 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_64_64;

#line 498 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 0)));
#line 498 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 498 "slice_and_dice.m"
                      {
#line 498 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__PortB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 500 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_63_63 = (MR_Integer) mdbcomp__slice_and_dice__PortA_34;
#line 500 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_64_64 = (MR_Integer) mdbcomp__slice_and_dice__PortB_35;
#line 500 "slice_and_dice.m"
                        {
#line 500 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__V_63_63, mdbcomp__slice_and_dice__V_64_64);
                        }
#line 500 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 498 "slice_and_dice.m"
                      }
#line 497 "slice_and_dice.m"
                  }
#line 531 "slice_and_dice.m"
              if (mdbcomp__slice_and_dice__succeeded)
#line 530 "slice_and_dice.m"
                mdbcomp__slice_and_dice__PathPortResult_16 = mdbcomp__slice_and_dice__ResultPrime_36;
#line 531 "slice_and_dice.m"
              else
#line 534 "slice_and_dice.m"
                {
#line 534 "slice_and_dice.m"
                  mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__PathPortResult_16, mdbcomp__slice_and_dice__V_26_26, mdbcomp__slice_and_dice__V_29_29);
                }
#line 736 "slice_and_dice.m"
              if ((mdbcomp__slice_and_dice__PathPortResult_16 == (MR_Integer) 1))
#line 734 "slice_and_dice.m"
                *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
#line 736 "slice_and_dice.m"
              else
#line 736 "slice_and_dice.m"
                if ((mdbcomp__slice_and_dice__PathPortResult_16 == (MR_Integer) 0))
#line 738 "slice_and_dice.m"
                  {
#line 738 "slice_and_dice.m"
                    mdbcomp__slice_and_dice____Compare____dice_exec_count_0_0(mdbcomp__slice_and_dice__Result_8, mdbcomp__slice_and_dice__V_25_25, mdbcomp__slice_and_dice__V_28_28);
#line 738 "slice_and_dice.m"
                    return;
                  }
#line 736 "slice_and_dice.m"
                else
#line 740 "slice_and_dice.m"
                  *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
#line 731 "slice_and_dice.m"
            }
#line 730 "slice_and_dice.m"
          else
#line 744 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
#line 724 "slice_and_dice.m"
      }
#line 747 "slice_and_dice.m"
    else
#line 748 "slice_and_dice.m"
      {
#line 748 "slice_and_dice.m"
        mdbcomp__slice_and_dice__dice_exec_count_compare_4_p_0(mdbcomp__slice_and_dice__SortStr_5, mdbcomp__slice_and_dice__V_25_25, mdbcomp__slice_and_dice__V_28_28, mdbcomp__slice_and_dice__Result_8);
#line 748 "slice_and_dice.m"
        return;
      }
#line 747 "slice_and_dice.m"
  }
#line 718 "slice_and_dice.m"
}

#line 712 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(
#line 712 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_3,
#line 712 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 712 "slice_and_dice.m"
{
#line 715 "slice_and_dice.m"
  {
#line 715 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 715 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Label_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 715 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcSymModule_11;
#line 715 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__SymModule_20;
#line 715 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 715 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

#line 962 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__Label_4)) == (MR_mktag((MR_Integer) 0))))
#line 961 "slice_and_dice.m"
      {
#line 961 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
#line 961 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
#line 961 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_12_12;
#line 961 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_13_13;
#line 961 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_14_14;

#line 961 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
#line 961 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
#line 961 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
#line 961 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
#line 961 "slice_and_dice.m"
      }
#line 962 "slice_and_dice.m"
    else
#line 963 "slice_and_dice.m"
      {
#line 963 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
#line 963 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
#line 963 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_17_17;
#line 963 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_18_18;
#line 963 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_19_19;

#line 963 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
#line 963 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
#line 963 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
#line 963 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
#line 963 "slice_and_dice.m"
      }
#line 965 "slice_and_dice.m"
    {
#line 965 "slice_and_dice.m"
      mdbcomp__slice_and_dice__SymModule_20 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__slice_and_dice__Module_3);
    }
#line 966 "slice_and_dice.m"
    {
#line 966 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__sym_name__is_submodule_2_p_0(mdbcomp__slice_and_dice__ProcSymModule_11, mdbcomp__slice_and_dice__SymModule_20);
    }
#line 715 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 715 "slice_and_dice.m"
  }
#line 712 "slice_and_dice.m"
}

#line 659 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_p_0(
#line 659 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__PassFile_10,
#line 659 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FailFile_11,
#line 659 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_12,
#line 659 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__MaxRow_13,
#line 659 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_14,
#line 659 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__DiceStr_15,
#line 659 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__Problem_16)
#line 659 "slice_and_dice.m"
{
#line 663 "slice_and_dice.m"
  {
#line 663 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 664 "slice_and_dice.m"
    {
#line 664 "slice_and_dice.m"
      mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(mdbcomp__slice_and_dice__PassFile_10, mdbcomp__slice_and_dice__FailFile_11, mdbcomp__slice_and_dice__SortStr_12, mdbcomp__slice_and_dice__MaxRow_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdbcomp__slice_and_dice__Module_14, mdbcomp__slice_and_dice__DiceStr_15, mdbcomp__slice_and_dice__Problem_16);
#line 664 "slice_and_dice.m"
      return;
    }
#line 663 "slice_and_dice.m"
  }
#line 659 "slice_and_dice.m"
}

#line 635 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(
#line 635 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_7,
#line 635 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__PathPort_8,
#line 635 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ProcLabel_9,
#line 635 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__FormattedContext_10,
#line 635 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__Count_11,
#line 635 "slice_and_dice.m"
  MR_Integer * mdbcomp__slice_and_dice__Tests_12)
#line 635 "slice_and_dice.m"
{
#line 639 "slice_and_dice.m"
  {
#line 639 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 639 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ExecCounts_13;
#line 639 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_14;
#line 639 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__LineNumber_15;
#line 639 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_19_19;
#line 639 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_21_21;

#line 640 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__PathPort_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_7, (MR_Integer) 0)));
#line 640 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_7, (MR_Integer) 1)));
#line 640 "slice_and_dice.m"
    mdbcomp__slice_and_dice__ExecCounts_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_7, (MR_Integer) 2)));
#line 641 "slice_and_dice.m"
    mdbcomp__slice_and_dice__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 0)));
#line 641 "slice_and_dice.m"
    mdbcomp__slice_and_dice__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 1)));
#line 641 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__Count_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 2)));
#line 641 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__Tests_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts_13, (MR_Integer) 3)));
#line 1008 "slice_and_dice.m"
    {
#line 1008 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_21_21 = mercury__string__int_to_string_1_f_0(mdbcomp__slice_and_dice__LineNumber_15);
    }
#line 1008 "slice_and_dice.m"
    {
#line 1008 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdbcomp__slice_and_dice__V_21_21);
    }
#line 1008 "slice_and_dice.m"
    {
#line 1008 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__FormattedContext_10 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__FileName_14, mdbcomp__slice_and_dice__V_19_19);
    }
#line 639 "slice_and_dice.m"
  }
#line 635 "slice_and_dice.m"
}

#line 628 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_6(
#line 628 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 628 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 628 "slice_and_dice.m"
{
#line 628 "slice_and_dice.m"
  {
#line 628 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 628 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 628 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv8_HeadVar__2_2;

#line 628 "slice_and_dice.m"
    {
#line 628 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv8_HeadVar__2_2 = mdbcomp__slice_and_dice__bracket_int_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 628 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv8_HeadVar__2_2));
#line 628 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 628 "slice_and_dice.m"
  }
#line 628 "slice_and_dice.m"
}

#line 619 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_5(
#line 619 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 619 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 619 "slice_and_dice.m"
{
#line 619 "slice_and_dice.m"
  {
#line 619 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 619 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

#line 619 "slice_and_dice.m"
    {
#line 619 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__619__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 619 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 619 "slice_and_dice.m"
  }
#line 619 "slice_and_dice.m"
}

#line 613 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_4(
#line 613 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 613 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 613 "slice_and_dice.m"
{
#line 613 "slice_and_dice.m"
  {
#line 613 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__wrapper_arg_2;
#line 613 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 613 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv7_HeadVar__2_2;

#line 613 "slice_and_dice.m"
    {
#line 613 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv7_HeadVar__2_2 = mercury__string__int_to_string_thousands_1_f_0(((MR_Integer) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 613 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv7_HeadVar__2_2));
#line 613 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 613 "slice_and_dice.m"
  }
#line 613 "slice_and_dice.m"
}

#line 612 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_3(
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
    MR_String mdbcomp__slice_and_dice__conv6_HeadVar__2_2;

#line 612 "slice_and_dice.m"
    {
#line 612 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv6_HeadVar__2_2 = mdbcomp__slice_and_dice__format_path_port_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 612 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv6_HeadVar__2_2));
#line 612 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 612 "slice_and_dice.m"
  }
#line 612 "slice_and_dice.m"
}

#line 611 "slice_and_dice.m"
static MR_Box MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_2(
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
    MR_String mdbcomp__slice_and_dice__conv5_Str_4;

#line 611 "slice_and_dice.m"
    {
#line 611 "slice_and_dice.m"
      mdbcomp__slice_and_dice__conv5_Str_4 = mdbcomp__slice_and_dice__format_proc_label_1_f_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 611 "slice_and_dice.m"
    mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv5_Str_4));
#line 611 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__wrapper_arg_2;
#line 611 "slice_and_dice.m"
  }
#line 611 "slice_and_dice.m"
}

#line 609 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0_1(
#line 609 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 609 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_5,
#line 609 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_6)
#line 609 "slice_and_dice.m"
{
#line 609 "slice_and_dice.m"
  {
#line 609 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 609 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv4_PathPort_8;
#line 609 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv3_ProcLabel_9;
#line 609 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__conv2_FormattedContext_10;
#line 609 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv1_Count_11;
#line 609 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__conv0_Tests_12;

#line 609 "slice_and_dice.m"
    {
#line 609 "slice_and_dice.m"
      mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv4_PathPort_8, &mdbcomp__slice_and_dice__conv3_ProcLabel_9, &mdbcomp__slice_and_dice__conv2_FormattedContext_10, &mdbcomp__slice_and_dice__conv1_Count_11, &mdbcomp__slice_and_dice__conv0_Tests_12);
    }
#line 609 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv4_PathPort_8));
#line 609 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_ProcLabel_9));
#line 609 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_FormattedContext_10));
#line 609 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_5 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_Count_11));
#line 609 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_6 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_Tests_12));
#line 609 "slice_and_dice.m"
  }
#line 609 "slice_and_dice.m"
}

#line 604 "slice_and_dice.m"
static MR_String MR_CALL 
mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(
#line 604 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCounts_7,
#line 604 "slice_and_dice.m"
  MR_Integer mdbcomp__slice_and_dice__TotalTests_8,
#line 604 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxPredColumns_9,
#line 604 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybePathColumns_10,
#line 604 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__MaybeMaxFileColumns_11)
#line 604 "slice_and_dice.m"
{
#line 608 "slice_and_dice.m"
  {
#line 608 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 608 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__Str_12;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_78_78 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabels_13;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPorts_14;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedContexts_15;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Counts_16;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Tests_17;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedProcLabels_18;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FormattedPathPorts_19;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__CountStrs_20;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__AlwaysColumns_21;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__OtherTests_23;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Columns_24;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_33_33;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_34_34;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_35_35;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_37_37;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_38_38;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_39_39;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_40_40;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_42_42;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_43_43;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_44_44;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_45_45;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_47_47;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_48_48;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_49_49;
#line 608 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_50_50;
#line 608 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_67_67;
#line 619 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice___OneTests_22;

#line 609 "slice_and_dice.m"
    {
#line 609 "slice_and_dice.m"
      mercury__list__map5_7_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0, mdbcomp__slice_and_dice__TypeCtorInfo_77_77, mdbcomp__slice_and_dice__TypeCtorInfo_78_78, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, mdbcomp__slice_and_dice__TypeCtorInfo_80_80, mdbcomp__slice_and_dice__TypeCtorInfo_80_80, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[12], mdbcomp__slice_and_dice__LabelCounts_7, &mdbcomp__slice_and_dice__ProcLabels_13, &mdbcomp__slice_and_dice__PathPorts_14, &mdbcomp__slice_and_dice__FormattedContexts_15, &mdbcomp__slice_and_dice__Counts_16, &mdbcomp__slice_and_dice__Tests_17);
    }
#line 611 "slice_and_dice.m"
    {
#line 611 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedProcLabels_18 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_77_77, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[13], mdbcomp__slice_and_dice__ProcLabels_13);
    }
#line 612 "slice_and_dice.m"
    {
#line 612 "slice_and_dice.m"
      mdbcomp__slice_and_dice__FormattedPathPorts_19 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_78_78, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[14], mdbcomp__slice_and_dice__PathPorts_14);
    }
#line 613 "slice_and_dice.m"
    {
#line 613 "slice_and_dice.m"
      mdbcomp__slice_and_dice__CountStrs_20 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_80_80, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[15], mdbcomp__slice_and_dice__Counts_16);
    }
#line 615 "slice_and_dice.m"
    {
#line 615 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_35_35, 0) = ((MR_Box) ((MR_String) "Procedure"));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_35_35, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedProcLabels_18));
#line 615 "slice_and_dice.m"
    }
#line 615 "slice_and_dice.m"
    {
#line 615 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_34_34, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_35_35));
#line 615 "slice_and_dice.m"
    }
#line 615 "slice_and_dice.m"
    {
#line 615 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_33_33, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_34_34));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_33_33, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxPredColumns_9));
#line 615 "slice_and_dice.m"
    }
#line 616 "slice_and_dice.m"
    {
#line 616 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_40_40, 0) = ((MR_Box) ((MR_String) "Path/Port"));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_40_40, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedPathPorts_19));
#line 616 "slice_and_dice.m"
    }
#line 616 "slice_and_dice.m"
    {
#line 616 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_39_39, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_40_40));
#line 616 "slice_and_dice.m"
    }
#line 616 "slice_and_dice.m"
    {
#line 616 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_39_39));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybePathColumns_10));
#line 616 "slice_and_dice.m"
    }
#line 617 "slice_and_dice.m"
    {
#line 617 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_45_45, 0) = ((MR_Box) ((MR_String) "File:Line"));
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_45_45, 1) = ((MR_Box) (mdbcomp__slice_and_dice__FormattedContexts_15));
#line 617 "slice_and_dice.m"
    }
#line 617 "slice_and_dice.m"
    {
#line 617 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_44_44, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_45_45));
#line 617 "slice_and_dice.m"
    }
#line 617 "slice_and_dice.m"
    {
#line 617 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_43_43, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_44_44));
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_43_43, 1) = ((MR_Box) (mdbcomp__slice_and_dice__MaybeMaxFileColumns_11));
#line 617 "slice_and_dice.m"
    }
#line 618 "slice_and_dice.m"
    {
#line 618 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_50_50, 0) = ((MR_Box) ((MR_String) "Count"));
#line 618 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_50_50, 1) = ((MR_Box) (mdbcomp__slice_and_dice__CountStrs_20));
#line 618 "slice_and_dice.m"
    }
#line 618 "slice_and_dice.m"
    {
#line 618 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_49_49, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_50_50));
#line 618 "slice_and_dice.m"
    }
#line 618 "slice_and_dice.m"
    {
#line 618 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_48_48, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_49_49));
#line 618 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "slice_and_dice.m"
    }
#line 618 "slice_and_dice.m"
    {
#line 618 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_47_47, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_48_48));
#line 618 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_47_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 618 "slice_and_dice.m"
    }
#line 617 "slice_and_dice.m"
    {
#line 617 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_42_42, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_43_43));
#line 617 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_42_42, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_47_47));
#line 617 "slice_and_dice.m"
    }
#line 616 "slice_and_dice.m"
    {
#line 616 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_37_37, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_38_38));
#line 616 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_37_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_42_42));
#line 616 "slice_and_dice.m"
    }
#line 615 "slice_and_dice.m"
    {
#line 615 "slice_and_dice.m"
      mdbcomp__slice_and_dice__AlwaysColumns_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__AlwaysColumns_21, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_33_33));
#line 615 "slice_and_dice.m"
      MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__AlwaysColumns_21, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_37_37));
#line 615 "slice_and_dice.m"
    }
#line 619 "slice_and_dice.m"
    {
#line 619 "slice_and_dice.m"
      mercury__list__filter_4_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_80_80, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[3], mdbcomp__slice_and_dice__Tests_17, &mdbcomp__slice_and_dice___OneTests_22, &mdbcomp__slice_and_dice__OtherTests_23);
    }
#line 626 "slice_and_dice.m"
    if ((mdbcomp__slice_and_dice__OtherTests_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Columns_24 = mdbcomp__slice_and_dice__AlwaysColumns_21;
#line 626 "slice_and_dice.m"
    else
#line 627 "slice_and_dice.m"
      {
#line 627 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TestsStrs_27;
#line 627 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__TotalTestsStr_28;
#line 627 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_58_58;
#line 627 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_59_59;
#line 627 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_61_61;
#line 627 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_62_62;
#line 627 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_63_63;
#line 627 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_64_64;

#line 628 "slice_and_dice.m"
        {
#line 628 "slice_and_dice.m"
          mdbcomp__slice_and_dice__TestsStrs_27 = mercury__list__map_2_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_80_80, mdbcomp__slice_and_dice__TypeCtorInfo_79_79, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[16], mdbcomp__slice_and_dice__Tests_17);
        }
#line 629 "slice_and_dice.m"
        {
#line 629 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_59_59 = mercury__string__int_to_string_thousands_1_f_0(mdbcomp__slice_and_dice__TotalTests_8);
        }
#line 629 "slice_and_dice.m"
        {
#line 629 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_58_58 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_59_59, (MR_String) ")");
        }
#line 629 "slice_and_dice.m"
        {
#line 629 "slice_and_dice.m"
          mdbcomp__slice_and_dice__TotalTestsStr_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", mdbcomp__slice_and_dice__V_58_58);
        }
#line 631 "slice_and_dice.m"
        {
#line 631 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_64_64, 0) = ((MR_Box) (mdbcomp__slice_and_dice__TotalTestsStr_28));
#line 631 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_64_64, 1) = ((MR_Box) (mdbcomp__slice_and_dice__TestsStrs_27));
#line 631 "slice_and_dice.m"
        }
#line 631 "slice_and_dice.m"
        {
#line 631 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 631 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_63_63, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_64_64));
#line 631 "slice_and_dice.m"
        }
#line 631 "slice_and_dice.m"
        {
#line 631 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_62_62, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_63_63));
#line 631 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "slice_and_dice.m"
        }
#line 631 "slice_and_dice.m"
        {
#line 631 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_61_61, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_62_62));
#line 631 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "slice_and_dice.m"
        }
#line 630 "slice_and_dice.m"
        {
#line 630 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Columns_24 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[6], mdbcomp__slice_and_dice__AlwaysColumns_21, mdbcomp__slice_and_dice__V_61_61);
        }
#line 627 "slice_and_dice.m"
      }
#line 633 "slice_and_dice.m"
    {
#line 633 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_67_67 = mercury__string__format_table_max_2_f_0(mdbcomp__slice_and_dice__Columns_24, (MR_String) " ");
    }
#line 633 "slice_and_dice.m"
    {
#line 633 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__Str_12 = mercury__string__f_43_43_2_f_0(mdbcomp__slice_and_dice__V_67_67, (MR_String) "\n");
    }
#line 608 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__Str_12;
#line 608 "slice_and_dice.m"
  }
#line 604 "slice_and_dice.m"
}

#line 596 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(
#line 596 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_4,
#line 596 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2,
#line 596 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__SliceLabelCount_7)
#line 596 "slice_and_dice.m"
{
#line 599 "slice_and_dice.m"
  {
#line 599 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 599 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__PathPort_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 599 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ExecCount_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));

#line 600 "slice_and_dice.m"
    {
#line 600 "slice_and_dice.m"
      MR_Word base;
#line 600 "slice_and_dice.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 600 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__SliceLabelCount_7 = base;
#line 600 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_4));
#line 600 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__PathPort_5));
#line 600 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_6));
#line 600 "slice_and_dice.m"
    }
#line 599 "slice_and_dice.m"
  }
#line 596 "slice_and_dice.m"
}

#line 592 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1(
#line 592 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 592 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 592 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
#line 592 "slice_and_dice.m"
{
#line 592 "slice_and_dice.m"
  {
#line 592 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 592 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_SliceLabelCount_7;

#line 592 "slice_and_dice.m"
    {
#line 592 "slice_and_dice.m"
      mdbcomp__slice_and_dice__make_slice_label_count_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_SliceLabelCount_7);
    }
#line 592 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_SliceLabelCount_7));
#line 592 "slice_and_dice.m"
  }
#line 592 "slice_and_dice.m"
}

#line 587 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(
#line 587 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabel_5,
#line 587 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcSlice_6,
#line 587 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10,
#line 587 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11)
#line 587 "slice_and_dice.m"
{
#line 590 "slice_and_dice.m"
  {
#line 590 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 590 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_19_19;
#line 590 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcExecCounts_8;
#line 590 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__NewLabelCounts_9;
#line 590 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_12_12;

#line 591 "slice_and_dice.m"
    {
#line 591 "slice_and_dice.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0, mdbcomp__slice_and_dice__ProcSlice_6, &mdbcomp__slice_and_dice__ProcExecCounts_8);
    }
#line 592 "slice_and_dice.m"
    {
#line 592 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 592 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[1]));
#line 592 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 1) = ((MR_Box) (mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0_1));
#line 592 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 592 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_12_12, 3) = ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_5));
#line 592 "slice_and_dice.m"
    }
#line 7794 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;
#line 592 "slice_and_dice.m"
    {
#line 592 "slice_and_dice.m"
      mercury__list__map_3_p_0((MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[5], mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__V_12_12, mdbcomp__slice_and_dice__ProcExecCounts_8, &mdbcomp__slice_and_dice__NewLabelCounts_9);
    }
#line 594 "slice_and_dice.m"
    {
#line 594 "slice_and_dice.m"
      mercury__list__append_3_p_1(mdbcomp__slice_and_dice__TypeCtorInfo_19_19, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_0_10, mdbcomp__slice_and_dice__NewLabelCounts_9, mdbcomp__slice_and_dice__STATE_VARIABLE_LabelCounts_11);
#line 594 "slice_and_dice.m"
      return;
    }
#line 590 "slice_and_dice.m"
  }
#line 587 "slice_and_dice.m"
}

#line 537 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(
#line 537 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 537 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount1_6,
#line 537 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCount2_7,
#line 537 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 537 "slice_and_dice.m"
{
#line 566 "slice_and_dice.m"
  while (MR_TRUE)
#line 566 "slice_and_dice.m"
    {
#line 566 "slice_and_dice.m"
      /* tailcall optimized into a loop */
#line 566 "slice_and_dice.m"
      {
#line 566 "slice_and_dice.m"
        MR_bool mdbcomp__slice_and_dice__succeeded;
#line 566 "slice_and_dice.m"
        MR_Char mdbcomp__slice_and_dice__C_9;
#line 566 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Rest_10;

#line 542 "slice_and_dice.m"
        {
#line 542 "slice_and_dice.m"
          mdbcomp__slice_and_dice__succeeded = mercury__string__first_char_3_p_3(mdbcomp__slice_and_dice__SortStr_5, &mdbcomp__slice_and_dice__C_9, &mdbcomp__slice_and_dice__Rest_10);
        }
#line 566 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 557 "slice_and_dice.m"
          {
#line 557 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Result0_11;
#line 559 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_21_21;
#line 559 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__V_22_22;

#line 543 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 99);
#line 546 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 544 "slice_and_dice.m"
              {
#line 544 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 544 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 544 "slice_and_dice.m"
                MR_String mdbcomp__slice_and_dice__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 544 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 544 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 544 "slice_and_dice.m"
                MR_String mdbcomp__slice_and_dice__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 544 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 544 "slice_and_dice.m"
                MR_Integer mdbcomp__slice_and_dice__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));

#line 544 "slice_and_dice.m"
                {
#line 544 "slice_and_dice.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_12_12, mdbcomp__slice_and_dice__V_13_13);
                }
#line 544 "slice_and_dice.m"
              }
#line 546 "slice_and_dice.m"
            else
#line 549 "slice_and_dice.m"
              {
#line 546 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 67);
#line 549 "slice_and_dice.m"
                if (mdbcomp__slice_and_dice__succeeded)
#line 547 "slice_and_dice.m"
                  {
#line 547 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 547 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 547 "slice_and_dice.m"
                    MR_String mdbcomp__slice_and_dice__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 547 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 547 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 547 "slice_and_dice.m"
                    MR_String mdbcomp__slice_and_dice__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 547 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 547 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));

#line 547 "slice_and_dice.m"
                    {
#line 547 "slice_and_dice.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_14_14, mdbcomp__slice_and_dice__V_15_15);
                    }
#line 547 "slice_and_dice.m"
                  }
#line 549 "slice_and_dice.m"
                else
#line 552 "slice_and_dice.m"
                  {
#line 549 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 116);
#line 552 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 550 "slice_and_dice.m"
                      {
#line 550 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 550 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 550 "slice_and_dice.m"
                        MR_String mdbcomp__slice_and_dice__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 550 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 550 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));
#line 550 "slice_and_dice.m"
                        MR_String mdbcomp__slice_and_dice__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 550 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 550 "slice_and_dice.m"
                        MR_Integer mdbcomp__slice_and_dice__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));

#line 550 "slice_and_dice.m"
                        {
#line 550 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_16_16, mdbcomp__slice_and_dice__V_17_17);
                        }
#line 550 "slice_and_dice.m"
                      }
#line 552 "slice_and_dice.m"
                    else
#line 555 "slice_and_dice.m"
                      {
#line 552 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__C_9 == (MR_Char) 84);
#line 555 "slice_and_dice.m"
                        if (mdbcomp__slice_and_dice__succeeded)
#line 553 "slice_and_dice.m"
                          {
#line 553 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 3)));
#line 553 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 3)));
#line 553 "slice_and_dice.m"
                            MR_String mdbcomp__slice_and_dice__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 0)));
#line 553 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 1)));
#line 553 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount2_7, (MR_Integer) 2)));
#line 553 "slice_and_dice.m"
                            MR_String mdbcomp__slice_and_dice__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 0)));
#line 553 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 1)));
#line 553 "slice_and_dice.m"
                            MR_Integer mdbcomp__slice_and_dice__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCount1_6, (MR_Integer) 2)));

#line 553 "slice_and_dice.m"
                            {
#line 553 "slice_and_dice.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__Result0_11, mdbcomp__slice_and_dice__V_18_18, mdbcomp__slice_and_dice__V_19_19);
                            }
#line 553 "slice_and_dice.m"
                          }
#line 555 "slice_and_dice.m"
                        else
#line 556 "slice_and_dice.m"
                          {
#line 556 "slice_and_dice.m"
                            {
#line 556 "slice_and_dice.m"
                              mercury__require__error_1_p_0((MR_String) "slice_exec_count_compare: invalid sort string");
#line 556 "slice_and_dice.m"
                              return;
                            }
#line 556 "slice_and_dice.m"
                          }
#line 555 "slice_and_dice.m"
                      }
#line 552 "slice_and_dice.m"
                  }
#line 549 "slice_and_dice.m"
              }
#line 559 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Result0_11 == (MR_Integer) 0);
#line 559 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 559 "slice_and_dice.m"
              {
#line 560 "slice_and_dice.m"
                {
#line 560 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__V_21_21 = mercury__string__length_1_f_0(mdbcomp__slice_and_dice__Rest_10);
                }
#line 560 "slice_and_dice.m"
                mdbcomp__slice_and_dice__V_22_22 = (MR_Integer) 0;
#line 560 "slice_and_dice.m"
                mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_21_21 > mdbcomp__slice_and_dice__V_22_22);
#line 559 "slice_and_dice.m"
              }
#line 563 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 562 "slice_and_dice.m"
              {
#line 562 "slice_and_dice.m"
                /* direct tailcall eliminated */
#line 562 "slice_and_dice.m"
                {
#line 562 "slice_and_dice.m"
                  MR_String mdbcomp__slice_and_dice__SortStr__tmp_copy_5 = mdbcomp__slice_and_dice__Rest_10;

#line 562 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__SortStr_5 = mdbcomp__slice_and_dice__SortStr__tmp_copy_5;
#line 562 "slice_and_dice.m"
                }
#line 562 "slice_and_dice.m"
                continue;
#line 562 "slice_and_dice.m"
              }
#line 563 "slice_and_dice.m"
            else
#line 564 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__Result_8 = mdbcomp__slice_and_dice__Result0_11;
#line 557 "slice_and_dice.m"
          }
#line 566 "slice_and_dice.m"
        else
#line 567 "slice_and_dice.m"
          {
#line 567 "slice_and_dice.m"
            {
#line 567 "slice_and_dice.m"
              mercury__require__error_1_p_0((MR_String) "slice_exec_count_compare: empty sort string");
#line 567 "slice_and_dice.m"
              return;
            }
#line 567 "slice_and_dice.m"
          }
#line 566 "slice_and_dice.m"
      }
#line 566 "slice_and_dice.m"
      break;
#line 566 "slice_and_dice.m"
    }
#line 537 "slice_and_dice.m"
}

#line 455 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(
#line 455 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__SortStr_5,
#line 455 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountA_6,
#line 455 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LabelCountB_7,
#line 455 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Result_8)
#line 455 "slice_and_dice.m"
{
#line 484 "slice_and_dice.m"
  {
#line 484 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__SortStr_5, (MR_String) "") == 0);
#line 484 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 2)));
#line 484 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 1)));
#line 484 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountA_6, (MR_Integer) 0)));
#line 484 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 2)));
#line 484 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 1)));
#line 484 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LabelCountB_7, (MR_Integer) 0)));

#line 484 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 461 "slice_and_dice.m"
      {
#line 461 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ProcLabelResult_15;

#line 463 "slice_and_dice.m"
        {
#line 463 "slice_and_dice.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&mdbcomp__slice_and_dice__ProcLabelResult_15, mdbcomp__slice_and_dice__V_27_27, mdbcomp__slice_and_dice__V_30_30);
        }
#line 467 "slice_and_dice.m"
        if ((mdbcomp__slice_and_dice__ProcLabelResult_15 == (MR_Integer) 1))
#line 465 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
#line 467 "slice_and_dice.m"
        else
#line 467 "slice_and_dice.m"
          if ((mdbcomp__slice_and_dice__ProcLabelResult_15 == (MR_Integer) 0))
#line 468 "slice_and_dice.m"
            {
#line 468 "slice_and_dice.m"
              MR_Word mdbcomp__slice_and_dice__PathPortResult_16;
#line 531 "slice_and_dice.m"
              MR_Word mdbcomp__slice_and_dice__ResultPrime_36;

#line 502 "slice_and_dice.m"
              if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_26_26)) == (MR_mktag((MR_Integer) 1))))
#line 503 "slice_and_dice.m"
                {
#line 503 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__RevPathA_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 503 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__RevPathB_38;
#line 503 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__PathA_39;
#line 503 "slice_and_dice.m"
                  MR_Word mdbcomp__slice_and_dice__PathB_40;

#line 504 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 504 "slice_and_dice.m"
                  if (mdbcomp__slice_and_dice__succeeded)
#line 504 "slice_and_dice.m"
                    {
#line 504 "slice_and_dice.m"
                      mdbcomp__slice_and_dice__RevPathB_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 506 "slice_and_dice.m"
                      {
#line 506 "slice_and_dice.m"
                        mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_37, &mdbcomp__slice_and_dice__PathA_39);
                      }
#line 507 "slice_and_dice.m"
                      {
#line 507 "slice_and_dice.m"
                        mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_38, &mdbcomp__slice_and_dice__PathB_40);
                      }
#line 508 "slice_and_dice.m"
                      {
#line 508 "slice_and_dice.m"
                        mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_39, mdbcomp__slice_and_dice__PathB_40);
                      }
#line 508 "slice_and_dice.m"
                      mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 504 "slice_and_dice.m"
                    }
#line 503 "slice_and_dice.m"
                }
#line 502 "slice_and_dice.m"
              else
#line 502 "slice_and_dice.m"
                if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_26_26)) == (MR_mktag((MR_Integer) 2))))
#line 511 "slice_and_dice.m"
                  {
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortResult_41;
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortA_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortB_51;
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__RevPathA_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 1)));
#line 511 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__RevPathB_53;
#line 511 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_61_61;
#line 511 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_62_62;

#line 512 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 2)));
#line 512 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 512 "slice_and_dice.m"
                      {
#line 512 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__PortB_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 512 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__RevPathB_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 1)));
#line 514 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_61_61 = (MR_Integer) mdbcomp__slice_and_dice__PortA_50;
#line 514 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_62_62 = (MR_Integer) mdbcomp__slice_and_dice__PortB_51;
#line 514 "slice_and_dice.m"
                        {
#line 514 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__PortResult_41, mdbcomp__slice_and_dice__V_61_61, mdbcomp__slice_and_dice__V_62_62);
                        }
#line 518 "slice_and_dice.m"
                        if ((mdbcomp__slice_and_dice__PortResult_41 == (MR_Integer) 1))
#line 517 "slice_and_dice.m"
                          mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 1;
#line 518 "slice_and_dice.m"
                        else
#line 518 "slice_and_dice.m"
                          if ((mdbcomp__slice_and_dice__PortResult_41 == (MR_Integer) 0))
#line 519 "slice_and_dice.m"
                            {
#line 519 "slice_and_dice.m"
                              MR_Word mdbcomp__slice_and_dice__PathA_42;
#line 519 "slice_and_dice.m"
                              MR_Word mdbcomp__slice_and_dice__PathB_43;

#line 520 "slice_and_dice.m"
                              {
#line 520 "slice_and_dice.m"
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathA_52, &mdbcomp__slice_and_dice__PathA_42);
                              }
#line 521 "slice_and_dice.m"
                              {
#line 521 "slice_and_dice.m"
                                mdbcomp__goal_path__rgp_to_fgp_2_p_0(mdbcomp__slice_and_dice__RevPathB_53, &mdbcomp__slice_and_dice__PathB_43);
                              }
#line 522 "slice_and_dice.m"
                              {
#line 522 "slice_and_dice.m"
                                mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__PathA_42, mdbcomp__slice_and_dice__PathB_43);
                              }
#line 519 "slice_and_dice.m"
                            }
#line 518 "slice_and_dice.m"
                          else
#line 525 "slice_and_dice.m"
                            mdbcomp__slice_and_dice__ResultPrime_36 = (MR_Integer) 2;
#line 518 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 512 "slice_and_dice.m"
                      }
#line 511 "slice_and_dice.m"
                  }
#line 502 "slice_and_dice.m"
                else
#line 497 "slice_and_dice.m"
                  {
#line 497 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_26_26, (MR_Integer) 0)));
#line 497 "slice_and_dice.m"
                    MR_Word mdbcomp__slice_and_dice__PortB_35;
#line 497 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_63_63;
#line 497 "slice_and_dice.m"
                    MR_Integer mdbcomp__slice_and_dice__V_64_64;

#line 498 "slice_and_dice.m"
                    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__V_29_29)) == (MR_mktag((MR_Integer) 0)));
#line 498 "slice_and_dice.m"
                    if (mdbcomp__slice_and_dice__succeeded)
#line 498 "slice_and_dice.m"
                      {
#line 498 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__PortB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_29_29, (MR_Integer) 0)));
#line 500 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_63_63 = (MR_Integer) mdbcomp__slice_and_dice__PortA_34;
#line 500 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__V_64_64 = (MR_Integer) mdbcomp__slice_and_dice__PortB_35;
#line 500 "slice_and_dice.m"
                        {
#line 500 "slice_and_dice.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__slice_and_dice__ResultPrime_36, mdbcomp__slice_and_dice__V_63_63, mdbcomp__slice_and_dice__V_64_64);
                        }
#line 500 "slice_and_dice.m"
                        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 498 "slice_and_dice.m"
                      }
#line 497 "slice_and_dice.m"
                  }
#line 531 "slice_and_dice.m"
              if (mdbcomp__slice_and_dice__succeeded)
#line 530 "slice_and_dice.m"
                mdbcomp__slice_and_dice__PathPortResult_16 = mdbcomp__slice_and_dice__ResultPrime_36;
#line 531 "slice_and_dice.m"
              else
#line 534 "slice_and_dice.m"
                {
#line 534 "slice_and_dice.m"
                  mdbcomp__trace_counts____Compare____path_port_0_0(&mdbcomp__slice_and_dice__PathPortResult_16, mdbcomp__slice_and_dice__V_26_26, mdbcomp__slice_and_dice__V_29_29);
                }
#line 473 "slice_and_dice.m"
              if ((mdbcomp__slice_and_dice__PathPortResult_16 == (MR_Integer) 1))
#line 471 "slice_and_dice.m"
                *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 1;
#line 473 "slice_and_dice.m"
              else
#line 473 "slice_and_dice.m"
                if ((mdbcomp__slice_and_dice__PathPortResult_16 == (MR_Integer) 0))
#line 475 "slice_and_dice.m"
                  {
#line 475 "slice_and_dice.m"
                    mdbcomp__slice_and_dice____Compare____slice_exec_count_0_0(mdbcomp__slice_and_dice__Result_8, mdbcomp__slice_and_dice__V_25_25, mdbcomp__slice_and_dice__V_28_28);
#line 475 "slice_and_dice.m"
                    return;
                  }
#line 473 "slice_and_dice.m"
                else
#line 477 "slice_and_dice.m"
                  *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
#line 468 "slice_and_dice.m"
            }
#line 467 "slice_and_dice.m"
          else
#line 481 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Result_8 = (MR_Integer) 2;
#line 461 "slice_and_dice.m"
      }
#line 484 "slice_and_dice.m"
    else
#line 485 "slice_and_dice.m"
      {
#line 485 "slice_and_dice.m"
        mdbcomp__slice_and_dice__slice_exec_count_compare_4_p_0(mdbcomp__slice_and_dice__SortStr_5, mdbcomp__slice_and_dice__V_25_25, mdbcomp__slice_and_dice__V_28_28, mdbcomp__slice_and_dice__Result_8);
#line 485 "slice_and_dice.m"
        return;
      }
#line 484 "slice_and_dice.m"
  }
#line 455 "slice_and_dice.m"
}

#line 450 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(
#line 450 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__SliceLabelCount_2)
#line 450 "slice_and_dice.m"
{
#line 452 "slice_and_dice.m"
  {
#line 452 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 452 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_3_3;
#line 452 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_2, (MR_Integer) 2)));
#line 453 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_2, (MR_Integer) 0)));
#line 453 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceLabelCount_2, (MR_Integer) 1)));
#line 453 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_5_5, (MR_Integer) 0)));
#line 453 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_5_5, (MR_Integer) 1)));
#line 453 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_10_10;

#line 453 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_5_5, (MR_Integer) 2)));
#line 453 "slice_and_dice.m"
    mdbcomp__slice_and_dice__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_5_5, (MR_Integer) 3)));
#line 453 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_3_3 > (MR_Integer) 0);
#line 452 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 452 "slice_and_dice.m"
  }
#line 450 "slice_and_dice.m"
}

#line 444 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(
#line 444 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__Module_3,
#line 444 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__2_2)
#line 444 "slice_and_dice.m"
{
#line 447 "slice_and_dice.m"
  {
#line 447 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 447 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Label_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 0)));
#line 447 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcSymModule_11;
#line 447 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__SymModule_20;
#line 447 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 1)));
#line 447 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__2_2, (MR_Integer) 2)));

#line 962 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__Label_4)) == (MR_mktag((MR_Integer) 0))))
#line 961 "slice_and_dice.m"
      {
#line 961 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
#line 961 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
#line 961 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_12_12;
#line 961 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_13_13;
#line 961 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_14_14;

#line 961 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
#line 961 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
#line 961 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
#line 961 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
#line 961 "slice_and_dice.m"
      }
#line 962 "slice_and_dice.m"
    else
#line 963 "slice_and_dice.m"
      {
#line 963 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 0)));
#line 963 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 1)));
#line 963 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__V_17_17;
#line 963 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_18_18;
#line 963 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_19_19;

#line 963 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ProcSymModule_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 2)));
#line 963 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 3)));
#line 963 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 4)));
#line 963 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Label_4, (MR_Integer) 5)));
#line 963 "slice_and_dice.m"
      }
#line 965 "slice_and_dice.m"
    {
#line 965 "slice_and_dice.m"
      mdbcomp__slice_and_dice__SymModule_20 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdbcomp__slice_and_dice__Module_3);
    }
#line 966 "slice_and_dice.m"
    {
#line 966 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__sym_name__is_submodule_2_p_0(mdbcomp__slice_and_dice__ProcSymModule_11, mdbcomp__slice_and_dice__SymModule_20);
    }
#line 447 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 447 "slice_and_dice.m"
  }
#line 444 "slice_and_dice.m"
}

#line 371 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(
#line 371 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 371 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_2,
#line 371 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_3,
#line 371 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_4)
#line 371 "slice_and_dice.m"
{
#line 374 "slice_and_dice.m"
  {
#line 374 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 374 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_2, (MR_Integer) 2)));
#line 374 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_2, (MR_Integer) 1)));
#line 374 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 5)));
#line 374 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 4)));
#line 374 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 3)));
#line 374 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 2)));
#line 374 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 1)));
#line 374 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_3, (MR_Integer) 0)));
#line 381 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_2, (MR_Integer) 0)));

#line 374 "slice_and_dice.m"
    if ((mdbcomp__slice_and_dice__HeadVar__1_1 == (MR_Integer) 1))
#line 380 "slice_and_dice.m"
      {
#line 380 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_31_31 = (mdbcomp__slice_and_dice__V_37_37 + mdbcomp__slice_and_dice__V_34_34);
#line 380 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_32_32 = (mdbcomp__slice_and_dice__V_36_36 + mdbcomp__slice_and_dice__V_33_33);

#line 384 "slice_and_dice.m"
        {
#line 384 "slice_and_dice.m"
          MR_Word base;
#line 384 "slice_and_dice.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 384 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__ExecCounts_4 = base;
#line 384 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_41_41));
#line 384 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_40_40));
#line 384 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__V_39_39));
#line 384 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdbcomp__slice_and_dice__V_38_38));
#line 384 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdbcomp__slice_and_dice__V_31_31));
#line 384 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdbcomp__slice_and_dice__V_32_32));
#line 384 "slice_and_dice.m"
        }
#line 380 "slice_and_dice.m"
      }
#line 374 "slice_and_dice.m"
    else
#line 374 "slice_and_dice.m"
      {
#line 374 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_17_17 = (mdbcomp__slice_and_dice__V_39_39 + mdbcomp__slice_and_dice__V_34_34);
#line 374 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__V_18_18 = (mdbcomp__slice_and_dice__V_38_38 + mdbcomp__slice_and_dice__V_33_33);

#line 378 "slice_and_dice.m"
        {
#line 378 "slice_and_dice.m"
          MR_Word base;
#line 378 "slice_and_dice.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 378 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__ExecCounts_4 = base;
#line 378 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__V_41_41));
#line 378 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__V_40_40));
#line 378 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__V_17_17));
#line 378 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdbcomp__slice_and_dice__V_18_18));
#line 378 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdbcomp__slice_and_dice__V_37_37));
#line 378 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdbcomp__slice_and_dice__V_36_36));
#line 378 "slice_and_dice.m"
        }
#line 374 "slice_and_dice.m"
      }
#line 374 "slice_and_dice.m"
  }
#line 371 "slice_and_dice.m"
}

#line 353 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1(
#line 353 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 353 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 353 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
#line 353 "slice_and_dice.m"
{
#line 353 "slice_and_dice.m"
  {
#line 353 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 353 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_ExecCounts_4;

#line 353 "slice_and_dice.m"
    {
#line 353 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_add_trace_count_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 4))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_ExecCounts_4);
    }
#line 353 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_ExecCounts_4));
#line 353 "slice_and_dice.m"
  }
#line 353 "slice_and_dice.m"
}

#line 348 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(
#line 348 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FileName_7,
#line 348 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Kind_8,
#line 348 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__PathPort_9,
#line 348 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_10,
#line 348 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17,
#line 348 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18)
#line 348 "slice_and_dice.m"
{
#line 357 "slice_and_dice.m"
  {
#line 357 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 357 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__UpdatedProcDice_12;
#line 353 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_19_19;

#line 353 "slice_and_dice.m"
    {
#line 353 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 353 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[5]));
#line 353 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0_1));
#line 353 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 353 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Kind_8));
#line 353 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 4) = ((MR_Box) (mdbcomp__slice_and_dice__LineNoAndCount_10));
#line 353 "slice_and_dice.m"
    }
#line 353 "slice_and_dice.m"
    {
#line 353 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__transform_value_4_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, mdbcomp__slice_and_dice__V_19_19, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_9)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17, &mdbcomp__slice_and_dice__UpdatedProcDice_12);
    }
#line 357 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 356 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18 = mdbcomp__slice_and_dice__UpdatedProcDice_12;
#line 357 "slice_and_dice.m"
    else
#line 358 "slice_and_dice.m"
      {
#line 358 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__LineNumber_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_10, (MR_Integer) 0)));
#line 358 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__ExecCount_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_10, (MR_Integer) 1)));
#line 358 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__NumTests_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_10, (MR_Integer) 2)));
#line 358 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__InitCount_16;

#line 363 "slice_and_dice.m"
        if ((mdbcomp__slice_and_dice__Kind_8 == (MR_Integer) 1))
#line 364 "slice_and_dice.m"
          {
#line 365 "slice_and_dice.m"
            {
#line 365 "slice_and_dice.m"
              mdbcomp__slice_and_dice__InitCount_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 365 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_7));
#line 365 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_13));
#line 365 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 2) = ((MR_Box) ((MR_Integer) 0));
#line 365 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 3) = ((MR_Box) ((MR_Integer) 0));
#line 365 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 4) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_14));
#line 365 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 5) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_15));
#line 365 "slice_and_dice.m"
            }
#line 364 "slice_and_dice.m"
          }
#line 363 "slice_and_dice.m"
        else
#line 360 "slice_and_dice.m"
          {
#line 361 "slice_and_dice.m"
            {
#line 361 "slice_and_dice.m"
              mdbcomp__slice_and_dice__InitCount_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 361 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_7));
#line 361 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_13));
#line 361 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_14));
#line 361 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 3) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_15));
#line 361 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 4) = ((MR_Box) ((MR_Integer) 0));
#line 361 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__InitCount_16, 5) = ((MR_Box) ((MR_Integer) 0));
#line 361 "slice_and_dice.m"
            }
#line 360 "slice_and_dice.m"
          }
#line 368 "slice_and_dice.m"
        {
#line 368 "slice_and_dice.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_9)), ((MR_Box) (mdbcomp__slice_and_dice__InitCount_16)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_0_17, mdbcomp__slice_and_dice__STATE_VARIABLE_ProcDice_18);
#line 368 "slice_and_dice.m"
          return;
        }
#line 358 "slice_and_dice.m"
      }
#line 357 "slice_and_dice.m"
  }
#line 348 "slice_and_dice.m"
}

#line 343 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2(
#line 343 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 343 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 343 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 343 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 343 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 343 "slice_and_dice.m"
{
#line 343 "slice_and_dice.m"
  {
#line 343 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 343 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcDice_18;

#line 343 "slice_and_dice.m"
    {
#line 343 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 4))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcDice_18);
    }
#line 343 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcDice_18));
#line 343 "slice_and_dice.m"
  }
#line 343 "slice_and_dice.m"
}

#line 339 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1(
#line 339 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 339 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 339 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 339 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 339 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 339 "slice_and_dice.m"
{
#line 339 "slice_and_dice.m"
  {
#line 339 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 339 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcDice_18;

#line 339 "slice_and_dice.m"
    {
#line 339 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_merge_path_port_6_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 4))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcDice_18);
    }
#line 339 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcDice_18));
#line 339 "slice_and_dice.m"
  }
#line 339 "slice_and_dice.m"
}

#line 330 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(
#line 330 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__Kind_6,
#line 330 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_7,
#line 330 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_8,
#line 330 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15,
#line 330 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16)
#line 330 "slice_and_dice.m"
{
#line 335 "slice_and_dice.m"
  {
#line 335 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 335 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_7, (MR_Integer) 1)));
#line 335 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabel_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_7, (MR_Integer) 2)));
#line 336 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice___ModuleNameSym_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_7, (MR_Integer) 0)));
#line 342 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FoundProcDice_13;
#line 338 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__conv0_FoundProcDice_13;

#line 338 "slice_and_dice.m"
    {
#line 338 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_12)), &mdbcomp__slice_and_dice__conv0_FoundProcDice_13);
    }
#line 338 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 338 "slice_and_dice.m"
      {
#line 338 "slice_and_dice.m"
        mdbcomp__slice_and_dice__FoundProcDice_13 = ((MR_Word) mdbcomp__slice_and_dice__conv0_FoundProcDice_13);
#line 338 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 338 "slice_and_dice.m"
      }
#line 342 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 340 "slice_and_dice.m"
      {
#line 340 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_31_31;
#line 340 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__MergedProcDice_14;
#line 340 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_17_17;
#line 339 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv2_MergedProcDice_14;

#line 339 "slice_and_dice.m"
        {
#line 339 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 339 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[0]));
#line 339 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_1));
#line 339 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_11));
#line 339 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 4) = ((MR_Box) (mdbcomp__slice_and_dice__Kind_6));
#line 339 "slice_and_dice.m"
        }
#line 8876 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeInfo_31_31 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1];
#line 339 "slice_and_dice.m"
        {
#line 339 "slice_and_dice.m"
          mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_31_31, mdbcomp__slice_and_dice__V_17_17, mdbcomp__slice_and_dice__ProcTraceCounts_8, ((MR_Box) (mdbcomp__slice_and_dice__FoundProcDice_13)), &mdbcomp__slice_and_dice__conv2_MergedProcDice_14);
        }
#line 339 "slice_and_dice.m"
        mdbcomp__slice_and_dice__MergedProcDice_14 = ((MR_Word) mdbcomp__slice_and_dice__conv2_MergedProcDice_14);
#line 341 "slice_and_dice.m"
        {
#line 341 "slice_and_dice.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_31_31, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_12)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcDice_14)), mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15, mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16);
#line 341 "slice_and_dice.m"
          return;
        }
#line 340 "slice_and_dice.m"
      }
#line 342 "slice_and_dice.m"
    else
#line 344 "slice_and_dice.m"
      {
#line 344 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_37_37;
#line 344 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_40_40;
#line 344 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_19_19;
#line 344 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_20_20;
#line 344 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__MergedProcDice_22;
#line 343 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv4_MergedProcDice_22;

#line 343 "slice_and_dice.m"
        {
#line 343 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 343 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_8[0]));
#line 343 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 1) = ((MR_Box) (mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0_2));
#line 343 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 343 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_11));
#line 343 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_19_19, 4) = ((MR_Box) (mdbcomp__slice_and_dice__Kind_6));
#line 343 "slice_and_dice.m"
        }
#line 8927 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeCtorInfo_37_37 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 344 "slice_and_dice.m"
        {
#line 344 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_20_20 = mercury__map__init_0_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_37_37, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0);
        }
#line 8934 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeInfo_40_40 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1];
#line 343 "slice_and_dice.m"
        {
#line 343 "slice_and_dice.m"
          mercury__map__foldl_4_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_37_37, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_40_40, mdbcomp__slice_and_dice__V_19_19, mdbcomp__slice_and_dice__ProcTraceCounts_8, ((MR_Box) (mdbcomp__slice_and_dice__V_20_20)), &mdbcomp__slice_and_dice__conv4_MergedProcDice_22);
        }
#line 343 "slice_and_dice.m"
        mdbcomp__slice_and_dice__MergedProcDice_22 = ((MR_Word) mdbcomp__slice_and_dice__conv4_MergedProcDice_22);
#line 345 "slice_and_dice.m"
        {
#line 345 "slice_and_dice.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_40_40, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_12)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcDice_22)), mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_0_15, mdbcomp__slice_and_dice__STATE_VARIABLE_DiceProcMap_16);
#line 345 "slice_and_dice.m"
          return;
        }
#line 344 "slice_and_dice.m"
      }
#line 335 "slice_and_dice.m"
  }
#line 330 "slice_and_dice.m"
}

#line 309 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_p_0(
#line 309 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 309 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__Dice_2)
#line 309 "slice_and_dice.m"
{
#line 314 "slice_and_dice.m"
  {
#line 314 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 314 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 315 "slice_and_dice.m"
      {
#line 316 "slice_and_dice.m"
        {
#line 316 "slice_and_dice.m"
          mercury__require__error_1_p_0((MR_String) "det_maybe_dice_error_to_dice: result is error");
#line 316 "slice_and_dice.m"
          return;
        }
#line 315 "slice_and_dice.m"
      }
#line 314 "slice_and_dice.m"
    else
#line 314 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__Dice_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 314 "slice_and_dice.m"
  }
#line 309 "slice_and_dice.m"
}

#line 300 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_p_0(
#line 300 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__HeadVar__1_1,
#line 300 "slice_and_dice.m"
  MR_String * mdbcomp__slice_and_dice__HeadVar__2_2)
#line 300 "slice_and_dice.m"
{
#line 306 "slice_and_dice.m"
  {
#line 306 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;

#line 306 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 307 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__HeadVar__1_1, (MR_Integer) 0)));
#line 306 "slice_and_dice.m"
    else
#line 306 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__HeadVar__2_2 = (MR_String) "";
#line 306 "slice_and_dice.m"
  }
#line 300 "slice_and_dice.m"
}

#line 259 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(
#line 259 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_4,
#line 259 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ExecCounts0_5,
#line 259 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__ExecCounts_6)
#line 259 "slice_and_dice.m"
{
#line 262 "slice_and_dice.m"
  {
#line 262 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 262 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__ExecCount_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_4, (MR_Integer) 1)));
#line 262 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__NumTests_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_4, (MR_Integer) 2)));
#line 262 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 0)));
#line 262 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 1)));
#line 262 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Exec_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 2)));
#line 262 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Tests_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ExecCounts0_5, (MR_Integer) 3)));
#line 262 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_14_14 = (mdbcomp__slice_and_dice__Exec_12 + mdbcomp__slice_and_dice__ExecCount_8);
#line 262 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__V_15_15 = (mdbcomp__slice_and_dice__Tests_13 + mdbcomp__slice_and_dice__NumTests_9);
#line 263 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice___LineNumber_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_4, (MR_Integer) 0)));

#line 265 "slice_and_dice.m"
    {
#line 265 "slice_and_dice.m"
      MR_Word base;
#line 265 "slice_and_dice.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 265 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__ExecCounts_6 = base;
#line 265 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_10));
#line 265 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_11));
#line 265 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdbcomp__slice_and_dice__V_14_14));
#line 265 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdbcomp__slice_and_dice__V_15_15));
#line 265 "slice_and_dice.m"
    }
#line 262 "slice_and_dice.m"
  }
#line 259 "slice_and_dice.m"
}

#line 248 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1(
#line 248 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 248 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 248 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_2)
#line 248 "slice_and_dice.m"
{
#line 248 "slice_and_dice.m"
  {
#line 248 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 248 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_ExecCounts_6;

#line 248 "slice_and_dice.m"
    {
#line 248 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_add_trace_count_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), &mdbcomp__slice_and_dice__conv0_ExecCounts_6);
    }
#line 248 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_2 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_ExecCounts_6));
#line 248 "slice_and_dice.m"
  }
#line 248 "slice_and_dice.m"
}

#line 243 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(
#line 243 "slice_and_dice.m"
  MR_String mdbcomp__slice_and_dice__FileName_6,
#line 243 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__PathPort_7,
#line 243 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__LineNoAndCount_8,
#line 243 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15,
#line 243 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16)
#line 243 "slice_and_dice.m"
{
#line 252 "slice_and_dice.m"
  {
#line 252 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 252 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__UpdatedProcSlice_10;
#line 248 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_17_17;

#line 248 "slice_and_dice.m"
    {
#line 248 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 248 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_7[0]));
#line 248 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0_1));
#line 248 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 248 "slice_and_dice.m"
      MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 3) = ((MR_Box) (mdbcomp__slice_and_dice__LineNoAndCount_8));
#line 248 "slice_and_dice.m"
    }
#line 248 "slice_and_dice.m"
    {
#line 248 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__transform_value_4_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, mdbcomp__slice_and_dice__V_17_17, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_7)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15, &mdbcomp__slice_and_dice__UpdatedProcSlice_10);
    }
#line 252 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 251 "slice_and_dice.m"
      *mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16 = mdbcomp__slice_and_dice__UpdatedProcSlice_10;
#line 252 "slice_and_dice.m"
    else
#line 253 "slice_and_dice.m"
      {
#line 253 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_8, (MR_Integer) 0)));
#line 253 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__ExecCount_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_8, (MR_Integer) 1)));
#line 253 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__NumTests_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__LineNoAndCount_8, (MR_Integer) 2)));
#line 253 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SliceExecCount_14;

#line 254 "slice_and_dice.m"
        {
#line 254 "slice_and_dice.m"
          mdbcomp__slice_and_dice__SliceExecCount_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 254 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 0) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_6));
#line 254 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 1) = ((MR_Box) (mdbcomp__slice_and_dice__LineNumber_11));
#line 254 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 2) = ((MR_Box) (mdbcomp__slice_and_dice__ExecCount_12));
#line 254 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__SliceExecCount_14, 3) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_13));
#line 254 "slice_and_dice.m"
        }
#line 256 "slice_and_dice.m"
        {
#line 256 "slice_and_dice.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0, ((MR_Box) (mdbcomp__slice_and_dice__PathPort_7)), ((MR_Box) (mdbcomp__slice_and_dice__SliceExecCount_14)), mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_0_15, mdbcomp__slice_and_dice__STATE_VARIABLE_ProcSlice_16);
#line 256 "slice_and_dice.m"
          return;
        }
#line 253 "slice_and_dice.m"
      }
#line 252 "slice_and_dice.m"
  }
#line 243 "slice_and_dice.m"
}

#line 238 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2(
#line 238 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 238 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 238 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 238 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 238 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 238 "slice_and_dice.m"
{
#line 238 "slice_and_dice.m"
  {
#line 238 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 238 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcSlice_16;

#line 238 "slice_and_dice.m"
    {
#line 238 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcSlice_16);
    }
#line 238 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv3_STATE_VARIABLE_ProcSlice_16));
#line 238 "slice_and_dice.m"
  }
#line 238 "slice_and_dice.m"
}

#line 234 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1(
#line 234 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 234 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 234 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 234 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 234 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 234 "slice_and_dice.m"
{
#line 234 "slice_and_dice.m"
  {
#line 234 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 234 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcSlice_16;

#line 234 "slice_and_dice.m"
    {
#line 234 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_merge_path_port_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcSlice_16);
    }
#line 234 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv1_STATE_VARIABLE_ProcSlice_16));
#line 234 "slice_and_dice.m"
  }
#line 234 "slice_and_dice.m"
}

#line 226 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(
#line 226 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcLabelAndFile_5,
#line 226 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__ProcTraceCounts_6,
#line 226 "slice_and_dice.m"
  MR_Word mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13,
#line 226 "slice_and_dice.m"
  MR_Word * mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14)
#line 226 "slice_and_dice.m"
{
#line 230 "slice_and_dice.m"
  {
#line 230 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 230 "slice_and_dice.m"
    MR_String mdbcomp__slice_and_dice__FileName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_5, (MR_Integer) 1)));
#line 230 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_5, (MR_Integer) 2)));
#line 231 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice___ModuleNameSym_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ProcLabelAndFile_5, (MR_Integer) 0)));
#line 237 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__FoundProcSlice_11;
#line 233 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__conv0_FoundProcSlice_11;

#line 233 "slice_and_dice.m"
    {
#line 233 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_10)), &mdbcomp__slice_and_dice__conv0_FoundProcSlice_11);
    }
#line 233 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 233 "slice_and_dice.m"
      {
#line 233 "slice_and_dice.m"
        mdbcomp__slice_and_dice__FoundProcSlice_11 = ((MR_Word) mdbcomp__slice_and_dice__conv0_FoundProcSlice_11);
#line 233 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = MR_TRUE;
#line 233 "slice_and_dice.m"
      }
#line 237 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 235 "slice_and_dice.m"
      {
#line 235 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_29_29;
#line 235 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__MergedProcSlice_12;
#line 235 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_15_15;
#line 234 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv2_MergedProcSlice_12;

#line 234 "slice_and_dice.m"
        {
#line 234 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 234 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_15_15, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[1]));
#line 234 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_15_15, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_1));
#line 234 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 234 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_15_15, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_9));
#line 234 "slice_and_dice.m"
        }
#line 9333 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeInfo_29_29 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0];
#line 234 "slice_and_dice.m"
        {
#line 234 "slice_and_dice.m"
          mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_29_29, mdbcomp__slice_and_dice__V_15_15, mdbcomp__slice_and_dice__ProcTraceCounts_6, ((MR_Box) (mdbcomp__slice_and_dice__FoundProcSlice_11)), &mdbcomp__slice_and_dice__conv2_MergedProcSlice_12);
        }
#line 234 "slice_and_dice.m"
        mdbcomp__slice_and_dice__MergedProcSlice_12 = ((MR_Word) mdbcomp__slice_and_dice__conv2_MergedProcSlice_12);
#line 236 "slice_and_dice.m"
        {
#line 236 "slice_and_dice.m"
          mercury__map__det_update_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_29_29, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_10)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcSlice_12)), mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13, mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14);
#line 236 "slice_and_dice.m"
          return;
        }
#line 235 "slice_and_dice.m"
      }
#line 237 "slice_and_dice.m"
    else
#line 239 "slice_and_dice.m"
      {
#line 239 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_35_35;
#line 239 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TypeInfo_38_38;
#line 239 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_17_17;
#line 239 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_18_18;
#line 239 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__MergedProcSlice_20;
#line 238 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv4_MergedProcSlice_20;

#line 238 "slice_and_dice.m"
        {
#line 238 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 238 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_6[1]));
#line 238 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 1) = ((MR_Box) (mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0_2));
#line 238 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 238 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_17_17, 3) = ((MR_Box) (mdbcomp__slice_and_dice__FileName_9));
#line 238 "slice_and_dice.m"
        }
#line 9382 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeCtorInfo_35_35 = (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_path_port_0;
#line 239 "slice_and_dice.m"
        {
#line 239 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_18_18 = mercury__map__init_0_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_35_35, (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0);
        }
#line 9389 "mdbcomp.slice_and_dice.c"
        mdbcomp__slice_and_dice__TypeInfo_38_38 = (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0];
#line 238 "slice_and_dice.m"
        {
#line 238 "slice_and_dice.m"
          mercury__map__foldl_4_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_35_35, (MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0, mdbcomp__slice_and_dice__TypeInfo_38_38, mdbcomp__slice_and_dice__V_17_17, mdbcomp__slice_and_dice__ProcTraceCounts_6, ((MR_Box) (mdbcomp__slice_and_dice__V_18_18)), &mdbcomp__slice_and_dice__conv4_MergedProcSlice_20);
        }
#line 238 "slice_and_dice.m"
        mdbcomp__slice_and_dice__MergedProcSlice_20 = ((MR_Word) mdbcomp__slice_and_dice__conv4_MergedProcSlice_20);
#line 240 "slice_and_dice.m"
        {
#line 240 "slice_and_dice.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, mdbcomp__slice_and_dice__TypeInfo_38_38, ((MR_Box) (mdbcomp__slice_and_dice__ProcLabel_10)), ((MR_Box) (mdbcomp__slice_and_dice__MergedProcSlice_20)), mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_0_13, mdbcomp__slice_and_dice__STATE_VARIABLE_SliceProcMap_14);
#line 240 "slice_and_dice.m"
          return;
        }
#line 239 "slice_and_dice.m"
      }
#line 230 "slice_and_dice.m"
  }
#line 226 "slice_and_dice.m"
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
#line 919 "slice_and_dice.m"
  {
#line 919 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__FailCount_5 > (MR_Integer) 0);
#line 919 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__R_6;

#line 917 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 917 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__PassCount_4 == (MR_Integer) 0);
#line 919 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 918 "slice_and_dice.m"
      mdbcomp__slice_and_dice__R_6 = (MR_Float) 1.0000000000000000;
#line 919 "slice_and_dice.m"
    else
#line 920 "slice_and_dice.m"
      mdbcomp__slice_and_dice__R_6 = (MR_Float) 0.0000000000000000;
#line 919 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__R_6;
#line 919 "slice_and_dice.m"
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
#line 906 "slice_and_dice.m"
  {
#line 906 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__FailCount_8 == (MR_Integer) 0);
#line 906 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__R_10;

#line 906 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 905 "slice_and_dice.m"
      mdbcomp__slice_and_dice__R_10 = (MR_Float) 0.0000000000000000;
#line 906 "slice_and_dice.m"
    else
#line 911 "slice_and_dice.m"
      {
#line 911 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__PassNorm_11;
#line 911 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__FailNorm_12;
#line 911 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_15_15;
#line 911 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_16_16;
#line 911 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_17_17;
#line 911 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_18_18;

#line 907 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__PassTests_7 == (MR_Integer) 0);
#line 909 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 908 "slice_and_dice.m"
          mdbcomp__slice_and_dice__PassNorm_11 = (MR_Float) 0.0000000000000000;
#line 909 "slice_and_dice.m"
        else
#line 910 "slice_and_dice.m"
          {
#line 910 "slice_and_dice.m"
            MR_Float mdbcomp__slice_and_dice__V_13_13;
#line 910 "slice_and_dice.m"
            MR_Float mdbcomp__slice_and_dice__V_14_14;

#line 910 "slice_and_dice.m"
            {
#line 910 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_13_13 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__PassCount_6);
            }
#line 910 "slice_and_dice.m"
            {
#line 910 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_14_14 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__PassTests_7);
            }
#line 910 "slice_and_dice.m"
            {
#line 910 "slice_and_dice.m"
              mdbcomp__slice_and_dice__PassNorm_11 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__V_13_13, mdbcomp__slice_and_dice__V_14_14);
            }
#line 910 "slice_and_dice.m"
          }
#line 912 "slice_and_dice.m"
        {
#line 912 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_15_15 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__FailCount_8);
        }
#line 912 "slice_and_dice.m"
        {
#line 912 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_16_16 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__FailTests_9);
        }
#line 912 "slice_and_dice.m"
        {
#line 912 "slice_and_dice.m"
          mdbcomp__slice_and_dice__FailNorm_12 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__V_15_15, mdbcomp__slice_and_dice__V_16_16);
        }
#line 913 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_18_18 = (mdbcomp__slice_and_dice__FailNorm_12 - mdbcomp__slice_and_dice__PassNorm_11);
#line 913 "slice_and_dice.m"
        {
#line 913 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_17_17 = mercury__float__max_2_f_0(mdbcomp__slice_and_dice__V_18_18, (MR_Float) 0.0000000000000000);
        }
#line 913 "slice_and_dice.m"
        {
#line 913 "slice_and_dice.m"
          return mdbcomp__slice_and_dice__R_10 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__V_17_17, mdbcomp__slice_and_dice__FailNorm_12);
        }
#line 911 "slice_and_dice.m"
      }
#line 906 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__R_10;
#line 906 "slice_and_dice.m"
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
#line 889 "slice_and_dice.m"
  {
#line 889 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 889 "slice_and_dice.m"
    MR_Float mdbcomp__slice_and_dice__R1_6;
#line 889 "slice_and_dice.m"
    MR_Integer mdbcomp__slice_and_dice__Denominator_7 = (mdbcomp__slice_and_dice__PassCount_4 + mdbcomp__slice_and_dice__FailCount_5);

#line 891 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__Denominator_7 == (MR_Integer) 0);
#line 891 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 897 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 892 "slice_and_dice.m"
      {
#line 892 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__R_8;
#line 892 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_9_9;
#line 892 "slice_and_dice.m"
        MR_Float mdbcomp__slice_and_dice__V_10_10;

#line 892 "slice_and_dice.m"
        {
#line 892 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_9_9 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__FailCount_5);
        }
#line 892 "slice_and_dice.m"
        {
#line 892 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_10_10 = mercury__float__float_1_f_0(mdbcomp__slice_and_dice__Denominator_7);
        }
#line 892 "slice_and_dice.m"
        {
#line 892 "slice_and_dice.m"
          mdbcomp__slice_and_dice__R_8 = mercury__float__f_slash_2_f_0(mdbcomp__slice_and_dice__V_9_9, mdbcomp__slice_and_dice__V_10_10);
        }
#line 893 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__R_8 >= ((MR_Float) 0.20000000000000001));
#line 895 "slice_and_dice.m"
        if (mdbcomp__slice_and_dice__succeeded)
#line 894 "slice_and_dice.m"
          mdbcomp__slice_and_dice__R1_6 = mdbcomp__slice_and_dice__R_8;
#line 895 "slice_and_dice.m"
        else
#line 895 "slice_and_dice.m"
          mdbcomp__slice_and_dice__R1_6 = (MR_Float) 0.0000000000000000;
#line 892 "slice_and_dice.m"
      }
#line 897 "slice_and_dice.m"
    else
#line 900 "slice_and_dice.m"
      mdbcomp__slice_and_dice__R1_6 = (MR_Float) 0.0000000000000000;
#line 889 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__R1_6;
#line 889 "slice_and_dice.m"
  }
#line 167 "slice_and_dice.m"
}

#line 682 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3(
#line 682 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 682 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 682 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 682 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3)
#line 682 "slice_and_dice.m"
{
#line 682 "slice_and_dice.m"
  {
#line 682 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 682 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv2_Result_8;

#line 682 "slice_and_dice.m"
    {
#line 682 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_label_count_compare_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), &mdbcomp__slice_and_dice__conv2_Result_8);
    }
#line 682 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_Result_8));
#line 682 "slice_and_dice.m"
  }
#line 682 "slice_and_dice.m"
}

#line 677 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2(
#line 677 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 677 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 677 "slice_and_dice.m"
{
#line 677 "slice_and_dice.m"
  {
#line 677 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 677 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

#line 677 "slice_and_dice.m"
    {
#line 677 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 677 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 677 "slice_and_dice.m"
  }
#line 677 "slice_and_dice.m"
}

#line 824 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_1(
#line 824 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 824 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 824 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 824 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 824 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 824 "slice_and_dice.m"
{
#line 824 "slice_and_dice.m"
  {
#line 824 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 824 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11;

#line 824 "slice_and_dice.m"
    {
#line 824 "slice_and_dice.m"
      mdbcomp__slice_and_dice__append_dice_label_counts_4_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11);
    }
#line 824 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11));
#line 824 "slice_and_dice.m"
  }
#line 824 "slice_and_dice.m"
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
#line 697 "slice_and_dice.m"
  {
#line 697 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 815 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_23_66;
#line 815 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Chrs_46;
#line 815 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ChrSet_47;
#line 815 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_48_48;

#line 816 "slice_and_dice.m"
    {
#line 816 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Chrs_46 = mercury__string__to_char_list_1_f_0(mdbcomp__slice_and_dice__SortStr_15);
    }
#line 9764 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_23_66 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 817 "slice_and_dice.m"
    {
#line 817 "slice_and_dice.m"
      mdbcomp__slice_and_dice__ChrSet_47 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_23_66, mdbcomp__slice_and_dice__Chrs_46);
    }
#line 819 "slice_and_dice.m"
    {
#line 819 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_48_48 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_23_66, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[14]));
    }
#line 818 "slice_and_dice.m"
    {
#line 818 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__set__subset_2_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_23_66, mdbcomp__slice_and_dice__ChrSet_47, mdbcomp__slice_and_dice__V_48_48);
    }
#line 697 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 671 "slice_and_dice.m"
      {
#line 671 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ReadDiceResult_24;

#line 671 "slice_and_dice.m"
        {
#line 671 "slice_and_dice.m"
          mdbcomp__slice_and_dice__read_dice_5_p_0(mdbcomp__slice_and_dice__PassFile_13, mdbcomp__slice_and_dice__FailFile_14, &mdbcomp__slice_and_dice__ReadDiceResult_24);
        }
#line 693 "slice_and_dice.m"
        if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadDiceResult_24)) == (MR_mktag((MR_Integer) 1))))
#line 694 "slice_and_dice.m"
          {
#line 694 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Problem_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadDiceResult_24, (MR_Integer) 0)));
#line 695 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__DiceStr_21 = (MR_String) "";
#line 694 "slice_and_dice.m"
          }
#line 693 "slice_and_dice.m"
        else
#line 673 "slice_and_dice.m"
          {
#line 673 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_44_44;
#line 673 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Dice_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadDiceResult_24, (MR_Integer) 0)));
#line 673 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalPassTests_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_25, (MR_Integer) 0)));
#line 673 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__DiceProcMap_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_25, (MR_Integer) 2)));
#line 673 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__LabelCounts_29;
#line 673 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__FilteredLabelCounts_30;
#line 673 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__SortedLabelCounts_31;
#line 673 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__TopNLabelCounts_33;
#line 673 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_38_38;
#line 674 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalFailTests_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_25, (MR_Integer) 1)));
#line 824 "slice_and_dice.m"
            MR_Box mdbcomp__slice_and_dice__conv1_LabelCounts_29;
#line 686 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Taken_32;

#line 824 "slice_and_dice.m"
            {
#line 824 "slice_and_dice.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_2[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[11], mdbcomp__slice_and_dice__DiceProcMap_28, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdbcomp__slice_and_dice__conv1_LabelCounts_29);
            }
#line 824 "slice_and_dice.m"
            mdbcomp__slice_and_dice__LabelCounts_29 = ((MR_Word) mdbcomp__slice_and_dice__conv1_LabelCounts_29);
#line 676 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__Module_20, (MR_String) "") == 0);
#line 676 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 679 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 677 "slice_and_dice.m"
              {
#line 677 "slice_and_dice.m"
                MR_Word mdbcomp__slice_and_dice__V_37_37;

#line 677 "slice_and_dice.m"
                {
#line 677 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 677 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[1]));
#line 677 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_2));
#line 677 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 677 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Module_20));
#line 677 "slice_and_dice.m"
                }
#line 677 "slice_and_dice.m"
                {
#line 677 "slice_and_dice.m"
                  mercury__list__filter_3_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0, mdbcomp__slice_and_dice__V_37_37, mdbcomp__slice_and_dice__LabelCounts_29, &mdbcomp__slice_and_dice__FilteredLabelCounts_30);
                }
#line 677 "slice_and_dice.m"
              }
#line 679 "slice_and_dice.m"
            else
#line 680 "slice_and_dice.m"
              mdbcomp__slice_and_dice__FilteredLabelCounts_30 = mdbcomp__slice_and_dice__LabelCounts_29;
#line 682 "slice_and_dice.m"
            {
#line 682 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 682 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[4]));
#line 682 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_dice_to_string_12_p_0_3));
#line 682 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 682 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_38_38, 3) = ((MR_Box) (mdbcomp__slice_and_dice__SortStr_15));
#line 682 "slice_and_dice.m"
            }
#line 9889 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__TypeCtorInfo_44_44 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;
#line 682 "slice_and_dice.m"
            {
#line 682 "slice_and_dice.m"
              mercury__list__sort_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_44_44, mdbcomp__slice_and_dice__V_38_38, mdbcomp__slice_and_dice__FilteredLabelCounts_30, &mdbcomp__slice_and_dice__SortedLabelCounts_31);
            }
#line 684 "slice_and_dice.m"
            {
#line 684 "slice_and_dice.m"
              mdbcomp__slice_and_dice__succeeded = mercury__list__take_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_44_44, mdbcomp__slice_and_dice__MaxRow_16, mdbcomp__slice_and_dice__SortedLabelCounts_31, &mdbcomp__slice_and_dice__Taken_32);
            }
#line 686 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 685 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__Taken_32;
#line 686 "slice_and_dice.m"
            else
#line 687 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__SortedLabelCounts_31;
#line 689 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Problem_22 = (MR_String) "";
#line 690 "slice_and_dice.m"
            {
#line 690 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__DiceStr_21 = mdbcomp__slice_and_dice__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_f_0(mdbcomp__slice_and_dice__TopNLabelCounts_33, mdbcomp__slice_and_dice__TotalPassTests_26, mdbcomp__slice_and_dice__MaybeMaxPredColumns_17, mdbcomp__slice_and_dice__MaybeMaxPathColumns_18, mdbcomp__slice_and_dice__MaybeMaxFileColumns_19);
            }
#line 673 "slice_and_dice.m"
          }
#line 671 "slice_and_dice.m"
      }
#line 697 "slice_and_dice.m"
    else
#line 698 "slice_and_dice.m"
      {
#line 698 "slice_and_dice.m"
        *mdbcomp__slice_and_dice__Problem_22 = (MR_String) "Invalid sort string";
#line 699 "slice_and_dice.m"
        *mdbcomp__slice_and_dice__DiceStr_21 = (MR_String) "";
#line 698 "slice_and_dice.m"
      }
#line 697 "slice_and_dice.m"
  }
#line 158 "slice_and_dice.m"
}

#line 328 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_2(
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 328 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 328 "slice_and_dice.m"
{
#line 328 "slice_and_dice.m"
  {
#line 328 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 328 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv2_STATE_VARIABLE_DiceProcMap_16;

#line 328 "slice_and_dice.m"
    {
#line 328 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv2_STATE_VARIABLE_DiceProcMap_16);
    }
#line 328 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_STATE_VARIABLE_DiceProcMap_16));
#line 328 "slice_and_dice.m"
  }
#line 328 "slice_and_dice.m"
}

#line 328 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_dice_5_p_0_1(
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 328 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 328 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 328 "slice_and_dice.m"
{
#line 328 "slice_and_dice.m"
  {
#line 328 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 328 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_DiceProcMap_16;

#line 328 "slice_and_dice.m"
    {
#line 328 "slice_and_dice.m"
      mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_DiceProcMap_16);
    }
#line 328 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_DiceProcMap_16));
#line 328 "slice_and_dice.m"
  }
#line 328 "slice_and_dice.m"
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
#line 276 "slice_and_dice.m"
  {
#line 276 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 276 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ReadPassResult_10;

#line 277 "slice_and_dice.m"
    {
#line 277 "slice_and_dice.m"
      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__slice_and_dice__PassFile_6, &mdbcomp__slice_and_dice__ReadPassResult_10);
    }
#line 295 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadPassResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 296 "slice_and_dice.m"
      {
#line 296 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Problem_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadPassResult_10, (MR_Integer) 0)));

#line 297 "slice_and_dice.m"
        {
#line 297 "slice_and_dice.m"
          MR_Word base;
#line 297 "slice_and_dice.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 297 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_8 = base;
#line 297 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Problem_29));
#line 297 "slice_and_dice.m"
        }
#line 296 "slice_and_dice.m"
      }
#line 295 "slice_and_dice.m"
    else
#line 279 "slice_and_dice.m"
      {
#line 279 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__PassFileType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadPassResult_10, (MR_Integer) 0)));
#line 279 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__PassTraceCounts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadPassResult_10, (MR_Integer) 1)));
#line 279 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ReadFailResult_13;

#line 280 "slice_and_dice.m"
        {
#line 280 "slice_and_dice.m"
          mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__slice_and_dice__FailFile_7, &mdbcomp__slice_and_dice__ReadFailResult_13);
        }
#line 291 "slice_and_dice.m"
        if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadFailResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 292 "slice_and_dice.m"
          {
#line 292 "slice_and_dice.m"
            MR_String mdbcomp__slice_and_dice__Problem_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadFailResult_13, (MR_Integer) 0)));

#line 293 "slice_and_dice.m"
            {
#line 293 "slice_and_dice.m"
              MR_Word base;
#line 293 "slice_and_dice.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 293 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__Result_8 = base;
#line 293 "slice_and_dice.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Problem_21));
#line 293 "slice_and_dice.m"
            }
#line 292 "slice_and_dice.m"
          }
#line 291 "slice_and_dice.m"
        else
#line 282 "slice_and_dice.m"
          {
#line 282 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__FailFileType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadFailResult_13, (MR_Integer) 0)));
#line 282 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__FailTraceCounts_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadFailResult_13, (MR_Integer) 1)));
#line 282 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__PassDiceProcMap_16;
#line 282 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__DiceProcMap_17;
#line 282 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalPassTests_18;
#line 282 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalFailTests_19;
#line 282 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Dice_20;
#line 282 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_27_27;
#line 328 "slice_and_dice.m"
            MR_Box mdbcomp__slice_and_dice__conv1_PassDiceProcMap_16;
#line 328 "slice_and_dice.m"
            MR_Box mdbcomp__slice_and_dice__conv3_DiceProcMap_17;

#line 283 "slice_and_dice.m"
            {
#line 283 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_27_27 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[1]);
            }
#line 328 "slice_and_dice.m"
            {
#line 328 "slice_and_dice.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[1], mdbcomp__slice_and_dice__PassTraceCounts_12, ((MR_Box) (mdbcomp__slice_and_dice__V_27_27)), &mdbcomp__slice_and_dice__conv1_PassDiceProcMap_16);
            }
#line 328 "slice_and_dice.m"
            mdbcomp__slice_and_dice__PassDiceProcMap_16 = ((MR_Word) mdbcomp__slice_and_dice__conv1_PassDiceProcMap_16);
#line 328 "slice_and_dice.m"
            {
#line 328 "slice_and_dice.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[4], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_5[2], mdbcomp__slice_and_dice__FailTraceCounts_15, ((MR_Box) (mdbcomp__slice_and_dice__PassDiceProcMap_16)), &mdbcomp__slice_and_dice__conv3_DiceProcMap_17);
            }
#line 328 "slice_and_dice.m"
            mdbcomp__slice_and_dice__DiceProcMap_17 = ((MR_Word) mdbcomp__slice_and_dice__conv3_DiceProcMap_17);
#line 287 "slice_and_dice.m"
            {
#line 287 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TotalPassTests_18 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(mdbcomp__slice_and_dice__PassFileType_11);
            }
#line 288 "slice_and_dice.m"
            {
#line 288 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TotalFailTests_19 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(mdbcomp__slice_and_dice__FailFileType_14);
            }
#line 289 "slice_and_dice.m"
            {
#line 289 "slice_and_dice.m"
              mdbcomp__slice_and_dice__Dice_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 289 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_20, 0) = ((MR_Box) (mdbcomp__slice_and_dice__TotalPassTests_18));
#line 289 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_20, 1) = ((MR_Box) (mdbcomp__slice_and_dice__TotalFailTests_19));
#line 289 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Dice_20, 2) = ((MR_Box) (mdbcomp__slice_and_dice__DiceProcMap_17));
#line 289 "slice_and_dice.m"
            }
#line 290 "slice_and_dice.m"
            {
#line 290 "slice_and_dice.m"
              MR_Word base;
#line 290 "slice_and_dice.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 290 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__Result_8 = base;
#line 290 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Dice_20));
#line 290 "slice_and_dice.m"
            }
#line 282 "slice_and_dice.m"
          }
#line 279 "slice_and_dice.m"
      }
#line 276 "slice_and_dice.m"
  }
#line 128 "slice_and_dice.m"
}

#line 415 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4(
#line 415 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 415 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 415 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 415 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_3)
#line 415 "slice_and_dice.m"
{
#line 415 "slice_and_dice.m"
  {
#line 415 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 415 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv2_Result_8;

#line 415 "slice_and_dice.m"
    {
#line 415 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_label_count_compare_4_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), &mdbcomp__slice_and_dice__conv2_Result_8);
    }
#line 415 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_3 = ((MR_Box) (mdbcomp__slice_and_dice__conv2_Result_8));
#line 415 "slice_and_dice.m"
  }
#line 415 "slice_and_dice.m"
}

#line 409 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_3(
#line 409 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 409 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 409 "slice_and_dice.m"
{
#line 409 "slice_and_dice.m"
  {
#line 409 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 409 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

#line 409 "slice_and_dice.m"
    {
#line 409 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__slice_label_count_is_zero_1_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 409 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 409 "slice_and_dice.m"
  }
#line 409 "slice_and_dice.m"
}

#line 402 "slice_and_dice.m"
static MR_bool MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2(
#line 402 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 402 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1)
#line 402 "slice_and_dice.m"
{
#line 402 "slice_and_dice.m"
  {
#line 402 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 402 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;

#line 402 "slice_and_dice.m"
    {
#line 402 "slice_and_dice.m"
      return mdbcomp__slice_and_dice__succeeded = mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__closure, (MR_Integer) 3))), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1));
    }
#line 402 "slice_and_dice.m"
    return mdbcomp__slice_and_dice__succeeded;
#line 402 "slice_and_dice.m"
  }
#line 402 "slice_and_dice.m"
}

#line 585 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_1(
#line 585 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 585 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 585 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 585 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 585 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 585 "slice_and_dice.m"
{
#line 585 "slice_and_dice.m"
  {
#line 585 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 585 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11;

#line 585 "slice_and_dice.m"
    {
#line 585 "slice_and_dice.m"
      mdbcomp__slice_and_dice__append_slice_label_counts_4_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11);
    }
#line 585 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_LabelCounts_11));
#line 585 "slice_and_dice.m"
  }
#line 585 "slice_and_dice.m"
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
#line 429 "slice_and_dice.m"
  {
#line 429 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 572 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_18_65;
#line 572 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Chrs0_50;
#line 572 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__Chrs_52;
#line 572 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ChrSet_53;
#line 572 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__V_55_55;
#line 576 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ChrsPrime_51;
#line 574 "slice_and_dice.m"
    MR_Char mdbcomp__slice_and_dice__V_54_54;

#line 573 "slice_and_dice.m"
    {
#line 573 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Chrs0_50 = mercury__string__to_char_list_1_f_0(mdbcomp__slice_and_dice__SortStr0_13);
    }
#line 574 "slice_and_dice.m"
    mdbcomp__slice_and_dice__succeeded = ((MR_tag((MR_Word) mdbcomp__slice_and_dice__Chrs0_50)) == (MR_mktag((MR_Integer) 1)));
#line 574 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 574 "slice_and_dice.m"
      {
#line 574 "slice_and_dice.m"
        mdbcomp__slice_and_dice__V_54_54 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Chrs0_50, (MR_Integer) 0)));
#line 574 "slice_and_dice.m"
        mdbcomp__slice_and_dice__ChrsPrime_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__Chrs0_50, (MR_Integer) 1)));
#line 574 "slice_and_dice.m"
        mdbcomp__slice_and_dice__succeeded = (mdbcomp__slice_and_dice__V_54_54 == (MR_Char) 122);
#line 574 "slice_and_dice.m"
      }
#line 576 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 575 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Chrs_52 = mdbcomp__slice_and_dice__ChrsPrime_51;
#line 576 "slice_and_dice.m"
    else
#line 577 "slice_and_dice.m"
      mdbcomp__slice_and_dice__Chrs_52 = mdbcomp__slice_and_dice__Chrs0_50;
#line 10362 "mdbcomp.slice_and_dice.c"
    mdbcomp__slice_and_dice__TypeCtorInfo_18_65 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 579 "slice_and_dice.m"
    {
#line 579 "slice_and_dice.m"
      mdbcomp__slice_and_dice__ChrSet_53 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_18_65, mdbcomp__slice_and_dice__Chrs_52);
    }
#line 580 "slice_and_dice.m"
    {
#line 580 "slice_and_dice.m"
      mdbcomp__slice_and_dice__V_55_55 = mercury__set__list_to_set_1_f_0(mdbcomp__slice_and_dice__TypeCtorInfo_18_65, (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__slice_and_dice_scalar_common_2[6]));
    }
#line 580 "slice_and_dice.m"
    {
#line 580 "slice_and_dice.m"
      mdbcomp__slice_and_dice__succeeded = mercury__set__subset_2_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_18_65, mdbcomp__slice_and_dice__ChrSet_53, mdbcomp__slice_and_dice__V_55_55);
    }
#line 429 "slice_and_dice.m"
    if (mdbcomp__slice_and_dice__succeeded)
#line 396 "slice_and_dice.m"
      {
#line 396 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__ReadSliceResult_22;

#line 396 "slice_and_dice.m"
        {
#line 396 "slice_and_dice.m"
          mdbcomp__slice_and_dice__read_slice_4_p_0(mdbcomp__slice_and_dice__File_12, &mdbcomp__slice_and_dice__ReadSliceResult_22);
        }
#line 425 "slice_and_dice.m"
        if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadSliceResult_22)) == (MR_mktag((MR_Integer) 1))))
#line 426 "slice_and_dice.m"
          {
#line 426 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Problem_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadSliceResult_22, (MR_Integer) 0)));
#line 427 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__SliceStr_19 = (MR_String) "";
#line 426 "slice_and_dice.m"
          }
#line 425 "slice_and_dice.m"
        else
#line 398 "slice_and_dice.m"
          {
#line 398 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__TypeCtorInfo_48_48;
#line 398 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Slice_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadSliceResult_22, (MR_Integer) 0)));
#line 398 "slice_and_dice.m"
            MR_Integer mdbcomp__slice_and_dice__TotalTests_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_23, (MR_Integer) 0)));
#line 398 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__SliceProcMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_23, (MR_Integer) 1)));
#line 398 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__LabelCounts_26;
#line 398 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27;
#line 398 "slice_and_dice.m"
            MR_String mdbcomp__slice_and_dice__SortStr_29;
#line 398 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__FilteredLabelCounts_30;
#line 398 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__SortedLabelCounts_31;
#line 398 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__TopNLabelCounts_33;
#line 398 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__V_40_40;
#line 585 "slice_and_dice.m"
            MR_Box mdbcomp__slice_and_dice__conv1_LabelCounts_26;
#line 411 "slice_and_dice.m"
            MR_String mdbcomp__slice_and_dice__SortStrPrime_28;
#line 419 "slice_and_dice.m"
            MR_Word mdbcomp__slice_and_dice__Taken_32;

#line 585 "slice_and_dice.m"
            {
#line 585 "slice_and_dice.m"
              mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_2[0], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[9], mdbcomp__slice_and_dice__SliceProcMap_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdbcomp__slice_and_dice__conv1_LabelCounts_26);
            }
#line 585 "slice_and_dice.m"
            mdbcomp__slice_and_dice__LabelCounts_26 = ((MR_Word) mdbcomp__slice_and_dice__conv1_LabelCounts_26);
#line 401 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = (strcmp(mdbcomp__slice_and_dice__Module_18, (MR_String) "") == 0);
#line 401 "slice_and_dice.m"
            mdbcomp__slice_and_dice__succeeded = !(mdbcomp__slice_and_dice__succeeded);
#line 404 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 402 "slice_and_dice.m"
              {
#line 402 "slice_and_dice.m"
                MR_Word mdbcomp__slice_and_dice__V_37_37;

#line 402 "slice_and_dice.m"
                {
#line 402 "slice_and_dice.m"
                  mdbcomp__slice_and_dice__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 402 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_4[0]));
#line 402 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_2));
#line 402 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 402 "slice_and_dice.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_37_37, 3) = ((MR_Box) (mdbcomp__slice_and_dice__Module_18));
#line 402 "slice_and_dice.m"
                }
#line 402 "slice_and_dice.m"
                {
#line 402 "slice_and_dice.m"
                  mercury__list__filter_3_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0, mdbcomp__slice_and_dice__V_37_37, mdbcomp__slice_and_dice__LabelCounts_26, &mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27);
                }
#line 402 "slice_and_dice.m"
              }
#line 404 "slice_and_dice.m"
            else
#line 405 "slice_and_dice.m"
              mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27 = mdbcomp__slice_and_dice__LabelCounts_26;
#line 407 "slice_and_dice.m"
            {
#line 407 "slice_and_dice.m"
              mdbcomp__slice_and_dice__succeeded = mercury__string__append_3_p_1((MR_String) "z", &mdbcomp__slice_and_dice__SortStrPrime_28, mdbcomp__slice_and_dice__SortStr0_13);
            }
#line 411 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 408 "slice_and_dice.m"
              {
#line 408 "slice_and_dice.m"
                mdbcomp__slice_and_dice__SortStr_29 = mdbcomp__slice_and_dice__SortStrPrime_28;
#line 409 "slice_and_dice.m"
                {
#line 409 "slice_and_dice.m"
                  mercury__list__filter_3_p_0((MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[10], mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27, &mdbcomp__slice_and_dice__FilteredLabelCounts_30);
                }
#line 408 "slice_and_dice.m"
              }
#line 411 "slice_and_dice.m"
            else
#line 412 "slice_and_dice.m"
              {
#line 412 "slice_and_dice.m"
                mdbcomp__slice_and_dice__SortStr_29 = mdbcomp__slice_and_dice__SortStr0_13;
#line 413 "slice_and_dice.m"
                mdbcomp__slice_and_dice__FilteredLabelCounts_30 = mdbcomp__slice_and_dice__ModuleFilteredLabelCounts_27;
#line 412 "slice_and_dice.m"
              }
#line 415 "slice_and_dice.m"
            {
#line 415 "slice_and_dice.m"
              mdbcomp__slice_and_dice__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 415 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_40_40, 0) = ((MR_Box) (&mdbcomp__slice_and_dice_scalar_common_3[2]));
#line 415 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_40_40, 1) = ((MR_Box) (mdbcomp__slice_and_dice__read_slice_to_string_11_p_0_4));
#line 415 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 415 "slice_and_dice.m"
              MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__V_40_40, 3) = ((MR_Box) (mdbcomp__slice_and_dice__SortStr_29));
#line 415 "slice_and_dice.m"
            }
#line 10519 "mdbcomp.slice_and_dice.c"
            mdbcomp__slice_and_dice__TypeCtorInfo_48_48 = (MR_Word) &mdbcomp__slice_and_dice__mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;
#line 415 "slice_and_dice.m"
            {
#line 415 "slice_and_dice.m"
              mercury__list__sort_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_48_48, mdbcomp__slice_and_dice__V_40_40, mdbcomp__slice_and_dice__FilteredLabelCounts_30, &mdbcomp__slice_and_dice__SortedLabelCounts_31);
            }
#line 417 "slice_and_dice.m"
            {
#line 417 "slice_and_dice.m"
              mdbcomp__slice_and_dice__succeeded = mercury__list__take_3_p_0(mdbcomp__slice_and_dice__TypeCtorInfo_48_48, mdbcomp__slice_and_dice__MaxRows_14, mdbcomp__slice_and_dice__SortedLabelCounts_31, &mdbcomp__slice_and_dice__Taken_32);
            }
#line 419 "slice_and_dice.m"
            if (mdbcomp__slice_and_dice__succeeded)
#line 418 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__Taken_32;
#line 419 "slice_and_dice.m"
            else
#line 420 "slice_and_dice.m"
              mdbcomp__slice_and_dice__TopNLabelCounts_33 = mdbcomp__slice_and_dice__SortedLabelCounts_31;
#line 422 "slice_and_dice.m"
            *mdbcomp__slice_and_dice__Problem_20 = (MR_String) "";
#line 423 "slice_and_dice.m"
            {
#line 423 "slice_and_dice.m"
              *mdbcomp__slice_and_dice__SliceStr_19 = mdbcomp__slice_and_dice__format_slice_label_counts_5_f_0(mdbcomp__slice_and_dice__TopNLabelCounts_33, mdbcomp__slice_and_dice__TotalTests_24, mdbcomp__slice_and_dice__MaybeMaxPredColumns_15, mdbcomp__slice_and_dice__MaybeMaxPathColumns_16, mdbcomp__slice_and_dice__MaybeMaxFileColumns_17);
            }
#line 398 "slice_and_dice.m"
          }
#line 396 "slice_and_dice.m"
      }
#line 429 "slice_and_dice.m"
    else
#line 430 "slice_and_dice.m"
      {
#line 430 "slice_and_dice.m"
        *mdbcomp__slice_and_dice__Problem_20 = (MR_String) "Invalid sort string";
#line 431 "slice_and_dice.m"
        *mdbcomp__slice_and_dice__SliceStr_19 = (MR_String) "";
#line 430 "slice_and_dice.m"
      }
#line 429 "slice_and_dice.m"
  }
#line 83 "slice_and_dice.m"
}

#line 224 "slice_and_dice.m"
static void MR_CALL 
mdbcomp__slice_and_dice__read_slice_4_p_0_1(
#line 224 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__closure_arg,
#line 224 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_1,
#line 224 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_2,
#line 224 "slice_and_dice.m"
  MR_Box mdbcomp__slice_and_dice__wrapper_arg_3,
#line 224 "slice_and_dice.m"
  MR_Box * mdbcomp__slice_and_dice__wrapper_arg_4)
#line 224 "slice_and_dice.m"
{
#line 224 "slice_and_dice.m"
  {
#line 224 "slice_and_dice.m"
    MR_Box mdbcomp__slice_and_dice__closure = mdbcomp__slice_and_dice__closure_arg;
#line 224 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_SliceProcMap_14;

#line 224 "slice_and_dice.m"
    {
#line 224 "slice_and_dice.m"
      mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_p_0(((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_1), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_2), ((MR_Word) mdbcomp__slice_and_dice__wrapper_arg_3), &mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_SliceProcMap_14);
    }
#line 224 "slice_and_dice.m"
    *mdbcomp__slice_and_dice__wrapper_arg_4 = ((MR_Box) (mdbcomp__slice_and_dice__conv0_STATE_VARIABLE_SliceProcMap_14));
#line 224 "slice_and_dice.m"
  }
#line 224 "slice_and_dice.m"
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
#line 205 "slice_and_dice.m"
  {
#line 205 "slice_and_dice.m"
    MR_bool mdbcomp__slice_and_dice__succeeded;
#line 205 "slice_and_dice.m"
    MR_Word mdbcomp__slice_and_dice__ReadResult_8;

#line 206 "slice_and_dice.m"
    {
#line 206 "slice_and_dice.m"
      mdbcomp__trace_counts__read_trace_counts_source_4_p_0(mdbcomp__slice_and_dice__File_5, &mdbcomp__slice_and_dice__ReadResult_8);
    }
#line 213 "slice_and_dice.m"
    if (((MR_tag((MR_Word) mdbcomp__slice_and_dice__ReadResult_8)) == (MR_mktag((MR_Integer) 1))))
#line 214 "slice_and_dice.m"
      {
#line 214 "slice_and_dice.m"
        MR_String mdbcomp__slice_and_dice__Problem_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__slice_and_dice__ReadResult_8, (MR_Integer) 0)));

#line 215 "slice_and_dice.m"
        {
#line 215 "slice_and_dice.m"
          MR_Word base;
#line 215 "slice_and_dice.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 215 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_6 = base;
#line 215 "slice_and_dice.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Problem_14));
#line 215 "slice_and_dice.m"
        }
#line 214 "slice_and_dice.m"
      }
#line 213 "slice_and_dice.m"
    else
#line 208 "slice_and_dice.m"
      {
#line 208 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__FileType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadResult_8, (MR_Integer) 0)));
#line 208 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__TraceCounts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__ReadResult_8, (MR_Integer) 1)));
#line 208 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__SliceProcMap_11;
#line 208 "slice_and_dice.m"
        MR_Integer mdbcomp__slice_and_dice__NumTests_12;
#line 208 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__Slice_13;
#line 208 "slice_and_dice.m"
        MR_Word mdbcomp__slice_and_dice__V_18_18;
#line 224 "slice_and_dice.m"
        MR_Box mdbcomp__slice_and_dice__conv1_SliceProcMap_11;

#line 209 "slice_and_dice.m"
        {
#line 209 "slice_and_dice.m"
          mdbcomp__slice_and_dice__V_18_18 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[0]);
        }
#line 224 "slice_and_dice.m"
        {
#line 224 "slice_and_dice.m"
          mercury__map__foldl_4_p_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0, (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[2], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[3], (MR_Word) &mdbcomp__slice_and_dice_scalar_common_1[8], mdbcomp__slice_and_dice__TraceCounts_10, ((MR_Box) (mdbcomp__slice_and_dice__V_18_18)), &mdbcomp__slice_and_dice__conv1_SliceProcMap_11);
        }
#line 224 "slice_and_dice.m"
        mdbcomp__slice_and_dice__SliceProcMap_11 = ((MR_Word) mdbcomp__slice_and_dice__conv1_SliceProcMap_11);
#line 210 "slice_and_dice.m"
        {
#line 210 "slice_and_dice.m"
          mdbcomp__slice_and_dice__NumTests_12 = mdbcomp__trace_counts__num_tests_for_file_type_1_f_0(mdbcomp__slice_and_dice__FileType_9);
        }
#line 211 "slice_and_dice.m"
        {
#line 211 "slice_and_dice.m"
          mdbcomp__slice_and_dice__Slice_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 211 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_13, 0) = ((MR_Box) (mdbcomp__slice_and_dice__NumTests_12));
#line 211 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), mdbcomp__slice_and_dice__Slice_13, 1) = ((MR_Box) (mdbcomp__slice_and_dice__SliceProcMap_11));
#line 211 "slice_and_dice.m"
        }
#line 212 "slice_and_dice.m"
        {
#line 212 "slice_and_dice.m"
          MR_Word base;
#line 212 "slice_and_dice.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 212 "slice_and_dice.m"
          *mdbcomp__slice_and_dice__Result_6 = base;
#line 212 "slice_and_dice.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__slice_and_dice__Slice_13));
#line 212 "slice_and_dice.m"
        }
#line 208 "slice_and_dice.m"
      }
#line 205 "slice_and_dice.m"
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
