/*
** Automatically generated from `bit_buffer.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module bit_buffer. */
/* :- implementation. */

/*
INIT mercury__bit_buffer__init
ENDINIT
*/

#include "bit_buffer.mih"


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
#include "time.mih"
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




#line 94 "bit_buffer.c"
static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer____vti_tuple_0;

#line 97 "bit_buffer.c"
static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0;

#line 100 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0;

#line 103 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_state_0[1];

#line 106 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_state_0[1];

#line 109 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_state_0[1];

#line 112 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0;

#line 115 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_0[1];

#line 118 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_0[1];

#line 121 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_0[1];

#line 124 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0;

#line 127 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_error_0[1];

#line 130 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_error_0[1];

#line 133 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_error_0[1];

#line 136 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_3_0_10001(
#line 139 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 141 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 143 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 145 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 147 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5);

#line 150 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_3_0_10001(
#line 153 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 155 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 157 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 159 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4,
#line 161 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5,
#line 163 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_6);

#line 166 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_2_0_10001(
#line 169 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 171 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 173 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 175 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4);

#line 178 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_2_0_10001(
#line 181 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 183 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 185 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_3,
#line 187 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 189 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5);

#line 192 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_state_0_0_10001(
#line 195 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 197 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2);

#line 200 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_state_0_0_10001(
#line 203 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 205 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 207 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3);

#line 210 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_0_0_10001(
#line 213 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 215 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2);

#line 218 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_0_0_10001(
#line 221 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 223 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 225 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3);

#line 228 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_error_0_0_10001(
#line 231 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 233 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2);

#line 236 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_error_0_0_10001(
#line 239 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 241 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 243 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3);

#line 246 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0_10001(
#line 249 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 251 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 253 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 255 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 257 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4);

#line 260 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0_10001(
#line 263 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 265 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 267 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_2,
#line 269 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 271 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4);

#line 274 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0_10001(
#line 277 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 279 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 281 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 283 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_3);

#line 286 "bit_buffer.c"
static MR_Box MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0_10001(
#line 289 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 291 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1);

#line 294 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0_10001(
#line 297 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 299 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 301 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 303 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 305 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 307 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_5,
#line 309 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_6,
#line 311 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_7,
#line 313 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_8,
#line 315 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_9);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__bit_buffer_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_4[1][1];




static /* final */ const MR_Box mercury__bit_buffer_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bit_buffer_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bit_buffer_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "benchmarking.mh"
#include "bit_buffer.mh"
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



#line 407 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__bit_buffer____Unify____bit_buffer_3_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____bit_buffer_3_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "bit_buffer",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 424 "bit_buffer.c"
static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer____vti_tuple_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 0,
  { 0 }

};

#line 432 "bit_buffer.c"
static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0 = {
  &mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mercury__bit_buffer____vti_tuple_0
  }
};

#line 442 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__bit_buffer____Unify____bit_buffer_2_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____bit_buffer_2_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "bit_buffer",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bit_buffer__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 459 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0 = {
  (MR_String) "error_state",
  (MR_Integer) 0
};

#line 465 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_state_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0
};

#line 470 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_state_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0
};

#line 475 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_state_0[1] = {
  (MR_Integer) 0
};

#line 480 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__bit_buffer____Unify____error_state_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____error_state_0_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "error_state",
  {     mercury__bit_buffer__bit_buffer__enum_name_ordered_error_state_0 },
  {     mercury__bit_buffer__bit_buffer__enum_value_ordered_error_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bit_buffer__bit_buffer__functor_number_map_error_state_0
};

#line 497 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0 = {
  (MR_String) "error_stream",
  (MR_Integer) 0
};

#line 503 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0
};

#line 508 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0
};

#line 513 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_0[1] = {
  (MR_Integer) 0
};

#line 518 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__bit_buffer____Unify____error_stream_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____error_stream_0_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "error_stream",
  {     mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_0 },
  {     mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_0
};

#line 535 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0 = {
  (MR_String) "error_stream_error",
  (MR_Integer) 0
};

#line 541 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_error_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0
};

#line 546 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_error_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0
};

#line 551 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_error_0[1] = {
  (MR_Integer) 0
};

#line 556 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__bit_buffer____Unify____error_stream_error_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____error_stream_error_0_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "error_stream_error",
  {     mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_error_0 },
  {     mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_error_0
};

#line 573 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0_10001))
};

#line 583 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0_10001))
};

#line 593 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0_10001))
};

#line 603 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__input__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 612 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__error__arity1__bit_buffer__error_stream_error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0_10001))
};

#line 622 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__bulk_reader__arity5__bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 5)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0_10001))
};

#line 632 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_3_0_10001(
#line 635 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 637 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 639 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 641 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 643 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5)
#line 645 "bit_buffer.c"
{
#line 647 "bit_buffer.c"
  {
#line 649 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 652 "bit_buffer.c"
    {
#line 654 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(((MR_Word) mercury__bit_buffer__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__wrapper_arg_3), ((MR_Box) mercury__bit_buffer__wrapper_arg_4), ((MR_Box) mercury__bit_buffer__wrapper_arg_5));
    }
#line 657 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 659 "bit_buffer.c"
  }
#line 661 "bit_buffer.c"
}

#line 664 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_3_0_10001(
#line 667 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 669 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 671 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 673 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4,
#line 675 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5,
#line 677 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_6)
#line 679 "bit_buffer.c"
{
#line 681 "bit_buffer.c"
  {
#line 683 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 686 "bit_buffer.c"
    {
#line 688 "bit_buffer.c"
      mercury__bit_buffer____Compare____bit_buffer_3_0(((MR_Word) mercury__bit_buffer__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__wrapper_arg_3), &mercury__bit_buffer__conv0_HeadVar__1_1, ((MR_Box) mercury__bit_buffer__wrapper_arg_5), ((MR_Box) mercury__bit_buffer__wrapper_arg_6));
    }
#line 691 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_4 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 693 "bit_buffer.c"
  }
#line 695 "bit_buffer.c"
}

#line 698 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_2_0_10001(
#line 701 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 703 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 705 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 707 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4)
#line 709 "bit_buffer.c"
{
#line 711 "bit_buffer.c"
  {
#line 713 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 716 "bit_buffer.c"
    {
#line 718 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____bit_buffer_2_0(((MR_Word) mercury__bit_buffer__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__wrapper_arg_2), ((MR_Box) mercury__bit_buffer__wrapper_arg_3), ((MR_Box) mercury__bit_buffer__wrapper_arg_4));
    }
#line 721 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 723 "bit_buffer.c"
  }
#line 725 "bit_buffer.c"
}

#line 728 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_2_0_10001(
#line 731 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 733 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 735 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_3,
#line 737 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 739 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5)
#line 741 "bit_buffer.c"
{
#line 743 "bit_buffer.c"
  {
#line 745 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 748 "bit_buffer.c"
    {
#line 750 "bit_buffer.c"
      mercury__bit_buffer____Compare____bit_buffer_2_0(((MR_Word) mercury__bit_buffer__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__wrapper_arg_2), &mercury__bit_buffer__conv0_HeadVar__1_1, ((MR_Box) mercury__bit_buffer__wrapper_arg_4), ((MR_Box) mercury__bit_buffer__wrapper_arg_5));
    }
#line 753 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_3 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 755 "bit_buffer.c"
  }
#line 757 "bit_buffer.c"
}

#line 760 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_state_0_0_10001(
#line 763 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 765 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2)
#line 767 "bit_buffer.c"
{
#line 769 "bit_buffer.c"
  {
#line 771 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 774 "bit_buffer.c"
    {
#line 776 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____error_state_0_0();
    }
#line 779 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 781 "bit_buffer.c"
  }
#line 783 "bit_buffer.c"
}

#line 786 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_state_0_0_10001(
#line 789 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 791 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 793 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3)
#line 795 "bit_buffer.c"
{
#line 797 "bit_buffer.c"
  {
#line 799 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 802 "bit_buffer.c"
    {
#line 804 "bit_buffer.c"
      mercury__bit_buffer____Compare____error_state_0_0(&mercury__bit_buffer__conv0_HeadVar__1_1);
    }
#line 807 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 809 "bit_buffer.c"
  }
#line 811 "bit_buffer.c"
}

#line 814 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_0_0_10001(
#line 817 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 819 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2)
#line 821 "bit_buffer.c"
{
#line 823 "bit_buffer.c"
  {
#line 825 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 828 "bit_buffer.c"
    {
#line 830 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____error_stream_0_0();
    }
#line 833 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 835 "bit_buffer.c"
  }
#line 837 "bit_buffer.c"
}

#line 840 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_0_0_10001(
#line 843 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 845 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 847 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3)
#line 849 "bit_buffer.c"
{
#line 851 "bit_buffer.c"
  {
#line 853 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 856 "bit_buffer.c"
    {
#line 858 "bit_buffer.c"
      mercury__bit_buffer____Compare____error_stream_0_0(&mercury__bit_buffer__conv0_HeadVar__1_1);
    }
#line 861 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 863 "bit_buffer.c"
  }
#line 865 "bit_buffer.c"
}

#line 868 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_error_0_0_10001(
#line 871 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 873 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2)
#line 875 "bit_buffer.c"
{
#line 877 "bit_buffer.c"
  {
#line 879 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 882 "bit_buffer.c"
    {
#line 884 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____error_stream_error_0_0();
    }
#line 887 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 889 "bit_buffer.c"
  }
#line 891 "bit_buffer.c"
}

#line 894 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_error_0_0_10001(
#line 897 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 899 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 901 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3)
#line 903 "bit_buffer.c"
{
#line 905 "bit_buffer.c"
  {
#line 907 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 910 "bit_buffer.c"
    {
#line 912 "bit_buffer.c"
      mercury__bit_buffer____Compare____error_stream_error_0_0(&mercury__bit_buffer__conv0_HeadVar__1_1);
    }
#line 915 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 917 "bit_buffer.c"
  }
#line 919 "bit_buffer.c"
}

#line 922 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0_10001(
#line 925 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 927 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 929 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 931 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 933 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4)
#line 935 "bit_buffer.c"
{
#line 937 "bit_buffer.c"
  {
#line 939 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;

#line 942 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 944 "bit_buffer.c"
    {
#line 946 "bit_buffer.c"
      mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__bit_buffer__wrapper_arg_2));
    }
#line 949 "bit_buffer.c"
  }
#line 951 "bit_buffer.c"
}

#line 954 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0_10001(
#line 957 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 959 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 961 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_2,
#line 963 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 965 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4)
#line 967 "bit_buffer.c"
{
#line 969 "bit_buffer.c"
  {
#line 971 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;
#line 973 "bit_buffer.c"
    MR_String mercury__bit_buffer__conv0_HeadVar__2_2;

#line 976 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 978 "bit_buffer.c"
    {
#line 980 "bit_buffer.c"
      mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0(&mercury__bit_buffer__conv0_HeadVar__2_2);
    }
#line 983 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_2 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__2_2));
#line 985 "bit_buffer.c"
  }
#line 987 "bit_buffer.c"
}

#line 990 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0_10001(
#line 993 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 995 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 997 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 999 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_3)
#line 1001 "bit_buffer.c"
{
#line 1003 "bit_buffer.c"
  {
#line 1005 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;

#line 1008 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 1010 "bit_buffer.c"
    {
#line 1012 "bit_buffer.c"
      mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0();
    }
#line 1015 "bit_buffer.c"
  }
#line 1017 "bit_buffer.c"
}

#line 1020 "bit_buffer.c"
static MR_Box MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0_10001(
#line 1023 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 1025 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1)
#line 1027 "bit_buffer.c"
{
#line 1029 "bit_buffer.c"
  {
#line 1031 "bit_buffer.c"
    MR_Box mercury__bit_buffer__wrapper_arg_2;
#line 1033 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;
#line 1035 "bit_buffer.c"
    MR_String mercury__bit_buffer__conv0_HeadVar__2_2;

#line 1038 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 1040 "bit_buffer.c"
    {
#line 1042 "bit_buffer.c"
      mercury__bit_buffer__conv0_HeadVar__2_2 = mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0();
    }
#line 1045 "bit_buffer.c"
    mercury__bit_buffer__wrapper_arg_2 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__2_2));
#line 1047 "bit_buffer.c"
    return mercury__bit_buffer__wrapper_arg_2;
#line 1049 "bit_buffer.c"
  }
#line 1051 "bit_buffer.c"
}

#line 1054 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0_10001(
#line 1057 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 1059 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1061 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 1063 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 1065 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 1067 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_5,
#line 1069 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_6,
#line 1071 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_7,
#line 1073 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_8,
#line 1075 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_9)
#line 1077 "bit_buffer.c"
{
#line 1079 "bit_buffer.c"
  {
#line 1081 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;
#line 1083 "bit_buffer.c"
    MR_Box mercury__bit_buffer__conv2_STATE_VARIABLE_BM_16;
#line 1085 "bit_buffer.c"
    MR_Integer mercury__bit_buffer__conv1_HeadVar__6_6;
#line 1087 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__7_7;

#line 1090 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 1092 "bit_buffer.c"
    {
#line 1094 "bit_buffer.c"
      mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0(((MR_Integer) mercury__bit_buffer__wrapper_arg_2), ((MR_Integer) mercury__bit_buffer__wrapper_arg_3), ((MR_Box) mercury__bit_buffer__wrapper_arg_4), &mercury__bit_buffer__conv2_STATE_VARIABLE_BM_16, &mercury__bit_buffer__conv1_HeadVar__6_6, &mercury__bit_buffer__conv0_HeadVar__7_7);
    }
#line 1097 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_5 = ((MR_Box) (mercury__bit_buffer__conv2_STATE_VARIABLE_BM_16));
#line 1099 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_6 = ((MR_Box) (mercury__bit_buffer__conv1_HeadVar__6_6));
#line 1101 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_7 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__7_7));
#line 1103 "bit_buffer.c"
  }
#line 1105 "bit_buffer.c"
}

#line 87 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_115_108_105_99_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_4_p_0(void)
#line 87 "bit_buffer.m"
{
#line 87 "bit_buffer.m"
  {
#line 87 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 87 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeCtorInfo_10_10;

#line 87 "bit_buffer.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1122 "bit_buffer.c"
    mercury__bit_buffer__TypeCtorInfo_10_10 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0;
#line 87 "bit_buffer.m"
    {
#line 87 "bit_buffer.m"
      mercury__exception__throw_1_p_0(mercury__bit_buffer__TypeCtorInfo_10_10, ((MR_Box) ((MR_Integer) 0)));
#line 87 "bit_buffer.m"
      return;
    }
#line 87 "bit_buffer.m"
  }
#line 87 "bit_buffer.m"
}

#line 67 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(
#line 67 "bit_buffer.m"
  MR_String * mercury__bit_buffer__HeadVar__2_2)
#line 67 "bit_buffer.m"
{
#line 67 "bit_buffer.m"
  {
#line 67 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 67 "bit_buffer.m"
    *mercury__bit_buffer__HeadVar__2_2 = (MR_String) "error_stream";
#line 67 "bit_buffer.m"
  }
#line 67 "bit_buffer.m"
}

#line 81 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0(void)
#line 81 "bit_buffer.m"
{
#line 81 "bit_buffer.m"
  {
#line 81 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 81 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeCtorInfo_9_9;

#line 81 "bit_buffer.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1169 "bit_buffer.c"
    mercury__bit_buffer__TypeCtorInfo_9_9 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0;
#line 81 "bit_buffer.m"
    {
#line 81 "bit_buffer.m"
      mercury__exception__throw_1_p_0(mercury__bit_buffer__TypeCtorInfo_9_9, ((MR_Box) ((MR_Integer) 0)));
#line 81 "bit_buffer.m"
      return;
    }
#line 81 "bit_buffer.m"
  }
#line 81 "bit_buffer.m"
}

#line 62 "bit_buffer.m"
MR_String MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_109_101_115_115_97_103_101_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 62 "bit_buffer.m"
{
#line 62 "bit_buffer.m"
  {
#line 62 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 62 "bit_buffer.m"
    return (MR_String) "method called for error_stream";
#line 62 "bit_buffer.m"
  }
#line 62 "bit_buffer.m"
}

#line 76 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_98_117_108_107_95_114_101_97_100_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_98_105_116_109_97_112_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_98_117_108_107_95_103_101_116_95_57_95_95_91_49_44_32_50_44_32_51_93_95_48_9_p_0(
#line 76 "bit_buffer.m"
  MR_Box mercury__bit_buffer__STATE_VARIABLE_BM_0_15,
#line 76 "bit_buffer.m"
  MR_Box * mercury__bit_buffer__STATE_VARIABLE_BM_16,
#line 76 "bit_buffer.m"
  MR_Integer * mercury__bit_buffer__HeadVar__6_6,
#line 76 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__7_7)
#line 76 "bit_buffer.m"
{
#line 76 "bit_buffer.m"
  {
#line 76 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 76 "bit_buffer.m"
    *mercury__bit_buffer__HeadVar__6_6 = (MR_Integer) 0;
#line 76 "bit_buffer.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 76 "bit_buffer.m"
    *mercury__bit_buffer__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__bit_buffer_scalar_common_4[0]);
#line 76 "bit_buffer.m"
    *mercury__bit_buffer__STATE_VARIABLE_BM_16 = mercury__bit_buffer__STATE_VARIABLE_BM_0_15;
#line 76 "bit_buffer.m"
  }
#line 76 "bit_buffer.m"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__bit_buffer__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 41 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 41 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__1_1)
#line 41 "bit_buffer.m"
{
#line 41 "bit_buffer.m"
  {
#line 41 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 41 "bit_buffer.m"
    *mercury__bit_buffer__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "bit_buffer.m"
  }
#line 41 "bit_buffer.m"
}

#line 41 "bit_buffer.m"
MR_bool MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 41 "bit_buffer.m"
{
#line 41 "bit_buffer.m"
  {
#line 41 "bit_buffer.m"
    return MR_TRUE;
#line 41 "bit_buffer.m"
  }
#line 41 "bit_buffer.m"
}

#line 39 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 39 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__1_1)
#line 39 "bit_buffer.m"
{
#line 39 "bit_buffer.m"
  {
#line 39 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 39 "bit_buffer.m"
    *mercury__bit_buffer__HeadVar__1_1 = (MR_Integer) 0;
#line 39 "bit_buffer.m"
  }
#line 39 "bit_buffer.m"
}

#line 39 "bit_buffer.m"
MR_bool MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 39 "bit_buffer.m"
{
#line 39 "bit_buffer.m"
  {
#line 39 "bit_buffer.m"
    return MR_TRUE;
#line 39 "bit_buffer.m"
  }
#line 39 "bit_buffer.m"
}

#line 40 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 40 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__1_1)
#line 40 "bit_buffer.m"
{
#line 40 "bit_buffer.m"
  {
#line 40 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 40 "bit_buffer.m"
    *mercury__bit_buffer__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "bit_buffer.m"
  }
#line 40 "bit_buffer.m"
}

#line 40 "bit_buffer.m"
MR_bool MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 40 "bit_buffer.m"
{
#line 40 "bit_buffer.m"
  {
#line 40 "bit_buffer.m"
    return MR_TRUE;
#line 40 "bit_buffer.m"
  }
#line 40 "bit_buffer.m"
}

#line 87 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0(
#line 87 "bit_buffer.m"
  MR_Word mercury__bit_buffer__HeadVar__2_6)
#line 87 "bit_buffer.m"
{
#line 87 "bit_buffer.m"
  {
#line 87 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 87 "bit_buffer.m"
    {
#line 87 "bit_buffer.m"
      mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_119_114_105_116_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_115_108_105_99_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_112_117_116_95_52_95_95_91_49_44_32_50_44_32_51_93_95_48_4_p_0();
#line 87 "bit_buffer.m"
      return;
    }
#line 87 "bit_buffer.m"
  }
#line 87 "bit_buffer.m"
}

#line 67 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0(
#line 67 "bit_buffer.m"
  MR_String * mercury__bit_buffer__HeadVar__2_2)
#line 67 "bit_buffer.m"
{
#line 67 "bit_buffer.m"
  {
#line 67 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 67 "bit_buffer.m"
    {
#line 67 "bit_buffer.m"
      mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_115_116_114_101_97_109_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_110_97_109_101_95_52_95_95_91_49_93_95_48_4_p_0(mercury__bit_buffer__HeadVar__2_2);
#line 67 "bit_buffer.m"
      return;
    }
#line 67 "bit_buffer.m"
  }
#line 67 "bit_buffer.m"
}

#line 81 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0(void)
#line 81 "bit_buffer.m"
{
#line 81 "bit_buffer.m"
  {
#line 81 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 81 "bit_buffer.m"
    {
#line 81 "bit_buffer.m"
      mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_111_117_116_112_117_116_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_102_108_117_115_104_95_51_95_95_91_49_44_32_50_93_95_48_3_p_0();
#line 81 "bit_buffer.m"
      return;
    }
#line 81 "bit_buffer.m"
  }
#line 81 "bit_buffer.m"
}

#line 62 "bit_buffer.m"
MR_String MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0(void)
#line 62 "bit_buffer.m"
{
#line 62 "bit_buffer.m"
  {
#line 62 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 62 "bit_buffer.m"
    MR_String mercury__bit_buffer__HeadVar__2_2;

#line 62 "bit_buffer.m"
    {
#line 62 "bit_buffer.m"
      return mercury__bit_buffer__HeadVar__2_2 = mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_101_114_114_111_114_95_109_101_115_115_97_103_101_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 62 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__2_2;
#line 62 "bit_buffer.m"
  }
#line 62 "bit_buffer.m"
}

#line 76 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0(
#line 76 "bit_buffer.m"
  MR_Integer mercury__bit_buffer__HeadVar__2_11,
#line 76 "bit_buffer.m"
  MR_Integer mercury__bit_buffer__HeadVar__3_12,
#line 76 "bit_buffer.m"
  MR_Box mercury__bit_buffer__STATE_VARIABLE_BM_0_15,
#line 76 "bit_buffer.m"
  MR_Box * mercury__bit_buffer__STATE_VARIABLE_BM_16,
#line 76 "bit_buffer.m"
  MR_Integer * mercury__bit_buffer__HeadVar__6_6,
#line 76 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__7_7)
#line 76 "bit_buffer.m"
{
#line 76 "bit_buffer.m"
  {
#line 76 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 76 "bit_buffer.m"
    {
#line 76 "bit_buffer.m"
      mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_115_116_114_101_97_109_95_95_98_117_108_107_95_114_101_97_100_101_114_95_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_95_97_114_105_116_121_48_95_95_105_110_116_95_95_97_114_105_116_121_48_95_95_98_105_116_109_97_112_95_95_98_105_116_109_97_112_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_95_97_114_105_116_121_48_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_95_97_114_105_116_121_48_95_95_95_95_95_95_115_116_114_101_97_109_95_95_98_117_108_107_95_103_101_116_95_57_95_95_91_49_44_32_50_44_32_51_93_95_48_9_p_0(mercury__bit_buffer__STATE_VARIABLE_BM_0_15, mercury__bit_buffer__STATE_VARIABLE_BM_16, mercury__bit_buffer__HeadVar__6_6, mercury__bit_buffer__HeadVar__7_7);
#line 76 "bit_buffer.m"
      return;
    }
#line 76 "bit_buffer.m"
  }
#line 76 "bit_buffer.m"
}

#line 41 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer____Compare____error_stream_error_0_0(
#line 41 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__1_1)
#line 41 "bit_buffer.m"
{
#line 41 "bit_buffer.m"
  {
#line 41 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 41 "bit_buffer.m"
    {
#line 41 "bit_buffer.m"
      mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__bit_buffer__HeadVar__1_1);
#line 41 "bit_buffer.m"
      return;
    }
#line 41 "bit_buffer.m"
  }
#line 41 "bit_buffer.m"
}

#line 41 "bit_buffer.m"
MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_error_0_0(void)
#line 41 "bit_buffer.m"
{
#line 41 "bit_buffer.m"
  {
#line 41 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 41 "bit_buffer.m"
    {
#line 41 "bit_buffer.m"
      return mercury__bit_buffer__succeeded = mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_101_114_114_111_114_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 41 "bit_buffer.m"
    return mercury__bit_buffer__succeeded;
#line 41 "bit_buffer.m"
  }
#line 41 "bit_buffer.m"
}

#line 39 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer____Compare____error_stream_0_0(
#line 39 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__1_1)
#line 39 "bit_buffer.m"
{
#line 39 "bit_buffer.m"
  {
#line 39 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 39 "bit_buffer.m"
    {
#line 39 "bit_buffer.m"
      mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__bit_buffer__HeadVar__1_1);
#line 39 "bit_buffer.m"
      return;
    }
#line 39 "bit_buffer.m"
  }
#line 39 "bit_buffer.m"
}

#line 39 "bit_buffer.m"
MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_0_0(void)
#line 39 "bit_buffer.m"
{
#line 39 "bit_buffer.m"
  {
#line 39 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 39 "bit_buffer.m"
    {
#line 39 "bit_buffer.m"
      return mercury__bit_buffer__succeeded = mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_114_101_97_109_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 39 "bit_buffer.m"
    return mercury__bit_buffer__succeeded;
#line 39 "bit_buffer.m"
  }
#line 39 "bit_buffer.m"
}

#line 40 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer____Compare____error_state_0_0(
#line 40 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__1_1)
#line 40 "bit_buffer.m"
{
#line 40 "bit_buffer.m"
  {
#line 40 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 40 "bit_buffer.m"
    {
#line 40 "bit_buffer.m"
      mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__bit_buffer__HeadVar__1_1);
#line 40 "bit_buffer.m"
      return;
    }
#line 40 "bit_buffer.m"
  }
#line 40 "bit_buffer.m"
}

#line 40 "bit_buffer.m"
MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_state_0_0(void)
#line 40 "bit_buffer.m"
{
#line 40 "bit_buffer.m"
  {
#line 40 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;

#line 40 "bit_buffer.m"
    {
#line 40 "bit_buffer.m"
      return mercury__bit_buffer__succeeded = mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_98_105_116_95_98_117_102_102_101_114_95_95_101_114_114_111_114_95_115_116_97_116_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 40 "bit_buffer.m"
    return mercury__bit_buffer__succeeded;
#line 40 "bit_buffer.m"
  }
#line 40 "bit_buffer.m"
}

#line 152 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_3_0(
#line 152 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_6,
#line 152 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_7,
#line 152 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_8,
#line 152 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__1_1,
#line 152 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__2_2,
#line 152 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__3_3)
#line 152 "bit_buffer.m"
{
#line 152 "bit_buffer.m"
  {
#line 152 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 152 "bit_buffer.m"
    MR_Word mercury__bit_buffer__Cast_HeadVar1_4 = (MR_Word) mercury__bit_buffer__HeadVar__2_2;
#line 152 "bit_buffer.m"
    MR_Word mercury__bit_buffer__Cast_HeadVar2_5 = (MR_Word) mercury__bit_buffer__HeadVar__3_3;

#line 152 "bit_buffer.m"
    {
#line 152 "bit_buffer.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__bit_buffer__HeadVar__1_1, mercury__bit_buffer__Cast_HeadVar1_4, mercury__bit_buffer__Cast_HeadVar2_5);
#line 152 "bit_buffer.m"
      return;
    }
#line 152 "bit_buffer.m"
  }
#line 152 "bit_buffer.m"
}

#line 152 "bit_buffer.m"
MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_3_0(
#line 152 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_5,
#line 152 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_6,
#line 152 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_7,
#line 152 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1,
#line 152 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__2_2)
#line 152 "bit_buffer.m"
{
#line 152 "bit_buffer.m"
  {
#line 152 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 152 "bit_buffer.m"
    MR_Word mercury__bit_buffer__Cast_HeadVar1_3 = (MR_Word) mercury__bit_buffer__HeadVar__1_1;
#line 152 "bit_buffer.m"
    MR_Word mercury__bit_buffer__Cast_HeadVar2_4 = (MR_Word) mercury__bit_buffer__HeadVar__2_2;

#line 152 "bit_buffer.m"
    {
#line 152 "bit_buffer.m"
      return mercury__bit_buffer__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__bit_buffer__Cast_HeadVar1_3, mercury__bit_buffer__Cast_HeadVar2_4);
    }
#line 152 "bit_buffer.m"
    return mercury__bit_buffer__succeeded;
#line 152 "bit_buffer.m"
  }
#line 152 "bit_buffer.m"
}

#line 127 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_2_0(
#line 127 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_6,
#line 127 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_7,
#line 127 "bit_buffer.m"
  MR_Word * mercury__bit_buffer__HeadVar__1_1,
#line 127 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__2_2,
#line 127 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__3_3)
#line 127 "bit_buffer.m"
{
#line 127 "bit_buffer.m"
  {
#line 127 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 127 "bit_buffer.m"
    MR_Box mercury__bit_buffer__Cast_HeadVar1_4 = mercury__bit_buffer__HeadVar__2_2;
#line 127 "bit_buffer.m"
    MR_Box mercury__bit_buffer__Cast_HeadVar2_5 = mercury__bit_buffer__HeadVar__3_3;
#line 127 "bit_buffer.m"
    MR_Word mercury__bit_buffer__Cast_HeadVar1_11 = (MR_Word) mercury__bit_buffer__Cast_HeadVar1_4;
#line 127 "bit_buffer.m"
    MR_Word mercury__bit_buffer__Cast_HeadVar2_12 = (MR_Word) mercury__bit_buffer__Cast_HeadVar2_5;

#line 152 "bit_buffer.m"
    {
#line 152 "bit_buffer.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__bit_buffer__HeadVar__1_1, mercury__bit_buffer__Cast_HeadVar1_11, mercury__bit_buffer__Cast_HeadVar2_12);
#line 152 "bit_buffer.m"
      return;
    }
#line 127 "bit_buffer.m"
  }
#line 127 "bit_buffer.m"
}

#line 127 "bit_buffer.m"
MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_2_0(
#line 127 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_5,
#line 127 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_6,
#line 127 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1,
#line 127 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__2_2)
#line 127 "bit_buffer.m"
{
#line 127 "bit_buffer.m"
  {
#line 127 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 127 "bit_buffer.m"
    MR_Box mercury__bit_buffer__Cast_HeadVar1_3 = mercury__bit_buffer__HeadVar__1_1;
#line 127 "bit_buffer.m"
    MR_Box mercury__bit_buffer__Cast_HeadVar2_4 = mercury__bit_buffer__HeadVar__2_2;
#line 127 "bit_buffer.m"
    MR_Word mercury__bit_buffer__Cast_HeadVar1_8 = (MR_Word) mercury__bit_buffer__Cast_HeadVar1_3;
#line 127 "bit_buffer.m"
    MR_Word mercury__bit_buffer__Cast_HeadVar2_9 = (MR_Word) mercury__bit_buffer__Cast_HeadVar2_4;

#line 152 "bit_buffer.m"
    {
#line 152 "bit_buffer.m"
      return mercury__bit_buffer__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__bit_buffer__Cast_HeadVar1_8, mercury__bit_buffer__Cast_HeadVar2_9);
    }
#line 127 "bit_buffer.m"
    return mercury__bit_buffer__succeeded;
#line 127 "bit_buffer.m"
  }
#line 127 "bit_buffer.m"
}

#line 339 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__set_read_status_3_p_0(
#line 339 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_9,
#line 339 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_10,
#line 339 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_11,
#line 339 "bit_buffer.m"
  MR_Word mercury__bit_buffer__HeadVar__1_1,
#line 339 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__2_2,
#line 339 "bit_buffer.m"
  MR_Box * mercury__bit_buffer__HeadVar__3_3)
#line 339 "bit_buffer.m"
{
#line 346 "bit_buffer.m"
  {
#line 346 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 346 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Error_12;
#line 346 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Stream_13;
#line 346 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_State_14;

#line 350 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__set_read_status_3_p_0

	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	ReadStatus =  mercury__bit_buffer__HeadVar__1_1 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__2_2 ;
		{
#line 350 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_read_status = ReadStatus;

#line 1809 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__HeadVar__3_3  = (MR_Box) Buffer;
#line 350 "bit_buffer.m"
}
#line 346 "bit_buffer.m"
  }
#line 339 "bit_buffer.m"
}

#line 323 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__set_use_stream_3_p_0(
#line 323 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_9,
#line 323 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_10,
#line 323 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_11,
#line 323 "bit_buffer.m"
  MR_Word mercury__bit_buffer__HeadVar__1_1,
#line 323 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__2_2,
#line 323 "bit_buffer.m"
  MR_Box * mercury__bit_buffer__HeadVar__3_3)
#line 323 "bit_buffer.m"
{
#line 330 "bit_buffer.m"
  {
#line 330 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 330 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Stream_12;
#line 330 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_State_13;
#line 330 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Error_14;

#line 334 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__set_use_stream_3_p_0

	MR_Word UseStream;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	UseStream =  mercury__bit_buffer__HeadVar__1_1 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__2_2 ;
		{
#line 334 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_use_stream = UseStream;

#line 1865 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__HeadVar__3_3  = (MR_Box) Buffer;
#line 334 "bit_buffer.m"
}
#line 330 "bit_buffer.m"
  }
#line 323 "bit_buffer.m"
}

#line 308 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__set_state_3_p_0(
#line 308 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_9,
#line 308 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_10,
#line 308 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_11,
#line 308 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1,
#line 308 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__2_2,
#line 308 "bit_buffer.m"
  MR_Box * mercury__bit_buffer__HeadVar__3_3)
#line 308 "bit_buffer.m"
{
#line 315 "bit_buffer.m"
  {
#line 315 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 315 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_State_12;
#line 315 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Stream_13;
#line 315 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Error_14;

#line 318 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__set_state_3_p_0

	MR_Word State;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	State = (MR_Word) mercury__bit_buffer__HeadVar__1_1 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__2_2 ;
		{
#line 318 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_state = State;

#line 1921 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__HeadVar__3_3  = (MR_Box) Buffer;
#line 318 "bit_buffer.m"
}
#line 315 "bit_buffer.m"
  }
#line 308 "bit_buffer.m"
}

#line 290 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__set_bitmap_4_p_0(
#line 290 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_12,
#line 290 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_13,
#line 290 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_14,
#line 290 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1,
#line 290 "bit_buffer.m"
  MR_Integer mercury__bit_buffer__HeadVar__2_2,
#line 290 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__3_3,
#line 290 "bit_buffer.m"
  MR_Box * mercury__bit_buffer__HeadVar__4_4)
#line 290 "bit_buffer.m"
{
#line 298 "bit_buffer.m"
  {
#line 298 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 298 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Stream_15;
#line 298 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_State_16;
#line 298 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Error_17;

#line 302 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__set_bitmap_4_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__HeadVar__1_1 ;
	Pos =  mercury__bit_buffer__HeadVar__2_2 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__3_3 ;
		{
#line 302 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;

#line 1982 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__HeadVar__4_4  = (MR_Box) Buffer;
#line 302 "bit_buffer.m"
}
#line 298 "bit_buffer.m"
  }
#line 290 "bit_buffer.m"
}

#line 266 "bit_buffer.m"
void MR_CALL 
mercury__bit_buffer__set_all_7_p_0(
#line 266 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_21,
#line 266 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_22,
#line 266 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_23,
#line 266 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1,
#line 266 "bit_buffer.m"
  MR_Integer mercury__bit_buffer__HeadVar__2_2,
#line 266 "bit_buffer.m"
  MR_Integer mercury__bit_buffer__HeadVar__3_3,
#line 266 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__4_4,
#line 266 "bit_buffer.m"
  MR_Word mercury__bit_buffer__HeadVar__5_5,
#line 266 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__6_6,
#line 266 "bit_buffer.m"
  MR_Box * mercury__bit_buffer__HeadVar__7_7)
#line 266 "bit_buffer.m"
{
#line 277 "bit_buffer.m"
  {
#line 277 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 277 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_State_24;
#line 277 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Stream_25;
#line 277 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Error_26;

#line 281 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__set_all_7_p_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word State;
	MR_Word FilledBMs;
	ML_BitBufferPtr Buffer0;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__HeadVar__1_1 ;
	Pos =  mercury__bit_buffer__HeadVar__2_2 ;
	Size =  mercury__bit_buffer__HeadVar__3_3 ;
	State = (MR_Word) mercury__bit_buffer__HeadVar__4_4 ;
	FilledBMs =  mercury__bit_buffer__HeadVar__5_5 ;
	Buffer0 = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__6_6 ;
		{
#line 281 "bit_buffer.m"

    Buffer = Buffer0;
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = FilledBMs;

#line 2058 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__bit_buffer__HeadVar__7_7  = (MR_Box) Buffer;
#line 281 "bit_buffer.m"
}
#line 277 "bit_buffer.m"
  }
#line 266 "bit_buffer.m"
}

#line 198 "bit_buffer.m"
MR_Word MR_CALL 
mercury__bit_buffer__read_status_1_f_0(
#line 198 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_4_4,
#line 198 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_5_5,
#line 198 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_6,
#line 198 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1)
#line 198 "bit_buffer.m"
{
#line 259 "bit_buffer.m"
  {
#line 259 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 259 "bit_buffer.m"
    MR_Word mercury__bit_buffer__HeadVar__2_2;
#line 259 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_4_7;
#line 259 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_5_8;
#line 259 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Error_9;

#line 262 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__read_status_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word ReadStatus;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__1_1 ;
		{
#line 262 "bit_buffer.m"

    ReadStatus = Buffer->ML_bit_buffer_read_status;

#line 2109 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__2_2  = ReadStatus;
#line 262 "bit_buffer.m"
}
#line 259 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__2_2;
#line 259 "bit_buffer.m"
  }
#line 198 "bit_buffer.m"
}

#line 196 "bit_buffer.m"
MR_Word MR_CALL 
mercury__bit_buffer__filled_bitmaps_1_f_0(
#line 196 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_4_4,
#line 196 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_5_5,
#line 196 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_6_6,
#line 196 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1)
#line 196 "bit_buffer.m"
{
#line 252 "bit_buffer.m"
  {
#line 252 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 252 "bit_buffer.m"
    MR_Word mercury__bit_buffer__HeadVar__2_2;
#line 252 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_4_7;
#line 252 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_5_8;
#line 252 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_6_9;

#line 255 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__filled_bitmaps_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word FilledBMs;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__1_1 ;
		{
#line 255 "bit_buffer.m"

    FilledBMs = Buffer->ML_bit_buffer_filled_bitmaps;

#line 2162 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__2_2  = FilledBMs;
#line 255 "bit_buffer.m"
}
#line 252 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__2_2;
#line 252 "bit_buffer.m"
  }
#line 196 "bit_buffer.m"
}

#line 195 "bit_buffer.m"
MR_Box MR_CALL 
mercury__bit_buffer__state_1_f_0(
#line 195 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_5_5,
#line 195 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_6,
#line 195 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_7_7,
#line 195 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1)
#line 195 "bit_buffer.m"
{
#line 245 "bit_buffer.m"
  {
#line 245 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 245 "bit_buffer.m"
    MR_Box mercury__bit_buffer__HeadVar__2_2;
#line 245 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_5_8;
#line 245 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_State_9;
#line 245 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_7_10;

#line 248 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__state_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word State;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__1_1 ;
		{
#line 248 "bit_buffer.m"

    State = Buffer->ML_bit_buffer_state;

#line 2215 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__2_2  = (MR_Box) State;
#line 248 "bit_buffer.m"
}
#line 245 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__2_2;
#line 245 "bit_buffer.m"
  }
#line 195 "bit_buffer.m"
}

#line 193 "bit_buffer.m"
MR_Box MR_CALL 
mercury__bit_buffer__stream_1_f_0(
#line 193 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_4,
#line 193 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_5_5,
#line 193 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_6_6,
#line 193 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1)
#line 193 "bit_buffer.m"
{
#line 238 "bit_buffer.m"
  {
#line 238 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 238 "bit_buffer.m"
    MR_Box mercury__bit_buffer__HeadVar__2_2;
#line 238 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Stream_7;
#line 238 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_5_8;
#line 238 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_6_9;

#line 241 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__stream_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word Stream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__1_1 ;
		{
#line 241 "bit_buffer.m"

    Stream = Buffer->ML_bit_buffer_stream;

#line 2268 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__2_2  = (MR_Box) Stream;
#line 241 "bit_buffer.m"
}
#line 238 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__2_2;
#line 238 "bit_buffer.m"
  }
#line 193 "bit_buffer.m"
}

#line 192 "bit_buffer.m"
MR_Word MR_CALL 
mercury__bit_buffer__use_stream_1_f_0(
#line 192 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_4_4,
#line 192 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_5_5,
#line 192 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_6_6,
#line 192 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1)
#line 192 "bit_buffer.m"
{
#line 231 "bit_buffer.m"
  {
#line 231 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 231 "bit_buffer.m"
    MR_Word mercury__bit_buffer__HeadVar__2_2;
#line 231 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_4_7;
#line 231 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_5_8;
#line 231 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_6_9;

#line 234 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__use_stream_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Word UseStream;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__1_1 ;
		{
#line 234 "bit_buffer.m"

    UseStream = Buffer->ML_bit_buffer_use_stream;

#line 2321 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__2_2  = UseStream;
#line 234 "bit_buffer.m"
}
#line 231 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__2_2;
#line 231 "bit_buffer.m"
  }
#line 192 "bit_buffer.m"
}

#line 191 "bit_buffer.m"
MR_Integer MR_CALL 
mercury__bit_buffer__size_1_f_0(
#line 191 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_4_4,
#line 191 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_5_5,
#line 191 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_6_6,
#line 191 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1)
#line 191 "bit_buffer.m"
{
#line 224 "bit_buffer.m"
  {
#line 224 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 224 "bit_buffer.m"
    MR_Integer mercury__bit_buffer__HeadVar__2_2;
#line 224 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_4_7;
#line 224 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_5_8;
#line 224 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_6_9;

#line 227 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__size_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Size;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__1_1 ;
		{
#line 227 "bit_buffer.m"

    Size = Buffer->ML_bit_buffer_size;

#line 2374 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__2_2  = Size;
#line 227 "bit_buffer.m"
}
#line 224 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__2_2;
#line 224 "bit_buffer.m"
  }
#line 191 "bit_buffer.m"
}

#line 190 "bit_buffer.m"
MR_Integer MR_CALL 
mercury__bit_buffer__pos_1_f_0(
#line 190 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_4_4,
#line 190 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_5_5,
#line 190 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_6_6,
#line 190 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1)
#line 190 "bit_buffer.m"
{
#line 217 "bit_buffer.m"
  {
#line 217 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 217 "bit_buffer.m"
    MR_Integer mercury__bit_buffer__HeadVar__2_2;
#line 217 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_4_7;
#line 217 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_5_8;
#line 217 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_6_9;

#line 220 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__pos_1_f_0

	ML_BitBufferPtr Buffer;
	MR_Integer Pos;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__1_1 ;
		{
#line 220 "bit_buffer.m"

    Pos = Buffer->ML_bit_buffer_pos;

#line 2427 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__2_2  = Pos;
#line 220 "bit_buffer.m"
}
#line 217 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__2_2;
#line 217 "bit_buffer.m"
  }
#line 190 "bit_buffer.m"
}

#line 188 "bit_buffer.m"
MR_Box MR_CALL 
mercury__bit_buffer__bitmap_1_f_0(
#line 188 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_4_4,
#line 188 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_5_5,
#line 188 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_6_6,
#line 188 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1)
#line 188 "bit_buffer.m"
{
#line 210 "bit_buffer.m"
  {
#line 210 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 210 "bit_buffer.m"
    MR_Box mercury__bit_buffer__HeadVar__2_2;
#line 210 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_4_7;
#line 210 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_5_8;
#line 210 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_6_9;

#line 213 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__bitmap_1_f_0

	ML_BitBufferPtr Buffer;
	MR_BitmapPtr BM;

	Buffer = (ML_BitBufferPtr) mercury__bit_buffer__HeadVar__1_1 ;
		{
#line 213 "bit_buffer.m"

    BM = Buffer->ML_bit_buffer_bitmap;

#line 2480 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__2_2  = (MR_Box) BM;
#line 213 "bit_buffer.m"
}
#line 210 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__2_2;
#line 210 "bit_buffer.m"
  }
#line 188 "bit_buffer.m"
}

#line 165 "bit_buffer.m"
MR_Box MR_CALL 
mercury__bit_buffer__new_buffer_2_7_f_0(
#line 165 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_17,
#line 165 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_18,
#line 165 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_19,
#line 165 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__1_1,
#line 165 "bit_buffer.m"
  MR_Integer mercury__bit_buffer__HeadVar__2_2,
#line 165 "bit_buffer.m"
  MR_Integer mercury__bit_buffer__HeadVar__3_3,
#line 165 "bit_buffer.m"
  MR_Word mercury__bit_buffer__HeadVar__4_4,
#line 165 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__5_5,
#line 165 "bit_buffer.m"
  MR_Box mercury__bit_buffer__HeadVar__6_6,
#line 165 "bit_buffer.m"
  MR_Word mercury__bit_buffer__HeadVar__7_7)
#line 165 "bit_buffer.m"
{
#line 171 "bit_buffer.m"
  {
#line 171 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded;
#line 171 "bit_buffer.m"
    MR_Box mercury__bit_buffer__HeadVar__8_8;
#line 171 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Stream_20;
#line 171 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_State_21;
#line 171 "bit_buffer.m"
    MR_Word mercury__bit_buffer__TypeInfo_for_Error_22;

#line 175 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__new_buffer_2_7_f_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word UseStream;
	MR_Word Stream;
	MR_Word State;
	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__HeadVar__1_1 ;
	Pos =  mercury__bit_buffer__HeadVar__2_2 ;
	Size =  mercury__bit_buffer__HeadVar__3_3 ;
	UseStream =  mercury__bit_buffer__HeadVar__4_4 ;
	Stream = (MR_Word) mercury__bit_buffer__HeadVar__5_5 ;
	State = (MR_Word) mercury__bit_buffer__HeadVar__6_6 ;
	ReadStatus =  mercury__bit_buffer__HeadVar__7_7 ;
		{
#line 175 "bit_buffer.m"
{
    MR_incr_hp_type_msg(Buffer, ML_BitBuffer, MR_ALLOC_ID,
        "bit_buffer.bit_buffer/3");
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_use_stream = UseStream;
    Buffer->ML_bit_buffer_stream = Stream;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = MR_list_empty_msg(MR_ALLOC_ID);
    Buffer->ML_bit_buffer_read_status = ReadStatus;
}
#line 2566 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__8_8  = (MR_Box) Buffer;
#line 175 "bit_buffer.m"
}
#line 171 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__8_8;
#line 171 "bit_buffer.m"
  }
#line 165 "bit_buffer.m"
}

#line 155 "bit_buffer.m"
MR_Box MR_CALL 
mercury__bit_buffer__new_buffer_6_f_0(
#line 155 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Stream_17,
#line 155 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_State_18,
#line 155 "bit_buffer.m"
  MR_Word mercury__bit_buffer__TypeInfo_for_Error_19,
#line 155 "bit_buffer.m"
  MR_Box mercury__bit_buffer__BM_8,
#line 155 "bit_buffer.m"
  MR_Integer mercury__bit_buffer__Pos_9,
#line 155 "bit_buffer.m"
  MR_Integer mercury__bit_buffer__Size_10,
#line 155 "bit_buffer.m"
  MR_Word mercury__bit_buffer__UseStream_11,
#line 155 "bit_buffer.m"
  MR_Box mercury__bit_buffer__Stream_12,
#line 155 "bit_buffer.m"
  MR_Box mercury__bit_buffer__State_13)
#line 155 "bit_buffer.m"
{
#line 158 "bit_buffer.m"
  {
#line 158 "bit_buffer.m"
    MR_bool mercury__bit_buffer__succeeded = (mercury__bit_buffer__Size_10 <= (MR_Integer) 0);
#line 158 "bit_buffer.m"
    MR_Box mercury__bit_buffer__HeadVar__7_7;

#line 158 "bit_buffer.m"
    if (mercury__bit_buffer__succeeded)
#line 160 "bit_buffer.m"
      {
#line 160 "bit_buffer.m"
        MR_Word mercury__bit_buffer__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 160 "bit_buffer.m"
        MR_Word mercury__bit_buffer__TypeCtorInfo_21_21 = (MR_Word) &mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3;
#line 160 "bit_buffer.m"
        MR_Word mercury__bit_buffer__TypeInfo_22_22;
#line 160 "bit_buffer.m"
        MR_Box mercury__bit_buffer__conv0_HeadVar__7_7;

#line 2623 "bit_buffer.c"
        {
#line 2625 "bit_buffer.c"
          mercury__bit_buffer__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2627 "bit_buffer.c"
          MR_hl_field(MR_mktag(0), mercury__bit_buffer__TypeInfo_22_22, 0) = ((MR_Box) (mercury__bit_buffer__TypeCtorInfo_21_21));
#line 2629 "bit_buffer.c"
          MR_hl_field(MR_mktag(0), mercury__bit_buffer__TypeInfo_22_22, 1) = ((MR_Box) (mercury__bit_buffer__TypeInfo_for_Stream_17));
#line 2631 "bit_buffer.c"
          MR_hl_field(MR_mktag(0), mercury__bit_buffer__TypeInfo_22_22, 2) = ((MR_Box) (mercury__bit_buffer__TypeInfo_for_State_18));
#line 2633 "bit_buffer.c"
          MR_hl_field(MR_mktag(0), mercury__bit_buffer__TypeInfo_22_22, 3) = ((MR_Box) (mercury__bit_buffer__TypeInfo_for_Error_19));
#line 2635 "bit_buffer.c"
        }
#line 160 "bit_buffer.m"
        {
#line 160 "bit_buffer.m"
          mercury__bit_buffer__conv0_HeadVar__7_7 = mercury__exception__throw_1_f_0(mercury__bit_buffer__TypeCtorInfo_20_20, mercury__bit_buffer__TypeInfo_22_22, ((MR_Box) ((MR_String) "bit_buffer: invalid buffer size")));
        }
#line 160 "bit_buffer.m"
        mercury__bit_buffer__HeadVar__7_7 = ((MR_Box) mercury__bit_buffer__conv0_HeadVar__7_7);
#line 160 "bit_buffer.m"
      }
#line 158 "bit_buffer.m"
    else
#line 162 "bit_buffer.m"
      {
#line 162 "bit_buffer.m"
        MR_Word mercury__bit_buffer__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 171 "bit_buffer.m"
        MR_Word mercury__bit_buffer__TypeInfo_for_Stream_31;
#line 171 "bit_buffer.m"
        MR_Word mercury__bit_buffer__TypeInfo_for_State_32;
#line 171 "bit_buffer.m"
        MR_Word mercury__bit_buffer__TypeInfo_for_Error_33;

#line 175 "bit_buffer.m"
{
#define MR_PROC_LABEL mercury__bit_buffer__new_buffer_6_f_0

	MR_BitmapPtr BM;
	MR_Integer Pos;
	MR_Integer Size;
	MR_Word UseStream;
	MR_Word Stream;
	MR_Word State;
	MR_Word ReadStatus;
	ML_BitBufferPtr Buffer;

	BM = (MR_BitmapPtr) mercury__bit_buffer__BM_8 ;
	Pos =  mercury__bit_buffer__Pos_9 ;
	Size =  mercury__bit_buffer__Size_10 ;
	UseStream =  mercury__bit_buffer__UseStream_11 ;
	Stream = (MR_Word) mercury__bit_buffer__Stream_12 ;
	State = (MR_Word) mercury__bit_buffer__State_13 ;
	ReadStatus =  mercury__bit_buffer__V_16_16 ;
		{
#line 175 "bit_buffer.m"
{
    MR_incr_hp_type_msg(Buffer, ML_BitBuffer, MR_ALLOC_ID,
        "bit_buffer.bit_buffer/3");
    Buffer->ML_bit_buffer_bitmap = BM;
    Buffer->ML_bit_buffer_pos = Pos;
    Buffer->ML_bit_buffer_size = Size;
    Buffer->ML_bit_buffer_use_stream = UseStream;
    Buffer->ML_bit_buffer_stream = Stream;
    Buffer->ML_bit_buffer_state = State;
    Buffer->ML_bit_buffer_filled_bitmaps = MR_list_empty_msg(MR_ALLOC_ID);
    Buffer->ML_bit_buffer_read_status = ReadStatus;
}
#line 2693 "bit_buffer.c"

		;}
#undef MR_PROC_LABEL
	 mercury__bit_buffer__HeadVar__7_7  = (MR_Box) Buffer;
#line 175 "bit_buffer.m"
}
#line 162 "bit_buffer.m"
      }
#line 158 "bit_buffer.m"
    return mercury__bit_buffer__HeadVar__7_7;
#line 158 "bit_buffer.m"
  }
#line 155 "bit_buffer.m"
}

void mercury__bit_buffer__init(void)
{
}

void mercury__bit_buffer__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3);
	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_2);
	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0);
	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0);
	MR_register_type_ctor_info(&mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0);
}

void mercury__bit_buffer__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module bit_buffer. */
