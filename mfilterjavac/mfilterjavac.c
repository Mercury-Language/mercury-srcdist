/*
** Automatically generated from `mfilterjavac.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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

#line 241 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0(
#line 241 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 241 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 241 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 241 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0(
#line 241 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 241 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 167 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0(
#line 167 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 167 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 167 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 167 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0(
#line 167 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_1,
#line 167 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 160 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0(
#line 160 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 160 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 160 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 160 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0(
#line 160 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 160 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 322 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0(
#line 322 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 322 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 322 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 322 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0(
#line 322 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 322 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 172 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0(
#line 172 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 172 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 172 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 172 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0(
#line 172 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 172 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 152 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_0_0(
#line 152 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 152 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 152 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 152 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0(
#line 152 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 152 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 58 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0(
#line 58 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 58 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 58 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 58 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0(
#line 58 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 58 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 249 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0(
#line 249 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 249 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 249 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3);

#line 249 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0(
#line 249 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_1,
#line 249 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2);

#line 290 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__create_line_info_4_p_0(
#line 290 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 290 "mfilterjavac.m"
  MR_String mfilterjavac__HeadVar__2_2,
#line 290 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3,
#line 290 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__4_4);

#line 253 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__read_line_marks_6_p_0(
#line 253 "mfilterjavac.m"
  MR_Word mfilterjavac__Stream_7,
#line 253 "mfilterjavac.m"
  MR_Integer mfilterjavac__JavaLineNo_8,
#line 253 "mfilterjavac.m"
  MR_Word mfilterjavac__Marks0_9,
#line 253 "mfilterjavac.m"
  MR_Word * mfilterjavac__MaybeMarks_10);

#line 206 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__maybe_get_line_info_4_p_0(
#line 206 "mfilterjavac.m"
  MR_String mfilterjavac__Filename_5,
#line 206 "mfilterjavac.m"
  MR_Word * mfilterjavac__MaybeInfo_6);

#line 174 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__line_info_translate_5_p_0(
#line 174 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 174 "mfilterjavac.m"
  MR_String mfilterjavac__HeadVar__2_2,
#line 174 "mfilterjavac.m"
  MR_Integer mfilterjavac__HeadVar__3_3,
#line 174 "mfilterjavac.m"
  MR_String * mfilterjavac__Name_4,
#line 174 "mfilterjavac.m"
  MR_Integer * mfilterjavac__Line_5);

#line 141 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__translate_and_outpot_line_5_p_0(
#line 141 "mfilterjavac.m"
  MR_Word mfilterjavac__LineInfo_6,
#line 141 "mfilterjavac.m"
  MR_String mfilterjavac__Filename_7,
#line 141 "mfilterjavac.m"
  MR_Integer mfilterjavac__LineNo_8,
#line 141 "mfilterjavac.m"
  MR_Word mfilterjavac__RestParts_9,
#line 141 "mfilterjavac.m"
  MR_String * mfilterjavac__OutLine_10);

#line 104 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac__filter_lines_5_p_0_1(
#line 104 "mfilterjavac.m"
  MR_Box mfilterjavac__closure_arg,
#line 104 "mfilterjavac.m"
  MR_Box mfilterjavac__wrapper_arg_1);

#line 63 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__filter_lines_5_p_0(
#line 63 "mfilterjavac.m"
  MR_Word * mfilterjavac__Result_6,
#line 63 "mfilterjavac.m"
  MR_Word mfilterjavac__STATE_VARIABLE_Cache_0_18,
#line 63 "mfilterjavac.m"
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
#include "string.mh"
#include "time.mh"



#line 674 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0 = {
  (MR_String) "begin_block",
  (MR_Integer) 0
};

#line 680 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1 = {
  (MR_String) "end_block",
  (MR_Integer) 1
};

#line 686 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_begin_or_end_block_0[2] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1
};

#line 692 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0[2] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1
};

#line 698 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 704 "mfilterjavac.c"
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

#line 721 "mfilterjavac.c"
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

#line 736 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 741 "mfilterjavac.c"
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

#line 756 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 761 "mfilterjavac.c"
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

#line 776 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0
};

#line 781 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1
};

#line 786 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2
};

#line 791 "mfilterjavac.c"
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

#line 810 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0[3] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1,
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0,
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2
};

#line 817 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_filter_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 824 "mfilterjavac.c"
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

#line 841 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 849 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_0_0[4] = {
  (MR_String) "li_start",
  (MR_String) "li_end",
  (MR_String) "li_delta",
  (MR_String) "li_orig_file"
};

#line 857 "mfilterjavac.c"
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

#line 872 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0
};

#line 877 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0
  }
};

#line 886 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0
};

#line 891 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_0[1] = {
  (MR_Integer) 0
};

#line 896 "mfilterjavac.c"
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

#line 913 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_0
  }
};

#line 921 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct1 mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0
  }
};

#line 929 "mfilterjavac.c"
static const MR_FA_TypeInfo_Struct2 mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0
  }
};

#line 938 "mfilterjavac.c"
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

#line 955 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 960 "mfilterjavac.c"
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

#line 975 "mfilterjavac.c"
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

#line 990 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 995 "mfilterjavac.c"
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

#line 1010 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1
};

#line 1015 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0
};

#line 1020 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2
};

#line 1025 "mfilterjavac.c"
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

#line 1044 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0[3] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2,
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0,
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1
};

#line 1051 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1058 "mfilterjavac.c"
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

#line 1075 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_error_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_type_0
};

#line 1082 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_error_0_0[3] = {
  (MR_String) "li_filename",
  (MR_String) "li_lineno",
  (MR_String) "li_error"
};

#line 1089 "mfilterjavac.c"
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

#line 1104 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0
};

#line 1109 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0
  }
};

#line 1118 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0
};

#line 1123 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0[1] = {
  (MR_Integer) 0
};

#line 1128 "mfilterjavac.c"
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

#line 1145 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0 = {
  (MR_String) "lie_end_without_beginning",
  (MR_Integer) 0
};

#line 1151 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1 = {
  (MR_String) "lie_beginning_without_end",
  (MR_Integer) 1
};

#line 1157 "mfilterjavac.c"
static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2 = {
  (MR_String) "lie_duplicate_beginning",
  (MR_Integer) 2
};

#line 1163 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_line_info_error_type_0[3] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2
};

#line 1170 "mfilterjavac.c"
static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0[3] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0
};

#line 1177 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1184 "mfilterjavac.c"
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

#line 1201 "mfilterjavac.c"
static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_mark_0_0[4] = {
  (MR_PseudoTypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_begin_or_end_block_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1209 "mfilterjavac.c"
static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_mark_0_0[4] = {
  (MR_String) "lm_type",
  (MR_String) "lm_mer_file",
  (MR_String) "lm_java_line_no",
  (MR_String) "lm_mer_line_no"
};

#line 1217 "mfilterjavac.c"
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

#line 1232 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0
};

#line 1237 "mfilterjavac.c"
static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0
  }
};

#line 1246 "mfilterjavac.c"
static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0
};

#line 1251 "mfilterjavac.c"
static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_mark_0[1] = {
  (MR_Integer) 0
};

#line 1256 "mfilterjavac.c"
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

#line 1273 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0_10001(
#line 1276 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1278 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1280 "mfilterjavac.c"
{
#line 1282 "mfilterjavac.c"
  {
#line 1284 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1287 "mfilterjavac.c"
    {
#line 1289 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____begin_or_end_block_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1292 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1294 "mfilterjavac.c"
  }
#line 1296 "mfilterjavac.c"
}

#line 1299 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0_10001(
#line 1302 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1304 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1306 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1308 "mfilterjavac.c"
{
#line 1310 "mfilterjavac.c"
  {
#line 1312 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1315 "mfilterjavac.c"
    {
#line 1317 "mfilterjavac.c"
      mfilterjavac____Compare____begin_or_end_block_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1320 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1322 "mfilterjavac.c"
  }
#line 1324 "mfilterjavac.c"
}

#line 1327 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0_10001(
#line 1330 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1332 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1334 "mfilterjavac.c"
{
#line 1336 "mfilterjavac.c"
  {
#line 1338 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1341 "mfilterjavac.c"
    {
#line 1343 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____filter_result_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1346 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1348 "mfilterjavac.c"
  }
#line 1350 "mfilterjavac.c"
}

#line 1353 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0_10001(
#line 1356 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1358 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1360 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1362 "mfilterjavac.c"
{
#line 1364 "mfilterjavac.c"
  {
#line 1366 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1369 "mfilterjavac.c"
    {
#line 1371 "mfilterjavac.c"
      mfilterjavac____Compare____filter_result_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1374 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1376 "mfilterjavac.c"
  }
#line 1378 "mfilterjavac.c"
}

#line 1381 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0_10001(
#line 1384 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1386 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1388 "mfilterjavac.c"
{
#line 1390 "mfilterjavac.c"
  {
#line 1392 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1395 "mfilterjavac.c"
    {
#line 1397 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1400 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1402 "mfilterjavac.c"
  }
#line 1404 "mfilterjavac.c"
}

#line 1407 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_0_0_10001(
#line 1410 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1412 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1414 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1416 "mfilterjavac.c"
{
#line 1418 "mfilterjavac.c"
  {
#line 1420 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1423 "mfilterjavac.c"
    {
#line 1425 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1428 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1430 "mfilterjavac.c"
  }
#line 1432 "mfilterjavac.c"
}

#line 1435 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0_10001(
#line 1438 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1440 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1442 "mfilterjavac.c"
{
#line 1444 "mfilterjavac.c"
  {
#line 1446 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1449 "mfilterjavac.c"
    {
#line 1451 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_cache_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1454 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1456 "mfilterjavac.c"
  }
#line 1458 "mfilterjavac.c"
}

#line 1461 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0_10001(
#line 1464 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1466 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1468 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1470 "mfilterjavac.c"
{
#line 1472 "mfilterjavac.c"
  {
#line 1474 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1477 "mfilterjavac.c"
    {
#line 1479 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_cache_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1482 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1484 "mfilterjavac.c"
  }
#line 1486 "mfilterjavac.c"
}

#line 1489 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0_10001(
#line 1492 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1494 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1496 "mfilterjavac.c"
{
#line 1498 "mfilterjavac.c"
  {
#line 1500 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1503 "mfilterjavac.c"
    {
#line 1505 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_end_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1508 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1510 "mfilterjavac.c"
  }
#line 1512 "mfilterjavac.c"
}

#line 1515 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0_10001(
#line 1518 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1520 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1522 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1524 "mfilterjavac.c"
{
#line 1526 "mfilterjavac.c"
  {
#line 1528 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1531 "mfilterjavac.c"
    {
#line 1533 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_end_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1536 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1538 "mfilterjavac.c"
  }
#line 1540 "mfilterjavac.c"
}

#line 1543 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0_10001(
#line 1546 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1548 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1550 "mfilterjavac.c"
{
#line 1552 "mfilterjavac.c"
  {
#line 1554 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1557 "mfilterjavac.c"
    {
#line 1559 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_error_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1562 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1564 "mfilterjavac.c"
  }
#line 1566 "mfilterjavac.c"
}

#line 1569 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0_10001(
#line 1572 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1574 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1576 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1578 "mfilterjavac.c"
{
#line 1580 "mfilterjavac.c"
  {
#line 1582 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1585 "mfilterjavac.c"
    {
#line 1587 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_error_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1590 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1592 "mfilterjavac.c"
  }
#line 1594 "mfilterjavac.c"
}

#line 1597 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0_10001(
#line 1600 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1602 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1604 "mfilterjavac.c"
{
#line 1606 "mfilterjavac.c"
  {
#line 1608 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1611 "mfilterjavac.c"
    {
#line 1613 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_info_error_type_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1616 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1618 "mfilterjavac.c"
  }
#line 1620 "mfilterjavac.c"
}

#line 1623 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0_10001(
#line 1626 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1628 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1630 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1632 "mfilterjavac.c"
{
#line 1634 "mfilterjavac.c"
  {
#line 1636 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1639 "mfilterjavac.c"
    {
#line 1641 "mfilterjavac.c"
      mfilterjavac____Compare____line_info_error_type_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1644 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1646 "mfilterjavac.c"
  }
#line 1648 "mfilterjavac.c"
}

#line 1651 "mfilterjavac.c"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0_10001(
#line 1654 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_1,
#line 1656 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2)
#line 1658 "mfilterjavac.c"
{
#line 1660 "mfilterjavac.c"
  {
#line 1662 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded;

#line 1665 "mfilterjavac.c"
    {
#line 1667 "mfilterjavac.c"
      mfilterjavac__succeeded = mfilterjavac____Unify____line_mark_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    }
#line 1670 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1672 "mfilterjavac.c"
  }
#line 1674 "mfilterjavac.c"
}

#line 1677 "mfilterjavac.c"
static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0_10001(
#line 1680 "mfilterjavac.c"
  MR_Box * mfilterjavac__wrapper_arg_1,
#line 1682 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_2,
#line 1684 "mfilterjavac.c"
  MR_Box mfilterjavac__wrapper_arg_3)
#line 1686 "mfilterjavac.c"
{
#line 1688 "mfilterjavac.c"
  {
#line 1690 "mfilterjavac.c"
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

#line 1693 "mfilterjavac.c"
    {
#line 1695 "mfilterjavac.c"
      mfilterjavac____Compare____line_mark_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    }
#line 1698 "mfilterjavac.c"
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
#line 1700 "mfilterjavac.c"
  }
#line 1702 "mfilterjavac.c"
}

#line 241 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0(
#line 241 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 241 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 241 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 241 "mfilterjavac.m"
{
#line 241 "mfilterjavac.m"
  {
#line 241 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 241 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_15 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 241 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_16 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 241 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_15 == mfilterjavac__CastY_16);
#line 241 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 1729 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 241 "mfilterjavac.m"
    else
#line 241 "mfilterjavac.m"
      {
#line 241 "mfilterjavac.m"
        MR_Word mfilterjavac__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 241 "mfilterjavac.m"
        MR_String mfilterjavac__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));
#line 241 "mfilterjavac.m"
        MR_Word mfilterjavac__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));
#line 241 "mfilterjavac.m"
        MR_String mfilterjavac__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 1)));
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 2)));
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 3)));
#line 241 "mfilterjavac.m"
        MR_Word mfilterjavac__V_12_12;
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_21_21 = (MR_Integer) mfilterjavac__V_4_4;
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_22_22 = (MR_Integer) mfilterjavac__V_8_8;

#line 241 "mfilterjavac.m"
        {
#line 241 "mfilterjavac.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_12_12, mfilterjavac__V_21_21, mfilterjavac__V_22_22);
        }
#line 1763 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_12_12 == (MR_Integer) 0);
#line 241 "mfilterjavac.m"
        mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 241 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 241 "mfilterjavac.m"
          *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_12_12;
#line 241 "mfilterjavac.m"
        else
#line 241 "mfilterjavac.m"
          {
#line 241 "mfilterjavac.m"
            MR_Word mfilterjavac__V_13_13;

#line 241 "mfilterjavac.m"
            {
#line 241 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&mfilterjavac__V_13_13, mfilterjavac__V_5_5, mfilterjavac__V_9_9);
            }
#line 1783 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_13_13 == (MR_Integer) 0);
#line 241 "mfilterjavac.m"
            mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 241 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 241 "mfilterjavac.m"
              *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_13_13;
#line 241 "mfilterjavac.m"
            else
#line 241 "mfilterjavac.m"
              {
#line 241 "mfilterjavac.m"
                MR_Word mfilterjavac__V_14_14;

#line 241 "mfilterjavac.m"
                {
#line 241 "mfilterjavac.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_14_14, mfilterjavac__V_6_6, mfilterjavac__V_10_10);
                }
#line 1803 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_14_14 == (MR_Integer) 0);
#line 241 "mfilterjavac.m"
                mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 241 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 241 "mfilterjavac.m"
                  *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_14_14;
#line 241 "mfilterjavac.m"
                else
#line 241 "mfilterjavac.m"
                  {
#line 241 "mfilterjavac.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_7_7, mfilterjavac__V_11_11);
#line 241 "mfilterjavac.m"
                    return;
                  }
#line 241 "mfilterjavac.m"
              }
#line 241 "mfilterjavac.m"
          }
#line 241 "mfilterjavac.m"
      }
#line 241 "mfilterjavac.m"
  }
#line 241 "mfilterjavac.m"
}

#line 241 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0(
#line 241 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 241 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 241 "mfilterjavac.m"
{
#line 241 "mfilterjavac.m"
  {
#line 241 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 241 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_11 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 241 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_12 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 241 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_11 == mfilterjavac__CastY_12);
#line 241 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 241 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 241 "mfilterjavac.m"
    else
#line 241 "mfilterjavac.m"
      {
#line 241 "mfilterjavac.m"
        MR_Word mfilterjavac__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 241 "mfilterjavac.m"
        MR_String mfilterjavac__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 2)));
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 3)));
#line 241 "mfilterjavac.m"
        MR_Word mfilterjavac__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 241 "mfilterjavac.m"
        MR_String mfilterjavac__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 241 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));

#line 1876 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_3_3 == mfilterjavac__V_7_7);
#line 241 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 241 "mfilterjavac.m"
          {
#line 1882 "mfilterjavac.c"
            mfilterjavac__succeeded = (strcmp(mfilterjavac__V_4_4, mfilterjavac__V_8_8) == 0);
#line 241 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 241 "mfilterjavac.m"
              {
#line 1888 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_5_5 == mfilterjavac__V_9_9);
#line 241 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 1892 "mfilterjavac.c"
                  mfilterjavac__succeeded = (mfilterjavac__V_6_6 == mfilterjavac__V_10_10);
#line 241 "mfilterjavac.m"
              }
#line 241 "mfilterjavac.m"
          }
#line 241 "mfilterjavac.m"
      }
#line 241 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 241 "mfilterjavac.m"
  }
#line 241 "mfilterjavac.m"
}

#line 167 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0(
#line 167 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 167 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 167 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 167 "mfilterjavac.m"
{
#line 167 "mfilterjavac.m"
  {
#line 167 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 167 "mfilterjavac.m"
    MR_Integer mfilterjavac__Cast_HeadVar1_4 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 167 "mfilterjavac.m"
    MR_Integer mfilterjavac__Cast_HeadVar2_5 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 167 "mfilterjavac.m"
    {
#line 167 "mfilterjavac.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Cast_HeadVar1_4, mfilterjavac__Cast_HeadVar2_5);
#line 167 "mfilterjavac.m"
      return;
    }
#line 167 "mfilterjavac.m"
  }
#line 167 "mfilterjavac.m"
}

#line 167 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0(
#line 167 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_1,
#line 167 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 167 "mfilterjavac.m"
{
#line 1948 "mfilterjavac.c"
  {
#line 1950 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded = (mfilterjavac__HeadVar__2_1 == mfilterjavac__HeadVar__2_2);

#line 1953 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 1955 "mfilterjavac.c"
  }
#line 167 "mfilterjavac.m"
}

#line 160 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0(
#line 160 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 160 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 160 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 160 "mfilterjavac.m"
{
#line 160 "mfilterjavac.m"
  {
#line 160 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 160 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_12 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 160 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_13 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 160 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_12 == mfilterjavac__CastY_13);
#line 160 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 1984 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 160 "mfilterjavac.m"
    else
#line 160 "mfilterjavac.m"
      {
#line 160 "mfilterjavac.m"
        MR_String mfilterjavac__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 160 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 160 "mfilterjavac.m"
        MR_Word mfilterjavac__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 160 "mfilterjavac.m"
        MR_String mfilterjavac__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));
#line 160 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 1)));
#line 160 "mfilterjavac.m"
        MR_Word mfilterjavac__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 2)));
#line 160 "mfilterjavac.m"
        MR_Word mfilterjavac__V_10_10;

#line 160 "mfilterjavac.m"
        {
#line 160 "mfilterjavac.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mfilterjavac__V_10_10, mfilterjavac__V_4_4, mfilterjavac__V_7_7);
        }
#line 2010 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_10_10 == (MR_Integer) 0);
#line 160 "mfilterjavac.m"
        mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 160 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 160 "mfilterjavac.m"
          *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_10_10;
#line 160 "mfilterjavac.m"
        else
#line 160 "mfilterjavac.m"
          {
#line 160 "mfilterjavac.m"
            MR_Word mfilterjavac__V_11_11;

#line 160 "mfilterjavac.m"
            {
#line 160 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_11_11, mfilterjavac__V_5_5, mfilterjavac__V_8_8);
            }
#line 2030 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_11_11 == (MR_Integer) 0);
#line 160 "mfilterjavac.m"
            mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 160 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 160 "mfilterjavac.m"
              *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_11_11;
#line 160 "mfilterjavac.m"
            else
#line 160 "mfilterjavac.m"
              {
#line 160 "mfilterjavac.m"
                MR_Integer mfilterjavac__V_17_17 = (MR_Integer) mfilterjavac__V_6_6;
#line 160 "mfilterjavac.m"
                MR_Integer mfilterjavac__V_18_18 = (MR_Integer) mfilterjavac__V_9_9;

#line 160 "mfilterjavac.m"
                {
#line 160 "mfilterjavac.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_17_17, mfilterjavac__V_18_18);
#line 160 "mfilterjavac.m"
                  return;
                }
#line 160 "mfilterjavac.m"
              }
#line 160 "mfilterjavac.m"
          }
#line 160 "mfilterjavac.m"
      }
#line 160 "mfilterjavac.m"
  }
#line 160 "mfilterjavac.m"
}

#line 160 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0(
#line 160 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 160 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 160 "mfilterjavac.m"
{
#line 160 "mfilterjavac.m"
  {
#line 160 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 160 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_9 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 160 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_10 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 160 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_9 == mfilterjavac__CastY_10);
#line 160 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 160 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 160 "mfilterjavac.m"
    else
#line 160 "mfilterjavac.m"
      {
#line 160 "mfilterjavac.m"
        MR_String mfilterjavac__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 160 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 160 "mfilterjavac.m"
        MR_Word mfilterjavac__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 2)));
#line 160 "mfilterjavac.m"
        MR_String mfilterjavac__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 160 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 160 "mfilterjavac.m"
        MR_Word mfilterjavac__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));

#line 2106 "mfilterjavac.c"
        mfilterjavac__succeeded = (strcmp(mfilterjavac__V_3_3, mfilterjavac__V_6_6) == 0);
#line 160 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 160 "mfilterjavac.m"
          {
#line 2112 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_4_4 == mfilterjavac__V_7_7);
#line 160 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 2116 "mfilterjavac.c"
              mfilterjavac__succeeded = (mfilterjavac__V_5_5 == mfilterjavac__V_8_8);
#line 160 "mfilterjavac.m"
          }
#line 160 "mfilterjavac.m"
      }
#line 160 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 160 "mfilterjavac.m"
  }
#line 160 "mfilterjavac.m"
}

#line 322 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0(
#line 322 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 322 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 322 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 322 "mfilterjavac.m"
{
#line 322 "mfilterjavac.m"
  {
#line 322 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 322 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_16 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 322 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_17 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 322 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_16 == mfilterjavac__CastY_17);
#line 322 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 2153 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 322 "mfilterjavac.m"
    else
#line 322 "mfilterjavac.m"
#line 322 "mfilterjavac.m"
      switch (MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) {
#line 322 "mfilterjavac.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 322 "mfilterjavac.m"
        case (MR_Integer) 0:
#line 322 "mfilterjavac.m"
#line 322 "mfilterjavac.m"
          switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
#line 322 "mfilterjavac.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 322 "mfilterjavac.m"
            case (MR_Integer) 0:
#line 322 "mfilterjavac.m"
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 322 "mfilterjavac.m"
              break;
#line 322 "mfilterjavac.m"
            case (MR_Integer) 1:
#line 2177 "mfilterjavac.c"
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 322 "mfilterjavac.m"
              break;
#line 322 "mfilterjavac.m"
            case (MR_Integer) 2:
#line 2183 "mfilterjavac.c"
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 322 "mfilterjavac.m"
              break;
#line 322 "mfilterjavac.m"
          }
#line 322 "mfilterjavac.m"
          break;
#line 322 "mfilterjavac.m"
        case (MR_Integer) 1:
#line 322 "mfilterjavac.m"
          {
#line 322 "mfilterjavac.m"
            MR_Integer mfilterjavac__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

#line 322 "mfilterjavac.m"
#line 322 "mfilterjavac.m"
            switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
#line 322 "mfilterjavac.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 322 "mfilterjavac.m"
              case (MR_Integer) 0:
#line 2205 "mfilterjavac.c"
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 322 "mfilterjavac.m"
                break;
#line 322 "mfilterjavac.m"
              case (MR_Integer) 1:
#line 322 "mfilterjavac.m"
                {
#line 322 "mfilterjavac.m"
                  MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

#line 322 "mfilterjavac.m"
                  {
#line 322 "mfilterjavac.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_21_21, mfilterjavac__V_5_5);
#line 322 "mfilterjavac.m"
                    return;
                  }
#line 322 "mfilterjavac.m"
                }
#line 322 "mfilterjavac.m"
                break;
#line 322 "mfilterjavac.m"
              case (MR_Integer) 2:
#line 2229 "mfilterjavac.c"
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 322 "mfilterjavac.m"
                break;
#line 322 "mfilterjavac.m"
            }
#line 322 "mfilterjavac.m"
          }
#line 322 "mfilterjavac.m"
          break;
#line 322 "mfilterjavac.m"
        case (MR_Integer) 2:
#line 322 "mfilterjavac.m"
          {
#line 322 "mfilterjavac.m"
            MR_Integer mfilterjavac__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

#line 322 "mfilterjavac.m"
#line 322 "mfilterjavac.m"
            switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
#line 322 "mfilterjavac.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 322 "mfilterjavac.m"
              case (MR_Integer) 0:
#line 2253 "mfilterjavac.c"
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 322 "mfilterjavac.m"
                break;
#line 322 "mfilterjavac.m"
              case (MR_Integer) 1:
#line 2259 "mfilterjavac.c"
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 322 "mfilterjavac.m"
                break;
#line 322 "mfilterjavac.m"
              case (MR_Integer) 2:
#line 322 "mfilterjavac.m"
                {
#line 322 "mfilterjavac.m"
                  MR_Integer mfilterjavac__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

#line 322 "mfilterjavac.m"
                  {
#line 322 "mfilterjavac.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_20_20, mfilterjavac__V_15_15);
#line 322 "mfilterjavac.m"
                    return;
                  }
#line 322 "mfilterjavac.m"
                }
#line 322 "mfilterjavac.m"
                break;
#line 322 "mfilterjavac.m"
            }
#line 322 "mfilterjavac.m"
          }
#line 322 "mfilterjavac.m"
          break;
#line 322 "mfilterjavac.m"
      }
#line 322 "mfilterjavac.m"
  }
#line 322 "mfilterjavac.m"
}

#line 322 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0(
#line 322 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 322 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 322 "mfilterjavac.m"
{
#line 322 "mfilterjavac.m"
  {
#line 322 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 322 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_9 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 322 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_10 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 322 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_9 == mfilterjavac__CastY_10);
#line 322 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 322 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 322 "mfilterjavac.m"
    else
#line 322 "mfilterjavac.m"
#line 322 "mfilterjavac.m"
      switch (MR_tag((MR_Word) mfilterjavac__HeadVar__1_1)) {
#line 322 "mfilterjavac.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 322 "mfilterjavac.m"
        case (MR_Integer) 0:
#line 322 "mfilterjavac.m"
          {
#line 322 "mfilterjavac.m"
            MR_Integer mfilterjavac__CastX_5 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 322 "mfilterjavac.m"
            MR_Integer mfilterjavac__CastY_6 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 322 "mfilterjavac.m"
            mfilterjavac__succeeded = (mfilterjavac__CastY_6 == mfilterjavac__CastX_5);
#line 322 "mfilterjavac.m"
          }
#line 322 "mfilterjavac.m"
          break;
#line 322 "mfilterjavac.m"
        case (MR_Integer) 1:
#line 322 "mfilterjavac.m"
          {
#line 322 "mfilterjavac.m"
            MR_Integer mfilterjavac__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 322 "mfilterjavac.m"
            MR_Integer mfilterjavac__V_4_4;

#line 322 "mfilterjavac.m"
            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 322 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 322 "mfilterjavac.m"
              {
#line 322 "mfilterjavac.m"
                mfilterjavac__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 2357 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_3_3 == mfilterjavac__V_4_4);
#line 322 "mfilterjavac.m"
              }
#line 322 "mfilterjavac.m"
          }
#line 322 "mfilterjavac.m"
          break;
#line 322 "mfilterjavac.m"
        case (MR_Integer) 2:
#line 322 "mfilterjavac.m"
          {
#line 322 "mfilterjavac.m"
            MR_Integer mfilterjavac__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 322 "mfilterjavac.m"
            MR_Integer mfilterjavac__V_8_8;

#line 322 "mfilterjavac.m"
            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 322 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 322 "mfilterjavac.m"
              {
#line 322 "mfilterjavac.m"
                mfilterjavac__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 2382 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_7_7 == mfilterjavac__V_8_8);
#line 322 "mfilterjavac.m"
              }
#line 322 "mfilterjavac.m"
          }
#line 322 "mfilterjavac.m"
          break;
#line 322 "mfilterjavac.m"
      }
#line 322 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 322 "mfilterjavac.m"
  }
#line 322 "mfilterjavac.m"
}

#line 172 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0(
#line 172 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 172 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 172 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 172 "mfilterjavac.m"
{
#line 172 "mfilterjavac.m"
  {
#line 172 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 172 "mfilterjavac.m"
    MR_Word mfilterjavac__Cast_HeadVar1_4 = mfilterjavac__HeadVar__2_2;
#line 172 "mfilterjavac.m"
    MR_Word mfilterjavac__Cast_HeadVar2_5 = mfilterjavac__HeadVar__3_3;

#line 172 "mfilterjavac.m"
    {
#line 172 "mfilterjavac.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mfilterjavac_scalar_common_2[0], mfilterjavac__HeadVar__1_1, ((MR_Box) (mfilterjavac__Cast_HeadVar1_4)), ((MR_Box) (mfilterjavac__Cast_HeadVar2_5)));
#line 172 "mfilterjavac.m"
      return;
    }
#line 172 "mfilterjavac.m"
  }
#line 172 "mfilterjavac.m"
}

#line 172 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0(
#line 172 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 172 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 172 "mfilterjavac.m"
{
#line 172 "mfilterjavac.m"
  {
#line 172 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 172 "mfilterjavac.m"
    MR_Word mfilterjavac__Cast_HeadVar1_3 = mfilterjavac__HeadVar__1_1;
#line 172 "mfilterjavac.m"
    MR_Word mfilterjavac__Cast_HeadVar2_4 = mfilterjavac__HeadVar__2_2;

#line 172 "mfilterjavac.m"
    {
#line 172 "mfilterjavac.m"
      return mfilterjavac__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mfilterjavac_scalar_common_2[0], ((MR_Box) (mfilterjavac__Cast_HeadVar1_3)), ((MR_Box) (mfilterjavac__Cast_HeadVar2_4)));
    }
#line 172 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 172 "mfilterjavac.m"
  }
#line 172 "mfilterjavac.m"
}

#line 152 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____line_info_0_0(
#line 152 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 152 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 152 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 152 "mfilterjavac.m"
{
#line 152 "mfilterjavac.m"
  {
#line 152 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 152 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_15 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 152 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_16 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 152 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_15 == mfilterjavac__CastY_16);
#line 152 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 2485 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 152 "mfilterjavac.m"
    else
#line 152 "mfilterjavac.m"
      {
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 152 "mfilterjavac.m"
        MR_String mfilterjavac__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 1)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 2)));
#line 152 "mfilterjavac.m"
        MR_String mfilterjavac__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 3)));
#line 152 "mfilterjavac.m"
        MR_Word mfilterjavac__V_12_12;

#line 152 "mfilterjavac.m"
        {
#line 152 "mfilterjavac.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_12_12, mfilterjavac__V_4_4, mfilterjavac__V_8_8);
        }
#line 2515 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_12_12 == (MR_Integer) 0);
#line 152 "mfilterjavac.m"
        mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 152 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 152 "mfilterjavac.m"
          *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_12_12;
#line 152 "mfilterjavac.m"
        else
#line 152 "mfilterjavac.m"
          {
#line 152 "mfilterjavac.m"
            MR_Word mfilterjavac__V_13_13;

#line 152 "mfilterjavac.m"
            {
#line 152 "mfilterjavac.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_13_13, mfilterjavac__V_5_5, mfilterjavac__V_9_9);
            }
#line 2535 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_13_13 == (MR_Integer) 0);
#line 152 "mfilterjavac.m"
            mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 152 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 152 "mfilterjavac.m"
              *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_13_13;
#line 152 "mfilterjavac.m"
            else
#line 152 "mfilterjavac.m"
              {
#line 152 "mfilterjavac.m"
                MR_Word mfilterjavac__V_14_14;

#line 152 "mfilterjavac.m"
                {
#line 152 "mfilterjavac.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__V_14_14, mfilterjavac__V_6_6, mfilterjavac__V_10_10);
                }
#line 2555 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_14_14 == (MR_Integer) 0);
#line 152 "mfilterjavac.m"
                mfilterjavac__succeeded = !(mfilterjavac__succeeded);
#line 152 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 152 "mfilterjavac.m"
                  *mfilterjavac__HeadVar__1_1 = mfilterjavac__V_14_14;
#line 152 "mfilterjavac.m"
                else
#line 152 "mfilterjavac.m"
                  {
#line 152 "mfilterjavac.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_7_7, mfilterjavac__V_11_11);
#line 152 "mfilterjavac.m"
                    return;
                  }
#line 152 "mfilterjavac.m"
              }
#line 152 "mfilterjavac.m"
          }
#line 152 "mfilterjavac.m"
      }
#line 152 "mfilterjavac.m"
  }
#line 152 "mfilterjavac.m"
}

#line 152 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0(
#line 152 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 152 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 152 "mfilterjavac.m"
{
#line 152 "mfilterjavac.m"
  {
#line 152 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 152 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_11 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 152 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_12 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 152 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_11 == mfilterjavac__CastY_12);
#line 152 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 152 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 152 "mfilterjavac.m"
    else
#line 152 "mfilterjavac.m"
      {
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 2)));
#line 152 "mfilterjavac.m"
        MR_String mfilterjavac__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 3)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "mfilterjavac.m"
        MR_Integer mfilterjavac__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
#line 152 "mfilterjavac.m"
        MR_String mfilterjavac__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));

#line 2628 "mfilterjavac.c"
        mfilterjavac__succeeded = (mfilterjavac__V_3_3 == mfilterjavac__V_7_7);
#line 152 "mfilterjavac.m"
        if (mfilterjavac__succeeded)
#line 152 "mfilterjavac.m"
          {
#line 2634 "mfilterjavac.c"
            mfilterjavac__succeeded = (mfilterjavac__V_4_4 == mfilterjavac__V_8_8);
#line 152 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 152 "mfilterjavac.m"
              {
#line 2640 "mfilterjavac.c"
                mfilterjavac__succeeded = (mfilterjavac__V_5_5 == mfilterjavac__V_9_9);
#line 152 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 2644 "mfilterjavac.c"
                  mfilterjavac__succeeded = (strcmp(mfilterjavac__V_6_6, mfilterjavac__V_10_10) == 0);
#line 152 "mfilterjavac.m"
              }
#line 152 "mfilterjavac.m"
          }
#line 152 "mfilterjavac.m"
      }
#line 152 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 152 "mfilterjavac.m"
  }
#line 152 "mfilterjavac.m"
}

#line 58 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0(
#line 58 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 58 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 58 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 58 "mfilterjavac.m"
{
#line 58 "mfilterjavac.m"
  {
#line 58 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 58 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_16 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 58 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_17 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 58 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_16 == mfilterjavac__CastY_17);
#line 58 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 2683 "mfilterjavac.c"
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "mfilterjavac.m"
    else
#line 58 "mfilterjavac.m"
#line 58 "mfilterjavac.m"
      switch (MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) {
#line 58 "mfilterjavac.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 58 "mfilterjavac.m"
        case (MR_Integer) 0:
#line 58 "mfilterjavac.m"
#line 58 "mfilterjavac.m"
          switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
#line 58 "mfilterjavac.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 58 "mfilterjavac.m"
            case (MR_Integer) 0:
#line 58 "mfilterjavac.m"
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "mfilterjavac.m"
              break;
#line 58 "mfilterjavac.m"
            case (MR_Integer) 1:
#line 2707 "mfilterjavac.c"
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 58 "mfilterjavac.m"
              break;
#line 58 "mfilterjavac.m"
            case (MR_Integer) 2:
#line 2713 "mfilterjavac.c"
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 58 "mfilterjavac.m"
              break;
#line 58 "mfilterjavac.m"
          }
#line 58 "mfilterjavac.m"
          break;
#line 58 "mfilterjavac.m"
        case (MR_Integer) 1:
#line 58 "mfilterjavac.m"
          {
#line 58 "mfilterjavac.m"
            MR_String mfilterjavac__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

#line 58 "mfilterjavac.m"
#line 58 "mfilterjavac.m"
            switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
#line 58 "mfilterjavac.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 58 "mfilterjavac.m"
              case (MR_Integer) 0:
#line 2735 "mfilterjavac.c"
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 58 "mfilterjavac.m"
                break;
#line 58 "mfilterjavac.m"
              case (MR_Integer) 1:
#line 58 "mfilterjavac.m"
                {
#line 58 "mfilterjavac.m"
                  MR_String mfilterjavac__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

#line 58 "mfilterjavac.m"
                  {
#line 58 "mfilterjavac.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_20_20, mfilterjavac__V_8_8);
#line 58 "mfilterjavac.m"
                    return;
                  }
#line 58 "mfilterjavac.m"
                }
#line 58 "mfilterjavac.m"
                break;
#line 58 "mfilterjavac.m"
              case (MR_Integer) 2:
#line 2759 "mfilterjavac.c"
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
#line 58 "mfilterjavac.m"
                break;
#line 58 "mfilterjavac.m"
            }
#line 58 "mfilterjavac.m"
          }
#line 58 "mfilterjavac.m"
          break;
#line 58 "mfilterjavac.m"
        case (MR_Integer) 2:
#line 58 "mfilterjavac.m"
          {
#line 58 "mfilterjavac.m"
            MR_String mfilterjavac__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

#line 58 "mfilterjavac.m"
#line 58 "mfilterjavac.m"
            switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
#line 58 "mfilterjavac.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 58 "mfilterjavac.m"
              case (MR_Integer) 0:
#line 2783 "mfilterjavac.c"
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 58 "mfilterjavac.m"
                break;
#line 58 "mfilterjavac.m"
              case (MR_Integer) 1:
#line 2789 "mfilterjavac.c"
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
#line 58 "mfilterjavac.m"
                break;
#line 58 "mfilterjavac.m"
              case (MR_Integer) 2:
#line 58 "mfilterjavac.m"
                {
#line 58 "mfilterjavac.m"
                  MR_String mfilterjavac__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

#line 58 "mfilterjavac.m"
                  {
#line 58 "mfilterjavac.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__V_21_21, mfilterjavac__V_15_15);
#line 58 "mfilterjavac.m"
                    return;
                  }
#line 58 "mfilterjavac.m"
                }
#line 58 "mfilterjavac.m"
                break;
#line 58 "mfilterjavac.m"
            }
#line 58 "mfilterjavac.m"
          }
#line 58 "mfilterjavac.m"
          break;
#line 58 "mfilterjavac.m"
      }
#line 58 "mfilterjavac.m"
  }
#line 58 "mfilterjavac.m"
}

#line 58 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0(
#line 58 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 58 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 58 "mfilterjavac.m"
{
#line 58 "mfilterjavac.m"
  {
#line 58 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 58 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastX_9 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 58 "mfilterjavac.m"
    MR_Integer mfilterjavac__CastY_10 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 58 "mfilterjavac.m"
    mfilterjavac__succeeded = (mfilterjavac__CastX_9 == mfilterjavac__CastY_10);
#line 58 "mfilterjavac.m"
    if (mfilterjavac__succeeded)
#line 58 "mfilterjavac.m"
      mfilterjavac__succeeded = MR_TRUE;
#line 58 "mfilterjavac.m"
    else
#line 58 "mfilterjavac.m"
#line 58 "mfilterjavac.m"
      switch (MR_tag((MR_Word) mfilterjavac__HeadVar__1_1)) {
#line 58 "mfilterjavac.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 58 "mfilterjavac.m"
        case (MR_Integer) 0:
#line 58 "mfilterjavac.m"
          {
#line 58 "mfilterjavac.m"
            MR_Integer mfilterjavac__CastX_3 = (MR_Integer) mfilterjavac__HeadVar__1_1;
#line 58 "mfilterjavac.m"
            MR_Integer mfilterjavac__CastY_4 = (MR_Integer) mfilterjavac__HeadVar__2_2;

#line 58 "mfilterjavac.m"
            mfilterjavac__succeeded = (mfilterjavac__CastY_4 == mfilterjavac__CastX_3);
#line 58 "mfilterjavac.m"
          }
#line 58 "mfilterjavac.m"
          break;
#line 58 "mfilterjavac.m"
        case (MR_Integer) 1:
#line 58 "mfilterjavac.m"
          {
#line 58 "mfilterjavac.m"
            MR_String mfilterjavac__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 58 "mfilterjavac.m"
            MR_String mfilterjavac__V_6_6;

#line 58 "mfilterjavac.m"
            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 58 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 58 "mfilterjavac.m"
              {
#line 58 "mfilterjavac.m"
                mfilterjavac__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 2887 "mfilterjavac.c"
                mfilterjavac__succeeded = (strcmp(mfilterjavac__V_5_5, mfilterjavac__V_6_6) == 0);
#line 58 "mfilterjavac.m"
              }
#line 58 "mfilterjavac.m"
          }
#line 58 "mfilterjavac.m"
          break;
#line 58 "mfilterjavac.m"
        case (MR_Integer) 2:
#line 58 "mfilterjavac.m"
          {
#line 58 "mfilterjavac.m"
            MR_String mfilterjavac__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 58 "mfilterjavac.m"
            MR_String mfilterjavac__V_8_8;

#line 58 "mfilterjavac.m"
            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 58 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 58 "mfilterjavac.m"
              {
#line 58 "mfilterjavac.m"
                mfilterjavac__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
#line 2912 "mfilterjavac.c"
                mfilterjavac__succeeded = (strcmp(mfilterjavac__V_7_7, mfilterjavac__V_8_8) == 0);
#line 58 "mfilterjavac.m"
              }
#line 58 "mfilterjavac.m"
          }
#line 58 "mfilterjavac.m"
          break;
#line 58 "mfilterjavac.m"
      }
#line 58 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 58 "mfilterjavac.m"
  }
#line 58 "mfilterjavac.m"
}

#line 249 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0(
#line 249 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__1_1,
#line 249 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2,
#line 249 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3)
#line 249 "mfilterjavac.m"
{
#line 249 "mfilterjavac.m"
  {
#line 249 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 249 "mfilterjavac.m"
    MR_Integer mfilterjavac__Cast_HeadVar1_4 = (MR_Integer) mfilterjavac__HeadVar__2_2;
#line 249 "mfilterjavac.m"
    MR_Integer mfilterjavac__Cast_HeadVar2_5 = (MR_Integer) mfilterjavac__HeadVar__3_3;

#line 249 "mfilterjavac.m"
    {
#line 249 "mfilterjavac.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Cast_HeadVar1_4, mfilterjavac__Cast_HeadVar2_5);
#line 249 "mfilterjavac.m"
      return;
    }
#line 249 "mfilterjavac.m"
  }
#line 249 "mfilterjavac.m"
}

#line 249 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0(
#line 249 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_1,
#line 249 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__2_2)
#line 249 "mfilterjavac.m"
{
#line 2970 "mfilterjavac.c"
  {
#line 2972 "mfilterjavac.c"
    MR_bool mfilterjavac__succeeded = (mfilterjavac__HeadVar__2_1 == mfilterjavac__HeadVar__2_2);

#line 2975 "mfilterjavac.c"
    return mfilterjavac__succeeded;
#line 2977 "mfilterjavac.c"
  }
#line 249 "mfilterjavac.m"
}

#line 290 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__create_line_info_4_p_0(
#line 290 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 290 "mfilterjavac.m"
  MR_String mfilterjavac__HeadVar__2_2,
#line 290 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__3_3,
#line 290 "mfilterjavac.m"
  MR_Word * mfilterjavac__HeadVar__4_4)
#line 290 "mfilterjavac.m"
{
#line 294 "mfilterjavac.m"
  while (MR_TRUE)
#line 294 "mfilterjavac.m"
    {
#line 294 "mfilterjavac.m"
      /* tailcall optimized into a loop */
#line 294 "mfilterjavac.m"
      {
#line 294 "mfilterjavac.m"
        MR_bool mfilterjavac__succeeded;

#line 294 "mfilterjavac.m"
        if ((mfilterjavac__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 294 "mfilterjavac.m"
          {
#line 294 "mfilterjavac.m"
            MR_Word mfilterjavac__InfosRev_7;

#line 295 "mfilterjavac.m"
            {
#line 295 "mfilterjavac.m"
              mercury__list__reverse_2_p_0((MR_Word) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_0, mfilterjavac__HeadVar__3_3, &mfilterjavac__InfosRev_7);
            }
#line 294 "mfilterjavac.m"
            {
#line 294 "mfilterjavac.m"
              MR_Word base;
#line 294 "mfilterjavac.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 294 "mfilterjavac.m"
              *mfilterjavac__HeadVar__4_4 = base;
#line 294 "mfilterjavac.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mfilterjavac__InfosRev_7));
#line 294 "mfilterjavac.m"
            }
#line 294 "mfilterjavac.m"
          }
#line 294 "mfilterjavac.m"
        else
#line 296 "mfilterjavac.m"
          {
#line 296 "mfilterjavac.m"
            MR_Word mfilterjavac__Mark_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 296 "mfilterjavac.m"
            MR_Word mfilterjavac__Marks0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 296 "mfilterjavac.m"
            MR_Word mfilterjavac__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 0)));
#line 296 "mfilterjavac.m"
            MR_String mfilterjavac__MerFile_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 1)));
#line 296 "mfilterjavac.m"
            MR_Integer mfilterjavac__JavaLineNo_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 2)));
#line 296 "mfilterjavac.m"
            MR_Integer mfilterjavac__MerLineNo_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 3)));

#line 316 "mfilterjavac.m"
#line 316 "mfilterjavac.m"
            switch (mfilterjavac__Type_13) {
#line 316 "mfilterjavac.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 316 "mfilterjavac.m"
              case (MR_Integer) 0:
#line 3056 "mfilterjavac.c"
                if ((mfilterjavac__Marks0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3058 "mfilterjavac.c"
                  {
#line 3060 "mfilterjavac.c"
                    MR_Word mfilterjavac__V_28_28;

#line 309 "mfilterjavac.m"
                    {
#line 309 "mfilterjavac.m"
                      mfilterjavac__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 309 "mfilterjavac.m"
                      MR_hl_field(MR_mktag(0), mfilterjavac__V_28_28, 0) = ((MR_Box) (mfilterjavac__HeadVar__2_2));
#line 309 "mfilterjavac.m"
                      MR_hl_field(MR_mktag(0), mfilterjavac__V_28_28, 1) = ((MR_Box) (mfilterjavac__JavaLineNo_15));
#line 309 "mfilterjavac.m"
                      MR_hl_field(MR_mktag(0), mfilterjavac__V_28_28, 2) = ((MR_Box) ((MR_Integer) 1));
#line 309 "mfilterjavac.m"
                    }
#line 309 "mfilterjavac.m"
                    {
#line 309 "mfilterjavac.m"
                      MR_Word base;
#line 309 "mfilterjavac.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 309 "mfilterjavac.m"
                      *mfilterjavac__HeadVar__4_4 = base;
#line 309 "mfilterjavac.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_28_28));
#line 309 "mfilterjavac.m"
                    }
#line 3087 "mfilterjavac.c"
                  }
#line 3089 "mfilterjavac.c"
                else
#line 3091 "mfilterjavac.c"
                  {
#line 3093 "mfilterjavac.c"
                    MR_Word mfilterjavac__Mark_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Marks0_9, (MR_Integer) 0)));
#line 3095 "mfilterjavac.c"
                    MR_Word mfilterjavac__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 0)));
#line 3097 "mfilterjavac.c"
                    MR_Integer mfilterjavac__End_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 2)));
#line 3099 "mfilterjavac.c"
                    MR_Word mfilterjavac__Marks_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Marks0_9, (MR_Integer) 1)));
#line 332 "mfilterjavac.m"
                    MR_String mfilterjavac__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 1)));
#line 332 "mfilterjavac.m"
                    MR_Integer mfilterjavac__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 3)));

#line 3106 "mfilterjavac.c"
#line 3107 "mfilterjavac.c"
                    switch (mfilterjavac__Type_34) {
#line 3109 "mfilterjavac.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 3111 "mfilterjavac.c"
                      case (MR_Integer) 0:
#line 3113 "mfilterjavac.c"
                        {
#line 3115 "mfilterjavac.c"
                          MR_Word mfilterjavac__V_26_26;

#line 313 "mfilterjavac.m"
                          {
#line 313 "mfilterjavac.m"
                            mfilterjavac__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 313 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(0), mfilterjavac__V_26_26, 0) = ((MR_Box) (mfilterjavac__HeadVar__2_2));
#line 313 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(0), mfilterjavac__V_26_26, 1) = ((MR_Box) (mfilterjavac__End_36));
#line 313 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(0), mfilterjavac__V_26_26, 2) = ((MR_Box) ((MR_Integer) 2));
#line 313 "mfilterjavac.m"
                          }
#line 313 "mfilterjavac.m"
                          {
#line 313 "mfilterjavac.m"
                            MR_Word base;
#line 313 "mfilterjavac.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 313 "mfilterjavac.m"
                            *mfilterjavac__HeadVar__4_4 = base;
#line 313 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_26_26));
#line 313 "mfilterjavac.m"
                          }
#line 3142 "mfilterjavac.c"
                        }
#line 3144 "mfilterjavac.c"
                        break;
#line 3146 "mfilterjavac.c"
                      case (MR_Integer) 1:
#line 3148 "mfilterjavac.c"
                        {
#line 3150 "mfilterjavac.c"
                          MR_Integer mfilterjavac__Delta_20 = (mfilterjavac__MerLineNo_16 - mfilterjavac__JavaLineNo_15);
#line 3152 "mfilterjavac.c"
                          MR_Word mfilterjavac__Info_21;
#line 3154 "mfilterjavac.c"
                          MR_Word mfilterjavac__Infos_22;

#line 304 "mfilterjavac.m"
                          {
#line 304 "mfilterjavac.m"
                            mfilterjavac__Info_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 304 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 0) = ((MR_Box) (mfilterjavac__JavaLineNo_15));
#line 304 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 1) = ((MR_Box) (mfilterjavac__End_36));
#line 304 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 2) = ((MR_Box) (mfilterjavac__Delta_20));
#line 304 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 3) = ((MR_Box) (mfilterjavac__MerFile_14));
#line 304 "mfilterjavac.m"
                          }
#line 305 "mfilterjavac.m"
                          {
#line 305 "mfilterjavac.m"
                            mfilterjavac__Infos_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(1), mfilterjavac__Infos_22, 0) = ((MR_Box) (mfilterjavac__Info_21));
#line 305 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(1), mfilterjavac__Infos_22, 1) = ((MR_Box) (mfilterjavac__HeadVar__3_3));
#line 305 "mfilterjavac.m"
                          }
#line 306 "mfilterjavac.m"
                          /* direct tailcall eliminated */
#line 306 "mfilterjavac.m"
                          {
#line 306 "mfilterjavac.m"
                            MR_Word mfilterjavac__HeadVar__1__tmp_copy_1 = mfilterjavac__Marks_39;
#line 306 "mfilterjavac.m"
                            MR_Word mfilterjavac__HeadVar__3__tmp_copy_3 = mfilterjavac__Infos_22;

#line 306 "mfilterjavac.m"
                            mfilterjavac__HeadVar__3_3 = mfilterjavac__HeadVar__3__tmp_copy_3;
#line 306 "mfilterjavac.m"
                            mfilterjavac__HeadVar__1_1 = mfilterjavac__HeadVar__1__tmp_copy_1;
#line 306 "mfilterjavac.m"
                          }
#line 306 "mfilterjavac.m"
                          continue;
#line 3198 "mfilterjavac.c"
                        }
#line 3200 "mfilterjavac.c"
                        break;
#line 3202 "mfilterjavac.c"
                    }
#line 3204 "mfilterjavac.c"
                  }
#line 316 "mfilterjavac.m"
                break;
#line 316 "mfilterjavac.m"
              case (MR_Integer) 1:
#line 317 "mfilterjavac.m"
                {
#line 317 "mfilterjavac.m"
                  MR_Word mfilterjavac__V_24_24;

#line 318 "mfilterjavac.m"
                  {
#line 318 "mfilterjavac.m"
                    mfilterjavac__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 318 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__V_24_24, 0) = ((MR_Box) (mfilterjavac__HeadVar__2_2));
#line 318 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__V_24_24, 1) = ((MR_Box) (mfilterjavac__JavaLineNo_15));
#line 318 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__V_24_24, 2) = ((MR_Box) ((MR_Integer) 0));
#line 318 "mfilterjavac.m"
                  }
#line 318 "mfilterjavac.m"
                  {
#line 318 "mfilterjavac.m"
                    MR_Word base;
#line 318 "mfilterjavac.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 318 "mfilterjavac.m"
                    *mfilterjavac__HeadVar__4_4 = base;
#line 318 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_24_24));
#line 318 "mfilterjavac.m"
                  }
#line 317 "mfilterjavac.m"
                }
#line 316 "mfilterjavac.m"
                break;
#line 316 "mfilterjavac.m"
            }
#line 296 "mfilterjavac.m"
          }
#line 294 "mfilterjavac.m"
      }
#line 294 "mfilterjavac.m"
      break;
#line 294 "mfilterjavac.m"
    }
#line 290 "mfilterjavac.m"
}

#line 253 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__read_line_marks_6_p_0(
#line 253 "mfilterjavac.m"
  MR_Word mfilterjavac__Stream_7,
#line 253 "mfilterjavac.m"
  MR_Integer mfilterjavac__JavaLineNo_8,
#line 253 "mfilterjavac.m"
  MR_Word mfilterjavac__Marks0_9,
#line 253 "mfilterjavac.m"
  MR_Word * mfilterjavac__MaybeMarks_10)
#line 253 "mfilterjavac.m"
{
#line 256 "mfilterjavac.m"
  while (MR_TRUE)
#line 256 "mfilterjavac.m"
    {
#line 256 "mfilterjavac.m"
      /* tailcall optimized into a loop */
#line 256 "mfilterjavac.m"
      {
#line 256 "mfilterjavac.m"
        MR_bool mfilterjavac__succeeded;
#line 256 "mfilterjavac.m"
        MR_Word mfilterjavac__Result_12;

#line 257 "mfilterjavac.m"
        {
#line 257 "mfilterjavac.m"
          mercury__io__read_line_as_string_4_p_0(mfilterjavac__Stream_7, &mfilterjavac__Result_12);
        }
#line 282 "mfilterjavac.m"
#line 282 "mfilterjavac.m"
        switch (MR_tag((MR_Word) mfilterjavac__Result_12)) {
#line 282 "mfilterjavac.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 282 "mfilterjavac.m"
          case (MR_Integer) 0:
#line 284 "mfilterjavac.m"
            {
#line 284 "mfilterjavac.m"
              MR_Word base;
#line 284 "mfilterjavac.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 284 "mfilterjavac.m"
              *mfilterjavac__MaybeMarks_10 = base;
#line 284 "mfilterjavac.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mfilterjavac__Marks0_9));
#line 284 "mfilterjavac.m"
            }
#line 282 "mfilterjavac.m"
            break;
#line 282 "mfilterjavac.m"
          case (MR_Integer) 1:
#line 259 "mfilterjavac.m"
            {
#line 259 "mfilterjavac.m"
              MR_String mfilterjavac__Line_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Result_12, (MR_Integer) 0)));
#line 259 "mfilterjavac.m"
              MR_Word mfilterjavac__Parts_14;
#line 259 "mfilterjavac.m"
              MR_Word mfilterjavac__Marks_23;
#line 259 "mfilterjavac.m"
              MR_String mfilterjavac__V_30_30;
#line 259 "mfilterjavac.m"
              MR_Integer mfilterjavac__V_38_38;
#line 278 "mfilterjavac.m"
              MR_Word mfilterjavac__Type_17;
#line 278 "mfilterjavac.m"
              MR_String mfilterjavac__MerFile_19;
#line 278 "mfilterjavac.m"
              MR_Integer mfilterjavac__MerLineNo_21;
#line 264 "mfilterjavac.m"
              MR_String mfilterjavac__Marker_15;
#line 264 "mfilterjavac.m"
              MR_String mfilterjavac__PathLine_16;
#line 264 "mfilterjavac.m"
              MR_Word mfilterjavac__PartsB_18;
#line 264 "mfilterjavac.m"
              MR_String mfilterjavac__MerLineNoStr_20;
#line 264 "mfilterjavac.m"
              MR_String mfilterjavac__V_31_31;
#line 264 "mfilterjavac.m"
              MR_Word mfilterjavac__V_32_32;
#line 264 "mfilterjavac.m"
              MR_Word mfilterjavac__V_33_33;
#line 264 "mfilterjavac.m"
              MR_Word mfilterjavac__V_34_34;
#line 264 "mfilterjavac.m"
              MR_Char mfilterjavac__V_35_35;
#line 264 "mfilterjavac.m"
              MR_Word mfilterjavac__V_36_36;
#line 264 "mfilterjavac.m"
              MR_Word mfilterjavac__V_37_37;

#line 262 "mfilterjavac.m"
              {
#line 262 "mfilterjavac.m"
                mfilterjavac__V_30_30 = mercury__string__strip_1_f_0(mfilterjavac__Line_13);
              }
#line 262 "mfilterjavac.m"
              {
#line 262 "mfilterjavac.m"
                mfilterjavac__Parts_14 = mercury__string__split_at_char_2_f_0((MR_Char) 32, mfilterjavac__V_30_30);
              }
#line 264 "mfilterjavac.m"
              mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__Parts_14)) == (MR_mktag((MR_Integer) 1)));
#line 264 "mfilterjavac.m"
              if (mfilterjavac__succeeded)
#line 264 "mfilterjavac.m"
                {
#line 264 "mfilterjavac.m"
                  mfilterjavac__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Parts_14, (MR_Integer) 0)));
#line 264 "mfilterjavac.m"
                  mfilterjavac__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Parts_14, (MR_Integer) 1)));
#line 264 "mfilterjavac.m"
                  mfilterjavac__succeeded = (strcmp(mfilterjavac__V_31_31, (MR_String) "//") == 0);
#line 264 "mfilterjavac.m"
                  if (mfilterjavac__succeeded)
#line 264 "mfilterjavac.m"
                    {
#line 264 "mfilterjavac.m"
                      mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_32_32)) == (MR_mktag((MR_Integer) 1)));
#line 264 "mfilterjavac.m"
                      if (mfilterjavac__succeeded)
#line 264 "mfilterjavac.m"
                        {
#line 264 "mfilterjavac.m"
                          mfilterjavac__Marker_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_32_32, (MR_Integer) 0)));
#line 264 "mfilterjavac.m"
                          mfilterjavac__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_32_32, (MR_Integer) 1)));
#line 264 "mfilterjavac.m"
                          mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 264 "mfilterjavac.m"
                          if (mfilterjavac__succeeded)
#line 264 "mfilterjavac.m"
                            {
#line 264 "mfilterjavac.m"
                              mfilterjavac__PathLine_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_33_33, (MR_Integer) 0)));
#line 264 "mfilterjavac.m"
                              mfilterjavac__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_33_33, (MR_Integer) 1)));
#line 264 "mfilterjavac.m"
                              mfilterjavac__succeeded = (mfilterjavac__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "mfilterjavac.m"
                              if (mfilterjavac__succeeded)
#line 264 "mfilterjavac.m"
                                {
#line 268 "mfilterjavac.m"
                                  if ((strcmp(mfilterjavac__Marker_15, (MR_String) "MER_FOREIGN_END") == 0))
#line 270 "mfilterjavac.m"
                                    {
#line 270 "mfilterjavac.m"
                                      mfilterjavac__Type_17 = (MR_Integer) 1;
#line 270 "mfilterjavac.m"
                                      mfilterjavac__succeeded = MR_TRUE;
#line 270 "mfilterjavac.m"
                                    }
#line 268 "mfilterjavac.m"
                                  else
#line 268 "mfilterjavac.m"
                                  if ((strcmp(mfilterjavac__Marker_15, (MR_String) "MER_FOREIGN_BEGIN") == 0))
#line 267 "mfilterjavac.m"
                                    {
#line 267 "mfilterjavac.m"
                                      mfilterjavac__Type_17 = (MR_Integer) 0;
#line 267 "mfilterjavac.m"
                                      mfilterjavac__succeeded = MR_TRUE;
#line 267 "mfilterjavac.m"
                                    }
#line 268 "mfilterjavac.m"
                                  else
#line 268 "mfilterjavac.m"
                                    mfilterjavac__succeeded = MR_FALSE;
#line 264 "mfilterjavac.m"
                                  if (mfilterjavac__succeeded)
#line 264 "mfilterjavac.m"
                                    {
#line 272 "mfilterjavac.m"
                                      mfilterjavac__V_35_35 = (MR_Char) 58;
#line 272 "mfilterjavac.m"
                                      {
#line 272 "mfilterjavac.m"
                                        mfilterjavac__PartsB_18 = mercury__string__split_at_char_2_f_0(mfilterjavac__V_35_35, mfilterjavac__PathLine_16);
                                      }
#line 273 "mfilterjavac.m"
                                      mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__PartsB_18)) == (MR_mktag((MR_Integer) 1)));
#line 273 "mfilterjavac.m"
                                      if (mfilterjavac__succeeded)
#line 273 "mfilterjavac.m"
                                        {
#line 273 "mfilterjavac.m"
                                          mfilterjavac__MerFile_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsB_18, (MR_Integer) 0)));
#line 273 "mfilterjavac.m"
                                          mfilterjavac__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsB_18, (MR_Integer) 1)));
#line 273 "mfilterjavac.m"
                                          mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 273 "mfilterjavac.m"
                                          if (mfilterjavac__succeeded)
#line 273 "mfilterjavac.m"
                                            {
#line 273 "mfilterjavac.m"
                                              mfilterjavac__MerLineNoStr_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_36_36, (MR_Integer) 0)));
#line 273 "mfilterjavac.m"
                                              mfilterjavac__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_36_36, (MR_Integer) 1)));
#line 273 "mfilterjavac.m"
                                              mfilterjavac__succeeded = (mfilterjavac__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "mfilterjavac.m"
                                              if (mfilterjavac__succeeded)
#line 274 "mfilterjavac.m"
                                                {
#line 274 "mfilterjavac.m"
                                                  mfilterjavac__succeeded = mercury__string__to_int_2_p_0(mfilterjavac__MerLineNoStr_20, &mfilterjavac__MerLineNo_21);
                                                }
#line 273 "mfilterjavac.m"
                                            }
#line 273 "mfilterjavac.m"
                                        }
#line 264 "mfilterjavac.m"
                                    }
#line 264 "mfilterjavac.m"
                                }
#line 264 "mfilterjavac.m"
                            }
#line 264 "mfilterjavac.m"
                        }
#line 264 "mfilterjavac.m"
                    }
#line 264 "mfilterjavac.m"
                }
#line 278 "mfilterjavac.m"
              if (mfilterjavac__succeeded)
#line 276 "mfilterjavac.m"
                {
#line 276 "mfilterjavac.m"
                  MR_Word mfilterjavac__Mark_22;

#line 276 "mfilterjavac.m"
                  {
#line 276 "mfilterjavac.m"
                    mfilterjavac__Mark_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 276 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 0) = ((MR_Box) (mfilterjavac__Type_17));
#line 276 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 1) = ((MR_Box) (mfilterjavac__MerFile_19));
#line 276 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 2) = ((MR_Box) (mfilterjavac__JavaLineNo_8));
#line 276 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 3) = ((MR_Box) (mfilterjavac__MerLineNo_21));
#line 276 "mfilterjavac.m"
                  }
#line 277 "mfilterjavac.m"
                  {
#line 277 "mfilterjavac.m"
                    mfilterjavac__Marks_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(1), mfilterjavac__Marks_23, 0) = ((MR_Box) (mfilterjavac__Mark_22));
#line 277 "mfilterjavac.m"
                    MR_hl_field(MR_mktag(1), mfilterjavac__Marks_23, 1) = ((MR_Box) (mfilterjavac__Marks0_9));
#line 277 "mfilterjavac.m"
                  }
#line 276 "mfilterjavac.m"
                }
#line 278 "mfilterjavac.m"
              else
#line 279 "mfilterjavac.m"
                mfilterjavac__Marks_23 = mfilterjavac__Marks0_9;
#line 281 "mfilterjavac.m"
              mfilterjavac__V_38_38 = (mfilterjavac__JavaLineNo_8 + (MR_Integer) 1);
#line 281 "mfilterjavac.m"
              /* direct tailcall eliminated */
#line 281 "mfilterjavac.m"
              {
#line 281 "mfilterjavac.m"
                MR_Integer mfilterjavac__JavaLineNo__tmp_copy_8 = mfilterjavac__V_38_38;
#line 281 "mfilterjavac.m"
                MR_Word mfilterjavac__Marks0__tmp_copy_9 = mfilterjavac__Marks_23;

#line 281 "mfilterjavac.m"
                mfilterjavac__Marks0_9 = mfilterjavac__Marks0__tmp_copy_9;
#line 281 "mfilterjavac.m"
                mfilterjavac__JavaLineNo_8 = mfilterjavac__JavaLineNo__tmp_copy_8;
#line 281 "mfilterjavac.m"
              }
#line 281 "mfilterjavac.m"
              continue;
#line 259 "mfilterjavac.m"
            }
#line 282 "mfilterjavac.m"
            break;
#line 282 "mfilterjavac.m"
          case (MR_Integer) 2:
#line 286 "mfilterjavac.m"
            {
#line 286 "mfilterjavac.m"
              MR_Word mfilterjavac__Error_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mfilterjavac__Result_12, (MR_Integer) 0)));
#line 286 "mfilterjavac.m"
              MR_String mfilterjavac__V_28_28;

#line 287 "mfilterjavac.m"
              {
#line 287 "mfilterjavac.m"
                mfilterjavac__V_28_28 = mercury__io__error_message_1_f_0(mfilterjavac__Error_24);
              }
#line 287 "mfilterjavac.m"
              {
#line 287 "mfilterjavac.m"
                MR_Word base;
#line 287 "mfilterjavac.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 287 "mfilterjavac.m"
                *mfilterjavac__MaybeMarks_10 = base;
#line 287 "mfilterjavac.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_28_28));
#line 287 "mfilterjavac.m"
              }
#line 286 "mfilterjavac.m"
            }
#line 282 "mfilterjavac.m"
            break;
#line 282 "mfilterjavac.m"
        }
#line 256 "mfilterjavac.m"
      }
#line 256 "mfilterjavac.m"
      break;
#line 256 "mfilterjavac.m"
    }
#line 253 "mfilterjavac.m"
}

#line 206 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__maybe_get_line_info_4_p_0(
#line 206 "mfilterjavac.m"
  MR_String mfilterjavac__Filename_5,
#line 206 "mfilterjavac.m"
  MR_Word * mfilterjavac__MaybeInfo_6)
#line 206 "mfilterjavac.m"
{
#line 209 "mfilterjavac.m"
  {
#line 209 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 209 "mfilterjavac.m"
    MR_Word mfilterjavac__Res_8;

#line 210 "mfilterjavac.m"
    {
#line 210 "mfilterjavac.m"
      mercury__io__open_input_4_p_0(mfilterjavac__Filename_5, &mfilterjavac__Res_8);
    }
#line 234 "mfilterjavac.m"
    if (((MR_tag((MR_Word) mfilterjavac__Res_8)) == (MR_mktag((MR_Integer) 1))))
#line 235 "mfilterjavac.m"
      {
#line 238 "mfilterjavac.m"
        *mfilterjavac__MaybeInfo_6 = (MR_Word) &mfilterjavac_scalar_common_3[1];
#line 235 "mfilterjavac.m"
      }
#line 234 "mfilterjavac.m"
    else
#line 212 "mfilterjavac.m"
      {
#line 212 "mfilterjavac.m"
        MR_Word mfilterjavac__Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Res_8, (MR_Integer) 0)));
#line 212 "mfilterjavac.m"
        MR_Word mfilterjavac__MaybeMarksRev_10;

#line 213 "mfilterjavac.m"
        {
#line 213 "mfilterjavac.m"
          mfilterjavac__read_line_marks_6_p_0(mfilterjavac__Stream_9, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mfilterjavac__MaybeMarksRev_10);
        }
#line 214 "mfilterjavac.m"
        {
#line 214 "mfilterjavac.m"
          mercury__io__close_input_3_p_0(mfilterjavac__Stream_9);
        }
#line 230 "mfilterjavac.m"
        if (((MR_tag((MR_Word) mfilterjavac__MaybeMarksRev_10)) == (MR_mktag((MR_Integer) 1))))
#line 231 "mfilterjavac.m"
          {
#line 231 "mfilterjavac.m"
            MR_String mfilterjavac__Msg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeMarksRev_10, (MR_Integer) 0)));
#line 231 "mfilterjavac.m"
            MR_String mfilterjavac__V_30_30;
#line 231 "mfilterjavac.m"
            MR_String mfilterjavac__V_74_74;
#line 231 "mfilterjavac.m"
            MR_Word mfilterjavac__V_80_80 = (MR_Word) &mfilterjavac_scalar_common_3[0];
#line 231 "mfilterjavac.m"
            MR_String mfilterjavac__V_82_82;
#line 231 "mfilterjavac.m"
            MR_String mfilterjavac__V_83_83;

#line 232 "mfilterjavac.m"
            {
#line 232 "mfilterjavac.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_80_80, mfilterjavac__Msg_20, &mfilterjavac__V_74_74);
            }
#line 232 "mfilterjavac.m"
            {
#line 232 "mfilterjavac.m"
              mfilterjavac__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mfilterjavac__V_74_74);
            }
#line 232 "mfilterjavac.m"
            {
#line 232 "mfilterjavac.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_80_80, mfilterjavac__Filename_5, &mfilterjavac__V_83_83);
            }
#line 232 "mfilterjavac.m"
            {
#line 232 "mfilterjavac.m"
              mfilterjavac__V_30_30 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_83_83, mfilterjavac__V_82_82);
            }
#line 232 "mfilterjavac.m"
            {
#line 232 "mfilterjavac.m"
              MR_Word base;
#line 232 "mfilterjavac.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 232 "mfilterjavac.m"
              *mfilterjavac__MaybeInfo_6 = base;
#line 232 "mfilterjavac.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__V_30_30));
#line 232 "mfilterjavac.m"
            }
#line 231 "mfilterjavac.m"
          }
#line 230 "mfilterjavac.m"
        else
#line 216 "mfilterjavac.m"
          {
#line 216 "mfilterjavac.m"
            MR_Word mfilterjavac__MarksRev_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__MaybeMarksRev_10, (MR_Integer) 0)));
#line 216 "mfilterjavac.m"
            MR_Word mfilterjavac__Marks_12;
#line 216 "mfilterjavac.m"
            MR_Word mfilterjavac__MaybeInfo0_13;

#line 217 "mfilterjavac.m"
            {
#line 217 "mfilterjavac.m"
              mercury__list__reverse_2_p_0((MR_Word) &mfilterjavac__mfilterjavac__type_ctor_info_line_mark_0, mfilterjavac__MarksRev_11, &mfilterjavac__Marks_12);
            }
#line 218 "mfilterjavac.m"
            {
#line 218 "mfilterjavac.m"
              mfilterjavac__create_line_info_4_p_0(mfilterjavac__Marks_12, mfilterjavac__Filename_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mfilterjavac__MaybeInfo0_13);
            }
#line 222 "mfilterjavac.m"
            if (((MR_tag((MR_Word) mfilterjavac__MaybeInfo0_13)) == (MR_mktag((MR_Integer) 1))))
#line 223 "mfilterjavac.m"
              {
#line 223 "mfilterjavac.m"
                MR_Word mfilterjavac__LineInfoError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeInfo0_13, (MR_Integer) 0)));
#line 223 "mfilterjavac.m"
                MR_String mfilterjavac__ErrFilename_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__LineInfoError_15, (MR_Integer) 0)));
#line 223 "mfilterjavac.m"
                MR_Integer mfilterjavac__ErrLine_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__LineInfoError_15, (MR_Integer) 1)));
#line 223 "mfilterjavac.m"
                MR_Word mfilterjavac__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__LineInfoError_15, (MR_Integer) 2)));
#line 223 "mfilterjavac.m"
                MR_String mfilterjavac__StringError_19;
#line 223 "mfilterjavac.m"
                MR_String mfilterjavac__V_45_45;
#line 223 "mfilterjavac.m"
                MR_String mfilterjavac__V_48_48;
#line 223 "mfilterjavac.m"
                MR_Word mfilterjavac__V_54_54;
#line 223 "mfilterjavac.m"
                MR_String mfilterjavac__V_56_56;
#line 223 "mfilterjavac.m"
                MR_String mfilterjavac__V_57_57;
#line 223 "mfilterjavac.m"
                MR_String mfilterjavac__V_64_64;
#line 223 "mfilterjavac.m"
                MR_String mfilterjavac__V_66_66;
#line 223 "mfilterjavac.m"
                MR_String mfilterjavac__V_67_67;

#line 197 "mfilterjavac.m"
#line 197 "mfilterjavac.m"
                switch (mfilterjavac__Error_18) {
#line 197 "mfilterjavac.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 197 "mfilterjavac.m"
                  case (MR_Integer) 1:
#line 200 "mfilterjavac.m"
                    mfilterjavac__V_45_45 = (MR_String) "BEGIN token without END token";
#line 197 "mfilterjavac.m"
                    break;
#line 197 "mfilterjavac.m"
                  case (MR_Integer) 2:
#line 202 "mfilterjavac.m"
                    mfilterjavac__V_45_45 = (MR_String) "BEGIN token followed by another BEGIN token";
#line 197 "mfilterjavac.m"
                    break;
#line 197 "mfilterjavac.m"
                  case (MR_Integer) 0:
#line 198 "mfilterjavac.m"
                    mfilterjavac__V_45_45 = (MR_String) "END token without BEGIN token";
#line 197 "mfilterjavac.m"
                    break;
#line 197 "mfilterjavac.m"
                }
#line 3762 "mfilterjavac.c"
                mfilterjavac__V_54_54 = (MR_Word) &mfilterjavac_scalar_common_3[0];
#line 227 "mfilterjavac.m"
                {
#line 227 "mfilterjavac.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_54_54, mfilterjavac__V_45_45, &mfilterjavac__V_48_48);
                }
#line 225 "mfilterjavac.m"
                {
#line 225 "mfilterjavac.m"
                  mfilterjavac__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) ": Error understanding line number declration: ", mfilterjavac__V_48_48);
                }
#line 227 "mfilterjavac.m"
                {
#line 227 "mfilterjavac.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mfilterjavac__V_54_54, mfilterjavac__ErrLine_17, &mfilterjavac__V_57_57);
                }
#line 225 "mfilterjavac.m"
                {
#line 225 "mfilterjavac.m"
                  mfilterjavac__V_64_64 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_57_57, mfilterjavac__V_56_56);
                }
#line 225 "mfilterjavac.m"
                {
#line 225 "mfilterjavac.m"
                  mfilterjavac__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ":", mfilterjavac__V_64_64);
                }
#line 227 "mfilterjavac.m"
                {
#line 227 "mfilterjavac.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_54_54, mfilterjavac__ErrFilename_16, &mfilterjavac__V_67_67);
                }
#line 225 "mfilterjavac.m"
                {
#line 225 "mfilterjavac.m"
                  mfilterjavac__StringError_19 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_67_67, mfilterjavac__V_66_66);
                }
#line 228 "mfilterjavac.m"
                {
#line 228 "mfilterjavac.m"
                  MR_Word base;
#line 228 "mfilterjavac.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 228 "mfilterjavac.m"
                  *mfilterjavac__MaybeInfo_6 = base;
#line 228 "mfilterjavac.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__StringError_19));
#line 228 "mfilterjavac.m"
                }
#line 223 "mfilterjavac.m"
              }
#line 222 "mfilterjavac.m"
            else
#line 221 "mfilterjavac.m"
              *mfilterjavac__MaybeInfo_6 = (MR_Word) mfilterjavac__MaybeInfo0_13;
#line 216 "mfilterjavac.m"
          }
#line 212 "mfilterjavac.m"
      }
#line 209 "mfilterjavac.m"
  }
#line 206 "mfilterjavac.m"
}

#line 174 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__line_info_translate_5_p_0(
#line 174 "mfilterjavac.m"
  MR_Word mfilterjavac__HeadVar__1_1,
#line 174 "mfilterjavac.m"
  MR_String mfilterjavac__HeadVar__2_2,
#line 174 "mfilterjavac.m"
  MR_Integer mfilterjavac__HeadVar__3_3,
#line 174 "mfilterjavac.m"
  MR_String * mfilterjavac__Name_4,
#line 174 "mfilterjavac.m"
  MR_Integer * mfilterjavac__Line_5)
#line 174 "mfilterjavac.m"
{
#line 177 "mfilterjavac.m"
  while (MR_TRUE)
#line 177 "mfilterjavac.m"
    {
#line 177 "mfilterjavac.m"
      /* tailcall optimized into a loop */
#line 177 "mfilterjavac.m"
      {
#line 177 "mfilterjavac.m"
        MR_bool mfilterjavac__succeeded;

#line 177 "mfilterjavac.m"
        if ((mfilterjavac__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "mfilterjavac.m"
          {
#line 177 "mfilterjavac.m"
            *mfilterjavac__Name_4 = mfilterjavac__HeadVar__2_2;
#line 177 "mfilterjavac.m"
            *mfilterjavac__Line_5 = mfilterjavac__HeadVar__3_3;
#line 177 "mfilterjavac.m"
          }
#line 177 "mfilterjavac.m"
        else
#line 178 "mfilterjavac.m"
          {
#line 178 "mfilterjavac.m"
            MR_Word mfilterjavac__Info_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
#line 178 "mfilterjavac.m"
            MR_Word mfilterjavac__Infos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
#line 178 "mfilterjavac.m"
            MR_Integer mfilterjavac__Start_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 0)));
#line 178 "mfilterjavac.m"
            MR_Integer mfilterjavac__End_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 1)));
#line 178 "mfilterjavac.m"
            MR_Integer mfilterjavac__Delta_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 2)));
#line 178 "mfilterjavac.m"
            MR_String mfilterjavac__File_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 3)));

#line 181 "mfilterjavac.m"
            mfilterjavac__succeeded = (mfilterjavac__HeadVar__3_3 < mfilterjavac__Start_14);
#line 186 "mfilterjavac.m"
            if (mfilterjavac__succeeded)
#line 184 "mfilterjavac.m"
              {
#line 184 "mfilterjavac.m"
                *mfilterjavac__Name_4 = mfilterjavac__HeadVar__2_2;
#line 185 "mfilterjavac.m"
                *mfilterjavac__Line_5 = mfilterjavac__HeadVar__3_3;
#line 184 "mfilterjavac.m"
              }
#line 186 "mfilterjavac.m"
            else
#line 191 "mfilterjavac.m"
              {
#line 187 "mfilterjavac.m"
                mfilterjavac__succeeded = (mfilterjavac__HeadVar__3_3 < mfilterjavac__End_15);
#line 191 "mfilterjavac.m"
                if (mfilterjavac__succeeded)
#line 189 "mfilterjavac.m"
                  {
#line 189 "mfilterjavac.m"
                    *mfilterjavac__Line_5 = (mfilterjavac__HeadVar__3_3 + mfilterjavac__Delta_16);
#line 190 "mfilterjavac.m"
                    *mfilterjavac__Name_4 = mfilterjavac__File_17;
#line 189 "mfilterjavac.m"
                  }
#line 191 "mfilterjavac.m"
                else
#line 192 "mfilterjavac.m"
                  {
#line 192 "mfilterjavac.m"
                    /* direct tailcall eliminated */
#line 192 "mfilterjavac.m"
                    {
#line 192 "mfilterjavac.m"
                      MR_Word mfilterjavac__HeadVar__1__tmp_copy_1 = mfilterjavac__Infos_9;

#line 192 "mfilterjavac.m"
                      mfilterjavac__HeadVar__1_1 = mfilterjavac__HeadVar__1__tmp_copy_1;
#line 192 "mfilterjavac.m"
                    }
#line 192 "mfilterjavac.m"
                    continue;
#line 192 "mfilterjavac.m"
                  }
#line 191 "mfilterjavac.m"
              }
#line 178 "mfilterjavac.m"
          }
#line 177 "mfilterjavac.m"
      }
#line 177 "mfilterjavac.m"
      break;
#line 177 "mfilterjavac.m"
    }
#line 174 "mfilterjavac.m"
}

#line 141 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__translate_and_outpot_line_5_p_0(
#line 141 "mfilterjavac.m"
  MR_Word mfilterjavac__LineInfo_6,
#line 141 "mfilterjavac.m"
  MR_String mfilterjavac__Filename_7,
#line 141 "mfilterjavac.m"
  MR_Integer mfilterjavac__LineNo_8,
#line 141 "mfilterjavac.m"
  MR_Word mfilterjavac__RestParts_9,
#line 141 "mfilterjavac.m"
  MR_String * mfilterjavac__OutLine_10)
#line 141 "mfilterjavac.m"
{
#line 144 "mfilterjavac.m"
  {
#line 144 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 144 "mfilterjavac.m"
    MR_String mfilterjavac__MerFileName_11;
#line 144 "mfilterjavac.m"
    MR_Integer mfilterjavac__MerLineNo_12;
#line 144 "mfilterjavac.m"
    MR_String mfilterjavac__Rest_13;
#line 144 "mfilterjavac.m"
    MR_String mfilterjavac__V_24_24;
#line 144 "mfilterjavac.m"
    MR_Word mfilterjavac__V_30_30;
#line 144 "mfilterjavac.m"
    MR_String mfilterjavac__V_31_31;
#line 144 "mfilterjavac.m"
    MR_String mfilterjavac__V_33_33;
#line 144 "mfilterjavac.m"
    MR_String mfilterjavac__V_34_34;
#line 144 "mfilterjavac.m"
    MR_String mfilterjavac__V_41_41;
#line 144 "mfilterjavac.m"
    MR_String mfilterjavac__V_43_43;
#line 144 "mfilterjavac.m"
    MR_String mfilterjavac__V_44_44;

#line 145 "mfilterjavac.m"
    {
#line 145 "mfilterjavac.m"
      mfilterjavac__line_info_translate_5_p_0(mfilterjavac__LineInfo_6, mfilterjavac__Filename_7, mfilterjavac__LineNo_8, &mfilterjavac__MerFileName_11, &mfilterjavac__MerLineNo_12);
    }
#line 146 "mfilterjavac.m"
    {
#line 146 "mfilterjavac.m"
      mfilterjavac__Rest_13 = mercury__string__join_list_2_f_0((MR_String) " ", mfilterjavac__RestParts_9);
    }
#line 3991 "mfilterjavac.c"
    mfilterjavac__V_30_30 = (MR_Word) &mfilterjavac_scalar_common_3[0];
#line 148 "mfilterjavac.m"
    {
#line 148 "mfilterjavac.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_30_30, mfilterjavac__Rest_13, &mfilterjavac__V_24_24);
    }
#line 147 "mfilterjavac.m"
    {
#line 147 "mfilterjavac.m"
      mfilterjavac__V_31_31 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_24_24, (MR_String) "\n");
    }
#line 147 "mfilterjavac.m"
    {
#line 147 "mfilterjavac.m"
      mfilterjavac__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mfilterjavac__V_31_31);
    }
#line 148 "mfilterjavac.m"
    {
#line 148 "mfilterjavac.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mfilterjavac__V_30_30, mfilterjavac__MerLineNo_12, &mfilterjavac__V_34_34);
    }
#line 147 "mfilterjavac.m"
    {
#line 147 "mfilterjavac.m"
      mfilterjavac__V_41_41 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_34_34, mfilterjavac__V_33_33);
    }
#line 147 "mfilterjavac.m"
    {
#line 147 "mfilterjavac.m"
      mfilterjavac__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) ":", mfilterjavac__V_41_41);
    }
#line 148 "mfilterjavac.m"
    {
#line 148 "mfilterjavac.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mfilterjavac__V_30_30, mfilterjavac__MerFileName_11, &mfilterjavac__V_44_44);
    }
#line 147 "mfilterjavac.m"
    {
#line 147 "mfilterjavac.m"
      *mfilterjavac__OutLine_10 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_44_44, mfilterjavac__V_43_43);
    }
#line 144 "mfilterjavac.m"
  }
#line 141 "mfilterjavac.m"
}

#line 104 "mfilterjavac.m"
static MR_bool MR_CALL 
mfilterjavac__filter_lines_5_p_0_1(
#line 104 "mfilterjavac.m"
  MR_Box mfilterjavac__closure_arg,
#line 104 "mfilterjavac.m"
  MR_Box mfilterjavac__wrapper_arg_1)
#line 104 "mfilterjavac.m"
{
#line 104 "mfilterjavac.m"
  {
#line 104 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 104 "mfilterjavac.m"
    MR_Box mfilterjavac__closure = mfilterjavac__closure_arg;

#line 104 "mfilterjavac.m"
    {
#line 104 "mfilterjavac.m"
      return mfilterjavac__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mfilterjavac__wrapper_arg_1));
    }
#line 104 "mfilterjavac.m"
    return mfilterjavac__succeeded;
#line 104 "mfilterjavac.m"
  }
#line 104 "mfilterjavac.m"
}

#line 63 "mfilterjavac.m"
static void MR_CALL 
mfilterjavac__filter_lines_5_p_0(
#line 63 "mfilterjavac.m"
  MR_Word * mfilterjavac__Result_6,
#line 63 "mfilterjavac.m"
  MR_Word mfilterjavac__STATE_VARIABLE_Cache_0_18,
#line 63 "mfilterjavac.m"
  MR_Word * mfilterjavac__STATE_VARIABLE_Cache_19)
#line 63 "mfilterjavac.m"
{
#line 66 "mfilterjavac.m"
  while (MR_TRUE)
#line 66 "mfilterjavac.m"
    {
#line 66 "mfilterjavac.m"
      /* tailcall optimized into a loop */
#line 66 "mfilterjavac.m"
      {
#line 66 "mfilterjavac.m"
        MR_bool mfilterjavac__succeeded;
#line 66 "mfilterjavac.m"
        MR_Word mfilterjavac__IOResult_9;

#line 67 "mfilterjavac.m"
        {
#line 67 "mfilterjavac.m"
          mercury__io__read_line_as_string_3_p_0(&mfilterjavac__IOResult_9);
        }
#line 90 "mfilterjavac.m"
#line 90 "mfilterjavac.m"
        switch (MR_tag((MR_Word) mfilterjavac__IOResult_9)) {
#line 90 "mfilterjavac.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 90 "mfilterjavac.m"
          case (MR_Integer) 0:
#line 91 "mfilterjavac.m"
            {
#line 92 "mfilterjavac.m"
              *mfilterjavac__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 91 "mfilterjavac.m"
              *mfilterjavac__STATE_VARIABLE_Cache_19 = mfilterjavac__STATE_VARIABLE_Cache_0_18;
#line 91 "mfilterjavac.m"
            }
#line 90 "mfilterjavac.m"
            break;
#line 90 "mfilterjavac.m"
          case (MR_Integer) 1:
#line 69 "mfilterjavac.m"
            {
#line 69 "mfilterjavac.m"
              MR_String mfilterjavac__Line0_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__IOResult_9, (MR_Integer) 0)));
#line 4118 "mfilterjavac.c"
              MR_Word mfilterjavac__OtherPartsA_56;
#line 4120 "mfilterjavac.c"
              MR_String mfilterjavac__Filename_58;
#line 4122 "mfilterjavac.c"
              MR_Integer mfilterjavac__LineNo_61;
#line 104 "mfilterjavac.m"
              MR_Word mfilterjavac__PartsA_54;
#line 104 "mfilterjavac.m"
              MR_String mfilterjavac__PartAA_55;
#line 104 "mfilterjavac.m"
              MR_Word mfilterjavac__PartsAA_57;
#line 104 "mfilterjavac.m"
              MR_String mfilterjavac__LineStr_59;
#line 104 "mfilterjavac.m"
              MR_String mfilterjavac__Empty_60;
#line 104 "mfilterjavac.m"
              MR_Char mfilterjavac__V_67_67;
#line 104 "mfilterjavac.m"
              MR_Word mfilterjavac__V_68_68;
#line 104 "mfilterjavac.m"
              MR_Word mfilterjavac__V_69_69;
#line 104 "mfilterjavac.m"
              MR_Word mfilterjavac__V_70_70;

#line 104 "mfilterjavac.m"
              {
#line 104 "mfilterjavac.m"
                mfilterjavac__PartsA_54 = mercury__string__split_at_separator_2_f_0((MR_Word) &mfilterjavac_scalar_common_2[1], mfilterjavac__Line0_10);
              }
#line 105 "mfilterjavac.m"
              mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__PartsA_54)) == (MR_mktag((MR_Integer) 1)));
#line 105 "mfilterjavac.m"
              if (mfilterjavac__succeeded)
#line 105 "mfilterjavac.m"
                {
#line 105 "mfilterjavac.m"
                  mfilterjavac__PartAA_55 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsA_54, (MR_Integer) 0)));
#line 105 "mfilterjavac.m"
                  mfilterjavac__OtherPartsA_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsA_54, (MR_Integer) 1)));
#line 106 "mfilterjavac.m"
                  mfilterjavac__V_67_67 = (MR_Char) 58;
#line 106 "mfilterjavac.m"
                  {
#line 106 "mfilterjavac.m"
                    mfilterjavac__PartsAA_57 = mercury__string__split_at_char_2_f_0(mfilterjavac__V_67_67, mfilterjavac__PartAA_55);
                  }
#line 107 "mfilterjavac.m"
                  mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__PartsAA_57)) == (MR_mktag((MR_Integer) 1)));
#line 107 "mfilterjavac.m"
                  if (mfilterjavac__succeeded)
#line 107 "mfilterjavac.m"
                    {
#line 107 "mfilterjavac.m"
                      mfilterjavac__Filename_58 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsAA_57, (MR_Integer) 0)));
#line 107 "mfilterjavac.m"
                      mfilterjavac__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsAA_57, (MR_Integer) 1)));
#line 107 "mfilterjavac.m"
                      mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_68_68)) == (MR_mktag((MR_Integer) 1)));
#line 107 "mfilterjavac.m"
                      if (mfilterjavac__succeeded)
#line 107 "mfilterjavac.m"
                        {
#line 107 "mfilterjavac.m"
                          mfilterjavac__LineStr_59 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_68_68, (MR_Integer) 0)));
#line 107 "mfilterjavac.m"
                          mfilterjavac__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_68_68, (MR_Integer) 1)));
#line 107 "mfilterjavac.m"
                          mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__V_69_69)) == (MR_mktag((MR_Integer) 1)));
#line 107 "mfilterjavac.m"
                          if (mfilterjavac__succeeded)
#line 107 "mfilterjavac.m"
                            {
#line 107 "mfilterjavac.m"
                              mfilterjavac__Empty_60 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__V_69_69, (MR_Integer) 0)));
#line 107 "mfilterjavac.m"
                              mfilterjavac__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__V_69_69, (MR_Integer) 1)));
#line 107 "mfilterjavac.m"
                              mfilterjavac__succeeded = (mfilterjavac__V_70_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 104 "mfilterjavac.m"
                              if (mfilterjavac__succeeded)
#line 104 "mfilterjavac.m"
                                {
#line 108 "mfilterjavac.m"
                                  {
#line 108 "mfilterjavac.m"
                                    mfilterjavac__succeeded = mercury__string__to_int_2_p_0(mfilterjavac__LineStr_59, &mfilterjavac__LineNo_61);
                                  }
#line 104 "mfilterjavac.m"
                                  if (mfilterjavac__succeeded)
#line 109 "mfilterjavac.m"
                                    mfilterjavac__succeeded = (strcmp(mfilterjavac__Empty_60, (MR_String) "") == 0);
#line 104 "mfilterjavac.m"
                                }
#line 107 "mfilterjavac.m"
                            }
#line 107 "mfilterjavac.m"
                        }
#line 107 "mfilterjavac.m"
                    }
#line 105 "mfilterjavac.m"
                }
#line 4220 "mfilterjavac.c"
              if (mfilterjavac__succeeded)
#line 4222 "mfilterjavac.c"
                {
#line 4224 "mfilterjavac.c"
                  MR_Word mfilterjavac__MaybeLineInfo_62;
#line 111 "mfilterjavac.m"
                  MR_Box mfilterjavac__conv0_MaybeLineInfo_62;

#line 111 "mfilterjavac.m"
                  {
#line 111 "mfilterjavac.m"
                    mfilterjavac__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1], mfilterjavac__STATE_VARIABLE_Cache_0_18, ((MR_Box) (mfilterjavac__Filename_58)), &mfilterjavac__conv0_MaybeLineInfo_62);
                  }
#line 111 "mfilterjavac.m"
                  if (mfilterjavac__succeeded)
#line 111 "mfilterjavac.m"
                    {
#line 111 "mfilterjavac.m"
                      mfilterjavac__MaybeLineInfo_62 = ((MR_Word) mfilterjavac__conv0_MaybeLineInfo_62);
#line 111 "mfilterjavac.m"
                      mfilterjavac__succeeded = MR_TRUE;
#line 111 "mfilterjavac.m"
                    }
#line 4244 "mfilterjavac.c"
                  if (mfilterjavac__succeeded)
#line 4246 "mfilterjavac.c"
                    {
#line 4248 "mfilterjavac.c"
                      MR_String mfilterjavac__Line_12;

#line 117 "mfilterjavac.m"
                      if ((mfilterjavac__MaybeLineInfo_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 118 "mfilterjavac.m"
                        mfilterjavac__Line_12 = mfilterjavac__Line0_10;
#line 117 "mfilterjavac.m"
                      else
#line 113 "mfilterjavac.m"
                        {
#line 113 "mfilterjavac.m"
                          MR_Word mfilterjavac__LineInfo_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeLineInfo_62, (MR_Integer) 0)));

#line 114 "mfilterjavac.m"
                          {
#line 114 "mfilterjavac.m"
                            mfilterjavac__translate_and_outpot_line_5_p_0(mfilterjavac__LineInfo_63, mfilterjavac__Filename_58, mfilterjavac__LineNo_61, mfilterjavac__OtherPartsA_56, &mfilterjavac__Line_12);
                          }
#line 113 "mfilterjavac.m"
                        }
#line 71 "mfilterjavac.m"
                      {
#line 71 "mfilterjavac.m"
                        mercury__io__write_string_3_p_0(mfilterjavac__Line_12);
                      }
#line 72 "mfilterjavac.m"
                      /* direct tailcall eliminated */
#line 72 "mfilterjavac.m"
                      {
#line 72 "mfilterjavac.m"
                      }
#line 72 "mfilterjavac.m"
                      continue;
#line 4282 "mfilterjavac.c"
                    }
#line 4284 "mfilterjavac.c"
                  else
#line 4286 "mfilterjavac.c"
                    {
#line 4288 "mfilterjavac.c"
                      MR_Word mfilterjavac__MaybeLineInfoErr_64;

#line 124 "mfilterjavac.m"
                      {
#line 124 "mfilterjavac.m"
                        mfilterjavac__maybe_get_line_info_4_p_0(mfilterjavac__Filename_58, &mfilterjavac__MaybeLineInfoErr_64);
                      }
#line 4296 "mfilterjavac.c"
                      if (((MR_tag((MR_Word) mfilterjavac__MaybeLineInfoErr_64)) == (MR_mktag((MR_Integer) 1))))
#line 4298 "mfilterjavac.c"
                        {
#line 4300 "mfilterjavac.c"
                          MR_String mfilterjavac__Error_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeLineInfoErr_64, (MR_Integer) 0)));
#line 4302 "mfilterjavac.c"
                          MR_Word mfilterjavac__ResultLines_99;
#line 4304 "mfilterjavac.c"
                          MR_Word mfilterjavac__STATE_VARIABLE_Cache_28_100;

#line 133 "mfilterjavac.m"
                          {
#line 133 "mfilterjavac.m"
                            mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1], ((MR_Box) (mfilterjavac__Filename_58)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), mfilterjavac__STATE_VARIABLE_Cache_0_18, &mfilterjavac__STATE_VARIABLE_Cache_28_100);
                          }
#line 71 "mfilterjavac.m"
                          {
#line 71 "mfilterjavac.m"
                            mercury__io__write_string_3_p_0(mfilterjavac__Line0_10);
                          }
#line 72 "mfilterjavac.m"
                          {
#line 72 "mfilterjavac.m"
                            mfilterjavac__filter_lines_5_p_0(&mfilterjavac__ResultLines_99, mfilterjavac__STATE_VARIABLE_Cache_28_100, mfilterjavac__STATE_VARIABLE_Cache_19);
                          }
#line 85 "mfilterjavac.m"
#line 85 "mfilterjavac.m"
                          switch (MR_tag((MR_Word) mfilterjavac__ResultLines_99)) {
#line 85 "mfilterjavac.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 85 "mfilterjavac.m"
                            case (MR_Integer) 0:
#line 84 "mfilterjavac.m"
                              {
#line 84 "mfilterjavac.m"
                                MR_Word base;
#line 84 "mfilterjavac.m"
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 84 "mfilterjavac.m"
                                *mfilterjavac__Result_6 = base;
#line 84 "mfilterjavac.m"
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mfilterjavac__Error_14));
#line 84 "mfilterjavac.m"
                              }
#line 85 "mfilterjavac.m"
                              break;
#line 85 "mfilterjavac.m"
                            case (MR_Integer) 1:
#line 87 "mfilterjavac.m"
                              *mfilterjavac__Result_6 = mfilterjavac__ResultLines_99;
#line 85 "mfilterjavac.m"
                              break;
#line 85 "mfilterjavac.m"
                            case (MR_Integer) 2:
#line 84 "mfilterjavac.m"
                              {
#line 84 "mfilterjavac.m"
                                MR_Word base;
#line 84 "mfilterjavac.m"
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 84 "mfilterjavac.m"
                                *mfilterjavac__Result_6 = base;
#line 84 "mfilterjavac.m"
                                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mfilterjavac__Error_14));
#line 84 "mfilterjavac.m"
                              }
#line 85 "mfilterjavac.m"
                              break;
#line 85 "mfilterjavac.m"
                          }
#line 4367 "mfilterjavac.c"
                        }
#line 4369 "mfilterjavac.c"
                      else
#line 4371 "mfilterjavac.c"
                        {
#line 4373 "mfilterjavac.c"
                          MR_Word mfilterjavac__V_75_75;
#line 4375 "mfilterjavac.c"
                          MR_Word mfilterjavac__LineInfo_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__MaybeLineInfoErr_64, (MR_Integer) 0)));
#line 4377 "mfilterjavac.c"
                          MR_String mfilterjavac__Line_105;
#line 4379 "mfilterjavac.c"
                          MR_Word mfilterjavac__STATE_VARIABLE_Cache_28_107;

#line 127 "mfilterjavac.m"
                          {
#line 127 "mfilterjavac.m"
                            mfilterjavac__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 127 "mfilterjavac.m"
                            MR_hl_field(MR_mktag(1), mfilterjavac__V_75_75, 0) = ((MR_Box) (mfilterjavac__LineInfo_78));
#line 127 "mfilterjavac.m"
                          }
#line 127 "mfilterjavac.m"
                          {
#line 127 "mfilterjavac.m"
                            mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1], ((MR_Box) (mfilterjavac__Filename_58)), ((MR_Box) (mfilterjavac__V_75_75)), mfilterjavac__STATE_VARIABLE_Cache_0_18, &mfilterjavac__STATE_VARIABLE_Cache_28_107);
                          }
#line 128 "mfilterjavac.m"
                          {
#line 128 "mfilterjavac.m"
                            mfilterjavac__translate_and_outpot_line_5_p_0(mfilterjavac__LineInfo_78, mfilterjavac__Filename_58, mfilterjavac__LineNo_61, mfilterjavac__OtherPartsA_56, &mfilterjavac__Line_105);
                          }
#line 71 "mfilterjavac.m"
                          {
#line 71 "mfilterjavac.m"
                            mercury__io__write_string_3_p_0(mfilterjavac__Line_105);
                          }
#line 72 "mfilterjavac.m"
                          /* direct tailcall eliminated */
#line 72 "mfilterjavac.m"
                          {
#line 72 "mfilterjavac.m"
                            MR_Word mfilterjavac__STATE_VARIABLE_Cache_0__tmp_copy_18 = mfilterjavac__STATE_VARIABLE_Cache_28_107;

#line 72 "mfilterjavac.m"
                            mfilterjavac__STATE_VARIABLE_Cache_0_18 = mfilterjavac__STATE_VARIABLE_Cache_0__tmp_copy_18;
#line 72 "mfilterjavac.m"
                          }
#line 72 "mfilterjavac.m"
                          continue;
#line 4418 "mfilterjavac.c"
                        }
#line 4420 "mfilterjavac.c"
                    }
#line 4422 "mfilterjavac.c"
                }
#line 4424 "mfilterjavac.c"
              else
#line 4426 "mfilterjavac.c"
                {
#line 71 "mfilterjavac.m"
                  {
#line 71 "mfilterjavac.m"
                    mercury__io__write_string_3_p_0(mfilterjavac__Line0_10);
                  }
#line 72 "mfilterjavac.m"
                  /* direct tailcall eliminated */
#line 72 "mfilterjavac.m"
                  {
#line 72 "mfilterjavac.m"
                  }
#line 72 "mfilterjavac.m"
                  continue;
#line 4441 "mfilterjavac.c"
                }
#line 69 "mfilterjavac.m"
            }
#line 90 "mfilterjavac.m"
            break;
#line 90 "mfilterjavac.m"
          case (MR_Integer) 2:
#line 94 "mfilterjavac.m"
            {
#line 94 "mfilterjavac.m"
              MR_String mfilterjavac__ErrorStr_17;
#line 94 "mfilterjavac.m"
              MR_String mfilterjavac__V_26_26;
#line 94 "mfilterjavac.m"
              MR_Word mfilterjavac__Error_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mfilterjavac__IOResult_9, (MR_Integer) 0)));
#line 94 "mfilterjavac.m"
              MR_String mfilterjavac__V_35_35;
#line 94 "mfilterjavac.m"
              MR_String mfilterjavac__V_42_42;

#line 95 "mfilterjavac.m"
              {
#line 95 "mfilterjavac.m"
                mfilterjavac__V_26_26 = mercury__io__error_message_1_f_0(mfilterjavac__Error_33);
              }
#line 95 "mfilterjavac.m"
              {
#line 95 "mfilterjavac.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mfilterjavac_scalar_common_3[0], mfilterjavac__V_26_26, &mfilterjavac__V_35_35);
              }
#line 95 "mfilterjavac.m"
              {
#line 95 "mfilterjavac.m"
                mfilterjavac__V_42_42 = mercury__string__f_43_43_2_f_0(mfilterjavac__V_35_35, (MR_String) "\n");
              }
#line 95 "mfilterjavac.m"
              {
#line 95 "mfilterjavac.m"
                mfilterjavac__ErrorStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "stdin: ", mfilterjavac__V_42_42);
              }
#line 96 "mfilterjavac.m"
              {
#line 96 "mfilterjavac.m"
                MR_Word base;
#line 96 "mfilterjavac.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 96 "mfilterjavac.m"
                *mfilterjavac__Result_6 = base;
#line 96 "mfilterjavac.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__ErrorStr_17));
#line 96 "mfilterjavac.m"
              }
#line 94 "mfilterjavac.m"
              *mfilterjavac__STATE_VARIABLE_Cache_19 = mfilterjavac__STATE_VARIABLE_Cache_0_18;
#line 94 "mfilterjavac.m"
            }
#line 90 "mfilterjavac.m"
            break;
#line 90 "mfilterjavac.m"
        }
#line 66 "mfilterjavac.m"
      }
#line 66 "mfilterjavac.m"
      break;
#line 66 "mfilterjavac.m"
    }
#line 63 "mfilterjavac.m"
}

#line 28 "mfilterjavac.m"
void MR_CALL 
main_2_p_0(void)
#line 28 "mfilterjavac.m"
{
#line 44 "mfilterjavac.m"
  {
#line 44 "mfilterjavac.m"
    MR_bool mfilterjavac__succeeded;
#line 44 "mfilterjavac.m"
    MR_Word mfilterjavac__Result_4;
#line 44 "mfilterjavac.m"
    MR_Word mfilterjavac__V_9_9;
#line 45 "mfilterjavac.m"
    MR_Word mfilterjavac__V_5_5;

#line 45 "mfilterjavac.m"
    {
#line 45 "mfilterjavac.m"
      mfilterjavac__V_9_9 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1]);
    }
#line 45 "mfilterjavac.m"
    {
#line 45 "mfilterjavac.m"
      mfilterjavac__filter_lines_5_p_0(&mfilterjavac__Result_4, mfilterjavac__V_9_9, &mfilterjavac__V_5_5);
    }
#line 48 "mfilterjavac.m"
#line 48 "mfilterjavac.m"
    switch (MR_tag((MR_Word) mfilterjavac__Result_4)) {
#line 48 "mfilterjavac.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 48 "mfilterjavac.m"
      case (MR_Integer) 0:
#line 47 "mfilterjavac.m"
        {
#line 47 "mfilterjavac.m"
        }
#line 48 "mfilterjavac.m"
        break;
#line 48 "mfilterjavac.m"
      case (MR_Integer) 1:
#line 49 "mfilterjavac.m"
        {
#line 49 "mfilterjavac.m"
          MR_String mfilterjavac__Error_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Result_4, (MR_Integer) 0)));
#line 49 "mfilterjavac.m"
          MR_Word mfilterjavac__V_15_15;
#line 49 "mfilterjavac.m"
          MR_String mfilterjavac__V_16_16;

#line 50 "mfilterjavac.m"
          {
#line 50 "mfilterjavac.m"
            mfilterjavac__V_15_15 = mercury__io__stderr_stream_0_f_0();
          }
#line 50 "mfilterjavac.m"
          {
#line 50 "mfilterjavac.m"
            mfilterjavac__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Error: ", mfilterjavac__Error_6);
          }
#line 50 "mfilterjavac.m"
          {
#line 50 "mfilterjavac.m"
            mercury__io__write_string_4_p_0(mfilterjavac__V_15_15, mfilterjavac__V_16_16);
          }
#line 51 "mfilterjavac.m"
          {
#line 51 "mfilterjavac.m"
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 51 "mfilterjavac.m"
            return;
          }
#line 49 "mfilterjavac.m"
        }
#line 48 "mfilterjavac.m"
        break;
#line 48 "mfilterjavac.m"
      case (MR_Integer) 2:
#line 53 "mfilterjavac.m"
        {
#line 53 "mfilterjavac.m"
          MR_Word mfilterjavac__V_11_11;
#line 53 "mfilterjavac.m"
          MR_String mfilterjavac__V_12_12;
#line 53 "mfilterjavac.m"
          MR_String mfilterjavac__Error_21 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__Result_4, (MR_Integer) 0)));

#line 54 "mfilterjavac.m"
          {
#line 54 "mfilterjavac.m"
            mfilterjavac__V_11_11 = mercury__io__stderr_stream_0_f_0();
          }
#line 54 "mfilterjavac.m"
          {
#line 54 "mfilterjavac.m"
            mfilterjavac__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: ", mfilterjavac__Error_21);
          }
#line 54 "mfilterjavac.m"
          {
#line 54 "mfilterjavac.m"
            mercury__io__write_string_4_p_0(mfilterjavac__V_11_11, mfilterjavac__V_12_12);
#line 54 "mfilterjavac.m"
            return;
          }
#line 53 "mfilterjavac.m"
        }
#line 48 "mfilterjavac.m"
        break;
#line 48 "mfilterjavac.m"
    }
#line 44 "mfilterjavac.m"
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
