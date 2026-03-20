/*
** Automatically generated from `time.m'
** by the Mercury compiler,
** version rotd-2026-03-20
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


// :- module time.
// :- implementation.

/*
INIT mercury__time__init
ENDINIT
*/

#include "time.mih"
#include "time.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"

#line 380 "time.m"

#ifdef MR_WIN32
    #include "mercury_windows.h"
    typedef union
    {
        FILETIME ft;
        __int64 i64;
    } timeKernel;
#endif




static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_0;

static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_1;

static const MR_EnumFunctorDescPtr mercury__time__time__enum_ordinal_ordered_dst_0[2];

static const MR_EnumFunctorDescPtr mercury__time__time__enum_name_ordered_dst_0[2];

static const MR_Integer mercury__time__time__functor_number_map_dst_0[2];

static const MR_Integer mercury__time__time__functor_number_map_time_error_0[1];

static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_error_0;

static const MR_Integer mercury__time__time__functor_number_map_time_t_0[1];

static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_t_0;

static const MR_FA_TypeInfo_Struct1 mercury__time__maybe__ti_maybe_1time__type_ctor_info_dst_0;

static const MR_PseudoTypeInfo mercury__time__time__field_types_tm_0_0[9];

static const MR_ConstString mercury__time__time__field_names_tm_0_0[9];

static const MR_DuFunctorDesc mercury__time__time__du_functor_desc_tm_0_0;

static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tm_0_0[1];

static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tm_0[1];

static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tm_0[1];

static const MR_Integer mercury__time__time__functor_number_map_tm_0[1];

static const MR_PseudoTypeInfo mercury__time__time__field_types_tms_0_0[4];

static const MR_DuFunctorDesc mercury__time__time__du_functor_desc_tms_0_0;

static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tms_0_0[1];

static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tms_0[1];

static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tms_0[1];

static const MR_Integer mercury__time__time__functor_number_map_tms_0[1];

static MR_Word MR_CALL 
mercury__time__construct_time_t_1_f_0(
  MR_Box T_3);

static void MR_CALL 
mercury__time__target_mktime_14_p_0(
  MR_Integer Yr_1,
  MR_Integer Mnt_2,
  MR_Integer MD_3,
  MR_Integer Hrs_4,
  MR_Integer Min_5,
  MR_Integer Sec_6,
  MR_Integer YD_7,
  MR_Integer WD_8,
  MR_Integer N_9,
  MR_Word * IsOk_10,
  MR_Box * Time_11,
  MR_String * ErrorMsg_12);

static void MR_CALL 
mercury__time__target_gmtime_12_p_0(
  MR_Box Time_1,
  MR_Word * IsOk_2,
  MR_Integer * Yr_3,
  MR_Integer * Mnt_4,
  MR_Integer * MD_5,
  MR_Integer * Hrs_6,
  MR_Integer * Min_7,
  MR_Integer * Sec_8,
  MR_Integer * YD_9,
  MR_Integer * WD_10,
  MR_Integer * N_11,
  MR_String * ErrorMsg_12);

static void MR_CALL 
mercury__time__target_localtime_14_p_0(
  MR_Box Time_1,
  MR_Word * IsOk_2,
  MR_Integer * Yr_3,
  MR_Integer * Mnt_4,
  MR_Integer * MD_5,
  MR_Integer * Hrs_6,
  MR_Integer * Min_7,
  MR_Integer * Sec_8,
  MR_Integer * YD_9,
  MR_Integer * WD_10,
  MR_Integer * N_11,
  MR_String * ErrorMsg_12);

static MR_Integer MR_CALL 
mercury__time__target_clk_tck_0_f_0(void);

static MR_String MR_CALL 
mercury__time__month_name_1_f_0(
  MR_Integer N_3);

static MR_String MR_CALL 
mercury__time__weekday_name_1_f_0(
  MR_Integer N_3);

static MR_bool MR_CALL 
mercury__time____Unify____clock_t_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____clock_t_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____dst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____dst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____time_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____time_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____time_t_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____time_t_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____time_t_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____time_t_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____tm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____tm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____tms_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____tms_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__time_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__time_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__time_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__time_scalar_common_4[1][5];

static /* final */ const MR_Box mercury__time_scalar_common_5[3][1];


struct mercury__time__vector_common_type_6_0_s {
  const MR_String mercury__time__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__time__vector_common_type_6_0_s mercury__time_vector_common_6[19];



static /* final */ const MR_Box mercury__time_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__time__time__type_ctor_info_dst_0))
  },
};

static /* final */ const MR_Box mercury__time_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__time_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__time_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__time_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__time_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__time_scalar_common_5[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 1)) },
};


static /* final */ const struct mercury__time__vector_common_type_6_0_s mercury__time_vector_common_6[19] = {
  /* row   0 */   { (MR_String) "Sun" },
  /* row   1 */   { (MR_String) "Mon" },
  /* row   2 */   { (MR_String) "Tue" },
  /* row   3 */   { (MR_String) "Wed" },
  /* row   4 */   { (MR_String) "Thu" },
  /* row   5 */   { (MR_String) "Fri" },
  /* row   6 */   { (MR_String) "Sat" },
  /* row   7 */   { (MR_String) "Jan" },
  /* row   8 */   { (MR_String) "Feb" },
  /* row   9 */   { (MR_String) "Mar" },
  /* row  10 */   { (MR_String) "Apr" },
  /* row  11 */   { (MR_String) "May" },
  /* row  12 */   { (MR_String) "Jun" },
  /* row  13 */   { (MR_String) "Jul" },
  /* row  14 */   { (MR_String) "Aug" },
  /* row  15 */   { (MR_String) "Sep" },
  /* row  16 */   { (MR_String) "Oct" },
  /* row  17 */   { (MR_String) "Nov" },
  /* row  18 */   { (MR_String) "Dec" },
};


#include "array.mh"
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"

#line 1044 "time.m"
MR_Word 
ML_construct_time_t(
  time_t T_3)
#line 1044 "time.m"
{
#line 1044 "time.m"
	MR_Box boxed_T_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, T_3, boxed_T_3);
	ret_value = (MR_Word)mercury__time__construct_time_t_1_f_0(boxed_T_3);
	return ret_value;
}


const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_clock_t_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__time____Unify____clock_t_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____clock_t_0_0_10001)),
  (MR_String) "time",
  (MR_String) "clock_t",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_0 = {
  (MR_String) "standard_time",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_1 = {
  (MR_String) "daylight_time",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__time__time__enum_ordinal_ordered_dst_0[2] = {
  &mercury__time__time__enum_functor_desc_dst_0_0,
  &mercury__time__time__enum_functor_desc_dst_0_1
};

static const MR_EnumFunctorDescPtr mercury__time__time__enum_name_ordered_dst_0[2] = {
  &mercury__time__time__enum_functor_desc_dst_0_1,
  &mercury__time__time__enum_functor_desc_dst_0_0
};

static const MR_Integer mercury__time__time__functor_number_map_dst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_dst_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__time____Unify____dst_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____dst_0_0_10001)),
  (MR_String) "time",
  (MR_String) "dst",
  { mercury__time__time__enum_name_ordered_dst_0 },
  { mercury__time__time__enum_ordinal_ordered_dst_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__time__time__functor_number_map_dst_0,

};

static const MR_Integer mercury__time__time__functor_number_map_time_error_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_error_0 = {
  (MR_String) "time_error",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_time_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__time____Unify____time_error_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____time_error_0_0_10001)),
  (MR_String) "time",
  (MR_String) "time_error",
  { &mercury__time__time__notag_functor_desc_time_error_0 },
  { &mercury__time__time__notag_functor_desc_time_error_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__time__time__functor_number_map_time_error_0,

};

static const MR_Integer mercury__time__time__functor_number_map_time_t_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_t_0 = {
  (MR_String) "time_t",
  (MR_PseudoTypeInfo) (&mercury__time__time__type_ctor_info_time_t_rep_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_time_t_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__time____Unify____time_t_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____time_t_0_0_10001)),
  (MR_String) "time",
  (MR_String) "time_t",
  { &mercury__time__time__notag_functor_desc_time_t_0 },
  { &mercury__time__time__notag_functor_desc_time_t_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__time__time__functor_number_map_time_t_0,

};

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_time_t_rep_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__time____Unify____time_t_rep_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____time_t_rep_0_0_10001)),
  (MR_String) "time",
  (MR_String) "time_t_rep",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mercury__time__maybe__ti_maybe_1time__type_ctor_info_dst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__time__time__type_ctor_info_dst_0) }
};

static const MR_PseudoTypeInfo mercury__time__time__field_types_tm_0_0[9] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__time__maybe__ti_maybe_1time__type_ctor_info_dst_0)
};

static const MR_ConstString mercury__time__time__field_names_tm_0_0[9] = {
  (MR_String) "tm_year",
  (MR_String) "tm_mon",
  (MR_String) "tm_mday",
  (MR_String) "tm_hour",
  (MR_String) "tm_min",
  (MR_String) "tm_sec",
  (MR_String) "tm_yday",
  (MR_String) "tm_wday",
  (MR_String) "tm_dst"
};

static const MR_DuFunctorDesc mercury__time__time__du_functor_desc_tm_0_0 = {
  (MR_String) "tm",
  INT16_C(9),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__time__time__field_types_tm_0_0,
  mercury__time__time__field_names_tm_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tm_0_0[1] = { &mercury__time__time__du_functor_desc_tm_0_0 };

static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tm_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__time__time__du_stag_ordered_tm_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tm_0[1] = { &mercury__time__time__du_functor_desc_tm_0_0 };

static const MR_Integer mercury__time__time__functor_number_map_tm_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_tm_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__time____Unify____tm_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____tm_0_0_10001)),
  (MR_String) "time",
  (MR_String) "tm",
  { mercury__time__time__du_name_ordered_tm_0 },
  { mercury__time__time__du_ptag_ordered_tm_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__time__time__functor_number_map_tm_0,

};

static const MR_PseudoTypeInfo mercury__time__time__field_types_tms_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__time__time__du_functor_desc_tms_0_0 = {
  (MR_String) "tms",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__time__time__field_types_tms_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tms_0_0[1] = { &mercury__time__time__du_functor_desc_tms_0_0 };

static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tms_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__time__time__du_stag_ordered_tms_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tms_0[1] = { &mercury__time__time__du_functor_desc_tms_0_0 };

static const MR_Integer mercury__time__time__functor_number_map_tms_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_tms_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__time____Unify____tms_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____tms_0_0_10001)),
  (MR_String) "time",
  (MR_String) "tms",
  { mercury__time__time__du_name_ordered_tms_0 },
  { mercury__time__time__du_ptag_ordered_tms_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__time__time__functor_number_map_tms_0,

};

void MR_CALL 
mercury__time____Compare____tms_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 0;
            else
              *HeadVar__1_1 = (MR_Integer) 2;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__time____Unify____tms_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
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

void MR_CALL 
mercury__time____Compare____tm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
          SubResult3_12 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX3_10 == ArgY3_11);
          if (succeeded)
            SubResult3_12 = (MR_Integer) 0;
          else
            SubResult3_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            SubResult4_15 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              SubResult4_15 = (MR_Integer) 0;
            else
              SubResult4_15 = (MR_Integer) 2;
          }
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
              SubResult5_18 = (MR_Integer) 1;
            else
            {
              succeeded = (ArgX5_16 == ArgY5_17);
              if (succeeded)
                SubResult5_18 = (MR_Integer) 0;
              else
                SubResult5_18 = (MR_Integer) 2;
            }
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
                SubResult6_21 = (MR_Integer) 1;
              else
              {
                succeeded = (ArgX6_19 == ArgY6_20);
                if (succeeded)
                  SubResult6_21 = (MR_Integer) 0;
                else
                  SubResult6_21 = (MR_Integer) 2;
              }
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                  SubResult7_24 = (MR_Integer) 1;
                else
                {
                  succeeded = (ArgX7_22 == ArgY7_23);
                  if (succeeded)
                    SubResult7_24 = (MR_Integer) 0;
                  else
                    SubResult7_24 = (MR_Integer) 2;
                }
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                    SubResult8_27 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX8_25 == ArgY8_26);
                    if (succeeded)
                      SubResult8_27 = (MR_Integer) 0;
                    else
                      SubResult8_27 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__time_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__time____Unify____tm_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_23_23;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    TypeInfo_23_23 = (MR_Word) (&mercury__time_scalar_common_1[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__time____Compare____time_t_rep_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_4 == CastY_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    mercury__time__compare_time_t_reps_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

MR_bool MR_CALL 
mercury__time____Unify____time_t_rep_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_4 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_5 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_4 == CastY_5);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word Result_3;

    mercury__time__compare_time_t_reps_3_p_0(&Result_3, HeadVar__1_1, HeadVar__2_2);
    succeeded = (Result_3 == (MR_Integer) 0);
  }
  return succeeded;
}

void MR_CALL 
mercury__time____Compare____time_t_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Box ArgX1_4 = (MR_Box) (HeadVar__2_2);
    MR_Box ArgY1_5 = (MR_Box) (HeadVar__3_3);
    MR_Integer CastX_9 = (MR_Integer) (ArgX1_4);
    MR_Integer CastY_10 = (MR_Integer) (ArgY1_5);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      mercury__time__compare_time_t_reps_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__time____Unify____time_t_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Box ArgX1_3 = (MR_Box) (HeadVar__1_1);
    MR_Box ArgY1_4 = (MR_Box) (HeadVar__2_2);
    MR_Integer CastX_8 = (MR_Integer) (ArgX1_3);
    MR_Integer CastY_9 = (MR_Integer) (ArgY1_4);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word Result_7;

      mercury__time__compare_time_t_reps_3_p_0(&Result_7, ArgX1_3, ArgY1_4);
      succeeded = (Result_7 == (MR_Integer) 0);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__time____Compare____time_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);
    MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__time____Compare____time_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_9  = Res;
}
    succeeded = (Var_9 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__time____Unify____time_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

void MR_CALL 
mercury__time____Compare____dst_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__time____Unify____dst_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__time____Compare____clock_t_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
}

MR_bool MR_CALL 
mercury__time____Unify____clock_t_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static MR_Word MR_CALL 
mercury__time__construct_time_t_1_f_0(
  MR_Box T_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (T_3);

  return HeadVar__2_2;
}

static void MR_CALL 
mercury__time__target_mktime_14_p_0(
  MR_Integer Yr_1,
  MR_Integer Mnt_2,
  MR_Integer MD_3,
  MR_Integer Hrs_4,
  MR_Integer Min_5,
  MR_Integer Sec_6,
  MR_Integer YD_7,
  MR_Integer WD_8,
  MR_Integer N_9,
  MR_Word * IsOk_10,
  MR_Box * Time_11,
  MR_String * ErrorMsg_12)
{
{
#define MR_PROC_LABEL mercury__time__target_mktime_14_p_0

	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	MR_Word IsOk;
	time_t Time;
	MR_String ErrorMsg;

	Yr = Yr_1 ;
	Mnt = Mnt_2 ;
	MD = MD_3 ;
	Hrs = Hrs_4 ;
	Min = Min_5 ;
	Sec = Sec_6 ;
	YD = YD_7 ;
	WD = WD_8 ;
	N = N_9 ;
		{

    struct tm t;
    char errbuf[MR_STRERROR_BUF_SIZE];
    const char *errno_msg;

    t.tm_sec = (int) Sec;
    t.tm_min = (int) Min;
    t.tm_hour = (int) Hrs;
    t.tm_mon = (int) Mnt;
    t.tm_year = (int) Yr;
    t.tm_wday = (int) WD;
    t.tm_mday = (int) MD;
    t.tm_yday = (int) YD;
    t.tm_isdst = (int) N;

    Time = mktime(&t);
    if (Time == (time_t) -1) {
        IsOk = MR_NO;
        errno_msg = MR_strerror(errno, errbuf, sizeof(errbuf));
        MR_save_transient_hp();
        MR_make_aligned_string_copy(ErrorMsg, errno_msg);
        MR_restore_transient_hp();
    } else {
        IsOk = MR_YES;
        ErrorMsg = MR_make_string_const("");
    }


		;}
#undef MR_PROC_LABEL
	*IsOk_10  = IsOk;
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Time, *Time_11 );
	*ErrorMsg_12  = ErrorMsg;
}
}

static void MR_CALL 
mercury__time__target_gmtime_12_p_0(
  MR_Box Time_1,
  MR_Word * IsOk_2,
  MR_Integer * Yr_3,
  MR_Integer * Mnt_4,
  MR_Integer * MD_5,
  MR_Integer * Hrs_6,
  MR_Integer * Min_7,
  MR_Integer * Sec_8,
  MR_Integer * YD_9,
  MR_Integer * WD_10,
  MR_Integer * N_11,
  MR_String * ErrorMsg_12)
{
{
#define MR_PROC_LABEL mercury__time__target_gmtime_12_p_0

	time_t Time;
	MR_Word IsOk;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	MR_String ErrorMsg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, Time_1 , Time);
		{

    struct tm   *p;
    time_t      t;

    t = Time;

    p = gmtime(&t);
    if (p == NULL) {
        char errbuf[MR_STRERROR_BUF_SIZE];
        const char *errno_msg;
        IsOk = MR_NO;
        Sec = 0;
        Min = 0;
        Hrs = 0;
        Mnt = 0;
        Yr = 0;
        WD = 0;
        MD = 0;
        YD = 0;
        N = 0;
        errno_msg = MR_strerror(errno, errbuf, sizeof(errbuf));
        MR_save_transient_hp();
        MR_make_aligned_string_copy(ErrorMsg, errno_msg);
        MR_restore_transient_hp();
    } else {
        IsOk = MR_YES;
        Sec = (MR_Integer) p->tm_sec;
        Min = (MR_Integer) p->tm_min;
        Hrs = (MR_Integer) p->tm_hour;
        Mnt = (MR_Integer) p->tm_mon;
        Yr = (MR_Integer) p->tm_year;
        WD = (MR_Integer) p->tm_wday;
        MD = (MR_Integer) p->tm_mday;
        YD = (MR_Integer) p->tm_yday;
        N = (MR_Integer) p->tm_isdst;
        ErrorMsg = MR_make_string_const("");
    }


		;}
#undef MR_PROC_LABEL
	*IsOk_2  = IsOk;
	*Yr_3  = Yr;
	*Mnt_4  = Mnt;
	*MD_5  = MD;
	*Hrs_6  = Hrs;
	*Min_7  = Min;
	*Sec_8  = Sec;
	*YD_9  = YD;
	*WD_10  = WD;
	*N_11  = N;
	*ErrorMsg_12  = ErrorMsg;
}
}

static void MR_CALL 
mercury__time__target_localtime_14_p_0(
  MR_Box Time_1,
  MR_Word * IsOk_2,
  MR_Integer * Yr_3,
  MR_Integer * Mnt_4,
  MR_Integer * MD_5,
  MR_Integer * Hrs_6,
  MR_Integer * Min_7,
  MR_Integer * Sec_8,
  MR_Integer * YD_9,
  MR_Integer * WD_10,
  MR_Integer * N_11,
  MR_String * ErrorMsg_12)
{
{
#define MR_PROC_LABEL mercury__time__target_localtime_14_p_0

	time_t Time;
	MR_Word IsOk;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	MR_String ErrorMsg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, Time_1 , Time);
		{

    struct tm   *p;
    time_t      t;

    t = Time;

    p = localtime(&t);
    if (p == NULL) {
        char errbuf[MR_STRERROR_BUF_SIZE];
        const char *errno_msg;
        IsOk = MR_NO;
        Sec = 0; // Dummy values.
        Min = 0;
        Hrs = 0;
        Mnt = 0;
        Yr = 0;
        WD = 0;
        MD = 0;
        YD = 0;
        N = 0;
        errno_msg = MR_strerror(errno, errbuf, sizeof(errbuf));
        MR_save_transient_hp();
        MR_make_aligned_string_copy(ErrorMsg, errno_msg);
        MR_restore_transient_hp();
    } else {
        IsOk = MR_YES;
        Sec = (MR_Integer) p->tm_sec;
        Min = (MR_Integer) p->tm_min;
        Hrs = (MR_Integer) p->tm_hour;
        Mnt = (MR_Integer) p->tm_mon;
        Yr = (MR_Integer) p->tm_year;
        WD = (MR_Integer) p->tm_wday;
        MD = (MR_Integer) p->tm_mday;
        YD = (MR_Integer) p->tm_yday;
        N = (MR_Integer) p->tm_isdst;
        ErrorMsg = MR_make_string_const("");
    }


		;}
#undef MR_PROC_LABEL
	*IsOk_2  = IsOk;
	*Yr_3  = Yr;
	*Mnt_4  = Mnt;
	*MD_5  = MD;
	*Hrs_6  = Hrs;
	*Min_7  = Min;
	*Sec_8  = Sec;
	*YD_9  = YD;
	*WD_10  = WD;
	*N_11  = N;
	*ErrorMsg_12  = ErrorMsg;
}
}

void MR_CALL 
mercury__time__target_difftime_3_p_0(
  MR_Box T1_1,
  MR_Box T0_2,
  MR_Float * Diff_3)
{
{
#define MR_PROC_LABEL mercury__time__target_difftime_3_p_0

	time_t T1;
	time_t T0;
	MR_Float Diff;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, T1_1 , T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, T0_2 , T0);
		{

    Diff = (MR_Float) difftime(T1, T0);


		;}
#undef MR_PROC_LABEL
	*Diff_3  = Diff;
}
}

static MR_Integer MR_CALL 
mercury__time__target_clk_tck_0_f_0(void)
{
  MR_Integer Ret_1;

{
#define MR_PROC_LABEL mercury__time__target_clk_tck_0_f_0

	MR_Integer Ret;

		{

#if defined(MR_CLOCK_TICKS_PER_SECOND)
    Ret = MR_CLOCK_TICKS_PER_SECOND;
#else
    Ret = -1;
#endif


		;}
#undef MR_PROC_LABEL
	Ret_1  = Ret;
}
  return Ret_1;
}

MR_bool MR_CALL 
mercury__time__time_t_is_invalid_1_p_0(
  MR_Box Val_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__time__time_t_is_invalid_1_p_0

	time_t Val;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, Val_1 , Val);
		{

    SUCCESS_INDICATOR = (Val == -1);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__time__target_time_3_p_0(
  MR_Box * Ret_1)
{
{
#define MR_PROC_LABEL mercury__time__target_time_3_p_0

	time_t Ret;

		{

    Ret = time(NULL);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Ret, *Ret_1 );
}
}

void MR_CALL 
mercury__time__target_clock_3_p_0(
  MR_Integer * Ret_1)
{
{
#define MR_PROC_LABEL mercury__time__target_clock_3_p_0

	MR_Integer Ret;

		{

    Ret = (MR_Integer) clock();


		;}
#undef MR_PROC_LABEL
	*Ret_1  = Ret;
}
}

void MR_CALL 
mercury__time__compare_time_t_reps_3_p_0(
  MR_Word * Result_4,
  MR_Box X_5,
  MR_Box Y_6)
{
  MR_bool succeeded;
  MR_Float Var_7;

{
#define MR_PROC_LABEL mercury__time__compare_time_t_reps_3_p_0

	time_t T1;
	time_t T0;
	MR_Float Diff;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, X_5 , T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, Y_6 , T0);
		{

    Diff = (MR_Float) difftime(T1, T0);


		;}
#undef MR_PROC_LABEL
	Var_7  = Diff;
}
  succeeded = (Var_7 < ((MR_Float) 0.0000000000000000));
  if (succeeded)
    *Result_4 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 > ((MR_Float) 0.0000000000000000));
    if (succeeded)
      *Result_4 = (MR_Integer) 2;
    else
      *Result_4 = (MR_Integer) 0;
  }
}

MR_String MR_CALL 
mercury__time__asctime_1_f_0(
  MR_Word TM_3)
{
  MR_String Str_4;
  MR_Integer Yr_5 = ((MR_Integer) ((MR_hl_field(0, TM_3, 0))));
  MR_Integer Mnt_6 = ((MR_Integer) ((MR_hl_field(0, TM_3, 1))));
  MR_Integer MD_7 = ((MR_Integer) ((MR_hl_field(0, TM_3, 2))));
  MR_Integer Hrs_8 = ((MR_Integer) ((MR_hl_field(0, TM_3, 3))));
  MR_Integer Min_9 = ((MR_Integer) ((MR_hl_field(0, TM_3, 4))));
  MR_Integer Sec_10 = ((MR_Integer) ((MR_hl_field(0, TM_3, 5))));
  MR_Integer WD_12 = ((MR_Integer) ((MR_hl_field(0, TM_3, 7))));
  MR_String Var_17;
  MR_String Var_20;
  MR_Integer Var_31;
  MR_String Var_35;
  MR_String Var_42;
  MR_String Var_44;
  MR_String Var_45;
  MR_String Var_53;
  MR_String Var_55;
  MR_String Var_56;
  MR_String Var_64;
  MR_String Var_66;
  MR_String Var_67;
  MR_String Var_75;
  MR_String Var_77;
  MR_String Var_78;
  MR_String Var_86;
  MR_String Var_87;
  MR_String Var_95;
  MR_String Var_97;
  MR_String Var_98;

  Var_17 = mercury__time__weekday_name_1_f_0(WD_12);
  Var_20 = mercury__time__month_name_1_f_0(Mnt_6);
  Var_31 = (MR_Integer) ((MR_Unsigned) 1900 + (MR_Unsigned) Yr_5);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&mercury__time_scalar_common_5[0]), Var_31, &Var_35);
  Var_42 = mercury__string__f_43_43_2_f_0(Var_35, (MR_String) "\n");
  Var_44 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_42);
  mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0((MR_Word) (&mercury__time_scalar_common_5[0]), (MR_Integer) 2, Sec_10, &Var_45);
  Var_53 = mercury__string__f_43_43_2_f_0(Var_45, Var_44);
  Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_53);
  mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0((MR_Word) (&mercury__time_scalar_common_5[0]), (MR_Integer) 2, Min_9, &Var_56);
  Var_64 = mercury__string__f_43_43_2_f_0(Var_56, Var_55);
  Var_66 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_64);
  mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0((MR_Word) (&mercury__time_scalar_common_5[0]), (MR_Integer) 2, Hrs_8, &Var_67);
  Var_75 = mercury__string__f_43_43_2_f_0(Var_67, Var_66);
  Var_77 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_75);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&mercury__time_scalar_common_5[0]), (MR_Integer) 3, MD_7, &Var_78);
  Var_86 = mercury__string__f_43_43_2_f_0(Var_78, Var_77);
  mercury__string__format__format_string_component_nowidth_prec_4_p_0((MR_Word) (&mercury__time_scalar_common_5[0]), (MR_Integer) 3, Var_20, &Var_87);
  Var_95 = mercury__string__f_43_43_2_f_0(Var_87, Var_86);
  Var_97 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_95);
  mercury__string__format__format_string_component_nowidth_prec_4_p_0((MR_Word) (&mercury__time_scalar_common_5[0]), (MR_Integer) 3, Var_17, &Var_98);
  Str_4 = mercury__string__f_43_43_2_f_0(Var_98, Var_97);
  return Str_4;
}

static MR_String MR_CALL 
mercury__time__month_name_1_f_0(
  MR_Integer N_3)
{
  MR_bool succeeded;
  MR_String Name_4;
  MR_String Name0_5;

  if ((((MR_Unsigned) N_3) <= ((MR_Unsigned) 11)))
  {
    Name0_5 = ((&mercury__time_vector_common_6[7 + N_3]))->mercury__time__vector_common_type_6_0__vct_6_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    Name_4 = Name0_5;
  else
    mercury__require__error_1_p_0((MR_String) "time: month_name");
  return Name_4;
}

static MR_String MR_CALL 
mercury__time__weekday_name_1_f_0(
  MR_Integer N_3)
{
  MR_bool succeeded;
  MR_String Name_4;
  MR_String Name0_5;

  if ((((MR_Unsigned) N_3) <= ((MR_Unsigned) 6)))
  {
    Name0_5 = ((&mercury__time_vector_common_6[0 + N_3]))->mercury__time__vector_common_type_6_0__vct_6_f_0;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  if (succeeded)
    Name_4 = Name0_5;
  else
    mercury__require__error_1_p_0((MR_String) "time: weekday_name");
  return Name_4;
}

void MR_CALL 
mercury__time__mktime_4_p_0(
  MR_Word TM_5,
  MR_Word * Time_6)
{
  MR_Integer Yr_8 = ((MR_Integer) ((MR_hl_field(0, TM_5, 0))));
  MR_Integer Mnt_9 = ((MR_Integer) ((MR_hl_field(0, TM_5, 1))));
  MR_Integer MD_10 = ((MR_Integer) ((MR_hl_field(0, TM_5, 2))));
  MR_Integer Hrs_11 = ((MR_Integer) ((MR_hl_field(0, TM_5, 3))));
  MR_Integer Min_12 = ((MR_Integer) ((MR_hl_field(0, TM_5, 4))));
  MR_Integer Sec_13 = ((MR_Integer) ((MR_hl_field(0, TM_5, 5))));
  MR_Integer YD_14 = ((MR_Integer) ((MR_hl_field(0, TM_5, 6))));
  MR_Integer WD_15 = ((MR_Integer) ((MR_hl_field(0, TM_5, 7))));
  MR_Word DST_16 = ((MR_Word) ((MR_hl_field(0, TM_5, 8))));
  MR_Word IsOk_17;
  MR_Box RawTime_18;
  MR_String ErrMsg_19;
  MR_Integer Var_22;

  if ((DST_16 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_22 = (MR_Integer) -1;
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(1, DST_16, 0))));

    switch (Var_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Var_22 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        Var_22 = (MR_Integer) 0;
        break;
    }
  }
{
#define MR_PROC_LABEL mercury__time__mktime_4_p_0

	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	MR_Word IsOk;
	time_t Time;
	MR_String ErrorMsg;

	Yr = Yr_8 ;
	Mnt = Mnt_9 ;
	MD = MD_10 ;
	Hrs = Hrs_11 ;
	Min = Min_12 ;
	Sec = Sec_13 ;
	YD = YD_14 ;
	WD = WD_15 ;
	N = Var_22 ;
		{

    struct tm t;
    char errbuf[MR_STRERROR_BUF_SIZE];
    const char *errno_msg;

    t.tm_sec = (int) Sec;
    t.tm_min = (int) Min;
    t.tm_hour = (int) Hrs;
    t.tm_mon = (int) Mnt;
    t.tm_year = (int) Yr;
    t.tm_wday = (int) WD;
    t.tm_mday = (int) MD;
    t.tm_yday = (int) YD;
    t.tm_isdst = (int) N;

    Time = mktime(&t);
    if (Time == (time_t) -1) {
        IsOk = MR_NO;
        errno_msg = MR_strerror(errno, errbuf, sizeof(errbuf));
        MR_save_transient_hp();
        MR_make_aligned_string_copy(ErrorMsg, errno_msg);
        MR_restore_transient_hp();
    } else {
        IsOk = MR_YES;
        ErrorMsg = MR_make_string_const("");
    }


		;}
#undef MR_PROC_LABEL
	IsOk_17  = IsOk;
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Time, RawTime_18 );
	ErrMsg_19  = ErrorMsg;
}
  switch (IsOk_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_25;

        mercury__string__append_3_p_2((MR_String) "cannot convert to calendar time: ", ErrMsg_19, &Var_25);
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140time.mktime\'/4", Var_25);
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      *Time_6 = (MR_Word) (RawTime_18);
      break;
  }
}

MR_Word MR_CALL 
mercury__time__gmtime_1_f_0(
  MR_Word Time_3)
{
  MR_bool succeeded;
  MR_Word TM_4;
  MR_Box RawTime_5 = (MR_Box) (Time_3);
  MR_Word IsOk_6;
  MR_Integer Yr_7;
  MR_Integer Mnt_8;
  MR_Integer MD_9;
  MR_Integer Hrs_10;
  MR_Integer Min_11;
  MR_Integer Sec_12;
  MR_Integer YD_13;
  MR_Integer WD_14;
  MR_Integer N_15;
  MR_String ErrorMsg_16;

{
#define MR_PROC_LABEL mercury__time__gmtime_1_f_0

	time_t Time;
	MR_Word IsOk;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	MR_String ErrorMsg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, RawTime_5 , Time);
		{

    struct tm   *p;
    time_t      t;

    t = Time;

    p = gmtime(&t);
    if (p == NULL) {
        char errbuf[MR_STRERROR_BUF_SIZE];
        const char *errno_msg;
        IsOk = MR_NO;
        Sec = 0;
        Min = 0;
        Hrs = 0;
        Mnt = 0;
        Yr = 0;
        WD = 0;
        MD = 0;
        YD = 0;
        N = 0;
        errno_msg = MR_strerror(errno, errbuf, sizeof(errbuf));
        MR_save_transient_hp();
        MR_make_aligned_string_copy(ErrorMsg, errno_msg);
        MR_restore_transient_hp();
    } else {
        IsOk = MR_YES;
        Sec = (MR_Integer) p->tm_sec;
        Min = (MR_Integer) p->tm_min;
        Hrs = (MR_Integer) p->tm_hour;
        Mnt = (MR_Integer) p->tm_mon;
        Yr = (MR_Integer) p->tm_year;
        WD = (MR_Integer) p->tm_wday;
        MD = (MR_Integer) p->tm_mday;
        YD = (MR_Integer) p->tm_yday;
        N = (MR_Integer) p->tm_isdst;
        ErrorMsg = MR_make_string_const("");
    }


		;}
#undef MR_PROC_LABEL
	IsOk_6  = IsOk;
	Yr_7  = Yr;
	Mnt_8  = Mnt;
	MD_9  = MD;
	Hrs_10  = Hrs;
	Min_11  = Min;
	Sec_12  = Sec;
	YD_13  = YD;
	WD_14  = WD;
	N_15  = N;
	ErrorMsg_16  = ErrorMsg;
}
  switch (IsOk_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_18;
        MR_String Var_19;

        mercury__string__append_3_p_2((MR_String) "time.gmtime: conversion failed: ", ErrorMsg_16, &Var_19);
        Var_18 = (MR_Word) (Var_19);
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__time__time__type_ctor_info_time_error_0), ((MR_Box) (Var_18)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_17;

        succeeded = (N_15 == (MR_Integer) 0);
        if (succeeded)
          Var_17 = (MR_Word) (MR_mkword(1, &mercury__time_scalar_common_5[1]));
        else
        {
          succeeded = (N_15 > (MR_Integer) 0);
          if (succeeded)
            Var_17 = (MR_Word) (MR_mkword(1, &mercury__time_scalar_common_5[2]));
          else
            Var_17 = (MR_Word) ((MR_Unsigned) 0U);
        }
        {
          TM_4 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TM_4, 0) = ((MR_Box) (Yr_7));
          MR_hl_field(0, TM_4, 1) = ((MR_Box) (Mnt_8));
          MR_hl_field(0, TM_4, 2) = ((MR_Box) (MD_9));
          MR_hl_field(0, TM_4, 3) = ((MR_Box) (Hrs_10));
          MR_hl_field(0, TM_4, 4) = ((MR_Box) (Min_11));
          MR_hl_field(0, TM_4, 5) = ((MR_Box) (Sec_12));
          MR_hl_field(0, TM_4, 6) = ((MR_Box) (YD_13));
          MR_hl_field(0, TM_4, 7) = ((MR_Box) (WD_14));
          MR_hl_field(0, TM_4, 8) = ((MR_Box) (Var_17));
        }
      }
      break;
  }
  return TM_4;
}

void MR_CALL 
mercury__time__localtime_4_p_0(
  MR_Word Time_5,
  MR_Word * TM_6)
{
  MR_bool succeeded;
  MR_Box RawTime_8 = (MR_Box) (Time_5);
  MR_Word IsOk_9;
  MR_Integer Yr_10;
  MR_Integer Mnt_11;
  MR_Integer MD_12;
  MR_Integer Hrs_13;
  MR_Integer Min_14;
  MR_Integer Sec_15;
  MR_Integer YD_16;
  MR_Integer WD_17;
  MR_Integer N_18;
  MR_String ErrorMsg_19;

{
#define MR_PROC_LABEL mercury__time__localtime_4_p_0

	time_t Time;
	MR_Word IsOk;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	MR_String ErrorMsg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, RawTime_8 , Time);
		{

    struct tm   *p;
    time_t      t;

    t = Time;

    p = localtime(&t);
    if (p == NULL) {
        char errbuf[MR_STRERROR_BUF_SIZE];
        const char *errno_msg;
        IsOk = MR_NO;
        Sec = 0; // Dummy values.
        Min = 0;
        Hrs = 0;
        Mnt = 0;
        Yr = 0;
        WD = 0;
        MD = 0;
        YD = 0;
        N = 0;
        errno_msg = MR_strerror(errno, errbuf, sizeof(errbuf));
        MR_save_transient_hp();
        MR_make_aligned_string_copy(ErrorMsg, errno_msg);
        MR_restore_transient_hp();
    } else {
        IsOk = MR_YES;
        Sec = (MR_Integer) p->tm_sec;
        Min = (MR_Integer) p->tm_min;
        Hrs = (MR_Integer) p->tm_hour;
        Mnt = (MR_Integer) p->tm_mon;
        Yr = (MR_Integer) p->tm_year;
        WD = (MR_Integer) p->tm_wday;
        MD = (MR_Integer) p->tm_mday;
        YD = (MR_Integer) p->tm_yday;
        N = (MR_Integer) p->tm_isdst;
        ErrorMsg = MR_make_string_const("");
    }


		;}
#undef MR_PROC_LABEL
	IsOk_9  = IsOk;
	Yr_10  = Yr;
	Mnt_11  = Mnt;
	MD_12  = MD;
	Hrs_13  = Hrs;
	Min_14  = Min;
	Sec_15  = Sec;
	YD_16  = YD;
	WD_17  = WD;
	N_18  = N;
	ErrorMsg_19  = ErrorMsg;
}
  switch (IsOk_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_24;
        MR_String Var_25;

        mercury__string__append_3_p_2((MR_String) "time.localtime: conversion failed: ", ErrorMsg_19, &Var_25);
        Var_24 = (MR_Word) (Var_25);
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__time__time__type_ctor_info_time_error_0), ((MR_Box) (Var_24)));
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_23;

        succeeded = (N_18 == (MR_Integer) 0);
        if (succeeded)
          Var_23 = (MR_Word) (MR_mkword(1, &mercury__time_scalar_common_5[1]));
        else
        {
          succeeded = (N_18 > (MR_Integer) 0);
          if (succeeded)
            Var_23 = (MR_Word) (MR_mkword(1, &mercury__time_scalar_common_5[2]));
          else
            Var_23 = (MR_Word) ((MR_Unsigned) 0U);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          *TM_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Yr_10));
          MR_hl_field(0, base, 1) = ((MR_Box) (Mnt_11));
          MR_hl_field(0, base, 2) = ((MR_Box) (MD_12));
          MR_hl_field(0, base, 3) = ((MR_Box) (Hrs_13));
          MR_hl_field(0, base, 4) = ((MR_Box) (Min_14));
          MR_hl_field(0, base, 5) = ((MR_Box) (Sec_15));
          MR_hl_field(0, base, 6) = ((MR_Box) (YD_16));
          MR_hl_field(0, base, 7) = ((MR_Box) (WD_17));
          MR_hl_field(0, base, 8) = ((MR_Box) (Var_23));
        }
      }
      break;
  }
}

MR_Float MR_CALL 
mercury__time__difftime_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Float Diff_6;
  MR_Box T1_4 = (MR_Box) (HeadVar__1_1);
  MR_Box T0_5 = (MR_Box) (HeadVar__2_2);

{
#define MR_PROC_LABEL mercury__time__difftime_2_f_0

	time_t T1;
	time_t T0;
	MR_Float Diff;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, T1_4 , T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, T0_5 , T0);
		{

    Diff = (MR_Float) difftime(T1, T0);


		;}
#undef MR_PROC_LABEL
	Diff_6  = Diff;
}
  return Diff_6;
}

MR_Integer MR_CALL 
mercury__time__clk_tck_0_f_0(void)
{
  MR_bool succeeded;
  MR_Integer Ret_2;
  MR_Integer Ret0_3;

{
#define MR_PROC_LABEL mercury__time__clk_tck_0_f_0

	MR_Integer Ret;

		{

#if defined(MR_CLOCK_TICKS_PER_SECOND)
    Ret = MR_CLOCK_TICKS_PER_SECOND;
#else
    Ret = -1;
#endif


		;}
#undef MR_PROC_LABEL
	Ret0_3  = Ret;
}
  succeeded = (Ret0_3 == (MR_Integer) -1);
  if (succeeded)
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__time__time__type_ctor_info_time_error_0), ((MR_Box) (((MR_Box) ((MR_String) "can\'t get clk_tck value")))));
  else
    Ret_2 = Ret0_3;
  return Ret_2;
}

void MR_CALL 
mercury__time__times_4_p_0(
  MR_Word * Tms_5,
  MR_Integer * Result_6)
{
  MR_bool succeeded;
  MR_Integer Ret_8;
  MR_Integer Ut_9;
  MR_Integer St_10;
  MR_Integer CUt_11;
  MR_Integer CSt_12;

  mercury__time__target_times_7_p_0(&Ret_8, &Ut_9, &St_10, &CUt_11, &CSt_12);
  succeeded = (Ret_8 == (MR_Integer) -1);
  if (succeeded)
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__time__time__type_ctor_info_time_error_0), ((MR_Box) (((MR_Box) ((MR_String) "can\'t get times value")))));
      return;
    }
  else
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Tms_5 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Ut_9));
      MR_hl_field(0, base, 1) = ((MR_Box) (St_10));
      MR_hl_field(0, base, 2) = ((MR_Box) (CUt_11));
      MR_hl_field(0, base, 3) = ((MR_Box) (CSt_12));
    }
    *Result_6 = Ret_8;
  }
}

void MR_CALL 
mercury__time__target_times_7_p_0(
  MR_Integer * Ret_1,
  MR_Integer * Ut_2,
  MR_Integer * St_3,
  MR_Integer * CUt_4,
  MR_Integer * CSt_5)
{
{
#define MR_PROC_LABEL mercury__time__target_times_7_p_0

	MR_Integer Ret;
	MR_Integer Ut;
	MR_Integer St;
	MR_Integer CUt;
	MR_Integer CSt;

		{

#ifdef MR_HAVE_POSIX_TIMES
    struct tms t;

    Ret = (MR_Integer) times(&t);

    Ut = (MR_Integer) t.tms_utime;
    St = (MR_Integer) t.tms_stime;
    CUt = (MR_Integer) t.tms_cutime;
    CSt = (MR_Integer) t.tms_cstime;
#else
  #if defined(MR_WIN32) && defined(MR_CLOCK_TICKS_PER_SECOND)
    HANDLE hProcess;
    FILETIME ftCreation, ftExit, ftKernel, ftUser;
    timeKernel user, kernel;

    int factor;

    hProcess = GetCurrentProcess();
    GetProcessTimes(hProcess, &ftCreation, &ftExit, &ftKernel, &ftUser);

    factor = 10000000U / MR_CLOCK_TICKS_PER_SECOND;

    user.ft = ftUser;
    kernel.ft = ftKernel;

    Ut = (MR_Integer) (user.i64 / factor);
    St = (MR_Integer) (kernel.i64 / factor);

    // XXX Not sure how to return children times.
    CUt = 0;
    CSt = 0;
  #else
    Ret = -1;
  #endif
#endif


		;}
#undef MR_PROC_LABEL
	*Ret_1  = Ret;
	*Ut_2  = Ut;
	*St_3  = St;
	*CUt_4  = CUt;
	*CSt_5  = CSt;
}
}

void MR_CALL 
mercury__time__time_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;
  MR_Box Ret_6;

{
#define MR_PROC_LABEL mercury__time__time_3_p_0

	time_t Ret;

		{

    Ret = time(NULL);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Ret, Ret_6 );
}
{
#define MR_PROC_LABEL mercury__time__time_3_p_0

	time_t Val;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, Ret_6 , Val);
		{

    SUCCESS_INDICATOR = (Val == -1);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__time__time__type_ctor_info_time_error_0), ((MR_Box) (((MR_Box) ((MR_String) "can\'t get time value")))));
      return;
    }
  else
    *Result_4 = (MR_Word) (Ret_6);
}

MR_Integer MR_CALL 
mercury__time__clocks_per_sec_0_f_0(void)
{
  MR_Integer Ret_1;

{
#define MR_PROC_LABEL mercury__time__clocks_per_sec_0_f_0

	MR_Integer Ret;

		{

    Ret = (MR_Integer) CLOCKS_PER_SEC;


		;}
#undef MR_PROC_LABEL
	Ret_1  = Ret;
}
  return Ret_1;
}

void MR_CALL 
mercury__time__clock_3_p_0(
  MR_Integer * Result_4)
{
  MR_bool succeeded;
  MR_Integer Ret_6;

{
#define MR_PROC_LABEL mercury__time__clock_3_p_0

	MR_Integer Ret;

		{

    Ret = (MR_Integer) clock();


		;}
#undef MR_PROC_LABEL
	Ret_6  = Ret;
}
  succeeded = (Ret_6 == (MR_Integer) -1);
  if (succeeded)
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__time__time__type_ctor_info_time_error_0), ((MR_Box) (((MR_Box) ((MR_String) "can\'t get clock value")))));
      return;
    }
  else
    *Result_4 = Ret_6;
}

static MR_bool MR_CALL 
mercury__time____Unify____clock_t_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__time____Unify____clock_t_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__time____Compare____clock_t_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__time____Compare____clock_t_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__time____Unify____dst_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__time____Unify____dst_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__time____Compare____dst_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__time____Compare____dst_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__time____Unify____time_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__time____Unify____time_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__time____Compare____time_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__time____Compare____time_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__time____Unify____time_t_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__time____Unify____time_t_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__time____Compare____time_t_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__time____Compare____time_t_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__time____Unify____time_t_rep_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__time____Unify____time_t_rep_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__time____Compare____time_t_rep_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__time____Compare____time_t_rep_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__time____Unify____tm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__time____Unify____tm_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__time____Compare____tm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__time____Compare____tm_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__time____Unify____tms_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__time____Unify____tms_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__time____Compare____tms_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__time____Compare____tms_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__time__init(void)
{
}

void mercury__time__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__time__time__type_ctor_info_clock_t_0);
  MR_register_type_ctor_info(&mercury__time__time__type_ctor_info_dst_0);
  MR_register_type_ctor_info(&mercury__time__time__type_ctor_info_time_error_0);
  MR_register_type_ctor_info(&mercury__time__time__type_ctor_info_time_t_0);
  MR_register_type_ctor_info(&mercury__time__time__type_ctor_info_time_t_rep_0);
  MR_register_type_ctor_info(&mercury__time__time__type_ctor_info_tm_0);
  MR_register_type_ctor_info(&mercury__time__time__type_ctor_info_tms_0);
}

void mercury__time__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__time__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module time.
