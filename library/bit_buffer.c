/*
** Automatically generated from `bit_buffer.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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
#include "char.mih"
#include "construct.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 86 "bit_buffer.c"
static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer____vti_tuple_0;

#line 89 "bit_buffer.c"
static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0;

#line 92 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0;

#line 95 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_state_0[1];

#line 98 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_state_0[1];

#line 101 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_state_0[1];

#line 104 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0;

#line 107 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_0[1];

#line 110 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_0[1];

#line 113 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_0[1];

#line 116 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0;

#line 119 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_error_0[1];

#line 122 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_error_0[1];

#line 125 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_error_0[1];

#line 128 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_3_0_10001(
#line 131 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 133 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 135 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 137 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 139 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5);

#line 142 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_3_0_10001(
#line 145 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 147 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 149 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 151 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4,
#line 153 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5,
#line 155 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_6);

#line 158 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_2_0_10001(
#line 161 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 163 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 165 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 167 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4);

#line 170 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_2_0_10001(
#line 173 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 175 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 177 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_3,
#line 179 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 181 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5);

#line 184 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_state_0_0_10001(
#line 187 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 189 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2);

#line 192 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_state_0_0_10001(
#line 195 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 197 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 199 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3);

#line 202 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_0_0_10001(
#line 205 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 207 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2);

#line 210 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_0_0_10001(
#line 213 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 215 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 217 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3);

#line 220 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_error_0_0_10001(
#line 223 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 225 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2);

#line 228 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_error_0_0_10001(
#line 231 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 233 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 235 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3);

#line 238 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0_10001(
#line 241 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 243 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 245 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 247 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 249 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4);

#line 252 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0_10001(
#line 255 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 257 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 259 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_2,
#line 261 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 263 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4);

#line 266 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0_10001(
#line 269 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 271 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 273 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 275 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_3);

#line 278 "bit_buffer.c"
static MR_Box MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0_10001(
#line 281 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 283 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1);

#line 286 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0_10001(
#line 289 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 291 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 293 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 295 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 297 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 299 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_5,
#line 301 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_6,
#line 303 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_7,
#line 305 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_8,
#line 307 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_9);

#line 13 "ops.opt"
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



#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
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
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "construct.mh"
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
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
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
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "builtin.mh"
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
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "private_builtin.mh"
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
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 687 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__bit_buffer____Unify____bit_buffer_3_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____bit_buffer_3_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "bit_buffer",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 708 "bit_buffer.c"
static const MR_VA_TypeInfo_Struct0 mercury__bit_buffer____vti_tuple_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 0,
  { 0 }

};

#line 716 "bit_buffer.c"
static const MR_FA_PseudoTypeInfo_Struct3 mercury__bit_buffer__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0 = {
  &mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2,
    (MR_PseudoTypeInfo) &mercury__bit_buffer____vti_tuple_0
  }
};

#line 726 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_bit_buffer_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__bit_buffer____Unify____bit_buffer_2_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____bit_buffer_2_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "bit_buffer",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__bit_buffer__bit_buffer__pti_bit_buffer_3__pseudo_1__pseudo_2__plain___vti_tuple_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 747 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0 = {
  (MR_String) "error_state",
  (MR_Integer) 0
};

#line 753 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_state_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0
};

#line 758 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_state_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_state_0_0
};

#line 763 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_state_0[1] = {
  (MR_Integer) 0
};

#line 768 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_error_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__bit_buffer____Unify____error_state_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____error_state_0_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "error_state",
  {
    mercury__bit_buffer__bit_buffer__enum_name_ordered_error_state_0
  },
  {
    mercury__bit_buffer__bit_buffer__enum_value_ordered_error_state_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bit_buffer__bit_buffer__functor_number_map_error_state_0
};

#line 789 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0 = {
  (MR_String) "error_stream",
  (MR_Integer) 0
};

#line 795 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0
};

#line 800 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_0_0
};

#line 805 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_0[1] = {
  (MR_Integer) 0
};

#line 810 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__bit_buffer____Unify____error_stream_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____error_stream_0_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "error_stream",
  {
    mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_0
  },
  {
    mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_0
};

#line 831 "bit_buffer.c"
static const MR_EnumFunctorDesc mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0 = {
  (MR_String) "error_stream_error",
  (MR_Integer) 0
};

#line 837 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_error_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0
};

#line 842 "bit_buffer.c"
static const MR_EnumFunctorDescPtr mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_error_0[1] = {
  &mercury__bit_buffer__bit_buffer__enum_functor_desc_error_stream_error_0_0
};

#line 847 "bit_buffer.c"
static const MR_Integer mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_error_0[1] = {
  (MR_Integer) 0
};

#line 852 "bit_buffer.c"
const MR_TypeCtorInfo_Struct mercury__bit_buffer__bit_buffer__type_ctor_info_error_stream_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__bit_buffer____Unify____error_stream_error_0_0_10001)),
  ((MR_Box) (mercury__bit_buffer____Compare____error_stream_error_0_0_10001)),
  (MR_String) "bit_buffer",
  (MR_String) "error_stream_error",
  {
    mercury__bit_buffer__bit_buffer__enum_name_ordered_error_stream_error_0
  },
  {
    mercury__bit_buffer__bit_buffer__enum_value_ordered_error_stream_error_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__bit_buffer__bit_buffer__functor_number_map_error_stream_error_0
};

#line 873 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__writer__arity3__bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 3)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0_10001))
};

#line 883 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__stream__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0_10001))
};

#line 893 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__output__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0_10001))
};

#line 903 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__input__arity2__bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0__[5] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0))
};

#line 912 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__error__arity1__bit_buffer__error_stream_error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0_10001))
};

#line 922 "bit_buffer.c"
const MR_BaseTypeclassInfo base_typeclass_info_stream__bulk_reader__arity5__bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 5)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0_10001))
};

#line 932 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_3_0_10001(
#line 935 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 937 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 939 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 941 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 943 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5)
#line 945 "bit_buffer.c"
{
#line 947 "bit_buffer.c"
  {
#line 949 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 952 "bit_buffer.c"
    {
#line 954 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____bit_buffer_3_0(((MR_Word) mercury__bit_buffer__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__wrapper_arg_3), ((MR_Box) mercury__bit_buffer__wrapper_arg_4), ((MR_Box) mercury__bit_buffer__wrapper_arg_5));
    }
#line 957 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 959 "bit_buffer.c"
  }
#line 961 "bit_buffer.c"
}

#line 964 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_3_0_10001(
#line 967 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 969 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 971 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 973 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4,
#line 975 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5,
#line 977 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_6)
#line 979 "bit_buffer.c"
{
#line 981 "bit_buffer.c"
  {
#line 983 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 986 "bit_buffer.c"
    {
#line 988 "bit_buffer.c"
      mercury__bit_buffer____Compare____bit_buffer_3_0(((MR_Word) mercury__bit_buffer__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__wrapper_arg_2), ((MR_Word) mercury__bit_buffer__wrapper_arg_3), &mercury__bit_buffer__conv0_HeadVar__1_1, ((MR_Box) mercury__bit_buffer__wrapper_arg_5), ((MR_Box) mercury__bit_buffer__wrapper_arg_6));
    }
#line 991 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_4 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 993 "bit_buffer.c"
  }
#line 995 "bit_buffer.c"
}

#line 998 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____bit_buffer_2_0_10001(
#line 1001 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1003 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 1005 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 1007 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4)
#line 1009 "bit_buffer.c"
{
#line 1011 "bit_buffer.c"
  {
#line 1013 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 1016 "bit_buffer.c"
    {
#line 1018 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____bit_buffer_2_0(((MR_Word) mercury__bit_buffer__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__wrapper_arg_2), ((MR_Box) mercury__bit_buffer__wrapper_arg_3), ((MR_Box) mercury__bit_buffer__wrapper_arg_4));
    }
#line 1021 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 1023 "bit_buffer.c"
  }
#line 1025 "bit_buffer.c"
}

#line 1028 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____bit_buffer_2_0_10001(
#line 1031 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1033 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 1035 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_3,
#line 1037 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 1039 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_5)
#line 1041 "bit_buffer.c"
{
#line 1043 "bit_buffer.c"
  {
#line 1045 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 1048 "bit_buffer.c"
    {
#line 1050 "bit_buffer.c"
      mercury__bit_buffer____Compare____bit_buffer_2_0(((MR_Word) mercury__bit_buffer__wrapper_arg_1), ((MR_Word) mercury__bit_buffer__wrapper_arg_2), &mercury__bit_buffer__conv0_HeadVar__1_1, ((MR_Box) mercury__bit_buffer__wrapper_arg_4), ((MR_Box) mercury__bit_buffer__wrapper_arg_5));
    }
#line 1053 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_3 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 1055 "bit_buffer.c"
  }
#line 1057 "bit_buffer.c"
}

#line 1060 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_state_0_0_10001(
#line 1063 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1065 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2)
#line 1067 "bit_buffer.c"
{
#line 1069 "bit_buffer.c"
  {
#line 1071 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 1074 "bit_buffer.c"
    {
#line 1076 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____error_state_0_0();
    }
#line 1079 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 1081 "bit_buffer.c"
  }
#line 1083 "bit_buffer.c"
}

#line 1086 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_state_0_0_10001(
#line 1089 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 1091 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 1093 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3)
#line 1095 "bit_buffer.c"
{
#line 1097 "bit_buffer.c"
  {
#line 1099 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 1102 "bit_buffer.c"
    {
#line 1104 "bit_buffer.c"
      mercury__bit_buffer____Compare____error_state_0_0(&mercury__bit_buffer__conv0_HeadVar__1_1);
    }
#line 1107 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 1109 "bit_buffer.c"
  }
#line 1111 "bit_buffer.c"
}

#line 1114 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_0_0_10001(
#line 1117 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1119 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2)
#line 1121 "bit_buffer.c"
{
#line 1123 "bit_buffer.c"
  {
#line 1125 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 1128 "bit_buffer.c"
    {
#line 1130 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____error_stream_0_0();
    }
#line 1133 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 1135 "bit_buffer.c"
  }
#line 1137 "bit_buffer.c"
}

#line 1140 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_0_0_10001(
#line 1143 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 1145 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 1147 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3)
#line 1149 "bit_buffer.c"
{
#line 1151 "bit_buffer.c"
  {
#line 1153 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 1156 "bit_buffer.c"
    {
#line 1158 "bit_buffer.c"
      mercury__bit_buffer____Compare____error_stream_0_0(&mercury__bit_buffer__conv0_HeadVar__1_1);
    }
#line 1161 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 1163 "bit_buffer.c"
  }
#line 1165 "bit_buffer.c"
}

#line 1168 "bit_buffer.c"
static MR_bool MR_CALL 
mercury__bit_buffer____Unify____error_stream_error_0_0_10001(
#line 1171 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1173 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2)
#line 1175 "bit_buffer.c"
{
#line 1177 "bit_buffer.c"
  {
#line 1179 "bit_buffer.c"
    MR_bool mercury__bit_buffer__succeeded;

#line 1182 "bit_buffer.c"
    {
#line 1184 "bit_buffer.c"
      mercury__bit_buffer__succeeded = mercury__bit_buffer____Unify____error_stream_error_0_0();
    }
#line 1187 "bit_buffer.c"
    return mercury__bit_buffer__succeeded;
#line 1189 "bit_buffer.c"
  }
#line 1191 "bit_buffer.c"
}

#line 1194 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer____Compare____error_stream_error_0_0_10001(
#line 1197 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_1,
#line 1199 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 1201 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3)
#line 1203 "bit_buffer.c"
{
#line 1205 "bit_buffer.c"
  {
#line 1207 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__1_1;

#line 1210 "bit_buffer.c"
    {
#line 1212 "bit_buffer.c"
      mercury__bit_buffer____Compare____error_stream_error_0_0(&mercury__bit_buffer__conv0_HeadVar__1_1);
    }
#line 1215 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_1 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__1_1));
#line 1217 "bit_buffer.c"
  }
#line 1219 "bit_buffer.c"
}

#line 1222 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0_10001(
#line 1225 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 1227 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1229 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 1231 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 1233 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4)
#line 1235 "bit_buffer.c"
{
#line 1237 "bit_buffer.c"
  {
#line 1239 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;

#line 1242 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 1244 "bit_buffer.c"
    {
#line 1246 "bit_buffer.c"
      mercury__bit_buffer__ClassMethod_for_stream__writer____bit_buffer__error_stream__arity0__bitmap__slice__arity0__bit_buffer__error_state__arity0______stream__put_4_4_p_0(((MR_Word) mercury__bit_buffer__wrapper_arg_2));
    }
#line 1249 "bit_buffer.c"
  }
#line 1251 "bit_buffer.c"
}

#line 1254 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0_10001(
#line 1257 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 1259 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1261 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_2,
#line 1263 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 1265 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_4)
#line 1267 "bit_buffer.c"
{
#line 1269 "bit_buffer.c"
  {
#line 1271 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;
#line 1273 "bit_buffer.c"
    MR_String mercury__bit_buffer__conv0_HeadVar__2_2;

#line 1276 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 1278 "bit_buffer.c"
    {
#line 1280 "bit_buffer.c"
      mercury__bit_buffer__ClassMethod_for_stream__stream____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__name_4_4_p_0(&mercury__bit_buffer__conv0_HeadVar__2_2);
    }
#line 1283 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_2 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__2_2));
#line 1285 "bit_buffer.c"
  }
#line 1287 "bit_buffer.c"
}

#line 1290 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0_10001(
#line 1293 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 1295 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1297 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 1299 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_3)
#line 1301 "bit_buffer.c"
{
#line 1303 "bit_buffer.c"
  {
#line 1305 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;

#line 1308 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 1310 "bit_buffer.c"
    {
#line 1312 "bit_buffer.c"
      mercury__bit_buffer__ClassMethod_for_stream__output____bit_buffer__error_stream__arity0__bit_buffer__error_state__arity0______stream__flush_3_3_p_0();
    }
#line 1315 "bit_buffer.c"
  }
#line 1317 "bit_buffer.c"
}

#line 1320 "bit_buffer.c"
static MR_Box MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0_10001(
#line 1323 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 1325 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1)
#line 1327 "bit_buffer.c"
{
#line 1329 "bit_buffer.c"
  {
#line 1331 "bit_buffer.c"
    MR_Box mercury__bit_buffer__wrapper_arg_2;
#line 1333 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;
#line 1335 "bit_buffer.c"
    MR_String mercury__bit_buffer__conv0_HeadVar__2_2;

#line 1338 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 1340 "bit_buffer.c"
    {
#line 1342 "bit_buffer.c"
      mercury__bit_buffer__conv0_HeadVar__2_2 = mercury__bit_buffer__ClassMethod_for_stream__error____bit_buffer__error_stream_error__arity0______stream__error_message_1_1_f_0();
    }
#line 1345 "bit_buffer.c"
    mercury__bit_buffer__wrapper_arg_2 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__2_2));
#line 1347 "bit_buffer.c"
    return mercury__bit_buffer__wrapper_arg_2;
#line 1349 "bit_buffer.c"
  }
#line 1351 "bit_buffer.c"
}

#line 1354 "bit_buffer.c"
static void MR_CALL 
mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0_10001(
#line 1357 "bit_buffer.c"
  MR_Box mercury__bit_buffer__closure_arg,
#line 1359 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_1,
#line 1361 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_2,
#line 1363 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_3,
#line 1365 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_4,
#line 1367 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_5,
#line 1369 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_6,
#line 1371 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_7,
#line 1373 "bit_buffer.c"
  MR_Box mercury__bit_buffer__wrapper_arg_8,
#line 1375 "bit_buffer.c"
  MR_Box * mercury__bit_buffer__wrapper_arg_9)
#line 1377 "bit_buffer.c"
{
#line 1379 "bit_buffer.c"
  {
#line 1381 "bit_buffer.c"
    MR_Box mercury__bit_buffer__closure;
#line 1383 "bit_buffer.c"
    MR_Box mercury__bit_buffer__conv2_STATE_VARIABLE_BM_16;
#line 1385 "bit_buffer.c"
    MR_Integer mercury__bit_buffer__conv1_HeadVar__6_6;
#line 1387 "bit_buffer.c"
    MR_Word mercury__bit_buffer__conv0_HeadVar__7_7;

#line 1390 "bit_buffer.c"
    mercury__bit_buffer__closure = mercury__bit_buffer__closure_arg;
#line 1392 "bit_buffer.c"
    {
#line 1394 "bit_buffer.c"
      mercury__bit_buffer__ClassMethod_for_stream__bulk_reader____bit_buffer__error_stream__arity0__int__arity0__bitmap__bitmap__arity0__bit_buffer__error_state__arity0__bit_buffer__error_stream_error__arity0______stream__bulk_get_9_9_p_0(((MR_Integer) mercury__bit_buffer__wrapper_arg_2), ((MR_Integer) mercury__bit_buffer__wrapper_arg_3), ((MR_Box) mercury__bit_buffer__wrapper_arg_4), &mercury__bit_buffer__conv2_STATE_VARIABLE_BM_16, &mercury__bit_buffer__conv1_HeadVar__6_6, &mercury__bit_buffer__conv0_HeadVar__7_7);
    }
#line 1397 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_5 = ((MR_Box) (mercury__bit_buffer__conv2_STATE_VARIABLE_BM_16));
#line 1399 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_6 = ((MR_Box) (mercury__bit_buffer__conv1_HeadVar__6_6));
#line 1401 "bit_buffer.c"
    *mercury__bit_buffer__wrapper_arg_7 = ((MR_Box) (mercury__bit_buffer__conv0_HeadVar__7_7));
#line 1403 "bit_buffer.c"
  }
#line 1405 "bit_buffer.c"
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
#line 1422 "bit_buffer.c"
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
#line 1469 "bit_buffer.c"
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

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__bit_buffer__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__bit_buffer__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
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

#line 2109 "bit_buffer.c"

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

#line 2165 "bit_buffer.c"

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

#line 2221 "bit_buffer.c"

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

#line 2282 "bit_buffer.c"

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

#line 2358 "bit_buffer.c"

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

#line 2409 "bit_buffer.c"

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

#line 2462 "bit_buffer.c"

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

#line 2515 "bit_buffer.c"

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

#line 2568 "bit_buffer.c"

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

#line 2621 "bit_buffer.c"

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

#line 2674 "bit_buffer.c"

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

#line 2727 "bit_buffer.c"

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

#line 2780 "bit_buffer.c"

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
#line 2866 "bit_buffer.c"

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
#line 158 "bit_buffer.m"
        MR_Box mercury__bit_buffer__conv0_HeadVar__7_7;

#line 2923 "bit_buffer.c"
        {
#line 2925 "bit_buffer.c"
          mercury__bit_buffer__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2927 "bit_buffer.c"
          MR_hl_field(MR_mktag(0), mercury__bit_buffer__TypeInfo_22_22, 0) = ((MR_Box) (mercury__bit_buffer__TypeCtorInfo_21_21));
#line 2929 "bit_buffer.c"
          MR_hl_field(MR_mktag(0), mercury__bit_buffer__TypeInfo_22_22, 1) = ((MR_Box) (mercury__bit_buffer__TypeInfo_for_Stream_17));
#line 2931 "bit_buffer.c"
          MR_hl_field(MR_mktag(0), mercury__bit_buffer__TypeInfo_22_22, 2) = ((MR_Box) (mercury__bit_buffer__TypeInfo_for_State_18));
#line 2933 "bit_buffer.c"
          MR_hl_field(MR_mktag(0), mercury__bit_buffer__TypeInfo_22_22, 3) = ((MR_Box) (mercury__bit_buffer__TypeInfo_for_Error_19));
#line 2935 "bit_buffer.c"
        }
#line 158 "bit_buffer.m"
        {
#line 158 "bit_buffer.m"
          mercury__bit_buffer__conv0_HeadVar__7_7 = mercury__exception__throw_1_f_0(mercury__bit_buffer__TypeCtorInfo_20_20, mercury__bit_buffer__TypeInfo_22_22, ((MR_Box) ((MR_String) "bit_buffer: invalid buffer size")));
        }
#line 158 "bit_buffer.m"
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
#line 2993 "bit_buffer.c"

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
