/*
** Automatically generated from `time.m'
** by the Mercury compiler,
** version rotd-2016-06-30
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


/* :- module time. */
/* :- implementation. */

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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"


#line 345 "time.m"

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

static const MR_EnumFunctorDescPtr mercury__time__time__enum_value_ordered_dst_0[2];

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

static MR_bool MR_CALL 
mercury__time____Unify____clock_t_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____clock_t_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____dst_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____dst_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____time_error_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____time_error_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____time_t_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____time_t_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____time_t_rep_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____time_t_rep_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____tm_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____tm_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__time____Unify____tms_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2);

static void MR_CALL 
mercury__time____Compare____tms_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3);

static MR_Integer MR_CALL 
mercury__time__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__time__construct_time_t_1_f_0(
  MR_Box mercury__time__T_3);

static MR_String MR_CALL 
mercury__time__mon_name_1_f_0(
  MR_Integer mercury__time__N_3);

static MR_String MR_CALL 
mercury__time__wday_name_1_f_0(
  MR_Integer mercury__time__N_3);

static MR_Integer MR_CALL 
mercury__time__c_clk_tck_0_f_0(void);


static /* final */ const MR_Box mercury__time_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__time_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__time_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__time_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__time_scalar_common_5[3][1];


/* sealed */ struct mercury__time__vector_common_type_6_0_s {
  const MR_String mercury__time__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct mercury__time__vector_common_type_6_0_s mercury__time_vector_common_6[19];



static /* final */ const MR_Box mercury__time_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__time__time__type_ctor_info_dst_0))
  },
};

static /* final */ const MR_Box mercury__time_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__time_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__time_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__time_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__time_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__time_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__time_scalar_common_5[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct mercury__time__vector_common_type_6_0_s mercury__time_vector_common_6[19] = {
  /* row 0 */   {     (MR_String) "Sun" },
  /* row 1 */   {     (MR_String) "Mon" },
  /* row 2 */   {     (MR_String) "Tue" },
  /* row 3 */   {     (MR_String) "Wed" },
  /* row 4 */   {     (MR_String) "Thu" },
  /* row 5 */   {     (MR_String) "Fri" },
  /* row 6 */   {     (MR_String) "Sat" },
  /* row 7 */   {     (MR_String) "Jan" },
  /* row 8 */   {     (MR_String) "Feb" },
  /* row 9 */   {     (MR_String) "Mar" },
  /* row 10 */   {     (MR_String) "Apr" },
  /* row 11 */   {     (MR_String) "May" },
  /* row 12 */   {     (MR_String) "Jun" },
  /* row 13 */   {     (MR_String) "Jul" },
  /* row 14 */   {     (MR_String) "Aug" },
  /* row 15 */   {     (MR_String) "Sep" },
  /* row 16 */   {     (MR_String) "Oct" },
  /* row 17 */   {     (MR_String) "Nov" },
  /* row 18 */   {     (MR_String) "Dec" },
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
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"

#line 1052 "time.m"
MR_Word 
ML_construct_time_t(
  time_t mercury__time__T_3)
#line 1052 "time.m"
{
#line 1052 "time.m"
	MR_Box mercury__time__boxed_T_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, mercury__time__T_3, mercury__time__boxed_T_3);
	ret_value = (MR_Word)mercury__time__construct_time_t_1_f_0(mercury__time__boxed_T_3);
	return ret_value;
}


const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_clock_t_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__time____Unify____clock_t_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____clock_t_0_0_10001)),
  (MR_String) "time",
  (MR_String) "clock_t",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_0 = {
  (MR_String) "standard_time",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_1 = {
  (MR_String) "daylight_time",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__time__time__enum_value_ordered_dst_0[2] = {
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__time____Unify____dst_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____dst_0_0_10001)),
  (MR_String) "time",
  (MR_String) "dst",
  {     mercury__time__time__enum_name_ordered_dst_0 },
  {     mercury__time__time__enum_value_ordered_dst_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__time__time__functor_number_map_dst_0
};

static const MR_Integer mercury__time__time__functor_number_map_time_error_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_error_0 = {
  (MR_String) "time_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_time_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__time____Unify____time_error_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____time_error_0_0_10001)),
  (MR_String) "time",
  (MR_String) "time_error",
  {     &mercury__time__time__notag_functor_desc_time_error_0 },
  {     &mercury__time__time__notag_functor_desc_time_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__time__time__functor_number_map_time_error_0
};

static const MR_Integer mercury__time__time__functor_number_map_time_t_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_t_0 = {
  (MR_String) "time_t",
  (MR_PseudoTypeInfo) &mercury__time__time__type_ctor_info_time_t_rep_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_time_t_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__time____Unify____time_t_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____time_t_0_0_10001)),
  (MR_String) "time",
  (MR_String) "time_t",
  {     &mercury__time__time__notag_functor_desc_time_t_0 },
  {     &mercury__time__time__notag_functor_desc_time_t_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__time__time__functor_number_map_time_t_0
};

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_time_t_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__time____Unify____time_t_rep_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____time_t_rep_0_0_10001)),
  (MR_String) "time",
  (MR_String) "time_t_rep",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mercury__time__maybe__ti_maybe_1time__type_ctor_info_dst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__time__time__type_ctor_info_dst_0
  }
};

static const MR_PseudoTypeInfo mercury__time__time__field_types_tm_0_0[9] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__time__maybe__ti_maybe_1time__type_ctor_info_dst_0
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
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__time__time__field_types_tm_0_0,
  mercury__time__time__field_names_tm_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tm_0_0[1] = {
  &mercury__time__time__du_functor_desc_tm_0_0
};

static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tm_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__time__time__du_stag_ordered_tm_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tm_0[1] = {
  &mercury__time__time__du_functor_desc_tm_0_0
};

static const MR_Integer mercury__time__time__functor_number_map_tm_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_tm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__time____Unify____tm_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____tm_0_0_10001)),
  (MR_String) "time",
  (MR_String) "tm",
  {     mercury__time__time__du_name_ordered_tm_0 },
  {     mercury__time__time__du_ptag_ordered_tm_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__time__time__functor_number_map_tm_0
};

static const MR_PseudoTypeInfo mercury__time__time__field_types_tms_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__time__time__du_functor_desc_tms_0_0 = {
  (MR_String) "tms",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__time__time__field_types_tms_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tms_0_0[1] = {
  &mercury__time__time__du_functor_desc_tms_0_0
};

static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tms_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__time__time__du_stag_ordered_tms_0_0
  }
};

static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tms_0[1] = {
  &mercury__time__time__du_functor_desc_tms_0_0
};

static const MR_Integer mercury__time__time__functor_number_map_tms_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_tms_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__time____Unify____tms_0_0_10001)),
  ((MR_Box) (mercury__time____Compare____tms_0_0_10001)),
  (MR_String) "time",
  (MR_String) "tms",
  {     mercury__time__time__du_name_ordered_tms_0 },
  {     mercury__time__time__du_ptag_ordered_tms_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__time__time__functor_number_map_tms_0
};

static MR_bool MR_CALL 
mercury__time____Unify____clock_t_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2)
{
  {
    MR_bool mercury__time__succeeded;

    {
      mercury__time__succeeded = mercury__time____Unify____clock_t_0_0(((MR_Integer) mercury__time__wrapper_arg_1), ((MR_Integer) mercury__time__wrapper_arg_2));
    }
    return mercury__time__succeeded;
  }
}

static void MR_CALL 
mercury__time____Compare____clock_t_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3)
{
  {
    MR_Word mercury__time__conv0_HeadVar__1_1;

    {
      mercury__time____Compare____clock_t_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Integer) mercury__time__wrapper_arg_2), ((MR_Integer) mercury__time__wrapper_arg_3));
    }
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__time____Unify____dst_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2)
{
  {
    MR_bool mercury__time__succeeded;

    {
      mercury__time__succeeded = mercury__time____Unify____dst_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
    return mercury__time__succeeded;
  }
}

static void MR_CALL 
mercury__time____Compare____dst_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3)
{
  {
    MR_Word mercury__time__conv0_HeadVar__1_1;

    {
      mercury__time____Compare____dst_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__time____Unify____time_error_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2)
{
  {
    MR_bool mercury__time__succeeded;

    {
      mercury__time__succeeded = mercury__time____Unify____time_error_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
    return mercury__time__succeeded;
  }
}

static void MR_CALL 
mercury__time____Compare____time_error_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3)
{
  {
    MR_Word mercury__time__conv0_HeadVar__1_1;

    {
      mercury__time____Compare____time_error_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__time____Unify____time_t_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2)
{
  {
    MR_bool mercury__time__succeeded;

    {
      mercury__time__succeeded = mercury__time____Unify____time_t_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
    return mercury__time__succeeded;
  }
}

static void MR_CALL 
mercury__time____Compare____time_t_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3)
{
  {
    MR_Word mercury__time__conv0_HeadVar__1_1;

    {
      mercury__time____Compare____time_t_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__time____Unify____time_t_rep_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2)
{
  {
    MR_bool mercury__time__succeeded;

    {
      mercury__time__succeeded = mercury__time____Unify____time_t_rep_0_0(((MR_Box) mercury__time__wrapper_arg_1), ((MR_Box) mercury__time__wrapper_arg_2));
    }
    return mercury__time__succeeded;
  }
}

static void MR_CALL 
mercury__time____Compare____time_t_rep_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3)
{
  {
    MR_Word mercury__time__conv0_HeadVar__1_1;

    {
      mercury__time____Compare____time_t_rep_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Box) mercury__time__wrapper_arg_2), ((MR_Box) mercury__time__wrapper_arg_3));
    }
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__time____Unify____tm_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2)
{
  {
    MR_bool mercury__time__succeeded;

    {
      mercury__time__succeeded = mercury__time____Unify____tm_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
    return mercury__time__succeeded;
  }
}

static void MR_CALL 
mercury__time____Compare____tm_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3)
{
  {
    MR_Word mercury__time__conv0_HeadVar__1_1;

    {
      mercury__time____Compare____tm_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__time____Unify____tms_0_0_10001(
  MR_Box mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2)
{
  {
    MR_bool mercury__time__succeeded;

    {
      mercury__time__succeeded = mercury__time____Unify____tms_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
    return mercury__time__succeeded;
  }
}

static void MR_CALL 
mercury__time____Compare____tms_0_0_10001(
  MR_Box * mercury__time__wrapper_arg_1,
  MR_Box mercury__time__wrapper_arg_2,
  MR_Box mercury__time__wrapper_arg_3)
{
  {
    MR_Word mercury__time__conv0_HeadVar__1_1;

    {
      mercury__time____Compare____tms_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__time__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__time__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__time____Compare____tms_0_0(
  MR_Word * mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2,
  MR_Word mercury__time__HeadVar__3_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_15 = (MR_Integer) mercury__time__HeadVar__2_2;
    MR_Integer mercury__time__CastY_16 = (MR_Integer) mercury__time__HeadVar__3_3;

    mercury__time__succeeded = (mercury__time__CastX_15 == mercury__time__CastY_16);
    if (mercury__time__succeeded)
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__time__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__time__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__time__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__time__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mercury__time__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__time__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mercury__time__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer mercury__time__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__time__V_12_12;

        mercury__time__succeeded = (mercury__time__V_4_4 < mercury__time__V_8_8);
        if (mercury__time__succeeded)
          mercury__time__V_12_12 = (MR_Integer) 1;
        else
          {
            mercury__time__succeeded = (mercury__time__V_4_4 == mercury__time__V_8_8);
            if (mercury__time__succeeded)
              mercury__time__V_12_12 = (MR_Integer) 0;
            else
              mercury__time__V_12_12 = (MR_Integer) 2;
          }
        mercury__time__succeeded = (mercury__time__V_12_12 == (MR_Integer) 0);
        mercury__time__succeeded = !(mercury__time__succeeded);
        if (mercury__time__succeeded)
          *mercury__time__HeadVar__1_1 = mercury__time__V_12_12;
        else
          {
            MR_Word mercury__time__V_13_13;

            mercury__time__succeeded = (mercury__time__V_5_5 < mercury__time__V_9_9);
            if (mercury__time__succeeded)
              mercury__time__V_13_13 = (MR_Integer) 1;
            else
              {
                mercury__time__succeeded = (mercury__time__V_5_5 == mercury__time__V_9_9);
                if (mercury__time__succeeded)
                  mercury__time__V_13_13 = (MR_Integer) 0;
                else
                  mercury__time__V_13_13 = (MR_Integer) 2;
              }
            mercury__time__succeeded = (mercury__time__V_13_13 == (MR_Integer) 0);
            mercury__time__succeeded = !(mercury__time__succeeded);
            if (mercury__time__succeeded)
              *mercury__time__HeadVar__1_1 = mercury__time__V_13_13;
            else
              {
                MR_Word mercury__time__V_14_14;

                mercury__time__succeeded = (mercury__time__V_6_6 < mercury__time__V_10_10);
                if (mercury__time__succeeded)
                  mercury__time__V_14_14 = (MR_Integer) 1;
                else
                  {
                    mercury__time__succeeded = (mercury__time__V_6_6 == mercury__time__V_10_10);
                    if (mercury__time__succeeded)
                      mercury__time__V_14_14 = (MR_Integer) 0;
                    else
                      mercury__time__V_14_14 = (MR_Integer) 2;
                  }
                mercury__time__succeeded = (mercury__time__V_14_14 == (MR_Integer) 0);
                mercury__time__succeeded = !(mercury__time__succeeded);
                if (mercury__time__succeeded)
                  *mercury__time__HeadVar__1_1 = mercury__time__V_14_14;
                else
                  {
                    mercury__time__succeeded = (mercury__time__V_7_7 < mercury__time__V_11_11);
                    if (mercury__time__succeeded)
                      *mercury__time__HeadVar__1_1 = (MR_Integer) 1;
                    else
                      {
                        mercury__time__succeeded = (mercury__time__V_7_7 == mercury__time__V_11_11);
                        if (mercury__time__succeeded)
                          *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
                        else
                          *mercury__time__HeadVar__1_1 = (MR_Integer) 2;
                      }
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__time____Unify____tms_0_0(
  MR_Word mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_11 = (MR_Integer) mercury__time__HeadVar__1_1;
    MR_Integer mercury__time__CastY_12 = (MR_Integer) mercury__time__HeadVar__2_2;

    mercury__time__succeeded = (mercury__time__CastX_11 == mercury__time__CastY_12);
    if (mercury__time__succeeded)
      mercury__time__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__time__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__time__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__time__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mercury__time__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer mercury__time__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__time__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__time__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__time__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 3)));

        mercury__time__succeeded = (mercury__time__V_3_3 == mercury__time__V_7_7);
        if (mercury__time__succeeded)
          {
            mercury__time__succeeded = (mercury__time__V_4_4 == mercury__time__V_8_8);
            if (mercury__time__succeeded)
              {
                mercury__time__succeeded = (mercury__time__V_5_5 == mercury__time__V_9_9);
                if (mercury__time__succeeded)
                  mercury__time__succeeded = (mercury__time__V_6_6 == mercury__time__V_10_10);
              }
          }
      }
    return mercury__time__succeeded;
  }
}

void MR_CALL 
mercury__time____Compare____tm_0_0(
  MR_Word * mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2,
  MR_Word mercury__time__HeadVar__3_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_30 = (MR_Integer) mercury__time__HeadVar__2_2;
    MR_Integer mercury__time__CastY_31 = (MR_Integer) mercury__time__HeadVar__3_3;

    mercury__time__succeeded = (mercury__time__CastX_30 == mercury__time__CastY_31);
    if (mercury__time__succeeded)
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__time__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__time__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__time__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__time__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mercury__time__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer mercury__time__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer mercury__time__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer mercury__time__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word mercury__time__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 8)));
        MR_Integer mercury__time__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__time__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 1)));
        MR_Integer mercury__time__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 2)));
        MR_Integer mercury__time__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 3)));
        MR_Integer mercury__time__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 4)));
        MR_Integer mercury__time__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 5)));
        MR_Integer mercury__time__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 6)));
        MR_Integer mercury__time__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 7)));
        MR_Word mercury__time__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 8)));
        MR_Word mercury__time__V_22_22;

        mercury__time__succeeded = (mercury__time__V_4_4 < mercury__time__V_13_13);
        if (mercury__time__succeeded)
          mercury__time__V_22_22 = (MR_Integer) 1;
        else
          {
            mercury__time__succeeded = (mercury__time__V_4_4 == mercury__time__V_13_13);
            if (mercury__time__succeeded)
              mercury__time__V_22_22 = (MR_Integer) 0;
            else
              mercury__time__V_22_22 = (MR_Integer) 2;
          }
        mercury__time__succeeded = (mercury__time__V_22_22 == (MR_Integer) 0);
        mercury__time__succeeded = !(mercury__time__succeeded);
        if (mercury__time__succeeded)
          *mercury__time__HeadVar__1_1 = mercury__time__V_22_22;
        else
          {
            MR_Word mercury__time__V_23_23;

            mercury__time__succeeded = (mercury__time__V_5_5 < mercury__time__V_14_14);
            if (mercury__time__succeeded)
              mercury__time__V_23_23 = (MR_Integer) 1;
            else
              {
                mercury__time__succeeded = (mercury__time__V_5_5 == mercury__time__V_14_14);
                if (mercury__time__succeeded)
                  mercury__time__V_23_23 = (MR_Integer) 0;
                else
                  mercury__time__V_23_23 = (MR_Integer) 2;
              }
            mercury__time__succeeded = (mercury__time__V_23_23 == (MR_Integer) 0);
            mercury__time__succeeded = !(mercury__time__succeeded);
            if (mercury__time__succeeded)
              *mercury__time__HeadVar__1_1 = mercury__time__V_23_23;
            else
              {
                MR_Word mercury__time__V_24_24;

                mercury__time__succeeded = (mercury__time__V_6_6 < mercury__time__V_15_15);
                if (mercury__time__succeeded)
                  mercury__time__V_24_24 = (MR_Integer) 1;
                else
                  {
                    mercury__time__succeeded = (mercury__time__V_6_6 == mercury__time__V_15_15);
                    if (mercury__time__succeeded)
                      mercury__time__V_24_24 = (MR_Integer) 0;
                    else
                      mercury__time__V_24_24 = (MR_Integer) 2;
                  }
                mercury__time__succeeded = (mercury__time__V_24_24 == (MR_Integer) 0);
                mercury__time__succeeded = !(mercury__time__succeeded);
                if (mercury__time__succeeded)
                  *mercury__time__HeadVar__1_1 = mercury__time__V_24_24;
                else
                  {
                    MR_Word mercury__time__V_25_25;

                    mercury__time__succeeded = (mercury__time__V_7_7 < mercury__time__V_16_16);
                    if (mercury__time__succeeded)
                      mercury__time__V_25_25 = (MR_Integer) 1;
                    else
                      {
                        mercury__time__succeeded = (mercury__time__V_7_7 == mercury__time__V_16_16);
                        if (mercury__time__succeeded)
                          mercury__time__V_25_25 = (MR_Integer) 0;
                        else
                          mercury__time__V_25_25 = (MR_Integer) 2;
                      }
                    mercury__time__succeeded = (mercury__time__V_25_25 == (MR_Integer) 0);
                    mercury__time__succeeded = !(mercury__time__succeeded);
                    if (mercury__time__succeeded)
                      *mercury__time__HeadVar__1_1 = mercury__time__V_25_25;
                    else
                      {
                        MR_Word mercury__time__V_26_26;

                        mercury__time__succeeded = (mercury__time__V_8_8 < mercury__time__V_17_17);
                        if (mercury__time__succeeded)
                          mercury__time__V_26_26 = (MR_Integer) 1;
                        else
                          {
                            mercury__time__succeeded = (mercury__time__V_8_8 == mercury__time__V_17_17);
                            if (mercury__time__succeeded)
                              mercury__time__V_26_26 = (MR_Integer) 0;
                            else
                              mercury__time__V_26_26 = (MR_Integer) 2;
                          }
                        mercury__time__succeeded = (mercury__time__V_26_26 == (MR_Integer) 0);
                        mercury__time__succeeded = !(mercury__time__succeeded);
                        if (mercury__time__succeeded)
                          *mercury__time__HeadVar__1_1 = mercury__time__V_26_26;
                        else
                          {
                            MR_Word mercury__time__V_27_27;

                            mercury__time__succeeded = (mercury__time__V_9_9 < mercury__time__V_18_18);
                            if (mercury__time__succeeded)
                              mercury__time__V_27_27 = (MR_Integer) 1;
                            else
                              {
                                mercury__time__succeeded = (mercury__time__V_9_9 == mercury__time__V_18_18);
                                if (mercury__time__succeeded)
                                  mercury__time__V_27_27 = (MR_Integer) 0;
                                else
                                  mercury__time__V_27_27 = (MR_Integer) 2;
                              }
                            mercury__time__succeeded = (mercury__time__V_27_27 == (MR_Integer) 0);
                            mercury__time__succeeded = !(mercury__time__succeeded);
                            if (mercury__time__succeeded)
                              *mercury__time__HeadVar__1_1 = mercury__time__V_27_27;
                            else
                              {
                                MR_Word mercury__time__V_28_28;

                                mercury__time__succeeded = (mercury__time__V_10_10 < mercury__time__V_19_19);
                                if (mercury__time__succeeded)
                                  mercury__time__V_28_28 = (MR_Integer) 1;
                                else
                                  {
                                    mercury__time__succeeded = (mercury__time__V_10_10 == mercury__time__V_19_19);
                                    if (mercury__time__succeeded)
                                      mercury__time__V_28_28 = (MR_Integer) 0;
                                    else
                                      mercury__time__V_28_28 = (MR_Integer) 2;
                                  }
                                mercury__time__succeeded = (mercury__time__V_28_28 == (MR_Integer) 0);
                                mercury__time__succeeded = !(mercury__time__succeeded);
                                if (mercury__time__succeeded)
                                  *mercury__time__HeadVar__1_1 = mercury__time__V_28_28;
                                else
                                  {
                                    MR_Word mercury__time__V_29_29;

                                    mercury__time__succeeded = (mercury__time__V_11_11 < mercury__time__V_20_20);
                                    if (mercury__time__succeeded)
                                      mercury__time__V_29_29 = (MR_Integer) 1;
                                    else
                                      {
                                        mercury__time__succeeded = (mercury__time__V_11_11 == mercury__time__V_20_20);
                                        if (mercury__time__succeeded)
                                          mercury__time__V_29_29 = (MR_Integer) 0;
                                        else
                                          mercury__time__V_29_29 = (MR_Integer) 2;
                                      }
                                    mercury__time__succeeded = (mercury__time__V_29_29 == (MR_Integer) 0);
                                    mercury__time__succeeded = !(mercury__time__succeeded);
                                    if (mercury__time__succeeded)
                                      *mercury__time__HeadVar__1_1 = mercury__time__V_29_29;
                                    else
                                      {
                                        MR_Word mercury__time__TypeInfo_40_40 = (MR_Word) &mercury__time_scalar_common_1[0];

                                        {
                                          mercury__builtin__compare_3_p_0(mercury__time__TypeInfo_40_40, mercury__time__HeadVar__1_1, ((MR_Box) (mercury__time__V_12_12)), ((MR_Box) (mercury__time__V_21_21)));
                                        }
                                      }
                                  }
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
  MR_Word mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_21 = (MR_Integer) mercury__time__HeadVar__1_1;
    MR_Integer mercury__time__CastY_22 = (MR_Integer) mercury__time__HeadVar__2_2;

    mercury__time__succeeded = (mercury__time__CastX_21 == mercury__time__CastY_22);
    if (mercury__time__succeeded)
      mercury__time__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__time__TypeInfo_23_23;
        MR_Integer mercury__time__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__time__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__time__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mercury__time__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 3)));
        MR_Integer mercury__time__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 4)));
        MR_Integer mercury__time__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 5)));
        MR_Integer mercury__time__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 6)));
        MR_Integer mercury__time__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 7)));
        MR_Word mercury__time__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 8)));
        MR_Integer mercury__time__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__time__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__time__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mercury__time__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mercury__time__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 4)));
        MR_Integer mercury__time__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 5)));
        MR_Integer mercury__time__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 6)));
        MR_Integer mercury__time__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 7)));
        MR_Word mercury__time__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 8)));

        mercury__time__succeeded = (mercury__time__V_3_3 == mercury__time__V_12_12);
        if (mercury__time__succeeded)
          {
            mercury__time__succeeded = (mercury__time__V_4_4 == mercury__time__V_13_13);
            if (mercury__time__succeeded)
              {
                mercury__time__succeeded = (mercury__time__V_5_5 == mercury__time__V_14_14);
                if (mercury__time__succeeded)
                  {
                    mercury__time__succeeded = (mercury__time__V_6_6 == mercury__time__V_15_15);
                    if (mercury__time__succeeded)
                      {
                        mercury__time__succeeded = (mercury__time__V_7_7 == mercury__time__V_16_16);
                        if (mercury__time__succeeded)
                          {
                            mercury__time__succeeded = (mercury__time__V_8_8 == mercury__time__V_17_17);
                            if (mercury__time__succeeded)
                              {
                                mercury__time__succeeded = (mercury__time__V_9_9 == mercury__time__V_18_18);
                                if (mercury__time__succeeded)
                                  {
                                    mercury__time__succeeded = (mercury__time__V_10_10 == mercury__time__V_19_19);
                                    if (mercury__time__succeeded)
                                      {
                                        mercury__time__TypeInfo_23_23 = (MR_Word) &mercury__time_scalar_common_1[0];
                                        {
                                          mercury__time__succeeded = mercury__builtin__unify_2_p_0(mercury__time__TypeInfo_23_23, ((MR_Box) (mercury__time__V_11_11)), ((MR_Box) (mercury__time__V_20_20)));
                                        }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return mercury__time__succeeded;
  }
}

void MR_CALL 
mercury__time____Compare____time_t_rep_0_0(
  MR_Word * mercury__time__HeadVar__1_1,
  MR_Box mercury__time__HeadVar__2_2,
  MR_Box mercury__time__HeadVar__3_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_4 = (MR_Integer) mercury__time__HeadVar__2_2;
    MR_Integer mercury__time__CastY_5 = (MR_Integer) mercury__time__HeadVar__3_3;

    mercury__time__succeeded = (mercury__time__CastX_4 == mercury__time__CastY_5);
    if (mercury__time__succeeded)
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        mercury__time__compare_time_t_reps_3_p_0(mercury__time__HeadVar__1_1, mercury__time__HeadVar__2_2, mercury__time__HeadVar__3_3);
      }
  }
}

MR_bool MR_CALL 
mercury__time____Unify____time_t_rep_0_0(
  MR_Box mercury__time__HeadVar__1_1,
  MR_Box mercury__time__HeadVar__2_2)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_4 = (MR_Integer) mercury__time__HeadVar__1_1;
    MR_Integer mercury__time__CastY_5 = (MR_Integer) mercury__time__HeadVar__2_2;

    mercury__time__succeeded = (mercury__time__CastX_4 == mercury__time__CastY_5);
    if (mercury__time__succeeded)
      mercury__time__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__time__V_3_3;

        {
          mercury__time__compare_time_t_reps_3_p_0(&mercury__time__V_3_3, mercury__time__HeadVar__1_1, mercury__time__HeadVar__2_2);
        }
        mercury__time__succeeded = (mercury__time__V_3_3 == (MR_Integer) 0);
      }
    return mercury__time__succeeded;
  }
}

void MR_CALL 
mercury__time____Compare____time_t_0_0(
  MR_Word * mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2,
  MR_Word mercury__time__HeadVar__3_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_6 = (MR_Integer) mercury__time__HeadVar__2_2;
    MR_Integer mercury__time__CastY_7 = (MR_Integer) mercury__time__HeadVar__3_3;

    mercury__time__succeeded = (mercury__time__CastX_6 == mercury__time__CastY_7);
    if (mercury__time__succeeded)
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__time__V_4_4 = (MR_Box) mercury__time__HeadVar__2_2;
        MR_Box mercury__time__V_5_5 = (MR_Box) mercury__time__HeadVar__3_3;
        MR_Integer mercury__time__CastX_9 = (MR_Integer) mercury__time__V_4_4;
        MR_Integer mercury__time__CastY_10 = (MR_Integer) mercury__time__V_5_5;

        mercury__time__succeeded = (mercury__time__CastX_9 == mercury__time__CastY_10);
        if (mercury__time__succeeded)
          *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
        else
          {
            mercury__time__compare_time_t_reps_3_p_0(mercury__time__HeadVar__1_1, mercury__time__V_4_4, mercury__time__V_5_5);
          }
      }
  }
}

MR_bool MR_CALL 
mercury__time____Unify____time_t_0_0(
  MR_Word mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_5 = (MR_Integer) mercury__time__HeadVar__1_1;
    MR_Integer mercury__time__CastY_6 = (MR_Integer) mercury__time__HeadVar__2_2;

    mercury__time__succeeded = (mercury__time__CastX_5 == mercury__time__CastY_6);
    if (mercury__time__succeeded)
      mercury__time__succeeded = MR_TRUE;
    else
      {
        MR_Box mercury__time__V_3_3 = (MR_Box) mercury__time__HeadVar__1_1;
        MR_Box mercury__time__V_4_4 = (MR_Box) mercury__time__HeadVar__2_2;
        MR_Integer mercury__time__CastX_8 = (MR_Integer) mercury__time__V_3_3;
        MR_Integer mercury__time__CastY_9 = (MR_Integer) mercury__time__V_4_4;

        mercury__time__succeeded = (mercury__time__CastX_8 == mercury__time__CastY_9);
        if (mercury__time__succeeded)
          mercury__time__succeeded = MR_TRUE;
        else
          {
            MR_Word mercury__time__V_7_7;

            {
              mercury__time__compare_time_t_reps_3_p_0(&mercury__time__V_7_7, mercury__time__V_3_3, mercury__time__V_4_4);
            }
            mercury__time__succeeded = (mercury__time__V_7_7 == (MR_Integer) 0);
          }
      }
    return mercury__time__succeeded;
  }
}

void MR_CALL 
mercury__time____Compare____time_error_0_0(
  MR_Word * mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2,
  MR_Word mercury__time__HeadVar__3_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_6 = (MR_Integer) mercury__time__HeadVar__2_2;
    MR_Integer mercury__time__CastY_7 = (MR_Integer) mercury__time__HeadVar__3_3;

    mercury__time__succeeded = (mercury__time__CastX_6 == mercury__time__CastY_7);
    if (mercury__time__succeeded)
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mercury__time__V_4_4 = (MR_String) mercury__time__HeadVar__2_2;
        MR_String mercury__time__V_5_5 = (MR_String) mercury__time__HeadVar__3_3;
        MR_Integer mercury__time__V_7_12;

{
#define MR_PROC_LABEL mercury__time____Compare____time_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__time__V_4_4 ;
	S2 =  mercury__time__V_5_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__time__V_7_12  = Res;
}
        mercury__time__succeeded = (mercury__time__V_7_12 < (MR_Integer) 0);
        if (mercury__time__succeeded)
          *mercury__time__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__time__succeeded = (mercury__time__V_7_12 == (MR_Integer) 0);
            if (mercury__time__succeeded)
              *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__time__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__time____Unify____time_error_0_0(
  MR_Word mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__CastX_5 = (MR_Integer) mercury__time__HeadVar__1_1;
    MR_Integer mercury__time__CastY_6 = (MR_Integer) mercury__time__HeadVar__2_2;

    mercury__time__succeeded = (mercury__time__CastX_5 == mercury__time__CastY_6);
    if (mercury__time__succeeded)
      mercury__time__succeeded = MR_TRUE;
    else
      {
        MR_String mercury__time__V_3_3 = (MR_String) mercury__time__HeadVar__1_1;
        MR_String mercury__time__V_4_4 = (MR_String) mercury__time__HeadVar__2_2;

        mercury__time__succeeded = (strcmp(mercury__time__V_3_3, mercury__time__V_4_4) == 0);
      }
    return mercury__time__succeeded;
  }
}

void MR_CALL 
mercury__time____Compare____dst_0_0(
  MR_Word * mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2,
  MR_Word mercury__time__HeadVar__3_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__Cast_HeadVar1_4 = (MR_Integer) mercury__time__HeadVar__2_2;
    MR_Integer mercury__time__Cast_HeadVar2_5 = (MR_Integer) mercury__time__HeadVar__3_3;

    mercury__time__succeeded = (mercury__time__Cast_HeadVar1_4 < mercury__time__Cast_HeadVar2_5);
    if (mercury__time__succeeded)
      *mercury__time__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__time__succeeded = (mercury__time__Cast_HeadVar1_4 == mercury__time__Cast_HeadVar2_5);
        if (mercury__time__succeeded)
          *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__time__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__time____Unify____dst_0_0(
  MR_Word mercury__time__HeadVar__2_1,
  MR_Word mercury__time__HeadVar__2_2)
{
  {
    MR_bool mercury__time__succeeded = (mercury__time__HeadVar__2_1 == mercury__time__HeadVar__2_2);

    return mercury__time__succeeded;
  }
}

void MR_CALL 
mercury__time____Compare____clock_t_0_0(
  MR_Word * mercury__time__HeadVar__1_1,
  MR_Integer mercury__time__HeadVar__2_2,
  MR_Integer mercury__time__HeadVar__3_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__Cast_HeadVar1_4 = mercury__time__HeadVar__2_2;
    MR_Integer mercury__time__Cast_HeadVar2_5 = mercury__time__HeadVar__3_3;

    mercury__time__succeeded = (mercury__time__Cast_HeadVar1_4 < mercury__time__Cast_HeadVar2_5);
    if (mercury__time__succeeded)
      *mercury__time__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__time__succeeded = (mercury__time__Cast_HeadVar1_4 == mercury__time__Cast_HeadVar2_5);
        if (mercury__time__succeeded)
          *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__time__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__time____Unify____clock_t_0_0(
  MR_Integer mercury__time__HeadVar__1_1,
  MR_Integer mercury__time__HeadVar__2_2)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__Cast_HeadVar1_3 = mercury__time__HeadVar__1_1;
    MR_Integer mercury__time__Cast_HeadVar2_4 = mercury__time__HeadVar__2_2;

    mercury__time__succeeded = (mercury__time__Cast_HeadVar1_3 == mercury__time__Cast_HeadVar2_4);
    return mercury__time__succeeded;
  }
}

static MR_Word MR_CALL 
mercury__time__construct_time_t_1_f_0(
  MR_Box mercury__time__T_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Word mercury__time__HeadVar__2_2 = (MR_Word) mercury__time__T_3;

    return mercury__time__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
mercury__time__mon_name_1_f_0(
  MR_Integer mercury__time__N_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_String mercury__time__Name_4;
    MR_String mercury__time__Name0_5;

    if ((((MR_Unsigned) mercury__time__N_3) <= ((MR_Unsigned) (MR_Integer) 11)))
      {
        mercury__time__Name0_5 = ((&mercury__time_vector_common_6[7 + mercury__time__N_3]))->mercury__time__vector_common_type_6_0__vct_6_f_0;
        mercury__time__succeeded = MR_TRUE;
      }
    else
      mercury__time__succeeded = MR_FALSE;
    if (mercury__time__succeeded)
      mercury__time__Name_4 = mercury__time__Name0_5;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "time: mon_name");
        }
      }
    return mercury__time__Name_4;
  }
}

static MR_String MR_CALL 
mercury__time__wday_name_1_f_0(
  MR_Integer mercury__time__N_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_String mercury__time__Name_4;
    MR_String mercury__time__Name0_5;

    if ((((MR_Unsigned) mercury__time__N_3) <= ((MR_Unsigned) (MR_Integer) 6)))
      {
        mercury__time__Name0_5 = ((&mercury__time_vector_common_6[0 + mercury__time__N_3]))->mercury__time__vector_common_type_6_0__vct_6_f_0;
        mercury__time__succeeded = MR_TRUE;
      }
    else
      mercury__time__succeeded = MR_FALSE;
    if (mercury__time__succeeded)
      mercury__time__Name_4 = mercury__time__Name0_5;
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "time: wday_name");
        }
      }
    return mercury__time__Name_4;
  }
}

MR_Integer MR_CALL 
mercury__time__maybe_dst_to_int_1_f_0(
  MR_Word mercury__time__M_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__N_4;

    if ((mercury__time__M_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__time__N_4 = (MR_Integer) -1;
    else
      {
        MR_Word mercury__time__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__time__M_3, (MR_Integer) 0)));

        switch (mercury__time__V_7_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__time__N_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            mercury__time__N_4 = (MR_Integer) 0;
            break;
        }
      }
    return mercury__time__N_4;
  }
}

void MR_CALL 
mercury__time__c_mktime_10_p_0(
  MR_Integer mercury__time__Yr_1,
  MR_Integer mercury__time__Mnt_2,
  MR_Integer mercury__time__MD_3,
  MR_Integer mercury__time__Hrs_4,
  MR_Integer mercury__time__Min_5,
  MR_Integer mercury__time__Sec_6,
  MR_Integer mercury__time__YD_7,
  MR_Integer mercury__time__WD_8,
  MR_Integer mercury__time__N_9,
  MR_Box * mercury__time__Time_10)
{
  {
    MR_bool mercury__time__succeeded;

{
#define MR_PROC_LABEL mercury__time__c_mktime_10_p_0

	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	time_t Time;

	Yr =  mercury__time__Yr_1 ;
	Mnt =  mercury__time__Mnt_2 ;
	MD =  mercury__time__MD_3 ;
	Hrs =  mercury__time__Hrs_4 ;
	Min =  mercury__time__Min_5 ;
	Sec =  mercury__time__Sec_6 ;
	YD =  mercury__time__YD_7 ;
	WD =  mercury__time__WD_8 ;
	N =  mercury__time__N_9 ;
		{
{
    struct tm t;

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
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Time, *mercury__time__Time_10 );
}
  }
}

MR_Word MR_CALL 
mercury__time__int_to_maybe_dst_1_f_0(
  MR_Integer mercury__time__N_3)
{
  {
    MR_bool mercury__time__succeeded = (mercury__time__N_3 == (MR_Integer) 0);
    MR_Word mercury__time__DST_4;

    if (mercury__time__succeeded)
      {
        mercury__time__DST_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__time_scalar_common_5[1]);
      }
    else
      {
        mercury__time__succeeded = (mercury__time__N_3 > (MR_Integer) 0);
        if (mercury__time__succeeded)
          {
            mercury__time__DST_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__time_scalar_common_5[2]);
          }
        else
          mercury__time__DST_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    return mercury__time__DST_4;
  }
}

void MR_CALL 
mercury__time__c_gmtime_10_p_0(
  MR_Box mercury__time__Time_1,
  MR_Integer * mercury__time__Yr_2,
  MR_Integer * mercury__time__Mnt_3,
  MR_Integer * mercury__time__MD_4,
  MR_Integer * mercury__time__Hrs_5,
  MR_Integer * mercury__time__Min_6,
  MR_Integer * mercury__time__Sec_7,
  MR_Integer * mercury__time__YD_8,
  MR_Integer * mercury__time__WD_9,
  MR_Integer * mercury__time__N_10)
{
  {
    MR_bool mercury__time__succeeded;

{
#define MR_PROC_LABEL mercury__time__c_gmtime_10_p_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Time_1 , Time);
		{
{
    struct tm   *p;
    time_t      t;

    t = Time;

    p = gmtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;
}

		;}
#undef MR_PROC_LABEL
	 *mercury__time__Yr_2  = Yr;
	 *mercury__time__Mnt_3  = Mnt;
	 *mercury__time__MD_4  = MD;
	 *mercury__time__Hrs_5  = Hrs;
	 *mercury__time__Min_6  = Min;
	 *mercury__time__Sec_7  = Sec;
	 *mercury__time__YD_8  = YD;
	 *mercury__time__WD_9  = WD;
	 *mercury__time__N_10  = N;
}
  }
}

void MR_CALL 
mercury__time__c_localtime_10_p_0(
  MR_Box mercury__time__Time_1,
  MR_Integer * mercury__time__Yr_2,
  MR_Integer * mercury__time__Mnt_3,
  MR_Integer * mercury__time__MD_4,
  MR_Integer * mercury__time__Hrs_5,
  MR_Integer * mercury__time__Min_6,
  MR_Integer * mercury__time__Sec_7,
  MR_Integer * mercury__time__YD_8,
  MR_Integer * mercury__time__WD_9,
  MR_Integer * mercury__time__N_10)
{
  {
    MR_bool mercury__time__succeeded;

{
#define MR_PROC_LABEL mercury__time__c_localtime_10_p_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Time_1 , Time);
		{

    struct tm   *p;
    time_t      t;

    t = Time;

    p = localtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;


		;}
#undef MR_PROC_LABEL
	 *mercury__time__Yr_2  = Yr;
	 *mercury__time__Mnt_3  = Mnt;
	 *mercury__time__MD_4  = MD;
	 *mercury__time__Hrs_5  = Hrs;
	 *mercury__time__Min_6  = Min;
	 *mercury__time__Sec_7  = Sec;
	 *mercury__time__YD_8  = YD;
	 *mercury__time__WD_9  = WD;
	 *mercury__time__N_10  = N;
}
  }
}

void MR_CALL 
mercury__time__c_difftime_3_p_0(
  MR_Box mercury__time__T1_1,
  MR_Box mercury__time__T0_2,
  MR_Float * mercury__time__Diff_3)
{
  {
    MR_bool mercury__time__succeeded;

{
#define MR_PROC_LABEL mercury__time__c_difftime_3_p_0

	time_t T1;
	time_t T0;
	MR_Float Diff;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__T1_1 , T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__T0_2 , T0);
		{

    Diff = (MR_Float) difftime(T1, T0);


		;}
#undef MR_PROC_LABEL
	 *mercury__time__Diff_3  = Diff;
}
  }
}

MR_bool MR_CALL 
mercury__time__time_t_is_invalid_1_p_0(
  MR_Box mercury__time__Val_1)
{
  {
    MR_bool mercury__time__succeeded;

{
#define MR_PROC_LABEL mercury__time__time_t_is_invalid_1_p_0

	time_t Val;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Val_1 , Val);
		{

    SUCCESS_INDICATOR = (Val == -1);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__time__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__time__succeeded;
  }
}

void MR_CALL 
mercury__time__c_time_3_p_0(
  MR_Box * mercury__time__Ret_1)
{
  {
    MR_bool mercury__time__succeeded;

{
#define MR_PROC_LABEL mercury__time__c_time_3_p_0

	time_t Ret;

		{

    Ret = time(NULL);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Ret, *mercury__time__Ret_1 );
}
  }
}

static MR_Integer MR_CALL 
mercury__time__c_clk_tck_0_f_0(void)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__Ret_1;

{
#define MR_PROC_LABEL mercury__time__c_clk_tck_0_f_0

	MR_Integer Ret;

		{

#if defined(MR_CLOCK_TICKS_PER_SECOND)
    Ret = MR_CLOCK_TICKS_PER_SECOND;
#else
    Ret = -1;
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__time__Ret_1  = Ret;
}
    return mercury__time__Ret_1;
  }
}

void MR_CALL 
mercury__time__c_times_7_p_0(
  MR_Integer * mercury__time__Ret_1,
  MR_Integer * mercury__time__Ut_2,
  MR_Integer * mercury__time__St_3,
  MR_Integer * mercury__time__CUt_4,
  MR_Integer * mercury__time__CSt_5)
{
  {
    MR_bool mercury__time__succeeded;

{
#define MR_PROC_LABEL mercury__time__c_times_7_p_0

	MR_Integer Ret;
	MR_Integer Ut;
	MR_Integer St;
	MR_Integer CUt;
	MR_Integer CSt;

		{
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

        /* XXX Not sure how to return children times */
    CUt = 0;
    CSt = 0;
  #else
    Ret = -1;
  #endif
#endif
}

		;}
#undef MR_PROC_LABEL
	 *mercury__time__Ret_1  = Ret;
	 *mercury__time__Ut_2  = Ut;
	 *mercury__time__St_3  = St;
	 *mercury__time__CUt_4  = CUt;
	 *mercury__time__CSt_5  = CSt;
}
  }
}

void MR_CALL 
mercury__time__c_clock_3_p_0(
  MR_Integer * mercury__time__Ret_1)
{
  {
    MR_bool mercury__time__succeeded;

{
#define MR_PROC_LABEL mercury__time__c_clock_3_p_0

	MR_Integer Ret;

		{

    Ret = (MR_Integer) clock();


		;}
#undef MR_PROC_LABEL
	 *mercury__time__Ret_1  = Ret;
}
  }
}

void MR_CALL 
mercury__time__compare_time_t_reps_3_p_0(
  MR_Word * mercury__time__Result_4,
  MR_Box mercury__time__X_5,
  MR_Box mercury__time__Y_6)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Float mercury__time__V_7_7;

{
#define MR_PROC_LABEL mercury__time__compare_time_t_reps_3_p_0

	time_t T1;
	time_t T0;
	MR_Float Diff;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__X_5 , T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Y_6 , T0);
		{

    Diff = (MR_Float) difftime(T1, T0);


		;}
#undef MR_PROC_LABEL
	 mercury__time__V_7_7  = Diff;
}
    mercury__time__succeeded = (mercury__time__V_7_7 < ((MR_Float) 0.0000000000000000));
    if (mercury__time__succeeded)
      *mercury__time__Result_4 = (MR_Integer) 1;
    else
      {
        mercury__time__succeeded = (mercury__time__V_7_7 > ((MR_Float) 0.0000000000000000));
        if (mercury__time__succeeded)
          *mercury__time__Result_4 = (MR_Integer) 2;
        else
          *mercury__time__Result_4 = (MR_Integer) 0;
      }
  }
}

MR_String MR_CALL 
mercury__time__ctime_1_f_0(
  MR_Word mercury__time__Time_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_String mercury__time__HeadVar__2_2;
    MR_Word mercury__time__V_4_4;
    MR_Box mercury__time__Time_6 = (MR_Box) mercury__time__Time_3;
    MR_Integer mercury__time__Yr_7;
    MR_Integer mercury__time__Mnt_8;
    MR_Integer mercury__time__MD_9;
    MR_Integer mercury__time__Hrs_10;
    MR_Integer mercury__time__Min_11;
    MR_Integer mercury__time__Sec_12;
    MR_Integer mercury__time__YD_13;
    MR_Integer mercury__time__WD_14;
    MR_Integer mercury__time__N_15;
    MR_Word mercury__time__V_16_16;

{
#define MR_PROC_LABEL mercury__time__ctime_1_f_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Time_6 , Time);
		{

    struct tm   *p;
    time_t      t;

    t = Time;

    p = localtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;


		;}
#undef MR_PROC_LABEL
	 mercury__time__Yr_7  = Yr;
	 mercury__time__Mnt_8  = Mnt;
	 mercury__time__MD_9  = MD;
	 mercury__time__Hrs_10  = Hrs;
	 mercury__time__Min_11  = Min;
	 mercury__time__Sec_12  = Sec;
	 mercury__time__YD_13  = YD;
	 mercury__time__WD_14  = WD;
	 mercury__time__N_15  = N;
}
    {
      mercury__time__V_16_16 = mercury__time__int_to_maybe_dst_1_f_0(mercury__time__N_15);
    }
    {
      mercury__time__V_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 0) = ((MR_Box) (mercury__time__Yr_7));
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 1) = ((MR_Box) (mercury__time__Mnt_8));
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 2) = ((MR_Box) (mercury__time__MD_9));
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 3) = ((MR_Box) (mercury__time__Hrs_10));
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 4) = ((MR_Box) (mercury__time__Min_11));
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 5) = ((MR_Box) (mercury__time__Sec_12));
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 6) = ((MR_Box) (mercury__time__YD_13));
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 7) = ((MR_Box) (mercury__time__WD_14));
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 8) = ((MR_Box) (mercury__time__V_16_16));
    }
    {
      mercury__time__HeadVar__2_2 = mercury__time__asctime_1_f_0(mercury__time__V_4_4);
    }
    return mercury__time__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__time__asctime_1_f_0(
  MR_Word mercury__time__TM_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_String mercury__time__Str_4;
    MR_Integer mercury__time__Yr_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 0)));
    MR_Integer mercury__time__Mnt_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 1)));
    MR_Integer mercury__time__MD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 2)));
    MR_Integer mercury__time__Hrs_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 3)));
    MR_Integer mercury__time__Min_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 4)));
    MR_Integer mercury__time__Sec_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 5)));
    MR_Integer mercury__time__WD_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 7)));
    MR_String mercury__time__V_17_17;
    MR_String mercury__time__V_20_20;
    MR_Integer mercury__time__V_31_31;
    MR_String mercury__time__V_35_35;
    MR_Word mercury__time__V_41_41;
    MR_String mercury__time__V_42_42;
    MR_String mercury__time__V_44_44;
    MR_String mercury__time__V_45_45;
    MR_String mercury__time__V_53_53;
    MR_String mercury__time__V_55_55;
    MR_String mercury__time__V_56_56;
    MR_String mercury__time__V_64_64;
    MR_String mercury__time__V_66_66;
    MR_String mercury__time__V_67_67;
    MR_String mercury__time__V_75_75;
    MR_String mercury__time__V_77_77;
    MR_String mercury__time__V_78_78;
    MR_String mercury__time__V_86_86;
    MR_String mercury__time__V_87_87;
    MR_String mercury__time__V_95_95;
    MR_String mercury__time__V_97_97;
    MR_String mercury__time__V_98_98;
    MR_Integer mercury__time___YD_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 6)));
    MR_Word mercury__time___DST_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 8)));

    {
      mercury__time__V_17_17 = mercury__time__wday_name_1_f_0(mercury__time__WD_12);
    }
    {
      mercury__time__V_20_20 = mercury__time__mon_name_1_f_0(mercury__time__Mnt_6);
    }
    mercury__time__V_31_31 = ((MR_Integer) 1900 + mercury__time__Yr_5);
    mercury__time__V_41_41 = (MR_Word) &mercury__time_scalar_common_5[0];
    {
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__time__V_41_41, mercury__time__V_31_31, &mercury__time__V_35_35);
    }
    {
      mercury__time__V_42_42 = mercury__string__f_43_43_2_f_0(mercury__time__V_35_35, (MR_String) "\n");
    }
    {
      mercury__time__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__time__V_42_42);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 2, mercury__time__Sec_10, &mercury__time__V_45_45);
    }
    {
      mercury__time__V_53_53 = mercury__string__f_43_43_2_f_0(mercury__time__V_45_45, mercury__time__V_44_44);
    }
    {
      mercury__time__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__time__V_53_53);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 2, mercury__time__Min_9, &mercury__time__V_56_56);
    }
    {
      mercury__time__V_64_64 = mercury__string__f_43_43_2_f_0(mercury__time__V_56_56, mercury__time__V_55_55);
    }
    {
      mercury__time__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__time__V_64_64);
    }
    {
      mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 2, mercury__time__Hrs_8, &mercury__time__V_67_67);
    }
    {
      mercury__time__V_75_75 = mercury__string__f_43_43_2_f_0(mercury__time__V_67_67, mercury__time__V_66_66);
    }
    {
      mercury__time__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__time__V_75_75);
    }
    {
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__time__V_41_41, (MR_Integer) 3, mercury__time__MD_7, &mercury__time__V_78_78);
    }
    {
      mercury__time__V_86_86 = mercury__string__f_43_43_2_f_0(mercury__time__V_78_78, mercury__time__V_77_77);
    }
    {
      mercury__string__format__format_string_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 3, mercury__time__V_20_20, &mercury__time__V_87_87);
    }
    {
      mercury__time__V_95_95 = mercury__string__f_43_43_2_f_0(mercury__time__V_87_87, mercury__time__V_86_86);
    }
    {
      mercury__time__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__time__V_95_95);
    }
    {
      mercury__string__format__format_string_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 3, mercury__time__V_17_17, &mercury__time__V_98_98);
    }
    {
      mercury__time__Str_4 = mercury__string__f_43_43_2_f_0(mercury__time__V_98_98, mercury__time__V_97_97);
    }
    return mercury__time__Str_4;
  }
}

MR_Word MR_CALL 
mercury__time__mktime_1_f_0(
  MR_Word mercury__time__TM_3)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Word mercury__time__HeadVar__2_2;
    MR_Box mercury__time__Time_4;
    MR_Integer mercury__time__Yr_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 0)));
    MR_Integer mercury__time__Mnt_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 1)));
    MR_Integer mercury__time__MD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 2)));
    MR_Integer mercury__time__Hrs_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 3)));
    MR_Integer mercury__time__Min_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 4)));
    MR_Integer mercury__time__Sec_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 5)));
    MR_Integer mercury__time__YD_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 6)));
    MR_Integer mercury__time__WD_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 7)));
    MR_Word mercury__time__DST_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 8)));
    MR_Integer mercury__time__V_14_14;

    if ((mercury__time__DST_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__time__V_14_14 = (MR_Integer) -1;
    else
      {
        MR_Word mercury__time__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__time__DST_13, (MR_Integer) 0)));

        switch (mercury__time__V_19_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__time__V_14_14 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            mercury__time__V_14_14 = (MR_Integer) 0;
            break;
        }
      }
{
#define MR_PROC_LABEL mercury__time__mktime_1_f_0

	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	time_t Time;

	Yr =  mercury__time__Yr_5 ;
	Mnt =  mercury__time__Mnt_6 ;
	MD =  mercury__time__MD_7 ;
	Hrs =  mercury__time__Hrs_8 ;
	Min =  mercury__time__Min_9 ;
	Sec =  mercury__time__Sec_10 ;
	YD =  mercury__time__YD_11 ;
	WD =  mercury__time__WD_12 ;
	N =  mercury__time__V_14_14 ;
		{
{
    struct tm t;

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
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Time, mercury__time__Time_4 );
}
    mercury__time__HeadVar__2_2 = (MR_Word) mercury__time__Time_4;
    return mercury__time__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__time__mktime_4_p_0(
  MR_Word mercury__time__TM_5,
  MR_Word * mercury__time__HeadVar__2_2)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Box mercury__time__Time_6;
    MR_Integer mercury__time__Yr_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_5, (MR_Integer) 0)));
    MR_Integer mercury__time__Mnt_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_5, (MR_Integer) 1)));
    MR_Integer mercury__time__MD_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_5, (MR_Integer) 2)));
    MR_Integer mercury__time__Hrs_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_5, (MR_Integer) 3)));
    MR_Integer mercury__time__Min_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_5, (MR_Integer) 4)));
    MR_Integer mercury__time__Sec_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_5, (MR_Integer) 5)));
    MR_Integer mercury__time__YD_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_5, (MR_Integer) 6)));
    MR_Integer mercury__time__WD_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_5, (MR_Integer) 7)));
    MR_Word mercury__time__DST_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__TM_5, (MR_Integer) 8)));
    MR_Integer mercury__time__V_19_19;

    if ((mercury__time__DST_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__time__V_19_19 = (MR_Integer) -1;
    else
      {
        MR_Word mercury__time__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__time__DST_16, (MR_Integer) 0)));

        switch (mercury__time__V_24_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__time__V_19_19 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            mercury__time__V_19_19 = (MR_Integer) 0;
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
	time_t Time;

	Yr =  mercury__time__Yr_8 ;
	Mnt =  mercury__time__Mnt_9 ;
	MD =  mercury__time__MD_10 ;
	Hrs =  mercury__time__Hrs_11 ;
	Min =  mercury__time__Min_12 ;
	Sec =  mercury__time__Sec_13 ;
	YD =  mercury__time__YD_14 ;
	WD =  mercury__time__WD_15 ;
	N =  mercury__time__V_19_19 ;
		{
{
    struct tm t;

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
}

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Time, mercury__time__Time_6 );
}
    *mercury__time__HeadVar__2_2 = (MR_Word) mercury__time__Time_6;
  }
}

MR_Word MR_CALL 
mercury__time__gmtime_1_f_0(
  MR_Word mercury__time__HeadVar__1_1)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Word mercury__time__TM_4;
    MR_Box mercury__time__Time_3 = (MR_Box) mercury__time__HeadVar__1_1;
    MR_Integer mercury__time__Yr_5;
    MR_Integer mercury__time__Mnt_6;
    MR_Integer mercury__time__MD_7;
    MR_Integer mercury__time__Hrs_8;
    MR_Integer mercury__time__Min_9;
    MR_Integer mercury__time__Sec_10;
    MR_Integer mercury__time__YD_11;
    MR_Integer mercury__time__WD_12;
    MR_Integer mercury__time__N_13;
    MR_Word mercury__time__V_14_14;

{
#define MR_PROC_LABEL mercury__time__gmtime_1_f_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Time_3 , Time);
		{
{
    struct tm   *p;
    time_t      t;

    t = Time;

    p = gmtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;
}

		;}
#undef MR_PROC_LABEL
	 mercury__time__Yr_5  = Yr;
	 mercury__time__Mnt_6  = Mnt;
	 mercury__time__MD_7  = MD;
	 mercury__time__Hrs_8  = Hrs;
	 mercury__time__Min_9  = Min;
	 mercury__time__Sec_10  = Sec;
	 mercury__time__YD_11  = YD;
	 mercury__time__WD_12  = WD;
	 mercury__time__N_13  = N;
}
    {
      mercury__time__V_14_14 = mercury__time__int_to_maybe_dst_1_f_0(mercury__time__N_13);
    }
    {
      mercury__time__TM_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 0) = ((MR_Box) (mercury__time__Yr_5));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 1) = ((MR_Box) (mercury__time__Mnt_6));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 2) = ((MR_Box) (mercury__time__MD_7));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 3) = ((MR_Box) (mercury__time__Hrs_8));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 4) = ((MR_Box) (mercury__time__Min_9));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 5) = ((MR_Box) (mercury__time__Sec_10));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 6) = ((MR_Box) (mercury__time__YD_11));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 7) = ((MR_Box) (mercury__time__WD_12));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 8) = ((MR_Box) (mercury__time__V_14_14));
    }
    return mercury__time__TM_4;
  }
}

MR_Word MR_CALL 
mercury__time__localtime_1_f_0(
  MR_Word mercury__time__HeadVar__1_1)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Word mercury__time__TM_4;
    MR_Box mercury__time__Time_3 = (MR_Box) mercury__time__HeadVar__1_1;
    MR_Integer mercury__time__Yr_5;
    MR_Integer mercury__time__Mnt_6;
    MR_Integer mercury__time__MD_7;
    MR_Integer mercury__time__Hrs_8;
    MR_Integer mercury__time__Min_9;
    MR_Integer mercury__time__Sec_10;
    MR_Integer mercury__time__YD_11;
    MR_Integer mercury__time__WD_12;
    MR_Integer mercury__time__N_13;
    MR_Word mercury__time__V_14_14;

{
#define MR_PROC_LABEL mercury__time__localtime_1_f_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Time_3 , Time);
		{

    struct tm   *p;
    time_t      t;

    t = Time;

    p = localtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;


		;}
#undef MR_PROC_LABEL
	 mercury__time__Yr_5  = Yr;
	 mercury__time__Mnt_6  = Mnt;
	 mercury__time__MD_7  = MD;
	 mercury__time__Hrs_8  = Hrs;
	 mercury__time__Min_9  = Min;
	 mercury__time__Sec_10  = Sec;
	 mercury__time__YD_11  = YD;
	 mercury__time__WD_12  = WD;
	 mercury__time__N_13  = N;
}
    {
      mercury__time__V_14_14 = mercury__time__int_to_maybe_dst_1_f_0(mercury__time__N_13);
    }
    {
      mercury__time__TM_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 0) = ((MR_Box) (mercury__time__Yr_5));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 1) = ((MR_Box) (mercury__time__Mnt_6));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 2) = ((MR_Box) (mercury__time__MD_7));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 3) = ((MR_Box) (mercury__time__Hrs_8));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 4) = ((MR_Box) (mercury__time__Min_9));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 5) = ((MR_Box) (mercury__time__Sec_10));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 6) = ((MR_Box) (mercury__time__YD_11));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 7) = ((MR_Box) (mercury__time__WD_12));
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 8) = ((MR_Box) (mercury__time__V_14_14));
    }
    return mercury__time__TM_4;
  }
}

void MR_CALL 
mercury__time__localtime_4_p_0(
  MR_Word mercury__time__HeadVar__1_1,
  MR_Word * mercury__time__TM_6)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Box mercury__time__Time_5 = (MR_Box) mercury__time__HeadVar__1_1;
    MR_Integer mercury__time__Yr_8;
    MR_Integer mercury__time__Mnt_9;
    MR_Integer mercury__time__MD_10;
    MR_Integer mercury__time__Hrs_11;
    MR_Integer mercury__time__Min_12;
    MR_Integer mercury__time__Sec_13;
    MR_Integer mercury__time__YD_14;
    MR_Integer mercury__time__WD_15;
    MR_Integer mercury__time__N_16;
    MR_Word mercury__time__V_19_19;

{
#define MR_PROC_LABEL mercury__time__localtime_4_p_0

	time_t Time;
	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Time_5 , Time);
		{

    struct tm   *p;
    time_t      t;

    t = Time;

    p = localtime(&t);

    /* XXX do we need to handle the case where p == NULL here? */

    Sec = (MR_Integer) p->tm_sec;
    Min = (MR_Integer) p->tm_min;
    Hrs = (MR_Integer) p->tm_hour;
    Mnt = (MR_Integer) p->tm_mon;
    Yr = (MR_Integer) p->tm_year;
    WD = (MR_Integer) p->tm_wday;
    MD = (MR_Integer) p->tm_mday;
    YD = (MR_Integer) p->tm_yday;
    N = (MR_Integer) p->tm_isdst;


		;}
#undef MR_PROC_LABEL
	 mercury__time__Yr_8  = Yr;
	 mercury__time__Mnt_9  = Mnt;
	 mercury__time__MD_10  = MD;
	 mercury__time__Hrs_11  = Hrs;
	 mercury__time__Min_12  = Min;
	 mercury__time__Sec_13  = Sec;
	 mercury__time__YD_14  = YD;
	 mercury__time__WD_15  = WD;
	 mercury__time__N_16  = N;
}
    {
      mercury__time__V_19_19 = mercury__time__int_to_maybe_dst_1_f_0(mercury__time__N_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *mercury__time__TM_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__time__Yr_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__time__Mnt_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__time__MD_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__time__Hrs_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mercury__time__Min_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mercury__time__Sec_13));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mercury__time__YD_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (mercury__time__WD_15));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (mercury__time__V_19_19));
    }
  }
}

MR_Float MR_CALL 
mercury__time__difftime_2_f_0(
  MR_Word mercury__time__HeadVar__1_1,
  MR_Word mercury__time__HeadVar__2_2)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Float mercury__time__Diff_6;
    MR_Box mercury__time__T1_4 = (MR_Box) mercury__time__HeadVar__1_1;
    MR_Box mercury__time__T0_5 = (MR_Box) mercury__time__HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__time__difftime_2_f_0

	time_t T1;
	time_t T0;
	MR_Float Diff;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__T1_4 , T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__T0_5 , T0);
		{

    Diff = (MR_Float) difftime(T1, T0);


		;}
#undef MR_PROC_LABEL
	 mercury__time__Diff_6  = Diff;
}
    return mercury__time__Diff_6;
  }
}

MR_Integer MR_CALL 
mercury__time__clk_tck_0_f_0(void)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__Ret_2;
    MR_Integer mercury__time__Ret0_3;

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
	 mercury__time__Ret0_3  = Ret;
}
    mercury__time__succeeded = (mercury__time__Ret0_3 == (MR_Integer) -1);
    if (mercury__time__succeeded)
      {
        MR_Word mercury__time__TypeCtorInfo_6_6 = (MR_Word) &mercury__time__time__type_ctor_info_time_error_0;
        MR_Word mercury__time__V_4_4 = (MR_Word) ((MR_Box) ((MR_String) "can\'t get clk_tck value"));

        {
          mercury__exception__throw_1_p_0(mercury__time__TypeCtorInfo_6_6, ((MR_Box) (mercury__time__V_4_4)));
        }
      }
    else
      mercury__time__Ret_2 = mercury__time__Ret0_3;
    return mercury__time__Ret_2;
  }
}

void MR_CALL 
mercury__time__times_4_p_0(
  MR_Word * mercury__time__Tms_5,
  MR_Integer * mercury__time__Result_6)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__Ret_8;
    MR_Integer mercury__time__Ut_9;
    MR_Integer mercury__time__St_10;
    MR_Integer mercury__time__CUt_11;
    MR_Integer mercury__time__CSt_12;

    {
      mercury__time__c_times_7_p_0(&mercury__time__Ret_8, &mercury__time__Ut_9, &mercury__time__St_10, &mercury__time__CUt_11, &mercury__time__CSt_12);
    }
    mercury__time__succeeded = (mercury__time__Ret_8 == (MR_Integer) -1);
    if (mercury__time__succeeded)
      {
        MR_Word mercury__time__TypeCtorInfo_18_18 = (MR_Word) &mercury__time__time__type_ctor_info_time_error_0;
        MR_Word mercury__time__V_16_16 = (MR_Word) ((MR_Box) ((MR_String) "can\'t get times value"));

        {
          mercury__exception__throw_1_p_0(mercury__time__TypeCtorInfo_18_18, ((MR_Box) (mercury__time__V_16_16)));
          return;
        }
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          *mercury__time__Tms_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__time__Ut_9));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__time__St_10));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__time__CUt_11));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__time__CSt_12));
        }
        *mercury__time__Result_6 = mercury__time__Ret_8;
      }
  }
}

void MR_CALL 
mercury__time__time_3_p_0(
  MR_Word * mercury__time__Result_4)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Box mercury__time__Ret_6;

{
#define MR_PROC_LABEL mercury__time__time_3_p_0

	time_t Ret;

		{

    Ret = time(NULL);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Ret, mercury__time__Ret_6 );
}
{
#define MR_PROC_LABEL mercury__time__time_3_p_0

	time_t Val;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Ret_6 , Val);
		{

    SUCCESS_INDICATOR = (Val == -1);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__time__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__time__succeeded)
      {
        MR_Word mercury__time__TypeCtorInfo_12_12 = (MR_Word) &mercury__time__time__type_ctor_info_time_error_0;
        MR_Word mercury__time__V_10_10 = (MR_Word) ((MR_Box) ((MR_String) "can\'t get time value"));

        {
          mercury__exception__throw_1_p_0(mercury__time__TypeCtorInfo_12_12, ((MR_Box) (mercury__time__V_10_10)));
          return;
        }
      }
    else
      *mercury__time__Result_4 = (MR_Word) mercury__time__Ret_6;
  }
}

MR_Integer MR_CALL 
mercury__time__clocks_per_sec_0_f_0(void)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__Ret_1;

{
#define MR_PROC_LABEL mercury__time__clocks_per_sec_0_f_0

	MR_Integer Ret;

		{

    Ret = (MR_Integer) CLOCKS_PER_SEC;


		;}
#undef MR_PROC_LABEL
	 mercury__time__Ret_1  = Ret;
}
    return mercury__time__Ret_1;
  }
}

void MR_CALL 
mercury__time__clock_3_p_0(
  MR_Integer * mercury__time__Result_4)
{
  {
    MR_bool mercury__time__succeeded;
    MR_Integer mercury__time__Ret_6;

{
#define MR_PROC_LABEL mercury__time__clock_3_p_0

	MR_Integer Ret;

		{

    Ret = (MR_Integer) clock();


		;}
#undef MR_PROC_LABEL
	 mercury__time__Ret_6  = Ret;
}
    mercury__time__succeeded = (mercury__time__Ret_6 == (MR_Integer) -1);
    if (mercury__time__succeeded)
      {
        MR_Word mercury__time__TypeCtorInfo_12_12 = (MR_Word) &mercury__time__time__type_ctor_info_time_error_0;
        MR_Word mercury__time__V_10_10 = (MR_Word) ((MR_Box) ((MR_String) "can\'t get clock value"));

        {
          mercury__exception__throw_1_p_0(mercury__time__TypeCtorInfo_12_12, ((MR_Box) (mercury__time__V_10_10)));
          return;
        }
      }
    else
      *mercury__time__Result_4 = mercury__time__Ret_6;
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module time. */
