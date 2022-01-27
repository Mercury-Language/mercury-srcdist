/*
** Automatically generated from `time.m'
** by the Mercury compiler,
** version DEV
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


#line 332 "time.m"

#ifdef MR_WIN32
    #include "mercury_windows.h"
    typedef union
    {
        FILETIME ft;
        __int64 i64;
    } timeKernel;
#endif



#line 105 "time.c"
static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_0;

#line 108 "time.c"
static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_1;

#line 111 "time.c"
static const MR_EnumFunctorDescPtr mercury__time__time__enum_value_ordered_dst_0[2];

#line 114 "time.c"
static const MR_EnumFunctorDescPtr mercury__time__time__enum_name_ordered_dst_0[2];

#line 117 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_dst_0[2];

#line 120 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_time_error_0[1];

#line 123 "time.c"
static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_error_0;

#line 126 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_time_t_0[1];

#line 129 "time.c"
static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_t_0;

#line 132 "time.c"
static const MR_FA_TypeInfo_Struct1 mercury__time__maybe__ti_maybe_1time__type_ctor_info_dst_0;

#line 135 "time.c"
static const MR_PseudoTypeInfo mercury__time__time__field_types_tm_0_0[9];

#line 138 "time.c"
static const MR_ConstString mercury__time__time__field_names_tm_0_0[9];

#line 141 "time.c"
static const MR_DuFunctorDesc mercury__time__time__du_functor_desc_tm_0_0;

#line 144 "time.c"
static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tm_0_0[1];

#line 147 "time.c"
static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tm_0[1];

#line 150 "time.c"
static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tm_0[1];

#line 153 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_tm_0[1];

#line 156 "time.c"
static const MR_PseudoTypeInfo mercury__time__time__field_types_tms_0_0[4];

#line 159 "time.c"
static const MR_DuFunctorDesc mercury__time__time__du_functor_desc_tms_0_0;

#line 162 "time.c"
static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tms_0_0[1];

#line 165 "time.c"
static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tms_0[1];

#line 168 "time.c"
static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tms_0[1];

#line 171 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_tms_0[1];

#line 174 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____clock_t_0_0_10001(
#line 177 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 179 "time.c"
  MR_Box mercury__time__wrapper_arg_2);

#line 182 "time.c"
static void MR_CALL 
mercury__time____Compare____clock_t_0_0_10001(
#line 185 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 187 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 189 "time.c"
  MR_Box mercury__time__wrapper_arg_3);

#line 192 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____dst_0_0_10001(
#line 195 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 197 "time.c"
  MR_Box mercury__time__wrapper_arg_2);

#line 200 "time.c"
static void MR_CALL 
mercury__time____Compare____dst_0_0_10001(
#line 203 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 205 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 207 "time.c"
  MR_Box mercury__time__wrapper_arg_3);

#line 210 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____time_error_0_0_10001(
#line 213 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 215 "time.c"
  MR_Box mercury__time__wrapper_arg_2);

#line 218 "time.c"
static void MR_CALL 
mercury__time____Compare____time_error_0_0_10001(
#line 221 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 223 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 225 "time.c"
  MR_Box mercury__time__wrapper_arg_3);

#line 228 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____time_t_0_0_10001(
#line 231 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 233 "time.c"
  MR_Box mercury__time__wrapper_arg_2);

#line 236 "time.c"
static void MR_CALL 
mercury__time____Compare____time_t_0_0_10001(
#line 239 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 241 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 243 "time.c"
  MR_Box mercury__time__wrapper_arg_3);

#line 246 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____time_t_rep_0_0_10001(
#line 249 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 251 "time.c"
  MR_Box mercury__time__wrapper_arg_2);

#line 254 "time.c"
static void MR_CALL 
mercury__time____Compare____time_t_rep_0_0_10001(
#line 257 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 259 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 261 "time.c"
  MR_Box mercury__time__wrapper_arg_3);

#line 264 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____tm_0_0_10001(
#line 267 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 269 "time.c"
  MR_Box mercury__time__wrapper_arg_2);

#line 272 "time.c"
static void MR_CALL 
mercury__time____Compare____tm_0_0_10001(
#line 275 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 277 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 279 "time.c"
  MR_Box mercury__time__wrapper_arg_3);

#line 282 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____tms_0_0_10001(
#line 285 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 287 "time.c"
  MR_Box mercury__time__wrapper_arg_2);

#line 290 "time.c"
static void MR_CALL 
mercury__time____Compare____tms_0_0_10001(
#line 293 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 295 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 297 "time.c"
  MR_Box mercury__time__wrapper_arg_3);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__time__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 986 "time.m"
static MR_String MR_CALL 
mercury__time__mon_name_1_f_0(
#line 986 "time.m"
  MR_Integer mercury__time__N_3);

#line 967 "time.m"
static MR_String MR_CALL 
mercury__time__wday_name_1_f_0(
#line 967 "time.m"
  MR_Integer mercury__time__N_3);

#line 448 "time.m"
static MR_Integer MR_CALL 
mercury__time__c_clk_tck_0_f_0(void);


static /* final */ const MR_Box mercury__time_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__time_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__time_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__time_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__time_scalar_common_5[3][1];


#line 978 "time.m"
/* sealed */ struct mercury__time__vector_common_type_6_0_s {
#line 978 "time.m"
  const MR_String mercury__time__vector_common_type_6_0__vct_6_f_0;
#line 978 "time.m"
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


#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"

#line 1026 "time.m"
MR_Word 
ML_construct_time_t(
#line 1026 "time.m"
  time_t mercury__time__T_3)
#line 1026 "time.m"
{
#line 1026 "time.m"
	MR_Box mercury__time__boxed_T_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, mercury__time__T_3, mercury__time__boxed_T_3);
	ret_value = (MR_Word)mercury__time__construct_time_t_1_f_0(mercury__time__boxed_T_3);
	return ret_value;
}


#line 559 "time.c"
const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_clock_t_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 576 "time.c"
static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_0 = {
  (MR_String) "standard_time",
  (MR_Integer) 0
};

#line 582 "time.c"
static const MR_EnumFunctorDesc mercury__time__time__enum_functor_desc_dst_0_1 = {
  (MR_String) "daylight_time",
  (MR_Integer) 1
};

#line 588 "time.c"
static const MR_EnumFunctorDescPtr mercury__time__time__enum_value_ordered_dst_0[2] = {
  &mercury__time__time__enum_functor_desc_dst_0_0,
  &mercury__time__time__enum_functor_desc_dst_0_1
};

#line 594 "time.c"
static const MR_EnumFunctorDescPtr mercury__time__time__enum_name_ordered_dst_0[2] = {
  &mercury__time__time__enum_functor_desc_dst_0_1,
  &mercury__time__time__enum_functor_desc_dst_0_0
};

#line 600 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_dst_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 606 "time.c"
const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_dst_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 623 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_time_error_0[1] = {
  (MR_Integer) 0
};

#line 628 "time.c"
static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_error_0 = {
  (MR_String) "time_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 635 "time.c"
const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_time_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 652 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_time_t_0[1] = {
  (MR_Integer) 0
};

#line 657 "time.c"
static const MR_NotagFunctorDesc mercury__time__time__notag_functor_desc_time_t_0 = {
  (MR_String) "time_t",
  (MR_PseudoTypeInfo) &mercury__time__time__type_ctor_info_time_t_rep_0,
  NULL
};

#line 664 "time.c"
const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_time_t_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 681 "time.c"
const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_time_t_rep_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 698 "time.c"
static const MR_FA_TypeInfo_Struct1 mercury__time__maybe__ti_maybe_1time__type_ctor_info_dst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__time__time__type_ctor_info_dst_0
  }
};

#line 706 "time.c"
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

#line 719 "time.c"
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

#line 732 "time.c"
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
  NULL
};

#line 747 "time.c"
static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tm_0_0[1] = {
  &mercury__time__time__du_functor_desc_tm_0_0
};

#line 752 "time.c"
static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tm_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__time__time__du_stag_ordered_tm_0_0
  }
};

#line 761 "time.c"
static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tm_0[1] = {
  &mercury__time__time__du_functor_desc_tm_0_0
};

#line 766 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_tm_0[1] = {
  (MR_Integer) 0
};

#line 771 "time.c"
const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_tm_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 788 "time.c"
static const MR_PseudoTypeInfo mercury__time__time__field_types_tms_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 796 "time.c"
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
  NULL
};

#line 811 "time.c"
static const MR_DuFunctorDescPtr mercury__time__time__du_stag_ordered_tms_0_0[1] = {
  &mercury__time__time__du_functor_desc_tms_0_0
};

#line 816 "time.c"
static const MR_DuPtagLayout mercury__time__time__du_ptag_ordered_tms_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__time__time__du_stag_ordered_tms_0_0
  }
};

#line 825 "time.c"
static const MR_DuFunctorDescPtr mercury__time__time__du_name_ordered_tms_0[1] = {
  &mercury__time__time__du_functor_desc_tms_0_0
};

#line 830 "time.c"
static const MR_Integer mercury__time__time__functor_number_map_tms_0[1] = {
  (MR_Integer) 0
};

#line 835 "time.c"
const MR_TypeCtorInfo_Struct mercury__time__time__type_ctor_info_tms_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 852 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____clock_t_0_0_10001(
#line 855 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 857 "time.c"
  MR_Box mercury__time__wrapper_arg_2)
#line 859 "time.c"
{
#line 861 "time.c"
  {
#line 863 "time.c"
    MR_bool mercury__time__succeeded;

#line 866 "time.c"
    {
#line 868 "time.c"
      mercury__time__succeeded = mercury__time____Unify____clock_t_0_0(((MR_Integer) mercury__time__wrapper_arg_1), ((MR_Integer) mercury__time__wrapper_arg_2));
    }
#line 871 "time.c"
    return mercury__time__succeeded;
#line 873 "time.c"
  }
#line 875 "time.c"
}

#line 878 "time.c"
static void MR_CALL 
mercury__time____Compare____clock_t_0_0_10001(
#line 881 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 883 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 885 "time.c"
  MR_Box mercury__time__wrapper_arg_3)
#line 887 "time.c"
{
#line 889 "time.c"
  {
#line 891 "time.c"
    MR_Word mercury__time__conv0_HeadVar__1_1;

#line 894 "time.c"
    {
#line 896 "time.c"
      mercury__time____Compare____clock_t_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Integer) mercury__time__wrapper_arg_2), ((MR_Integer) mercury__time__wrapper_arg_3));
    }
#line 899 "time.c"
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
#line 901 "time.c"
  }
#line 903 "time.c"
}

#line 906 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____dst_0_0_10001(
#line 909 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 911 "time.c"
  MR_Box mercury__time__wrapper_arg_2)
#line 913 "time.c"
{
#line 915 "time.c"
  {
#line 917 "time.c"
    MR_bool mercury__time__succeeded;

#line 920 "time.c"
    {
#line 922 "time.c"
      mercury__time__succeeded = mercury__time____Unify____dst_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
#line 925 "time.c"
    return mercury__time__succeeded;
#line 927 "time.c"
  }
#line 929 "time.c"
}

#line 932 "time.c"
static void MR_CALL 
mercury__time____Compare____dst_0_0_10001(
#line 935 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 937 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 939 "time.c"
  MR_Box mercury__time__wrapper_arg_3)
#line 941 "time.c"
{
#line 943 "time.c"
  {
#line 945 "time.c"
    MR_Word mercury__time__conv0_HeadVar__1_1;

#line 948 "time.c"
    {
#line 950 "time.c"
      mercury__time____Compare____dst_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
#line 953 "time.c"
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
#line 955 "time.c"
  }
#line 957 "time.c"
}

#line 960 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____time_error_0_0_10001(
#line 963 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 965 "time.c"
  MR_Box mercury__time__wrapper_arg_2)
#line 967 "time.c"
{
#line 969 "time.c"
  {
#line 971 "time.c"
    MR_bool mercury__time__succeeded;

#line 974 "time.c"
    {
#line 976 "time.c"
      mercury__time__succeeded = mercury__time____Unify____time_error_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
#line 979 "time.c"
    return mercury__time__succeeded;
#line 981 "time.c"
  }
#line 983 "time.c"
}

#line 986 "time.c"
static void MR_CALL 
mercury__time____Compare____time_error_0_0_10001(
#line 989 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 991 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 993 "time.c"
  MR_Box mercury__time__wrapper_arg_3)
#line 995 "time.c"
{
#line 997 "time.c"
  {
#line 999 "time.c"
    MR_Word mercury__time__conv0_HeadVar__1_1;

#line 1002 "time.c"
    {
#line 1004 "time.c"
      mercury__time____Compare____time_error_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
#line 1007 "time.c"
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
#line 1009 "time.c"
  }
#line 1011 "time.c"
}

#line 1014 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____time_t_0_0_10001(
#line 1017 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 1019 "time.c"
  MR_Box mercury__time__wrapper_arg_2)
#line 1021 "time.c"
{
#line 1023 "time.c"
  {
#line 1025 "time.c"
    MR_bool mercury__time__succeeded;

#line 1028 "time.c"
    {
#line 1030 "time.c"
      mercury__time__succeeded = mercury__time____Unify____time_t_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
#line 1033 "time.c"
    return mercury__time__succeeded;
#line 1035 "time.c"
  }
#line 1037 "time.c"
}

#line 1040 "time.c"
static void MR_CALL 
mercury__time____Compare____time_t_0_0_10001(
#line 1043 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 1045 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 1047 "time.c"
  MR_Box mercury__time__wrapper_arg_3)
#line 1049 "time.c"
{
#line 1051 "time.c"
  {
#line 1053 "time.c"
    MR_Word mercury__time__conv0_HeadVar__1_1;

#line 1056 "time.c"
    {
#line 1058 "time.c"
      mercury__time____Compare____time_t_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
#line 1061 "time.c"
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
#line 1063 "time.c"
  }
#line 1065 "time.c"
}

#line 1068 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____time_t_rep_0_0_10001(
#line 1071 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 1073 "time.c"
  MR_Box mercury__time__wrapper_arg_2)
#line 1075 "time.c"
{
#line 1077 "time.c"
  {
#line 1079 "time.c"
    MR_bool mercury__time__succeeded;

#line 1082 "time.c"
    {
#line 1084 "time.c"
      mercury__time__succeeded = mercury__time____Unify____time_t_rep_0_0(((MR_Box) mercury__time__wrapper_arg_1), ((MR_Box) mercury__time__wrapper_arg_2));
    }
#line 1087 "time.c"
    return mercury__time__succeeded;
#line 1089 "time.c"
  }
#line 1091 "time.c"
}

#line 1094 "time.c"
static void MR_CALL 
mercury__time____Compare____time_t_rep_0_0_10001(
#line 1097 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 1099 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 1101 "time.c"
  MR_Box mercury__time__wrapper_arg_3)
#line 1103 "time.c"
{
#line 1105 "time.c"
  {
#line 1107 "time.c"
    MR_Word mercury__time__conv0_HeadVar__1_1;

#line 1110 "time.c"
    {
#line 1112 "time.c"
      mercury__time____Compare____time_t_rep_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Box) mercury__time__wrapper_arg_2), ((MR_Box) mercury__time__wrapper_arg_3));
    }
#line 1115 "time.c"
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
#line 1117 "time.c"
  }
#line 1119 "time.c"
}

#line 1122 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____tm_0_0_10001(
#line 1125 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 1127 "time.c"
  MR_Box mercury__time__wrapper_arg_2)
#line 1129 "time.c"
{
#line 1131 "time.c"
  {
#line 1133 "time.c"
    MR_bool mercury__time__succeeded;

#line 1136 "time.c"
    {
#line 1138 "time.c"
      mercury__time__succeeded = mercury__time____Unify____tm_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
#line 1141 "time.c"
    return mercury__time__succeeded;
#line 1143 "time.c"
  }
#line 1145 "time.c"
}

#line 1148 "time.c"
static void MR_CALL 
mercury__time____Compare____tm_0_0_10001(
#line 1151 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 1153 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 1155 "time.c"
  MR_Box mercury__time__wrapper_arg_3)
#line 1157 "time.c"
{
#line 1159 "time.c"
  {
#line 1161 "time.c"
    MR_Word mercury__time__conv0_HeadVar__1_1;

#line 1164 "time.c"
    {
#line 1166 "time.c"
      mercury__time____Compare____tm_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
#line 1169 "time.c"
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
#line 1171 "time.c"
  }
#line 1173 "time.c"
}

#line 1176 "time.c"
static MR_bool MR_CALL 
mercury__time____Unify____tms_0_0_10001(
#line 1179 "time.c"
  MR_Box mercury__time__wrapper_arg_1,
#line 1181 "time.c"
  MR_Box mercury__time__wrapper_arg_2)
#line 1183 "time.c"
{
#line 1185 "time.c"
  {
#line 1187 "time.c"
    MR_bool mercury__time__succeeded;

#line 1190 "time.c"
    {
#line 1192 "time.c"
      mercury__time__succeeded = mercury__time____Unify____tms_0_0(((MR_Word) mercury__time__wrapper_arg_1), ((MR_Word) mercury__time__wrapper_arg_2));
    }
#line 1195 "time.c"
    return mercury__time__succeeded;
#line 1197 "time.c"
  }
#line 1199 "time.c"
}

#line 1202 "time.c"
static void MR_CALL 
mercury__time____Compare____tms_0_0_10001(
#line 1205 "time.c"
  MR_Box * mercury__time__wrapper_arg_1,
#line 1207 "time.c"
  MR_Box mercury__time__wrapper_arg_2,
#line 1209 "time.c"
  MR_Box mercury__time__wrapper_arg_3)
#line 1211 "time.c"
{
#line 1213 "time.c"
  {
#line 1215 "time.c"
    MR_Word mercury__time__conv0_HeadVar__1_1;

#line 1218 "time.c"
    {
#line 1220 "time.c"
      mercury__time____Compare____tms_0_0(&mercury__time__conv0_HeadVar__1_1, ((MR_Word) mercury__time__wrapper_arg_2), ((MR_Word) mercury__time__wrapper_arg_3));
    }
#line 1223 "time.c"
    *mercury__time__wrapper_arg_1 = ((MR_Box) (mercury__time__conv0_HeadVar__1_1));
#line 1225 "time.c"
  }
#line 1227 "time.c"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__time__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__time__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 39 "time.m"
void MR_CALL 
mercury__time____Compare____tms_0_0(
#line 39 "time.m"
  MR_Word * mercury__time__HeadVar__1_1,
#line 39 "time.m"
  MR_Word mercury__time__HeadVar__2_2,
#line 39 "time.m"
  MR_Word mercury__time__HeadVar__3_3)
#line 39 "time.m"
{
#line 39 "time.m"
  {
#line 39 "time.m"
    MR_bool mercury__time__succeeded;
#line 39 "time.m"
    MR_Integer mercury__time__CastX_15 = (MR_Integer) mercury__time__HeadVar__2_2;
#line 39 "time.m"
    MR_Integer mercury__time__CastY_16 = (MR_Integer) mercury__time__HeadVar__3_3;

#line 39 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_15 == mercury__time__CastY_16);
#line 39 "time.m"
    if (mercury__time__succeeded)
#line 1271 "time.c"
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "time.m"
    else
#line 39 "time.m"
      {
#line 39 "time.m"
        MR_Integer mercury__time__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "time.m"
        MR_Integer mercury__time__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "time.m"
        MR_Integer mercury__time__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "time.m"
        MR_Integer mercury__time__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 3)));
#line 39 "time.m"
        MR_Integer mercury__time__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 0)));
#line 39 "time.m"
        MR_Integer mercury__time__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 1)));
#line 39 "time.m"
        MR_Integer mercury__time__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 2)));
#line 39 "time.m"
        MR_Integer mercury__time__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 3)));
#line 39 "time.m"
        MR_Word mercury__time__V_12_12;

#line 35 "private_builtin.opt"
        mercury__time__succeeded = (mercury__time__V_4_4 < mercury__time__V_8_8);
#line 38 "private_builtin.opt"
        if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
          mercury__time__V_12_12 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          {
#line 40 "private_builtin.opt"
            mercury__time__succeeded = (mercury__time__V_4_4 == mercury__time__V_8_8);
#line 43 "private_builtin.opt"
            if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
              mercury__time__V_12_12 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
            else
#line 44 "private_builtin.opt"
              mercury__time__V_12_12 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
          }
#line 1318 "time.c"
        mercury__time__succeeded = (mercury__time__V_12_12 == (MR_Integer) 0);
#line 39 "time.m"
        mercury__time__succeeded = !(mercury__time__succeeded);
#line 39 "time.m"
        if (mercury__time__succeeded)
#line 39 "time.m"
          *mercury__time__HeadVar__1_1 = mercury__time__V_12_12;
#line 39 "time.m"
        else
#line 39 "time.m"
          {
#line 39 "time.m"
            MR_Word mercury__time__V_13_13;

#line 35 "private_builtin.opt"
            mercury__time__succeeded = (mercury__time__V_5_5 < mercury__time__V_9_9);
#line 38 "private_builtin.opt"
            if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
              mercury__time__V_13_13 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
            else
#line 43 "private_builtin.opt"
              {
#line 40 "private_builtin.opt"
                mercury__time__succeeded = (mercury__time__V_5_5 == mercury__time__V_9_9);
#line 43 "private_builtin.opt"
                if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                  mercury__time__V_13_13 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                else
#line 44 "private_builtin.opt"
                  mercury__time__V_13_13 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
              }
#line 1355 "time.c"
            mercury__time__succeeded = (mercury__time__V_13_13 == (MR_Integer) 0);
#line 39 "time.m"
            mercury__time__succeeded = !(mercury__time__succeeded);
#line 39 "time.m"
            if (mercury__time__succeeded)
#line 39 "time.m"
              *mercury__time__HeadVar__1_1 = mercury__time__V_13_13;
#line 39 "time.m"
            else
#line 39 "time.m"
              {
#line 39 "time.m"
                MR_Word mercury__time__V_14_14;

#line 35 "private_builtin.opt"
                mercury__time__succeeded = (mercury__time__V_6_6 < mercury__time__V_10_10);
#line 38 "private_builtin.opt"
                if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
                  mercury__time__V_14_14 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                else
#line 43 "private_builtin.opt"
                  {
#line 40 "private_builtin.opt"
                    mercury__time__succeeded = (mercury__time__V_6_6 == mercury__time__V_10_10);
#line 43 "private_builtin.opt"
                    if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                      mercury__time__V_14_14 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                    else
#line 44 "private_builtin.opt"
                      mercury__time__V_14_14 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                  }
#line 1392 "time.c"
                mercury__time__succeeded = (mercury__time__V_14_14 == (MR_Integer) 0);
#line 39 "time.m"
                mercury__time__succeeded = !(mercury__time__succeeded);
#line 39 "time.m"
                if (mercury__time__succeeded)
#line 39 "time.m"
                  *mercury__time__HeadVar__1_1 = mercury__time__V_14_14;
#line 39 "time.m"
                else
#line 38 "private_builtin.opt"
                  {
#line 35 "private_builtin.opt"
                    mercury__time__succeeded = (mercury__time__V_7_7 < mercury__time__V_11_11);
#line 38 "private_builtin.opt"
                    if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
                      *mercury__time__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                    else
#line 43 "private_builtin.opt"
                      {
#line 40 "private_builtin.opt"
                        mercury__time__succeeded = (mercury__time__V_7_7 == mercury__time__V_11_11);
#line 43 "private_builtin.opt"
                        if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                          *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                        else
#line 44 "private_builtin.opt"
                          *mercury__time__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                      }
#line 38 "private_builtin.opt"
                  }
#line 39 "time.m"
              }
#line 39 "time.m"
          }
#line 39 "time.m"
      }
#line 39 "time.m"
  }
#line 39 "time.m"
}

#line 39 "time.m"
MR_bool MR_CALL 
mercury__time____Unify____tms_0_0(
#line 39 "time.m"
  MR_Word mercury__time__HeadVar__1_1,
#line 39 "time.m"
  MR_Word mercury__time__HeadVar__2_2)
#line 39 "time.m"
{
#line 39 "time.m"
  {
#line 39 "time.m"
    MR_bool mercury__time__succeeded;
#line 39 "time.m"
    MR_Integer mercury__time__CastX_11 = (MR_Integer) mercury__time__HeadVar__1_1;
#line 39 "time.m"
    MR_Integer mercury__time__CastY_12 = (MR_Integer) mercury__time__HeadVar__2_2;

#line 39 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_11 == mercury__time__CastY_12);
#line 39 "time.m"
    if (mercury__time__succeeded)
#line 39 "time.m"
      mercury__time__succeeded = MR_TRUE;
#line 39 "time.m"
    else
#line 39 "time.m"
      {
#line 39 "time.m"
        MR_Integer mercury__time__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 0)));
#line 39 "time.m"
        MR_Integer mercury__time__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 1)));
#line 39 "time.m"
        MR_Integer mercury__time__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 2)));
#line 39 "time.m"
        MR_Integer mercury__time__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 3)));
#line 39 "time.m"
        MR_Integer mercury__time__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 0)));
#line 39 "time.m"
        MR_Integer mercury__time__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 1)));
#line 39 "time.m"
        MR_Integer mercury__time__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 2)));
#line 39 "time.m"
        MR_Integer mercury__time__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 3)));

#line 1484 "time.c"
        mercury__time__succeeded = (mercury__time__V_3_3 == mercury__time__V_7_7);
#line 39 "time.m"
        if (mercury__time__succeeded)
#line 39 "time.m"
          {
#line 1490 "time.c"
            mercury__time__succeeded = (mercury__time__V_4_4 == mercury__time__V_8_8);
#line 39 "time.m"
            if (mercury__time__succeeded)
#line 39 "time.m"
              {
#line 1496 "time.c"
                mercury__time__succeeded = (mercury__time__V_5_5 == mercury__time__V_9_9);
#line 39 "time.m"
                if (mercury__time__succeeded)
#line 1500 "time.c"
                  mercury__time__succeeded = (mercury__time__V_6_6 == mercury__time__V_10_10);
#line 39 "time.m"
              }
#line 39 "time.m"
          }
#line 39 "time.m"
      }
#line 39 "time.m"
    return mercury__time__succeeded;
#line 39 "time.m"
  }
#line 39 "time.m"
}

#line 58 "time.m"
void MR_CALL 
mercury__time____Compare____tm_0_0(
#line 58 "time.m"
  MR_Word * mercury__time__HeadVar__1_1,
#line 58 "time.m"
  MR_Word mercury__time__HeadVar__2_2,
#line 58 "time.m"
  MR_Word mercury__time__HeadVar__3_3)
#line 58 "time.m"
{
#line 58 "time.m"
  {
#line 58 "time.m"
    MR_bool mercury__time__succeeded;
#line 58 "time.m"
    MR_Integer mercury__time__CastX_30 = (MR_Integer) mercury__time__HeadVar__2_2;
#line 58 "time.m"
    MR_Integer mercury__time__CastY_31 = (MR_Integer) mercury__time__HeadVar__3_3;

#line 58 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_30 == mercury__time__CastY_31);
#line 58 "time.m"
    if (mercury__time__succeeded)
#line 1539 "time.c"
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "time.m"
    else
#line 58 "time.m"
      {
#line 58 "time.m"
        MR_Integer mercury__time__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "time.m"
        MR_Integer mercury__time__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 1)));
#line 58 "time.m"
        MR_Integer mercury__time__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 2)));
#line 58 "time.m"
        MR_Integer mercury__time__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 3)));
#line 58 "time.m"
        MR_Integer mercury__time__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 4)));
#line 58 "time.m"
        MR_Integer mercury__time__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 5)));
#line 58 "time.m"
        MR_Integer mercury__time__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 6)));
#line 58 "time.m"
        MR_Integer mercury__time__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 7)));
#line 58 "time.m"
        MR_Word mercury__time__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 8)));
#line 58 "time.m"
        MR_Integer mercury__time__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 0)));
#line 58 "time.m"
        MR_Integer mercury__time__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 1)));
#line 58 "time.m"
        MR_Integer mercury__time__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 2)));
#line 58 "time.m"
        MR_Integer mercury__time__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 3)));
#line 58 "time.m"
        MR_Integer mercury__time__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 4)));
#line 58 "time.m"
        MR_Integer mercury__time__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 5)));
#line 58 "time.m"
        MR_Integer mercury__time__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 6)));
#line 58 "time.m"
        MR_Integer mercury__time__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 7)));
#line 58 "time.m"
        MR_Word mercury__time__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__3_3, (MR_Integer) 8)));
#line 58 "time.m"
        MR_Word mercury__time__V_22_22;

#line 35 "private_builtin.opt"
        mercury__time__succeeded = (mercury__time__V_4_4 < mercury__time__V_13_13);
#line 38 "private_builtin.opt"
        if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
          mercury__time__V_22_22 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          {
#line 40 "private_builtin.opt"
            mercury__time__succeeded = (mercury__time__V_4_4 == mercury__time__V_13_13);
#line 43 "private_builtin.opt"
            if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
              mercury__time__V_22_22 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
            else
#line 44 "private_builtin.opt"
              mercury__time__V_22_22 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
          }
#line 1606 "time.c"
        mercury__time__succeeded = (mercury__time__V_22_22 == (MR_Integer) 0);
#line 58 "time.m"
        mercury__time__succeeded = !(mercury__time__succeeded);
#line 58 "time.m"
        if (mercury__time__succeeded)
#line 58 "time.m"
          *mercury__time__HeadVar__1_1 = mercury__time__V_22_22;
#line 58 "time.m"
        else
#line 58 "time.m"
          {
#line 58 "time.m"
            MR_Word mercury__time__V_23_23;

#line 35 "private_builtin.opt"
            mercury__time__succeeded = (mercury__time__V_5_5 < mercury__time__V_14_14);
#line 38 "private_builtin.opt"
            if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
              mercury__time__V_23_23 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
            else
#line 43 "private_builtin.opt"
              {
#line 40 "private_builtin.opt"
                mercury__time__succeeded = (mercury__time__V_5_5 == mercury__time__V_14_14);
#line 43 "private_builtin.opt"
                if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                  mercury__time__V_23_23 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                else
#line 44 "private_builtin.opt"
                  mercury__time__V_23_23 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
              }
#line 1643 "time.c"
            mercury__time__succeeded = (mercury__time__V_23_23 == (MR_Integer) 0);
#line 58 "time.m"
            mercury__time__succeeded = !(mercury__time__succeeded);
#line 58 "time.m"
            if (mercury__time__succeeded)
#line 58 "time.m"
              *mercury__time__HeadVar__1_1 = mercury__time__V_23_23;
#line 58 "time.m"
            else
#line 58 "time.m"
              {
#line 58 "time.m"
                MR_Word mercury__time__V_24_24;

#line 35 "private_builtin.opt"
                mercury__time__succeeded = (mercury__time__V_6_6 < mercury__time__V_15_15);
#line 38 "private_builtin.opt"
                if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
                  mercury__time__V_24_24 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                else
#line 43 "private_builtin.opt"
                  {
#line 40 "private_builtin.opt"
                    mercury__time__succeeded = (mercury__time__V_6_6 == mercury__time__V_15_15);
#line 43 "private_builtin.opt"
                    if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                      mercury__time__V_24_24 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                    else
#line 44 "private_builtin.opt"
                      mercury__time__V_24_24 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                  }
#line 1680 "time.c"
                mercury__time__succeeded = (mercury__time__V_24_24 == (MR_Integer) 0);
#line 58 "time.m"
                mercury__time__succeeded = !(mercury__time__succeeded);
#line 58 "time.m"
                if (mercury__time__succeeded)
#line 58 "time.m"
                  *mercury__time__HeadVar__1_1 = mercury__time__V_24_24;
#line 58 "time.m"
                else
#line 58 "time.m"
                  {
#line 58 "time.m"
                    MR_Word mercury__time__V_25_25;

#line 35 "private_builtin.opt"
                    mercury__time__succeeded = (mercury__time__V_7_7 < mercury__time__V_16_16);
#line 38 "private_builtin.opt"
                    if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
                      mercury__time__V_25_25 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                    else
#line 43 "private_builtin.opt"
                      {
#line 40 "private_builtin.opt"
                        mercury__time__succeeded = (mercury__time__V_7_7 == mercury__time__V_16_16);
#line 43 "private_builtin.opt"
                        if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                          mercury__time__V_25_25 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                        else
#line 44 "private_builtin.opt"
                          mercury__time__V_25_25 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                      }
#line 1717 "time.c"
                    mercury__time__succeeded = (mercury__time__V_25_25 == (MR_Integer) 0);
#line 58 "time.m"
                    mercury__time__succeeded = !(mercury__time__succeeded);
#line 58 "time.m"
                    if (mercury__time__succeeded)
#line 58 "time.m"
                      *mercury__time__HeadVar__1_1 = mercury__time__V_25_25;
#line 58 "time.m"
                    else
#line 58 "time.m"
                      {
#line 58 "time.m"
                        MR_Word mercury__time__V_26_26;

#line 35 "private_builtin.opt"
                        mercury__time__succeeded = (mercury__time__V_8_8 < mercury__time__V_17_17);
#line 38 "private_builtin.opt"
                        if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
                          mercury__time__V_26_26 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                        else
#line 43 "private_builtin.opt"
                          {
#line 40 "private_builtin.opt"
                            mercury__time__succeeded = (mercury__time__V_8_8 == mercury__time__V_17_17);
#line 43 "private_builtin.opt"
                            if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                              mercury__time__V_26_26 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                            else
#line 44 "private_builtin.opt"
                              mercury__time__V_26_26 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                          }
#line 1754 "time.c"
                        mercury__time__succeeded = (mercury__time__V_26_26 == (MR_Integer) 0);
#line 58 "time.m"
                        mercury__time__succeeded = !(mercury__time__succeeded);
#line 58 "time.m"
                        if (mercury__time__succeeded)
#line 58 "time.m"
                          *mercury__time__HeadVar__1_1 = mercury__time__V_26_26;
#line 58 "time.m"
                        else
#line 58 "time.m"
                          {
#line 58 "time.m"
                            MR_Word mercury__time__V_27_27;

#line 35 "private_builtin.opt"
                            mercury__time__succeeded = (mercury__time__V_9_9 < mercury__time__V_18_18);
#line 38 "private_builtin.opt"
                            if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
                              mercury__time__V_27_27 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                            else
#line 43 "private_builtin.opt"
                              {
#line 40 "private_builtin.opt"
                                mercury__time__succeeded = (mercury__time__V_9_9 == mercury__time__V_18_18);
#line 43 "private_builtin.opt"
                                if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                                  mercury__time__V_27_27 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                                else
#line 44 "private_builtin.opt"
                                  mercury__time__V_27_27 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                              }
#line 1791 "time.c"
                            mercury__time__succeeded = (mercury__time__V_27_27 == (MR_Integer) 0);
#line 58 "time.m"
                            mercury__time__succeeded = !(mercury__time__succeeded);
#line 58 "time.m"
                            if (mercury__time__succeeded)
#line 58 "time.m"
                              *mercury__time__HeadVar__1_1 = mercury__time__V_27_27;
#line 58 "time.m"
                            else
#line 58 "time.m"
                              {
#line 58 "time.m"
                                MR_Word mercury__time__V_28_28;

#line 35 "private_builtin.opt"
                                mercury__time__succeeded = (mercury__time__V_10_10 < mercury__time__V_19_19);
#line 38 "private_builtin.opt"
                                if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
                                  mercury__time__V_28_28 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                                else
#line 43 "private_builtin.opt"
                                  {
#line 40 "private_builtin.opt"
                                    mercury__time__succeeded = (mercury__time__V_10_10 == mercury__time__V_19_19);
#line 43 "private_builtin.opt"
                                    if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                                      mercury__time__V_28_28 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                                    else
#line 44 "private_builtin.opt"
                                      mercury__time__V_28_28 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                                  }
#line 1828 "time.c"
                                mercury__time__succeeded = (mercury__time__V_28_28 == (MR_Integer) 0);
#line 58 "time.m"
                                mercury__time__succeeded = !(mercury__time__succeeded);
#line 58 "time.m"
                                if (mercury__time__succeeded)
#line 58 "time.m"
                                  *mercury__time__HeadVar__1_1 = mercury__time__V_28_28;
#line 58 "time.m"
                                else
#line 58 "time.m"
                                  {
#line 58 "time.m"
                                    MR_Word mercury__time__V_29_29;

#line 35 "private_builtin.opt"
                                    mercury__time__succeeded = (mercury__time__V_11_11 < mercury__time__V_20_20);
#line 38 "private_builtin.opt"
                                    if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
                                      mercury__time__V_29_29 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
                                    else
#line 43 "private_builtin.opt"
                                      {
#line 40 "private_builtin.opt"
                                        mercury__time__succeeded = (mercury__time__V_11_11 == mercury__time__V_20_20);
#line 43 "private_builtin.opt"
                                        if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
                                          mercury__time__V_29_29 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
                                        else
#line 44 "private_builtin.opt"
                                          mercury__time__V_29_29 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
                                      }
#line 1865 "time.c"
                                    mercury__time__succeeded = (mercury__time__V_29_29 == (MR_Integer) 0);
#line 58 "time.m"
                                    mercury__time__succeeded = !(mercury__time__succeeded);
#line 58 "time.m"
                                    if (mercury__time__succeeded)
#line 58 "time.m"
                                      *mercury__time__HeadVar__1_1 = mercury__time__V_29_29;
#line 58 "time.m"
                                    else
#line 58 "time.m"
                                      {
#line 58 "time.m"
                                        MR_Word mercury__time__TypeInfo_40_40 = (MR_Word) &mercury__time_scalar_common_1[0];

#line 58 "time.m"
                                        {
#line 58 "time.m"
                                          mercury__builtin__compare_3_p_0(mercury__time__TypeInfo_40_40, mercury__time__HeadVar__1_1, ((MR_Box) (mercury__time__V_12_12)), ((MR_Box) (mercury__time__V_21_21)));
#line 58 "time.m"
                                          return;
                                        }
#line 58 "time.m"
                                      }
#line 58 "time.m"
                                  }
#line 58 "time.m"
                              }
#line 58 "time.m"
                          }
#line 58 "time.m"
                      }
#line 58 "time.m"
                  }
#line 58 "time.m"
              }
#line 58 "time.m"
          }
#line 58 "time.m"
      }
#line 58 "time.m"
  }
#line 58 "time.m"
}

#line 58 "time.m"
MR_bool MR_CALL 
mercury__time____Unify____tm_0_0(
#line 58 "time.m"
  MR_Word mercury__time__HeadVar__1_1,
#line 58 "time.m"
  MR_Word mercury__time__HeadVar__2_2)
#line 58 "time.m"
{
#line 58 "time.m"
  {
#line 58 "time.m"
    MR_bool mercury__time__succeeded;
#line 58 "time.m"
    MR_Integer mercury__time__CastX_21 = (MR_Integer) mercury__time__HeadVar__1_1;
#line 58 "time.m"
    MR_Integer mercury__time__CastY_22 = (MR_Integer) mercury__time__HeadVar__2_2;

#line 58 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_21 == mercury__time__CastY_22);
#line 58 "time.m"
    if (mercury__time__succeeded)
#line 58 "time.m"
      mercury__time__succeeded = MR_TRUE;
#line 58 "time.m"
    else
#line 58 "time.m"
      {
#line 58 "time.m"
        MR_Word mercury__time__TypeInfo_23_23;
#line 58 "time.m"
        MR_Integer mercury__time__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 0)));
#line 58 "time.m"
        MR_Integer mercury__time__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 1)));
#line 58 "time.m"
        MR_Integer mercury__time__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 2)));
#line 58 "time.m"
        MR_Integer mercury__time__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 3)));
#line 58 "time.m"
        MR_Integer mercury__time__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 4)));
#line 58 "time.m"
        MR_Integer mercury__time__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 5)));
#line 58 "time.m"
        MR_Integer mercury__time__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 6)));
#line 58 "time.m"
        MR_Integer mercury__time__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 7)));
#line 58 "time.m"
        MR_Word mercury__time__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__1_1, (MR_Integer) 8)));
#line 58 "time.m"
        MR_Integer mercury__time__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "time.m"
        MR_Integer mercury__time__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 1)));
#line 58 "time.m"
        MR_Integer mercury__time__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 2)));
#line 58 "time.m"
        MR_Integer mercury__time__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 3)));
#line 58 "time.m"
        MR_Integer mercury__time__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 4)));
#line 58 "time.m"
        MR_Integer mercury__time__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 5)));
#line 58 "time.m"
        MR_Integer mercury__time__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 6)));
#line 58 "time.m"
        MR_Integer mercury__time__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 7)));
#line 58 "time.m"
        MR_Word mercury__time__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__HeadVar__2_2, (MR_Integer) 8)));

#line 1977 "time.c"
        mercury__time__succeeded = (mercury__time__V_3_3 == mercury__time__V_12_12);
#line 58 "time.m"
        if (mercury__time__succeeded)
#line 58 "time.m"
          {
#line 1983 "time.c"
            mercury__time__succeeded = (mercury__time__V_4_4 == mercury__time__V_13_13);
#line 58 "time.m"
            if (mercury__time__succeeded)
#line 58 "time.m"
              {
#line 1989 "time.c"
                mercury__time__succeeded = (mercury__time__V_5_5 == mercury__time__V_14_14);
#line 58 "time.m"
                if (mercury__time__succeeded)
#line 58 "time.m"
                  {
#line 1995 "time.c"
                    mercury__time__succeeded = (mercury__time__V_6_6 == mercury__time__V_15_15);
#line 58 "time.m"
                    if (mercury__time__succeeded)
#line 58 "time.m"
                      {
#line 2001 "time.c"
                        mercury__time__succeeded = (mercury__time__V_7_7 == mercury__time__V_16_16);
#line 58 "time.m"
                        if (mercury__time__succeeded)
#line 58 "time.m"
                          {
#line 2007 "time.c"
                            mercury__time__succeeded = (mercury__time__V_8_8 == mercury__time__V_17_17);
#line 58 "time.m"
                            if (mercury__time__succeeded)
#line 58 "time.m"
                              {
#line 2013 "time.c"
                                mercury__time__succeeded = (mercury__time__V_9_9 == mercury__time__V_18_18);
#line 58 "time.m"
                                if (mercury__time__succeeded)
#line 58 "time.m"
                                  {
#line 2019 "time.c"
                                    mercury__time__succeeded = (mercury__time__V_10_10 == mercury__time__V_19_19);
#line 58 "time.m"
                                    if (mercury__time__succeeded)
#line 58 "time.m"
                                      {
#line 2025 "time.c"
                                        mercury__time__TypeInfo_23_23 = (MR_Word) &mercury__time_scalar_common_1[0];
#line 2027 "time.c"
                                        {
#line 2029 "time.c"
                                          return mercury__time__succeeded = mercury__builtin__unify_2_p_0(mercury__time__TypeInfo_23_23, ((MR_Box) (mercury__time__V_11_11)), ((MR_Box) (mercury__time__V_20_20)));
                                        }
#line 58 "time.m"
                                      }
#line 58 "time.m"
                                  }
#line 58 "time.m"
                              }
#line 58 "time.m"
                          }
#line 58 "time.m"
                      }
#line 58 "time.m"
                  }
#line 58 "time.m"
              }
#line 58 "time.m"
          }
#line 58 "time.m"
      }
#line 58 "time.m"
    return mercury__time__succeeded;
#line 58 "time.m"
  }
#line 58 "time.m"
}

#line 244 "time.m"
void MR_CALL 
mercury__time____Compare____time_t_rep_0_0(
#line 244 "time.m"
  MR_Word * mercury__time__HeadVar__1_1,
#line 244 "time.m"
  MR_Box mercury__time__HeadVar__2_2,
#line 244 "time.m"
  MR_Box mercury__time__HeadVar__3_3)
#line 244 "time.m"
{
#line 244 "time.m"
  {
#line 244 "time.m"
    MR_bool mercury__time__succeeded;
#line 244 "time.m"
    MR_Integer mercury__time__CastX_4 = (MR_Integer) mercury__time__HeadVar__2_2;
#line 244 "time.m"
    MR_Integer mercury__time__CastY_5 = (MR_Integer) mercury__time__HeadVar__3_3;

#line 244 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_4 == mercury__time__CastY_5);
#line 244 "time.m"
    if (mercury__time__succeeded)
#line 244 "time.m"
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 244 "time.m"
    else
#line 244 "time.m"
      {
#line 244 "time.m"
        mercury__time__compare_time_t_reps_3_p_0(mercury__time__HeadVar__1_1, mercury__time__HeadVar__2_2, mercury__time__HeadVar__3_3);
#line 244 "time.m"
        return;
      }
#line 244 "time.m"
  }
#line 244 "time.m"
}

#line 244 "time.m"
MR_bool MR_CALL 
mercury__time____Unify____time_t_rep_0_0(
#line 244 "time.m"
  MR_Box mercury__time__HeadVar__1_1,
#line 244 "time.m"
  MR_Box mercury__time__HeadVar__2_2)
#line 244 "time.m"
{
#line 244 "time.m"
  {
#line 244 "time.m"
    MR_bool mercury__time__succeeded;
#line 244 "time.m"
    MR_Integer mercury__time__CastX_4 = (MR_Integer) mercury__time__HeadVar__1_1;
#line 244 "time.m"
    MR_Integer mercury__time__CastY_5 = (MR_Integer) mercury__time__HeadVar__2_2;

#line 244 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_4 == mercury__time__CastY_5);
#line 244 "time.m"
    if (mercury__time__succeeded)
#line 244 "time.m"
      mercury__time__succeeded = MR_TRUE;
#line 244 "time.m"
    else
#line 244 "time.m"
      {
#line 244 "time.m"
        MR_Word mercury__time__V_3_3;

#line 244 "time.m"
        {
#line 244 "time.m"
          mercury__time__compare_time_t_reps_3_p_0(&mercury__time__V_3_3, mercury__time__HeadVar__1_1, mercury__time__HeadVar__2_2);
        }
#line 244 "time.m"
        mercury__time__succeeded = (mercury__time__V_3_3 == (MR_Integer) 0);
#line 244 "time.m"
      }
#line 244 "time.m"
    return mercury__time__succeeded;
#line 244 "time.m"
  }
#line 244 "time.m"
}

#line 228 "time.m"
void MR_CALL 
mercury__time____Compare____time_t_0_0(
#line 228 "time.m"
  MR_Word * mercury__time__HeadVar__1_1,
#line 228 "time.m"
  MR_Word mercury__time__HeadVar__2_2,
#line 228 "time.m"
  MR_Word mercury__time__HeadVar__3_3)
#line 228 "time.m"
{
#line 228 "time.m"
  {
#line 228 "time.m"
    MR_bool mercury__time__succeeded;
#line 228 "time.m"
    MR_Integer mercury__time__CastX_6 = (MR_Integer) mercury__time__HeadVar__2_2;
#line 228 "time.m"
    MR_Integer mercury__time__CastY_7 = (MR_Integer) mercury__time__HeadVar__3_3;

#line 228 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_6 == mercury__time__CastY_7);
#line 228 "time.m"
    if (mercury__time__succeeded)
#line 2168 "time.c"
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "time.m"
    else
#line 228 "time.m"
      {
#line 228 "time.m"
        MR_Box mercury__time__V_4_4 = (MR_Box) mercury__time__HeadVar__2_2;
#line 228 "time.m"
        MR_Box mercury__time__V_5_5 = (MR_Box) mercury__time__HeadVar__3_3;
#line 244 "time.m"
        MR_Integer mercury__time__CastX_9 = (MR_Integer) mercury__time__V_4_4;
#line 244 "time.m"
        MR_Integer mercury__time__CastY_10 = (MR_Integer) mercury__time__V_5_5;

#line 244 "time.m"
        mercury__time__succeeded = (mercury__time__CastX_9 == mercury__time__CastY_10);
#line 244 "time.m"
        if (mercury__time__succeeded)
#line 244 "time.m"
          *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 244 "time.m"
        else
#line 244 "time.m"
          {
#line 244 "time.m"
            mercury__time__compare_time_t_reps_3_p_0(mercury__time__HeadVar__1_1, mercury__time__V_4_4, mercury__time__V_5_5);
#line 244 "time.m"
            return;
          }
#line 228 "time.m"
      }
#line 228 "time.m"
  }
#line 228 "time.m"
}

#line 228 "time.m"
MR_bool MR_CALL 
mercury__time____Unify____time_t_0_0(
#line 228 "time.m"
  MR_Word mercury__time__HeadVar__1_1,
#line 228 "time.m"
  MR_Word mercury__time__HeadVar__2_2)
#line 228 "time.m"
{
#line 228 "time.m"
  {
#line 228 "time.m"
    MR_bool mercury__time__succeeded;
#line 228 "time.m"
    MR_Integer mercury__time__CastX_5 = (MR_Integer) mercury__time__HeadVar__1_1;
#line 228 "time.m"
    MR_Integer mercury__time__CastY_6 = (MR_Integer) mercury__time__HeadVar__2_2;

#line 228 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_5 == mercury__time__CastY_6);
#line 228 "time.m"
    if (mercury__time__succeeded)
#line 228 "time.m"
      mercury__time__succeeded = MR_TRUE;
#line 228 "time.m"
    else
#line 228 "time.m"
      {
#line 228 "time.m"
        MR_Box mercury__time__V_3_3 = (MR_Box) mercury__time__HeadVar__1_1;
#line 228 "time.m"
        MR_Box mercury__time__V_4_4 = (MR_Box) mercury__time__HeadVar__2_2;
#line 244 "time.m"
        MR_Integer mercury__time__CastX_8 = (MR_Integer) mercury__time__V_3_3;
#line 244 "time.m"
        MR_Integer mercury__time__CastY_9 = (MR_Integer) mercury__time__V_4_4;

#line 244 "time.m"
        mercury__time__succeeded = (mercury__time__CastX_8 == mercury__time__CastY_9);
#line 244 "time.m"
        if (mercury__time__succeeded)
#line 244 "time.m"
          mercury__time__succeeded = MR_TRUE;
#line 244 "time.m"
        else
#line 244 "time.m"
          {
#line 244 "time.m"
            MR_Word mercury__time__V_7_7;

#line 244 "time.m"
            {
#line 244 "time.m"
              mercury__time__compare_time_t_reps_3_p_0(&mercury__time__V_7_7, mercury__time__V_3_3, mercury__time__V_4_4);
            }
#line 244 "time.m"
            mercury__time__succeeded = (mercury__time__V_7_7 == (MR_Integer) 0);
#line 244 "time.m"
          }
#line 228 "time.m"
      }
#line 228 "time.m"
    return mercury__time__succeeded;
#line 228 "time.m"
  }
#line 228 "time.m"
}

#line 79 "time.m"
void MR_CALL 
mercury__time____Compare____time_error_0_0(
#line 79 "time.m"
  MR_Word * mercury__time__HeadVar__1_1,
#line 79 "time.m"
  MR_Word mercury__time__HeadVar__2_2,
#line 79 "time.m"
  MR_Word mercury__time__HeadVar__3_3)
#line 79 "time.m"
{
#line 79 "time.m"
  {
#line 79 "time.m"
    MR_bool mercury__time__succeeded;
#line 79 "time.m"
    MR_Integer mercury__time__CastX_6 = (MR_Integer) mercury__time__HeadVar__2_2;
#line 79 "time.m"
    MR_Integer mercury__time__CastY_7 = (MR_Integer) mercury__time__HeadVar__3_3;

#line 79 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_6 == mercury__time__CastY_7);
#line 79 "time.m"
    if (mercury__time__succeeded)
#line 2297 "time.c"
      *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "time.m"
    else
#line 79 "time.m"
      {
#line 79 "time.m"
        MR_String mercury__time__V_4_4 = (MR_String) mercury__time__HeadVar__2_2;
#line 79 "time.m"
        MR_String mercury__time__V_5_5 = (MR_String) mercury__time__HeadVar__3_3;
#line 79 "time.m"
        MR_Integer mercury__time__Res_7_12;

#line 99 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__time____Compare____time_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__time__V_4_4 ;
	S2 =  mercury__time__V_5_5 ;
		{
#line 99 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2325 "time.c"

		;}
#undef MR_PROC_LABEL
	 mercury__time__Res_7_12  = Res;
#line 99 "private_builtin.opt"
}
#line 71 "private_builtin.opt"
        mercury__time__succeeded = (mercury__time__Res_7_12 < (MR_Integer) 0);
#line 74 "private_builtin.opt"
        if (mercury__time__succeeded)
#line 73 "private_builtin.opt"
          *mercury__time__HeadVar__1_1 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
        else
#line 79 "private_builtin.opt"
          {
#line 76 "private_builtin.opt"
            mercury__time__succeeded = (mercury__time__Res_7_12 == (MR_Integer) 0);
#line 79 "private_builtin.opt"
            if (mercury__time__succeeded)
#line 78 "private_builtin.opt"
              *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
            else
#line 80 "private_builtin.opt"
              *mercury__time__HeadVar__1_1 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
          }
#line 79 "time.m"
      }
#line 79 "time.m"
  }
#line 79 "time.m"
}

#line 79 "time.m"
MR_bool MR_CALL 
mercury__time____Unify____time_error_0_0(
#line 79 "time.m"
  MR_Word mercury__time__HeadVar__1_1,
#line 79 "time.m"
  MR_Word mercury__time__HeadVar__2_2)
#line 79 "time.m"
{
#line 79 "time.m"
  {
#line 79 "time.m"
    MR_bool mercury__time__succeeded;
#line 79 "time.m"
    MR_Integer mercury__time__CastX_5 = (MR_Integer) mercury__time__HeadVar__1_1;
#line 79 "time.m"
    MR_Integer mercury__time__CastY_6 = (MR_Integer) mercury__time__HeadVar__2_2;

#line 79 "time.m"
    mercury__time__succeeded = (mercury__time__CastX_5 == mercury__time__CastY_6);
#line 79 "time.m"
    if (mercury__time__succeeded)
#line 79 "time.m"
      mercury__time__succeeded = MR_TRUE;
#line 79 "time.m"
    else
#line 79 "time.m"
      {
#line 79 "time.m"
        MR_String mercury__time__V_3_3 = (MR_String) mercury__time__HeadVar__1_1;
#line 79 "time.m"
        MR_String mercury__time__V_4_4 = (MR_String) mercury__time__HeadVar__2_2;

#line 2394 "time.c"
        mercury__time__succeeded = (strcmp(mercury__time__V_3_3, mercury__time__V_4_4) == 0);
#line 79 "time.m"
      }
#line 79 "time.m"
    return mercury__time__succeeded;
#line 79 "time.m"
  }
#line 79 "time.m"
}

#line 72 "time.m"
void MR_CALL 
mercury__time____Compare____dst_0_0(
#line 72 "time.m"
  MR_Word * mercury__time__HeadVar__1_1,
#line 72 "time.m"
  MR_Word mercury__time__HeadVar__2_2,
#line 72 "time.m"
  MR_Word mercury__time__HeadVar__3_3)
#line 72 "time.m"
{
#line 72 "time.m"
  {
#line 72 "time.m"
    MR_bool mercury__time__succeeded;
#line 72 "time.m"
    MR_Integer mercury__time__Cast_HeadVar1_4 = (MR_Integer) mercury__time__HeadVar__2_2;
#line 72 "time.m"
    MR_Integer mercury__time__Cast_HeadVar2_5 = (MR_Integer) mercury__time__HeadVar__3_3;

#line 35 "private_builtin.opt"
    mercury__time__succeeded = (mercury__time__Cast_HeadVar1_4 < mercury__time__Cast_HeadVar2_5);
#line 38 "private_builtin.opt"
    if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
      *mercury__time__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
    else
#line 43 "private_builtin.opt"
      {
#line 40 "private_builtin.opt"
        mercury__time__succeeded = (mercury__time__Cast_HeadVar1_4 == mercury__time__Cast_HeadVar2_5);
#line 43 "private_builtin.opt"
        if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
          *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
        else
#line 44 "private_builtin.opt"
          *mercury__time__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
      }
#line 72 "time.m"
  }
#line 72 "time.m"
}

#line 72 "time.m"
MR_bool MR_CALL 
mercury__time____Unify____dst_0_0(
#line 72 "time.m"
  MR_Word mercury__time__HeadVar__2_1,
#line 72 "time.m"
  MR_Word mercury__time__HeadVar__2_2)
#line 72 "time.m"
{
#line 2461 "time.c"
  {
#line 2463 "time.c"
    MR_bool mercury__time__succeeded = (mercury__time__HeadVar__2_1 == mercury__time__HeadVar__2_2);

#line 2466 "time.c"
    return mercury__time__succeeded;
#line 2468 "time.c"
  }
#line 72 "time.m"
}

#line 34 "time.m"
void MR_CALL 
mercury__time____Compare____clock_t_0_0(
#line 34 "time.m"
  MR_Word * mercury__time__HeadVar__1_1,
#line 34 "time.m"
  MR_Integer mercury__time__HeadVar__2_2,
#line 34 "time.m"
  MR_Integer mercury__time__HeadVar__3_3)
#line 34 "time.m"
{
#line 34 "time.m"
  {
#line 34 "time.m"
    MR_bool mercury__time__succeeded;
#line 34 "time.m"
    MR_Integer mercury__time__Cast_HeadVar1_4 = mercury__time__HeadVar__2_2;
#line 34 "time.m"
    MR_Integer mercury__time__Cast_HeadVar2_5 = mercury__time__HeadVar__3_3;

#line 35 "private_builtin.opt"
    mercury__time__succeeded = (mercury__time__Cast_HeadVar1_4 < mercury__time__Cast_HeadVar2_5);
#line 38 "private_builtin.opt"
    if (mercury__time__succeeded)
#line 37 "private_builtin.opt"
      *mercury__time__HeadVar__1_1 = (MR_Integer) 1;
#line 38 "private_builtin.opt"
    else
#line 43 "private_builtin.opt"
      {
#line 40 "private_builtin.opt"
        mercury__time__succeeded = (mercury__time__Cast_HeadVar1_4 == mercury__time__Cast_HeadVar2_5);
#line 43 "private_builtin.opt"
        if (mercury__time__succeeded)
#line 42 "private_builtin.opt"
          *mercury__time__HeadVar__1_1 = (MR_Integer) 0;
#line 43 "private_builtin.opt"
        else
#line 44 "private_builtin.opt"
          *mercury__time__HeadVar__1_1 = (MR_Integer) 2;
#line 43 "private_builtin.opt"
      }
#line 34 "time.m"
  }
#line 34 "time.m"
}

#line 34 "time.m"
MR_bool MR_CALL 
mercury__time____Unify____clock_t_0_0(
#line 34 "time.m"
  MR_Integer mercury__time__HeadVar__1_1,
#line 34 "time.m"
  MR_Integer mercury__time__HeadVar__2_2)
#line 34 "time.m"
{
#line 34 "time.m"
  {
#line 34 "time.m"
    MR_bool mercury__time__succeeded;
#line 34 "time.m"
    MR_Integer mercury__time__Cast_HeadVar1_3 = mercury__time__HeadVar__1_1;
#line 34 "time.m"
    MR_Integer mercury__time__Cast_HeadVar2_4 = mercury__time__HeadVar__2_2;

#line 34 "time.m"
    mercury__time__succeeded = (mercury__time__Cast_HeadVar1_3 == mercury__time__Cast_HeadVar2_4);
#line 34 "time.m"
    return mercury__time__succeeded;
#line 34 "time.m"
  }
#line 34 "time.m"
}

#line 1022 "time.m"
MR_Word MR_CALL 
mercury__time__construct_time_t_1_f_0(
#line 1022 "time.m"
  MR_Box mercury__time__T_3)
#line 1022 "time.m"
{
#line 1035 "time.m"
  {
#line 1035 "time.m"
    MR_bool mercury__time__succeeded;
#line 1035 "time.m"
    MR_Word mercury__time__HeadVar__2_2 = (MR_Word) mercury__time__T_3;

#line 1035 "time.m"
    return mercury__time__HeadVar__2_2;
#line 1035 "time.m"
  }
#line 1022 "time.m"
}

#line 986 "time.m"
static MR_String MR_CALL 
mercury__time__mon_name_1_f_0(
#line 986 "time.m"
  MR_Integer mercury__time__N_3)
#line 986 "time.m"
{
#line 991 "time.m"
  {
#line 991 "time.m"
    MR_bool mercury__time__succeeded;
#line 991 "time.m"
    MR_String mercury__time__Name_4;
#line 991 "time.m"
    MR_String mercury__time__Name0_5;

#line 997 "time.m"
    if ((((MR_Unsigned) mercury__time__N_3) <= ((MR_Unsigned) (MR_Integer) 11)))
#line 997 "time.m"
      {
#line 997 "time.m"
        mercury__time__Name0_5 = ((&mercury__time_vector_common_6[7 + mercury__time__N_3]))->mercury__time__vector_common_type_6_0__vct_6_f_0;
#line 997 "time.m"
        mercury__time__succeeded = MR_TRUE;
#line 997 "time.m"
      }
#line 997 "time.m"
    else
#line 997 "time.m"
      mercury__time__succeeded = MR_FALSE;
#line 991 "time.m"
    if (mercury__time__succeeded)
#line 990 "time.m"
      mercury__time__Name_4 = mercury__time__Name0_5;
#line 991 "time.m"
    else
#line 992 "time.m"
      {
#line 992 "time.m"
        {
#line 992 "time.m"
          mercury__require__error_1_p_0((MR_String) "time: mon_name");
        }
#line 992 "time.m"
      }
#line 991 "time.m"
    return mercury__time__Name_4;
#line 991 "time.m"
  }
#line 986 "time.m"
}

#line 967 "time.m"
static MR_String MR_CALL 
mercury__time__wday_name_1_f_0(
#line 967 "time.m"
  MR_Integer mercury__time__N_3)
#line 967 "time.m"
{
#line 972 "time.m"
  {
#line 972 "time.m"
    MR_bool mercury__time__succeeded;
#line 972 "time.m"
    MR_String mercury__time__Name_4;
#line 972 "time.m"
    MR_String mercury__time__Name0_5;

#line 978 "time.m"
    if ((((MR_Unsigned) mercury__time__N_3) <= ((MR_Unsigned) (MR_Integer) 6)))
#line 978 "time.m"
      {
#line 978 "time.m"
        mercury__time__Name0_5 = ((&mercury__time_vector_common_6[0 + mercury__time__N_3]))->mercury__time__vector_common_type_6_0__vct_6_f_0;
#line 978 "time.m"
        mercury__time__succeeded = MR_TRUE;
#line 978 "time.m"
      }
#line 978 "time.m"
    else
#line 978 "time.m"
      mercury__time__succeeded = MR_FALSE;
#line 972 "time.m"
    if (mercury__time__succeeded)
#line 971 "time.m"
      mercury__time__Name_4 = mercury__time__Name0_5;
#line 972 "time.m"
    else
#line 973 "time.m"
      {
#line 973 "time.m"
        {
#line 973 "time.m"
          mercury__require__error_1_p_0((MR_String) "time: wday_name");
        }
#line 973 "time.m"
      }
#line 972 "time.m"
    return mercury__time__Name_4;
#line 972 "time.m"
  }
#line 967 "time.m"
}

#line 946 "time.m"
MR_Integer MR_CALL 
mercury__time__maybe_dst_to_int_1_f_0(
#line 946 "time.m"
  MR_Word mercury__time__M_3)
#line 946 "time.m"
{
#line 949 "time.m"
  {
#line 949 "time.m"
    MR_bool mercury__time__succeeded;
#line 949 "time.m"
    MR_Integer mercury__time__N_4;

#line 949 "time.m"
    if ((mercury__time__M_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 953 "time.m"
      mercury__time__N_4 = (MR_Integer) -1;
#line 949 "time.m"
    else
#line 949 "time.m"
      {
#line 949 "time.m"
        MR_Word mercury__time__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__time__M_3, (MR_Integer) 0)));

#line 949 "time.m"
#line 949 "time.m"
        switch (mercury__time__V_7_7) {
#line 949 "time.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 949 "time.m"
          case (MR_Integer) 1:
#line 950 "time.m"
            mercury__time__N_4 = (MR_Integer) 1;
#line 949 "time.m"
            break;
#line 949 "time.m"
          case (MR_Integer) 0:
#line 952 "time.m"
            mercury__time__N_4 = (MR_Integer) 0;
#line 949 "time.m"
            break;
#line 949 "time.m"
        }
#line 949 "time.m"
      }
#line 949 "time.m"
    return mercury__time__N_4;
#line 949 "time.m"
  }
#line 946 "time.m"
}

#line 832 "time.m"
void MR_CALL 
mercury__time__c_mktime_10_p_0(
#line 832 "time.m"
  MR_Integer mercury__time__Yr_1,
#line 832 "time.m"
  MR_Integer mercury__time__Mnt_2,
#line 832 "time.m"
  MR_Integer mercury__time__MD_3,
#line 832 "time.m"
  MR_Integer mercury__time__Hrs_4,
#line 832 "time.m"
  MR_Integer mercury__time__Min_5,
#line 832 "time.m"
  MR_Integer mercury__time__Sec_6,
#line 832 "time.m"
  MR_Integer mercury__time__YD_7,
#line 832 "time.m"
  MR_Integer mercury__time__WD_8,
#line 832 "time.m"
  MR_Integer mercury__time__N_9,
#line 832 "time.m"
  MR_Box * mercury__time__Time_10)
#line 832 "time.m"
{
#line 835 "time.m"
  {
#line 835 "time.m"
    MR_bool mercury__time__succeeded;

#line 839 "time.m"
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
#line 839 "time.m"
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
#line 2796 "time.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Time, *mercury__time__Time_10 );
#line 839 "time.m"
}
#line 835 "time.m"
  }
#line 832 "time.m"
}

#line 809 "time.m"
MR_Word MR_CALL 
mercury__time__int_to_maybe_dst_1_f_0(
#line 809 "time.m"
  MR_Integer mercury__time__N_3)
#line 809 "time.m"
{
#line 814 "time.m"
  {
#line 814 "time.m"
    MR_bool mercury__time__succeeded = (mercury__time__N_3 == (MR_Integer) 0);
#line 814 "time.m"
    MR_Word mercury__time__DST_4;

#line 814 "time.m"
    if (mercury__time__succeeded)
#line 813 "time.m"
      {
#line 813 "time.m"
        mercury__time__DST_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__time_scalar_common_5[1]);
#line 813 "time.m"
      }
#line 814 "time.m"
    else
#line 816 "time.m"
      {
#line 814 "time.m"
        mercury__time__succeeded = (mercury__time__N_3 > (MR_Integer) 0);
#line 816 "time.m"
        if (mercury__time__succeeded)
#line 815 "time.m"
          {
#line 815 "time.m"
            mercury__time__DST_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__time_scalar_common_5[2]);
#line 815 "time.m"
          }
#line 816 "time.m"
        else
#line 817 "time.m"
          mercury__time__DST_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 816 "time.m"
      }
#line 814 "time.m"
    return mercury__time__DST_4;
#line 814 "time.m"
  }
#line 809 "time.m"
}

#line 698 "time.m"
void MR_CALL 
mercury__time__c_gmtime_10_p_0(
#line 698 "time.m"
  MR_Box mercury__time__Time_1,
#line 698 "time.m"
  MR_Integer * mercury__time__Yr_2,
#line 698 "time.m"
  MR_Integer * mercury__time__Mnt_3,
#line 698 "time.m"
  MR_Integer * mercury__time__MD_4,
#line 698 "time.m"
  MR_Integer * mercury__time__Hrs_5,
#line 698 "time.m"
  MR_Integer * mercury__time__Min_6,
#line 698 "time.m"
  MR_Integer * mercury__time__Sec_7,
#line 698 "time.m"
  MR_Integer * mercury__time__YD_8,
#line 698 "time.m"
  MR_Integer * mercury__time__WD_9,
#line 698 "time.m"
  MR_Integer * mercury__time__N_10)
#line 698 "time.m"
{
#line 701 "time.m"
  {
#line 701 "time.m"
    MR_bool mercury__time__succeeded;

#line 705 "time.m"
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
#line 705 "time.m"
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
#line 2925 "time.c"

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
#line 705 "time.m"
}
#line 701 "time.m"
  }
#line 698 "time.m"
}

#line 588 "time.m"
void MR_CALL 
mercury__time__c_localtime_10_p_0(
#line 588 "time.m"
  MR_Box mercury__time__Time_1,
#line 588 "time.m"
  MR_Integer * mercury__time__Yr_2,
#line 588 "time.m"
  MR_Integer * mercury__time__Mnt_3,
#line 588 "time.m"
  MR_Integer * mercury__time__MD_4,
#line 588 "time.m"
  MR_Integer * mercury__time__Hrs_5,
#line 588 "time.m"
  MR_Integer * mercury__time__Min_6,
#line 588 "time.m"
  MR_Integer * mercury__time__Sec_7,
#line 588 "time.m"
  MR_Integer * mercury__time__YD_8,
#line 588 "time.m"
  MR_Integer * mercury__time__WD_9,
#line 588 "time.m"
  MR_Integer * mercury__time__N_10)
#line 588 "time.m"
{
#line 591 "time.m"
  {
#line 591 "time.m"
    MR_bool mercury__time__succeeded;

#line 595 "time.m"
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
#line 595 "time.m"

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

#line 3013 "time.c"

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
#line 595 "time.m"
}
#line 591 "time.m"
  }
#line 588 "time.m"
}

#line 551 "time.m"
void MR_CALL 
mercury__time__c_difftime_3_p_0(
#line 551 "time.m"
  MR_Box mercury__time__T1_1,
#line 551 "time.m"
  MR_Box mercury__time__T0_2,
#line 551 "time.m"
  MR_Float * mercury__time__Diff_3)
#line 551 "time.m"
{
#line 553 "time.m"
  {
#line 553 "time.m"
    MR_bool mercury__time__succeeded;

#line 556 "time.m"
{
#define MR_PROC_LABEL mercury__time__c_difftime_3_p_0

	time_t T1;
	time_t T0;
	MR_Float Diff;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__T1_1 , T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__T0_2 , T0);
		{
#line 556 "time.m"

    Diff = (MR_Float) difftime(T1, T0);

#line 3064 "time.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__time__Diff_3  = Diff;
#line 556 "time.m"
}
#line 553 "time.m"
  }
#line 551 "time.m"
}

#line 517 "time.m"
MR_bool MR_CALL 
mercury__time__time_t_is_invalid_1_p_0(
#line 517 "time.m"
  MR_Box mercury__time__Val_1)
#line 517 "time.m"
{
#line 519 "time.m"
  {
#line 519 "time.m"
    MR_bool mercury__time__succeeded;

#line 522 "time.m"
{
#define MR_PROC_LABEL mercury__time__time_t_is_invalid_1_p_0

	time_t Val;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Val_1 , Val);
		{
#line 522 "time.m"

    SUCCESS_INDICATOR = (Val == -1);

#line 3101 "time.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 522 "time.m"
	}
mercury__time__succeeded  = SUCCESS_INDICATOR;
}
#line 519 "time.m"
    return mercury__time__succeeded;
#line 519 "time.m"
  }
#line 517 "time.m"
}

#line 490 "time.m"
void MR_CALL 
mercury__time__c_time_3_p_0(
#line 490 "time.m"
  MR_Box * mercury__time__Ret_1)
#line 490 "time.m"
{
#line 492 "time.m"
  {
#line 492 "time.m"
    MR_bool mercury__time__succeeded;

#line 495 "time.m"
{
#define MR_PROC_LABEL mercury__time__c_time_3_p_0

	time_t Ret;

		{
#line 495 "time.m"

    Ret = time(NULL);

#line 3140 "time.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Ret, *mercury__time__Ret_1 );
#line 495 "time.m"
}
#line 492 "time.m"
  }
#line 490 "time.m"
}

#line 448 "time.m"
static MR_Integer MR_CALL 
mercury__time__c_clk_tck_0_f_0(void)
#line 448 "time.m"
{
#line 450 "time.m"
  {
#line 450 "time.m"
    MR_bool mercury__time__succeeded;
#line 450 "time.m"
    MR_Integer mercury__time__Ret_1;

#line 453 "time.m"
{
#define MR_PROC_LABEL mercury__time__c_clk_tck_0_f_0

	MR_Integer Ret;

		{
#line 453 "time.m"

#if defined(MR_CLOCK_TICKS_PER_SECOND)
    Ret = MR_CLOCK_TICKS_PER_SECOND;
#else
    Ret = -1;
#endif

#line 3179 "time.c"

		;}
#undef MR_PROC_LABEL
	 mercury__time__Ret_1  = Ret;
#line 453 "time.m"
}
#line 450 "time.m"
    return mercury__time__Ret_1;
#line 450 "time.m"
  }
#line 448 "time.m"
}

#line 342 "time.m"
void MR_CALL 
mercury__time__c_times_7_p_0(
#line 342 "time.m"
  MR_Integer * mercury__time__Ret_1,
#line 342 "time.m"
  MR_Integer * mercury__time__Ut_2,
#line 342 "time.m"
  MR_Integer * mercury__time__St_3,
#line 342 "time.m"
  MR_Integer * mercury__time__CUt_4,
#line 342 "time.m"
  MR_Integer * mercury__time__CSt_5)
#line 342 "time.m"
{
#line 345 "time.m"
  {
#line 345 "time.m"
    MR_bool mercury__time__succeeded;

#line 350 "time.m"
{
#define MR_PROC_LABEL mercury__time__c_times_7_p_0

	MR_Integer Ret;
	MR_Integer Ut;
	MR_Integer St;
	MR_Integer CUt;
	MR_Integer CSt;

		{
#line 350 "time.m"
{
#ifdef MR_HAVE_POSIX_TIMES
    struct tms t;

    Ret = (MR_Integer) times(&t);

    Ut = (MR_Integer) t.tms_utime;
    St = (MR_Integer) t.tms_stime;
    CUt = (MR_Integer) t.tms_cutime;
    CSt = (MR_Integer) t.tms_cstime;
#else
  #ifdef MR_WIN32
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
#line 3262 "time.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__time__Ret_1  = Ret;
	 *mercury__time__Ut_2  = Ut;
	 *mercury__time__St_3  = St;
	 *mercury__time__CUt_4  = CUt;
	 *mercury__time__CSt_5  = CSt;
#line 350 "time.m"
}
#line 345 "time.m"
  }
#line 342 "time.m"
}

#line 263 "time.m"
void MR_CALL 
mercury__time__c_clock_3_p_0(
#line 263 "time.m"
  MR_Integer * mercury__time__Ret_1)
#line 263 "time.m"
{
#line 265 "time.m"
  {
#line 265 "time.m"
    MR_bool mercury__time__succeeded;

#line 268 "time.m"
{
#define MR_PROC_LABEL mercury__time__c_clock_3_p_0

	MR_Integer Ret;

		{
#line 268 "time.m"

    Ret = (MR_Integer) clock();

#line 3301 "time.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__time__Ret_1  = Ret;
#line 268 "time.m"
}
#line 265 "time.m"
  }
#line 263 "time.m"
}

#line 247 "time.m"
void MR_CALL 
mercury__time__compare_time_t_reps_3_p_0(
#line 247 "time.m"
  MR_Word * mercury__time__Result_4,
#line 247 "time.m"
  MR_Box mercury__time__X_5,
#line 247 "time.m"
  MR_Box mercury__time__Y_6)
#line 247 "time.m"
{
#line 250 "time.m"
  {
#line 250 "time.m"
    MR_bool mercury__time__succeeded;
#line 250 "time.m"
    MR_Float mercury__time__V_7_7;

#line 556 "time.m"
{
#define MR_PROC_LABEL mercury__time__compare_time_t_reps_3_p_0

	time_t T1;
	time_t T0;
	MR_Float Diff;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__X_5 , T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Y_6 , T0);
		{
#line 556 "time.m"

    Diff = (MR_Float) difftime(T1, T0);

#line 3346 "time.c"

		;}
#undef MR_PROC_LABEL
	 mercury__time__V_7_7  = Diff;
#line 556 "time.m"
}
#line 87 "private_builtin.opt"
    mercury__time__succeeded = (mercury__time__V_7_7 < ((MR_Float) 0.0000000000000000));
#line 90 "private_builtin.opt"
    if (mercury__time__succeeded)
#line 89 "private_builtin.opt"
      *mercury__time__Result_4 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
    else
#line 95 "private_builtin.opt"
      {
#line 92 "private_builtin.opt"
        mercury__time__succeeded = (mercury__time__V_7_7 > ((MR_Float) 0.0000000000000000));
#line 95 "private_builtin.opt"
        if (mercury__time__succeeded)
#line 94 "private_builtin.opt"
          *mercury__time__Result_4 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
        else
#line 96 "private_builtin.opt"
          *mercury__time__Result_4 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
      }
#line 250 "time.m"
  }
#line 247 "time.m"
}

#line 189 "time.m"
MR_String MR_CALL 
mercury__time__ctime_1_f_0(
#line 189 "time.m"
  MR_Word mercury__time__Time_3)
#line 189 "time.m"
{
#line 1012 "time.m"
  {
#line 1012 "time.m"
    MR_bool mercury__time__succeeded;
#line 1012 "time.m"
    MR_String mercury__time__HeadVar__2_2;
#line 1012 "time.m"
    MR_Word mercury__time__V_4_4;
#line 1012 "time.m"
    MR_Box mercury__time__Time_6 = (MR_Box) mercury__time__Time_3;
#line 1012 "time.m"
    MR_Integer mercury__time__Yr_7;
#line 1012 "time.m"
    MR_Integer mercury__time__Mnt_8;
#line 1012 "time.m"
    MR_Integer mercury__time__MD_9;
#line 1012 "time.m"
    MR_Integer mercury__time__Hrs_10;
#line 1012 "time.m"
    MR_Integer mercury__time__Min_11;
#line 1012 "time.m"
    MR_Integer mercury__time__Sec_12;
#line 1012 "time.m"
    MR_Integer mercury__time__YD_13;
#line 1012 "time.m"
    MR_Integer mercury__time__WD_14;
#line 1012 "time.m"
    MR_Integer mercury__time__N_15;
#line 1012 "time.m"
    MR_Word mercury__time__V_16_16;

#line 595 "time.m"
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
#line 595 "time.m"

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

#line 3456 "time.c"

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
#line 595 "time.m"
}
#line 586 "time.m"
    {
#line 586 "time.m"
      mercury__time__V_16_16 = mercury__time__int_to_maybe_dst_1_f_0(mercury__time__N_15);
    }
#line 586 "time.m"
    {
#line 586 "time.m"
      mercury__time__V_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 0) = ((MR_Box) (mercury__time__Yr_7));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 1) = ((MR_Box) (mercury__time__Mnt_8));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 2) = ((MR_Box) (mercury__time__MD_9));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 3) = ((MR_Box) (mercury__time__Hrs_10));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 4) = ((MR_Box) (mercury__time__Min_11));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 5) = ((MR_Box) (mercury__time__Sec_12));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 6) = ((MR_Box) (mercury__time__YD_13));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 7) = ((MR_Box) (mercury__time__WD_14));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__V_4_4, 8) = ((MR_Box) (mercury__time__V_16_16));
#line 586 "time.m"
    }
#line 1012 "time.m"
    {
#line 1012 "time.m"
      return mercury__time__HeadVar__2_2 = mercury__time__asctime_1_f_0(mercury__time__V_4_4);
    }
#line 1012 "time.m"
    return mercury__time__HeadVar__2_2;
#line 1012 "time.m"
  }
#line 189 "time.m"
}

#line 182 "time.m"
MR_String MR_CALL 
mercury__time__asctime_1_f_0(
#line 182 "time.m"
  MR_Word mercury__time__TM_3)
#line 182 "time.m"
{
#line 961 "time.m"
  {
#line 961 "time.m"
    MR_bool mercury__time__succeeded;
#line 961 "time.m"
    MR_String mercury__time__Str_4;
#line 961 "time.m"
    MR_Integer mercury__time__Yr_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 0)));
#line 961 "time.m"
    MR_Integer mercury__time__Mnt_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 1)));
#line 961 "time.m"
    MR_Integer mercury__time__MD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 2)));
#line 961 "time.m"
    MR_Integer mercury__time__Hrs_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 3)));
#line 961 "time.m"
    MR_Integer mercury__time__Min_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 4)));
#line 961 "time.m"
    MR_Integer mercury__time__Sec_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 5)));
#line 961 "time.m"
    MR_Integer mercury__time__WD_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 7)));
#line 961 "time.m"
    MR_String mercury__time__V_17_17;
#line 961 "time.m"
    MR_String mercury__time__V_20_20;
#line 961 "time.m"
    MR_Integer mercury__time__V_31_31;
#line 961 "time.m"
    MR_String mercury__time__V_35_35;
#line 961 "time.m"
    MR_Word mercury__time__V_41_41;
#line 961 "time.m"
    MR_String mercury__time__V_42_42;
#line 961 "time.m"
    MR_String mercury__time__V_44_44;
#line 961 "time.m"
    MR_String mercury__time__V_45_45;
#line 961 "time.m"
    MR_String mercury__time__V_53_53;
#line 961 "time.m"
    MR_String mercury__time__V_55_55;
#line 961 "time.m"
    MR_String mercury__time__V_56_56;
#line 961 "time.m"
    MR_String mercury__time__V_64_64;
#line 961 "time.m"
    MR_String mercury__time__V_66_66;
#line 961 "time.m"
    MR_String mercury__time__V_67_67;
#line 961 "time.m"
    MR_String mercury__time__V_75_75;
#line 961 "time.m"
    MR_String mercury__time__V_77_77;
#line 961 "time.m"
    MR_String mercury__time__V_78_78;
#line 961 "time.m"
    MR_String mercury__time__V_86_86;
#line 961 "time.m"
    MR_String mercury__time__V_87_87;
#line 961 "time.m"
    MR_String mercury__time__V_95_95;
#line 961 "time.m"
    MR_String mercury__time__V_97_97;
#line 961 "time.m"
    MR_String mercury__time__V_98_98;
#line 962 "time.m"
    MR_Integer mercury__time___YD_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 6)));
#line 962 "time.m"
    MR_Word mercury__time___DST_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 8)));

#line 964 "time.m"
    {
#line 964 "time.m"
      mercury__time__V_17_17 = mercury__time__wday_name_1_f_0(mercury__time__WD_12);
    }
#line 964 "time.m"
    {
#line 964 "time.m"
      mercury__time__V_20_20 = mercury__time__mon_name_1_f_0(mercury__time__Mnt_6);
    }
#line 965 "time.m"
    mercury__time__V_31_31 = ((MR_Integer) 1900 + mercury__time__Yr_5);
#line 3600 "time.c"
    mercury__time__V_41_41 = (MR_Word) &mercury__time_scalar_common_5[0];
#line 965 "time.m"
    {
#line 965 "time.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(mercury__time__V_41_41, mercury__time__V_31_31, &mercury__time__V_35_35);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_42_42 = mercury__string__f_43_43_2_f_0(mercury__time__V_35_35, (MR_String) "\n");
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__time__V_42_42);
    }
#line 965 "time.m"
    {
#line 965 "time.m"
      mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 2, mercury__time__Sec_10, &mercury__time__V_45_45);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_53_53 = mercury__string__f_43_43_2_f_0(mercury__time__V_45_45, mercury__time__V_44_44);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__time__V_53_53);
    }
#line 965 "time.m"
    {
#line 965 "time.m"
      mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 2, mercury__time__Min_9, &mercury__time__V_56_56);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_64_64 = mercury__string__f_43_43_2_f_0(mercury__time__V_56_56, mercury__time__V_55_55);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ":", mercury__time__V_64_64);
    }
#line 964 "time.m"
    {
#line 964 "time.m"
      mercury__string__format__format_signed_int_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 2, mercury__time__Hrs_8, &mercury__time__V_67_67);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_75_75 = mercury__string__f_43_43_2_f_0(mercury__time__V_67_67, mercury__time__V_66_66);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__time__V_75_75);
    }
#line 964 "time.m"
    {
#line 964 "time.m"
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mercury__time__V_41_41, (MR_Integer) 3, mercury__time__MD_7, &mercury__time__V_78_78);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_86_86 = mercury__string__f_43_43_2_f_0(mercury__time__V_78_78, mercury__time__V_77_77);
    }
#line 964 "time.m"
    {
#line 964 "time.m"
      mercury__string__format__format_string_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 3, mercury__time__V_20_20, &mercury__time__V_87_87);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_95_95 = mercury__string__f_43_43_2_f_0(mercury__time__V_87_87, mercury__time__V_86_86);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      mercury__time__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) " ", mercury__time__V_95_95);
    }
#line 964 "time.m"
    {
#line 964 "time.m"
      mercury__string__format__format_string_component_nowidth_prec_4_p_0(mercury__time__V_41_41, (MR_Integer) 3, mercury__time__V_17_17, &mercury__time__V_98_98);
    }
#line 963 "time.m"
    {
#line 963 "time.m"
      return mercury__time__Str_4 = mercury__string__f_43_43_2_f_0(mercury__time__V_98_98, mercury__time__V_97_97);
    }
#line 961 "time.m"
    return mercury__time__Str_4;
#line 961 "time.m"
  }
#line 182 "time.m"
}

#line 173 "time.m"
MR_Word MR_CALL 
mercury__time__mktime_1_f_0(
#line 173 "time.m"
  MR_Word mercury__time__TM_3)
#line 173 "time.m"
{
#line 824 "time.m"
  {
#line 824 "time.m"
    MR_bool mercury__time__succeeded;
#line 824 "time.m"
    MR_Word mercury__time__HeadVar__2_2;
#line 824 "time.m"
    MR_Box mercury__time__Time_4;
#line 824 "time.m"
    MR_Integer mercury__time__Yr_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 0)));
#line 824 "time.m"
    MR_Integer mercury__time__Mnt_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 1)));
#line 824 "time.m"
    MR_Integer mercury__time__MD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 2)));
#line 824 "time.m"
    MR_Integer mercury__time__Hrs_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 3)));
#line 824 "time.m"
    MR_Integer mercury__time__Min_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 4)));
#line 824 "time.m"
    MR_Integer mercury__time__Sec_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 5)));
#line 824 "time.m"
    MR_Integer mercury__time__YD_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 6)));
#line 824 "time.m"
    MR_Integer mercury__time__WD_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 7)));
#line 824 "time.m"
    MR_Word mercury__time__DST_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__time__TM_3, (MR_Integer) 8)));
#line 824 "time.m"
    MR_Integer mercury__time__V_14_14;

#line 949 "time.m"
    if ((mercury__time__DST_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 953 "time.m"
      mercury__time__V_14_14 = (MR_Integer) -1;
#line 949 "time.m"
    else
#line 949 "time.m"
      {
#line 949 "time.m"
        MR_Word mercury__time__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__time__DST_13, (MR_Integer) 0)));

#line 949 "time.m"
#line 949 "time.m"
        switch (mercury__time__V_19_19) {
#line 949 "time.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 949 "time.m"
          case (MR_Integer) 1:
#line 950 "time.m"
            mercury__time__V_14_14 = (MR_Integer) 1;
#line 949 "time.m"
            break;
#line 949 "time.m"
          case (MR_Integer) 0:
#line 952 "time.m"
            mercury__time__V_14_14 = (MR_Integer) 0;
#line 949 "time.m"
            break;
#line 949 "time.m"
        }
#line 949 "time.m"
      }
#line 839 "time.m"
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
#line 839 "time.m"
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
#line 3813 "time.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Time, mercury__time__Time_4 );
#line 839 "time.m"
}
#line 824 "time.m"
    mercury__time__HeadVar__2_2 = (MR_Word) mercury__time__Time_4;
#line 824 "time.m"
    return mercury__time__HeadVar__2_2;
#line 824 "time.m"
  }
#line 173 "time.m"
}

#line 165 "time.m"
MR_Word MR_CALL 
mercury__time__gmtime_1_f_0(
#line 165 "time.m"
  MR_Word mercury__time__HeadVar__1_1)
#line 165 "time.m"
{
#line 694 "time.m"
  {
#line 694 "time.m"
    MR_bool mercury__time__succeeded;
#line 694 "time.m"
    MR_Word mercury__time__TM_4;
#line 694 "time.m"
    MR_Box mercury__time__Time_3 = (MR_Box) mercury__time__HeadVar__1_1;
#line 694 "time.m"
    MR_Integer mercury__time__Yr_5;
#line 694 "time.m"
    MR_Integer mercury__time__Mnt_6;
#line 694 "time.m"
    MR_Integer mercury__time__MD_7;
#line 694 "time.m"
    MR_Integer mercury__time__Hrs_8;
#line 694 "time.m"
    MR_Integer mercury__time__Min_9;
#line 694 "time.m"
    MR_Integer mercury__time__Sec_10;
#line 694 "time.m"
    MR_Integer mercury__time__YD_11;
#line 694 "time.m"
    MR_Integer mercury__time__WD_12;
#line 694 "time.m"
    MR_Integer mercury__time__N_13;
#line 694 "time.m"
    MR_Word mercury__time__V_14_14;

#line 705 "time.m"
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
#line 705 "time.m"
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
#line 3903 "time.c"

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
#line 705 "time.m"
}
#line 696 "time.m"
    {
#line 696 "time.m"
      mercury__time__V_14_14 = mercury__time__int_to_maybe_dst_1_f_0(mercury__time__N_13);
    }
#line 696 "time.m"
    {
#line 696 "time.m"
      mercury__time__TM_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 696 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 0) = ((MR_Box) (mercury__time__Yr_5));
#line 696 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 1) = ((MR_Box) (mercury__time__Mnt_6));
#line 696 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 2) = ((MR_Box) (mercury__time__MD_7));
#line 696 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 3) = ((MR_Box) (mercury__time__Hrs_8));
#line 696 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 4) = ((MR_Box) (mercury__time__Min_9));
#line 696 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 5) = ((MR_Box) (mercury__time__Sec_10));
#line 696 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 6) = ((MR_Box) (mercury__time__YD_11));
#line 696 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 7) = ((MR_Box) (mercury__time__WD_12));
#line 696 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 8) = ((MR_Box) (mercury__time__V_14_14));
#line 696 "time.m"
    }
#line 694 "time.m"
    return mercury__time__TM_4;
#line 694 "time.m"
  }
#line 165 "time.m"
}

#line 158 "time.m"
MR_Word MR_CALL 
mercury__time__localtime_1_f_0(
#line 158 "time.m"
  MR_Word mercury__time__HeadVar__1_1)
#line 158 "time.m"
{
#line 584 "time.m"
  {
#line 584 "time.m"
    MR_bool mercury__time__succeeded;
#line 584 "time.m"
    MR_Word mercury__time__TM_4;
#line 584 "time.m"
    MR_Box mercury__time__Time_3 = (MR_Box) mercury__time__HeadVar__1_1;
#line 584 "time.m"
    MR_Integer mercury__time__Yr_5;
#line 584 "time.m"
    MR_Integer mercury__time__Mnt_6;
#line 584 "time.m"
    MR_Integer mercury__time__MD_7;
#line 584 "time.m"
    MR_Integer mercury__time__Hrs_8;
#line 584 "time.m"
    MR_Integer mercury__time__Min_9;
#line 584 "time.m"
    MR_Integer mercury__time__Sec_10;
#line 584 "time.m"
    MR_Integer mercury__time__YD_11;
#line 584 "time.m"
    MR_Integer mercury__time__WD_12;
#line 584 "time.m"
    MR_Integer mercury__time__N_13;
#line 584 "time.m"
    MR_Word mercury__time__V_14_14;

#line 595 "time.m"
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
#line 595 "time.m"

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

#line 4028 "time.c"

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
#line 595 "time.m"
}
#line 586 "time.m"
    {
#line 586 "time.m"
      mercury__time__V_14_14 = mercury__time__int_to_maybe_dst_1_f_0(mercury__time__N_13);
    }
#line 586 "time.m"
    {
#line 586 "time.m"
      mercury__time__TM_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 0) = ((MR_Box) (mercury__time__Yr_5));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 1) = ((MR_Box) (mercury__time__Mnt_6));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 2) = ((MR_Box) (mercury__time__MD_7));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 3) = ((MR_Box) (mercury__time__Hrs_8));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 4) = ((MR_Box) (mercury__time__Min_9));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 5) = ((MR_Box) (mercury__time__Sec_10));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 6) = ((MR_Box) (mercury__time__YD_11));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 7) = ((MR_Box) (mercury__time__WD_12));
#line 586 "time.m"
      MR_hl_field(MR_mktag(0), mercury__time__TM_4, 8) = ((MR_Box) (mercury__time__V_14_14));
#line 586 "time.m"
    }
#line 584 "time.m"
    return mercury__time__TM_4;
#line 584 "time.m"
  }
#line 158 "time.m"
}

#line 151 "time.m"
MR_Float MR_CALL 
mercury__time__difftime_2_f_0(
#line 151 "time.m"
  MR_Word mercury__time__HeadVar__1_1,
#line 151 "time.m"
  MR_Word mercury__time__HeadVar__2_2)
#line 151 "time.m"
{
#line 548 "time.m"
  {
#line 548 "time.m"
    MR_bool mercury__time__succeeded;
#line 548 "time.m"
    MR_Float mercury__time__Diff_6;
#line 548 "time.m"
    MR_Box mercury__time__T1_4 = (MR_Box) mercury__time__HeadVar__1_1;
#line 548 "time.m"
    MR_Box mercury__time__T0_5 = (MR_Box) mercury__time__HeadVar__2_2;

#line 556 "time.m"
{
#define MR_PROC_LABEL mercury__time__difftime_2_f_0

	time_t T1;
	time_t T0;
	MR_Float Diff;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__T1_4 , T1);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__T0_5 , T0);
		{
#line 556 "time.m"

    Diff = (MR_Float) difftime(T1, T0);

#line 4114 "time.c"

		;}
#undef MR_PROC_LABEL
	 mercury__time__Diff_6  = Diff;
#line 556 "time.m"
}
#line 548 "time.m"
    return mercury__time__Diff_6;
#line 548 "time.m"
  }
#line 151 "time.m"
}

#line 143 "time.m"
MR_Integer MR_CALL 
mercury__time__clk_tck_0_f_0(void)
#line 143 "time.m"
{
#line 440 "time.m"
  {
#line 440 "time.m"
    MR_bool mercury__time__succeeded;
#line 440 "time.m"
    MR_Integer mercury__time__Ret_2;
#line 440 "time.m"
    MR_Integer mercury__time__Ret0_3;

#line 453 "time.m"
{
#define MR_PROC_LABEL mercury__time__clk_tck_0_f_0

	MR_Integer Ret;

		{
#line 453 "time.m"

#if defined(MR_CLOCK_TICKS_PER_SECOND)
    Ret = MR_CLOCK_TICKS_PER_SECOND;
#else
    Ret = -1;
#endif

#line 4157 "time.c"

		;}
#undef MR_PROC_LABEL
	 mercury__time__Ret0_3  = Ret;
#line 453 "time.m"
}
#line 442 "time.m"
    mercury__time__succeeded = (mercury__time__Ret0_3 == (MR_Integer) -1);
#line 444 "time.m"
    if (mercury__time__succeeded)
#line 443 "time.m"
      {
#line 443 "time.m"
        MR_Word mercury__time__TypeCtorInfo_6_6 = (MR_Word) &mercury__time__time__type_ctor_info_time_error_0;
#line 443 "time.m"
        MR_Word mercury__time__V_4_4 = (MR_Word) ((MR_Box) ((MR_String) "can\'t get clk_tck value"));

#line 443 "time.m"
        {
#line 443 "time.m"
          mercury__exception__throw_1_p_0(mercury__time__TypeCtorInfo_6_6, ((MR_Box) (mercury__time__V_4_4)));
        }
#line 443 "time.m"
      }
#line 444 "time.m"
    else
#line 445 "time.m"
      mercury__time__Ret_2 = mercury__time__Ret0_3;
#line 440 "time.m"
    return mercury__time__Ret_2;
#line 440 "time.m"
  }
#line 143 "time.m"
}

#line 132 "time.m"
void MR_CALL 
mercury__time__times_4_p_0(
#line 132 "time.m"
  MR_Word * mercury__time__Tms_5,
#line 132 "time.m"
  MR_Integer * mercury__time__Result_6)
#line 132 "time.m"
{
#line 323 "time.m"
  {
#line 323 "time.m"
    MR_bool mercury__time__succeeded;
#line 323 "time.m"
    MR_Integer mercury__time__Ret_8;
#line 323 "time.m"
    MR_Integer mercury__time__Ut_9;
#line 323 "time.m"
    MR_Integer mercury__time__St_10;
#line 323 "time.m"
    MR_Integer mercury__time__CUt_11;
#line 323 "time.m"
    MR_Integer mercury__time__CSt_12;

#line 324 "time.m"
    {
#line 324 "time.m"
      mercury__time__c_times_7_p_0(&mercury__time__Ret_8, &mercury__time__Ut_9, &mercury__time__St_10, &mercury__time__CUt_11, &mercury__time__CSt_12);
    }
#line 325 "time.m"
    mercury__time__succeeded = (mercury__time__Ret_8 == (MR_Integer) -1);
#line 327 "time.m"
    if (mercury__time__succeeded)
#line 326 "time.m"
      {
#line 326 "time.m"
        MR_Word mercury__time__TypeCtorInfo_18_18 = (MR_Word) &mercury__time__time__type_ctor_info_time_error_0;
#line 326 "time.m"
        MR_Word mercury__time__V_16_16 = (MR_Word) ((MR_Box) ((MR_String) "can\'t get times value"));

#line 326 "time.m"
        {
#line 326 "time.m"
          mercury__exception__throw_1_p_0(mercury__time__TypeCtorInfo_18_18, ((MR_Box) (mercury__time__V_16_16)));
#line 326 "time.m"
          return;
        }
#line 326 "time.m"
      }
#line 327 "time.m"
    else
#line 328 "time.m"
      {
#line 328 "time.m"
        {
#line 328 "time.m"
          MR_Word base;
#line 328 "time.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 328 "time.m"
          *mercury__time__Tms_5 = base;
#line 328 "time.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__time__Ut_9));
#line 328 "time.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__time__St_10));
#line 328 "time.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__time__CUt_11));
#line 328 "time.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mercury__time__CSt_12));
#line 328 "time.m"
        }
#line 329 "time.m"
        *mercury__time__Result_6 = mercury__time__Ret_8;
#line 328 "time.m"
      }
#line 323 "time.m"
  }
#line 132 "time.m"
}

#line 112 "time.m"
void MR_CALL 
mercury__time__time_3_p_0(
#line 112 "time.m"
  MR_Word * mercury__time__Result_4)
#line 112 "time.m"
{
#line 482 "time.m"
  {
#line 482 "time.m"
    MR_bool mercury__time__succeeded;
#line 482 "time.m"
    MR_Box mercury__time__Ret_6;

#line 495 "time.m"
{
#define MR_PROC_LABEL mercury__time__time_3_p_0

	time_t Ret;

		{
#line 495 "time.m"

    Ret = time(NULL);

#line 4298 "time.c"

		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(time_t, Ret, mercury__time__Ret_6 );
#line 495 "time.m"
}
#line 522 "time.m"
{
#define MR_PROC_LABEL mercury__time__time_3_p_0

	time_t Val;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(time_t, mercury__time__Ret_6 , Val);
		{
#line 522 "time.m"

    SUCCESS_INDICATOR = (Val == -1);

#line 4318 "time.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 522 "time.m"
	}
mercury__time__succeeded  = SUCCESS_INDICATOR;
}
#line 486 "time.m"
    if (mercury__time__succeeded)
#line 485 "time.m"
      {
#line 485 "time.m"
        MR_Word mercury__time__TypeCtorInfo_12_12 = (MR_Word) &mercury__time__time__type_ctor_info_time_error_0;
#line 485 "time.m"
        MR_Word mercury__time__V_10_10 = (MR_Word) ((MR_Box) ((MR_String) "can\'t get time value"));

#line 485 "time.m"
        {
#line 485 "time.m"
          mercury__exception__throw_1_p_0(mercury__time__TypeCtorInfo_12_12, ((MR_Box) (mercury__time__V_10_10)));
#line 485 "time.m"
          return;
        }
#line 485 "time.m"
      }
#line 486 "time.m"
    else
#line 487 "time.m"
      *mercury__time__Result_4 = (MR_Word) mercury__time__Ret_6;
#line 482 "time.m"
  }
#line 112 "time.m"
}

#line 103 "time.m"
MR_Integer MR_CALL 
mercury__time__clocks_per_sec_0_f_0(void)
#line 103 "time.m"
{
#line 300 "time.m"
  {
#line 300 "time.m"
    MR_bool mercury__time__succeeded;
#line 300 "time.m"
    MR_Integer mercury__time__Ret_1;

#line 303 "time.m"
{
#define MR_PROC_LABEL mercury__time__clocks_per_sec_0_f_0

	MR_Integer Ret;

		{
#line 303 "time.m"

    Ret = (MR_Integer) CLOCKS_PER_SEC;

#line 4377 "time.c"

		;}
#undef MR_PROC_LABEL
	 mercury__time__Ret_1  = Ret;
#line 303 "time.m"
}
#line 300 "time.m"
    return mercury__time__Ret_1;
#line 300 "time.m"
  }
#line 103 "time.m"
}

#line 93 "time.m"
void MR_CALL 
mercury__time__clock_3_p_0(
#line 93 "time.m"
  MR_Integer * mercury__time__Result_4)
#line 93 "time.m"
{
#line 255 "time.m"
  {
#line 255 "time.m"
    MR_bool mercury__time__succeeded;
#line 255 "time.m"
    MR_Integer mercury__time__Ret_6;

#line 268 "time.m"
{
#define MR_PROC_LABEL mercury__time__clock_3_p_0

	MR_Integer Ret;

		{
#line 268 "time.m"

    Ret = (MR_Integer) clock();

#line 4416 "time.c"

		;}
#undef MR_PROC_LABEL
	 mercury__time__Ret_6  = Ret;
#line 268 "time.m"
}
#line 257 "time.m"
    mercury__time__succeeded = (mercury__time__Ret_6 == (MR_Integer) -1);
#line 259 "time.m"
    if (mercury__time__succeeded)
#line 258 "time.m"
      {
#line 258 "time.m"
        MR_Word mercury__time__TypeCtorInfo_12_12 = (MR_Word) &mercury__time__time__type_ctor_info_time_error_0;
#line 258 "time.m"
        MR_Word mercury__time__V_10_10 = (MR_Word) ((MR_Box) ((MR_String) "can\'t get clock value"));

#line 258 "time.m"
        {
#line 258 "time.m"
          mercury__exception__throw_1_p_0(mercury__time__TypeCtorInfo_12_12, ((MR_Box) (mercury__time__V_10_10)));
#line 258 "time.m"
          return;
        }
#line 258 "time.m"
      }
#line 259 "time.m"
    else
#line 260 "time.m"
      *mercury__time__Result_4 = mercury__time__Ret_6;
#line 255 "time.m"
  }
#line 93 "time.m"
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
