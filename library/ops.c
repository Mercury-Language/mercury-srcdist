/*
** Automatically generated from `ops.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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


/* :- module ops. */
/* :- implementation. */

/*
INIT mercury__ops__init
ENDINIT
*/

#include "ops.mih"


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




#line 93 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0;

#line 96 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1;

#line 99 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2];

#line 102 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2];

#line 105 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2];

#line 108 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2];

#line 111 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_0;

#line 114 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1];

#line 117 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_1;

#line 120 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2];

#line 123 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_2;

#line 126 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1];

#line 129 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_3;

#line 132 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1];

#line 135 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1];

#line 138 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1];

#line 141 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1];

#line 144 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_class_0[4];

#line 147 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4];

#line 150 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4];

#line 153 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0;

#line 156 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1];

#line 159 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1];

#line 162 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1];

#line 165 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2];

#line 168 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_op_info_0_0;

#line 171 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1];

#line 174 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1];

#line 177 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1];

#line 180 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1];

#line 183 "ops.c"
static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1];

#line 186 "ops.c"
static const MR_TypeClassMethod mercury__ops__ops__type_class_id_method_ids_op_table_1[9];

#line 189 "ops.c"
static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1;

#line 192 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
#line 195 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 197 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 200 "ops.c"
static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
#line 203 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 205 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 207 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 210 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
#line 213 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 215 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 218 "ops.c"
static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
#line 221 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 223 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 225 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 228 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
#line 231 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 233 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 236 "ops.c"
static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
#line 239 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 241 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 243 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 246 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0_10001(
#line 249 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 251 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 254 "ops.c"
static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
#line 257 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 259 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 261 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 264 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
#line 267 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 269 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 272 "ops.c"
static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
#line 275 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 277 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 279 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 282 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
#line 285 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 287 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 290 "ops.c"
static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
#line 293 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 295 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 297 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 300 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
#line 303 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 305 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 307 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 309 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 311 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 313 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5);

#line 316 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
#line 319 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 321 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 323 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 325 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 327 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 330 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
#line 333 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 335 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 337 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 339 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 341 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 343 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5);

#line 346 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
#line 349 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 351 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 353 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 355 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 357 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 360 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
#line 363 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 365 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 367 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 370 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
#line 373 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 375 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 377 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 379 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 381 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 384 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
#line 387 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 389 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 391 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_2,
#line 393 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 395 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 398 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
#line 401 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 403 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1);

#line 406 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
#line 409 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 411 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1);

#line 283 "ops.m"
static MR_bool MR_CALL 
mercury__ops__op_table_3_p_0(
#line 283 "ops.m"
  MR_String mercury__ops__Op_4,
#line 283 "ops.m"
  MR_Word * mercury__ops__Info_5,
#line 283 "ops.m"
  MR_Word * mercury__ops__OtherInfos_6);


static /* final */ const MR_Box mercury__ops_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__ops_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__ops_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__ops_scalar_common_4[50][2];

static /* final */ const MR_Box mercury__ops_scalar_common_5[2][1];


#line 297 "ops.m"
/* sealed */ struct mercury__ops__vector_common_type_6_0_s {
#line 297 "ops.m"
  const MR_Word mercury__ops__vector_common_type_6_0__vct_6_f_0;
#line 297 "ops.m"
  const MR_Word mercury__ops__vector_common_type_6_0__vct_6_f_1;
#line 297 "ops.m"
};

static /* final */ const struct mercury__ops__vector_common_type_6_0_s mercury__ops_vector_common_6[97];



static /* final */ const MR_Box mercury__ops_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ops_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ops_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ops_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ops_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ops_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ops_scalar_common_4[50][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1025))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[2])),
    ((MR_Box) ((MR_Integer) 400))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 200))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[2])),
    ((MR_Box) ((MR_Integer) 500))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 500))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 500))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1000))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 200))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1179))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 1200))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1050))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[2])),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 550))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[2])),
    ((MR_Box) ((MR_Integer) 120))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 1200))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 1175))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 650))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1100))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 700))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 920))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 90))
  },
  /* row 27 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 99))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 100))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[28])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &mercury__ops_scalar_common_4[0]))),
    ((MR_Box) ((MR_Integer) 950))
  },
  /* row 31 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 720))
  },
  /* row 32 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1180))
  },
  /* row 33 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1190))
  },
  /* row 34 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1170))
  },
  /* row 35 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 701))
  },
  /* row 36 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 400))
  },
  /* row 37 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 740))
  },
  /* row 38 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 1150))
  },
  /* row 39 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[13])),
    ((MR_Box) ((MR_Integer) 900))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 40))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]))),
    ((MR_Box) ((MR_Integer) 900))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 1199))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 800))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 1160))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]))),
    ((MR_Box) ((MR_Integer) 800))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]))),
    ((MR_Box) ((MR_Integer) 950))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 950))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]))),
    ((MR_Box) ((MR_Integer) 1181))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 1180))
  },
};

static /* final */ const MR_Box mercury__ops_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct mercury__ops__vector_common_type_6_0_s mercury__ops_vector_common_6[97] = {
  /* row 0 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[40],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 1 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[40],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 2 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[40],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 3 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[1],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 4 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[3],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 5 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[4],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[5],
    (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[7])
  },
  /* row 7 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[8],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 8 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[9],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 9 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[5],
    (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[11])
  },
  /* row 10 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[5],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 11 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[12],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 12 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[14],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 13 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[15],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 14 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[16],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 15 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[17],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 16 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[3],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 17 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[3],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 18 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[5],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 19 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[18],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 20 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[14],
    (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[20])
  },
  /* row 21 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[21],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 22 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[22],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 23 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[23],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 24 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 25 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[3],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 26 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[25],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 27 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[25],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 28 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 29 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 30 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 31 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 32 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 33 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[21],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 34 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[25],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 35 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 36 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[22],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 37 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 38 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 39 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[3],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 40 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[19],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 41 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[26],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 42 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 43 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 44 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 45 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 46 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[10],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 47 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[41],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 48 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[5],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 49 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 50 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 51 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[27],
    (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[29])
  },
  /* row 52 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[30],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 53 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[31],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 54 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[30],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 55 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[32],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 56 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[33],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 57 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[3],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 58 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[34],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 59 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 60 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[28],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 61 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 62 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 63 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[43],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 64 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[44],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 65 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 66 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[45],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 67 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 68 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 69 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 70 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 71 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 72 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[35],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 73 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[36],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 74 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 75 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 76 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[41],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 77 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[37],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 78 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[23],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 79 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 80 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[43],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 81 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 82 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[46],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 83 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[47],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 84 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[36],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 85 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 86 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[45],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 87 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[48],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 88 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[30],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 89 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[38],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 90 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[49],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 91 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 92 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[42],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 93 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[39],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 94 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[21],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 95 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[41],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 96 */
  {
    (MR_Word) &mercury__ops_scalar_common_4[24],
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
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
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"



#line 1412 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0 = {
  (MR_String) "x",
  (MR_Integer) 0
};

#line 1418 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1 = {
  (MR_String) "y",
  (MR_Integer) 1
};

#line 1424 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1430 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1436 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1442 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_assoc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__ops____Unify____assoc_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____assoc_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "assoc",
  {     mercury__ops__ops__enum_name_ordered_assoc_0 },
  {     mercury__ops__ops__enum_value_ordered_assoc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__ops__ops__functor_number_map_assoc_0
};

#line 1459 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1465 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_0 = {
  (MR_String) "infix",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__ops__ops__field_types_class_0_0,
  NULL,
  NULL,
  NULL
};

#line 1480 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1485 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_1 = {
  (MR_String) "prefix",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__ops__ops__field_types_class_0_1,
  NULL,
  NULL,
  NULL
};

#line 1500 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1506 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_2 = {
  (MR_String) "binary_prefix",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__ops__ops__field_types_class_0_2,
  NULL,
  NULL,
  NULL
};

#line 1521 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1526 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_3 = {
  (MR_String) "postfix",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__ops__ops__field_types_class_0_3,
  NULL,
  NULL,
  NULL
};

#line 1541 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_0
};

#line 1546 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1551 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_2
};

#line 1556 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_3
};

#line 1561 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_class_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_class_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_class_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_class_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_class_0_3
  }
};

#line 1585 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4] = {
  &mercury__ops__ops__du_functor_desc_class_0_2,
  &mercury__ops__ops__du_functor_desc_class_0_0,
  &mercury__ops__ops__du_functor_desc_class_0_3,
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1593 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1601 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____class_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____class_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "class",
  {     mercury__ops__ops__du_name_ordered_class_0 },
  {     mercury__ops__ops__du_ptag_ordered_class_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__ops__ops__functor_number_map_class_0
};

#line 1618 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0 = {
  (MR_String) "mercury_op_table",
  (MR_Integer) 0
};

#line 1624 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1629 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1634 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1] = {
  (MR_Integer) 0
};

#line 1639 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_mercury_op_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__ops____Unify____mercury_op_table_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____mercury_op_table_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "mercury_op_table",
  {     mercury__ops__ops__enum_name_ordered_mercury_op_table_0 },
  {     mercury__ops__ops__enum_value_ordered_mercury_op_table_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__ops__ops__functor_number_map_mercury_op_table_0
};

#line 1656 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1662 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_op_info_0_0 = {
  (MR_String) "op_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__ops__ops__field_types_op_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 1677 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1682 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_op_info_0_0
  }
};

#line 1691 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1696 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1] = {
  (MR_Integer) 0
};

#line 1701 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_op_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____op_info_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____op_info_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "op_info",
  {     mercury__ops__ops__du_name_ordered_op_info_0 },
  {     mercury__ops__ops__du_ptag_ordered_op_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__ops__ops__functor_number_map_op_info_0
};

#line 1718 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_priority_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__ops____Unify____priority_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____priority_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "priority",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1735 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__ops____Unify____table_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____table_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_mercury_op_table_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1752 "ops.c"
const MR_BaseTypeclassInfo base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[14] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 9)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001))
};

#line 1770 "ops.c"
static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1] = {
  (MR_String) "Table"
};

#line 1775 "ops.c"
static const MR_TypeClassMethod mercury__ops__ops__type_class_id_method_ids_op_table_1[9] = {
  {
    (MR_String) "lookup_infix_op",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "lookup_prefix_op",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "lookup_binary_prefix_op",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "lookup_postfix_op",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "lookup_op",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "lookup_op_infos",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "lookup_operator_term",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "max_priority",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "arg_priority",
    (MR_Integer) 2,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 1824 "ops.c"
static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1 = {
  (MR_String) "ops",
  (MR_String) "op_table",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 9,
  mercury__ops__ops__type_class_id_var_names_op_table_1,
  mercury__ops__ops__type_class_id_method_ids_op_table_1
};

#line 1835 "ops.c"
const MR_TypeClassDeclStruct mercury__ops__ops__type_class_decl_op_table_1 = {
  &mercury__ops__ops__type_class_id_op_table_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1843 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
#line 1846 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1848 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1850 "ops.c"
{
#line 1852 "ops.c"
  {
#line 1854 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1857 "ops.c"
    {
#line 1859 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____assoc_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1862 "ops.c"
    return mercury__ops__succeeded;
#line 1864 "ops.c"
  }
#line 1866 "ops.c"
}

#line 1869 "ops.c"
static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
#line 1872 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1874 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1876 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1878 "ops.c"
{
#line 1880 "ops.c"
  {
#line 1882 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1885 "ops.c"
    {
#line 1887 "ops.c"
      mercury__ops____Compare____assoc_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1890 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1892 "ops.c"
  }
#line 1894 "ops.c"
}

#line 1897 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
#line 1900 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1902 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1904 "ops.c"
{
#line 1906 "ops.c"
  {
#line 1908 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1911 "ops.c"
    {
#line 1913 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____class_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1916 "ops.c"
    return mercury__ops__succeeded;
#line 1918 "ops.c"
  }
#line 1920 "ops.c"
}

#line 1923 "ops.c"
static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
#line 1926 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1928 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1930 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1932 "ops.c"
{
#line 1934 "ops.c"
  {
#line 1936 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1939 "ops.c"
    {
#line 1941 "ops.c"
      mercury__ops____Compare____class_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1944 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1946 "ops.c"
  }
#line 1948 "ops.c"
}

#line 1951 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
#line 1954 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1956 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1958 "ops.c"
{
#line 1960 "ops.c"
  {
#line 1962 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1965 "ops.c"
    {
#line 1967 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____mercury_op_table_0_0();
    }
#line 1970 "ops.c"
    return mercury__ops__succeeded;
#line 1972 "ops.c"
  }
#line 1974 "ops.c"
}

#line 1977 "ops.c"
static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
#line 1980 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1982 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1984 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1986 "ops.c"
{
#line 1988 "ops.c"
  {
#line 1990 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1993 "ops.c"
    {
#line 1995 "ops.c"
      mercury__ops____Compare____mercury_op_table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 1998 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 2000 "ops.c"
  }
#line 2002 "ops.c"
}

#line 2005 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0_10001(
#line 2008 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2010 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2012 "ops.c"
{
#line 2014 "ops.c"
  {
#line 2016 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 2019 "ops.c"
    {
#line 2021 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____op_info_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 2024 "ops.c"
    return mercury__ops__succeeded;
#line 2026 "ops.c"
  }
#line 2028 "ops.c"
}

#line 2031 "ops.c"
static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
#line 2034 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 2036 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2038 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 2040 "ops.c"
{
#line 2042 "ops.c"
  {
#line 2044 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 2047 "ops.c"
    {
#line 2049 "ops.c"
      mercury__ops____Compare____op_info_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 2052 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 2054 "ops.c"
  }
#line 2056 "ops.c"
}

#line 2059 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
#line 2062 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2064 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2066 "ops.c"
{
#line 2068 "ops.c"
  {
#line 2070 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 2073 "ops.c"
    {
#line 2075 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____priority_0_0(((MR_Integer) mercury__ops__wrapper_arg_1), ((MR_Integer) mercury__ops__wrapper_arg_2));
    }
#line 2078 "ops.c"
    return mercury__ops__succeeded;
#line 2080 "ops.c"
  }
#line 2082 "ops.c"
}

#line 2085 "ops.c"
static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
#line 2088 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 2090 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2092 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 2094 "ops.c"
{
#line 2096 "ops.c"
  {
#line 2098 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 2101 "ops.c"
    {
#line 2103 "ops.c"
      mercury__ops____Compare____priority_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Integer) mercury__ops__wrapper_arg_2), ((MR_Integer) mercury__ops__wrapper_arg_3));
    }
#line 2106 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 2108 "ops.c"
  }
#line 2110 "ops.c"
}

#line 2113 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
#line 2116 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2118 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2120 "ops.c"
{
#line 2122 "ops.c"
  {
#line 2124 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 2127 "ops.c"
    {
#line 2129 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____table_0_0();
    }
#line 2132 "ops.c"
    return mercury__ops__succeeded;
#line 2134 "ops.c"
  }
#line 2136 "ops.c"
}

#line 2139 "ops.c"
static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
#line 2142 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 2144 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2146 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 2148 "ops.c"
{
#line 2150 "ops.c"
  {
#line 2152 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 2155 "ops.c"
    {
#line 2157 "ops.c"
      mercury__ops____Compare____table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 2160 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 2162 "ops.c"
  }
#line 2164 "ops.c"
}

#line 2167 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
#line 2170 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2172 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2174 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2176 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2178 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 2180 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 2182 "ops.c"
{
#line 2184 "ops.c"
  {
#line 2186 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2188 "ops.c"
    MR_Box mercury__ops__closure;
#line 2190 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 2192 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 2194 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 2197 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2199 "ops.c"
    {
#line 2201 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 2204 "ops.c"
    if (mercury__ops__succeeded)
#line 2206 "ops.c"
      {
#line 2208 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 2210 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 2212 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 2214 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2216 "ops.c"
      }
#line 2218 "ops.c"
    return mercury__ops__succeeded;
#line 2220 "ops.c"
  }
#line 2222 "ops.c"
}

#line 2225 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
#line 2228 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2230 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2232 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2234 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2236 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2238 "ops.c"
{
#line 2240 "ops.c"
  {
#line 2242 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2244 "ops.c"
    MR_Box mercury__ops__closure;
#line 2246 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 2248 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2251 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2253 "ops.c"
    {
#line 2255 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2258 "ops.c"
    if (mercury__ops__succeeded)
#line 2260 "ops.c"
      {
#line 2262 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2264 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2266 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2268 "ops.c"
      }
#line 2270 "ops.c"
    return mercury__ops__succeeded;
#line 2272 "ops.c"
  }
#line 2274 "ops.c"
}

#line 2277 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
#line 2280 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2282 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2284 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2286 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2288 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 2290 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 2292 "ops.c"
{
#line 2294 "ops.c"
  {
#line 2296 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2298 "ops.c"
    MR_Box mercury__ops__closure;
#line 2300 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 2302 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 2304 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 2307 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2309 "ops.c"
    {
#line 2311 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 2314 "ops.c"
    if (mercury__ops__succeeded)
#line 2316 "ops.c"
      {
#line 2318 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 2320 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 2322 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 2324 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2326 "ops.c"
      }
#line 2328 "ops.c"
    return mercury__ops__succeeded;
#line 2330 "ops.c"
  }
#line 2332 "ops.c"
}

#line 2335 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
#line 2338 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2340 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2342 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2344 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2346 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2348 "ops.c"
{
#line 2350 "ops.c"
  {
#line 2352 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2354 "ops.c"
    MR_Box mercury__ops__closure;
#line 2356 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 2358 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2361 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2363 "ops.c"
    {
#line 2365 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2368 "ops.c"
    if (mercury__ops__succeeded)
#line 2370 "ops.c"
      {
#line 2372 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2374 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2376 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2378 "ops.c"
      }
#line 2380 "ops.c"
    return mercury__ops__succeeded;
#line 2382 "ops.c"
  }
#line 2384 "ops.c"
}

#line 2387 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
#line 2390 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2392 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2394 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2396 "ops.c"
{
#line 2398 "ops.c"
  {
#line 2400 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2402 "ops.c"
    MR_Box mercury__ops__closure;

#line 2405 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2407 "ops.c"
    {
#line 2409 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0(((MR_String) mercury__ops__wrapper_arg_2));
    }
#line 2412 "ops.c"
    return mercury__ops__succeeded;
#line 2414 "ops.c"
  }
#line 2416 "ops.c"
}

#line 2419 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
#line 2422 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2424 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2426 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2428 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2430 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2432 "ops.c"
{
#line 2434 "ops.c"
  {
#line 2436 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2438 "ops.c"
    MR_Box mercury__ops__closure;
#line 2440 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2442 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2445 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2447 "ops.c"
    {
#line 2449 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2452 "ops.c"
    if (mercury__ops__succeeded)
#line 2454 "ops.c"
      {
#line 2456 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2458 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2460 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2462 "ops.c"
      }
#line 2464 "ops.c"
    return mercury__ops__succeeded;
#line 2466 "ops.c"
  }
#line 2468 "ops.c"
}

#line 2471 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
#line 2474 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2476 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2478 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_2,
#line 2480 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2482 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2484 "ops.c"
{
#line 2486 "ops.c"
  {
#line 2488 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2490 "ops.c"
    MR_Box mercury__ops__closure;
#line 2492 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__2_2;
#line 2494 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2496 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2499 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2501 "ops.c"
    {
#line 2503 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0(&mercury__ops__conv2_HeadVar__2_2, &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2506 "ops.c"
    if (mercury__ops__succeeded)
#line 2508 "ops.c"
      {
#line 2510 "ops.c"
        *mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv2_HeadVar__2_2));
#line 2512 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2514 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2516 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2518 "ops.c"
      }
#line 2520 "ops.c"
    return mercury__ops__succeeded;
#line 2522 "ops.c"
  }
#line 2524 "ops.c"
}

#line 2527 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
#line 2530 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2532 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2534 "ops.c"
{
#line 2536 "ops.c"
  {
#line 2538 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2540 "ops.c"
    MR_Box mercury__ops__closure;
#line 2542 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2545 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2547 "ops.c"
    {
#line 2549 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0();
    }
#line 2552 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2554 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2556 "ops.c"
  }
#line 2558 "ops.c"
}

#line 2561 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
#line 2564 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2566 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2568 "ops.c"
{
#line 2570 "ops.c"
  {
#line 2572 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2574 "ops.c"
    MR_Box mercury__ops__closure;
#line 2576 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2579 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2581 "ops.c"
    {
#line 2583 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0();
    }
#line 2586 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2588 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2590 "ops.c"
  }
#line 2592 "ops.c"
}

#line 178 "ops.m"
MR_Integer MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 178 "ops.m"
{
#line 281 "ops.m"
  {
#line 281 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 281 "ops.m"
    return (MR_Integer) 999;
#line 281 "ops.m"
  }
#line 178 "ops.m"
}

#line 177 "ops.m"
MR_Integer MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_0(void)
#line 177 "ops.m"
{
#line 276 "ops.m"
  {
#line 276 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 276 "ops.m"
    return (MR_Integer) 1200;
#line 276 "ops.m"
  }
#line 177 "ops.m"
}

#line 176 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_52_95_95_91_49_93_95_48_4_p_0(
#line 176 "ops.m"
  MR_Integer * mercury__ops__HeadVar__2_2,
#line 176 "ops.m"
  MR_Word * mercury__ops__HeadVar__3_3,
#line 176 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 176 "ops.m"
{
#line 274 "ops.m"
  {
#line 274 "ops.m"
    *mercury__ops__HeadVar__2_2 = (MR_Integer) 120;
#line 274 "ops.m"
    *mercury__ops__HeadVar__3_3 = (MR_Integer) 1;
#line 274 "ops.m"
    *mercury__ops__HeadVar__4_4 = (MR_Integer) 0;
#line 274 "ops.m"
    return MR_TRUE;
#line 274 "ops.m"
  }
#line 176 "ops.m"
}

#line 175 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_105_110_102_111_115_95_52_95_95_91_49_93_95_48_4_p_0(
#line 175 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 175 "ops.m"
  MR_Word * mercury__ops__HeadVar__3_3,
#line 175 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 175 "ops.m"
{
#line 268 "ops.m"
  {
#line 268 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 268 "ops.m"
    {
#line 268 "ops.m"
      return mercury__ops__succeeded = mercury__ops__op_table_3_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4);
    }
#line 268 "ops.m"
    return mercury__ops__succeeded;
#line 268 "ops.m"
  }
#line 175 "ops.m"
}

#line 174 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_50_95_95_91_49_93_95_48_2_p_0(
#line 174 "ops.m"
  MR_String mercury__ops__HeadVar__2_2)
#line 174 "ops.m"
{
#line 262 "ops.m"
  {
#line 262 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 262 "ops.m"
    MR_Word mercury__ops__V_5_5;
#line 262 "ops.m"
    MR_Word mercury__ops__V_6_6;

#line 262 "ops.m"
    {
#line 262 "ops.m"
      mercury__ops__succeeded = mercury__ops__op_table_3_p_0(mercury__ops__HeadVar__2_2, &mercury__ops__V_5_5, &mercury__ops__V_6_6);
    }
#line 262 "ops.m"
    return mercury__ops__succeeded;
#line 262 "ops.m"
  }
#line 174 "ops.m"
}

#line 173 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_111_115_116_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_p_0(
#line 173 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 173 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 173 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 173 "ops.m"
{
#line 173 "ops.m"
  {
#line 173 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 173 "ops.m"
    {
#line 173 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4);
    }
#line 173 "ops.m"
    return mercury__ops__succeeded;
#line 173 "ops.m"
  }
#line 173 "ops.m"
}

#line 171 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_p_0(
#line 171 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 171 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 171 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4,
#line 171 "ops.m"
  MR_Word * mercury__ops__HeadVar__5_5)
#line 171 "ops.m"
{
#line 171 "ops.m"
  {
#line 171 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 171 "ops.m"
    {
#line 171 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4, mercury__ops__HeadVar__5_5);
    }
#line 171 "ops.m"
    return mercury__ops__succeeded;
#line 171 "ops.m"
  }
#line 171 "ops.m"
}

#line 170 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_114_101_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_p_0(
#line 170 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 170 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 170 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 170 "ops.m"
{
#line 170 "ops.m"
  {
#line 170 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 170 "ops.m"
    {
#line 170 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4);
    }
#line 170 "ops.m"
    return mercury__ops__succeeded;
#line 170 "ops.m"
  }
#line 170 "ops.m"
}

#line 169 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_105_110_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_p_0(
#line 169 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 169 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 169 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4,
#line 169 "ops.m"
  MR_Word * mercury__ops__HeadVar__5_5)
#line 169 "ops.m"
{
#line 169 "ops.m"
  {
#line 169 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 169 "ops.m"
    {
#line 169 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4, mercury__ops__HeadVar__5_5);
    }
#line 169 "ops.m"
    return mercury__ops__succeeded;
#line 169 "ops.m"
  }
#line 169 "ops.m"
}

#line 146 "ops.m"
void MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 146 "ops.m"
  MR_Word * mercury__ops__HeadVar__1_1)
#line 146 "ops.m"
{
#line 146 "ops.m"
  {
#line 146 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 146 "ops.m"
    *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 146 "ops.m"
  }
#line 146 "ops.m"
}

#line 146 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 146 "ops.m"
{
#line 146 "ops.m"
  {
#line 146 "ops.m"
    return MR_TRUE;
#line 146 "ops.m"
  }
#line 146 "ops.m"
}

#line 163 "ops.m"
void MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 163 "ops.m"
  MR_Word * mercury__ops__HeadVar__1_1)
#line 163 "ops.m"
{
#line 163 "ops.m"
  {
#line 163 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 163 "ops.m"
    *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 163 "ops.m"
  }
#line 163 "ops.m"
}

#line 163 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 163 "ops.m"
{
#line 163 "ops.m"
  {
#line 163 "ops.m"
    return MR_TRUE;
#line 163 "ops.m"
  }
#line 163 "ops.m"
}

#line 278 "ops.m"
MR_Integer MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
#line 278 "ops.m"
{
#line 281 "ops.m"
  {
#line 281 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 281 "ops.m"
    return (MR_Integer) 999;
#line 281 "ops.m"
  }
#line 278 "ops.m"
}

#line 270 "ops.m"
void MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_p_0(
#line 270 "ops.m"
  MR_Integer * mercury__ops__HeadVar__2_2,
#line 270 "ops.m"
  MR_Word * mercury__ops__HeadVar__3_3,
#line 270 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 270 "ops.m"
{
#line 274 "ops.m"
  {
#line 274 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 274 "ops.m"
    *mercury__ops__HeadVar__2_2 = (MR_Integer) 120;
#line 274 "ops.m"
    *mercury__ops__HeadVar__3_3 = (MR_Integer) 1;
#line 274 "ops.m"
    *mercury__ops__HeadVar__4_4 = (MR_Integer) 0;
#line 274 "ops.m"
  }
#line 270 "ops.m"
}

#line 264 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_4_p_0(
#line 264 "ops.m"
  MR_String mercury__ops__Name_6,
#line 264 "ops.m"
  MR_Word * mercury__ops__Info_7,
#line 264 "ops.m"
  MR_Word * mercury__ops__OtherInfos_8)
#line 264 "ops.m"
{
#line 268 "ops.m"
  {
#line 268 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 268 "ops.m"
    {
#line 268 "ops.m"
      return mercury__ops__succeeded = mercury__ops__op_table_3_p_0(mercury__ops__Name_6, mercury__ops__Info_7, mercury__ops__OtherInfos_8);
    }
#line 268 "ops.m"
    return mercury__ops__succeeded;
#line 268 "ops.m"
  }
#line 264 "ops.m"
}

#line 259 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_p_0(
#line 259 "ops.m"
  MR_String mercury__ops__Name_4)
#line 259 "ops.m"
{
#line 262 "ops.m"
  {
#line 262 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 262 "ops.m"
    MR_Word mercury__ops__V_5_5;
#line 262 "ops.m"
    MR_Word mercury__ops__V_6_6;

#line 262 "ops.m"
    {
#line 262 "ops.m"
      mercury__ops__succeeded = mercury__ops__op_table_3_p_0(mercury__ops__Name_4, &mercury__ops__V_5_5, &mercury__ops__V_6_6);
    }
#line 262 "ops.m"
    return mercury__ops__succeeded;
#line 262 "ops.m"
  }
#line 259 "ops.m"
}

#line 244 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(
#line 244 "ops.m"
  MR_String mercury__ops__Name_6,
#line 244 "ops.m"
  MR_Integer * mercury__ops__Priority_7,
#line 244 "ops.m"
  MR_Word * mercury__ops__LeftAssoc_8)
#line 244 "ops.m"
{
#line 247 "ops.m"
  {
#line 247 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 247 "ops.m"
    MR_Word mercury__ops__Info_9;
#line 247 "ops.m"
    MR_Word mercury__ops__MaybeOtherInfo_10;
#line 252 "ops.m"
    MR_Word mercury__ops__LeftAssocPrime_11;
#line 252 "ops.m"
    MR_Integer mercury__ops__PriorityPrime_12;
#line 249 "ops.m"
    MR_Word mercury__ops__V_13_13;

#line 248 "ops.m"
    {
#line 248 "ops.m"
      mercury__ops__succeeded = mercury__ops__op_table_3_p_0(mercury__ops__Name_6, &mercury__ops__Info_9, &mercury__ops__MaybeOtherInfo_10);
    }
#line 247 "ops.m"
    if (mercury__ops__succeeded)
#line 247 "ops.m"
      {
#line 249 "ops.m"
        mercury__ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__Info_9, (MR_Integer) 0)));
#line 249 "ops.m"
        mercury__ops__PriorityPrime_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__Info_9, (MR_Integer) 1)));
#line 249 "ops.m"
        mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__V_13_13)) == (MR_mktag((MR_Integer) 3)));
#line 249 "ops.m"
        if (mercury__ops__succeeded)
#line 249 "ops.m"
          {
#line 249 "ops.m"
            mercury__ops__LeftAssocPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__ops__V_13_13, (MR_Integer) 0)));
#line 250 "ops.m"
            *mercury__ops__LeftAssoc_8 = mercury__ops__LeftAssocPrime_11;
#line 251 "ops.m"
            *mercury__ops__Priority_7 = mercury__ops__PriorityPrime_12;
#line 250 "ops.m"
            mercury__ops__succeeded = MR_TRUE;
#line 249 "ops.m"
          }
#line 249 "ops.m"
        else
#line 255 "ops.m"
          {
#line 255 "ops.m"
            MR_Word mercury__ops__V_14_14;
#line 255 "ops.m"
            MR_Word mercury__ops__V_15_15;
#line 255 "ops.m"
            MR_Word mercury__ops__V_16_16;

#line 252 "ops.m"
            mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__MaybeOtherInfo_10)) == (MR_mktag((MR_Integer) 1)));
#line 252 "ops.m"
            if (mercury__ops__succeeded)
#line 252 "ops.m"
              {
#line 252 "ops.m"
                mercury__ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__MaybeOtherInfo_10, (MR_Integer) 0)));
#line 252 "ops.m"
                mercury__ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__MaybeOtherInfo_10, (MR_Integer) 1)));
#line 252 "ops.m"
                mercury__ops__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__V_14_14, (MR_Integer) 0)));
#line 252 "ops.m"
                *mercury__ops__Priority_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__V_14_14, (MR_Integer) 1)));
#line 252 "ops.m"
                mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__V_15_15)) == (MR_mktag((MR_Integer) 3)));
#line 252 "ops.m"
                if (mercury__ops__succeeded)
#line 252 "ops.m"
                  {
#line 252 "ops.m"
                    *mercury__ops__LeftAssoc_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__ops__V_15_15, (MR_Integer) 0)));
#line 252 "ops.m"
                    mercury__ops__succeeded = (mercury__ops__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "ops.m"
                  }
#line 252 "ops.m"
              }
#line 255 "ops.m"
          }
#line 247 "ops.m"
      }
#line 247 "ops.m"
    return mercury__ops__succeeded;
#line 247 "ops.m"
  }
#line 244 "ops.m"
}

#line 220 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(
#line 220 "ops.m"
  MR_String mercury__ops__Name_7,
#line 220 "ops.m"
  MR_Integer * mercury__ops__Priority_8,
#line 220 "ops.m"
  MR_Word * mercury__ops__LeftAssoc_9,
#line 220 "ops.m"
  MR_Word * mercury__ops__RightAssoc_10)
#line 220 "ops.m"
{
#line 224 "ops.m"
  {
#line 224 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 224 "ops.m"
    MR_Word mercury__ops__Info_11;
#line 224 "ops.m"
    MR_Word mercury__ops__MaybeOtherInfo_12;
#line 233 "ops.m"
    MR_Integer mercury__ops__PriorityPrime_14;
#line 233 "ops.m"
    MR_Word mercury__ops__LeftAssocPrime_15;
#line 233 "ops.m"
    MR_Word mercury__ops__RightAssocPrime_16;
#line 227 "ops.m"
    MR_Word mercury__ops__Class_13;

#line 225 "ops.m"
    {
#line 225 "ops.m"
      mercury__ops__succeeded = mercury__ops__op_table_3_p_0(mercury__ops__Name_7, &mercury__ops__Info_11, &mercury__ops__MaybeOtherInfo_12);
    }
#line 224 "ops.m"
    if (mercury__ops__succeeded)
#line 224 "ops.m"
      {
#line 227 "ops.m"
        mercury__ops__Class_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__Info_11, (MR_Integer) 0)));
#line 227 "ops.m"
        mercury__ops__PriorityPrime_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__Info_11, (MR_Integer) 1)));
#line 228 "ops.m"
        mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__Class_13)) == (MR_mktag((MR_Integer) 2)));
#line 228 "ops.m"
        if (mercury__ops__succeeded)
#line 228 "ops.m"
          {
#line 228 "ops.m"
            mercury__ops__LeftAssocPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__Class_13, (MR_Integer) 0)));
#line 228 "ops.m"
            mercury__ops__RightAssocPrime_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__Class_13, (MR_Integer) 1)));
#line 230 "ops.m"
            *mercury__ops__LeftAssoc_9 = mercury__ops__LeftAssocPrime_15;
#line 231 "ops.m"
            *mercury__ops__RightAssoc_10 = mercury__ops__RightAssocPrime_16;
#line 232 "ops.m"
            *mercury__ops__Priority_8 = mercury__ops__PriorityPrime_14;
#line 230 "ops.m"
            mercury__ops__succeeded = MR_TRUE;
#line 228 "ops.m"
          }
#line 228 "ops.m"
        else
#line 240 "ops.m"
          {
#line 240 "ops.m"
            MR_Word mercury__ops__V_17_17;
#line 240 "ops.m"
            MR_Word mercury__ops__V_18_18;
#line 240 "ops.m"
            MR_Word mercury__ops__Class_19;

#line 234 "ops.m"
            mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__MaybeOtherInfo_12)) == (MR_mktag((MR_Integer) 1)));
#line 234 "ops.m"
            if (mercury__ops__succeeded)
#line 234 "ops.m"
              {
#line 234 "ops.m"
                mercury__ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__MaybeOtherInfo_12, (MR_Integer) 0)));
#line 234 "ops.m"
                mercury__ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__MaybeOtherInfo_12, (MR_Integer) 1)));
#line 234 "ops.m"
                mercury__ops__Class_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__V_17_17, (MR_Integer) 0)));
#line 234 "ops.m"
                *mercury__ops__Priority_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__V_17_17, (MR_Integer) 1)));
#line 234 "ops.m"
                mercury__ops__succeeded = (mercury__ops__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "ops.m"
                if (mercury__ops__succeeded)
#line 240 "ops.m"
                  {
#line 235 "ops.m"
                    mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__Class_19)) == (MR_mktag((MR_Integer) 2)));
#line 235 "ops.m"
                    if (mercury__ops__succeeded)
#line 235 "ops.m"
                      {
#line 235 "ops.m"
                        *mercury__ops__LeftAssoc_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__Class_19, (MR_Integer) 0)));
#line 235 "ops.m"
                        *mercury__ops__RightAssoc_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__Class_19, (MR_Integer) 1)));
#line 235 "ops.m"
                      }
#line 240 "ops.m"
                  }
#line 234 "ops.m"
              }
#line 240 "ops.m"
          }
#line 224 "ops.m"
      }
#line 224 "ops.m"
    return mercury__ops__succeeded;
#line 224 "ops.m"
  }
#line 220 "ops.m"
}

#line 205 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(
#line 205 "ops.m"
  MR_String mercury__ops__Name_6,
#line 205 "ops.m"
  MR_Integer * mercury__ops__Priority_7,
#line 205 "ops.m"
  MR_Word * mercury__ops__LeftAssoc_8)
#line 205 "ops.m"
{
#line 208 "ops.m"
  {
#line 208 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 208 "ops.m"
    MR_Word mercury__ops__Info_9;
#line 208 "ops.m"
    MR_Word mercury__ops__MaybeOtherInfo_10;
#line 213 "ops.m"
    MR_Word mercury__ops__LeftAssocPrime_11;
#line 213 "ops.m"
    MR_Integer mercury__ops__PriorityPrime_12;
#line 210 "ops.m"
    MR_Word mercury__ops__V_13_13;

#line 209 "ops.m"
    {
#line 209 "ops.m"
      mercury__ops__succeeded = mercury__ops__op_table_3_p_0(mercury__ops__Name_6, &mercury__ops__Info_9, &mercury__ops__MaybeOtherInfo_10);
    }
#line 208 "ops.m"
    if (mercury__ops__succeeded)
#line 208 "ops.m"
      {
#line 210 "ops.m"
        mercury__ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__Info_9, (MR_Integer) 0)));
#line 210 "ops.m"
        mercury__ops__PriorityPrime_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__Info_9, (MR_Integer) 1)));
#line 210 "ops.m"
        mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 210 "ops.m"
        if (mercury__ops__succeeded)
#line 210 "ops.m"
          {
#line 210 "ops.m"
            mercury__ops__LeftAssocPrime_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__V_13_13, (MR_Integer) 0)));
#line 211 "ops.m"
            *mercury__ops__LeftAssoc_8 = mercury__ops__LeftAssocPrime_11;
#line 212 "ops.m"
            *mercury__ops__Priority_7 = mercury__ops__PriorityPrime_12;
#line 211 "ops.m"
            mercury__ops__succeeded = MR_TRUE;
#line 210 "ops.m"
          }
#line 210 "ops.m"
        else
#line 216 "ops.m"
          {
#line 216 "ops.m"
            MR_Word mercury__ops__V_14_14;
#line 216 "ops.m"
            MR_Word mercury__ops__V_15_15;
#line 216 "ops.m"
            MR_Word mercury__ops__V_16_16;

#line 213 "ops.m"
            mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__MaybeOtherInfo_10)) == (MR_mktag((MR_Integer) 1)));
#line 213 "ops.m"
            if (mercury__ops__succeeded)
#line 213 "ops.m"
              {
#line 213 "ops.m"
                mercury__ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__MaybeOtherInfo_10, (MR_Integer) 0)));
#line 213 "ops.m"
                mercury__ops__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__MaybeOtherInfo_10, (MR_Integer) 1)));
#line 213 "ops.m"
                mercury__ops__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__V_14_14, (MR_Integer) 0)));
#line 213 "ops.m"
                *mercury__ops__Priority_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__V_14_14, (MR_Integer) 1)));
#line 213 "ops.m"
                mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 213 "ops.m"
                if (mercury__ops__succeeded)
#line 213 "ops.m"
                  {
#line 213 "ops.m"
                    *mercury__ops__LeftAssoc_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__V_15_15, (MR_Integer) 0)));
#line 213 "ops.m"
                    mercury__ops__succeeded = (mercury__ops__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 213 "ops.m"
                  }
#line 213 "ops.m"
              }
#line 216 "ops.m"
          }
#line 208 "ops.m"
      }
#line 208 "ops.m"
    return mercury__ops__succeeded;
#line 208 "ops.m"
  }
#line 205 "ops.m"
}

#line 181 "ops.m"
MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(
#line 181 "ops.m"
  MR_String mercury__ops__Name_7,
#line 181 "ops.m"
  MR_Integer * mercury__ops__Priority_8,
#line 181 "ops.m"
  MR_Word * mercury__ops__LeftAssoc_9,
#line 181 "ops.m"
  MR_Word * mercury__ops__RightAssoc_10)
#line 181 "ops.m"
{
#line 185 "ops.m"
  {
#line 185 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 185 "ops.m"
    MR_Word mercury__ops__Info_11;
#line 185 "ops.m"
    MR_Word mercury__ops__MaybeOtherInfo_12;
#line 194 "ops.m"
    MR_Integer mercury__ops__PriorityPrime_14;
#line 194 "ops.m"
    MR_Word mercury__ops__LeftAssocPrime_15;
#line 194 "ops.m"
    MR_Word mercury__ops__RightAssocPrime_16;
#line 188 "ops.m"
    MR_Word mercury__ops__Class_13;

#line 186 "ops.m"
    {
#line 186 "ops.m"
      mercury__ops__succeeded = mercury__ops__op_table_3_p_0(mercury__ops__Name_7, &mercury__ops__Info_11, &mercury__ops__MaybeOtherInfo_12);
    }
#line 185 "ops.m"
    if (mercury__ops__succeeded)
#line 185 "ops.m"
      {
#line 188 "ops.m"
        mercury__ops__Class_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__Info_11, (MR_Integer) 0)));
#line 188 "ops.m"
        mercury__ops__PriorityPrime_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__Info_11, (MR_Integer) 1)));
#line 189 "ops.m"
        mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__Class_13)) == (MR_mktag((MR_Integer) 0)));
#line 189 "ops.m"
        if (mercury__ops__succeeded)
#line 189 "ops.m"
          {
#line 189 "ops.m"
            mercury__ops__LeftAssocPrime_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__Class_13, (MR_Integer) 0)));
#line 189 "ops.m"
            mercury__ops__RightAssocPrime_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__Class_13, (MR_Integer) 1)));
#line 191 "ops.m"
            *mercury__ops__LeftAssoc_9 = mercury__ops__LeftAssocPrime_15;
#line 192 "ops.m"
            *mercury__ops__RightAssoc_10 = mercury__ops__RightAssocPrime_16;
#line 193 "ops.m"
            *mercury__ops__Priority_8 = mercury__ops__PriorityPrime_14;
#line 191 "ops.m"
            mercury__ops__succeeded = MR_TRUE;
#line 189 "ops.m"
          }
#line 189 "ops.m"
        else
#line 201 "ops.m"
          {
#line 201 "ops.m"
            MR_Word mercury__ops__V_17_17;
#line 201 "ops.m"
            MR_Word mercury__ops__V_18_18;
#line 201 "ops.m"
            MR_Word mercury__ops__Class_19;

#line 195 "ops.m"
            mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__MaybeOtherInfo_12)) == (MR_mktag((MR_Integer) 1)));
#line 195 "ops.m"
            if (mercury__ops__succeeded)
#line 195 "ops.m"
              {
#line 195 "ops.m"
                mercury__ops__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__MaybeOtherInfo_12, (MR_Integer) 0)));
#line 195 "ops.m"
                mercury__ops__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__MaybeOtherInfo_12, (MR_Integer) 1)));
#line 195 "ops.m"
                mercury__ops__Class_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__V_17_17, (MR_Integer) 0)));
#line 195 "ops.m"
                *mercury__ops__Priority_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__V_17_17, (MR_Integer) 1)));
#line 195 "ops.m"
                mercury__ops__succeeded = (mercury__ops__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 201 "ops.m"
                if (mercury__ops__succeeded)
#line 201 "ops.m"
                  {
#line 196 "ops.m"
                    mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__Class_19)) == (MR_mktag((MR_Integer) 0)));
#line 196 "ops.m"
                    if (mercury__ops__succeeded)
#line 196 "ops.m"
                      {
#line 196 "ops.m"
                        *mercury__ops__LeftAssoc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__Class_19, (MR_Integer) 0)));
#line 196 "ops.m"
                        *mercury__ops__RightAssoc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__Class_19, (MR_Integer) 1)));
#line 196 "ops.m"
                      }
#line 201 "ops.m"
                  }
#line 195 "ops.m"
              }
#line 201 "ops.m"
          }
#line 185 "ops.m"
      }
#line 185 "ops.m"
    return mercury__ops__succeeded;
#line 185 "ops.m"
  }
#line 181 "ops.m"
}

#line 155 "ops.m"
MR_Integer MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
#line 155 "ops.m"
{
#line 276 "ops.m"
  {
#line 276 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 276 "ops.m"
    return (MR_Integer) 1200;
#line 276 "ops.m"
  }
#line 155 "ops.m"
}

#line 178 "ops.m"
MR_Integer MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0(void)
#line 178 "ops.m"
{
#line 281 "ops.m"
  {
#line 281 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 281 "ops.m"
    MR_Integer mercury__ops__HeadVar__2_2;

#line 281 "ops.m"
    {
#line 281 "ops.m"
      return mercury__ops__HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 281 "ops.m"
    return mercury__ops__HeadVar__2_2;
#line 281 "ops.m"
  }
#line 178 "ops.m"
}

#line 177 "ops.m"
MR_Integer MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0(void)
#line 177 "ops.m"
{
#line 276 "ops.m"
  {
#line 276 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 276 "ops.m"
    MR_Integer mercury__ops__HeadVar__2_2;

#line 276 "ops.m"
    {
#line 276 "ops.m"
      return mercury__ops__HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_0();
    }
#line 276 "ops.m"
    return mercury__ops__HeadVar__2_2;
#line 276 "ops.m"
  }
#line 177 "ops.m"
}

#line 176 "ops.m"
MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0(
#line 176 "ops.m"
  MR_Integer * mercury__ops__HeadVar__2_2,
#line 176 "ops.m"
  MR_Word * mercury__ops__HeadVar__3_3,
#line 176 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 176 "ops.m"
{
#line 274 "ops.m"
  {
#line 274 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 274 "ops.m"
    {
#line 274 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_52_95_95_91_49_93_95_48_4_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4);
    }
#line 274 "ops.m"
    return mercury__ops__succeeded;
#line 274 "ops.m"
  }
#line 176 "ops.m"
}

#line 175 "ops.m"
MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0(
#line 175 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 175 "ops.m"
  MR_Word * mercury__ops__HeadVar__3_3,
#line 175 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 175 "ops.m"
{
#line 268 "ops.m"
  {
#line 268 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 268 "ops.m"
    {
#line 268 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_105_110_102_111_115_95_52_95_95_91_49_93_95_48_4_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4);
    }
#line 268 "ops.m"
    return mercury__ops__succeeded;
#line 268 "ops.m"
  }
#line 175 "ops.m"
}

#line 174 "ops.m"
MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0(
#line 174 "ops.m"
  MR_String mercury__ops__HeadVar__2_2)
#line 174 "ops.m"
{
#line 262 "ops.m"
  {
#line 262 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 262 "ops.m"
    {
#line 262 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_50_95_95_91_49_93_95_48_2_p_0(mercury__ops__HeadVar__2_2);
    }
#line 262 "ops.m"
    return mercury__ops__succeeded;
#line 262 "ops.m"
  }
#line 174 "ops.m"
}

#line 173 "ops.m"
MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0(
#line 173 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 173 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 173 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 173 "ops.m"
{
#line 173 "ops.m"
  {
#line 173 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 173 "ops.m"
    {
#line 173 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_111_115_116_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4);
    }
#line 173 "ops.m"
    return mercury__ops__succeeded;
#line 173 "ops.m"
  }
#line 173 "ops.m"
}

#line 171 "ops.m"
MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0(
#line 171 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 171 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 171 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4,
#line 171 "ops.m"
  MR_Word * mercury__ops__HeadVar__5_5)
#line 171 "ops.m"
{
#line 171 "ops.m"
  {
#line 171 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 171 "ops.m"
    {
#line 171 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4, mercury__ops__HeadVar__5_5);
    }
#line 171 "ops.m"
    return mercury__ops__succeeded;
#line 171 "ops.m"
  }
#line 171 "ops.m"
}

#line 170 "ops.m"
MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0(
#line 170 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 170 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 170 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 170 "ops.m"
{
#line 170 "ops.m"
  {
#line 170 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 170 "ops.m"
    {
#line 170 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_114_101_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4);
    }
#line 170 "ops.m"
    return mercury__ops__succeeded;
#line 170 "ops.m"
  }
#line 170 "ops.m"
}

#line 169 "ops.m"
MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0(
#line 169 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 169 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 169 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4,
#line 169 "ops.m"
  MR_Word * mercury__ops__HeadVar__5_5)
#line 169 "ops.m"
{
#line 169 "ops.m"
  {
#line 169 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 169 "ops.m"
    {
#line 169 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_105_110_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4, mercury__ops__HeadVar__5_5);
    }
#line 169 "ops.m"
    return mercury__ops__succeeded;
#line 169 "ops.m"
  }
#line 169 "ops.m"
}

#line 146 "ops.m"
void MR_CALL 
mercury__ops____Compare____table_0_0(
#line 146 "ops.m"
  MR_Word * mercury__ops__HeadVar__1_1)
#line 146 "ops.m"
{
#line 146 "ops.m"
  {
#line 146 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 146 "ops.m"
    {
#line 146 "ops.m"
      mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__ops__HeadVar__1_1);
#line 146 "ops.m"
      return;
    }
#line 146 "ops.m"
  }
#line 146 "ops.m"
}

#line 146 "ops.m"
MR_bool MR_CALL 
mercury__ops____Unify____table_0_0(void)
#line 146 "ops.m"
{
#line 146 "ops.m"
  {
#line 146 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 146 "ops.m"
    {
#line 146 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 146 "ops.m"
    return mercury__ops__succeeded;
#line 146 "ops.m"
  }
#line 146 "ops.m"
}

#line 55 "ops.m"
void MR_CALL 
mercury__ops____Compare____priority_0_0(
#line 55 "ops.m"
  MR_Word * mercury__ops__HeadVar__1_1,
#line 55 "ops.m"
  MR_Integer mercury__ops__HeadVar__2_2,
#line 55 "ops.m"
  MR_Integer mercury__ops__HeadVar__3_3)
#line 55 "ops.m"
{
#line 55 "ops.m"
  {
#line 55 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 55 "ops.m"
    MR_Integer mercury__ops__Cast_HeadVar1_4 = mercury__ops__HeadVar__2_2;
#line 55 "ops.m"
    MR_Integer mercury__ops__Cast_HeadVar2_5 = mercury__ops__HeadVar__3_3;

#line 32 "private_builtin.opt"
    mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 < mercury__ops__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__ops__succeeded)
#line 34 "private_builtin.opt"
      *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 == mercury__ops__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__ops__succeeded)
#line 39 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
      }
#line 55 "ops.m"
  }
#line 55 "ops.m"
}

#line 55 "ops.m"
MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0(
#line 55 "ops.m"
  MR_Integer mercury__ops__HeadVar__1_1,
#line 55 "ops.m"
  MR_Integer mercury__ops__HeadVar__2_2)
#line 55 "ops.m"
{
#line 55 "ops.m"
  {
#line 55 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 55 "ops.m"
    MR_Integer mercury__ops__Cast_HeadVar1_3 = mercury__ops__HeadVar__1_1;
#line 55 "ops.m"
    MR_Integer mercury__ops__Cast_HeadVar2_4 = mercury__ops__HeadVar__2_2;

#line 55 "ops.m"
    mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_3 == mercury__ops__Cast_HeadVar2_4);
#line 55 "ops.m"
    return mercury__ops__succeeded;
#line 55 "ops.m"
  }
#line 55 "ops.m"
}

#line 57 "ops.m"
void MR_CALL 
mercury__ops____Compare____op_info_0_0(
#line 57 "ops.m"
  MR_Word * mercury__ops__HeadVar__1_1,
#line 57 "ops.m"
  MR_Word mercury__ops__HeadVar__2_2,
#line 57 "ops.m"
  MR_Word mercury__ops__HeadVar__3_3)
#line 57 "ops.m"
{
#line 57 "ops.m"
  {
#line 57 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 57 "ops.m"
    MR_Integer mercury__ops__CastX_9 = (MR_Integer) mercury__ops__HeadVar__2_2;
#line 57 "ops.m"
    MR_Integer mercury__ops__CastY_10 = (MR_Integer) mercury__ops__HeadVar__3_3;

#line 57 "ops.m"
    mercury__ops__succeeded = (mercury__ops__CastX_9 == mercury__ops__CastY_10);
#line 57 "ops.m"
    if (mercury__ops__succeeded)
#line 3850 "ops.c"
      *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 57 "ops.m"
    else
#line 57 "ops.m"
      {
#line 57 "ops.m"
        MR_Word mercury__ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));
#line 57 "ops.m"
        MR_Integer mercury__ops__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 1)));
#line 57 "ops.m"
        MR_Word mercury__ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__3_3, (MR_Integer) 0)));
#line 57 "ops.m"
        MR_Integer mercury__ops__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__3_3, (MR_Integer) 1)));
#line 57 "ops.m"
        MR_Word mercury__ops__V_8_8;

#line 57 "ops.m"
        {
#line 57 "ops.m"
          mercury__ops____Compare____class_0_0(&mercury__ops__V_8_8, mercury__ops__V_4_4, mercury__ops__V_6_6);
        }
#line 3872 "ops.c"
        mercury__ops__succeeded = (mercury__ops__V_8_8 == (MR_Integer) 0);
#line 57 "ops.m"
        mercury__ops__succeeded = !(mercury__ops__succeeded);
#line 57 "ops.m"
        if (mercury__ops__succeeded)
#line 57 "ops.m"
          *mercury__ops__HeadVar__1_1 = mercury__ops__V_8_8;
#line 57 "ops.m"
        else
#line 35 "private_builtin.opt"
          {
#line 32 "private_builtin.opt"
            mercury__ops__succeeded = (mercury__ops__V_5_5 < mercury__ops__V_7_7);
#line 35 "private_builtin.opt"
            if (mercury__ops__succeeded)
#line 34 "private_builtin.opt"
              *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
            else
#line 40 "private_builtin.opt"
              {
#line 37 "private_builtin.opt"
                mercury__ops__succeeded = (mercury__ops__V_5_5 == mercury__ops__V_7_7);
#line 40 "private_builtin.opt"
                if (mercury__ops__succeeded)
#line 39 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                else
#line 41 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
              }
#line 35 "private_builtin.opt"
          }
#line 57 "ops.m"
      }
#line 57 "ops.m"
  }
#line 57 "ops.m"
}

#line 57 "ops.m"
MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0(
#line 57 "ops.m"
  MR_Word mercury__ops__HeadVar__1_1,
#line 57 "ops.m"
  MR_Word mercury__ops__HeadVar__2_2)
#line 57 "ops.m"
{
#line 57 "ops.m"
  {
#line 57 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 57 "ops.m"
    MR_Integer mercury__ops__CastX_7 = (MR_Integer) mercury__ops__HeadVar__1_1;
#line 57 "ops.m"
    MR_Integer mercury__ops__CastY_8 = (MR_Integer) mercury__ops__HeadVar__2_2;

#line 57 "ops.m"
    mercury__ops__succeeded = (mercury__ops__CastX_7 == mercury__ops__CastY_8);
#line 57 "ops.m"
    if (mercury__ops__succeeded)
#line 57 "ops.m"
      mercury__ops__succeeded = MR_TRUE;
#line 57 "ops.m"
    else
#line 57 "ops.m"
      {
#line 57 "ops.m"
        MR_Word mercury__ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__1_1, (MR_Integer) 0)));
#line 57 "ops.m"
        MR_Integer mercury__ops__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__1_1, (MR_Integer) 1)));
#line 57 "ops.m"
        MR_Word mercury__ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));
#line 57 "ops.m"
        MR_Integer mercury__ops__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 1)));

#line 3952 "ops.c"
        {
#line 3954 "ops.c"
          mercury__ops__succeeded = mercury__ops____Unify____class_0_0(mercury__ops__V_3_3, mercury__ops__V_5_5);
        }
#line 57 "ops.m"
        if (mercury__ops__succeeded)
#line 3959 "ops.c"
          mercury__ops__succeeded = (mercury__ops__V_4_4 == mercury__ops__V_6_6);
#line 57 "ops.m"
      }
#line 57 "ops.m"
    return mercury__ops__succeeded;
#line 57 "ops.m"
  }
#line 57 "ops.m"
}

#line 163 "ops.m"
void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0(
#line 163 "ops.m"
  MR_Word * mercury__ops__HeadVar__1_1)
#line 163 "ops.m"
{
#line 163 "ops.m"
  {
#line 163 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 163 "ops.m"
    {
#line 163 "ops.m"
      mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__ops__HeadVar__1_1);
#line 163 "ops.m"
      return;
    }
#line 163 "ops.m"
  }
#line 163 "ops.m"
}

#line 163 "ops.m"
MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0(void)
#line 163 "ops.m"
{
#line 163 "ops.m"
  {
#line 163 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 163 "ops.m"
    {
#line 163 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 163 "ops.m"
    return mercury__ops__succeeded;
#line 163 "ops.m"
  }
#line 163 "ops.m"
}

#line 34 "ops.m"
void MR_CALL 
mercury__ops____Compare____class_0_0(
#line 34 "ops.m"
  MR_Word * mercury__ops__HeadVar__1_1,
#line 34 "ops.m"
  MR_Word mercury__ops__HeadVar__2_2,
#line 34 "ops.m"
  MR_Word mercury__ops__HeadVar__3_3)
#line 34 "ops.m"
{
#line 34 "ops.m"
  {
#line 34 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 34 "ops.m"
    MR_Integer mercury__ops__CastX_54 = (MR_Integer) mercury__ops__HeadVar__2_2;
#line 34 "ops.m"
    MR_Integer mercury__ops__CastY_55 = (MR_Integer) mercury__ops__HeadVar__3_3;

#line 34 "ops.m"
    mercury__ops__succeeded = (mercury__ops__CastX_54 == mercury__ops__CastY_55);
#line 34 "ops.m"
    if (mercury__ops__succeeded)
#line 4040 "ops.c"
      *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "ops.m"
    else
#line 34 "ops.m"
#line 34 "ops.m"
      switch (MR_tag((MR_Word) mercury__ops__HeadVar__2_2)) {
#line 34 "ops.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 34 "ops.m"
        case (MR_Integer) 0:
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "ops.m"
            MR_Word mercury__ops__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "ops.m"
#line 34 "ops.m"
            switch (MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) {
#line 34 "ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 34 "ops.m"
              case (MR_Integer) 0:
#line 34 "ops.m"
                {
#line 34 "ops.m"
                  MR_Word mercury__ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "ops.m"
                  MR_Word mercury__ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "ops.m"
                  MR_Word mercury__ops__V_8_8;
#line 34 "ops.m"
                  MR_Integer mercury__ops__V_72_72 = (MR_Integer) mercury__ops__V_65_65;
#line 34 "ops.m"
                  MR_Integer mercury__ops__V_73_73 = (MR_Integer) mercury__ops__V_6_6;

#line 32 "private_builtin.opt"
                  mercury__ops__succeeded = (mercury__ops__V_72_72 < mercury__ops__V_73_73);
#line 35 "private_builtin.opt"
                  if (mercury__ops__succeeded)
#line 34 "private_builtin.opt"
                    mercury__ops__V_8_8 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                  else
#line 40 "private_builtin.opt"
                    {
#line 37 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_72_72 == mercury__ops__V_73_73);
#line 40 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 39 "private_builtin.opt"
                        mercury__ops__V_8_8 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                      else
#line 41 "private_builtin.opt"
                        mercury__ops__V_8_8 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                    }
#line 4100 "ops.c"
                  mercury__ops__succeeded = (mercury__ops__V_8_8 == (MR_Integer) 0);
#line 34 "ops.m"
                  mercury__ops__succeeded = !(mercury__ops__succeeded);
#line 34 "ops.m"
                  if (mercury__ops__succeeded)
#line 34 "ops.m"
                    *mercury__ops__HeadVar__1_1 = mercury__ops__V_8_8;
#line 34 "ops.m"
                  else
#line 34 "ops.m"
                    {
#line 34 "ops.m"
                      MR_Integer mercury__ops__V_74_74 = (MR_Integer) mercury__ops__V_64_64;
#line 34 "ops.m"
                      MR_Integer mercury__ops__V_75_75 = (MR_Integer) mercury__ops__V_7_7;

#line 32 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_74_74 < mercury__ops__V_75_75);
#line 35 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 34 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                      else
#line 40 "private_builtin.opt"
                        {
#line 37 "private_builtin.opt"
                          mercury__ops__succeeded = (mercury__ops__V_74_74 == mercury__ops__V_75_75);
#line 40 "private_builtin.opt"
                          if (mercury__ops__succeeded)
#line 39 "private_builtin.opt"
                            *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                          else
#line 41 "private_builtin.opt"
                            *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                        }
#line 34 "ops.m"
                    }
#line 34 "ops.m"
                }
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 1:
#line 4147 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 2:
#line 4153 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 3:
#line 4159 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
            }
#line 34 "ops.m"
          }
#line 34 "ops.m"
          break;
#line 34 "ops.m"
        case (MR_Integer) 1:
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "ops.m"
#line 34 "ops.m"
            switch (MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) {
#line 34 "ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 34 "ops.m"
              case (MR_Integer) 0:
#line 4183 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 1:
#line 34 "ops.m"
                {
#line 34 "ops.m"
                  MR_Word mercury__ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "ops.m"
                  MR_Integer mercury__ops__V_78_78 = (MR_Integer) mercury__ops__V_67_67;
#line 34 "ops.m"
                  MR_Integer mercury__ops__V_79_79 = (MR_Integer) mercury__ops__V_23_23;

#line 32 "private_builtin.opt"
                  mercury__ops__succeeded = (mercury__ops__V_78_78 < mercury__ops__V_79_79);
#line 35 "private_builtin.opt"
                  if (mercury__ops__succeeded)
#line 34 "private_builtin.opt"
                    *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                  else
#line 40 "private_builtin.opt"
                    {
#line 37 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_78_78 == mercury__ops__V_79_79);
#line 40 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 39 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                      else
#line 41 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                    }
#line 34 "ops.m"
                }
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 2:
#line 4226 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 3:
#line 4232 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
            }
#line 34 "ops.m"
          }
#line 34 "ops.m"
          break;
#line 34 "ops.m"
        case (MR_Integer) 2:
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "ops.m"
            MR_Word mercury__ops__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "ops.m"
#line 34 "ops.m"
            switch (MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) {
#line 34 "ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 34 "ops.m"
              case (MR_Integer) 0:
#line 4258 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 1:
#line 4264 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 2:
#line 34 "ops.m"
                {
#line 34 "ops.m"
                  MR_Word mercury__ops__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "ops.m"
                  MR_Word mercury__ops__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__3_3, (MR_Integer) 1)));
#line 34 "ops.m"
                  MR_Word mercury__ops__V_40_40;
#line 34 "ops.m"
                  MR_Integer mercury__ops__V_68_68 = (MR_Integer) mercury__ops__V_63_63;
#line 34 "ops.m"
                  MR_Integer mercury__ops__V_69_69 = (MR_Integer) mercury__ops__V_38_38;

#line 32 "private_builtin.opt"
                  mercury__ops__succeeded = (mercury__ops__V_68_68 < mercury__ops__V_69_69);
#line 35 "private_builtin.opt"
                  if (mercury__ops__succeeded)
#line 34 "private_builtin.opt"
                    mercury__ops__V_40_40 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                  else
#line 40 "private_builtin.opt"
                    {
#line 37 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_68_68 == mercury__ops__V_69_69);
#line 40 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 39 "private_builtin.opt"
                        mercury__ops__V_40_40 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                      else
#line 41 "private_builtin.opt"
                        mercury__ops__V_40_40 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                    }
#line 4305 "ops.c"
                  mercury__ops__succeeded = (mercury__ops__V_40_40 == (MR_Integer) 0);
#line 34 "ops.m"
                  mercury__ops__succeeded = !(mercury__ops__succeeded);
#line 34 "ops.m"
                  if (mercury__ops__succeeded)
#line 34 "ops.m"
                    *mercury__ops__HeadVar__1_1 = mercury__ops__V_40_40;
#line 34 "ops.m"
                  else
#line 34 "ops.m"
                    {
#line 34 "ops.m"
                      MR_Integer mercury__ops__V_70_70 = (MR_Integer) mercury__ops__V_62_62;
#line 34 "ops.m"
                      MR_Integer mercury__ops__V_71_71 = (MR_Integer) mercury__ops__V_39_39;

#line 32 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_70_70 < mercury__ops__V_71_71);
#line 35 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 34 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                      else
#line 40 "private_builtin.opt"
                        {
#line 37 "private_builtin.opt"
                          mercury__ops__succeeded = (mercury__ops__V_70_70 == mercury__ops__V_71_71);
#line 40 "private_builtin.opt"
                          if (mercury__ops__succeeded)
#line 39 "private_builtin.opt"
                            *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                          else
#line 41 "private_builtin.opt"
                            *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                        }
#line 34 "ops.m"
                    }
#line 34 "ops.m"
                }
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 3:
#line 4352 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
            }
#line 34 "ops.m"
          }
#line 34 "ops.m"
          break;
#line 34 "ops.m"
        case (MR_Integer) 3:
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "ops.m"
#line 34 "ops.m"
            switch (MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) {
#line 34 "ops.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 34 "ops.m"
              case (MR_Integer) 0:
#line 4376 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 1:
#line 4382 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 2:
#line 4388 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 3:
#line 34 "ops.m"
                {
#line 34 "ops.m"
                  MR_Word mercury__ops__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__ops__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "ops.m"
                  MR_Integer mercury__ops__V_76_76 = (MR_Integer) mercury__ops__V_66_66;
#line 34 "ops.m"
                  MR_Integer mercury__ops__V_77_77 = (MR_Integer) mercury__ops__V_53_53;

#line 32 "private_builtin.opt"
                  mercury__ops__succeeded = (mercury__ops__V_76_76 < mercury__ops__V_77_77);
#line 35 "private_builtin.opt"
                  if (mercury__ops__succeeded)
#line 34 "private_builtin.opt"
                    *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                  else
#line 40 "private_builtin.opt"
                    {
#line 37 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_76_76 == mercury__ops__V_77_77);
#line 40 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 39 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                      else
#line 41 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                    }
#line 34 "ops.m"
                }
#line 34 "ops.m"
                break;
#line 34 "ops.m"
            }
#line 34 "ops.m"
          }
#line 34 "ops.m"
          break;
#line 34 "ops.m"
      }
#line 34 "ops.m"
  }
#line 34 "ops.m"
}

#line 34 "ops.m"
MR_bool MR_CALL 
mercury__ops____Unify____class_0_0(
#line 34 "ops.m"
  MR_Word mercury__ops__HeadVar__1_1,
#line 34 "ops.m"
  MR_Word mercury__ops__HeadVar__2_2)
#line 34 "ops.m"
{
#line 34 "ops.m"
  {
#line 34 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 34 "ops.m"
    MR_Integer mercury__ops__CastX_15 = (MR_Integer) mercury__ops__HeadVar__1_1;
#line 34 "ops.m"
    MR_Integer mercury__ops__CastY_16 = (MR_Integer) mercury__ops__HeadVar__2_2;

#line 34 "ops.m"
    mercury__ops__succeeded = (mercury__ops__CastX_15 == mercury__ops__CastY_16);
#line 34 "ops.m"
    if (mercury__ops__succeeded)
#line 34 "ops.m"
      mercury__ops__succeeded = MR_TRUE;
#line 34 "ops.m"
    else
#line 34 "ops.m"
#line 34 "ops.m"
      switch (MR_tag((MR_Word) mercury__ops__HeadVar__1_1)) {
#line 34 "ops.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 34 "ops.m"
        case (MR_Integer) 0:
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "ops.m"
            MR_Word mercury__ops__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "ops.m"
            MR_Word mercury__ops__V_5_5;
#line 34 "ops.m"
            MR_Word mercury__ops__V_6_6;

#line 34 "ops.m"
            mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 34 "ops.m"
            if (mercury__ops__succeeded)
#line 34 "ops.m"
              {
#line 34 "ops.m"
                mercury__ops__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "ops.m"
                mercury__ops__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 1)));
#line 4496 "ops.c"
                mercury__ops__succeeded = (mercury__ops__V_3_3 == mercury__ops__V_5_5);
#line 34 "ops.m"
                if (mercury__ops__succeeded)
#line 4500 "ops.c"
                  mercury__ops__succeeded = (mercury__ops__V_4_4 == mercury__ops__V_6_6);
#line 34 "ops.m"
              }
#line 34 "ops.m"
          }
#line 34 "ops.m"
          break;
#line 34 "ops.m"
        case (MR_Integer) 1:
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "ops.m"
            MR_Word mercury__ops__V_8_8;

#line 34 "ops.m"
            mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 34 "ops.m"
            if (mercury__ops__succeeded)
#line 34 "ops.m"
              {
#line 34 "ops.m"
                mercury__ops__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));
#line 4525 "ops.c"
                mercury__ops__succeeded = (mercury__ops__V_7_7 == mercury__ops__V_8_8);
#line 34 "ops.m"
              }
#line 34 "ops.m"
          }
#line 34 "ops.m"
          break;
#line 34 "ops.m"
        case (MR_Integer) 2:
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "ops.m"
            MR_Word mercury__ops__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__1_1, (MR_Integer) 1)));
#line 34 "ops.m"
            MR_Word mercury__ops__V_11_11;
#line 34 "ops.m"
            MR_Word mercury__ops__V_12_12;

#line 34 "ops.m"
            mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 34 "ops.m"
            if (mercury__ops__succeeded)
#line 34 "ops.m"
              {
#line 34 "ops.m"
                mercury__ops__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));
#line 34 "ops.m"
                mercury__ops__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__2_2, (MR_Integer) 1)));
#line 4556 "ops.c"
                mercury__ops__succeeded = (mercury__ops__V_9_9 == mercury__ops__V_11_11);
#line 34 "ops.m"
                if (mercury__ops__succeeded)
#line 4560 "ops.c"
                  mercury__ops__succeeded = (mercury__ops__V_10_10 == mercury__ops__V_12_12);
#line 34 "ops.m"
              }
#line 34 "ops.m"
          }
#line 34 "ops.m"
          break;
#line 34 "ops.m"
        case (MR_Integer) 3:
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__ops__HeadVar__1_1, (MR_Integer) 0)));
#line 34 "ops.m"
            MR_Word mercury__ops__V_14_14;

#line 34 "ops.m"
            mercury__ops__succeeded = ((MR_tag((MR_Word) mercury__ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 34 "ops.m"
            if (mercury__ops__succeeded)
#line 34 "ops.m"
              {
#line 34 "ops.m"
                mercury__ops__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));
#line 4585 "ops.c"
                mercury__ops__succeeded = (mercury__ops__V_13_13 == mercury__ops__V_14_14);
#line 34 "ops.m"
              }
#line 34 "ops.m"
          }
#line 34 "ops.m"
          break;
#line 34 "ops.m"
      }
#line 34 "ops.m"
    return mercury__ops__succeeded;
#line 34 "ops.m"
  }
#line 34 "ops.m"
}

#line 44 "ops.m"
void MR_CALL 
mercury__ops____Compare____assoc_0_0(
#line 44 "ops.m"
  MR_Word * mercury__ops__HeadVar__1_1,
#line 44 "ops.m"
  MR_Word mercury__ops__HeadVar__2_2,
#line 44 "ops.m"
  MR_Word mercury__ops__HeadVar__3_3)
#line 44 "ops.m"
{
#line 44 "ops.m"
  {
#line 44 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 44 "ops.m"
    MR_Integer mercury__ops__Cast_HeadVar1_4 = (MR_Integer) mercury__ops__HeadVar__2_2;
#line 44 "ops.m"
    MR_Integer mercury__ops__Cast_HeadVar2_5 = (MR_Integer) mercury__ops__HeadVar__3_3;

#line 32 "private_builtin.opt"
    mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 < mercury__ops__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__ops__succeeded)
#line 34 "private_builtin.opt"
      *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 == mercury__ops__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__ops__succeeded)
#line 39 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
      }
#line 44 "ops.m"
  }
#line 44 "ops.m"
}

#line 44 "ops.m"
MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0(
#line 44 "ops.m"
  MR_Word mercury__ops__HeadVar__2_1,
#line 44 "ops.m"
  MR_Word mercury__ops__HeadVar__2_2)
#line 44 "ops.m"
{
#line 4658 "ops.c"
  {
#line 4660 "ops.c"
    MR_bool mercury__ops__succeeded = (mercury__ops__HeadVar__2_1 == mercury__ops__HeadVar__2_2);

#line 4663 "ops.c"
    return mercury__ops__succeeded;
#line 4665 "ops.c"
  }
#line 44 "ops.m"
}

#line 283 "ops.m"
static MR_bool MR_CALL 
mercury__ops__op_table_3_p_0(
#line 283 "ops.m"
  MR_String mercury__ops__Op_4,
#line 283 "ops.m"
  MR_Word * mercury__ops__Info_5,
#line 283 "ops.m"
  MR_Word * mercury__ops__OtherInfos_6)
#line 283 "ops.m"
{
#line 297 "ops.m"
  {
#line 297 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 297 "ops.m"
    {
#line 297 "ops.m"
      MR_Integer mercury__ops__case_num_0 = (MR_Integer) -1;

#line 297 "ops.m"
#line 297 "ops.m"
      switch (MR_nth_code_unit(mercury__ops__Op_4, 0)) {
#line 297 "ops.m"
        case (MR_Integer) 33:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 0;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 46:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "!."))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 1;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 58:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "!:"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 2;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 38:
#line 297 "ops.m"
          if (MR_offset_streq(1, mercury__ops__Op_4, (MR_String) "&"))
#line 297 "ops.m"
            mercury__ops__case_num_0 = (MR_Integer) 3;
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 42:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 4;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 42:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "**"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 5;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 43:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 6;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 43:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "++"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 7;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 44:
#line 297 "ops.m"
          if (MR_offset_streq(1, mercury__ops__Op_4, (MR_String) ","))
#line 297 "ops.m"
            mercury__ops__case_num_0 = (MR_Integer) 8;
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 45:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 9;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 45:
#line 297 "ops.m"
#line 297 "ops.m"
              switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
                case (MR_Integer) 0:
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 10;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 45:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "--->"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 11;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 62:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "-->"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 12;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
              }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 62:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "->"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 13;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 46:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 14;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 46:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) ".."))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 15;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 47:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 16;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 47:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "//"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 17;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 92:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "/\\"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 18;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 58:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 19;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 45:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) ":-"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 20;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 58:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "::"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 21;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 61:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) ":="))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 22;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 59:
#line 297 "ops.m"
          if (MR_offset_streq(1, mercury__ops__Op_4, (MR_String) ";"))
#line 297 "ops.m"
            mercury__ops__case_num_0 = (MR_Integer) 23;
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 60:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 24;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 60:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "<<"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 25;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 61:
#line 297 "ops.m"
#line 297 "ops.m"
              switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
                case (MR_Integer) 0:
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 26;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 62:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "<=>"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 27;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
              }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 61:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 28;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 46:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "=.."))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 29;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 58:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "=:="))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 30;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 60:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "=<"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 31;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 61:
#line 297 "ops.m"
#line 297 "ops.m"
              switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
                case (MR_Integer) 0:
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 32;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 62:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "==>"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 33;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
              }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 62:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "=>"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 34;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 92:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "=\\="))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 35;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 94:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "=^"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 36;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 62:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 37;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 61:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) ">="))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 38;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 62:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) ">>"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 39;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 63:
#line 297 "ops.m"
          if (MR_offset_streq(1, mercury__ops__Op_4, (MR_String) "\?-"))
#line 297 "ops.m"
            mercury__ops__case_num_0 = (MR_Integer) 40;
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 64:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 41;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 60:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "\100<"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 42;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 61:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "\100=<"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 43;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 62:
#line 297 "ops.m"
#line 297 "ops.m"
              switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
                case (MR_Integer) 0:
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 44;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 61:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "\100>="))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 45;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
              }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 92:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 46;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 43:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "\\+"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 47;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 47:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "\\/"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 48;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 61:
#line 297 "ops.m"
#line 297 "ops.m"
              switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
                case (MR_Integer) 0:
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 49;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 61:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "\\=="))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 50;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
              }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 94:
#line 297 "ops.m"
          if (MR_offset_streq(1, mercury__ops__Op_4, (MR_String) "^"))
#line 297 "ops.m"
            mercury__ops__case_num_0 = (MR_Integer) 51;
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 97:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 108:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "all"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 52;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 110:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "and"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 53;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 114:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "arbitrary"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 116:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "atomic"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 99:
#line 297 "ops.m"
          if (((((((((MR_nth_code_unit(mercury__ops__Op_4, 1)) == (MR_Integer) 97)) && (((MR_nth_code_unit(mercury__ops__Op_4, 2)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 4)) == (MR_Integer) 104))))
#line 297 "ops.m"
#line 297 "ops.m"
            switch (MR_nth_code_unit(mercury__ops__Op_4, 5)) {
#line 297 "ops.m"
              case (MR_Integer) 0:
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 55;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
              case (MR_Integer) 95:
#line 297 "ops.m"
                if (MR_offset_streq(6, mercury__ops__Op_4, (MR_String) "catch_any"))
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 56;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
            }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 100:
#line 297 "ops.m"
          if (MR_offset_streq(1, mercury__ops__Op_4, (MR_String) "div"))
#line 297 "ops.m"
            mercury__ops__case_num_0 = (MR_Integer) 57;
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 101:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 108:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "else"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 58;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 110:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "end_module"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 59;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 118:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "event"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 60;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 102:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 105:
#line 297 "ops.m"
              if (((((((((MR_nth_code_unit(mercury__ops__Op_4, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(mercury__ops__Op_4, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 5)) == (MR_Integer) 105))))
#line 297 "ops.m"
#line 297 "ops.m"
                switch (MR_nth_code_unit(mercury__ops__Op_4, 6)) {
#line 297 "ops.m"
                  case (MR_Integer) 115:
#line 297 "ops.m"
                    if (MR_offset_streq(7, mercury__ops__Op_4, (MR_String) "finalise"))
#line 297 "ops.m"
                      mercury__ops__case_num_0 = (MR_Integer) 61;
#line 297 "ops.m"
                    break;
#line 297 "ops.m"
                  case (MR_Integer) 122:
#line 297 "ops.m"
                    if (MR_offset_streq(7, mercury__ops__Op_4, (MR_String) "finalize"))
#line 297 "ops.m"
                      mercury__ops__case_num_0 = (MR_Integer) 62;
#line 297 "ops.m"
                    break;
#line 297 "ops.m"
                }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 117:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "func"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 63;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 105:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 102:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "if"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 64;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 109:
#line 297 "ops.m"
              if (((MR_nth_code_unit(mercury__ops__Op_4, 2)) == (MR_Integer) 112))
#line 297 "ops.m"
#line 297 "ops.m"
                switch (MR_nth_code_unit(mercury__ops__Op_4, 3)) {
#line 297 "ops.m"
                  case (MR_Integer) 111:
#line 297 "ops.m"
                    if (MR_offset_streq(4, mercury__ops__Op_4, (MR_String) "import_module"))
#line 297 "ops.m"
                      mercury__ops__case_num_0 = (MR_Integer) 65;
#line 297 "ops.m"
                    break;
#line 297 "ops.m"
                  case (MR_Integer) 117:
#line 297 "ops.m"
                    if (MR_offset_streq(4, mercury__ops__Op_4, (MR_String) "impure"))
#line 297 "ops.m"
                      mercury__ops__case_num_0 = (MR_Integer) 66;
#line 297 "ops.m"
                    break;
#line 297 "ops.m"
                }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 110:
#line 297 "ops.m"
#line 297 "ops.m"
              switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
                case (MR_Integer) 99:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "include_module"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 67;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 105:
#line 297 "ops.m"
                  if (((((((((((MR_nth_code_unit(mercury__ops__Op_4, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(mercury__ops__Op_4, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 7)) == (MR_Integer) 105))))
#line 297 "ops.m"
#line 297 "ops.m"
                    switch (MR_nth_code_unit(mercury__ops__Op_4, 8)) {
#line 297 "ops.m"
                      case (MR_Integer) 115:
#line 297 "ops.m"
                        if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "initialise"))
#line 297 "ops.m"
                          mercury__ops__case_num_0 = (MR_Integer) 68;
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                      case (MR_Integer) 122:
#line 297 "ops.m"
                        if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "initialize"))
#line 297 "ops.m"
                          mercury__ops__case_num_0 = (MR_Integer) 69;
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                    }
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 115:
#line 297 "ops.m"
                  if (((MR_nth_code_unit(mercury__ops__Op_4, 3)) == (MR_Integer) 116))
#line 297 "ops.m"
#line 297 "ops.m"
                    switch (MR_nth_code_unit(mercury__ops__Op_4, 4)) {
#line 297 "ops.m"
                      case (MR_Integer) 0:
#line 297 "ops.m"
                        mercury__ops__case_num_0 = (MR_Integer) 70;
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                      case (MR_Integer) 97:
#line 297 "ops.m"
                        if (MR_offset_streq(5, mercury__ops__Op_4, (MR_String) "instance"))
#line 297 "ops.m"
                          mercury__ops__case_num_0 = (MR_Integer) 71;
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                    }
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
              }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 115:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "is"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 72;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 109:
#line 297 "ops.m"
          if (((((MR_nth_code_unit(mercury__ops__Op_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(mercury__ops__Op_4, 2)) == (MR_Integer) 100))))
#line 297 "ops.m"
#line 297 "ops.m"
            switch (MR_nth_code_unit(mercury__ops__Op_4, 3)) {
#line 297 "ops.m"
              case (MR_Integer) 0:
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 73;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
              case (MR_Integer) 101:
#line 297 "ops.m"
                if (MR_offset_streq(4, mercury__ops__Op_4, (MR_String) "mode"))
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 74;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
              case (MR_Integer) 117:
#line 297 "ops.m"
                if (MR_offset_streq(4, mercury__ops__Op_4, (MR_String) "module"))
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 75;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
            }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 110:
#line 297 "ops.m"
          if (MR_offset_streq(1, mercury__ops__Op_4, (MR_String) "not"))
#line 297 "ops.m"
            mercury__ops__case_num_0 = (MR_Integer) 76;
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 111:
#line 297 "ops.m"
          if (((MR_nth_code_unit(mercury__ops__Op_4, 1)) == (MR_Integer) 114))
#line 297 "ops.m"
#line 297 "ops.m"
            switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
              case (MR_Integer) 0:
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 77;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
              case (MR_Integer) 95:
#line 297 "ops.m"
                if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "or_else"))
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 78;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
            }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 112:
#line 297 "ops.m"
          if (((MR_nth_code_unit(mercury__ops__Op_4, 1)) == (MR_Integer) 114))
#line 297 "ops.m"
#line 297 "ops.m"
            switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
              case (MR_Integer) 97:
#line 297 "ops.m"
                if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "pragma"))
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 79;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
              case (MR_Integer) 101:
#line 297 "ops.m"
                if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "pred"))
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 80;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
              case (MR_Integer) 111:
#line 297 "ops.m"
                if (((((((((MR_nth_code_unit(mercury__ops__Op_4, 3)) == (MR_Integer) 109)) && (((MR_nth_code_unit(mercury__ops__Op_4, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 6)) == (MR_Integer) 101))))
#line 297 "ops.m"
#line 297 "ops.m"
                  switch (MR_nth_code_unit(mercury__ops__Op_4, 7)) {
#line 297 "ops.m"
                    case (MR_Integer) 0:
#line 297 "ops.m"
                      mercury__ops__case_num_0 = (MR_Integer) 81;
#line 297 "ops.m"
                      break;
#line 297 "ops.m"
                    case (MR_Integer) 95:
#line 297 "ops.m"
#line 297 "ops.m"
                      switch (MR_nth_code_unit(mercury__ops__Op_4, 8)) {
#line 297 "ops.m"
                        case (MR_Integer) 101:
#line 297 "ops.m"
#line 297 "ops.m"
                          switch (MR_nth_code_unit(mercury__ops__Op_4, 9)) {
#line 297 "ops.m"
                            case (MR_Integer) 113:
#line 297 "ops.m"
                              if (((((((((((((((((((((((((((((((((((MR_nth_code_unit(mercury__ops__Op_4, 10)) == (MR_Integer) 117)) && (((MR_nth_code_unit(mercury__ops__Op_4, 11)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 12)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 13)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 14)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 16)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 17)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 19)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 20)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 21)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 22)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 24)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 25)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 26)) == (MR_Integer) 110))))
#line 297 "ops.m"
#line 297 "ops.m"
                                switch (MR_nth_code_unit(mercury__ops__Op_4, 27)) {
#line 297 "ops.m"
                                  case (MR_Integer) 95:
#line 297 "ops.m"
                                    if (MR_offset_streq(28, mercury__ops__Op_4, (MR_String) "promise_equivalent_solution_sets"))
#line 297 "ops.m"
                                      mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                    break;
#line 297 "ops.m"
                                  case (MR_Integer) 115:
#line 297 "ops.m"
                                    if (MR_offset_streq(28, mercury__ops__Op_4, (MR_String) "promise_equivalent_solutions"))
#line 297 "ops.m"
                                      mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                    break;
#line 297 "ops.m"
                                }
#line 297 "ops.m"
                              break;
#line 297 "ops.m"
                            case (MR_Integer) 120:
#line 297 "ops.m"
#line 297 "ops.m"
                              switch (MR_nth_code_unit(mercury__ops__Op_4, 10)) {
#line 297 "ops.m"
                                case (MR_Integer) 99:
#line 297 "ops.m"
                                  if (((((((((((((MR_nth_code_unit(mercury__ops__Op_4, 11)) == (MR_Integer) 108)) && (((MR_nth_code_unit(mercury__ops__Op_4, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 16)) == (MR_Integer) 101))))
#line 297 "ops.m"
#line 297 "ops.m"
                                    switch (MR_nth_code_unit(mercury__ops__Op_4, 17)) {
#line 297 "ops.m"
                                      case (MR_Integer) 0:
#line 297 "ops.m"
                                        mercury__ops__case_num_0 = (MR_Integer) 82;
#line 297 "ops.m"
                                        break;
#line 297 "ops.m"
                                      case (MR_Integer) 95:
#line 297 "ops.m"
                                        if (MR_offset_streq(18, mercury__ops__Op_4, (MR_String) "promise_exclusive_exhaustive"))
#line 297 "ops.m"
                                          mercury__ops__case_num_0 = (MR_Integer) 82;
#line 297 "ops.m"
                                        break;
#line 297 "ops.m"
                                    }
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                                case (MR_Integer) 104:
#line 297 "ops.m"
                                  if (MR_offset_streq(11, mercury__ops__Op_4, (MR_String) "promise_exhaustive"))
#line 297 "ops.m"
                                    mercury__ops__case_num_0 = (MR_Integer) 82;
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                              }
#line 297 "ops.m"
                              break;
#line 297 "ops.m"
                          }
#line 297 "ops.m"
                          break;
#line 297 "ops.m"
                        case (MR_Integer) 105:
#line 297 "ops.m"
                          if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "promise_impure"))
#line 297 "ops.m"
                            mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                          break;
#line 297 "ops.m"
                        case (MR_Integer) 112:
#line 297 "ops.m"
                          if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "promise_pure"))
#line 297 "ops.m"
                            mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                          break;
#line 297 "ops.m"
                        case (MR_Integer) 115:
#line 297 "ops.m"
                          if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "promise_semipure"))
#line 297 "ops.m"
                            mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                          break;
#line 297 "ops.m"
                      }
#line 297 "ops.m"
                      break;
#line 297 "ops.m"
                  }
#line 297 "ops.m"
                break;
#line 297 "ops.m"
            }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 114:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 101:
#line 297 "ops.m"
#line 297 "ops.m"
              switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
                case (MR_Integer) 109:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "rem"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 84;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 113:
#line 297 "ops.m"
                  if (((((((((((MR_nth_code_unit(mercury__ops__Op_4, 3)) == (MR_Integer) 117)) && (((MR_nth_code_unit(mercury__ops__Op_4, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 7)) == (MR_Integer) 95))))
#line 297 "ops.m"
#line 297 "ops.m"
                    switch (MR_nth_code_unit(mercury__ops__Op_4, 8)) {
#line 297 "ops.m"
                      case (MR_Integer) 99:
#line 297 "ops.m"
#line 297 "ops.m"
                        switch (MR_nth_code_unit(mercury__ops__Op_4, 9)) {
#line 297 "ops.m"
                          case (MR_Integer) 99:
#line 297 "ops.m"
                            if (((MR_nth_code_unit(mercury__ops__Op_4, 10)) == (MR_Integer) 95))
#line 297 "ops.m"
#line 297 "ops.m"
                              switch (MR_nth_code_unit(mercury__ops__Op_4, 11)) {
#line 297 "ops.m"
                                case (MR_Integer) 109:
#line 297 "ops.m"
                                  if (MR_offset_streq(12, mercury__ops__Op_4, (MR_String) "require_cc_multi"))
#line 297 "ops.m"
                                    mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                                case (MR_Integer) 110:
#line 297 "ops.m"
                                  if (MR_offset_streq(12, mercury__ops__Op_4, (MR_String) "require_cc_nondet"))
#line 297 "ops.m"
                                    mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                              }
#line 297 "ops.m"
                            break;
#line 297 "ops.m"
                          case (MR_Integer) 111:
#line 297 "ops.m"
                            if (MR_offset_streq(10, mercury__ops__Op_4, (MR_String) "require_complete_switch"))
#line 297 "ops.m"
                              mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                            break;
#line 297 "ops.m"
                        }
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                      case (MR_Integer) 100:
#line 297 "ops.m"
                        if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "require_det"))
#line 297 "ops.m"
                          mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                      case (MR_Integer) 101:
#line 297 "ops.m"
                        if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "require_erroneous"))
#line 297 "ops.m"
                          mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                      case (MR_Integer) 102:
#line 297 "ops.m"
                        if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "require_failure"))
#line 297 "ops.m"
                          mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                      case (MR_Integer) 109:
#line 297 "ops.m"
                        if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "require_multi"))
#line 297 "ops.m"
                          mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                      case (MR_Integer) 110:
#line 297 "ops.m"
                        if (MR_offset_streq(9, mercury__ops__Op_4, (MR_String) "require_nondet"))
#line 297 "ops.m"
                          mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                      case (MR_Integer) 115:
#line 297 "ops.m"
#line 297 "ops.m"
                        switch (MR_nth_code_unit(mercury__ops__Op_4, 9)) {
#line 297 "ops.m"
                          case (MR_Integer) 101:
#line 297 "ops.m"
                            if (MR_offset_streq(10, mercury__ops__Op_4, (MR_String) "require_semidet"))
#line 297 "ops.m"
                              mercury__ops__case_num_0 = (MR_Integer) 83;
#line 297 "ops.m"
                            break;
#line 297 "ops.m"
                          case (MR_Integer) 119:
#line 297 "ops.m"
                            if (((((((((((((((((((((MR_nth_code_unit(mercury__ops__Op_4, 10)) == (MR_Integer) 105)) && (((MR_nth_code_unit(mercury__ops__Op_4, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 13)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 14)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 15)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 16)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 17)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 18)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(mercury__ops__Op_4, 19)) == (MR_Integer) 95))))
#line 297 "ops.m"
#line 297 "ops.m"
                              switch (MR_nth_code_unit(mercury__ops__Op_4, 20)) {
#line 297 "ops.m"
                                case (MR_Integer) 99:
#line 297 "ops.m"
                                  if (((((MR_nth_code_unit(mercury__ops__Op_4, 21)) == (MR_Integer) 99)) && (((MR_nth_code_unit(mercury__ops__Op_4, 22)) == (MR_Integer) 95))))
#line 297 "ops.m"
#line 297 "ops.m"
                                    switch (MR_nth_code_unit(mercury__ops__Op_4, 23)) {
#line 297 "ops.m"
                                      case (MR_Integer) 109:
#line 297 "ops.m"
                                        if (MR_offset_streq(24, mercury__ops__Op_4, (MR_String) "require_switch_arms_cc_multi"))
#line 297 "ops.m"
                                          mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                        break;
#line 297 "ops.m"
                                      case (MR_Integer) 110:
#line 297 "ops.m"
                                        if (MR_offset_streq(24, mercury__ops__Op_4, (MR_String) "require_switch_arms_cc_nondet"))
#line 297 "ops.m"
                                          mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                        break;
#line 297 "ops.m"
                                    }
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                                case (MR_Integer) 100:
#line 297 "ops.m"
                                  if (MR_offset_streq(21, mercury__ops__Op_4, (MR_String) "require_switch_arms_det"))
#line 297 "ops.m"
                                    mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                                case (MR_Integer) 101:
#line 297 "ops.m"
                                  if (MR_offset_streq(21, mercury__ops__Op_4, (MR_String) "require_switch_arms_erroneous"))
#line 297 "ops.m"
                                    mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                                case (MR_Integer) 102:
#line 297 "ops.m"
                                  if (MR_offset_streq(21, mercury__ops__Op_4, (MR_String) "require_switch_arms_failure"))
#line 297 "ops.m"
                                    mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                                case (MR_Integer) 109:
#line 297 "ops.m"
                                  if (MR_offset_streq(21, mercury__ops__Op_4, (MR_String) "require_switch_arms_multi"))
#line 297 "ops.m"
                                    mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                                case (MR_Integer) 110:
#line 297 "ops.m"
                                  if (MR_offset_streq(21, mercury__ops__Op_4, (MR_String) "require_switch_arms_nondet"))
#line 297 "ops.m"
                                    mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                                case (MR_Integer) 115:
#line 297 "ops.m"
                                  if (MR_offset_streq(21, mercury__ops__Op_4, (MR_String) "require_switch_arms_semidet"))
#line 297 "ops.m"
                                    mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                                  break;
#line 297 "ops.m"
                              }
#line 297 "ops.m"
                            break;
#line 297 "ops.m"
                        }
#line 297 "ops.m"
                        break;
#line 297 "ops.m"
                    }
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
              }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 117:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "rule"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 85;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 115:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 101:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "semipure"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 86;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 111:
#line 297 "ops.m"
#line 297 "ops.m"
              switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
                case (MR_Integer) 108:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "solver"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 87;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 109:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "some"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 88;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
              }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 116:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 104:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "then"))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 89;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 114:
#line 297 "ops.m"
#line 297 "ops.m"
              switch (MR_nth_code_unit(mercury__ops__Op_4, 2)) {
#line 297 "ops.m"
                case (MR_Integer) 97:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "trace"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
                case (MR_Integer) 121:
#line 297 "ops.m"
                  if (MR_offset_streq(3, mercury__ops__Op_4, (MR_String) "try"))
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 54;
#line 297 "ops.m"
                  break;
#line 297 "ops.m"
              }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 121:
#line 297 "ops.m"
              if (((((MR_nth_code_unit(mercury__ops__Op_4, 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(mercury__ops__Op_4, 3)) == (MR_Integer) 101))))
#line 297 "ops.m"
#line 297 "ops.m"
                switch (MR_nth_code_unit(mercury__ops__Op_4, 4)) {
#line 297 "ops.m"
                  case (MR_Integer) 0:
#line 297 "ops.m"
                    mercury__ops__case_num_0 = (MR_Integer) 90;
#line 297 "ops.m"
                    break;
#line 297 "ops.m"
                  case (MR_Integer) 99:
#line 297 "ops.m"
                    if (MR_offset_streq(5, mercury__ops__Op_4, (MR_String) "typeclass"))
#line 297 "ops.m"
                      mercury__ops__case_num_0 = (MR_Integer) 91;
#line 297 "ops.m"
                    break;
#line 297 "ops.m"
                }
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 117:
#line 297 "ops.m"
          if (MR_offset_streq(1, mercury__ops__Op_4, (MR_String) "use_module"))
#line 297 "ops.m"
            mercury__ops__case_num_0 = (MR_Integer) 92;
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 119:
#line 297 "ops.m"
          if (((((MR_nth_code_unit(mercury__ops__Op_4, 1)) == (MR_Integer) 104)) && (((MR_nth_code_unit(mercury__ops__Op_4, 2)) == (MR_Integer) 101))))
#line 297 "ops.m"
#line 297 "ops.m"
            switch (MR_nth_code_unit(mercury__ops__Op_4, 3)) {
#line 297 "ops.m"
              case (MR_Integer) 110:
#line 297 "ops.m"
                if (MR_offset_streq(4, mercury__ops__Op_4, (MR_String) "when"))
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 93;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
              case (MR_Integer) 114:
#line 297 "ops.m"
                if (MR_offset_streq(4, mercury__ops__Op_4, (MR_String) "where"))
#line 297 "ops.m"
                  mercury__ops__case_num_0 = (MR_Integer) 94;
#line 297 "ops.m"
                break;
#line 297 "ops.m"
            }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
        case (MR_Integer) 126:
#line 297 "ops.m"
#line 297 "ops.m"
          switch (MR_nth_code_unit(mercury__ops__Op_4, 1)) {
#line 297 "ops.m"
            case (MR_Integer) 0:
#line 297 "ops.m"
              mercury__ops__case_num_0 = (MR_Integer) 95;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
            case (MR_Integer) 61:
#line 297 "ops.m"
              if (MR_offset_streq(2, mercury__ops__Op_4, (MR_String) "~="))
#line 297 "ops.m"
                mercury__ops__case_num_0 = (MR_Integer) 96;
#line 297 "ops.m"
              break;
#line 297 "ops.m"
          }
#line 297 "ops.m"
          break;
#line 297 "ops.m"
      }
#line 297 "ops.m"
      if ((mercury__ops__case_num_0 < (MR_Integer) 0))
#line 297 "ops.m"
        mercury__ops__succeeded = MR_FALSE;
#line 297 "ops.m"
      else
#line 297 "ops.m"
        {
#line 297 "ops.m"
          /* we found a match; look up the results */
#line 297 "ops.m"
          *mercury__ops__Info_5 = ((&mercury__ops_vector_common_6[0 + mercury__ops__case_num_0]))->mercury__ops__vector_common_type_6_0__vct_6_f_0;
#line 297 "ops.m"
          *mercury__ops__OtherInfos_6 = ((&mercury__ops_vector_common_6[0 + mercury__ops__case_num_0]))->mercury__ops__vector_common_type_6_0__vct_6_f_1;
#line 297 "ops.m"
          mercury__ops__succeeded = MR_TRUE;
#line 297 "ops.m"
        }
#line 297 "ops.m"
    }
#line 297 "ops.m"
    return mercury__ops__succeeded;
#line 297 "ops.m"
  }
#line 283 "ops.m"
}

#line 278 "ops.m"
MR_Integer MR_CALL 
mercury__ops__mercury_arg_priority_1_f_0(void)
#line 278 "ops.m"
{
#line 281 "ops.m"
  {
#line 281 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 281 "ops.m"
    MR_Integer mercury__ops__HeadVar__2_2;

#line 281 "ops.m"
    {
#line 281 "ops.m"
      return mercury__ops__HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
    }
#line 281 "ops.m"
    return mercury__ops__HeadVar__2_2;
#line 281 "ops.m"
  }
#line 278 "ops.m"
}

#line 270 "ops.m"
void MR_CALL 
mercury__ops__lookup_mercury_operator_term_4_p_0(
#line 270 "ops.m"
  MR_Integer * mercury__ops__HeadVar__2_2,
#line 270 "ops.m"
  MR_Word * mercury__ops__HeadVar__3_3,
#line 270 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 270 "ops.m"
{
#line 274 "ops.m"
  {
#line 274 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 274 "ops.m"
    {
#line 274 "ops.m"
      mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_p_0(mercury__ops__HeadVar__2_2, mercury__ops__HeadVar__3_3, mercury__ops__HeadVar__4_4);
#line 274 "ops.m"
      return;
    }
#line 274 "ops.m"
  }
#line 270 "ops.m"
}

#line 264 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_mercury_op_infos_4_p_0(
#line 264 "ops.m"
  MR_String mercury__ops__Name_6,
#line 264 "ops.m"
  MR_Word * mercury__ops__Info_7,
#line 264 "ops.m"
  MR_Word * mercury__ops__OtherInfos_8)
#line 264 "ops.m"
{
#line 268 "ops.m"
  {
#line 268 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 268 "ops.m"
    {
#line 268 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_4_p_0(mercury__ops__Name_6, mercury__ops__Info_7, mercury__ops__OtherInfos_8);
    }
#line 268 "ops.m"
    return mercury__ops__succeeded;
#line 268 "ops.m"
  }
#line 264 "ops.m"
}

#line 259 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_mercury_op_2_p_0(
#line 259 "ops.m"
  MR_String mercury__ops__Name_4)
#line 259 "ops.m"
{
#line 262 "ops.m"
  {
#line 262 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 262 "ops.m"
    {
#line 262 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_p_0(mercury__ops__Name_4);
    }
#line 262 "ops.m"
    return mercury__ops__succeeded;
#line 262 "ops.m"
  }
#line 259 "ops.m"
}

#line 244 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_mercury_postfix_op_4_p_0(
#line 244 "ops.m"
  MR_String mercury__ops__Name_6,
#line 244 "ops.m"
  MR_Integer * mercury__ops__Priority_7,
#line 244 "ops.m"
  MR_Word * mercury__ops__LeftAssoc_8)
#line 244 "ops.m"
{
#line 247 "ops.m"
  {
#line 247 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 247 "ops.m"
    {
#line 247 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(mercury__ops__Name_6, mercury__ops__Priority_7, mercury__ops__LeftAssoc_8);
    }
#line 247 "ops.m"
    return mercury__ops__succeeded;
#line 247 "ops.m"
  }
#line 244 "ops.m"
}

#line 220 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_mercury_binary_prefix_op_5_p_0(
#line 220 "ops.m"
  MR_String mercury__ops__Name_7,
#line 220 "ops.m"
  MR_Integer * mercury__ops__Priority_8,
#line 220 "ops.m"
  MR_Word * mercury__ops__LeftAssoc_9,
#line 220 "ops.m"
  MR_Word * mercury__ops__RightAssoc_10)
#line 220 "ops.m"
{
#line 224 "ops.m"
  {
#line 224 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 224 "ops.m"
    {
#line 224 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(mercury__ops__Name_7, mercury__ops__Priority_8, mercury__ops__LeftAssoc_9, mercury__ops__RightAssoc_10);
    }
#line 224 "ops.m"
    return mercury__ops__succeeded;
#line 224 "ops.m"
  }
#line 220 "ops.m"
}

#line 205 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_mercury_prefix_op_4_p_0(
#line 205 "ops.m"
  MR_String mercury__ops__Name_6,
#line 205 "ops.m"
  MR_Integer * mercury__ops__Priority_7,
#line 205 "ops.m"
  MR_Word * mercury__ops__LeftAssoc_8)
#line 205 "ops.m"
{
#line 208 "ops.m"
  {
#line 208 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 208 "ops.m"
    {
#line 208 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(mercury__ops__Name_6, mercury__ops__Priority_7, mercury__ops__LeftAssoc_8);
    }
#line 208 "ops.m"
    return mercury__ops__succeeded;
#line 208 "ops.m"
  }
#line 205 "ops.m"
}

#line 181 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_mercury_infix_op_5_p_0(
#line 181 "ops.m"
  MR_String mercury__ops__Name_7,
#line 181 "ops.m"
  MR_Integer * mercury__ops__Priority_8,
#line 181 "ops.m"
  MR_Word * mercury__ops__LeftAssoc_9,
#line 181 "ops.m"
  MR_Word * mercury__ops__RightAssoc_10)
#line 181 "ops.m"
{
#line 185 "ops.m"
  {
#line 185 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 185 "ops.m"
    {
#line 185 "ops.m"
      return mercury__ops__succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(mercury__ops__Name_7, mercury__ops__Priority_8, mercury__ops__LeftAssoc_9, mercury__ops__RightAssoc_10);
    }
#line 185 "ops.m"
    return mercury__ops__succeeded;
#line 185 "ops.m"
  }
#line 181 "ops.m"
}

#line 155 "ops.m"
MR_Integer MR_CALL 
mercury__ops__mercury_max_priority_1_f_0(void)
#line 155 "ops.m"
{
#line 276 "ops.m"
  {
#line 276 "ops.m"
    MR_bool mercury__ops__succeeded;
#line 276 "ops.m"
    MR_Integer mercury__ops__HeadVar__2_2;

#line 276 "ops.m"
    {
#line 276 "ops.m"
      return mercury__ops__HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
    }
#line 276 "ops.m"
    return mercury__ops__HeadVar__2_2;
#line 276 "ops.m"
  }
#line 155 "ops.m"
}

#line 152 "ops.m"
void MR_CALL 
mercury__ops__adjust_priority_for_assoc_3_p_0(
#line 152 "ops.m"
  MR_Integer mercury__ops__Priority_1,
#line 152 "ops.m"
  MR_Word mercury__ops__HeadVar__2_2,
#line 152 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3)
#line 152 "ops.m"
{
#line 478 "ops.m"
  {
#line 478 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 478 "ops.m"
#line 478 "ops.m"
    switch (mercury__ops__HeadVar__2_2) {
#line 478 "ops.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 478 "ops.m"
      case (MR_Integer) 0:
#line 479 "ops.m"
        {
#line 479 "ops.m"
          *mercury__ops__HeadVar__3_3 = (mercury__ops__Priority_1 - (MR_Integer) 1);
#line 479 "ops.m"
        }
#line 478 "ops.m"
        break;
#line 478 "ops.m"
      case (MR_Integer) 1:
#line 478 "ops.m"
        *mercury__ops__HeadVar__3_3 = mercury__ops__Priority_1;
#line 478 "ops.m"
        break;
#line 478 "ops.m"
    }
#line 478 "ops.m"
  }
#line 152 "ops.m"
}

#line 133 "ops.m"
void MR_CALL 
mercury__ops__init_mercury_op_table_0_f_0(void)
#line 133 "ops.m"
{
#line 166 "ops.m"
  {
#line 166 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 166 "ops.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 166 "ops.m"
  }
#line 133 "ops.m"
}

#line 121 "ops.m"
MR_Integer MR_CALL 
mercury__ops__arg_priority_1_f_0(
#line 121 "ops.m"
  MR_Word mercury__ops__TypeClassInfo_for_op_table_3,
#line 121 "ops.m"
  MR_Box mercury__ops__HeadVar__1_1)
#line 121 "ops.m"
{
#line 6464 "ops.c"
  {
#line 6466 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6468 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6470 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 13)));
#line 6472 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6475 "ops.c"
    {
#line 6477 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6480 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6482 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6484 "ops.c"
  }
#line 121 "ops.m"
}

#line 112 "ops.m"
MR_Integer MR_CALL 
mercury__ops__max_priority_1_f_0(
#line 112 "ops.m"
  MR_Word mercury__ops__TypeClassInfo_for_op_table_3,
#line 112 "ops.m"
  MR_Box mercury__ops__HeadVar__1_1)
#line 112 "ops.m"
{
#line 6498 "ops.c"
  {
#line 6500 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6502 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6504 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6506 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6509 "ops.c"
    {
#line 6511 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6514 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6516 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6518 "ops.c"
  }
#line 112 "ops.m"
}

#line 107 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_operator_term_4_p_0(
#line 107 "ops.m"
  MR_Word mercury__ops__TypeClassInfo_for_op_table_5,
#line 107 "ops.m"
  MR_Box mercury__ops__HeadVar__1_1,
#line 107 "ops.m"
  MR_Integer * mercury__ops__HeadVar__2_2,
#line 107 "ops.m"
  MR_Word * mercury__ops__HeadVar__3_3,
#line 107 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 107 "ops.m"
{
#line 6538 "ops.c"
  {
#line 6540 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6542 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 11)));
#line 6544 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__2_2;
#line 6546 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6548 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6551 "ops.c"
    {
#line 6553 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, &mercury__ops__conv3_HeadVar__2_2, &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6556 "ops.c"
    if (mercury__ops__succeeded)
#line 6558 "ops.c"
      {
#line 6560 "ops.c"
        *mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv3_HeadVar__2_2);
#line 6562 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6564 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6566 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6568 "ops.c"
      }
#line 6570 "ops.c"
    return mercury__ops__succeeded;
#line 6572 "ops.c"
  }
#line 107 "ops.m"
}

#line 100 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_op_infos_4_p_0(
#line 100 "ops.m"
  MR_Word mercury__ops__TypeClassInfo_for_op_table_5,
#line 100 "ops.m"
  MR_Box mercury__ops__HeadVar__1_1,
#line 100 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 100 "ops.m"
  MR_Word * mercury__ops__HeadVar__3_3,
#line 100 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 100 "ops.m"
{
#line 6592 "ops.c"
  {
#line 6594 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6596 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 10)));
#line 6598 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6600 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6603 "ops.c"
    {
#line 6605 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6608 "ops.c"
    if (mercury__ops__succeeded)
#line 6610 "ops.c"
      {
#line 6612 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6614 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6616 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6618 "ops.c"
      }
#line 6620 "ops.c"
    return mercury__ops__succeeded;
#line 6622 "ops.c"
  }
#line 100 "ops.m"
}

#line 93 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_op_2_p_0(
#line 93 "ops.m"
  MR_Word mercury__ops__TypeClassInfo_for_op_table_3,
#line 93 "ops.m"
  MR_Box mercury__ops__HeadVar__1_1,
#line 93 "ops.m"
  MR_String mercury__ops__HeadVar__2_2)
#line 93 "ops.m"
{
#line 6638 "ops.c"
  {
#line 6640 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6642 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 9)));

#line 6645 "ops.c"
    {
#line 6647 "ops.c"
      return mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)));
    }
#line 6650 "ops.c"
    return mercury__ops__succeeded;
#line 6652 "ops.c"
  }
#line 93 "ops.m"
}

#line 88 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_postfix_op_4_p_0(
#line 88 "ops.m"
  MR_Word mercury__ops__TypeClassInfo_for_op_table_5,
#line 88 "ops.m"
  MR_Box mercury__ops__HeadVar__1_1,
#line 88 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 88 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 88 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 88 "ops.m"
{
#line 6672 "ops.c"
  {
#line 6674 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6676 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 8)));
#line 6678 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6680 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6683 "ops.c"
    {
#line 6685 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6688 "ops.c"
    if (mercury__ops__succeeded)
#line 6690 "ops.c"
      {
#line 6692 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6694 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6696 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6698 "ops.c"
      }
#line 6700 "ops.c"
    return mercury__ops__succeeded;
#line 6702 "ops.c"
  }
#line 88 "ops.m"
}

#line 82 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_binary_prefix_op_5_p_0(
#line 82 "ops.m"
  MR_Word mercury__ops__TypeClassInfo_for_op_table_6,
#line 82 "ops.m"
  MR_Box mercury__ops__HeadVar__1_1,
#line 82 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 82 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 82 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4,
#line 82 "ops.m"
  MR_Word * mercury__ops__HeadVar__5_5)
#line 82 "ops.m"
{
#line 6724 "ops.c"
  {
#line 6726 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6728 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 7)));
#line 6730 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6732 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6734 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6737 "ops.c"
    {
#line 6739 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6742 "ops.c"
    if (mercury__ops__succeeded)
#line 6744 "ops.c"
      {
#line 6746 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6748 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6750 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6752 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6754 "ops.c"
      }
#line 6756 "ops.c"
    return mercury__ops__succeeded;
#line 6758 "ops.c"
  }
#line 82 "ops.m"
}

#line 76 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_prefix_op_4_p_0(
#line 76 "ops.m"
  MR_Word mercury__ops__TypeClassInfo_for_op_table_5,
#line 76 "ops.m"
  MR_Box mercury__ops__HeadVar__1_1,
#line 76 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 76 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 76 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4)
#line 76 "ops.m"
{
#line 6778 "ops.c"
  {
#line 6780 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6782 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6784 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6786 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6789 "ops.c"
    {
#line 6791 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6794 "ops.c"
    if (mercury__ops__succeeded)
#line 6796 "ops.c"
      {
#line 6798 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6800 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6802 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6804 "ops.c"
      }
#line 6806 "ops.c"
    return mercury__ops__succeeded;
#line 6808 "ops.c"
  }
#line 76 "ops.m"
}

#line 70 "ops.m"
MR_bool MR_CALL 
mercury__ops__lookup_infix_op_5_p_0(
#line 70 "ops.m"
  MR_Word mercury__ops__TypeClassInfo_for_op_table_6,
#line 70 "ops.m"
  MR_Box mercury__ops__HeadVar__1_1,
#line 70 "ops.m"
  MR_String mercury__ops__HeadVar__2_2,
#line 70 "ops.m"
  MR_Integer * mercury__ops__HeadVar__3_3,
#line 70 "ops.m"
  MR_Word * mercury__ops__HeadVar__4_4,
#line 70 "ops.m"
  MR_Word * mercury__ops__HeadVar__5_5)
#line 70 "ops.m"
{
#line 6830 "ops.c"
  {
#line 6832 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6834 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6836 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6838 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6840 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6843 "ops.c"
    {
#line 6845 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6848 "ops.c"
    if (mercury__ops__succeeded)
#line 6850 "ops.c"
      {
#line 6852 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6854 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6856 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6858 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6860 "ops.c"
      }
#line 6862 "ops.c"
    return mercury__ops__succeeded;
#line 6864 "ops.c"
  }
#line 70 "ops.m"
}

void mercury__ops__init(void)
{
}

void mercury__ops__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_assoc_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_class_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_mercury_op_table_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_op_info_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_priority_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_table_0);
}

void mercury__ops__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ops. */
