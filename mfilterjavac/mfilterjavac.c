/*
** Automatically generated from `mfilterjavac.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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




#line 68 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0;

#line 71 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1;

#line 74 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_begin_or_end_block_0[2];

#line 77 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0[2];

#line 80 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0[2];

#line 83 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0;

#line 86 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_1[1];

#line 89 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1;

#line 92 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_2[1];

#line 95 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2;

#line 98 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0[1];

#line 101 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1[1];

#line 104 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2[1];

#line 107 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_filter_result_0[3];

#line 110 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0[3];

#line 113 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_filter_result_0[3];

#line 116 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_0_0[4];

#line 119 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_0_0[4];

#line 122 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0;

#line 125 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0[1];

#line 128 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0[1];

#line 131 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_0[1];

#line 134 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_0[1];

#line 137 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0;

#line 140 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0;

#line 143 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct2 mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0;

#line 146 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_0[1];

#line 149 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0;

#line 152 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1;

#line 155 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_2[1];

#line 158 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2;

#line 161 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0[1];

#line 164 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1[1];

#line 167 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2[1];

#line 170 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_end_0[3];

#line 173 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0[3];

#line 176 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0[3];

#line 179 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_error_0_0[3];

#line 182 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_error_0_0[3];

#line 185 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0;

#line 188 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0[1];

#line 191 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0[1];

#line 194 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0[1];

#line 197 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0[1];

#line 200 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0;

#line 203 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1;

#line 206 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2;

#line 209 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_line_info_error_type_0[3];

#line 212 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0[3];

#line 215 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0[3];

#line 218 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_mark_0_0[4];

#line 221 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_mark_0_0[4];

#line 224 "mfilterjavac.c"
static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0;

#line 227 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0[1];

#line 230 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0[1];

#line 233 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0[1];

#line 236 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_mark_0[1];

#line 239 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0_10001(
#line 242 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 244 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 247 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0_10001(
#line 250 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 252 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 254 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 257 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0_10001(
#line 260 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 262 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 265 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0_10001(
#line 268 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 270 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 272 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 275 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0_10001(
#line 278 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 280 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 283 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_0_0_10001(
#line 286 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 288 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 290 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 293 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0_10001(
#line 296 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 298 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 301 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0_10001(
#line 304 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 306 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 308 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 311 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0_10001(
#line 314 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 316 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 319 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0_10001(
#line 322 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 324 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 326 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 329 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0_10001(
#line 332 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 334 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 337 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0_10001(
#line 340 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 342 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 344 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 347 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0_10001(
#line 350 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 352 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 355 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0_10001(
#line 358 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 360 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 362 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3);

#line 365 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0_10001(
#line 368 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 370 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2);

#line 373 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0_10001(
#line 376 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 378 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 380 "mfilterjavac.c"
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



#line 681 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0 = {
  (MR_String) "begin_block",
  (MR_Integer) 0
};

#line 687 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1 = {
  (MR_String) "end_block",
  (MR_Integer) 1
};

#line 693 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_begin_or_end_block_0[2] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1
};

#line 699 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0[2] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1
};

#line 705 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 711 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_begin_or_end_block_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mfilterjavac____Unify____begin_or_end_block_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____begin_or_end_block_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "begin_or_end_block",
  {
    mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0
  },
  {
    mfilterjavac__mfilterjavac__enum_value_ordered_begin_or_end_block_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0
};

#line 732 "mfilterjavac.c"
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

#line 747 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 752 "mfilterjavac.c"
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

#line 767 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 772 "mfilterjavac.c"
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

#line 787 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0
};

#line 792 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1
};

#line 797 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2
};

#line 802 "mfilterjavac.c"
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

#line 821 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0[3] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1,
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0,
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2
};

#line 828 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_filter_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 835 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_filter_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____filter_result_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____filter_result_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "filter_result",
  {
    mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0
  },
  {
    mfilterjavac__mfilterjavac__du_ptag_ordered_filter_result_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_filter_result_0
};

#line 856 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 864 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_0_0[4] = {
  (MR_String) "li_start",
  (MR_String) "li_end",
  (MR_String) "li_delta",
  (MR_String) "li_orig_file"
};

#line 872 "mfilterjavac.c"
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

#line 887 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0
};

#line 892 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0
  }
};

#line 901 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0
};

#line 906 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_0[1] = {
  (MR_Integer) 0
};

#line 911 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_info_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info",
  {
    mfilterjavac__mfilterjavac__du_name_ordered_line_info_0
  },
  {
    mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_info_0
};

#line 932 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_0
  }
};

#line 940 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0
  }
};

#line 948 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct2 mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0
  }
};

#line 957 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_cache_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mfilterjavac____Unify____line_info_cache_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_cache_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_cache",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 978 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 983 "mfilterjavac.c"
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

#line 998 "mfilterjavac.c"
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

#line 1013 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1018 "mfilterjavac.c"
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

#line 1033 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1
};

#line 1038 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0
};

#line 1043 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2
};

#line 1048 "mfilterjavac.c"
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

#line 1067 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0[3] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2,
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0,
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1
};

#line 1074 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1081 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_end_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_info_end_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_end_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_end",
  {
    mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0
  },
  {
    mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_end_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0
};

#line 1102 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_error_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_type_0
};

#line 1109 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_error_0_0[3] = {
  (MR_String) "li_filename",
  (MR_String) "li_lineno",
  (MR_String) "li_error"
};

#line 1116 "mfilterjavac.c"
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

#line 1131 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0
};

#line 1136 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0
  }
};

#line 1145 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0
};

#line 1150 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0[1] = {
  (MR_Integer) 0
};

#line 1155 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_info_error_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_error_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_error",
  {
    mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0
  },
  {
    mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0
};

#line 1176 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0 = {
  (MR_String) "lie_end_without_beginning",
  (MR_Integer) 0
};

#line 1182 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1 = {
  (MR_String) "lie_beginning_without_end",
  (MR_Integer) 1
};

#line 1188 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2 = {
  (MR_String) "lie_duplicate_beginning",
  (MR_Integer) 2
};

#line 1194 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_line_info_error_type_0[3] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2
};

#line 1201 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0[3] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0
};

#line 1208 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1215 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mfilterjavac____Unify____line_info_error_type_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_error_type_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_error_type",
  {
    mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0
  },
  {
    mfilterjavac__mfilterjavac__enum_value_ordered_line_info_error_type_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0
};

#line 1236 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_mark_0_0[4] = {
  (MR_PseudoTypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_begin_or_end_block_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1244 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_mark_0_0[4] = {
  (MR_String) "lm_type",
  (MR_String) "lm_mer_file",
  (MR_String) "lm_java_line_no",
  (MR_String) "lm_mer_line_no"
};

#line 1252 "mfilterjavac.c"
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

#line 1267 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0
};

#line 1272 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0
  }
};

#line 1281 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0
};

#line 1286 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_mark_0[1] = {
  (MR_Integer) 0
};

#line 1291 "mfilterjavac.c"
const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_mark_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_mark_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_mark_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_mark",
  {
    mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0
  },
  {
    mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mfilterjavac__mfilterjavac__functor_number_map_line_mark_0
};

#line 1312 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0_10001(
#line 1315 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1317 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1319 "mfilterjavac.c"
{
#line 1321 "mfilterjavac.c"
  {
#line 1323 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1326 "mfilterjavac.c"
    {
#line 1328 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____begin_or_end_block_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1331 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1333 "mfilterjavac.c"
  }
#line 1335 "mfilterjavac.c"
}

#line 1338 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0_10001(
#line 1341 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1343 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1345 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1347 "mfilterjavac.c"
{
#line 1349 "mfilterjavac.c"
  {
#line 1351 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1354 "mfilterjavac.c"
    {
#line 1356 "mfilterjavac.c"
      mfilterjavac____Compare____begin_or_end_block_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1359 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1361 "mfilterjavac.c"
  }
#line 1363 "mfilterjavac.c"
}

#line 1366 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0_10001(
#line 1369 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1371 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1373 "mfilterjavac.c"
{
#line 1375 "mfilterjavac.c"
  {
#line 1377 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1380 "mfilterjavac.c"
    {
#line 1382 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____filter_result_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1385 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1387 "mfilterjavac.c"
  }
#line 1389 "mfilterjavac.c"
}

#line 1392 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0_10001(
#line 1395 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1397 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1399 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1401 "mfilterjavac.c"
{
#line 1403 "mfilterjavac.c"
  {
#line 1405 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1408 "mfilterjavac.c"
    {
#line 1410 "mfilterjavac.c"
      mfilterjavac____Compare____filter_result_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1413 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1415 "mfilterjavac.c"
  }
#line 1417 "mfilterjavac.c"
}

#line 1420 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0_10001(
#line 1423 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1425 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1427 "mfilterjavac.c"
{
#line 1429 "mfilterjavac.c"
  {
#line 1431 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1434 "mfilterjavac.c"
    {
#line 1436 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1439 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1441 "mfilterjavac.c"
  }
#line 1443 "mfilterjavac.c"
}

#line 1446 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_0_0_10001(
#line 1449 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1451 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1453 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1455 "mfilterjavac.c"
{
#line 1457 "mfilterjavac.c"
  {
#line 1459 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1462 "mfilterjavac.c"
    {
#line 1464 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1467 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1469 "mfilterjavac.c"
  }
#line 1471 "mfilterjavac.c"
}

#line 1474 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0_10001(
#line 1477 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1479 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1481 "mfilterjavac.c"
{
#line 1483 "mfilterjavac.c"
  {
#line 1485 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1488 "mfilterjavac.c"
    {
#line 1490 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_cache_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1493 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1495 "mfilterjavac.c"
  }
#line 1497 "mfilterjavac.c"
}

#line 1500 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0_10001(
#line 1503 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1505 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1507 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1509 "mfilterjavac.c"
{
#line 1511 "mfilterjavac.c"
  {
#line 1513 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1516 "mfilterjavac.c"
    {
#line 1518 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_cache_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1521 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1523 "mfilterjavac.c"
  }
#line 1525 "mfilterjavac.c"
}

#line 1528 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0_10001(
#line 1531 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1533 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1535 "mfilterjavac.c"
{
#line 1537 "mfilterjavac.c"
  {
#line 1539 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1542 "mfilterjavac.c"
    {
#line 1544 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_end_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1547 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1549 "mfilterjavac.c"
  }
#line 1551 "mfilterjavac.c"
}

#line 1554 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0_10001(
#line 1557 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1559 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1561 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1563 "mfilterjavac.c"
{
#line 1565 "mfilterjavac.c"
  {
#line 1567 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1570 "mfilterjavac.c"
    {
#line 1572 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_end_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1575 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1577 "mfilterjavac.c"
  }
#line 1579 "mfilterjavac.c"
}

#line 1582 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0_10001(
#line 1585 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1587 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1589 "mfilterjavac.c"
{
#line 1591 "mfilterjavac.c"
  {
#line 1593 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1596 "mfilterjavac.c"
    {
#line 1598 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_error_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1601 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1603 "mfilterjavac.c"
  }
#line 1605 "mfilterjavac.c"
}

#line 1608 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0_10001(
#line 1611 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1613 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1615 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1617 "mfilterjavac.c"
{
#line 1619 "mfilterjavac.c"
  {
#line 1621 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1624 "mfilterjavac.c"
    {
#line 1626 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_error_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1629 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1631 "mfilterjavac.c"
  }
#line 1633 "mfilterjavac.c"
}

#line 1636 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0_10001(
#line 1639 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1641 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1643 "mfilterjavac.c"
{
#line 1645 "mfilterjavac.c"
  {
#line 1647 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1650 "mfilterjavac.c"
    {
#line 1652 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_error_type_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1655 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1657 "mfilterjavac.c"
  }
#line 1659 "mfilterjavac.c"
}

#line 1662 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0_10001(
#line 1665 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1667 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1669 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1671 "mfilterjavac.c"
{
#line 1673 "mfilterjavac.c"
  {
#line 1675 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1678 "mfilterjavac.c"
    {
#line 1680 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_error_type_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1683 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1685 "mfilterjavac.c"
  }
#line 1687 "mfilterjavac.c"
}

#line 1690 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0_10001(
#line 1693 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1695 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1697 "mfilterjavac.c"
{
#line 1699 "mfilterjavac.c"
  {
#line 1701 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1704 "mfilterjavac.c"
    {
#line 1706 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_mark_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1709 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1711 "mfilterjavac.c"
  }
#line 1713 "mfilterjavac.c"
}

#line 1716 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0_10001(
#line 1719 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1721 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1723 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1725 "mfilterjavac.c"
{
#line 1727 "mfilterjavac.c"
  {
#line 1729 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1732 "mfilterjavac.c"
    {
#line 1734 "mfilterjavac.c"
      mfilterjavac____Compare____line_mark_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1737 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1739 "mfilterjavac.c"
  }
#line 1741 "mfilterjavac.c"
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
#line 1768 "mfilterjavac.c"
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
#line 1802 "mfilterjavac.c"
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
#line 1822 "mfilterjavac.c"
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
#line 1842 "mfilterjavac.c"
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

#line 1915 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_3_3 == mfilterjavac__V_7_7);
#line 242 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 242 "mfilterjavac.m"
          {
#line 1921 "mfilterjavac.c"
            mfilterjavac__succeeded = (strcmp(mfilterjavac__V_4_4, mfilterjavac__V_8_8) == 0);
#line 242 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 242 "mfilterjavac.m"
              {
#line 1927 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_5_5 == mfilterjavac__V_9_9);
#line 242 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 1931 "mfilterjavac.c"
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
#line 1987 "mfilterjavac.c"
  {
#line 1989 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded = (mfilterjavac__HeadVar__2_1 == mfilterjavac__HeadVar__2_2);

#line 1992 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1994 "mfilterjavac.c"
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
#line 2023 "mfilterjavac.c"
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
#line 2049 "mfilterjavac.c"
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
#line 2069 "mfilterjavac.c"
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

#line 2145 "mfilterjavac.c"
        mfilterjavac__succeeded = (strcmp(mfilterjavac__V_3_3, mfilterjavac__V_6_6) == 0);
#line 161 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 161 "mfilterjavac.m"
          {
#line 2151 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_4_4 == mfilterjavac__V_7_7);
#line 161 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 2155 "mfilterjavac.c"
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
#line 2192 "mfilterjavac.c"
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
#line 2206 "mfilterjavac.c"
            *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "mfilterjavac.m"
          else
#line 2210 "mfilterjavac.c"
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
#line 2223 "mfilterjavac.c"
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
#line 2245 "mfilterjavac.c"
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
#line 2258 "mfilterjavac.c"
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 323 "mfilterjavac.m"
            else
#line 323 "mfilterjavac.m"
              if (((MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2264 "mfilterjavac.c"
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
#line 2347 "mfilterjavac.c"
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
#line 2370 "mfilterjavac.c"
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
#line 2469 "mfilterjavac.c"
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
#line 2499 "mfilterjavac.c"
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
#line 2519 "mfilterjavac.c"
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
#line 2539 "mfilterjavac.c"
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

#line 2612 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_3_3 == mfilterjavac__V_7_7);
#line 153 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 153 "mfilterjavac.m"
          {
#line 2618 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_4_4 == mfilterjavac__V_8_8);
#line 153 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 153 "mfilterjavac.m"
              {
#line 2624 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_5_5 == mfilterjavac__V_9_9);
#line 153 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 2628 "mfilterjavac.c"
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
#line 2667 "mfilterjavac.c"
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
#line 2681 "mfilterjavac.c"
            *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 59 "mfilterjavac.m"
          else
#line 2685 "mfilterjavac.c"
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
#line 2698 "mfilterjavac.c"
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
#line 2720 "mfilterjavac.c"
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
#line 2733 "mfilterjavac.c"
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 59 "mfilterjavac.m"
            else
#line 59 "mfilterjavac.m"
              if (((MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2739 "mfilterjavac.c"
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
#line 2822 "mfilterjavac.c"
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
#line 2845 "mfilterjavac.c"
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
#line 2899 "mfilterjavac.c"
  {
#line 2901 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded = (mfilterjavac__HeadVar__2_1 == mfilterjavac__HeadVar__2_2);

#line 2904 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 2906 "mfilterjavac.c"
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
#line 2980 "mfilterjavac.c"
              if ((mfilterjavac__Marks0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2982 "mfilterjavac.c"
                {
#line 2984 "mfilterjavac.c"
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
#line 3011 "mfilterjavac.c"
                }
#line 3013 "mfilterjavac.c"
              else
#line 3015 "mfilterjavac.c"
                {
#line 3017 "mfilterjavac.c"
                  MR_Word mfilterjavac__Mark_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Marks0_9, (MR_Integer) 0)));
#line 3019 "mfilterjavac.c"
                  MR_Word mfilterjavac__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 0)));
#line 3021 "mfilterjavac.c"
                  MR_Integer mfilterjavac__End_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 2)));
#line 3023 "mfilterjavac.c"
                  MR_Word mfilterjavac__Marks_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Marks0_9, (MR_Integer) 1)));
#line 333 "mfilterjavac.m"
                  MR_String mfilterjavac__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 1)));
#line 333 "mfilterjavac.m"
                  MR_Integer mfilterjavac__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 3)));

#line 3030 "mfilterjavac.c"
                  if ((mfilterjavac__Type_34 == (MR_Integer) 0))
#line 3032 "mfilterjavac.c"
                    {
#line 3034 "mfilterjavac.c"
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
#line 3061 "mfilterjavac.c"
                    }
#line 3063 "mfilterjavac.c"
                  else
#line 3065 "mfilterjavac.c"
                    {
#line 3067 "mfilterjavac.c"
                      MR_Integer mfilterjavac__Delta_20 = (mfilterjavac__MerLineNo_16 - mfilterjavac__JavaLineNo_15);
#line 3069 "mfilterjavac.c"
                      MR_Word mfilterjavac__Info_21;
#line 3071 "mfilterjavac.c"
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
#line 3115 "mfilterjavac.c"
                    }
#line 3117 "mfilterjavac.c"
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
#line 3647 "mfilterjavac.c"
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
#line 3876 "mfilterjavac.c"
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
#line 93 "mfilterjavac.m"
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
#line 97 "mfilterjavac.m"
              *mfilterjavac__STATE_VARIABLE_Cache_19 = mfilterjavac__STATE_VARIABLE_Cache_0_18;
#line 95 "mfilterjavac.m"
            }
#line 91 "mfilterjavac.m"
          else
#line 70 "mfilterjavac.m"
            {
#line 70 "mfilterjavac.m"
              MR_String mfilterjavac__Line0_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__IOResult_9, (MR_Integer) 0)));
#line 4049 "mfilterjavac.c"
              MR_Word mfilterjavac__OtherPartsA_56;
#line 4051 "mfilterjavac.c"
              MR_String mfilterjavac__Filename_58;
#line 4053 "mfilterjavac.c"
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
#line 4151 "mfilterjavac.c"
              if (mfilterjavac__succeeded)
#line 4153 "mfilterjavac.c"
                {
#line 4155 "mfilterjavac.c"
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
#line 4175 "mfilterjavac.c"
                  if (mfilterjavac__succeeded)
#line 4177 "mfilterjavac.c"
                    {
#line 4179 "mfilterjavac.c"
                      MR_String mfilterjavac__Line_12;

#line 118 "mfilterjavac.m"
                      if ((mfilterjavac__MaybeLineInfo_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 122 "mfilterjavac.m"
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
#line 4213 "mfilterjavac.c"
                    }
#line 4215 "mfilterjavac.c"
                  else
#line 4217 "mfilterjavac.c"
                    {
#line 4219 "mfilterjavac.c"
                      MR_Word mfilterjavac__MaybeLineInfoErr_64;

#line 125 "mfilterjavac.m"
                      {
#line 125 "mfilterjavac.m"
                        mfilterjavac__maybe_get_line_info_4_p_0(mfilterjavac__Filename_58, &mfilterjavac__MaybeLineInfoErr_64);
                      }
#line 4227 "mfilterjavac.c"
                      if (((MR_tag((MR_Word) mfilterjavac__MaybeLineInfoErr_64)) == (MR_mktag((MR_Integer) 1))))
#line 4229 "mfilterjavac.c"
                        {
#line 4231 "mfilterjavac.c"
                          MR_String mfilterjavac__Error_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeLineInfoErr_64, (MR_Integer) 0)));
#line 4233 "mfilterjavac.c"
                          MR_Word mfilterjavac__ResultLines_99;
#line 4235 "mfilterjavac.c"
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
#line 4271 "mfilterjavac.c"
                        }
#line 4273 "mfilterjavac.c"
                      else
#line 4275 "mfilterjavac.c"
                        {
#line 4277 "mfilterjavac.c"
                          MR_Word mfilterjavac__V_75_75;
#line 4279 "mfilterjavac.c"
                          MR_Word mfilterjavac__LineInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__MaybeLineInfoErr_64, (MR_Integer) 0)));
#line 4281 "mfilterjavac.c"
                          MR_String mfilterjavac__Line_105;
#line 4283 "mfilterjavac.c"
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
#line 4322 "mfilterjavac.c"
                        }
#line 4324 "mfilterjavac.c"
                    }
#line 4326 "mfilterjavac.c"
                }
#line 4328 "mfilterjavac.c"
              else
#line 4330 "mfilterjavac.c"
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
#line 4345 "mfilterjavac.c"
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
