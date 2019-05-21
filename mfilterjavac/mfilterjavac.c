/*
** Automatically generated from `mfilterjavac.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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




static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0;

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1;

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_begin_or_end_block_0[2];

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0[2];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0[2];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0;

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_1[1];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1;

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_2[1];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2;

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0[1];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1[1];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2[1];

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_filter_result_0[3];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0[3];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_filter_result_0[3];

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_0_0[4];

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_0_0[4];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0;

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0[1];

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0[1];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_0[1];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_0[1];

static const MR_FA_TypeInfo_Struct1 mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0;

static const MR_FA_TypeInfo_Struct1 mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0;

static const MR_FA_TypeInfo_Struct2 mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0;

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_0[1];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0;

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1;

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_2[1];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2;

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0[1];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1[1];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2[1];

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_end_0[3];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0[3];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0[3];

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_error_0_0[3];

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_error_0_0[3];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0;

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0[1];

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0[1];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0[1];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0[1];

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0;

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1;

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2;

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_line_info_error_type_0[3];

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0[3];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0[3];

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_mark_0_0[4];

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_mark_0_0[4];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0;

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0[1];

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0[1];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0[1];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_mark_0[1];

static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0(
  MR_Word mfilterjavac__HeadVar__2_1,
  MR_Word mfilterjavac__HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0(
  MR_Word mfilterjavac__HeadVar__2_1,
  MR_Word mfilterjavac__HeadVar__2_2);

static void MR_CALL 
mfilterjavac__filter_lines_6_p_0(
  MR_Word mfilterjavac__InStream_7,
  MR_Word mfilterjavac__OutStream_8,
  MR_Word * mfilterjavac__Result_9,
  MR_Word mfilterjavac__STATE_VARIABLE_Cache_0_21);

static MR_bool MR_CALL 
mfilterjavac__filter_line_7_p_0_1(
  MR_Box mfilterjavac__closure_arg,
  MR_Box mfilterjavac__wrapper_arg_1);

static void MR_CALL 
mfilterjavac__filter_line_7_p_0(
  MR_Word * mfilterjavac__Result_8,
  MR_String mfilterjavac__STATE_VARIABLE_Line_0_24,
  MR_String * mfilterjavac__STATE_VARIABLE_Line_25,
  MR_Word mfilterjavac__STATE_VARIABLE_Cache_0_26,
  MR_Word * mfilterjavac__STATE_VARIABLE_Cache_27);

static void MR_CALL 
mfilterjavac__maybe_get_line_info_4_p_0(
  MR_String mfilterjavac__Filename_5,
  MR_Word * mfilterjavac__MaybeInfo_6);

static void MR_CALL 
mfilterjavac__create_line_info_4_p_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_String mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3,
  MR_Word * mfilterjavac__HeadVar__4_4);

static void MR_CALL 
mfilterjavac__read_line_marks_6_p_0(
  MR_Word mfilterjavac__Stream_7,
  MR_Integer mfilterjavac__JavaLineNo_8,
  MR_Word mfilterjavac__Marks0_9,
  MR_Word * mfilterjavac__MaybeMarks_10);

static void MR_CALL 
mfilterjavac__translate_and_outpot_line_5_p_0(
  MR_Word mfilterjavac__LineInfo_6,
  MR_String mfilterjavac__Filename_7,
  MR_Integer mfilterjavac__LineNo_8,
  MR_Word mfilterjavac__RestParts_9,
  MR_String * mfilterjavac__OutLine_10);

static void MR_CALL 
mfilterjavac__line_info_translate_5_p_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_String mfilterjavac__HeadVar__2_2,
  MR_Integer mfilterjavac__HeadVar__3_3,
  MR_String * mfilterjavac__Name_4,
  MR_Integer * mfilterjavac__Line_5);

static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3);


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
    ((MR_Box) (mfilterjavac__filter_line_7_p_0_1)),
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



static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0 = {
  (MR_String) "begin_block",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1 = {
  (MR_String) "end_block",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_begin_or_end_block_0[2] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1
};

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0[2] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1
};

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_begin_or_end_block_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mfilterjavac__mfilterjavac__field_types_filter_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2 = {
  (MR_String) "warning",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mfilterjavac__mfilterjavac__field_types_filter_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2
};

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_filter_result_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2
  }
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0[3] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1,
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0,
  &mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2
};

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_filter_result_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_filter_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_0_0[4] = {
  (MR_String) "li_start",
  (MR_String) "li_end",
  (MR_String) "li_delta",
  (MR_String) "li_orig_file"
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0 = {
  (MR_String) "line_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mfilterjavac__mfilterjavac__field_types_line_info_0_0,
  mfilterjavac__mfilterjavac__field_names_line_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0
};

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0
  }
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0
};

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct1 mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0
  }
};

const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_cache_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0 = {
  (MR_String) "line_info_end",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mfilterjavac__mfilterjavac__field_types_line_info_end_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1 = {
  (MR_String) "line_info_no_end",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2 = {
  (MR_String) "line_info_duplicate_begin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mfilterjavac__mfilterjavac__field_types_line_info_end_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2
};

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_end_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2
  }
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0[3] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2,
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0,
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1
};

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_end_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
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

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_error_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_type_0
};

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_error_0_0[3] = {
  (MR_String) "li_filename",
  (MR_String) "li_lineno",
  (MR_String) "li_error"
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0 = {
  (MR_String) "line_info_error",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mfilterjavac__mfilterjavac__field_types_line_info_error_0_0,
  mfilterjavac__mfilterjavac__field_names_line_info_error_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0
};

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0
  }
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0
};

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0 = {
  (MR_String) "lie_end_without_beginning",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1 = {
  (MR_String) "lie_beginning_without_end",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2 = {
  (MR_String) "lie_duplicate_beginning",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_value_ordered_line_info_error_type_0[3] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2
};

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0[3] = {
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2,
  &mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0
};

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_mark_0_0[4] = {
  (MR_PseudoTypeInfo) &mfilterjavac__mfilterjavac__type_ctor_info_begin_or_end_block_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_mark_0_0[4] = {
  (MR_String) "lm_type",
  (MR_String) "lm_mer_file",
  (MR_String) "lm_java_line_no",
  (MR_String) "lm_mer_line_no"
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0 = {
  (MR_String) "line_mark",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mfilterjavac__mfilterjavac__field_types_line_mark_0_0,
  mfilterjavac__mfilterjavac__field_names_line_mark_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0
};

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0
  }
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0
};

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_mark_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_mark_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_15 = (MR_Integer) mfilterjavac__HeadVar__2_2;
    MR_Integer mfilterjavac__CastY_16 = (MR_Integer) mfilterjavac__HeadVar__3_3;

    mfilterjavac__succeeded = (mfilterjavac__CastX_15 == mfilterjavac__CastY_16);
    if (mfilterjavac__succeeded)
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mfilterjavac__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mfilterjavac__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));
      MR_String mfilterjavac__ArgX2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
      MR_String mfilterjavac__ArgY2_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer mfilterjavac__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer mfilterjavac__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer mfilterjavac__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer mfilterjavac__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word mfilterjavac__Var_12;
      MR_Integer mfilterjavac__Var_21 = (MR_Integer) mfilterjavac__ArgX1_4;
      MR_Integer mfilterjavac__Var_22 = (MR_Integer) mfilterjavac__ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__Var_12, mfilterjavac__Var_21, mfilterjavac__Var_22);
      mfilterjavac__succeeded = (mfilterjavac__Var_12 == (MR_Integer) 0);
      mfilterjavac__succeeded = !(mfilterjavac__succeeded);
      if (mfilterjavac__succeeded)
        *mfilterjavac__HeadVar__1_1 = mfilterjavac__Var_12;
      else
      {
        MR_Word mfilterjavac__Var_13;

        mercury__private_builtin__builtin_compare_string_3_p_0(&mfilterjavac__Var_13, mfilterjavac__ArgX2_6, mfilterjavac__ArgY2_7);
        mfilterjavac__succeeded = (mfilterjavac__Var_13 == (MR_Integer) 0);
        mfilterjavac__succeeded = !(mfilterjavac__succeeded);
        if (mfilterjavac__succeeded)
          *mfilterjavac__HeadVar__1_1 = mfilterjavac__Var_13;
        else
        {
          MR_Word mfilterjavac__Var_14;

          mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__Var_14, mfilterjavac__ArgX3_8, mfilterjavac__ArgY3_9);
          mfilterjavac__succeeded = (mfilterjavac__Var_14 == (MR_Integer) 0);
          mfilterjavac__succeeded = !(mfilterjavac__succeeded);
          if (mfilterjavac__succeeded)
            *mfilterjavac__HeadVar__1_1 = mfilterjavac__Var_14;
          else
            mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__ArgX4_10, mfilterjavac__ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_11 = (MR_Integer) mfilterjavac__HeadVar__1_1;
    MR_Integer mfilterjavac__CastY_12 = (MR_Integer) mfilterjavac__HeadVar__2_2;

    mfilterjavac__succeeded = (mfilterjavac__CastX_11 == mfilterjavac__CastY_12);
    if (mfilterjavac__succeeded)
      mfilterjavac__succeeded = MR_TRUE;
    else
    {
      MR_Word mfilterjavac__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mfilterjavac__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
      MR_String mfilterjavac__ArgX2_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
      MR_String mfilterjavac__ArgY2_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mfilterjavac__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer mfilterjavac__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer mfilterjavac__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer mfilterjavac__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));

      mfilterjavac__succeeded = (mfilterjavac__ArgX1_3 == mfilterjavac__ArgY1_4);
      if (mfilterjavac__succeeded)
      {
        mfilterjavac__succeeded = (strcmp(mfilterjavac__ArgX2_5, mfilterjavac__ArgY2_6) == 0);
        if (mfilterjavac__succeeded)
        {
          mfilterjavac__succeeded = (mfilterjavac__ArgX3_7 == mfilterjavac__ArgY3_8);
          if (mfilterjavac__succeeded)
            mfilterjavac__succeeded = (mfilterjavac__ArgX4_9 == mfilterjavac__ArgY4_10);
        }
      }
    }
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3)
{
  {
    MR_Integer mfilterjavac__Cast_HeadVar1_4 = (MR_Integer) mfilterjavac__HeadVar__2_2;
    MR_Integer mfilterjavac__Cast_HeadVar2_5 = (MR_Integer) mfilterjavac__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Cast_HeadVar1_4, mfilterjavac__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0(
  MR_Word mfilterjavac__HeadVar__2_1,
  MR_Word mfilterjavac__HeadVar__2_2)
{
  {
    MR_bool mfilterjavac__succeeded = (mfilterjavac__HeadVar__2_1 == mfilterjavac__HeadVar__2_2);

    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_12 = (MR_Integer) mfilterjavac__HeadVar__2_2;
    MR_Integer mfilterjavac__CastY_13 = (MR_Integer) mfilterjavac__HeadVar__3_3;

    mfilterjavac__succeeded = (mfilterjavac__CastX_12 == mfilterjavac__CastY_13);
    if (mfilterjavac__succeeded)
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String mfilterjavac__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
      MR_String mfilterjavac__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer mfilterjavac__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mfilterjavac__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mfilterjavac__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mfilterjavac__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mfilterjavac__Var_10;

      mercury__private_builtin__builtin_compare_string_3_p_0(&mfilterjavac__Var_10, mfilterjavac__ArgX1_4, mfilterjavac__ArgY1_5);
      mfilterjavac__succeeded = (mfilterjavac__Var_10 == (MR_Integer) 0);
      mfilterjavac__succeeded = !(mfilterjavac__succeeded);
      if (mfilterjavac__succeeded)
        *mfilterjavac__HeadVar__1_1 = mfilterjavac__Var_10;
      else
      {
        MR_Word mfilterjavac__Var_11;

        mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__Var_11, mfilterjavac__ArgX2_6, mfilterjavac__ArgY2_7);
        mfilterjavac__succeeded = (mfilterjavac__Var_11 == (MR_Integer) 0);
        mfilterjavac__succeeded = !(mfilterjavac__succeeded);
        if (mfilterjavac__succeeded)
          *mfilterjavac__HeadVar__1_1 = mfilterjavac__Var_11;
        else
        {
          MR_Integer mfilterjavac__Var_17 = (MR_Integer) mfilterjavac__ArgX3_8;
          MR_Integer mfilterjavac__Var_18 = (MR_Integer) mfilterjavac__ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Var_17, mfilterjavac__Var_18);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_9 = (MR_Integer) mfilterjavac__HeadVar__1_1;
    MR_Integer mfilterjavac__CastY_10 = (MR_Integer) mfilterjavac__HeadVar__2_2;

    mfilterjavac__succeeded = (mfilterjavac__CastX_9 == mfilterjavac__CastY_10);
    if (mfilterjavac__succeeded)
      mfilterjavac__succeeded = MR_TRUE;
    else
    {
      MR_String mfilterjavac__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
      MR_String mfilterjavac__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mfilterjavac__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer mfilterjavac__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mfilterjavac__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mfilterjavac__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));

      mfilterjavac__succeeded = (strcmp(mfilterjavac__ArgX1_3, mfilterjavac__ArgY1_4) == 0);
      if (mfilterjavac__succeeded)
      {
        mfilterjavac__succeeded = (mfilterjavac__ArgX2_5 == mfilterjavac__ArgY2_6);
        if (mfilterjavac__succeeded)
          mfilterjavac__succeeded = (mfilterjavac__ArgX3_7 == mfilterjavac__ArgY3_8);
      }
    }
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_16 = (MR_Integer) mfilterjavac__HeadVar__2_2;
    MR_Integer mfilterjavac__CastY_17 = (MR_Integer) mfilterjavac__HeadVar__3_3;

    mfilterjavac__succeeded = (mfilterjavac__CastX_16 == mfilterjavac__CastY_17);
    if (mfilterjavac__succeeded)
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mfilterjavac__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mfilterjavac__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Var_21, mfilterjavac__ArgY1_5);
                }
                break;
              case (MR_Integer) 2:
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mfilterjavac__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mfilterjavac__ArgY1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Var_20, mfilterjavac__ArgY1_15);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_9 = (MR_Integer) mfilterjavac__HeadVar__1_1;
    MR_Integer mfilterjavac__CastY_10 = (MR_Integer) mfilterjavac__HeadVar__2_2;

    mfilterjavac__succeeded = (mfilterjavac__CastX_9 == mfilterjavac__CastY_10);
    if (mfilterjavac__succeeded)
      mfilterjavac__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mfilterjavac__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mfilterjavac__CastX_5 = (MR_Integer) mfilterjavac__HeadVar__1_1;
            MR_Integer mfilterjavac__CastY_6 = (MR_Integer) mfilterjavac__HeadVar__2_2;

            mfilterjavac__succeeded = (mfilterjavac__CastY_6 == mfilterjavac__CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mfilterjavac__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mfilterjavac__ArgY1_4;

            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mfilterjavac__succeeded)
            {
              mfilterjavac__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
              mfilterjavac__succeeded = (mfilterjavac__ArgX1_3 == mfilterjavac__ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mfilterjavac__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mfilterjavac__ArgY1_8;

            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mfilterjavac__succeeded)
            {
              mfilterjavac__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
              mfilterjavac__succeeded = (mfilterjavac__ArgX1_7 == mfilterjavac__ArgY1_8);
            }
          }
          break;
      }
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3)
{
  {
    MR_Word mfilterjavac__Cast_HeadVar1_4 = mfilterjavac__HeadVar__2_2;
    MR_Word mfilterjavac__Cast_HeadVar2_5 = mfilterjavac__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mfilterjavac_scalar_common_2[0], mfilterjavac__HeadVar__1_1, ((MR_Box) (mfilterjavac__Cast_HeadVar1_4)), ((MR_Box) (mfilterjavac__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Word mfilterjavac__Cast_HeadVar1_3 = mfilterjavac__HeadVar__1_1;
    MR_Word mfilterjavac__Cast_HeadVar2_4 = mfilterjavac__HeadVar__2_2;

    mfilterjavac__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mfilterjavac_scalar_common_2[0], ((MR_Box) (mfilterjavac__Cast_HeadVar1_3)), ((MR_Box) (mfilterjavac__Cast_HeadVar2_4)));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_15 = (MR_Integer) mfilterjavac__HeadVar__2_2;
    MR_Integer mfilterjavac__CastY_16 = (MR_Integer) mfilterjavac__HeadVar__3_3;

    mfilterjavac__succeeded = (mfilterjavac__CastX_15 == mfilterjavac__CastY_16);
    if (mfilterjavac__succeeded)
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer mfilterjavac__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mfilterjavac__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer mfilterjavac__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mfilterjavac__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer mfilterjavac__ArgX3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer mfilterjavac__ArgY3_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 2)));
      MR_String mfilterjavac__ArgX4_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));
      MR_String mfilterjavac__ArgY4_11 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word mfilterjavac__Var_12;

      mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__Var_12, mfilterjavac__ArgX1_4, mfilterjavac__ArgY1_5);
      mfilterjavac__succeeded = (mfilterjavac__Var_12 == (MR_Integer) 0);
      mfilterjavac__succeeded = !(mfilterjavac__succeeded);
      if (mfilterjavac__succeeded)
        *mfilterjavac__HeadVar__1_1 = mfilterjavac__Var_12;
      else
      {
        MR_Word mfilterjavac__Var_13;

        mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__Var_13, mfilterjavac__ArgX2_6, mfilterjavac__ArgY2_7);
        mfilterjavac__succeeded = (mfilterjavac__Var_13 == (MR_Integer) 0);
        mfilterjavac__succeeded = !(mfilterjavac__succeeded);
        if (mfilterjavac__succeeded)
          *mfilterjavac__HeadVar__1_1 = mfilterjavac__Var_13;
        else
        {
          MR_Word mfilterjavac__Var_14;

          mercury__private_builtin__builtin_compare_int_3_p_0(&mfilterjavac__Var_14, mfilterjavac__ArgX3_8, mfilterjavac__ArgY3_9);
          mfilterjavac__succeeded = (mfilterjavac__Var_14 == (MR_Integer) 0);
          mfilterjavac__succeeded = !(mfilterjavac__succeeded);
          if (mfilterjavac__succeeded)
            *mfilterjavac__HeadVar__1_1 = mfilterjavac__Var_14;
          else
            mercury__private_builtin__builtin_compare_string_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__ArgX4_10, mfilterjavac__ArgY4_11);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_11 = (MR_Integer) mfilterjavac__HeadVar__1_1;
    MR_Integer mfilterjavac__CastY_12 = (MR_Integer) mfilterjavac__HeadVar__2_2;

    mfilterjavac__succeeded = (mfilterjavac__CastX_11 == mfilterjavac__CastY_12);
    if (mfilterjavac__succeeded)
      mfilterjavac__succeeded = MR_TRUE;
    else
    {
      MR_Integer mfilterjavac__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mfilterjavac__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mfilterjavac__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer mfilterjavac__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mfilterjavac__ArgX3_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer mfilterjavac__ArgY3_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 2)));
      MR_String mfilterjavac__ArgX4_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__1_1, (MR_Integer) 3)));
      MR_String mfilterjavac__ArgY4_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__HeadVar__2_2, (MR_Integer) 3)));

      mfilterjavac__succeeded = (mfilterjavac__ArgX1_3 == mfilterjavac__ArgY1_4);
      if (mfilterjavac__succeeded)
      {
        mfilterjavac__succeeded = (mfilterjavac__ArgX2_5 == mfilterjavac__ArgY2_6);
        if (mfilterjavac__succeeded)
        {
          mfilterjavac__succeeded = (mfilterjavac__ArgX3_7 == mfilterjavac__ArgY3_8);
          if (mfilterjavac__succeeded)
            mfilterjavac__succeeded = (strcmp(mfilterjavac__ArgX4_9, mfilterjavac__ArgY4_10) == 0);
        }
      }
    }
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_16 = (MR_Integer) mfilterjavac__HeadVar__2_2;
    MR_Integer mfilterjavac__CastY_17 = (MR_Integer) mfilterjavac__HeadVar__3_3;

    mfilterjavac__succeeded = (mfilterjavac__CastX_16 == mfilterjavac__CastY_17);
    if (mfilterjavac__succeeded)
      *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mfilterjavac__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String mfilterjavac__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_string_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Var_20, mfilterjavac__ArgY1_8);
                }
                break;
              case (MR_Integer) 2:
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mfilterjavac__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mfilterjavac__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mfilterjavac__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mfilterjavac__ArgY1_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_string_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Var_21, mfilterjavac__ArgY1_15);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Integer mfilterjavac__CastX_9 = (MR_Integer) mfilterjavac__HeadVar__1_1;
    MR_Integer mfilterjavac__CastY_10 = (MR_Integer) mfilterjavac__HeadVar__2_2;

    mfilterjavac__succeeded = (mfilterjavac__CastX_9 == mfilterjavac__CastY_10);
    if (mfilterjavac__succeeded)
      mfilterjavac__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mfilterjavac__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mfilterjavac__CastX_3 = (MR_Integer) mfilterjavac__HeadVar__1_1;
            MR_Integer mfilterjavac__CastY_4 = (MR_Integer) mfilterjavac__HeadVar__2_2;

            mfilterjavac__succeeded = (mfilterjavac__CastY_4 == mfilterjavac__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mfilterjavac__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mfilterjavac__ArgY1_6;

            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mfilterjavac__succeeded)
            {
              mfilterjavac__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
              mfilterjavac__succeeded = (strcmp(mfilterjavac__ArgX1_5, mfilterjavac__ArgY1_6) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mfilterjavac__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mfilterjavac__ArgY1_8;

            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mfilterjavac__succeeded)
            {
              mfilterjavac__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__HeadVar__2_2, (MR_Integer) 0)));
              mfilterjavac__succeeded = (strcmp(mfilterjavac__ArgX1_7, mfilterjavac__ArgY1_8) == 0);
            }
          }
          break;
      }
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0(
  MR_Word * mfilterjavac__HeadVar__1_1,
  MR_Word mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3)
{
  {
    MR_Integer mfilterjavac__Cast_HeadVar1_4 = (MR_Integer) mfilterjavac__HeadVar__2_2;
    MR_Integer mfilterjavac__Cast_HeadVar2_5 = (MR_Integer) mfilterjavac__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(mfilterjavac__HeadVar__1_1, mfilterjavac__Cast_HeadVar1_4, mfilterjavac__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0(
  MR_Word mfilterjavac__HeadVar__2_1,
  MR_Word mfilterjavac__HeadVar__2_2)
{
  {
    MR_bool mfilterjavac__succeeded = (mfilterjavac__HeadVar__2_1 == mfilterjavac__HeadVar__2_2);

    return mfilterjavac__succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_Word mfilterjavac__InStream_4;
    MR_Word mfilterjavac__OutStream_5;
    MR_Word mfilterjavac__Result_6;
    MR_Word mfilterjavac__Var_12;

    mercury__io__input_stream_3_p_0(&mfilterjavac__InStream_4);
    mercury__io__output_stream_3_p_0(&mfilterjavac__OutStream_5);
    mfilterjavac__Var_12 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1]);
    mfilterjavac__filter_lines_6_p_0(mfilterjavac__InStream_4, mfilterjavac__OutStream_5, &mfilterjavac__Result_6, mfilterjavac__Var_12);
    switch (MR_tag((MR_Word) mfilterjavac__Result_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mfilterjavac__Error_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Result_6, (MR_Integer) 0)));
          MR_Word mfilterjavac__Var_18;
          MR_String mfilterjavac__Var_19;

          mfilterjavac__Var_18 = mercury__io__stderr_stream_0_f_0();
          mfilterjavac__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "Error: ", mfilterjavac__Error_7);
          mercury__io__write_string_4_p_0(mfilterjavac__Var_18, mfilterjavac__Var_19);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mfilterjavac__Var_14;
          MR_String mfilterjavac__Var_15;
          MR_String mfilterjavac__Error_24 = ((MR_String) (MR_hl_field(MR_mktag(2), mfilterjavac__Result_6, (MR_Integer) 0)));

          mfilterjavac__Var_14 = mercury__io__stderr_stream_0_f_0();
          mfilterjavac__Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: ", mfilterjavac__Error_24);
          mercury__io__write_string_4_p_0(mfilterjavac__Var_14, mfilterjavac__Var_15);
        }
        break;
    }
  }
}

static void MR_CALL 
mfilterjavac__filter_lines_6_p_0(
  MR_Word mfilterjavac__InStream_7,
  MR_Word mfilterjavac__OutStream_8,
  MR_Word * mfilterjavac__Result_9,
  MR_Word mfilterjavac__STATE_VARIABLE_Cache_0_21)
{
  {
    MR_Word mfilterjavac__IOResult_12;

    mercury__io__read_line_as_string_4_p_0(mfilterjavac__InStream_7, &mfilterjavac__IOResult_12);
    switch (MR_tag((MR_Word) mfilterjavac__IOResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mfilterjavac__Result_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_String mfilterjavac__Line0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__IOResult_12, (MR_Integer) 0)));
          MR_Word mfilterjavac__Result0_14;
          MR_String mfilterjavac__Line_15;
          MR_Word mfilterjavac__ResultLines_16;
          MR_Word mfilterjavac__STATE_VARIABLE_Cache_30_30;

          mfilterjavac__filter_line_7_p_0(&mfilterjavac__Result0_14, mfilterjavac__Line0_13, &mfilterjavac__Line_15, mfilterjavac__STATE_VARIABLE_Cache_0_21, &mfilterjavac__STATE_VARIABLE_Cache_30_30);
          mercury__io__write_string_4_p_0(mfilterjavac__OutStream_8, mfilterjavac__Line_15);
          mfilterjavac__filter_lines_6_p_0(mfilterjavac__InStream_7, mfilterjavac__OutStream_8, &mfilterjavac__ResultLines_16, mfilterjavac__STATE_VARIABLE_Cache_30_30);
          if ((mfilterjavac__Result0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mfilterjavac__Result_9 = mfilterjavac__ResultLines_16;
          else
          {
            MR_String mfilterjavac__Error_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Result0_14, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mfilterjavac__ResultLines_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mfilterjavac__Result_9 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mfilterjavac__Error_17));
                }
                break;
              case (MR_Integer) 1:
                *mfilterjavac__Result_9 = mfilterjavac__ResultLines_16;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mfilterjavac__Result_9 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mfilterjavac__Error_17));
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mfilterjavac__ErrorStr_20;
          MR_String mfilterjavac__Var_28;
          MR_Word mfilterjavac__Error_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mfilterjavac__IOResult_12, (MR_Integer) 0)));
          MR_String mfilterjavac__Var_40;

          mfilterjavac__Var_28 = mercury__io__error_message_1_f_0(mfilterjavac__Error_37);
          mfilterjavac__Var_40 = mercury__string__f_43_43_2_f_0(mfilterjavac__Var_28, (MR_String) "\n");
          mfilterjavac__ErrorStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "stdin: ", mfilterjavac__Var_40);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mfilterjavac__Result_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__ErrorStr_20));
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac__filter_line_7_p_0_1(
  MR_Box mfilterjavac__closure_arg,
  MR_Box mfilterjavac__wrapper_arg_1)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Box mfilterjavac__closure = mfilterjavac__closure_arg;

    mfilterjavac__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) mfilterjavac__wrapper_arg_1));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac__filter_line_7_p_0(
  MR_Word * mfilterjavac__Result_8,
  MR_String mfilterjavac__STATE_VARIABLE_Line_0_24,
  MR_String * mfilterjavac__STATE_VARIABLE_Line_25,
  MR_Word mfilterjavac__STATE_VARIABLE_Cache_0_26,
  MR_Word * mfilterjavac__STATE_VARIABLE_Cache_27)
{
  {
    MR_bool mfilterjavac__succeeded;
    MR_Word mfilterjavac__OtherPartsA_14;
    MR_String mfilterjavac__Filename_16;
    MR_Integer mfilterjavac__LineNo_19;
    MR_Word mfilterjavac__PartsA_12;
    MR_String mfilterjavac__PartAA_13;
    MR_Word mfilterjavac__PartsAA_15;
    MR_String mfilterjavac__LineStr_17;
    MR_String mfilterjavac__Empty_18;
    MR_Char mfilterjavac__Var_31;
    MR_Word mfilterjavac__Var_32;
    MR_Word mfilterjavac__Var_33;
    MR_Word mfilterjavac__Var_34;

    mfilterjavac__PartsA_12 = mercury__string__split_at_separator_2_f_0((MR_Word) &mfilterjavac_scalar_common_2[1], mfilterjavac__STATE_VARIABLE_Line_0_24);
    mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__PartsA_12)) == (MR_mktag((MR_Integer) 1)));
    if (mfilterjavac__succeeded)
    {
      mfilterjavac__PartAA_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsA_12, (MR_Integer) 0)));
      mfilterjavac__OtherPartsA_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsA_12, (MR_Integer) 1)));
      mfilterjavac__Var_31 = (MR_Char) 58;
      mfilterjavac__PartsAA_15 = mercury__string__split_at_char_2_f_0(mfilterjavac__Var_31, mfilterjavac__PartAA_13);
      mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__PartsAA_15)) == (MR_mktag((MR_Integer) 1)));
      if (mfilterjavac__succeeded)
      {
        mfilterjavac__Filename_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsAA_15, (MR_Integer) 0)));
        mfilterjavac__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsAA_15, (MR_Integer) 1)));
        mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__Var_32)) == (MR_mktag((MR_Integer) 1)));
        if (mfilterjavac__succeeded)
        {
          mfilterjavac__LineStr_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_32, (MR_Integer) 0)));
          mfilterjavac__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_32, (MR_Integer) 1)));
          mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__Var_33)) == (MR_mktag((MR_Integer) 1)));
          if (mfilterjavac__succeeded)
          {
            mfilterjavac__Empty_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_33, (MR_Integer) 0)));
            mfilterjavac__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_33, (MR_Integer) 1)));
            mfilterjavac__succeeded = (mfilterjavac__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mfilterjavac__succeeded)
            {
              mfilterjavac__succeeded = mercury__string__to_int_2_p_0(mfilterjavac__LineStr_17, &mfilterjavac__LineNo_19);
              if (mfilterjavac__succeeded)
                mfilterjavac__succeeded = (strcmp(mfilterjavac__Empty_18, (MR_String) "") == 0);
            }
          }
        }
      }
    }
    if (mfilterjavac__succeeded)
    {
      MR_Word mfilterjavac__MaybeLineInfo_20;
      MR_Box mfilterjavac__conv0_MaybeLineInfo_20;

      mfilterjavac__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1], mfilterjavac__STATE_VARIABLE_Cache_0_26, ((MR_Box) (mfilterjavac__Filename_16)), &mfilterjavac__conv0_MaybeLineInfo_20);
      if (mfilterjavac__succeeded)
      {
        mfilterjavac__MaybeLineInfo_20 = ((MR_Word) mfilterjavac__conv0_MaybeLineInfo_20);
        mfilterjavac__succeeded = MR_TRUE;
      }
      if (mfilterjavac__succeeded)
      {
        if ((mfilterjavac__MaybeLineInfo_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *mfilterjavac__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *mfilterjavac__STATE_VARIABLE_Line_25 = mfilterjavac__STATE_VARIABLE_Line_0_24;
        }
        else
        {
          MR_Word mfilterjavac__LineInfo_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeLineInfo_20, (MR_Integer) 0)));
          MR_String mfilterjavac__MerFileName_57;
          MR_Integer mfilterjavac__MerLineNo_58;
          MR_String mfilterjavac__Rest_59;
          MR_String mfilterjavac__Var_70;
          MR_String mfilterjavac__Var_72;
          MR_String mfilterjavac__Var_73;
          MR_String mfilterjavac__Var_80;
          MR_String mfilterjavac__Var_82;

          mfilterjavac__line_info_translate_5_p_0(mfilterjavac__LineInfo_21, mfilterjavac__Filename_16, mfilterjavac__LineNo_19, &mfilterjavac__MerFileName_57, &mfilterjavac__MerLineNo_58);
          mfilterjavac__Rest_59 = mercury__string__join_list_2_f_0((MR_String) " ", mfilterjavac__OtherPartsA_14);
          mfilterjavac__Var_70 = mercury__string__f_43_43_2_f_0(mfilterjavac__Rest_59, (MR_String) "\n");
          mfilterjavac__Var_72 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mfilterjavac__Var_70);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mfilterjavac_scalar_common_3[0], mfilterjavac__MerLineNo_58, &mfilterjavac__Var_73);
          mfilterjavac__Var_80 = mercury__string__f_43_43_2_f_0(mfilterjavac__Var_73, mfilterjavac__Var_72);
          mfilterjavac__Var_82 = mercury__string__f_43_43_2_f_0((MR_String) ":", mfilterjavac__Var_80);
          *mfilterjavac__STATE_VARIABLE_Line_25 = mercury__string__f_43_43_2_f_0(mfilterjavac__MerFileName_57, mfilterjavac__Var_82);
          *mfilterjavac__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        *mfilterjavac__STATE_VARIABLE_Cache_27 = mfilterjavac__STATE_VARIABLE_Cache_0_26;
      }
      else
      {
        MR_Word mfilterjavac__MaybeLineInfoErr_22;

        mfilterjavac__maybe_get_line_info_4_p_0(mfilterjavac__Filename_16, &mfilterjavac__MaybeLineInfoErr_22);
        if (((MR_tag((MR_Word) mfilterjavac__MaybeLineInfoErr_22)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_String mfilterjavac__Error_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeLineInfoErr_22, (MR_Integer) 0)));

          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1], ((MR_Box) (mfilterjavac__Filename_16)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), mfilterjavac__STATE_VARIABLE_Cache_0_26, mfilterjavac__STATE_VARIABLE_Cache_27);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mfilterjavac__Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__Error_23));
          }
          *mfilterjavac__STATE_VARIABLE_Line_25 = mfilterjavac__STATE_VARIABLE_Line_0_24;
        }
        else
        {
          MR_Word mfilterjavac__Var_39;
          MR_Word mfilterjavac__LineInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__MaybeLineInfoErr_22, (MR_Integer) 0)));

          {
            mfilterjavac__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mfilterjavac__Var_39, 0) = ((MR_Box) (mfilterjavac__LineInfo_42));
          }
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mfilterjavac_scalar_common_1[1], ((MR_Box) (mfilterjavac__Filename_16)), ((MR_Box) (mfilterjavac__Var_39)), mfilterjavac__STATE_VARIABLE_Cache_0_26, mfilterjavac__STATE_VARIABLE_Cache_27);
          mfilterjavac__translate_and_outpot_line_5_p_0(mfilterjavac__LineInfo_42, mfilterjavac__Filename_16, mfilterjavac__LineNo_19, mfilterjavac__OtherPartsA_14, mfilterjavac__STATE_VARIABLE_Line_25);
          *mfilterjavac__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      }
    }
    else
    {
      *mfilterjavac__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mfilterjavac__STATE_VARIABLE_Cache_27 = mfilterjavac__STATE_VARIABLE_Cache_0_26;
      *mfilterjavac__STATE_VARIABLE_Line_25 = mfilterjavac__STATE_VARIABLE_Line_0_24;
    }
  }
}

static void MR_CALL 
mfilterjavac__maybe_get_line_info_4_p_0(
  MR_String mfilterjavac__Filename_5,
  MR_Word * mfilterjavac__MaybeInfo_6)
{
  {
    MR_Word mfilterjavac__Res_8;

    mercury__io__open_input_4_p_0(mfilterjavac__Filename_5, &mfilterjavac__Res_8);
    if (((MR_tag((MR_Word) mfilterjavac__Res_8)) == (MR_mktag((MR_Integer) 1))))
    {
      *mfilterjavac__MaybeInfo_6 = (MR_Word) &mfilterjavac_scalar_common_3[1];
    }
    else
    {
      MR_Word mfilterjavac__FileStream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Res_8, (MR_Integer) 0)));
      MR_Word mfilterjavac__MaybeMarksRev_10;

      mfilterjavac__read_line_marks_6_p_0(mfilterjavac__FileStream_9, (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mfilterjavac__MaybeMarksRev_10);
      mercury__io__close_input_3_p_0(mfilterjavac__FileStream_9);
      if (((MR_tag((MR_Word) mfilterjavac__MaybeMarksRev_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mfilterjavac__Msg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeMarksRev_10, (MR_Integer) 0)));
        MR_String mfilterjavac__Var_30;
        MR_String mfilterjavac__Var_61;

        mfilterjavac__Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mfilterjavac__Msg_20);
        mfilterjavac__Var_30 = mercury__string__f_43_43_2_f_0(mfilterjavac__Filename_5, mfilterjavac__Var_61);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mfilterjavac__MaybeInfo_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__Var_30));
        }
      }
      else
      {
        MR_Word mfilterjavac__MarksRev_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__MaybeMarksRev_10, (MR_Integer) 0)));
        MR_Word mfilterjavac__Marks_12;
        MR_Word mfilterjavac__MaybeInfo0_13;

        mercury__list__reverse_2_p_0((MR_Word) &mfilterjavac__mfilterjavac__type_ctor_info_line_mark_0, mfilterjavac__MarksRev_11, &mfilterjavac__Marks_12);
        mfilterjavac__create_line_info_4_p_0(mfilterjavac__Marks_12, mfilterjavac__Filename_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mfilterjavac__MaybeInfo0_13);
        if (((MR_tag((MR_Word) mfilterjavac__MaybeInfo0_13)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_Word mfilterjavac__LineInfoError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__MaybeInfo0_13, (MR_Integer) 0)));
          MR_String mfilterjavac__ErrFilename_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__LineInfoError_15, (MR_Integer) 0)));
          MR_Integer mfilterjavac__ErrLine_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__LineInfoError_15, (MR_Integer) 1)));
          MR_Word mfilterjavac__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__LineInfoError_15, (MR_Integer) 2)));
          MR_String mfilterjavac__StringError_19;
          MR_String mfilterjavac__Var_45;
          MR_String mfilterjavac__Var_49;
          MR_String mfilterjavac__Var_50;
          MR_String mfilterjavac__Var_57;
          MR_String mfilterjavac__Var_59;

          switch (mfilterjavac__Error_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mfilterjavac__Var_45 = (MR_String) "BEGIN token without END token";
              break;
            case (MR_Integer) 2:
              mfilterjavac__Var_45 = (MR_String) "BEGIN token followed by another BEGIN token";
              break;
            case (MR_Integer) 0:
              mfilterjavac__Var_45 = (MR_String) "END token without BEGIN token";
              break;
          }
          mfilterjavac__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ": Error understanding line number declration: ", mfilterjavac__Var_45);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mfilterjavac_scalar_common_3[0], mfilterjavac__ErrLine_17, &mfilterjavac__Var_50);
          mfilterjavac__Var_57 = mercury__string__f_43_43_2_f_0(mfilterjavac__Var_50, mfilterjavac__Var_49);
          mfilterjavac__Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ":", mfilterjavac__Var_57);
          mfilterjavac__StringError_19 = mercury__string__f_43_43_2_f_0(mfilterjavac__ErrFilename_16, mfilterjavac__Var_59);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mfilterjavac__MaybeInfo_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__StringError_19));
          }
        }
        else
          *mfilterjavac__MaybeInfo_6 = (MR_Word) mfilterjavac__MaybeInfo0_13;
      }
    }
  }
}

static void MR_CALL 
mfilterjavac__create_line_info_4_p_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_String mfilterjavac__HeadVar__2_2,
  MR_Word mfilterjavac__HeadVar__3_3,
  MR_Word * mfilterjavac__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mfilterjavac__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word mfilterjavac__InfosRev_7;

      mercury__list__reverse_2_p_0((MR_Word) &mfilterjavac__mfilterjavac__type_ctor_info_line_info_0, mfilterjavac__HeadVar__3_3, &mfilterjavac__InfosRev_7);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mfilterjavac__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mfilterjavac__InfosRev_7));
      }
    }
    else
    {
      MR_Word mfilterjavac__Mark_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mfilterjavac__Marks0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mfilterjavac__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 0)));
      MR_String mfilterjavac__MerFile_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 1)));
      MR_Integer mfilterjavac__JavaLineNo_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 2)));
      MR_Integer mfilterjavac__MerLineNo_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_8, (MR_Integer) 3)));

      switch (mfilterjavac__Type_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((mfilterjavac__Marks0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mfilterjavac__Var_28;

            {
              mfilterjavac__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mfilterjavac__Var_28, 0) = ((MR_Box) (mfilterjavac__HeadVar__2_2));
              MR_hl_field(MR_mktag(0), mfilterjavac__Var_28, 1) = ((MR_Box) (mfilterjavac__JavaLineNo_15));
              MR_hl_field(MR_mktag(0), mfilterjavac__Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mfilterjavac__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__Var_28));
            }
          }
          else
          {
            MR_Word mfilterjavac__Mark_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Marks0_9, (MR_Integer) 0)));
            MR_Word mfilterjavac__Type_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 0)));
            MR_Integer mfilterjavac__End_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 2)));
            MR_Word mfilterjavac__Marks_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Marks0_9, (MR_Integer) 1)));
            MR_String mfilterjavac__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 1)));
            MR_Integer mfilterjavac__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Mark_32, (MR_Integer) 3)));

            switch (mfilterjavac__Type_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mfilterjavac__Var_26;

                  {
                    mfilterjavac__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mfilterjavac__Var_26, 0) = ((MR_Box) (mfilterjavac__HeadVar__2_2));
                    MR_hl_field(MR_mktag(0), mfilterjavac__Var_26, 1) = ((MR_Box) (mfilterjavac__End_36));
                    MR_hl_field(MR_mktag(0), mfilterjavac__Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mfilterjavac__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__Var_26));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mfilterjavac__Delta_20 = (mfilterjavac__MerLineNo_16 - mfilterjavac__JavaLineNo_15);
                  MR_Word mfilterjavac__Info_21;
                  MR_Word mfilterjavac__Infos_22;

                  {
                    mfilterjavac__Info_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 0) = ((MR_Box) (mfilterjavac__JavaLineNo_15));
                    MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 1) = ((MR_Box) (mfilterjavac__End_36));
                    MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 2) = ((MR_Box) (mfilterjavac__Delta_20));
                    MR_hl_field(MR_mktag(0), mfilterjavac__Info_21, 3) = ((MR_Box) (mfilterjavac__MerFile_14));
                  }
                  {
                    mfilterjavac__Infos_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mfilterjavac__Infos_22, 0) = ((MR_Box) (mfilterjavac__Info_21));
                    MR_hl_field(MR_mktag(1), mfilterjavac__Infos_22, 1) = ((MR_Box) (mfilterjavac__HeadVar__3_3));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mfilterjavac__next_value_of_HeadVar__1_1 = mfilterjavac__Marks_39;
                    MR_Word mfilterjavac__next_value_of_HeadVar__3_3 = mfilterjavac__Infos_22;

                    mfilterjavac__HeadVar__1_1 = mfilterjavac__next_value_of_HeadVar__1_1;
                    mfilterjavac__HeadVar__3_3 = mfilterjavac__next_value_of_HeadVar__3_3;
                  }
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mfilterjavac__Var_24;

            {
              mfilterjavac__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mfilterjavac__Var_24, 0) = ((MR_Box) (mfilterjavac__HeadVar__2_2));
              MR_hl_field(MR_mktag(0), mfilterjavac__Var_24, 1) = ((MR_Box) (mfilterjavac__JavaLineNo_15));
              MR_hl_field(MR_mktag(0), mfilterjavac__Var_24, 2) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mfilterjavac__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__Var_24));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mfilterjavac__read_line_marks_6_p_0(
  MR_Word mfilterjavac__Stream_7,
  MR_Integer mfilterjavac__JavaLineNo_8,
  MR_Word mfilterjavac__Marks0_9,
  MR_Word * mfilterjavac__MaybeMarks_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mfilterjavac__succeeded;
      MR_Word mfilterjavac__Result_12;

      mercury__io__read_line_as_string_4_p_0(mfilterjavac__Stream_7, &mfilterjavac__Result_12);
      switch (MR_tag((MR_Word) mfilterjavac__Result_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mfilterjavac__MaybeMarks_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mfilterjavac__Marks0_9));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mfilterjavac__Line_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Result_12, (MR_Integer) 0)));
            MR_Word mfilterjavac__Parts_14;
            MR_Word mfilterjavac__Marks_23;
            MR_String mfilterjavac__Var_30;
            MR_Integer mfilterjavac__Var_38;
            MR_Word mfilterjavac__Type_17;
            MR_String mfilterjavac__MerFile_19;
            MR_Integer mfilterjavac__MerLineNo_21;
            MR_String mfilterjavac__Marker_15;
            MR_String mfilterjavac__PathLine_16;
            MR_Word mfilterjavac__PartsB_18;
            MR_String mfilterjavac__MerLineNoStr_20;
            MR_String mfilterjavac__Var_31;
            MR_Word mfilterjavac__Var_32;
            MR_Word mfilterjavac__Var_33;
            MR_Word mfilterjavac__Var_34;
            MR_Char mfilterjavac__Var_35;
            MR_Word mfilterjavac__Var_36;
            MR_Word mfilterjavac__Var_37;

            mfilterjavac__Var_30 = mercury__string__strip_1_f_0(mfilterjavac__Line_13);
            mfilterjavac__Parts_14 = mercury__string__split_at_char_2_f_0((MR_Char) 32, mfilterjavac__Var_30);
            mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__Parts_14)) == (MR_mktag((MR_Integer) 1)));
            if (mfilterjavac__succeeded)
            {
              mfilterjavac__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Parts_14, (MR_Integer) 0)));
              mfilterjavac__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Parts_14, (MR_Integer) 1)));
              mfilterjavac__succeeded = (strcmp(mfilterjavac__Var_31, (MR_String) "//") == 0);
              if (mfilterjavac__succeeded)
              {
                mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__Var_32)) == (MR_mktag((MR_Integer) 1)));
                if (mfilterjavac__succeeded)
                {
                  mfilterjavac__Marker_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_32, (MR_Integer) 0)));
                  mfilterjavac__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_32, (MR_Integer) 1)));
                  mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__Var_33)) == (MR_mktag((MR_Integer) 1)));
                  if (mfilterjavac__succeeded)
                  {
                    mfilterjavac__PathLine_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_33, (MR_Integer) 0)));
                    mfilterjavac__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_33, (MR_Integer) 1)));
                    mfilterjavac__succeeded = (mfilterjavac__Var_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (mfilterjavac__succeeded)
                    {
                      if ((strcmp(mfilterjavac__Marker_15, (MR_String) "MER_FOREIGN_END") == 0))
                      {
                        mfilterjavac__Type_17 = (MR_Integer) 1;
                        mfilterjavac__succeeded = MR_TRUE;
                      }
                      else
                      if ((strcmp(mfilterjavac__Marker_15, (MR_String) "MER_FOREIGN_BEGIN") == 0))
                      {
                        mfilterjavac__Type_17 = (MR_Integer) 0;
                        mfilterjavac__succeeded = MR_TRUE;
                      }
                      else
                        mfilterjavac__succeeded = MR_FALSE;
                      if (mfilterjavac__succeeded)
                      {
                        mfilterjavac__Var_35 = (MR_Char) 58;
                        mfilterjavac__PartsB_18 = mercury__string__split_at_char_2_f_0(mfilterjavac__Var_35, mfilterjavac__PathLine_16);
                        mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__PartsB_18)) == (MR_mktag((MR_Integer) 1)));
                        if (mfilterjavac__succeeded)
                        {
                          mfilterjavac__MerFile_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsB_18, (MR_Integer) 0)));
                          mfilterjavac__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__PartsB_18, (MR_Integer) 1)));
                          mfilterjavac__succeeded = ((MR_tag((MR_Word) mfilterjavac__Var_36)) == (MR_mktag((MR_Integer) 1)));
                          if (mfilterjavac__succeeded)
                          {
                            mfilterjavac__MerLineNoStr_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_36, (MR_Integer) 0)));
                            mfilterjavac__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__Var_36, (MR_Integer) 1)));
                            mfilterjavac__succeeded = (mfilterjavac__Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (mfilterjavac__succeeded)
                              mfilterjavac__succeeded = mercury__string__to_int_2_p_0(mfilterjavac__MerLineNoStr_20, &mfilterjavac__MerLineNo_21);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if (mfilterjavac__succeeded)
            {
              MR_Word mfilterjavac__Mark_22;

              {
                mfilterjavac__Mark_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 0) = ((MR_Box) (mfilterjavac__Type_17));
                MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 1) = ((MR_Box) (mfilterjavac__MerFile_19));
                MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 2) = ((MR_Box) (mfilterjavac__JavaLineNo_8));
                MR_hl_field(MR_mktag(0), mfilterjavac__Mark_22, 3) = ((MR_Box) (mfilterjavac__MerLineNo_21));
              }
              {
                mfilterjavac__Marks_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mfilterjavac__Marks_23, 0) = ((MR_Box) (mfilterjavac__Mark_22));
                MR_hl_field(MR_mktag(1), mfilterjavac__Marks_23, 1) = ((MR_Box) (mfilterjavac__Marks0_9));
              }
            }
            else
              mfilterjavac__Marks_23 = mfilterjavac__Marks0_9;
            mfilterjavac__Var_38 = (mfilterjavac__JavaLineNo_8 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer mfilterjavac__next_value_of_JavaLineNo_8 = mfilterjavac__Var_38;
              MR_Word mfilterjavac__next_value_of_Marks0_9 = mfilterjavac__Marks_23;

              mfilterjavac__JavaLineNo_8 = mfilterjavac__next_value_of_JavaLineNo_8;
              mfilterjavac__Marks0_9 = mfilterjavac__next_value_of_Marks0_9;
            }
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mfilterjavac__Error_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mfilterjavac__Result_12, (MR_Integer) 0)));
            MR_String mfilterjavac__Var_28;

            mfilterjavac__Var_28 = mercury__io__error_message_1_f_0(mfilterjavac__Error_24);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mfilterjavac__MaybeMarks_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mfilterjavac__Var_28));
            }
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mfilterjavac__translate_and_outpot_line_5_p_0(
  MR_Word mfilterjavac__LineInfo_6,
  MR_String mfilterjavac__Filename_7,
  MR_Integer mfilterjavac__LineNo_8,
  MR_Word mfilterjavac__RestParts_9,
  MR_String * mfilterjavac__OutLine_10)
{
  {
    MR_String mfilterjavac__MerFileName_11;
    MR_Integer mfilterjavac__MerLineNo_12;
    MR_String mfilterjavac__Rest_13;
    MR_String mfilterjavac__Var_24;
    MR_String mfilterjavac__Var_26;
    MR_String mfilterjavac__Var_27;
    MR_String mfilterjavac__Var_34;
    MR_String mfilterjavac__Var_36;

    mfilterjavac__line_info_translate_5_p_0(mfilterjavac__LineInfo_6, mfilterjavac__Filename_7, mfilterjavac__LineNo_8, &mfilterjavac__MerFileName_11, &mfilterjavac__MerLineNo_12);
    mfilterjavac__Rest_13 = mercury__string__join_list_2_f_0((MR_String) " ", mfilterjavac__RestParts_9);
    mfilterjavac__Var_24 = mercury__string__f_43_43_2_f_0(mfilterjavac__Rest_13, (MR_String) "\n");
    mfilterjavac__Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mfilterjavac__Var_24);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &mfilterjavac_scalar_common_3[0], mfilterjavac__MerLineNo_12, &mfilterjavac__Var_27);
    mfilterjavac__Var_34 = mercury__string__f_43_43_2_f_0(mfilterjavac__Var_27, mfilterjavac__Var_26);
    mfilterjavac__Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ":", mfilterjavac__Var_34);
    *mfilterjavac__OutLine_10 = mercury__string__f_43_43_2_f_0(mfilterjavac__MerFileName_11, mfilterjavac__Var_36);
  }
}

static void MR_CALL 
mfilterjavac__line_info_translate_5_p_0(
  MR_Word mfilterjavac__HeadVar__1_1,
  MR_String mfilterjavac__HeadVar__2_2,
  MR_Integer mfilterjavac__HeadVar__3_3,
  MR_String * mfilterjavac__Name_4,
  MR_Integer * mfilterjavac__Line_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mfilterjavac__succeeded;

      if ((mfilterjavac__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mfilterjavac__Name_4 = mfilterjavac__HeadVar__2_2;
        *mfilterjavac__Line_5 = mfilterjavac__HeadVar__3_3;
      }
      else
      {
        MR_Word mfilterjavac__Info_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mfilterjavac__Infos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mfilterjavac__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mfilterjavac__Start_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 0)));
        MR_Integer mfilterjavac__End_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 1)));
        MR_Integer mfilterjavac__Delta_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 2)));
        MR_String mfilterjavac__File_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mfilterjavac__Info_8, (MR_Integer) 3)));

        mfilterjavac__succeeded = (mfilterjavac__HeadVar__3_3 < mfilterjavac__Start_14);
        if (mfilterjavac__succeeded)
        {
          *mfilterjavac__Name_4 = mfilterjavac__HeadVar__2_2;
          *mfilterjavac__Line_5 = mfilterjavac__HeadVar__3_3;
        }
        else
        {
          mfilterjavac__succeeded = (mfilterjavac__HeadVar__3_3 < mfilterjavac__End_15);
          if (mfilterjavac__succeeded)
          {
            *mfilterjavac__Line_5 = (mfilterjavac__HeadVar__3_3 + mfilterjavac__Delta_16);
            *mfilterjavac__Name_4 = mfilterjavac__File_17;
          }
          else
          {
            /* direct tailcall eliminated */
            {
              MR_Word mfilterjavac__next_value_of_HeadVar__1_1 = mfilterjavac__Infos_9;

              mfilterjavac__HeadVar__1_1 = mfilterjavac__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2)
{
  {
    MR_bool mfilterjavac__succeeded;

    mfilterjavac__succeeded = mfilterjavac____Unify____begin_or_end_block_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3)
{
  {
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

    mfilterjavac____Compare____begin_or_end_block_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2)
{
  {
    MR_bool mfilterjavac__succeeded;

    mfilterjavac__succeeded = mfilterjavac____Unify____filter_result_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3)
{
  {
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

    mfilterjavac____Compare____filter_result_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2)
{
  {
    MR_bool mfilterjavac__succeeded;

    mfilterjavac__succeeded = mfilterjavac____Unify____line_info_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3)
{
  {
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2)
{
  {
    MR_bool mfilterjavac__succeeded;

    mfilterjavac__succeeded = mfilterjavac____Unify____line_info_cache_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3)
{
  {
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_cache_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2)
{
  {
    MR_bool mfilterjavac__succeeded;

    mfilterjavac__succeeded = mfilterjavac____Unify____line_info_end_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3)
{
  {
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_end_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2)
{
  {
    MR_bool mfilterjavac__succeeded;

    mfilterjavac__succeeded = mfilterjavac____Unify____line_info_error_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3)
{
  {
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_error_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2)
{
  {
    MR_bool mfilterjavac__succeeded;

    mfilterjavac__succeeded = mfilterjavac____Unify____line_info_error_type_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3)
{
  {
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_error_type_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0_10001(
  MR_Box mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2)
{
  {
    MR_bool mfilterjavac__succeeded;

    mfilterjavac__succeeded = mfilterjavac____Unify____line_mark_0_0(((MR_Word) mfilterjavac__wrapper_arg_1), ((MR_Word) mfilterjavac__wrapper_arg_2));
    return mfilterjavac__succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0_10001(
  MR_Box * mfilterjavac__wrapper_arg_1,
  MR_Box mfilterjavac__wrapper_arg_2,
  MR_Box mfilterjavac__wrapper_arg_3)
{
  {
    MR_Word mfilterjavac__conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_mark_0_0(&mfilterjavac__conv0_HeadVar__1_1, ((MR_Word) mfilterjavac__wrapper_arg_2), ((MR_Word) mfilterjavac__wrapper_arg_3));
    *mfilterjavac__wrapper_arg_1 = ((MR_Box) (mfilterjavac__conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mfilterjavac__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mfilterjavac. */
