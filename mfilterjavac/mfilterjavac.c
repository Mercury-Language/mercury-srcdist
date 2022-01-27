/*
** Automatically generated from `mfilterjavac.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module mfilterjavac. */
/* :- implementation. */

/*
INIT mercury__mfilterjavac__init
ENDINIT
*/

#include "mfilterjavac.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




#line 69 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0;

#line 72 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1;

#line 75 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_begin_or_end_block_0[2];

#line 78 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0[2];

#line 81 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0[2];

#line 84 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0;

#line 87 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_1[1];

#line 90 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1;

#line 93 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_2[1];

#line 96 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2;

#line 99 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0[1];

#line 102 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1[1];

#line 105 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2[1];

#line 108 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_filter_result_0[3];

#line 111 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0[3];

#line 114 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_filter_result_0[3];

#line 117 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_0_0[4];

#line 120 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_0_0[4];

#line 123 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0;

#line 126 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0[1];

#line 129 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0[1];

#line 132 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_0[1];

#line 135 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_0[1];

#line 138 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0;

#line 141 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0;

#line 144 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct2 mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0;

#line 147 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_0[1];

#line 150 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0;

#line 153 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1;

#line 156 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_2[1];

#line 159 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2;

#line 162 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0[1];

#line 165 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1[1];

#line 168 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2[1];

#line 171 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_end_0[3];

#line 174 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0[3];

#line 177 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0[3];

#line 180 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_error_0_0[3];

#line 183 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_error_0_0[3];

#line 186 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0;

#line 189 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0[1];

#line 192 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0[1];

#line 195 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0[1];

#line 198 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0[1];

#line 201 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0;

#line 204 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1;

#line 207 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2;

#line 210 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_line_info_error_type_0[3];

#line 213 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0[3];

#line 216 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0[3];

#line 219 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_mark_0_0[4];

#line 222 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_mark_0_0[4];

#line 225 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0;

#line 228 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0[1];

#line 231 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0[1];

#line 234 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0[1];

#line 237 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_mark_0[1];

#line 240 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0_10001(
#line 243 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 245 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 248 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0_10001(
#line 251 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 253 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 255 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 258 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0_10001(
#line 261 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 263 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 266 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0_10001(
#line 269 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 271 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 273 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 276 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0_10001(
#line 279 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 281 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 284 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_0_0_10001(
#line 287 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 289 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 291 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 294 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0_10001(
#line 297 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 299 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 302 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0_10001(
#line 305 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 307 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 309 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 312 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0_10001(
#line 315 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 317 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 320 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0_10001(
#line 323 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 325 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 327 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 330 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0_10001(
#line 333 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 335 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 338 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0_10001(
#line 341 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 343 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 345 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 348 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0_10001(
#line 351 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 353 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 356 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0_10001(
#line 359 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 361 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 363 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 366 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0_10001(
#line 369 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 371 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 374 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0_10001(
#line 377 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 379 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 381 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 242 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0(
#line 242 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 242 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 242 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 242 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0(
#line 242 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 242 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 168 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0(
#line 168 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 168 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 168 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 168 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0(
#line 168 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_1,
#line 168 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 161 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0(
#line 161 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 161 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 161 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 161 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0(
#line 161 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 161 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 323 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0(
#line 323 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 323 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 323 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 323 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0(
#line 323 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 323 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 173 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0(
#line 173 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 173 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 173 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 173 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0(
#line 173 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 173 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 153 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_0_0(
#line 153 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 153 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 153 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 153 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0(
#line 153 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 153 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 59 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0(
#line 59 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 59 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 59 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 59 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0(
#line 59 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 59 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 250 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0(
#line 250 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 250 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 250 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 250 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0(
#line 250 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_1,
#line 250 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 291 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__create_line_info_4_p_0(
#line 291 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 291 "mfilterjavac.m"
  MR_String mfilterjavac__HeadVar__2_2,
#line 291 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3,
#line 291 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__4_4);

#line 254 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__read_line_marks_6_p_0(
#line 254 "mfilterjavac.m"
  MR_Word mfilterjavac__Stream_7,
#line 254 "mfilterjavac.m"
  MR_Integer mfilterjavac__JavaLineNo_8,
#line 254 "mfilterjavac.m"
  MR_Word mfilterjavac__Marks0_9,
#line 254 "mfilterjavac.m"
  MR_Word * mfilterjavac__MaybeMarks_10);

#line 207 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__maybe_get_line_info_4_p_0(
#line 207 "mfilterjavac.m"
  MR_String mfilterjavac__Filename_5,
#line 207 "mfilterjavac.m"
  MR_Word * mfilterjavac__MaybeInfo_6);

#line 175 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__line_info_translate_5_p_0(
#line 175 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 175 "mfilterjavac.m"
  MR_String mfilterjavac__HeadVar__2_2,
#line 175 "mfilterjavac.m"
  MR_Integer mfilterjavac__HeadVar__3_3,
#line 175 "mfilterjavac.m"
  MR_String * mfilterjavac__Name_4,
#line 175 "mfilterjavac.m"
  MR_Integer * mfilterjavac__Line_5);

#line 142 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__translate_and_outpot_line_5_p_0(
#line 142 "mfilterjavac.m"
  MR_Word mfilterjavac__LineInfo_6,
#line 142 "mfilterjavac.m"
  MR_String mfilterjavac__Filename_7,
#line 142 "mfilterjavac.m"
  MR_Integer mfilterjavac__LineNo_8,
#line 142 "mfilterjavac.m"
  MR_Word mfilterjavac__RestParts_9,
#line 142 "mfilterjavac.m"
  MR_String * mfilterjavac__OutLine_10);

#line 105 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac__filter_lines_5_p_0_1(
#line 105 "mfilterjavac.m"
  MR_Box mfilterjavac__closure_arg,
#line 105 "mfilterjavac.m"
  MR_Box mfilterjavac__wrapper_arg_1);

#line 64 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__filter_lines_5_p_0(
#line 64 "mfilterjavac.m"
  MR_Word * mfilterjavac__Result_6,
#line 64 "mfilterjavac.m"
  MR_Word mfilterjavac__STATE_VARIABLE_Cache_0_18,
#line 64 "mfilterjavac.m"
  MR_Word * mfilterjavac__STATE_VARIABLE_Cache_19);


static /* final */ const MR_Box mfilterjavac_scalar_common_1[2][2];

static /* final */ const MR_Box mfilterjavac_scalar_common_2[2][3];

static /* final */ const MR_Box mfilterjavac_scalar_common_3[2][1];

static /* final */ const MR_Box mfilterjavac_scalar_common_4[1][4];




static /* final */ const MR_Box mfilterjavac_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mfilterjavac__mfilterjavac__type_ctor_info_line_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mfilterjavac_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box mfilterjavac_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mfilterjavac_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mfilterjavac_scalar_common_4[0])),
    ((MR_Box) (mfilterjavac__filter_lines_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mfilterjavac_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mfilterjavac_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};



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



#line 682 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0 = {
  (MR_String) "begin_block",
  (MR_Integer) 0
};

#line 688 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1 = {
  (MR_String) "end_block",
  (MR_Integer) 1
};

#line 694 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_begin_or_end_block_0[2] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1
};

#line 700 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0[2] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1
};

#line 706 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 712 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_begin_or_end_block_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mfilterjavac____Unify____begin_or_end_block_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____begin_or_end_block_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "begin_or_end_block",
  {     mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0 },
  {     mfilterjavac__mfilterjavac__enum_value_ordered_begin_or_end_block_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0
};

#line 729 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0 = {
  (MR_String) "ok",
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

#line 744 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 749 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mfilterjavac__mfilterjavac__field_types_filter_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 764 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 769 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2 = {
  (MR_String) "warning",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mfilterjavac__mfilterjavac__field_types_filter_result_0_2,
  NULL,
  NULL,
  NULL
};

#line 784 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0
};

#line 789 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1
};

#line 794 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2
};

#line 799 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_filter_result_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2
  }
};

#line 818 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0[3] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1,
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0,
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2
};

#line 825 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_filter_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 832 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_filter_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____filter_result_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____filter_result_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "filter_result",
  {     mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_filter_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_filter_result_0
};

#line 849 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 857 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_0_0[4] = {
  (MR_String) "li_start",
  (MR_String) "li_end",
  (MR_String) "li_delta",
  (MR_String) "li_orig_file"
};

#line 865 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0 = {
  (MR_String) "line_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mfilterjavac__mfilterjavac__field_types_line_info_0_0,
  mfilterjavac__mfilterjavac__field_names_line_info_0_0,
  NULL,
  NULL
};

#line 880 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0
};

#line 885 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0
  }
};

#line 894 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0
};

#line 899 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_0[1] = {
  (MR_Integer) 0
};

#line 904 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_info_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info",
  {     mfilterjavac__mfilterjavac__du_name_ordered_line_info_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_info_0
};

#line 921 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_0
  }
};

#line 929 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0
  }
};

#line 937 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct2 mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0
  }
};

#line 946 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_cache_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mfilterjavac____Unify____line_info_cache_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_cache_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_cache",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 963 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 968 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0 = {
  (MR_String) "line_info_end",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mfilterjavac__mfilterjavac__field_types_line_info_end_0_0,
  NULL,
  NULL,
  NULL
};

#line 983 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1 = {
  (MR_String) "line_info_no_end",
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

#line 998 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1003 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2 = {
  (MR_String) "line_info_duplicate_begin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mfilterjavac__mfilterjavac__field_types_line_info_end_0_2,
  NULL,
  NULL,
  NULL
};

#line 1018 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1
};

#line 1023 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0
};

#line 1028 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2
};

#line 1033 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_end_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2
  }
};

#line 1052 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0[3] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2,
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0,
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1
};

#line 1059 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1066 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_end_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_info_end_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_end_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_end",
  {     mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_end_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0
};

#line 1083 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_error_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_type_0
};

#line 1090 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_error_0_0[3] = {
  (MR_String) "li_filename",
  (MR_String) "li_lineno",
  (MR_String) "li_error"
};

#line 1097 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0 = {
  (MR_String) "line_info_error",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mfilterjavac__mfilterjavac__field_types_line_info_error_0_0,
  mfilterjavac__mfilterjavac__field_names_line_info_error_0_0,
  NULL,
  NULL
};

#line 1112 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0
};

#line 1117 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0
  }
};

#line 1126 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0
};

#line 1131 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0[1] = {
  (MR_Integer) 0
};

#line 1136 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_info_error_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_error_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_error",
  {     mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0
};

#line 1153 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0 = {
  (MR_String) "lie_end_without_beginning",
  (MR_Integer) 0
};

#line 1159 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1 = {
  (MR_String) "lie_beginning_without_end",
  (MR_Integer) 1
};

#line 1165 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2 = {
  (MR_String) "lie_duplicate_beginning",
  (MR_Integer) 2
};

#line 1171 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_line_info_error_type_0[3] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2
};

#line 1178 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0[3] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0
};

#line 1185 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1192 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mfilterjavac____Unify____line_info_error_type_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_error_type_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_error_type",
  {     mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0 },
  {     mfilterjavac__mfilterjavac__enum_value_ordered_line_info_error_type_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0
};

#line 1209 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_mark_0_0[4] = {
  (MR_PseudoTypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_begin_or_end_block_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1217 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_mark_0_0[4] = {
  (MR_String) "lm_type",
  (MR_String) "lm_mer_file",
  (MR_String) "lm_java_line_no",
  (MR_String) "lm_mer_line_no"
};

#line 1225 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0 = {
  (MR_String) "line_mark",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mfilterjavac__mfilterjavac__field_types_line_mark_0_0,
  mfilterjavac__mfilterjavac__field_names_line_mark_0_0,
  NULL,
  NULL
};

#line 1240 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0
};

#line 1245 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0
  }
};

#line 1254 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0
};

#line 1259 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_mark_0[1] = {
  (MR_Integer) 0
};

#line 1264 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_mark_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_mark_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_mark_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_mark",
  {     mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_mark_0
};

#line 1281 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0_10001(
#line 1284 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1286 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1288 "mfilterjavac.c"
{
#line 1290 "mfilterjavac.c"
  {
#line 1292 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1295 "mfilterjavac.c"
    {
#line 1297 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____begin_or_end_block_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1300 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1302 "mfilterjavac.c"
  }
#line 1304 "mfilterjavac.c"
}

#line 1307 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0_10001(
#line 1310 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1312 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1314 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1316 "mfilterjavac.c"
{
#line 1318 "mfilterjavac.c"
  {
#line 1320 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1323 "mfilterjavac.c"
    {
#line 1325 "mfilterjavac.c"
      mfilterjavac____Compare____begin_or_end_block_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1328 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1330 "mfilterjavac.c"
  }
#line 1332 "mfilterjavac.c"
}

#line 1335 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0_10001(
#line 1338 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1340 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1342 "mfilterjavac.c"
{
#line 1344 "mfilterjavac.c"
  {
#line 1346 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1349 "mfilterjavac.c"
    {
#line 1351 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____filter_result_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1354 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1356 "mfilterjavac.c"
  }
#line 1358 "mfilterjavac.c"
}

#line 1361 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0_10001(
#line 1364 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1366 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1368 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1370 "mfilterjavac.c"
{
#line 1372 "mfilterjavac.c"
  {
#line 1374 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1377 "mfilterjavac.c"
    {
#line 1379 "mfilterjavac.c"
      mfilterjavac____Compare____filter_result_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1382 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1384 "mfilterjavac.c"
  }
#line 1386 "mfilterjavac.c"
}

#line 1389 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0_10001(
#line 1392 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1394 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1396 "mfilterjavac.c"
{
#line 1398 "mfilterjavac.c"
  {
#line 1400 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1403 "mfilterjavac.c"
    {
#line 1405 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1408 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1410 "mfilterjavac.c"
  }
#line 1412 "mfilterjavac.c"
}

#line 1415 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_0_0_10001(
#line 1418 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1420 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1422 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1424 "mfilterjavac.c"
{
#line 1426 "mfilterjavac.c"
  {
#line 1428 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1431 "mfilterjavac.c"
    {
#line 1433 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1436 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1438 "mfilterjavac.c"
  }
#line 1440 "mfilterjavac.c"
}

#line 1443 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0_10001(
#line 1446 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1448 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1450 "mfilterjavac.c"
{
#line 1452 "mfilterjavac.c"
  {
#line 1454 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1457 "mfilterjavac.c"
    {
#line 1459 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_cache_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1462 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1464 "mfilterjavac.c"
  }
#line 1466 "mfilterjavac.c"
}

#line 1469 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0_10001(
#line 1472 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1474 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1476 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1478 "mfilterjavac.c"
{
#line 1480 "mfilterjavac.c"
  {
#line 1482 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1485 "mfilterjavac.c"
    {
#line 1487 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_cache_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1490 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1492 "mfilterjavac.c"
  }
#line 1494 "mfilterjavac.c"
}

#line 1497 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0_10001(
#line 1500 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1502 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1504 "mfilterjavac.c"
{
#line 1506 "mfilterjavac.c"
  {
#line 1508 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1511 "mfilterjavac.c"
    {
#line 1513 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_end_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1516 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1518 "mfilterjavac.c"
  }
#line 1520 "mfilterjavac.c"
}

#line 1523 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0_10001(
#line 1526 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1528 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1530 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1532 "mfilterjavac.c"
{
#line 1534 "mfilterjavac.c"
  {
#line 1536 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1539 "mfilterjavac.c"
    {
#line 1541 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_end_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1544 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1546 "mfilterjavac.c"
  }
#line 1548 "mfilterjavac.c"
}

#line 1551 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0_10001(
#line 1554 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1556 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1558 "mfilterjavac.c"
{
#line 1560 "mfilterjavac.c"
  {
#line 1562 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1565 "mfilterjavac.c"
    {
#line 1567 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_error_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1570 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1572 "mfilterjavac.c"
  }
#line 1574 "mfilterjavac.c"
}

#line 1577 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0_10001(
#line 1580 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1582 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1584 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1586 "mfilterjavac.c"
{
#line 1588 "mfilterjavac.c"
  {
#line 1590 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1593 "mfilterjavac.c"
    {
#line 1595 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_error_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1598 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1600 "mfilterjavac.c"
  }
#line 1602 "mfilterjavac.c"
}

#line 1605 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0_10001(
#line 1608 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1610 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1612 "mfilterjavac.c"
{
#line 1614 "mfilterjavac.c"
  {
#line 1616 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1619 "mfilterjavac.c"
    {
#line 1621 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_error_type_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1624 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1626 "mfilterjavac.c"
  }
#line 1628 "mfilterjavac.c"
}

#line 1631 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0_10001(
#line 1634 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1636 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1638 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1640 "mfilterjavac.c"
{
#line 1642 "mfilterjavac.c"
  {
#line 1644 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1647 "mfilterjavac.c"
    {
#line 1649 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_error_type_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1652 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1654 "mfilterjavac.c"
  }
#line 1656 "mfilterjavac.c"
}

#line 1659 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0_10001(
#line 1662 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1664 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1666 "mfilterjavac.c"
{
#line 1668 "mfilterjavac.c"
  {
#line 1670 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1673 "mfilterjavac.c"
    {
#line 1675 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_mark_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1678 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1680 "mfilterjavac.c"
  }
#line 1682 "mfilterjavac.c"
}

#line 1685 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0_10001(
#line 1688 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1690 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1692 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1694 "mfilterjavac.c"
{
#line 1696 "mfilterjavac.c"
  {
#line 1698 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1701 "mfilterjavac.c"
    {
#line 1703 "mfilterjavac.c"
      mfilterjavac____Compare____line_mark_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1706 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1708 "mfilterjavac.c"
  }
#line 1710 "mfilterjavac.c"
}

#line 242 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0(
#line 242 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 242 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 242 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 242 "mfilterjavac.m"
{
#line 242 "mfilterjavac.m"
  {
#line 242 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 242 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_15 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 242 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_16 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 242 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_15 == mfilterjavac__CastY_16);
#line 242 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 1737 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 242 "mfilterjavac.m"
    else
#line 242 "mfilterjavac.m"
      {
#line 242 "mfilterjavac.m"
        MR_Word mfilterjavac__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 242 "mfilterjavac.m"
        MR_String mfilterjavac__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));
#line 242 "mfilterjavac.m"
        MR_Word mfilterjavac__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));
#line 242 "mfilterjavac.m"
        MR_String mfilterjavac__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 1)));
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 2)));
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 3)));
#line 242 "mfilterjavac.m"
        MR_Word mfilterjavac__V_12_12;
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_21_21 = (MR_Integer) mfilterjavac__V_4_4;
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_22_22 = (MR_Integer) mfilterjavac__V_8_8;

#line 242 "mfilterjavac.m"
        {
#line 242 "mfilterjavac.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_12_12, mfilterjavac__V_21_21, mfilterjavac__V_22_22);
        }
#line 1771 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_12_12 == (MR_Integer) 0);
#line 242 "mfilterjavac.m"
        mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 242 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 242 "mfilterjavac.m"
          *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_12_12;
#line 242 "mfilterjavac.m"
        else
#line 242 "mfilterjavac.m"
          {
#line 242 "mfilterjavac.m"
            MR_Word mfilterjavac__V_13_13;

#line 242 "mfilterjavac.m"
            {
#line 242 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&mfilterjavac__V_13_13, mfilterjavac__V_5_5, mfilterjavac__V_9_9);
            }
#line 1791 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_13_13 == (MR_Integer) 0);
#line 242 "mfilterjavac.m"
            mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 242 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 242 "mfilterjavac.m"
              *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_13_13;
#line 242 "mfilterjavac.m"
            else
#line 242 "mfilterjavac.m"
              {
#line 242 "mfilterjavac.m"
                MR_Word mfilterjavac__V_14_14;

#line 242 "mfilterjavac.m"
                {
#line 242 "mfilterjavac.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_14_14, mfilterjavac__V_6_6, mfilterjavac__V_10_10);
                }
#line 1811 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_14_14 == (MR_Integer) 0);
#line 242 "mfilterjavac.m"
                mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 242 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 242 "mfilterjavac.m"
                  *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_14_14;
#line 242 "mfilterjavac.m"
                else
#line 242 "mfilterjavac.m"
                  {
#line 242 "mfilterjavac.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_7_7, mfilterjavac__V_11_11);
#line 242 "mfilterjavac.m"
                    return;
                  }
#line 242 "mfilterjavac.m"
              }
#line 242 "mfilterjavac.m"
          }
#line 242 "mfilterjavac.m"
      }
#line 242 "mfilterjavac.m"
  }
#line 242 "mfilterjavac.m"
}

#line 242 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0(
#line 242 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 242 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 242 "mfilterjavac.m"
{
#line 242 "mfilterjavac.m"
  {
#line 242 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 242 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_11 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 242 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_12 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 242 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_11 == mfilterjavac__CastY_12);
#line 242 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 242 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 242 "mfilterjavac.m"
    else
#line 242 "mfilterjavac.m"
      {
#line 242 "mfilterjavac.m"
        MR_Word mfilterjavac__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "mfilterjavac.m"
        MR_String mfilterjavac__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 2)));
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 3)));
#line 242 "mfilterjavac.m"
        MR_Word mfilterjavac__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 242 "mfilterjavac.m"
        MR_String mfilterjavac__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 242 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));

#line 1884 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_3_3 == mfilterjavac__V_7_7);
#line 242 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 242 "mfilterjavac.m"
          {
#line 1890 "mfilterjavac.c"
            mfilterjavac__succeeded = (strcmp(mfilterjavac__V_4_4, mfilterjavac__V_8_8) == 0);
#line 242 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 242 "mfilterjavac.m"
              {
#line 1896 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_5_5 == mfilterjavac__V_9_9);
#line 242 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 1900 "mfilterjavac.c"
                  mfilterjavac__succeeded = (mfilterjavac__V_6_6 == mfilterjavac__V_10_10);
#line 242 "mfilterjavac.m"
              }
#line 242 "mfilterjavac.m"
          }
#line 242 "mfilterjavac.m"
      }
#line 242 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 242 "mfilterjavac.m"
  }
#line 242 "mfilterjavac.m"
}

#line 168 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0(
#line 168 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 168 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 168 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 168 "mfilterjavac.m"
{
#line 168 "mfilterjavac.m"
  {
#line 168 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 168 "mfilterjavac.m"
    MR_Integer mfilterjavac__Cast_HeadVar1_4 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 168 "mfilterjavac.m"
    MR_Integer mfilterjavac__Cast_HeadVar2_5 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 168 "mfilterjavac.m"
    {
#line 168 "mfilterjavac.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Cast_HeadVar1_4, mfilterjavac__Cast_HeadVar2_5);
#line 168 "mfilterjavac.m"
      return;
    }
#line 168 "mfilterjavac.m"
  }
#line 168 "mfilterjavac.m"
}

#line 168 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0(
#line 168 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_1,
#line 168 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 168 "mfilterjavac.m"
{
#line 1956 "mfilterjavac.c"
  {
#line 1958 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded = (mfilterjavac__HeadVar__2_1 == mfilterjavac__HeadVar__2_2);

#line 1961 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1963 "mfilterjavac.c"
  }
#line 168 "mfilterjavac.m"
}

#line 161 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0(
#line 161 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 161 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 161 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 161 "mfilterjavac.m"
{
#line 161 "mfilterjavac.m"
  {
#line 161 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 161 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_12 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 161 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_13 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 161 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_12 == mfilterjavac__CastY_13);
#line 161 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 1992 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 161 "mfilterjavac.m"
    else
#line 161 "mfilterjavac.m"
      {
#line 161 "mfilterjavac.m"
        MR_String mfilterjavac__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 161 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "mfilterjavac.m"
        MR_Word mfilterjavac__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 161 "mfilterjavac.m"
        MR_String mfilterjavac__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));
#line 161 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 1)));
#line 161 "mfilterjavac.m"
        MR_Word mfilterjavac__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 2)));
#line 161 "mfilterjavac.m"
        MR_Word mfilterjavac__V_10_10;

#line 161 "mfilterjavac.m"
        {
#line 161 "mfilterjavac.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mfilterjavac__V_10_10, mfilterjavac__V_4_4, mfilterjavac__V_7_7);
        }
#line 2018 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_10_10 == (MR_Integer) 0);
#line 161 "mfilterjavac.m"
        mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 161 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 161 "mfilterjavac.m"
          *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_10_10;
#line 161 "mfilterjavac.m"
        else
#line 161 "mfilterjavac.m"
          {
#line 161 "mfilterjavac.m"
            MR_Word mfilterjavac__V_11_11;

#line 161 "mfilterjavac.m"
            {
#line 161 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_11_11, mfilterjavac__V_5_5, mfilterjavac__V_8_8);
            }
#line 2038 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_11_11 == (MR_Integer) 0);
#line 161 "mfilterjavac.m"
            mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 161 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 161 "mfilterjavac.m"
              *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_11_11;
#line 161 "mfilterjavac.m"
            else
#line 161 "mfilterjavac.m"
              {
#line 161 "mfilterjavac.m"
                MR_Integer mfilterjavac__V_17_17 = (MR_Integer) mfilterjavac__V_6_6;
#line 161 "mfilterjavac.m"
                MR_Integer mfilterjavac__V_18_18 = (MR_Integer) mfilterjavac__V_9_9;

#line 161 "mfilterjavac.m"
                {
#line 161 "mfilterjavac.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_17_17, mfilterjavac__V_18_18);
#line 161 "mfilterjavac.m"
                  return;
                }
#line 161 "mfilterjavac.m"
              }
#line 161 "mfilterjavac.m"
          }
#line 161 "mfilterjavac.m"
      }
#line 161 "mfilterjavac.m"
  }
#line 161 "mfilterjavac.m"
}

#line 161 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0(
#line 161 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 161 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 161 "mfilterjavac.m"
{
#line 161 "mfilterjavac.m"
  {
#line 161 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 161 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_9 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 161 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_10 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 161 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_9 == mfilterjavac__CastY_10);
#line 161 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 161 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 161 "mfilterjavac.m"
    else
#line 161 "mfilterjavac.m"
      {
#line 161 "mfilterjavac.m"
        MR_String mfilterjavac__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 161 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 161 "mfilterjavac.m"
        MR_Word mfilterjavac__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 2)));
#line 161 "mfilterjavac.m"
        MR_String mfilterjavac__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 161 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 161 "mfilterjavac.m"
        MR_Word mfilterjavac__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));

#line 2114 "mfilterjavac.c"
        mfilterjavac__succeeded = (strcmp(mfilterjavac__V_3_3, mfilterjavac__V_6_6) == 0);
#line 161 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 161 "mfilterjavac.m"
          {
#line 2120 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_4_4 == mfilterjavac__V_7_7);
#line 161 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 2124 "mfilterjavac.c"
              mfilterjavac__succeeded = (mfilterjavac__V_5_5 == mfilterjavac__V_8_8);
#line 161 "mfilterjavac.m"
          }
#line 161 "mfilterjavac.m"
      }
#line 161 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 161 "mfilterjavac.m"
  }
#line 161 "mfilterjavac.m"
}

#line 323 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0(
#line 323 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 323 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 323 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 323 "mfilterjavac.m"
{
#line 323 "mfilterjavac.m"
  {
#line 323 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 323 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_16 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 323 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_17 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 323 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_16 == mfilterjavac__CastY_17);
#line 323 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 2161 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 323 "mfilterjavac.m"
    else
#line 323 "mfilterjavac.m"
    if ((mfilterjavac__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 323 "mfilterjavac.m"
      if ((mfilterjavac__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 323 "mfilterjavac.m"
        *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 323 "mfilterjavac.m"
      else
#line 323 "mfilterjavac.m"
      if (((MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2175 "mfilterjavac.c"
        *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "mfilterjavac.m"
      else
#line 2179 "mfilterjavac.c"
        *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "mfilterjavac.m"
    else
#line 323 "mfilterjavac.m"
    if (((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 323 "mfilterjavac.m"
      {
#line 323 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

#line 323 "mfilterjavac.m"
        if ((mfilterjavac__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2192 "mfilterjavac.c"
          *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "mfilterjavac.m"
        else
#line 323 "mfilterjavac.m"
        if (((MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 323 "mfilterjavac.m"
          {
#line 323 "mfilterjavac.m"
            MR_Integer mfilterjavac__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

#line 323 "mfilterjavac.m"
            {
#line 323 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_20_20, mfilterjavac__V_15_15);
#line 323 "mfilterjavac.m"
              return;
            }
#line 323 "mfilterjavac.m"
          }
#line 323 "mfilterjavac.m"
        else
#line 2214 "mfilterjavac.c"
          *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 323 "mfilterjavac.m"
      }
#line 323 "mfilterjavac.m"
    else
#line 323 "mfilterjavac.m"
      {
#line 323 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

#line 323 "mfilterjavac.m"
        if ((mfilterjavac__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2227 "mfilterjavac.c"
          *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "mfilterjavac.m"
        else
#line 323 "mfilterjavac.m"
        if (((MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2233 "mfilterjavac.c"
          *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "mfilterjavac.m"
        else
#line 323 "mfilterjavac.m"
          {
#line 323 "mfilterjavac.m"
            MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

#line 323 "mfilterjavac.m"
            {
#line 323 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_21_21, mfilterjavac__V_5_5);
#line 323 "mfilterjavac.m"
              return;
            }
#line 323 "mfilterjavac.m"
          }
#line 323 "mfilterjavac.m"
      }
#line 323 "mfilterjavac.m"
  }
#line 323 "mfilterjavac.m"
}

#line 323 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0(
#line 323 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 323 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 323 "mfilterjavac.m"
{
#line 323 "mfilterjavac.m"
  {
#line 323 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 323 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_9 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 323 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_10 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 323 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_9 == mfilterjavac__CastY_10);
#line 323 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 323 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 323 "mfilterjavac.m"
    else
#line 323 "mfilterjavac.m"
    if ((mfilterjavac__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 323 "mfilterjavac.m"
      {
#line 323 "mfilterjavac.m"
        MR_Integer mfilterjavac__CastX_5 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 323 "mfilterjavac.m"
        MR_Integer mfilterjavac__CastY_6 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 323 "mfilterjavac.m"
        mfilterjavac__succeeded = (mfilterjavac__CastY_6 == mfilterjavac__CastX_5);
#line 323 "mfilterjavac.m"
      }
#line 323 "mfilterjavac.m"
    else
#line 323 "mfilterjavac.m"
    if (((MR_tag((MR_Word) mfilterjavac__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 323 "mfilterjavac.m"
      {
#line 323 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_8_8;

#line 323 "mfilterjavac.m"
        mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 323 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 323 "mfilterjavac.m"
          {
#line 323 "mfilterjavac.m"
            mfilterjavac__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 2316 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_7_7 == mfilterjavac__V_8_8);
#line 323 "mfilterjavac.m"
          }
#line 323 "mfilterjavac.m"
      }
#line 323 "mfilterjavac.m"
    else
#line 323 "mfilterjavac.m"
      {
#line 323 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 323 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_4_4;

#line 323 "mfilterjavac.m"
        mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 323 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 323 "mfilterjavac.m"
          {
#line 323 "mfilterjavac.m"
            mfilterjavac__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 2339 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_3_3 == mfilterjavac__V_4_4);
#line 323 "mfilterjavac.m"
          }
#line 323 "mfilterjavac.m"
      }
#line 323 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 323 "mfilterjavac.m"
  }
#line 323 "mfilterjavac.m"
}

#line 173 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0(
#line 173 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 173 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 173 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 173 "mfilterjavac.m"
{
#line 173 "mfilterjavac.m"
  {
#line 173 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 173 "mfilterjavac.m"
    MR_Word mfilterjavac__Cast_HeadVar1_4 = mfilterjavac__HeadVar__2_2;
#line 173 "mfilterjavac.m"
    MR_Word mfilterjavac__Cast_HeadVar2_5 = mfilterjavac__HeadVar__3_3;

#line 173 "mfilterjavac.m"
    {
#line 173 "mfilterjavac.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mfilterjavac_scalar_common_2[0], mfilterjavac__HeadVar__1_1, ((MR_Box) (mfilterjavac__Cast_HeadVar1_4)), ((MR_Box) (mfilterjavac__Cast_HeadVar2_5)));
#line 173 "mfilterjavac.m"
      return;
    }
#line 173 "mfilterjavac.m"
  }
#line 173 "mfilterjavac.m"
}

#line 173 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0(
#line 173 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 173 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 173 "mfilterjavac.m"
{
#line 173 "mfilterjavac.m"
  {
#line 173 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 173 "mfilterjavac.m"
    MR_Word mfilterjavac__Cast_HeadVar1_3 = mfilterjavac__HeadVar__1_1;
#line 173 "mfilterjavac.m"
    MR_Word mfilterjavac__Cast_HeadVar2_4 = mfilterjavac__HeadVar__2_2;

#line 173 "mfilterjavac.m"
    {
#line 173 "mfilterjavac.m"
      return mfilterjavac__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mfilterjavac_scalar_common_2[0], ((MR_Box) (mfilterjavac__Cast_HeadVar1_3)), ((MR_Box) (mfilterjavac__Cast_HeadVar2_4)));
    }
#line 173 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 173 "mfilterjavac.m"
  }
#line 173 "mfilterjavac.m"
}

#line 153 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_0_0(
#line 153 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 153 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 153 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 153 "mfilterjavac.m"
{
#line 153 "mfilterjavac.m"
  {
#line 153 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 153 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_15 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 153 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_16 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 153 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_15 == mfilterjavac__CastY_16);
#line 153 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 2438 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "mfilterjavac.m"
    else
#line 153 "mfilterjavac.m"
      {
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 153 "mfilterjavac.m"
        MR_String mfilterjavac__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 1)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 2)));
#line 153 "mfilterjavac.m"
        MR_String mfilterjavac__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 3)));
#line 153 "mfilterjavac.m"
        MR_Word mfilterjavac__V_12_12;

#line 153 "mfilterjavac.m"
        {
#line 153 "mfilterjavac.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_12_12, mfilterjavac__V_4_4, mfilterjavac__V_8_8);
        }
#line 2468 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_12_12 == (MR_Integer) 0);
#line 153 "mfilterjavac.m"
        mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 153 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 153 "mfilterjavac.m"
          *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_12_12;
#line 153 "mfilterjavac.m"
        else
#line 153 "mfilterjavac.m"
          {
#line 153 "mfilterjavac.m"
            MR_Word mfilterjavac__V_13_13;

#line 153 "mfilterjavac.m"
            {
#line 153 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_13_13, mfilterjavac__V_5_5, mfilterjavac__V_9_9);
            }
#line 2488 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_13_13 == (MR_Integer) 0);
#line 153 "mfilterjavac.m"
            mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 153 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 153 "mfilterjavac.m"
              *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_13_13;
#line 153 "mfilterjavac.m"
            else
#line 153 "mfilterjavac.m"
              {
#line 153 "mfilterjavac.m"
                MR_Word mfilterjavac__V_14_14;

#line 153 "mfilterjavac.m"
                {
#line 153 "mfilterjavac.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_14_14, mfilterjavac__V_6_6, mfilterjavac__V_10_10);
                }
#line 2508 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_14_14 == (MR_Integer) 0);
#line 153 "mfilterjavac.m"
                mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 153 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 153 "mfilterjavac.m"
                  *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_14_14;
#line 153 "mfilterjavac.m"
                else
#line 153 "mfilterjavac.m"
                  {
#line 153 "mfilterjavac.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_7_7, mfilterjavac__V_11_11);
#line 153 "mfilterjavac.m"
                    return;
                  }
#line 153 "mfilterjavac.m"
              }
#line 153 "mfilterjavac.m"
          }
#line 153 "mfilterjavac.m"
      }
#line 153 "mfilterjavac.m"
  }
#line 153 "mfilterjavac.m"
}

#line 153 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0(
#line 153 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 153 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 153 "mfilterjavac.m"
{
#line 153 "mfilterjavac.m"
  {
#line 153 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 153 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_11 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 153 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_12 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 153 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_11 == mfilterjavac__CastY_12);
#line 153 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 153 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 153 "mfilterjavac.m"
    else
#line 153 "mfilterjavac.m"
      {
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 2)));
#line 153 "mfilterjavac.m"
        MR_String mfilterjavac__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 3)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 153 "mfilterjavac.m"
        MR_String mfilterjavac__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));

#line 2581 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_3_3 == mfilterjavac__V_7_7);
#line 153 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 153 "mfilterjavac.m"
          {
#line 2587 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_4_4 == mfilterjavac__V_8_8);
#line 153 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 153 "mfilterjavac.m"
              {
#line 2593 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_5_5 == mfilterjavac__V_9_9);
#line 153 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 2597 "mfilterjavac.c"
                  mfilterjavac__succeeded = (strcmp(mfilterjavac__V_6_6, mfilterjavac__V_10_10) == 0);
#line 153 "mfilterjavac.m"
              }
#line 153 "mfilterjavac.m"
          }
#line 153 "mfilterjavac.m"
      }
#line 153 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 153 "mfilterjavac.m"
  }
#line 153 "mfilterjavac.m"
}

#line 59 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0(
#line 59 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 59 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 59 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 59 "mfilterjavac.m"
{
#line 59 "mfilterjavac.m"
  {
#line 59 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 59 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_16 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 59 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_17 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 59 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_16 == mfilterjavac__CastY_17);
#line 59 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 2636 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 59 "mfilterjavac.m"
    else
#line 59 "mfilterjavac.m"
    if ((mfilterjavac__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 59 "mfilterjavac.m"
      if ((mfilterjavac__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 59 "mfilterjavac.m"
        *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 59 "mfilterjavac.m"
      else
#line 59 "mfilterjavac.m"
      if (((MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2650 "mfilterjavac.c"
        *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "mfilterjavac.m"
      else
#line 2654 "mfilterjavac.c"
        *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "mfilterjavac.m"
    else
#line 59 "mfilterjavac.m"
    if (((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 59 "mfilterjavac.m"
      {
#line 59 "mfilterjavac.m"
        MR_String mfilterjavac__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "mfilterjavac.m"
        if ((mfilterjavac__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2667 "mfilterjavac.c"
          *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "mfilterjavac.m"
        else
#line 59 "mfilterjavac.m"
        if (((MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 59 "mfilterjavac.m"
          {
#line 59 "mfilterjavac.m"
            MR_String mfilterjavac__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

#line 59 "mfilterjavac.m"
            {
#line 59 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_20_20, mfilterjavac__V_8_8);
#line 59 "mfilterjavac.m"
              return;
            }
#line 59 "mfilterjavac.m"
          }
#line 59 "mfilterjavac.m"
        else
#line 2689 "mfilterjavac.c"
          *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "mfilterjavac.m"
      }
#line 59 "mfilterjavac.m"
    else
#line 59 "mfilterjavac.m"
      {
#line 59 "mfilterjavac.m"
        MR_String mfilterjavac__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

#line 59 "mfilterjavac.m"
        if ((mfilterjavac__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2702 "mfilterjavac.c"
          *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "mfilterjavac.m"
        else
#line 59 "mfilterjavac.m"
        if (((MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2708 "mfilterjavac.c"
          *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "mfilterjavac.m"
        else
#line 59 "mfilterjavac.m"
          {
#line 59 "mfilterjavac.m"
            MR_String mfilterjavac__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

#line 59 "mfilterjavac.m"
            {
#line 59 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_21_21, mfilterjavac__V_15_15);
#line 59 "mfilterjavac.m"
              return;
            }
#line 59 "mfilterjavac.m"
          }
#line 59 "mfilterjavac.m"
      }
#line 59 "mfilterjavac.m"
  }
#line 59 "mfilterjavac.m"
}

#line 59 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0(
#line 59 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 59 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 59 "mfilterjavac.m"
{
#line 59 "mfilterjavac.m"
  {
#line 59 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 59 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_9 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 59 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_10 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 59 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_9 == mfilterjavac__CastY_10);
#line 59 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 59 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 59 "mfilterjavac.m"
    else
#line 59 "mfilterjavac.m"
    if ((mfilterjavac__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 59 "mfilterjavac.m"
      {
#line 59 "mfilterjavac.m"
        MR_Integer mfilterjavac__CastX_3 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 59 "mfilterjavac.m"
        MR_Integer mfilterjavac__CastY_4 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 59 "mfilterjavac.m"
        mfilterjavac__succeeded = (mfilterjavac__CastY_4 == mfilterjavac__CastX_3);
#line 59 "mfilterjavac.m"
      }
#line 59 "mfilterjavac.m"
    else
#line 59 "mfilterjavac.m"
    if (((MR_tag((MR_Word) mfilterjavac__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 59 "mfilterjavac.m"
      {
#line 59 "mfilterjavac.m"
        MR_String mfilterjavac__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "mfilterjavac.m"
        MR_String mfilterjavac__V_6_6;

#line 59 "mfilterjavac.m"
        mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 59 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 59 "mfilterjavac.m"
          {
#line 59 "mfilterjavac.m"
            mfilterjavac__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 2791 "mfilterjavac.c"
            mfilterjavac__succeeded = (strcmp(mfilterjavac__V_5_5, mfilterjavac__V_6_6) == 0);
#line 59 "mfilterjavac.m"
          }
#line 59 "mfilterjavac.m"
      }
#line 59 "mfilterjavac.m"
    else
#line 59 "mfilterjavac.m"
      {
#line 59 "mfilterjavac.m"
        MR_String mfilterjavac__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "mfilterjavac.m"
        MR_String mfilterjavac__V_8_8;

#line 59 "mfilterjavac.m"
        mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 59 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 59 "mfilterjavac.m"
          {
#line 59 "mfilterjavac.m"
            mfilterjavac__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 2814 "mfilterjavac.c"
            mfilterjavac__succeeded = (strcmp(mfilterjavac__V_7_7, mfilterjavac__V_8_8) == 0);
#line 59 "mfilterjavac.m"
          }
#line 59 "mfilterjavac.m"
      }
#line 59 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 59 "mfilterjavac.m"
  }
#line 59 "mfilterjavac.m"
}

#line 250 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0(
#line 250 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 250 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 250 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 250 "mfilterjavac.m"
{
#line 250 "mfilterjavac.m"
  {
#line 250 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 250 "mfilterjavac.m"
    MR_Integer mfilterjavac__Cast_HeadVar1_4 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 250 "mfilterjavac.m"
    MR_Integer mfilterjavac__Cast_HeadVar2_5 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 250 "mfilterjavac.m"
    {
#line 250 "mfilterjavac.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Cast_HeadVar1_4, mfilterjavac__Cast_HeadVar2_5);
#line 250 "mfilterjavac.m"
      return;
    }
#line 250 "mfilterjavac.m"
  }
#line 250 "mfilterjavac.m"
}

#line 250 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0(
#line 250 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_1,
#line 250 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 250 "mfilterjavac.m"
{
#line 2868 "mfilterjavac.c"
  {
#line 2870 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded = (mfilterjavac__HeadVar__2_1 == mfilterjavac__HeadVar__2_2);

#line 2873 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 2875 "mfilterjavac.c"
  }
#line 250 "mfilterjavac.m"
}

#line 291 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__create_line_info_4_p_0(
#line 291 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 291 "mfilterjavac.m"
  MR_String mfilterjavac__HeadVar__2_2,
#line 291 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3,
#line 291 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__4_4)
#line 291 "mfilterjavac.m"
{
#line 295 "mfilterjavac.m"
  while (MR_TRUE)
#line 295 "mfilterjavac.m"
    {
#line 295 "mfilterjavac.m"
      /* tailcall optimized into a loop */
#line 295 "mfilterjavac.m"
      {
#line 295 "mfilterjavac.m"
        MR_bool mfilterjavac__succeeded;

#line 295 "mfilterjavac.m"
        if ((mfilterjavac__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "mfilterjavac.m"
          {
#line 295 "mfilterjavac.m"
            MR_Word mfilterjavac__InfosRev_7;

#line 296 "mfilterjavac.m"
            {
#line 296 "mfilterjavac.m"
              mercury__list__reverse_2_p_0((MR_Word) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_0, mfilterjavac__HeadVar__3_3, &mfilterjavac__InfosRev_7);
            }
#line 295 "mfilterjavac.m"
            {
#line 295 "mfilterjavac.m"
              MR_Word base;
#line 295 "mfilterjavac.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 295 "mfilterjavac.m"
              *mfilterjavac__HeadVar__4_4 = base;
#line 295 "mfilterjavac.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mfilterjavac__InfosRev_7));
#line 295 "mfilterjavac.m"
            }
#line 295 "mfilterjavac.m"
          }
#line 295 "mfilterjavac.m"
        else
#line 297 "mfilterjavac.m"
          {
#line 297 "mfilterjavac.m"
            MR_Word mfilterjavac__Mark_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 297 "mfilterjavac.m"
            MR_Word mfilterjavac__Marks0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 297 "mfilterjavac.m"
            MR_Word mfilterjavac__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 0)));
#line 297 "mfilterjavac.m"
            MR_String mfilterjavac__MerFile_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 1)));
#line 297 "mfilterjavac.m"
            MR_Integer mfilterjavac__JavaLineNo_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 2)));
#line 297 "mfilterjavac.m"
            MR_Integer mfilterjavac__MerLineNo_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 3)));

#line 317 "mfilterjavac.m"
            if ((mfilterjavac__Type_13 == (MR_Integer) 0))
#line 2949 "mfilterjavac.c"
              if ((mfilterjavac__Marks0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2951 "mfilterjavac.c"
                {
#line 2953 "mfilterjavac.c"
                  MR_Word mfilterjavac__V_28_28;

#line 310 "mfilterjavac.m"
                  {
#line 310 "mfilterjavac.m"
                    mfilterjavac__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 310 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__V_28_28, 0) = ((MR_Box) (mfilterjavac__HeadVar__2_2));
#line 310 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__V_28_28, 1) = ((MR_Box) (mfilterjavac__JavaLineNo_15));
#line 310 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__V_28_28, 2) = ((MR_Box) ((MR_Integer) 1));
#line 310 "mfilterjavac.m"
                  }
#line 310 "mfilterjavac.m"
                  {
#line 310 "mfilterjavac.m"
                    MR_Word base;
#line 310 "mfilterjavac.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 310 "mfilterjavac.m"
                    *mfilterjavac__HeadVar__4_4 = base;
#line 310 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_28_28));
#line 310 "mfilterjavac.m"
                  }
#line 2980 "mfilterjavac.c"
                }
#line 2982 "mfilterjavac.c"
              else
#line 2984 "mfilterjavac.c"
                {
#line 2986 "mfilterjavac.c"
                  MR_Word mfilterjavac__Mark_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Marks0_9, (MR_Integer) 0)));
#line 2988 "mfilterjavac.c"
                  MR_Word mfilterjavac__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 0)));
#line 2990 "mfilterjavac.c"
                  MR_Integer mfilterjavac__End_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 2)));
#line 2992 "mfilterjavac.c"
                  MR_Word mfilterjavac__Marks_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Marks0_9, (MR_Integer) 1)));
#line 333 "mfilterjavac.m"
                  MR_String mfilterjavac__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 1)));
#line 333 "mfilterjavac.m"
                  MR_Integer mfilterjavac__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 3)));

#line 2999 "mfilterjavac.c"
                  if ((mfilterjavac__Type_34 == (MR_Integer) 0))
#line 3001 "mfilterjavac.c"
                    {
#line 3003 "mfilterjavac.c"
                      MR_Word mfilterjavac__V_26_26;

#line 314 "mfilterjavac.m"
                      {
#line 314 "mfilterjavac.m"
                        mfilterjavac__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 314 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(0), mfilterjavac__V_26_26, 0) = ((MR_Box) (mfilterjavac__HeadVar__2_2));
#line 314 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(0), mfilterjavac__V_26_26, 1) = ((MR_Box) (mfilterjavac__End_36));
#line 314 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(0), mfilterjavac__V_26_26, 2) = ((MR_Box) ((MR_Integer) 2));
#line 314 "mfilterjavac.m"
                      }
#line 314 "mfilterjavac.m"
                      {
#line 314 "mfilterjavac.m"
                        MR_Word base;
#line 314 "mfilterjavac.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 314 "mfilterjavac.m"
                        *mfilterjavac__HeadVar__4_4 = base;
#line 314 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_26_26));
#line 314 "mfilterjavac.m"
                      }
#line 3030 "mfilterjavac.c"
                    }
#line 3032 "mfilterjavac.c"
                  else
#line 3034 "mfilterjavac.c"
                    {
#line 3036 "mfilterjavac.c"
                      MR_Integer mfilterjavac__Delta_20 = (mfilterjavac__MerLineNo_16 - mfilterjavac__JavaLineNo_15);
#line 3038 "mfilterjavac.c"
                      MR_Word mfilterjavac__Info_21;
#line 3040 "mfilterjavac.c"
                      MR_Word mfilterjavac__Infos_22;

#line 305 "mfilterjavac.m"
                      {
#line 305 "mfilterjavac.m"
                        mfilterjavac__Info_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 0) = ((MR_Box) (mfilterjavac__JavaLineNo_15));
#line 305 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 1) = ((MR_Box) (mfilterjavac__End_36));
#line 305 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 2) = ((MR_Box) (mfilterjavac__Delta_20));
#line 305 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 3) = ((MR_Box) (mfilterjavac__MerFile_14));
#line 305 "mfilterjavac.m"
                      }
#line 306 "mfilterjavac.m"
                      {
#line 306 "mfilterjavac.m"
                        mfilterjavac__Infos_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(1), mfilterjavac__Infos_22, 0) = ((MR_Box) (mfilterjavac__Info_21));
#line 306 "mfilterjavac.m"
                        MR_hl_field(MR_mktag(1), mfilterjavac__Infos_22, 1) = ((MR_Box) (mfilterjavac__HeadVar__3_3));
#line 306 "mfilterjavac.m"
                      }
#line 307 "mfilterjavac.m"
                      /* direct tailcall eliminated */
#line 307 "mfilterjavac.m"
                      {
#line 307 "mfilterjavac.m"
                        MR_Word mfilterjavac__HeadVar__1__tmp_copy_1 = mfilterjavac__Marks_39;
#line 307 "mfilterjavac.m"
                        MR_Word mfilterjavac__HeadVar__3__tmp_copy_3 = mfilterjavac__Infos_22;

#line 307 "mfilterjavac.m"
                        mfilterjavac__HeadVar__3_3 = mfilterjavac__HeadVar__3__tmp_copy_3;
#line 307 "mfilterjavac.m"
                        mfilterjavac__HeadVar__1_1 = mfilterjavac__HeadVar__1__tmp_copy_1;
#line 307 "mfilterjavac.m"
                      }
#line 307 "mfilterjavac.m"
                      continue;
#line 3084 "mfilterjavac.c"
                    }
#line 3086 "mfilterjavac.c"
                }
#line 317 "mfilterjavac.m"
            else
#line 318 "mfilterjavac.m"
              {
#line 318 "mfilterjavac.m"
                MR_Word mfilterjavac__V_24_24;

#line 319 "mfilterjavac.m"
                {
#line 319 "mfilterjavac.m"
                  mfilterjavac__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 319 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(0), mfilterjavac__V_24_24, 0) = ((MR_Box) (mfilterjavac__HeadVar__2_2));
#line 319 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(0), mfilterjavac__V_24_24, 1) = ((MR_Box) (mfilterjavac__JavaLineNo_15));
#line 319 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(0), mfilterjavac__V_24_24, 2) = ((MR_Box) ((MR_Integer) 0));
#line 319 "mfilterjavac.m"
                }
#line 319 "mfilterjavac.m"
                {
#line 319 "mfilterjavac.m"
                  MR_Word base;
#line 319 "mfilterjavac.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 319 "mfilterjavac.m"
                  *mfilterjavac__HeadVar__4_4 = base;
#line 319 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_24_24));
#line 319 "mfilterjavac.m"
                }
#line 318 "mfilterjavac.m"
              }
#line 297 "mfilterjavac.m"
          }
#line 295 "mfilterjavac.m"
      }
#line 295 "mfilterjavac.m"
      break;
#line 295 "mfilterjavac.m"
    }
#line 291 "mfilterjavac.m"
}

#line 254 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__read_line_marks_6_p_0(
#line 254 "mfilterjavac.m"
  MR_Word mfilterjavac__Stream_7,
#line 254 "mfilterjavac.m"
  MR_Integer mfilterjavac__JavaLineNo_8,
#line 254 "mfilterjavac.m"
  MR_Word mfilterjavac__Marks0_9,
#line 254 "mfilterjavac.m"
  MR_Word * mfilterjavac__MaybeMarks_10)
#line 254 "mfilterjavac.m"
{
#line 257 "mfilterjavac.m"
  while (MR_TRUE)
#line 257 "mfilterjavac.m"
    {
#line 257 "mfilterjavac.m"
      /* tailcall optimized into a loop */
#line 257 "mfilterjavac.m"
      {
#line 257 "mfilterjavac.m"
        MR_bool mfilterjavac__succeeded;
#line 257 "mfilterjavac.m"
        MR_Word mfilterjavac__Result_12;

#line 258 "mfilterjavac.m"
        {
#line 258 "mfilterjavac.m"
          mercury__io__read_line_as_string_4_p_0(mfilterjavac__Stream_7, &mfilterjavac__Result_12);
        }
#line 283 "mfilterjavac.m"
        if ((mfilterjavac__Result_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 285 "mfilterjavac.m"
          {
#line 285 "mfilterjavac.m"
            MR_Word base;
#line 285 "mfilterjavac.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 285 "mfilterjavac.m"
            *mfilterjavac__MaybeMarks_10 = base;
#line 285 "mfilterjavac.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mfilterjavac__Marks0_9));
#line 285 "mfilterjavac.m"
          }
#line 283 "mfilterjavac.m"
        else
#line 283 "mfilterjavac.m"
        if (((MR_tag((MR_Word) mfilterjavac__Result_12)) == (MR_mktag((MR_Integer) 2))))
#line 287 "mfilterjavac.m"
          {
#line 287 "mfilterjavac.m"
            MR_Word mfilterjavac__Error_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mfilterjavac__Result_12, (MR_Integer) 0)));
#line 287 "mfilterjavac.m"
            MR_String mfilterjavac__V_28_28;

#line 288 "mfilterjavac.m"
            {
#line 288 "mfilterjavac.m"
              mfilterjavac__V_28_28 = mercury__io__error_message_1_f_0(mfilterjavac__Error_24);
            }
#line 288 "mfilterjavac.m"
            {
#line 288 "mfilterjavac.m"
              MR_Word base;
#line 288 "mfilterjavac.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 288 "mfilterjavac.m"
              *mfilterjavac__MaybeMarks_10 = base;
#line 288 "mfilterjavac.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_28_28));
#line 288 "mfilterjavac.m"
            }
#line 287 "mfilterjavac.m"
          }
#line 283 "mfilterjavac.m"
        else
#line 260 "mfilterjavac.m"
          {
#line 260 "mfilterjavac.m"
            MR_String mfilterjavac__Line_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Result_12, (MR_Integer) 0)));
#line 260 "mfilterjavac.m"
            MR_Word mfilterjavac__Parts_14;
#line 260 "mfilterjavac.m"
            MR_Word mfilterjavac__Marks_23;
#line 260 "mfilterjavac.m"
            MR_String mfilterjavac__V_30_30;
#line 260 "mfilterjavac.m"
            MR_Integer mfilterjavac__V_38_38;
#line 279 "mfilterjavac.m"
            MR_Word mfilterjavac__Type_17;
#line 279 "mfilterjavac.m"
            MR_String mfilterjavac__MerFile_19;
#line 279 "mfilterjavac.m"
            MR_Integer mfilterjavac__MerLineNo_21;
#line 265 "mfilterjavac.m"
            MR_String mfilterjavac__Marker_15;
#line 265 "mfilterjavac.m"
            MR_String mfilterjavac__PathLine_16;
#line 265 "mfilterjavac.m"
            MR_Word mfilterjavac__PartsB_18;
#line 265 "mfilterjavac.m"
            MR_String mfilterjavac__MerLineNoStr_20;
#line 265 "mfilterjavac.m"
            MR_String mfilterjavac__V_31_31;
#line 265 "mfilterjavac.m"
            MR_Word mfilterjavac__V_32_32;
#line 265 "mfilterjavac.m"
            MR_Word mfilterjavac__V_33_33;
#line 265 "mfilterjavac.m"
            MR_Word mfilterjavac__V_34_34;
#line 265 "mfilterjavac.m"
            MR_Char mfilterjavac__V_35_35;
#line 265 "mfilterjavac.m"
            MR_Word mfilterjavac__V_36_36;
#line 265 "mfilterjavac.m"
            MR_Word mfilterjavac__V_37_37;

#line 263 "mfilterjavac.m"
            {
#line 263 "mfilterjavac.m"
              mfilterjavac__V_30_30 = mercury__string__strip_1_f_0(mfilterjavac__Line_13);
            }
#line 263 "mfilterjavac.m"
            {
#line 263 "mfilterjavac.m"
              mfilterjavac__Parts_14 = mercury__string__split_at_char_2_f_0((MR_Char) 32, mfilterjavac__V_30_30);
            }
#line 265 "mfilterjavac.m"
            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__Parts_14)) == (MR_mktag((MR_Integer) 1)));
#line 265 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 265 "mfilterjavac.m"
              {
#line 265 "mfilterjavac.m"
                mfilterjavac__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Parts_14, (MR_Integer) 0)));
#line 265 "mfilterjavac.m"
                mfilterjavac__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Parts_14, (MR_Integer) 1)));
#line 265 "mfilterjavac.m"
                mfilterjavac__succeeded = (strcmp(mfilterjavac__V_31_31, (MR_String) "//") == 0);
#line 265 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 265 "mfilterjavac.m"
                  {
#line 265 "mfilterjavac.m"
                    mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 265 "mfilterjavac.m"
                    if (mfilterjavac__succeeded)
#line 265 "mfilterjavac.m"
                      {
#line 265 "mfilterjavac.m"
                        mfilterjavac__Marker_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_32_32, (MR_Integer) 0)));
#line 265 "mfilterjavac.m"
                        mfilterjavac__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_32_32, (MR_Integer) 1)));
#line 265 "mfilterjavac.m"
                        mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 265 "mfilterjavac.m"
                        if (mfilterjavac__succeeded)
#line 265 "mfilterjavac.m"
                          {
#line 265 "mfilterjavac.m"
                            mfilterjavac__PathLine_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_33_33, (MR_Integer) 0)));
#line 265 "mfilterjavac.m"
                            mfilterjavac__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_33_33, (MR_Integer) 1)));
#line 265 "mfilterjavac.m"
                            mfilterjavac__succeeded = (mfilterjavac__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "mfilterjavac.m"
                            if (mfilterjavac__succeeded)
#line 265 "mfilterjavac.m"
                              {
#line 269 "mfilterjavac.m"
                                if ((strcmp(mfilterjavac__Marker_15, (MR_String) "MER_FOREIGN_END") == 0))
#line 271 "mfilterjavac.m"
                                  {
#line 271 "mfilterjavac.m"
                                    mfilterjavac__Type_17 = (MR_Integer) 1;
#line 271 "mfilterjavac.m"
                                    mfilterjavac__succeeded = MR_TRUE;
#line 271 "mfilterjavac.m"
                                  }
#line 269 "mfilterjavac.m"
                                else
#line 269 "mfilterjavac.m"
                                if ((strcmp(mfilterjavac__Marker_15, (MR_String) "MER_FOREIGN_BEGIN") == 0))
#line 268 "mfilterjavac.m"
                                  {
#line 268 "mfilterjavac.m"
                                    mfilterjavac__Type_17 = (MR_Integer) 0;
#line 268 "mfilterjavac.m"
                                    mfilterjavac__succeeded = MR_TRUE;
#line 268 "mfilterjavac.m"
                                  }
#line 269 "mfilterjavac.m"
                                else
#line 269 "mfilterjavac.m"
                                  mfilterjavac__succeeded = MR_FALSE;
#line 265 "mfilterjavac.m"
                                if (mfilterjavac__succeeded)
#line 265 "mfilterjavac.m"
                                  {
#line 273 "mfilterjavac.m"
                                    mfilterjavac__V_35_35 = (MR_Char) 58;
#line 273 "mfilterjavac.m"
                                    {
#line 273 "mfilterjavac.m"
                                      mfilterjavac__PartsB_18 = mercury__string__split_at_char_2_f_0(mfilterjavac__V_35_35, mfilterjavac__PathLine_16);
                                    }
#line 274 "mfilterjavac.m"
                                    mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__PartsB_18)) == (MR_mktag((MR_Integer) 1)));
#line 274 "mfilterjavac.m"
                                    if (mfilterjavac__succeeded)
#line 274 "mfilterjavac.m"
                                      {
#line 274 "mfilterjavac.m"
                                        mfilterjavac__MerFile_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsB_18, (MR_Integer) 0)));
#line 274 "mfilterjavac.m"
                                        mfilterjavac__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsB_18, (MR_Integer) 1)));
#line 274 "mfilterjavac.m"
                                        mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 274 "mfilterjavac.m"
                                        if (mfilterjavac__succeeded)
#line 274 "mfilterjavac.m"
                                          {
#line 274 "mfilterjavac.m"
                                            mfilterjavac__MerLineNoStr_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_36_36, (MR_Integer) 0)));
#line 274 "mfilterjavac.m"
                                            mfilterjavac__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_36_36, (MR_Integer) 1)));
#line 274 "mfilterjavac.m"
                                            mfilterjavac__succeeded = (mfilterjavac__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "mfilterjavac.m"
                                            if (mfilterjavac__succeeded)
#line 275 "mfilterjavac.m"
                                              {
#line 275 "mfilterjavac.m"
                                                mfilterjavac__succeeded = mercury__string__to_int_2_p_0(mfilterjavac__MerLineNoStr_20, &mfilterjavac__MerLineNo_21);
                                              }
#line 274 "mfilterjavac.m"
                                          }
#line 274 "mfilterjavac.m"
                                      }
#line 265 "mfilterjavac.m"
                                  }
#line 265 "mfilterjavac.m"
                              }
#line 265 "mfilterjavac.m"
                          }
#line 265 "mfilterjavac.m"
                      }
#line 265 "mfilterjavac.m"
                  }
#line 265 "mfilterjavac.m"
              }
#line 279 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 277 "mfilterjavac.m"
              {
#line 277 "mfilterjavac.m"
                MR_Word mfilterjavac__Mark_22;

#line 277 "mfilterjavac.m"
                {
#line 277 "mfilterjavac.m"
                  mfilterjavac__Mark_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 277 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 0) = ((MR_Box) (mfilterjavac__Type_17));
#line 277 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 1) = ((MR_Box) (mfilterjavac__MerFile_19));
#line 277 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 2) = ((MR_Box) (mfilterjavac__JavaLineNo_8));
#line 277 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 3) = ((MR_Box) (mfilterjavac__MerLineNo_21));
#line 277 "mfilterjavac.m"
                }
#line 278 "mfilterjavac.m"
                {
#line 278 "mfilterjavac.m"
                  mfilterjavac__Marks_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(1), mfilterjavac__Marks_23, 0) = ((MR_Box) (mfilterjavac__Mark_22));
#line 278 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(1), mfilterjavac__Marks_23, 1) = ((MR_Box) (mfilterjavac__Marks0_9));
#line 278 "mfilterjavac.m"
                }
#line 277 "mfilterjavac.m"
              }
#line 279 "mfilterjavac.m"
            else
#line 280 "mfilterjavac.m"
              mfilterjavac__Marks_23 = mfilterjavac__Marks0_9;
#line 282 "mfilterjavac.m"
            mfilterjavac__V_38_38 = (mfilterjavac__JavaLineNo_8 + (MR_Integer) 1);
#line 282 "mfilterjavac.m"
            /* direct tailcall eliminated */
#line 282 "mfilterjavac.m"
            {
#line 282 "mfilterjavac.m"
              MR_Integer mfilterjavac__JavaLineNo__tmp_copy_8 = mfilterjavac__V_38_38;
#line 282 "mfilterjavac.m"
              MR_Word mfilterjavac__Marks0__tmp_copy_9 = mfilterjavac__Marks_23;

#line 282 "mfilterjavac.m"
              mfilterjavac__Marks0_9 = mfilterjavac__Marks0__tmp_copy_9;
#line 282 "mfilterjavac.m"
              mfilterjavac__JavaLineNo_8 = mfilterjavac__JavaLineNo__tmp_copy_8;
#line 282 "mfilterjavac.m"
            }
#line 282 "mfilterjavac.m"
            continue;
#line 260 "mfilterjavac.m"
          }
#line 257 "mfilterjavac.m"
      }
#line 257 "mfilterjavac.m"
      break;
#line 257 "mfilterjavac.m"
    }
#line 254 "mfilterjavac.m"
}

#line 207 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__maybe_get_line_info_4_p_0(
#line 207 "mfilterjavac.m"
  MR_String mfilterjavac__Filename_5,
#line 207 "mfilterjavac.m"
  MR_Word * mfilterjavac__MaybeInfo_6)
#line 207 "mfilterjavac.m"
{
#line 210 "mfilterjavac.m"
  {
#line 210 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 210 "mfilterjavac.m"
    MR_Word mfilterjavac__Res_8;

#line 211 "mfilterjavac.m"
    {
#line 211 "mfilterjavac.m"
      mercury__io__open_input_4_p_0(mfilterjavac__Filename_5, &mfilterjavac__Res_8);
    }
#line 235 "mfilterjavac.m"
    if (((MR_tag((MR_Word) mfilterjavac__Res_8)) == (MR_mktag((MR_Integer) 1))))
#line 236 "mfilterjavac.m"
      {
#line 239 "mfilterjavac.m"
        *mfilterjavac__MaybeInfo_6 = (MR_Word) &mfilterjavac_scalar_common_3[1];
#line 236 "mfilterjavac.m"
      }
#line 235 "mfilterjavac.m"
    else
#line 213 "mfilterjavac.m"
      {
#line 213 "mfilterjavac.m"
        MR_Word mfilterjavac__Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Res_8, (MR_Integer) 0)));
#line 213 "mfilterjavac.m"
        MR_Word mfilterjavac__MaybeMarksRev_10;

#line 214 "mfilterjavac.m"
        {
#line 214 "mfilterjavac.m"
          mfilterjavac__read_line_marks_6_p_0(mfilterjavac__Stream_9, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mfilterjavac__MaybeMarksRev_10);
        }
#line 215 "mfilterjavac.m"
        {
#line 215 "mfilterjavac.m"
          mercury__io__close_input_3_p_0(mfilterjavac__Stream_9);
        }
#line 231 "mfilterjavac.m"
        if (((MR_tag((MR_Word) mfilterjavac__MaybeMarksRev_10)) == (MR_mktag((MR_Integer) 1))))
#line 232 "mfilterjavac.m"
          {
#line 232 "mfilterjavac.m"
            MR_String mfilterjavac__Msg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeMarksRev_10, (MR_Integer) 0)));
#line 232 "mfilterjavac.m"
            MR_String mfilterjavac__V_30_30;
#line 232 "mfilterjavac.m"
            MR_String mfilterjavac__V_74_74;
#line 232 "mfilterjavac.m"
            MR_Word mfilterjavac__V_80_80 = (MR_Word) &mfilterjavac_scalar_common_3[0];
#line 232 "mfilterjavac.m"
            MR_String mfilterjavac__V_82_82;
#line 232 "mfilterjavac.m"
            MR_String mfilterjavac__V_83_83;

#line 233 "mfilterjavac.m"
            {
#line 233 "mfilterjavac.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_80_80, mfilterjavac__Msg_20, &mfilterjavac__V_74_74);
            }
#line 233 "mfilterjavac.m"
            {
#line 233 "mfilterjavac.m"
              mfilterjavac__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mfilterjavac__V_74_74);
            }
#line 233 "mfilterjavac.m"
            {
#line 233 "mfilterjavac.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_80_80, mfilterjavac__Filename_5, &mfilterjavac__V_83_83);
            }
#line 233 "mfilterjavac.m"
            {
#line 233 "mfilterjavac.m"
              mfilterjavac__V_30_30 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_83_83, mfilterjavac__V_82_82);
            }
#line 233 "mfilterjavac.m"
            {
#line 233 "mfilterjavac.m"
              MR_Word base;
#line 233 "mfilterjavac.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 233 "mfilterjavac.m"
              *mfilterjavac__MaybeInfo_6 = base;
#line 233 "mfilterjavac.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_30_30));
#line 233 "mfilterjavac.m"
            }
#line 232 "mfilterjavac.m"
          }
#line 231 "mfilterjavac.m"
        else
#line 217 "mfilterjavac.m"
          {
#line 217 "mfilterjavac.m"
            MR_Word mfilterjavac__MarksRev_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__MaybeMarksRev_10, (MR_Integer) 0)));
#line 217 "mfilterjavac.m"
            MR_Word mfilterjavac__Marks_12;
#line 217 "mfilterjavac.m"
            MR_Word mfilterjavac__MaybeInfo0_13;

#line 218 "mfilterjavac.m"
            {
#line 218 "mfilterjavac.m"
              mercury__list__reverse_2_p_0((MR_Word) &mfilterjavac__mfilterjavac__type_ctor_info_line_mark_0, mfilterjavac__MarksRev_11, &mfilterjavac__Marks_12);
            }
#line 219 "mfilterjavac.m"
            {
#line 219 "mfilterjavac.m"
              mfilterjavac__create_line_info_4_p_0(mfilterjavac__Marks_12, mfilterjavac__Filename_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mfilterjavac__MaybeInfo0_13);
            }
#line 223 "mfilterjavac.m"
            if (((MR_tag((MR_Word) mfilterjavac__MaybeInfo0_13)) == (MR_mktag((MR_Integer) 1))))
#line 224 "mfilterjavac.m"
              {
#line 224 "mfilterjavac.m"
                MR_Word mfilterjavac__LineInfoError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeInfo0_13, (MR_Integer) 0)));
#line 224 "mfilterjavac.m"
                MR_String mfilterjavac__ErrFilename_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__LineInfoError_15, (MR_Integer) 0)));
#line 224 "mfilterjavac.m"
                MR_Integer mfilterjavac__ErrLine_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__LineInfoError_15, (MR_Integer) 1)));
#line 224 "mfilterjavac.m"
                MR_Word mfilterjavac__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__LineInfoError_15, (MR_Integer) 2)));
#line 224 "mfilterjavac.m"
                MR_String mfilterjavac__StringError_19;
#line 224 "mfilterjavac.m"
                MR_String mfilterjavac__V_45_45;
#line 224 "mfilterjavac.m"
                MR_String mfilterjavac__V_48_48;
#line 224 "mfilterjavac.m"
                MR_Word mfilterjavac__V_54_54;
#line 224 "mfilterjavac.m"
                MR_String mfilterjavac__V_56_56;
#line 224 "mfilterjavac.m"
                MR_String mfilterjavac__V_57_57;
#line 224 "mfilterjavac.m"
                MR_String mfilterjavac__V_64_64;
#line 224 "mfilterjavac.m"
                MR_String mfilterjavac__V_66_66;
#line 224 "mfilterjavac.m"
                MR_String mfilterjavac__V_67_67;

#line 198 "mfilterjavac.m"
                if ((mfilterjavac__Error_18 == (MR_Integer) 1))
#line 201 "mfilterjavac.m"
                  mfilterjavac__V_45_45 = (MR_String) "BEGIN token without END token";
#line 198 "mfilterjavac.m"
                else
#line 198 "mfilterjavac.m"
                if ((mfilterjavac__Error_18 == (MR_Integer) 2))
#line 203 "mfilterjavac.m"
                  mfilterjavac__V_45_45 = (MR_String) "BEGIN token followed by another BEGIN token";
#line 198 "mfilterjavac.m"
                else
#line 199 "mfilterjavac.m"
                  mfilterjavac__V_45_45 = (MR_String) "END token without BEGIN token";
#line 3616 "mfilterjavac.c"
                mfilterjavac__V_54_54 = (MR_Word) &mfilterjavac_scalar_common_3[0];
#line 228 "mfilterjavac.m"
                {
#line 228 "mfilterjavac.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_54_54, mfilterjavac__V_45_45, &mfilterjavac__V_48_48);
                }
#line 226 "mfilterjavac.m"
                {
#line 226 "mfilterjavac.m"
                  mfilterjavac__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) ": Error understanding line number declration: ", mfilterjavac__V_48_48);
                }
#line 228 "mfilterjavac.m"
                {
#line 228 "mfilterjavac.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mfilterjavac__V_54_54, mfilterjavac__ErrLine_17, &mfilterjavac__V_57_57);
                }
#line 226 "mfilterjavac.m"
                {
#line 226 "mfilterjavac.m"
                  mfilterjavac__V_64_64 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_57_57, mfilterjavac__V_56_56);
                }
#line 226 "mfilterjavac.m"
                {
#line 226 "mfilterjavac.m"
                  mfilterjavac__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ":", mfilterjavac__V_64_64);
                }
#line 228 "mfilterjavac.m"
                {
#line 228 "mfilterjavac.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_54_54, mfilterjavac__ErrFilename_16, &mfilterjavac__V_67_67);
                }
#line 226 "mfilterjavac.m"
                {
#line 226 "mfilterjavac.m"
                  mfilterjavac__StringError_19 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_67_67, mfilterjavac__V_66_66);
                }
#line 229 "mfilterjavac.m"
                {
#line 229 "mfilterjavac.m"
                  MR_Word base;
#line 229 "mfilterjavac.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 229 "mfilterjavac.m"
                  *mfilterjavac__MaybeInfo_6 = base;
#line 229 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__StringError_19));
#line 229 "mfilterjavac.m"
                }
#line 224 "mfilterjavac.m"
              }
#line 223 "mfilterjavac.m"
            else
#line 222 "mfilterjavac.m"
              *mfilterjavac__MaybeInfo_6 = (MR_Word) mfilterjavac__MaybeInfo0_13;
#line 217 "mfilterjavac.m"
          }
#line 213 "mfilterjavac.m"
      }
#line 210 "mfilterjavac.m"
  }
#line 207 "mfilterjavac.m"
}

#line 175 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__line_info_translate_5_p_0(
#line 175 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 175 "mfilterjavac.m"
  MR_String mfilterjavac__HeadVar__2_2,
#line 175 "mfilterjavac.m"
  MR_Integer mfilterjavac__HeadVar__3_3,
#line 175 "mfilterjavac.m"
  MR_String * mfilterjavac__Name_4,
#line 175 "mfilterjavac.m"
  MR_Integer * mfilterjavac__Line_5)
#line 175 "mfilterjavac.m"
{
#line 178 "mfilterjavac.m"
  while (MR_TRUE)
#line 178 "mfilterjavac.m"
    {
#line 178 "mfilterjavac.m"
      /* tailcall optimized into a loop */
#line 178 "mfilterjavac.m"
      {
#line 178 "mfilterjavac.m"
        MR_bool mfilterjavac__succeeded;

#line 178 "mfilterjavac.m"
        if ((mfilterjavac__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 178 "mfilterjavac.m"
          {
#line 178 "mfilterjavac.m"
            *mfilterjavac__Name_4 = mfilterjavac__HeadVar__2_2;
#line 178 "mfilterjavac.m"
            *mfilterjavac__Line_5 = mfilterjavac__HeadVar__3_3;
#line 178 "mfilterjavac.m"
          }
#line 178 "mfilterjavac.m"
        else
#line 179 "mfilterjavac.m"
          {
#line 179 "mfilterjavac.m"
            MR_Word mfilterjavac__Info_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 179 "mfilterjavac.m"
            MR_Word mfilterjavac__Infos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 179 "mfilterjavac.m"
            MR_Integer mfilterjavac__Start_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 0)));
#line 179 "mfilterjavac.m"
            MR_Integer mfilterjavac__End_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 1)));
#line 179 "mfilterjavac.m"
            MR_Integer mfilterjavac__Delta_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 2)));
#line 179 "mfilterjavac.m"
            MR_String mfilterjavac__File_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 3)));

#line 182 "mfilterjavac.m"
            mfilterjavac__succeeded = (mfilterjavac__HeadVar__3_3 < mfilterjavac__Start_14);
#line 187 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 185 "mfilterjavac.m"
              {
#line 185 "mfilterjavac.m"
                *mfilterjavac__Name_4 = mfilterjavac__HeadVar__2_2;
#line 186 "mfilterjavac.m"
                *mfilterjavac__Line_5 = mfilterjavac__HeadVar__3_3;
#line 185 "mfilterjavac.m"
              }
#line 187 "mfilterjavac.m"
            else
#line 192 "mfilterjavac.m"
              {
#line 188 "mfilterjavac.m"
                mfilterjavac__succeeded = (mfilterjavac__HeadVar__3_3 < mfilterjavac__End_15);
#line 192 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 190 "mfilterjavac.m"
                  {
#line 190 "mfilterjavac.m"
                    *mfilterjavac__Line_5 = (mfilterjavac__HeadVar__3_3 + mfilterjavac__Delta_16);
#line 191 "mfilterjavac.m"
                    *mfilterjavac__Name_4 = mfilterjavac__File_17;
#line 190 "mfilterjavac.m"
                  }
#line 192 "mfilterjavac.m"
                else
#line 193 "mfilterjavac.m"
                  {
#line 193 "mfilterjavac.m"
                    /* direct tailcall eliminated */
#line 193 "mfilterjavac.m"
                    {
#line 193 "mfilterjavac.m"
                      MR_Word mfilterjavac__HeadVar__1__tmp_copy_1 = mfilterjavac__Infos_9;

#line 193 "mfilterjavac.m"
                      mfilterjavac__HeadVar__1_1 = mfilterjavac__HeadVar__1__tmp_copy_1;
#line 193 "mfilterjavac.m"
                    }
#line 193 "mfilterjavac.m"
                    continue;
#line 193 "mfilterjavac.m"
                  }
#line 192 "mfilterjavac.m"
              }
#line 179 "mfilterjavac.m"
          }
#line 178 "mfilterjavac.m"
      }
#line 178 "mfilterjavac.m"
      break;
#line 178 "mfilterjavac.m"
    }
#line 175 "mfilterjavac.m"
}

#line 142 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__translate_and_outpot_line_5_p_0(
#line 142 "mfilterjavac.m"
  MR_Word mfilterjavac__LineInfo_6,
#line 142 "mfilterjavac.m"
  MR_String mfilterjavac__Filename_7,
#line 142 "mfilterjavac.m"
  MR_Integer mfilterjavac__LineNo_8,
#line 142 "mfilterjavac.m"
  MR_Word mfilterjavac__RestParts_9,
#line 142 "mfilterjavac.m"
  MR_String * mfilterjavac__OutLine_10)
#line 142 "mfilterjavac.m"
{
#line 145 "mfilterjavac.m"
  {
#line 145 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 145 "mfilterjavac.m"
    MR_String mfilterjavac__MerFileName_11;
#line 145 "mfilterjavac.m"
    MR_Integer mfilterjavac__MerLineNo_12;
#line 145 "mfilterjavac.m"
    MR_String mfilterjavac__Rest_13;
#line 145 "mfilterjavac.m"
    MR_String mfilterjavac__V_24_24;
#line 145 "mfilterjavac.m"
    MR_Word mfilterjavac__V_30_30;
#line 145 "mfilterjavac.m"
    MR_String mfilterjavac__V_31_31;
#line 145 "mfilterjavac.m"
    MR_String mfilterjavac__V_33_33;
#line 145 "mfilterjavac.m"
    MR_String mfilterjavac__V_34_34;
#line 145 "mfilterjavac.m"
    MR_String mfilterjavac__V_41_41;
#line 145 "mfilterjavac.m"
    MR_String mfilterjavac__V_43_43;
#line 145 "mfilterjavac.m"
    MR_String mfilterjavac__V_44_44;

#line 146 "mfilterjavac.m"
    {
#line 146 "mfilterjavac.m"
      mfilterjavac__line_info_translate_5_p_0(mfilterjavac__LineInfo_6, mfilterjavac__Filename_7, mfilterjavac__LineNo_8, &mfilterjavac__MerFileName_11, &mfilterjavac__MerLineNo_12);
    }
#line 147 "mfilterjavac.m"
    {
#line 147 "mfilterjavac.m"
      mfilterjavac__Rest_13 = mercury__string__join_list_2_f_0((MR_String) " ", mfilterjavac__RestParts_9);
    }
#line 3845 "mfilterjavac.c"
    mfilterjavac__V_30_30 = (MR_Word) &mfilterjavac_scalar_common_3[0];
#line 149 "mfilterjavac.m"
    {
#line 149 "mfilterjavac.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_30_30, mfilterjavac__Rest_13, &mfilterjavac__V_24_24);
    }
#line 148 "mfilterjavac.m"
    {
#line 148 "mfilterjavac.m"
      mfilterjavac__V_31_31 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_24_24, (MR_String) "\n");
    }
#line 148 "mfilterjavac.m"
    {
#line 148 "mfilterjavac.m"
      mfilterjavac__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mfilterjavac__V_31_31);
    }
#line 149 "mfilterjavac.m"
    {
#line 149 "mfilterjavac.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mfilterjavac__V_30_30, mfilterjavac__MerLineNo_12, &mfilterjavac__V_34_34);
    }
#line 148 "mfilterjavac.m"
    {
#line 148 "mfilterjavac.m"
      mfilterjavac__V_41_41 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_34_34, mfilterjavac__V_33_33);
    }
#line 148 "mfilterjavac.m"
    {
#line 148 "mfilterjavac.m"
      mfilterjavac__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) ":", mfilterjavac__V_41_41);
    }
#line 149 "mfilterjavac.m"
    {
#line 149 "mfilterjavac.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_30_30, mfilterjavac__MerFileName_11, &mfilterjavac__V_44_44);
    }
#line 148 "mfilterjavac.m"
    {
#line 148 "mfilterjavac.m"
      *mfilterjavac__OutLine_10 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_44_44, mfilterjavac__V_43_43);
    }
#line 145 "mfilterjavac.m"
  }
#line 142 "mfilterjavac.m"
}

#line 105 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac__filter_lines_5_p_0_1(
#line 105 "mfilterjavac.m"
  MR_Box mfilterjavac__closure_arg,
#line 105 "mfilterjavac.m"
  MR_Box mfilterjavac__wrapper_arg_1)
#line 105 "mfilterjavac.m"
{
#line 105 "mfilterjavac.m"
  {
#line 105 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 105 "mfilterjavac.m"
    MR_Box mfilterjavac__closure = mfilterjavac__closure_arg;

#line 105 "mfilterjavac.m"
    {
#line 105 "mfilterjavac.m"
      return mfilterjavac__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mfilterjavac__wrapper_arg_1));
    }
#line 105 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 105 "mfilterjavac.m"
  }
#line 105 "mfilterjavac.m"
}

#line 64 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__filter_lines_5_p_0(
#line 64 "mfilterjavac.m"
  MR_Word * mfilterjavac__Result_6,
#line 64 "mfilterjavac.m"
  MR_Word mfilterjavac__STATE_VARIABLE_Cache_0_18,
#line 64 "mfilterjavac.m"
  MR_Word * mfilterjavac__STATE_VARIABLE_Cache_19)
#line 64 "mfilterjavac.m"
{
#line 67 "mfilterjavac.m"
  while (MR_TRUE)
#line 67 "mfilterjavac.m"
    {
#line 67 "mfilterjavac.m"
      /* tailcall optimized into a loop */
#line 67 "mfilterjavac.m"
      {
#line 67 "mfilterjavac.m"
        MR_bool mfilterjavac__succeeded;
#line 67 "mfilterjavac.m"
        MR_Word mfilterjavac__IOResult_9;

#line 68 "mfilterjavac.m"
        {
#line 68 "mfilterjavac.m"
          mercury__io__read_line_as_string_3_p_0(&mfilterjavac__IOResult_9);
        }
#line 91 "mfilterjavac.m"
        if ((mfilterjavac__IOResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 92 "mfilterjavac.m"
          {
#line 93 "mfilterjavac.m"
            *mfilterjavac__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 92 "mfilterjavac.m"
            *mfilterjavac__STATE_VARIABLE_Cache_19 = mfilterjavac__STATE_VARIABLE_Cache_0_18;
#line 92 "mfilterjavac.m"
          }
#line 91 "mfilterjavac.m"
        else
#line 91 "mfilterjavac.m"
        if (((MR_tag((MR_Word) mfilterjavac__IOResult_9)) == (MR_mktag((MR_Integer) 2))))
#line 95 "mfilterjavac.m"
          {
#line 95 "mfilterjavac.m"
            MR_String mfilterjavac__ErrorStr_17;
#line 95 "mfilterjavac.m"
            MR_String mfilterjavac__V_26_26;
#line 95 "mfilterjavac.m"
            MR_Word mfilterjavac__Error_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mfilterjavac__IOResult_9, (MR_Integer) 0)));
#line 95 "mfilterjavac.m"
            MR_String mfilterjavac__V_35_35;
#line 95 "mfilterjavac.m"
            MR_String mfilterjavac__V_42_42;

#line 96 "mfilterjavac.m"
            {
#line 96 "mfilterjavac.m"
              mfilterjavac__V_26_26 = mercury__io__error_message_1_f_0(mfilterjavac__Error_33);
            }
#line 96 "mfilterjavac.m"
            {
#line 96 "mfilterjavac.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mfilterjavac_scalar_common_3[0], mfilterjavac__V_26_26, &mfilterjavac__V_35_35);
            }
#line 96 "mfilterjavac.m"
            {
#line 96 "mfilterjavac.m"
              mfilterjavac__V_42_42 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_35_35, (MR_String) "\n");
            }
#line 96 "mfilterjavac.m"
            {
#line 96 "mfilterjavac.m"
              mfilterjavac__ErrorStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "stdin: ", mfilterjavac__V_42_42);
            }
#line 97 "mfilterjavac.m"
            {
#line 97 "mfilterjavac.m"
              MR_Word base;
#line 97 "mfilterjavac.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 97 "mfilterjavac.m"
              *mfilterjavac__Result_6 = base;
#line 97 "mfilterjavac.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__ErrorStr_17));
#line 97 "mfilterjavac.m"
            }
#line 95 "mfilterjavac.m"
            *mfilterjavac__STATE_VARIABLE_Cache_19 = mfilterjavac__STATE_VARIABLE_Cache_0_18;
#line 95 "mfilterjavac.m"
          }
#line 91 "mfilterjavac.m"
        else
#line 70 "mfilterjavac.m"
          {
#line 70 "mfilterjavac.m"
            MR_String mfilterjavac__Line0_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__IOResult_9, (MR_Integer) 0)));
#line 4018 "mfilterjavac.c"
            MR_Word mfilterjavac__OtherPartsA_56;
#line 4020 "mfilterjavac.c"
            MR_String mfilterjavac__Filename_58;
#line 4022 "mfilterjavac.c"
            MR_Integer mfilterjavac__LineNo_61;
#line 105 "mfilterjavac.m"
            MR_Word mfilterjavac__PartsA_54;
#line 105 "mfilterjavac.m"
            MR_String mfilterjavac__PartAA_55;
#line 105 "mfilterjavac.m"
            MR_Word mfilterjavac__PartsAA_57;
#line 105 "mfilterjavac.m"
            MR_String mfilterjavac__LineStr_59;
#line 105 "mfilterjavac.m"
            MR_String mfilterjavac__Empty_60;
#line 105 "mfilterjavac.m"
            MR_Char mfilterjavac__V_67_67;
#line 105 "mfilterjavac.m"
            MR_Word mfilterjavac__V_68_68;
#line 105 "mfilterjavac.m"
            MR_Word mfilterjavac__V_69_69;
#line 105 "mfilterjavac.m"
            MR_Word mfilterjavac__V_70_70;

#line 105 "mfilterjavac.m"
            {
#line 105 "mfilterjavac.m"
              mfilterjavac__PartsA_54 = mercury__string__split_at_separator_2_f_0((MR_Word) &mfilterjavac_scalar_common_2[1], mfilterjavac__Line0_10);
            }
#line 106 "mfilterjavac.m"
            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__PartsA_54)) == (MR_mktag((MR_Integer) 1)));
#line 106 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 106 "mfilterjavac.m"
              {
#line 106 "mfilterjavac.m"
                mfilterjavac__PartAA_55 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsA_54, (MR_Integer) 0)));
#line 106 "mfilterjavac.m"
                mfilterjavac__OtherPartsA_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsA_54, (MR_Integer) 1)));
#line 107 "mfilterjavac.m"
                mfilterjavac__V_67_67 = (MR_Char) 58;
#line 107 "mfilterjavac.m"
                {
#line 107 "mfilterjavac.m"
                  mfilterjavac__PartsAA_57 = mercury__string__split_at_char_2_f_0(mfilterjavac__V_67_67, mfilterjavac__PartAA_55);
                }
#line 108 "mfilterjavac.m"
                mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__PartsAA_57)) == (MR_mktag((MR_Integer) 1)));
#line 108 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 108 "mfilterjavac.m"
                  {
#line 108 "mfilterjavac.m"
                    mfilterjavac__Filename_58 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsAA_57, (MR_Integer) 0)));
#line 108 "mfilterjavac.m"
                    mfilterjavac__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsAA_57, (MR_Integer) 1)));
#line 108 "mfilterjavac.m"
                    mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 108 "mfilterjavac.m"
                    if (mfilterjavac__succeeded)
#line 108 "mfilterjavac.m"
                      {
#line 108 "mfilterjavac.m"
                        mfilterjavac__LineStr_59 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_68_68, (MR_Integer) 0)));
#line 108 "mfilterjavac.m"
                        mfilterjavac__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_68_68, (MR_Integer) 1)));
#line 108 "mfilterjavac.m"
                        mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 108 "mfilterjavac.m"
                        if (mfilterjavac__succeeded)
#line 108 "mfilterjavac.m"
                          {
#line 108 "mfilterjavac.m"
                            mfilterjavac__Empty_60 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_69_69, (MR_Integer) 0)));
#line 108 "mfilterjavac.m"
                            mfilterjavac__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_69_69, (MR_Integer) 1)));
#line 108 "mfilterjavac.m"
                            mfilterjavac__succeeded = (mfilterjavac__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 105 "mfilterjavac.m"
                            if (mfilterjavac__succeeded)
#line 105 "mfilterjavac.m"
                              {
#line 109 "mfilterjavac.m"
                                {
#line 109 "mfilterjavac.m"
                                  mfilterjavac__succeeded = mercury__string__to_int_2_p_0(mfilterjavac__LineStr_59, &mfilterjavac__LineNo_61);
                                }
#line 105 "mfilterjavac.m"
                                if (mfilterjavac__succeeded)
#line 110 "mfilterjavac.m"
                                  mfilterjavac__succeeded = (strcmp(mfilterjavac__Empty_60, (MR_String) "") == 0);
#line 105 "mfilterjavac.m"
                              }
#line 108 "mfilterjavac.m"
                          }
#line 108 "mfilterjavac.m"
                      }
#line 108 "mfilterjavac.m"
                  }
#line 106 "mfilterjavac.m"
              }
#line 4120 "mfilterjavac.c"
            if (mfilterjavac__succeeded)
#line 4122 "mfilterjavac.c"
              {
#line 4124 "mfilterjavac.c"
                MR_Word mfilterjavac__MaybeLineInfo_62;
#line 112 "mfilterjavac.m"
                MR_Box mfilterjavac__conv0_MaybeLineInfo_62;

#line 112 "mfilterjavac.m"
                {
#line 112 "mfilterjavac.m"
                  mfilterjavac__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1], mfilterjavac__STATE_VARIABLE_Cache_0_18, ((MR_Box) (mfilterjavac__Filename_58)), &mfilterjavac__conv0_MaybeLineInfo_62);
                }
#line 112 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 112 "mfilterjavac.m"
                  {
#line 112 "mfilterjavac.m"
                    mfilterjavac__MaybeLineInfo_62 = ((MR_Word) mfilterjavac__conv0_MaybeLineInfo_62);
#line 112 "mfilterjavac.m"
                    mfilterjavac__succeeded = MR_TRUE;
#line 112 "mfilterjavac.m"
                  }
#line 4144 "mfilterjavac.c"
                if (mfilterjavac__succeeded)
#line 4146 "mfilterjavac.c"
                  {
#line 4148 "mfilterjavac.c"
                    MR_String mfilterjavac__Line_12;

#line 118 "mfilterjavac.m"
                    if ((mfilterjavac__MaybeLineInfo_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 119 "mfilterjavac.m"
                      mfilterjavac__Line_12 = mfilterjavac__Line0_10;
#line 118 "mfilterjavac.m"
                    else
#line 114 "mfilterjavac.m"
                      {
#line 114 "mfilterjavac.m"
                        MR_Word mfilterjavac__LineInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeLineInfo_62, (MR_Integer) 0)));

#line 115 "mfilterjavac.m"
                        {
#line 115 "mfilterjavac.m"
                          mfilterjavac__translate_and_outpot_line_5_p_0(mfilterjavac__LineInfo_63, mfilterjavac__Filename_58, mfilterjavac__LineNo_61, mfilterjavac__OtherPartsA_56, &mfilterjavac__Line_12);
                        }
#line 114 "mfilterjavac.m"
                      }
#line 72 "mfilterjavac.m"
                    {
#line 72 "mfilterjavac.m"
                      mercury__io__write_string_3_p_0(mfilterjavac__Line_12);
                    }
#line 73 "mfilterjavac.m"
                    /* direct tailcall eliminated */
#line 73 "mfilterjavac.m"
                    {
#line 73 "mfilterjavac.m"
                    }
#line 73 "mfilterjavac.m"
                    continue;
#line 4182 "mfilterjavac.c"
                  }
#line 4184 "mfilterjavac.c"
                else
#line 4186 "mfilterjavac.c"
                  {
#line 4188 "mfilterjavac.c"
                    MR_Word mfilterjavac__MaybeLineInfoErr_64;

#line 125 "mfilterjavac.m"
                    {
#line 125 "mfilterjavac.m"
                      mfilterjavac__maybe_get_line_info_4_p_0(mfilterjavac__Filename_58, &mfilterjavac__MaybeLineInfoErr_64);
                    }
#line 4196 "mfilterjavac.c"
                    if (((MR_tag((MR_Word) mfilterjavac__MaybeLineInfoErr_64)) == (MR_mktag((MR_Integer) 1))))
#line 4198 "mfilterjavac.c"
                      {
#line 4200 "mfilterjavac.c"
                        MR_String mfilterjavac__Error_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeLineInfoErr_64, (MR_Integer) 0)));
#line 4202 "mfilterjavac.c"
                        MR_Word mfilterjavac__ResultLines_99;
#line 4204 "mfilterjavac.c"
                        MR_Word mfilterjavac__STATE_VARIABLE_Cache_28_100;

#line 134 "mfilterjavac.m"
                        {
#line 134 "mfilterjavac.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1], ((MR_Box) (mfilterjavac__Filename_58)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), mfilterjavac__STATE_VARIABLE_Cache_0_18, &mfilterjavac__STATE_VARIABLE_Cache_28_100);
                        }
#line 72 "mfilterjavac.m"
                        {
#line 72 "mfilterjavac.m"
                          mercury__io__write_string_3_p_0(mfilterjavac__Line0_10);
                        }
#line 73 "mfilterjavac.m"
                        {
#line 73 "mfilterjavac.m"
                          mfilterjavac__filter_lines_5_p_0(&mfilterjavac__ResultLines_99, mfilterjavac__STATE_VARIABLE_Cache_28_100, mfilterjavac__STATE_VARIABLE_Cache_19);
                        }
#line 86 "mfilterjavac.m"
                        if (((MR_tag((MR_Word) mfilterjavac__ResultLines_99)) == (MR_mktag((MR_Integer) 1))))
#line 88 "mfilterjavac.m"
                          *mfilterjavac__Result_6 = mfilterjavac__ResultLines_99;
#line 86 "mfilterjavac.m"
                        else
#line 85 "mfilterjavac.m"
                          {
#line 85 "mfilterjavac.m"
                            MR_Word base;
#line 85 "mfilterjavac.m"
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 85 "mfilterjavac.m"
                            *mfilterjavac__Result_6 = base;
#line 85 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mfilterjavac__Error_14));
#line 85 "mfilterjavac.m"
                          }
#line 4240 "mfilterjavac.c"
                      }
#line 4242 "mfilterjavac.c"
                    else
#line 4244 "mfilterjavac.c"
                      {
#line 4246 "mfilterjavac.c"
                        MR_Word mfilterjavac__V_75_75;
#line 4248 "mfilterjavac.c"
                        MR_Word mfilterjavac__LineInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__MaybeLineInfoErr_64, (MR_Integer) 0)));
#line 4250 "mfilterjavac.c"
                        MR_String mfilterjavac__Line_105;
#line 4252 "mfilterjavac.c"
                        MR_Word mfilterjavac__STATE_VARIABLE_Cache_28_107;

#line 128 "mfilterjavac.m"
                        {
#line 128 "mfilterjavac.m"
                          mfilterjavac__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 128 "mfilterjavac.m"
                          MR_hl_field(MR_mktag(1), mfilterjavac__V_75_75, 0) = ((MR_Box) (mfilterjavac__LineInfo_78));
#line 128 "mfilterjavac.m"
                        }
#line 128 "mfilterjavac.m"
                        {
#line 128 "mfilterjavac.m"
                          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1], ((MR_Box) (mfilterjavac__Filename_58)), ((MR_Box) (mfilterjavac__V_75_75)), mfilterjavac__STATE_VARIABLE_Cache_0_18, &mfilterjavac__STATE_VARIABLE_Cache_28_107);
                        }
#line 129 "mfilterjavac.m"
                        {
#line 129 "mfilterjavac.m"
                          mfilterjavac__translate_and_outpot_line_5_p_0(mfilterjavac__LineInfo_78, mfilterjavac__Filename_58, mfilterjavac__LineNo_61, mfilterjavac__OtherPartsA_56, &mfilterjavac__Line_105);
                        }
#line 72 "mfilterjavac.m"
                        {
#line 72 "mfilterjavac.m"
                          mercury__io__write_string_3_p_0(mfilterjavac__Line_105);
                        }
#line 73 "mfilterjavac.m"
                        /* direct tailcall eliminated */
#line 73 "mfilterjavac.m"
                        {
#line 73 "mfilterjavac.m"
                          MR_Word mfilterjavac__STATE_VARIABLE_Cache_0__tmp_copy_18 = mfilterjavac__STATE_VARIABLE_Cache_28_107;

#line 73 "mfilterjavac.m"
                          mfilterjavac__STATE_VARIABLE_Cache_0_18 = mfilterjavac__STATE_VARIABLE_Cache_0__tmp_copy_18;
#line 73 "mfilterjavac.m"
                        }
#line 73 "mfilterjavac.m"
                        continue;
#line 4291 "mfilterjavac.c"
                      }
#line 4293 "mfilterjavac.c"
                  }
#line 4295 "mfilterjavac.c"
              }
#line 4297 "mfilterjavac.c"
            else
#line 4299 "mfilterjavac.c"
              {
#line 72 "mfilterjavac.m"
                {
#line 72 "mfilterjavac.m"
                  mercury__io__write_string_3_p_0(mfilterjavac__Line0_10);
                }
#line 73 "mfilterjavac.m"
                /* direct tailcall eliminated */
#line 73 "mfilterjavac.m"
                {
#line 73 "mfilterjavac.m"
                }
#line 73 "mfilterjavac.m"
                continue;
#line 4314 "mfilterjavac.c"
              }
#line 70 "mfilterjavac.m"
          }
#line 67 "mfilterjavac.m"
      }
#line 67 "mfilterjavac.m"
      break;
#line 67 "mfilterjavac.m"
    }
#line 64 "mfilterjavac.m"
}

#line 28 "mfilterjavac.m"
void MR_CALL 
main_2_p_0(void)
#line 28 "mfilterjavac.m"
{
#line 45 "mfilterjavac.m"
  {
#line 45 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 45 "mfilterjavac.m"
    MR_Word mfilterjavac__Result_4;
#line 45 "mfilterjavac.m"
    MR_Word mfilterjavac__V_9_9;
#line 46 "mfilterjavac.m"
    MR_Word mfilterjavac__V_5_5;

#line 46 "mfilterjavac.m"
    {
#line 46 "mfilterjavac.m"
      mfilterjavac__V_9_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1]);
    }
#line 46 "mfilterjavac.m"
    {
#line 46 "mfilterjavac.m"
      mfilterjavac__filter_lines_5_p_0(&mfilterjavac__Result_4, mfilterjavac__V_9_9, &mfilterjavac__V_5_5);
    }
#line 49 "mfilterjavac.m"
    if ((mfilterjavac__Result_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 48 "mfilterjavac.m"
      {
#line 48 "mfilterjavac.m"
      }
#line 49 "mfilterjavac.m"
    else
#line 49 "mfilterjavac.m"
    if (((MR_tag((MR_Word) mfilterjavac__Result_4)) == (MR_mktag((MR_Integer) 1))))
#line 50 "mfilterjavac.m"
      {
#line 50 "mfilterjavac.m"
        MR_String mfilterjavac__Error_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Result_4, (MR_Integer) 0)));
#line 50 "mfilterjavac.m"
        MR_Word mfilterjavac__V_15_15;
#line 50 "mfilterjavac.m"
        MR_String mfilterjavac__V_16_16;

#line 51 "mfilterjavac.m"
        {
#line 51 "mfilterjavac.m"
          mfilterjavac__V_15_15 = mercury__io__stderr_stream_0_f_0();
        }
#line 51 "mfilterjavac.m"
        {
#line 51 "mfilterjavac.m"
          mfilterjavac__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Error: ", mfilterjavac__Error_6);
        }
#line 51 "mfilterjavac.m"
        {
#line 51 "mfilterjavac.m"
          mercury__io__write_string_4_p_0(mfilterjavac__V_15_15, mfilterjavac__V_16_16);
        }
#line 52 "mfilterjavac.m"
        {
#line 52 "mfilterjavac.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 52 "mfilterjavac.m"
          return;
        }
#line 50 "mfilterjavac.m"
      }
#line 49 "mfilterjavac.m"
    else
#line 54 "mfilterjavac.m"
      {
#line 54 "mfilterjavac.m"
        MR_Word mfilterjavac__V_11_11;
#line 54 "mfilterjavac.m"
        MR_String mfilterjavac__V_12_12;
#line 54 "mfilterjavac.m"
        MR_String mfilterjavac__Error_21 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__Result_4, (MR_Integer) 0)));

#line 55 "mfilterjavac.m"
        {
#line 55 "mfilterjavac.m"
          mfilterjavac__V_11_11 = mercury__io__stderr_stream_0_f_0();
        }
#line 55 "mfilterjavac.m"
        {
#line 55 "mfilterjavac.m"
          mfilterjavac__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: ", mfilterjavac__Error_21);
        }
#line 55 "mfilterjavac.m"
        {
#line 55 "mfilterjavac.m"
          mercury__io__write_string_4_p_0(mfilterjavac__V_11_11, mfilterjavac__V_12_12);
#line 55 "mfilterjavac.m"
          return;
        }
#line 54 "mfilterjavac.m"
      }
#line 45 "mfilterjavac.m"
  }
#line 28 "mfilterjavac.m"
}

void mercury__mfilterjavac__init(void)
{
}

void mercury__mfilterjavac__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mfilterjavac__mfilterjavac__type_ctor_info_begin_or_end_block_0);
	MR_register_type_ctor_info(&mfilterjavac__mfilterjavac__type_ctor_info_filter_result_0);
	MR_register_type_ctor_info(&mfilterjavac__mfilterjavac__type_ctor_info_line_info_0);
	MR_register_type_ctor_info(&mfilterjavac__mfilterjavac__type_ctor_info_line_info_cache_0);
	MR_register_type_ctor_info(&mfilterjavac__mfilterjavac__type_ctor_info_line_info_end_0);
	MR_register_type_ctor_info(&mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_0);
	MR_register_type_ctor_info(&mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_type_0);
	MR_register_type_ctor_info(&mfilterjavac__mfilterjavac__type_ctor_info_line_mark_0);
}

void mercury__mfilterjavac__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mfilterjavac. */
