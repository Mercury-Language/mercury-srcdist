/*
** Automatically generated from `mfilterjavac.m'
** by the Mercury compiler,
** version 22.01-beta-2022-02-04
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module mfilterjavac.
// :- implementation.

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

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_ordinal_ordered_begin_or_end_block_0[2];

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

static const MR_DuArgLocn mfilterjavac__mfilterjavac__field_locns_line_info_error_0_0[3];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0;

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0[1];

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0[1];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0[1];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0[1];

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0;

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1;

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2;

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_ordinal_ordered_line_info_error_type_0[3];

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0[3];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0[3];

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_mark_0_0[4];

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_mark_0_0[4];

static const MR_DuArgLocn mfilterjavac__mfilterjavac__field_locns_line_mark_0_0[4];

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0;

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0[1];

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0[1];

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0[1];

static const MR_Integer mfilterjavac__mfilterjavac__functor_number_map_line_mark_0[1];

static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mfilterjavac__filter_lines_6_p_0(
  MR_Word InStream_7,
  MR_Word OutStream_8,
  MR_Word * Result_9,
  MR_Word STATE_VARIABLE_Cache_0_21);

static MR_bool MR_CALL 
mfilterjavac__filter_line_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mfilterjavac__filter_line_7_p_0(
  MR_Word * Result_8,
  MR_String STATE_VARIABLE_Line_0_24,
  MR_String * STATE_VARIABLE_Line_25,
  MR_Word STATE_VARIABLE_Cache_0_26,
  MR_Word * STATE_VARIABLE_Cache_27);

static void MR_CALL 
mfilterjavac__maybe_get_line_info_4_p_0(
  MR_String Filename_5,
  MR_Word * MaybeInfo_6);

static void MR_CALL 
mfilterjavac__create_line_info_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mfilterjavac__read_line_marks_6_p_0(
  MR_Word Stream_7,
  MR_Integer JavaLineNo_8,
  MR_Word Marks0_9,
  MR_Word * MaybeMarks_10);

static void MR_CALL 
mfilterjavac__translate_and_outpot_line_5_p_0(
  MR_Word LineInfo_6,
  MR_String Filename_7,
  MR_Integer LineNo_8,
  MR_Word RestParts_9,
  MR_String * OutLine_10);

static void MR_CALL 
mfilterjavac__line_info_translate_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_String * Name_4,
  MR_Integer * Line_5);

static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mfilterjavac_scalar_common_3[2][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mfilterjavac_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_0 = {
  (MR_String) "begin_block",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_begin_or_end_block_0_1 = {
  (MR_String) "end_block",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_ordinal_ordered_begin_or_end_block_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mfilterjavac____Unify____begin_or_end_block_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____begin_or_end_block_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "begin_or_end_block",
  {     mfilterjavac__mfilterjavac__enum_name_ordered_begin_or_end_block_0 },
  {     mfilterjavac__mfilterjavac__enum_ordinal_ordered_begin_or_end_block_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mfilterjavac__mfilterjavac__functor_number_map_begin_or_end_block_0,

};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_0 = {
  (MR_String) "ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mfilterjavac__mfilterjavac__field_types_filter_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_filter_result_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_filter_result_0_2 = {
  (MR_String) "warning",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mfilterjavac__mfilterjavac__field_types_filter_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_filter_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____filter_result_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____filter_result_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "filter_result",
  {     mfilterjavac__mfilterjavac__du_name_ordered_filter_result_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_filter_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mfilterjavac__mfilterjavac__functor_number_map_filter_result_0,

};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_0_0[4] = {
  (MR_String) "li_start",
  (MR_String) "li_end",
  (MR_String) "li_delta",
  (MR_String) "li_orig_file"
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0 = {
  (MR_String) "line_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mfilterjavac__mfilterjavac__field_types_line_info_0_0,
  mfilterjavac__mfilterjavac__field_names_line_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_0_0
};

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_info_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info",
  {     mfilterjavac__mfilterjavac__du_name_ordered_line_info_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mfilterjavac__mfilterjavac__functor_number_map_line_info_0,

};

static const MR_FA_TypeInfo_Struct1 mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mfilterjavac__mfilterjavac__type_ctor_info_line_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mfilterjavac__list__ti_list_1mfilterjavac__type_ctor_info_line_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mfilterjavac__maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0)
  }
};

const MR_TypeCtorInfo_Struct mfilterjavac__mfilterjavac__type_ctor_info_line_info_cache_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mfilterjavac____Unify____line_info_cache_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_cache_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_cache",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mfilterjavac__tree234__ti_tree234_2builtin__type_ctor_info_string_0maybe__ti_maybe_1list__ti_list_1mfilterjavac__type_ctor_info_line_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_0 = {
  (MR_String) "line_info_end",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mfilterjavac__mfilterjavac__field_types_line_info_end_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_1 = {
  (MR_String) "line_info_no_end",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_end_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_end_0_2 = {
  (MR_String) "line_info_duplicate_begin",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mfilterjavac__mfilterjavac__field_types_line_info_end_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_end_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_info_end_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_end_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_end",
  {     mfilterjavac__mfilterjavac__du_name_ordered_line_info_end_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_end_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mfilterjavac__mfilterjavac__functor_number_map_line_info_end_0,

};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_info_error_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mfilterjavac__mfilterjavac__type_ctor_info_line_info_error_type_0)
};

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_info_error_0_0[3] = {
  (MR_String) "li_filename",
  (MR_String) "li_lineno",
  (MR_String) "li_error"
};

static const MR_DuArgLocn mfilterjavac__mfilterjavac__field_locns_line_info_error_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0 = {
  (MR_String) "line_info_error",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mfilterjavac__mfilterjavac__field_types_line_info_error_0_0,
  mfilterjavac__mfilterjavac__field_names_line_info_error_0_0,
  mfilterjavac__mfilterjavac__field_locns_line_info_error_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_info_error_0_0
};

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_info_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_info_error_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_error_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_error",
  {     mfilterjavac__mfilterjavac__du_name_ordered_line_info_error_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_line_info_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mfilterjavac__mfilterjavac__functor_number_map_line_info_error_0,

};

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_0 = {
  (MR_String) "lie_end_without_beginning",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_1 = {
  (MR_String) "lie_beginning_without_end",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mfilterjavac__mfilterjavac__enum_functor_desc_line_info_error_type_0_2 = {
  (MR_String) "lie_duplicate_beginning",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mfilterjavac__mfilterjavac__enum_ordinal_ordered_line_info_error_type_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mfilterjavac____Unify____line_info_error_type_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_info_error_type_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_info_error_type",
  {     mfilterjavac__mfilterjavac__enum_name_ordered_line_info_error_type_0 },
  {     mfilterjavac__mfilterjavac__enum_ordinal_ordered_line_info_error_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mfilterjavac__mfilterjavac__functor_number_map_line_info_error_type_0,

};

static const MR_PseudoTypeInfo mfilterjavac__mfilterjavac__field_types_line_mark_0_0[4] = {
  (MR_PseudoTypeInfo) (&mfilterjavac__mfilterjavac__type_ctor_info_begin_or_end_block_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mfilterjavac__mfilterjavac__field_names_line_mark_0_0[4] = {
  (MR_String) "lm_type",
  (MR_String) "lm_mer_file",
  (MR_String) "lm_java_line_no",
  (MR_String) "lm_mer_line_no"
};

static const MR_DuArgLocn mfilterjavac__mfilterjavac__field_locns_line_mark_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0 = {
  (MR_String) "line_mark",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mfilterjavac__mfilterjavac__field_types_line_mark_0_0,
  mfilterjavac__mfilterjavac__field_names_line_mark_0_0,
  mfilterjavac__mfilterjavac__field_locns_line_mark_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0[1] = {
  &mfilterjavac__mfilterjavac__du_functor_desc_line_mark_0_0
};

static const MR_DuPtagLayout mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mfilterjavac__mfilterjavac__du_stag_ordered_line_mark_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mfilterjavac____Unify____line_mark_0_0_10001)),
  ((MR_Box) (mfilterjavac____Compare____line_mark_0_0_10001)),
  (MR_String) "mfilterjavac",
  (MR_String) "line_mark",
  {     mfilterjavac__mfilterjavac__du_name_ordered_line_mark_0 },
  {     mfilterjavac__mfilterjavac__du_ptag_ordered_line_mark_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mfilterjavac__mfilterjavac__functor_number_map_line_mark_0,

};

static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;
      MR_Integer Var_21 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_22 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            succeeded = (ArgX4_13 < ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX4_13 > ArgY4_14);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_17 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_18 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_17 < Var_18);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_17 > Var_18);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 3);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 3);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_21 < ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_21 > ArgY1_5);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_20 < ArgY1_15);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_20 > ArgY1_15);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_6 == CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mfilterjavac_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mfilterjavac_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_String ArgY4_10 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_20, ArgY1_8);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_21 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgY1_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_21, ArgY1_15);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_Word InStream_4;
    MR_Word OutStream_5;
    MR_Word Result_6;
    MR_Word Var_12;

    mercury__io__input_stream_3_p_0(&InStream_4);
    mercury__io__output_stream_3_p_0(&OutStream_5);
    Var_12 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mfilterjavac_scalar_common_1[1]));
    mfilterjavac__filter_lines_6_p_0(InStream_4, OutStream_5, &Result_6, Var_12);
    switch (MR_tag((MR_Word) Result_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Error_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_6, (MR_Integer) 0))));
          MR_Word Var_18;
          MR_String Var_19;

          Var_18 = mercury__io__stderr_stream_0_f_0();
          Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "Error: ", Error_7);
          mercury__io__write_string_4_p_0(Var_18, Var_19);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_14;
          MR_String Var_15;
          MR_String Error_24 = ((MR_String) ((MR_hl_field(MR_mktag(2), Result_6, (MR_Integer) 0))));

          Var_14 = mercury__io__stderr_stream_0_f_0();
          Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: ", Error_24);
          mercury__io__write_string_4_p_0(Var_14, Var_15);
        }
        break;
    }
  }
}

static void MR_CALL 
mfilterjavac__filter_lines_6_p_0(
  MR_Word InStream_7,
  MR_Word OutStream_8,
  MR_Word * Result_9,
  MR_Word STATE_VARIABLE_Cache_0_21)
{
  {
    MR_Word IOResult_12;

    mercury__io__read_line_as_string_4_p_0(InStream_7, &IOResult_12);
    switch (MR_tag((MR_Word) IOResult_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Result_9 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_String Line0_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), IOResult_12, (MR_Integer) 0))));
          MR_Word Result0_14;
          MR_String Line_15;
          MR_Word ResultLines_16;
          MR_Word STATE_VARIABLE_Cache_30_30;

          mfilterjavac__filter_line_7_p_0(&Result0_14, Line0_13, &Line_15, STATE_VARIABLE_Cache_0_21, &STATE_VARIABLE_Cache_30_30);
          mercury__io__write_string_4_p_0(OutStream_8, Line_15);
          mfilterjavac__filter_lines_6_p_0(InStream_7, OutStream_8, &ResultLines_16, STATE_VARIABLE_Cache_30_30);
          if ((Result0_14 == (MR_Word) ((MR_Unsigned) 0U)))
            *Result_9 = ResultLines_16;
          else
          {
            MR_String Error_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result0_14, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) ResultLines_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_9 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_17));
                }
                break;
              case (MR_Integer) 1:
                *Result_9 = ResultLines_16;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_9 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_17));
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ErrorStr_20;
          MR_String Var_28;
          MR_Word Error_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IOResult_12, (MR_Integer) 0))));
          MR_String Var_36;

          Var_28 = mercury__io__error_message_1_f_0(Error_34);
          Var_36 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) "\n");
          ErrorStr_20 = mercury__string__f_43_43_2_f_0((MR_String) "stdin: ", Var_36);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorStr_20));
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
mfilterjavac__filter_line_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac__filter_line_7_p_0(
  MR_Word * Result_8,
  MR_String STATE_VARIABLE_Line_0_24,
  MR_String * STATE_VARIABLE_Line_25,
  MR_Word STATE_VARIABLE_Cache_0_26,
  MR_Word * STATE_VARIABLE_Cache_27)
{
  {
    MR_bool succeeded;
    MR_Word OtherPartsA_14;
    MR_String Filename_16;
    MR_Integer LineNo_19;
    MR_Word PartsA_12;
    MR_String PartAA_13;
    MR_Word PartsAA_15;
    MR_String LineStr_17;
    MR_String Empty_18;
    MR_Char Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;

    PartsA_12 = mercury__string__split_at_separator_2_f_0((MR_Word) (&mfilterjavac_scalar_common_2[1]), STATE_VARIABLE_Line_0_24);
    succeeded = (PartsA_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      PartAA_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), PartsA_12, (MR_Integer) 0))));
      OtherPartsA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PartsA_12, (MR_Integer) 1))));
      Var_31 = (MR_Char) 58;
      PartsAA_15 = mercury__string__split_at_char_2_f_0(Var_31, PartAA_13);
      succeeded = (PartsAA_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Filename_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), PartsAA_15, (MR_Integer) 0))));
        Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PartsAA_15, (MR_Integer) 1))));
        succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          LineStr_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
          Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
          succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Empty_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
            Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
            succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = mercury__string__to_int_2_p_0(LineStr_17, &LineNo_19);
              if (succeeded)
                succeeded = (strcmp(Empty_18, (MR_String) "") == 0);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word MaybeLineInfo_20;
      MR_Box conv0_MaybeLineInfo_20;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mfilterjavac_scalar_common_1[1]), STATE_VARIABLE_Cache_0_26, ((MR_Box) (Filename_16)), &conv0_MaybeLineInfo_20);
      if (succeeded)
      {
        MaybeLineInfo_20 = ((MR_Word) (conv0_MaybeLineInfo_20));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        if ((MaybeLineInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Line_25 = STATE_VARIABLE_Line_0_24;
        }
        else
        {
          MR_Word LineInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeLineInfo_20, (MR_Integer) 0))));
          MR_String MerFileName_57;
          MR_Integer MerLineNo_58;
          MR_String Rest_59;
          MR_String Var_70;
          MR_String Var_72;
          MR_String Var_73;
          MR_String Var_80;
          MR_String Var_82;

          mfilterjavac__line_info_translate_5_p_0(LineInfo_21, Filename_16, LineNo_19, &MerFileName_57, &MerLineNo_58);
          Rest_59 = mercury__string__join_list_2_f_0((MR_String) " ", OtherPartsA_14);
          Var_70 = mercury__string__f_43_43_2_f_0(Rest_59, (MR_String) "\n");
          Var_72 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_70);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mfilterjavac_scalar_common_3[0]), MerLineNo_58, &Var_73);
          Var_80 = mercury__string__f_43_43_2_f_0(Var_73, Var_72);
          Var_82 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_80);
          *STATE_VARIABLE_Line_25 = mercury__string__f_43_43_2_f_0(MerFileName_57, Var_82);
          *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        *STATE_VARIABLE_Cache_27 = STATE_VARIABLE_Cache_0_26;
      }
      else
      {
        MR_Word MaybeLineInfoErr_22;

        mfilterjavac__maybe_get_line_info_4_p_0(Filename_16, &MaybeLineInfoErr_22);
        if (((MR_tag((MR_Word) MaybeLineInfoErr_22)) == (MR_Integer) 1))
        {
          MR_String Error_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeLineInfoErr_22, (MR_Integer) 0))));

          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mfilterjavac_scalar_common_1[1]), ((MR_Box) (Filename_16)), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_Cache_0_26, STATE_VARIABLE_Cache_27);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_23));
          }
          *STATE_VARIABLE_Line_25 = STATE_VARIABLE_Line_0_24;
        }
        else
        {
          MR_Word Var_39;
          MR_Word LineInfo_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeLineInfoErr_22, (MR_Integer) 0))));

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (LineInfo_42));
          }
          mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mfilterjavac_scalar_common_1[1]), ((MR_Box) (Filename_16)), ((MR_Box) (Var_39)), STATE_VARIABLE_Cache_0_26, STATE_VARIABLE_Cache_27);
          mfilterjavac__translate_and_outpot_line_5_p_0(LineInfo_42, Filename_16, LineNo_19, OtherPartsA_14, STATE_VARIABLE_Line_25);
          *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
    }
    else
    {
      *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Cache_27 = STATE_VARIABLE_Cache_0_26;
      *STATE_VARIABLE_Line_25 = STATE_VARIABLE_Line_0_24;
    }
  }
}

static void MR_CALL 
mfilterjavac__maybe_get_line_info_4_p_0(
  MR_String Filename_5,
  MR_Word * MaybeInfo_6)
{
  {
    MR_Word Res_8;

    mercury__io__open_input_4_p_0(Filename_5, &Res_8);
    if (((MR_tag((MR_Word) Res_8)) == (MR_Integer) 1))
      *MaybeInfo_6 = (MR_Word) (&mfilterjavac_scalar_common_3[1]);
    else
    {
      MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_8, (MR_Integer) 0))));
      MR_Word MaybeMarksRev_10;

      mfilterjavac__read_line_marks_6_p_0(FileStream_9, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &MaybeMarksRev_10);
      mercury__io__close_input_3_p_0(FileStream_9);
      if (((MR_tag((MR_Word) MaybeMarksRev_10)) == (MR_Integer) 1))
      {
        MR_String Msg_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeMarksRev_10, (MR_Integer) 0))));
        MR_String Var_30;
        MR_String Var_61;

        Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Msg_20);
        Var_30 = mercury__string__f_43_43_2_f_0(Filename_5, Var_61);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeInfo_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_30));
        }
      }
      else
      {
        MR_Word MarksRev_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeMarksRev_10, (MR_Integer) 0))));
        MR_Word Marks_12;
        MR_Word MaybeInfo0_13;

        mercury__list__reverse_2_p_0((MR_Word) (&mfilterjavac__mfilterjavac__type_ctor_info_line_mark_0), MarksRev_11, &Marks_12);
        mfilterjavac__create_line_info_4_p_0(Marks_12, Filename_5, (MR_Word) ((MR_Unsigned) 0U), &MaybeInfo0_13);
        if (((MR_tag((MR_Word) MaybeInfo0_13)) == (MR_Integer) 1))
        {
          MR_Word LineInfoError_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeInfo0_13, (MR_Integer) 0))));
          MR_String ErrFilename_16 = ((MR_String) ((MR_hl_field(MR_mktag(0), LineInfoError_15, (MR_Integer) 0))));
          MR_Integer ErrLine_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), LineInfoError_15, (MR_Integer) 1))));
          MR_Word Error_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LineInfoError_15, (MR_Integer) 2))) & (MR_Integer) 3);
          MR_String StringError_19;
          MR_String Var_45;
          MR_String Var_49;
          MR_String Var_50;
          MR_String Var_57;
          MR_String Var_59;

          switch (Error_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Var_45 = (MR_String) "BEGIN token without END token";
              break;
            case (MR_Integer) 2:
              Var_45 = (MR_String) "BEGIN token followed by another BEGIN token";
              break;
            case (MR_Integer) 0:
              Var_45 = (MR_String) "END token without BEGIN token";
              break;
          }
          Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ": Error understanding line number declration: ", Var_45);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mfilterjavac_scalar_common_3[0]), ErrLine_17, &Var_50);
          Var_57 = mercury__string__f_43_43_2_f_0(Var_50, Var_49);
          Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_57);
          StringError_19 = mercury__string__f_43_43_2_f_0(ErrFilename_16, Var_59);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeInfo_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (StringError_19));
          }
        }
        else
          *MaybeInfo_6 = (MR_Word) (MaybeInfo0_13);
      }
    }
  }
}

static void MR_CALL 
mfilterjavac__create_line_info_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word InfosRev_7;

      mercury__list__reverse_2_p_0((MR_Word) (&mfilterjavac__mfilterjavac__type_ctor_info_line_info_0), HeadVar__3_3, &InfosRev_7);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InfosRev_7));
      }
    }
    else
    {
      MR_Word Mark_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Marks0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Type_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Mark_8, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_String MerFile_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Mark_8, (MR_Integer) 1))));
      MR_Integer JavaLineNo_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Mark_8, (MR_Integer) 2))));
      MR_Integer MerLineNo_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Mark_8, (MR_Integer) 3))));

      switch (Type_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((Marks0_9 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word Var_28;

            {
              Var_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (HeadVar__2_2));
              MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (JavaLineNo_15));
              MR_hl_field(MR_mktag(0), Var_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
            }
          }
          else
          {
            MR_Word Mark_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Marks0_9, (MR_Integer) 0))));
            MR_Word Type_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Mark_32, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Integer End_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Mark_32, (MR_Integer) 2))));
            MR_Word Marks_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Marks0_9, (MR_Integer) 1))));

            switch (Type_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_26;

                  {
                    Var_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (HeadVar__2_2));
                    MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (End_36));
                    MR_hl_field(MR_mktag(0), Var_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer Delta_20 = (MR_Integer) ((MR_Unsigned) MerLineNo_16 - (MR_Unsigned) JavaLineNo_15);
                  MR_Word Info_21;
                  MR_Word Infos_22;
                  MR_Word next_value_of_HeadVar__1_1;
                  MR_Word next_value_of_HeadVar__3_3;

                  {
                    Info_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Info_21, 0) = ((MR_Box) (JavaLineNo_15));
                    MR_hl_field(MR_mktag(0), Info_21, 1) = ((MR_Box) (End_36));
                    MR_hl_field(MR_mktag(0), Info_21, 2) = ((MR_Box) (Delta_20));
                    MR_hl_field(MR_mktag(0), Info_21, 3) = ((MR_Box) (MerFile_14));
                  }
                  {
                    Infos_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Infos_22, 0) = ((MR_Box) (Info_21));
                    MR_hl_field(MR_mktag(1), Infos_22, 1) = ((MR_Box) (HeadVar__3_3));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_HeadVar__1_1 = Marks_39;
                  next_value_of_HeadVar__3_3 = Infos_22;
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_24;

            {
              Var_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (HeadVar__2_2));
              MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (JavaLineNo_15));
              MR_hl_field(MR_mktag(0), Var_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_24));
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
  MR_Word Stream_7,
  MR_Integer JavaLineNo_8,
  MR_Word Marks0_9,
  MR_Word * MaybeMarks_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Result_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(Stream_7, &Result_12);
    switch (MR_tag((MR_Word) Result_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeMarks_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Marks0_9));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_12, (MR_Integer) 0))));
          MR_Word Parts_14;
          MR_Word Marks_23;
          MR_String Var_30;
          MR_Integer Var_38;
          MR_Word Type_17;
          MR_String MerFile_19;
          MR_Integer MerLineNo_21;
          MR_String Marker_15;
          MR_String PathLine_16;
          MR_Word PartsB_18;
          MR_String MerLineNoStr_20;
          MR_String Var_31;
          MR_Word Var_32;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Char Var_35;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Integer next_value_of_JavaLineNo_8;
          MR_Word next_value_of_Marks0_9;

          Var_30 = mercury__string__strip_1_f_0(Line_13);
          Parts_14 = mercury__string__split_at_char_2_f_0((MR_Char) 32, Var_30);
          succeeded = (Parts_14 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(1), Parts_14, (MR_Integer) 0))));
            Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Parts_14, (MR_Integer) 1))));
            succeeded = (strcmp(Var_31, (MR_String) "//") == 0);
            if (succeeded)
            {
              succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Marker_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 0))));
                Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_32, (MR_Integer) 1))));
                succeeded = (Var_33 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  PathLine_16 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0))));
                  Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 1))));
                  succeeded = (Var_34 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    if ((strcmp(Marker_15, (MR_String) "MER_FOREIGN_END") == 0))
                    {
                      Type_17 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    if ((strcmp(Marker_15, (MR_String) "MER_FOREIGN_BEGIN") == 0))
                    {
                      Type_17 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
                    if (succeeded)
                    {
                      Var_35 = (MR_Char) 58;
                      PartsB_18 = mercury__string__split_at_char_2_f_0(Var_35, PathLine_16);
                      succeeded = (PartsB_18 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        MerFile_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), PartsB_18, (MR_Integer) 0))));
                        Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PartsB_18, (MR_Integer) 1))));
                        succeeded = (Var_36 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          MerLineNoStr_20 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 0))));
                          Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_36, (MR_Integer) 1))));
                          succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                            succeeded = mercury__string__to_int_2_p_0(MerLineNoStr_20, &MerLineNo_21);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word Mark_22;

            {
              Mark_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Mark_22, 0) = (MR_Box) ((MR_Unsigned) (Type_17));
              MR_hl_field(MR_mktag(0), Mark_22, 1) = ((MR_Box) (MerFile_19));
              MR_hl_field(MR_mktag(0), Mark_22, 2) = ((MR_Box) (JavaLineNo_8));
              MR_hl_field(MR_mktag(0), Mark_22, 3) = ((MR_Box) (MerLineNo_21));
            }
            {
              Marks_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Marks_23, 0) = ((MR_Box) (Mark_22));
              MR_hl_field(MR_mktag(1), Marks_23, 1) = ((MR_Box) (Marks0_9));
            }
          }
          else
            Marks_23 = Marks0_9;
          Var_38 = (MR_Integer) ((MR_Unsigned) JavaLineNo_8 + (MR_Unsigned) 1);
          // direct tailcall eliminated
          ;
          next_value_of_JavaLineNo_8 = Var_38;
          next_value_of_Marks0_9 = Marks_23;
          JavaLineNo_8 = next_value_of_JavaLineNo_8;
          Marks0_9 = next_value_of_Marks0_9;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_12, (MR_Integer) 0))));
          MR_String Var_28;

          Var_28 = mercury__io__error_message_1_f_0(Error_24);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeMarks_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_28));
          }
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mfilterjavac__translate_and_outpot_line_5_p_0(
  MR_Word LineInfo_6,
  MR_String Filename_7,
  MR_Integer LineNo_8,
  MR_Word RestParts_9,
  MR_String * OutLine_10)
{
  {
    MR_String MerFileName_11;
    MR_Integer MerLineNo_12;
    MR_String Rest_13;
    MR_String Var_24;
    MR_String Var_26;
    MR_String Var_27;
    MR_String Var_34;
    MR_String Var_36;

    mfilterjavac__line_info_translate_5_p_0(LineInfo_6, Filename_7, LineNo_8, &MerFileName_11, &MerLineNo_12);
    Rest_13 = mercury__string__join_list_2_f_0((MR_String) " ", RestParts_9);
    Var_24 = mercury__string__f_43_43_2_f_0(Rest_13, (MR_String) "\n");
    Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_24);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mfilterjavac_scalar_common_3[0]), MerLineNo_12, &Var_27);
    Var_34 = mercury__string__f_43_43_2_f_0(Var_27, Var_26);
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_34);
    *OutLine_10 = mercury__string__f_43_43_2_f_0(MerFileName_11, Var_36);
  }
}

static void MR_CALL 
mfilterjavac__line_info_translate_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_String * Name_4,
  MR_Integer * Line_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Name_4 = HeadVar__2_2;
      *Line_5 = HeadVar__3_3;
    }
    else
    {
      MR_Word Info_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Infos_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer Start_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 0))));
      MR_Integer End_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 1))));
      MR_Integer Delta_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 2))));
      MR_String File_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_8, (MR_Integer) 3))));

      succeeded = (HeadVar__3_3 < Start_14);
      if (succeeded)
      {
        *Name_4 = HeadVar__2_2;
        *Line_5 = HeadVar__3_3;
      }
      else
      {
        succeeded = (HeadVar__3_3 < End_15);
        if (succeeded)
        {
          *Line_5 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) Delta_16);
          *Name_4 = File_17;
        }
        else
        {
          MR_Word next_value_of_HeadVar__1_1 = Infos_9;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____begin_or_end_block_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mfilterjavac____Unify____begin_or_end_block_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____begin_or_end_block_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mfilterjavac____Compare____begin_or_end_block_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____filter_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mfilterjavac____Unify____filter_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____filter_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mfilterjavac____Compare____filter_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mfilterjavac____Unify____line_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mfilterjavac____Unify____line_info_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_end_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mfilterjavac____Unify____line_info_end_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_end_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_end_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mfilterjavac____Unify____line_info_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_info_error_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mfilterjavac____Unify____line_info_error_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_info_error_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_info_error_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mfilterjavac____Unify____line_mark_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mfilterjavac____Unify____line_mark_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mfilterjavac____Compare____line_mark_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mfilterjavac____Compare____line_mark_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mfilterjavac.
