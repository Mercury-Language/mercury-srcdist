/*
** Automatically generated from `ops.m'
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
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
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
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 1361 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0 = {
  (MR_String) "x",
  (MR_Integer) 0
};

#line 1367 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1 = {
  (MR_String) "y",
  (MR_Integer) 1
};

#line 1373 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1379 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1385 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1391 "ops.c"
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

#line 1408 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1414 "ops.c"
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

#line 1429 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1434 "ops.c"
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

#line 1449 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1455 "ops.c"
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

#line 1470 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1475 "ops.c"
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

#line 1490 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_0
};

#line 1495 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1500 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_2
};

#line 1505 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_3
};

#line 1510 "ops.c"
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

#line 1534 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4] = {
  &mercury__ops__ops__du_functor_desc_class_0_2,
  &mercury__ops__ops__du_functor_desc_class_0_0,
  &mercury__ops__ops__du_functor_desc_class_0_3,
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1542 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1550 "ops.c"
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

#line 1567 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0 = {
  (MR_String) "mercury_op_table",
  (MR_Integer) 0
};

#line 1573 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1578 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1583 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1] = {
  (MR_Integer) 0
};

#line 1588 "ops.c"
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

#line 1605 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1611 "ops.c"
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

#line 1626 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1631 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_op_info_0_0
  }
};

#line 1640 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1645 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1] = {
  (MR_Integer) 0
};

#line 1650 "ops.c"
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

#line 1667 "ops.c"
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

#line 1684 "ops.c"
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

#line 1701 "ops.c"
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

#line 1719 "ops.c"
static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1] = {
  (MR_String) "Table"
};

#line 1724 "ops.c"
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

#line 1773 "ops.c"
static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1 = {
  (MR_String) "ops",
  (MR_String) "op_table",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 9,
  mercury__ops__ops__type_class_id_var_names_op_table_1,
  mercury__ops__ops__type_class_id_method_ids_op_table_1
};

#line 1784 "ops.c"
const MR_TypeClassDeclStruct mercury__ops__ops__type_class_decl_op_table_1 = {
  &mercury__ops__ops__type_class_id_op_table_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1792 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
#line 1795 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1797 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1799 "ops.c"
{
#line 1801 "ops.c"
  {
#line 1803 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1806 "ops.c"
    {
#line 1808 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____assoc_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1811 "ops.c"
    return mercury__ops__succeeded;
#line 1813 "ops.c"
  }
#line 1815 "ops.c"
}

#line 1818 "ops.c"
static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
#line 1821 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1823 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1825 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1827 "ops.c"
{
#line 1829 "ops.c"
  {
#line 1831 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1834 "ops.c"
    {
#line 1836 "ops.c"
      mercury__ops____Compare____assoc_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1839 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1841 "ops.c"
  }
#line 1843 "ops.c"
}

#line 1846 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
#line 1849 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1851 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1853 "ops.c"
{
#line 1855 "ops.c"
  {
#line 1857 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1860 "ops.c"
    {
#line 1862 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____class_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1865 "ops.c"
    return mercury__ops__succeeded;
#line 1867 "ops.c"
  }
#line 1869 "ops.c"
}

#line 1872 "ops.c"
static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
#line 1875 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1877 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1879 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1881 "ops.c"
{
#line 1883 "ops.c"
  {
#line 1885 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1888 "ops.c"
    {
#line 1890 "ops.c"
      mercury__ops____Compare____class_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1893 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1895 "ops.c"
  }
#line 1897 "ops.c"
}

#line 1900 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
#line 1903 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1905 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1907 "ops.c"
{
#line 1909 "ops.c"
  {
#line 1911 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1914 "ops.c"
    {
#line 1916 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____mercury_op_table_0_0();
    }
#line 1919 "ops.c"
    return mercury__ops__succeeded;
#line 1921 "ops.c"
  }
#line 1923 "ops.c"
}

#line 1926 "ops.c"
static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
#line 1929 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1931 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1933 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1935 "ops.c"
{
#line 1937 "ops.c"
  {
#line 1939 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1942 "ops.c"
    {
#line 1944 "ops.c"
      mercury__ops____Compare____mercury_op_table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 1947 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1949 "ops.c"
  }
#line 1951 "ops.c"
}

#line 1954 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0_10001(
#line 1957 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1959 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1961 "ops.c"
{
#line 1963 "ops.c"
  {
#line 1965 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1968 "ops.c"
    {
#line 1970 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____op_info_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1973 "ops.c"
    return mercury__ops__succeeded;
#line 1975 "ops.c"
  }
#line 1977 "ops.c"
}

#line 1980 "ops.c"
static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
#line 1983 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1985 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1987 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1989 "ops.c"
{
#line 1991 "ops.c"
  {
#line 1993 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1996 "ops.c"
    {
#line 1998 "ops.c"
      mercury__ops____Compare____op_info_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 2001 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 2003 "ops.c"
  }
#line 2005 "ops.c"
}

#line 2008 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
#line 2011 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2013 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2015 "ops.c"
{
#line 2017 "ops.c"
  {
#line 2019 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 2022 "ops.c"
    {
#line 2024 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____priority_0_0(((MR_Integer) mercury__ops__wrapper_arg_1), ((MR_Integer) mercury__ops__wrapper_arg_2));
    }
#line 2027 "ops.c"
    return mercury__ops__succeeded;
#line 2029 "ops.c"
  }
#line 2031 "ops.c"
}

#line 2034 "ops.c"
static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
#line 2037 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 2039 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2041 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 2043 "ops.c"
{
#line 2045 "ops.c"
  {
#line 2047 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 2050 "ops.c"
    {
#line 2052 "ops.c"
      mercury__ops____Compare____priority_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Integer) mercury__ops__wrapper_arg_2), ((MR_Integer) mercury__ops__wrapper_arg_3));
    }
#line 2055 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 2057 "ops.c"
  }
#line 2059 "ops.c"
}

#line 2062 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
#line 2065 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2067 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2069 "ops.c"
{
#line 2071 "ops.c"
  {
#line 2073 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 2076 "ops.c"
    {
#line 2078 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____table_0_0();
    }
#line 2081 "ops.c"
    return mercury__ops__succeeded;
#line 2083 "ops.c"
  }
#line 2085 "ops.c"
}

#line 2088 "ops.c"
static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
#line 2091 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 2093 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2095 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 2097 "ops.c"
{
#line 2099 "ops.c"
  {
#line 2101 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 2104 "ops.c"
    {
#line 2106 "ops.c"
      mercury__ops____Compare____table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 2109 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 2111 "ops.c"
  }
#line 2113 "ops.c"
}

#line 2116 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
#line 2119 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2121 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2123 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2125 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2127 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 2129 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 2131 "ops.c"
{
#line 2133 "ops.c"
  {
#line 2135 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2137 "ops.c"
    MR_Box mercury__ops__closure;
#line 2139 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 2141 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 2143 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 2146 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2148 "ops.c"
    {
#line 2150 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 2153 "ops.c"
    if (mercury__ops__succeeded)
#line 2155 "ops.c"
      {
#line 2157 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 2159 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 2161 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 2163 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2165 "ops.c"
      }
#line 2167 "ops.c"
    return mercury__ops__succeeded;
#line 2169 "ops.c"
  }
#line 2171 "ops.c"
}

#line 2174 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
#line 2177 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2179 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2181 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2183 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2185 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2187 "ops.c"
{
#line 2189 "ops.c"
  {
#line 2191 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2193 "ops.c"
    MR_Box mercury__ops__closure;
#line 2195 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 2197 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2200 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2202 "ops.c"
    {
#line 2204 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2207 "ops.c"
    if (mercury__ops__succeeded)
#line 2209 "ops.c"
      {
#line 2211 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2213 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2215 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2217 "ops.c"
      }
#line 2219 "ops.c"
    return mercury__ops__succeeded;
#line 2221 "ops.c"
  }
#line 2223 "ops.c"
}

#line 2226 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
#line 2229 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2231 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2233 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2235 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2237 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 2239 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 2241 "ops.c"
{
#line 2243 "ops.c"
  {
#line 2245 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2247 "ops.c"
    MR_Box mercury__ops__closure;
#line 2249 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 2251 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 2253 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 2256 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2258 "ops.c"
    {
#line 2260 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 2263 "ops.c"
    if (mercury__ops__succeeded)
#line 2265 "ops.c"
      {
#line 2267 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 2269 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 2271 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 2273 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2275 "ops.c"
      }
#line 2277 "ops.c"
    return mercury__ops__succeeded;
#line 2279 "ops.c"
  }
#line 2281 "ops.c"
}

#line 2284 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
#line 2287 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2289 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2291 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2293 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2295 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2297 "ops.c"
{
#line 2299 "ops.c"
  {
#line 2301 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2303 "ops.c"
    MR_Box mercury__ops__closure;
#line 2305 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 2307 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2310 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2312 "ops.c"
    {
#line 2314 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2317 "ops.c"
    if (mercury__ops__succeeded)
#line 2319 "ops.c"
      {
#line 2321 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2323 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2325 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2327 "ops.c"
      }
#line 2329 "ops.c"
    return mercury__ops__succeeded;
#line 2331 "ops.c"
  }
#line 2333 "ops.c"
}

#line 2336 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
#line 2339 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2341 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2343 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2345 "ops.c"
{
#line 2347 "ops.c"
  {
#line 2349 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2351 "ops.c"
    MR_Box mercury__ops__closure;

#line 2354 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2356 "ops.c"
    {
#line 2358 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0(((MR_String) mercury__ops__wrapper_arg_2));
    }
#line 2361 "ops.c"
    return mercury__ops__succeeded;
#line 2363 "ops.c"
  }
#line 2365 "ops.c"
}

#line 2368 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
#line 2371 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2373 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2375 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2377 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2379 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2381 "ops.c"
{
#line 2383 "ops.c"
  {
#line 2385 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2387 "ops.c"
    MR_Box mercury__ops__closure;
#line 2389 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2391 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2394 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2396 "ops.c"
    {
#line 2398 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2401 "ops.c"
    if (mercury__ops__succeeded)
#line 2403 "ops.c"
      {
#line 2405 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2407 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2409 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2411 "ops.c"
      }
#line 2413 "ops.c"
    return mercury__ops__succeeded;
#line 2415 "ops.c"
  }
#line 2417 "ops.c"
}

#line 2420 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
#line 2423 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2425 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2427 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_2,
#line 2429 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2431 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2433 "ops.c"
{
#line 2435 "ops.c"
  {
#line 2437 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2439 "ops.c"
    MR_Box mercury__ops__closure;
#line 2441 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__2_2;
#line 2443 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2445 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2448 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2450 "ops.c"
    {
#line 2452 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0(&mercury__ops__conv2_HeadVar__2_2, &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2455 "ops.c"
    if (mercury__ops__succeeded)
#line 2457 "ops.c"
      {
#line 2459 "ops.c"
        *mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv2_HeadVar__2_2));
#line 2461 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2463 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2465 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2467 "ops.c"
      }
#line 2469 "ops.c"
    return mercury__ops__succeeded;
#line 2471 "ops.c"
  }
#line 2473 "ops.c"
}

#line 2476 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
#line 2479 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2481 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2483 "ops.c"
{
#line 2485 "ops.c"
  {
#line 2487 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2489 "ops.c"
    MR_Box mercury__ops__closure;
#line 2491 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2494 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2496 "ops.c"
    {
#line 2498 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0();
    }
#line 2501 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2503 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2505 "ops.c"
  }
#line 2507 "ops.c"
}

#line 2510 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
#line 2513 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2515 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2517 "ops.c"
{
#line 2519 "ops.c"
  {
#line 2521 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2523 "ops.c"
    MR_Box mercury__ops__closure;
#line 2525 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2528 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2530 "ops.c"
    {
#line 2532 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0();
    }
#line 2535 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2537 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2539 "ops.c"
  }
#line 2541 "ops.c"
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

#line 34 "private_builtin.opt"
    mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 < mercury__ops__Cast_HeadVar2_5);
#line 37 "private_builtin.opt"
    if (mercury__ops__succeeded)
#line 36 "private_builtin.opt"
      *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
    else
#line 42 "private_builtin.opt"
      {
#line 39 "private_builtin.opt"
        mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 == mercury__ops__Cast_HeadVar2_5);
#line 42 "private_builtin.opt"
        if (mercury__ops__succeeded)
#line 41 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
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
#line 3799 "ops.c"
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
#line 3821 "ops.c"
        mercury__ops__succeeded = (mercury__ops__V_8_8 == (MR_Integer) 0);
#line 57 "ops.m"
        mercury__ops__succeeded = !(mercury__ops__succeeded);
#line 57 "ops.m"
        if (mercury__ops__succeeded)
#line 57 "ops.m"
          *mercury__ops__HeadVar__1_1 = mercury__ops__V_8_8;
#line 57 "ops.m"
        else
#line 37 "private_builtin.opt"
          {
#line 34 "private_builtin.opt"
            mercury__ops__succeeded = (mercury__ops__V_5_5 < mercury__ops__V_7_7);
#line 37 "private_builtin.opt"
            if (mercury__ops__succeeded)
#line 36 "private_builtin.opt"
              *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
            else
#line 42 "private_builtin.opt"
              {
#line 39 "private_builtin.opt"
                mercury__ops__succeeded = (mercury__ops__V_5_5 == mercury__ops__V_7_7);
#line 42 "private_builtin.opt"
                if (mercury__ops__succeeded)
#line 41 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                else
#line 43 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
              }
#line 37 "private_builtin.opt"
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

#line 3901 "ops.c"
        {
#line 3903 "ops.c"
          mercury__ops__succeeded = mercury__ops____Unify____class_0_0(mercury__ops__V_3_3, mercury__ops__V_5_5);
        }
#line 57 "ops.m"
        if (mercury__ops__succeeded)
#line 3908 "ops.c"
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
#line 3989 "ops.c"
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

#line 34 "private_builtin.opt"
                  mercury__ops__succeeded = (mercury__ops__V_72_72 < mercury__ops__V_73_73);
#line 37 "private_builtin.opt"
                  if (mercury__ops__succeeded)
#line 36 "private_builtin.opt"
                    mercury__ops__V_8_8 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                  else
#line 42 "private_builtin.opt"
                    {
#line 39 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_72_72 == mercury__ops__V_73_73);
#line 42 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 41 "private_builtin.opt"
                        mercury__ops__V_8_8 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                      else
#line 43 "private_builtin.opt"
                        mercury__ops__V_8_8 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                    }
#line 4049 "ops.c"
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

#line 34 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_74_74 < mercury__ops__V_75_75);
#line 37 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 36 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                      else
#line 42 "private_builtin.opt"
                        {
#line 39 "private_builtin.opt"
                          mercury__ops__succeeded = (mercury__ops__V_74_74 == mercury__ops__V_75_75);
#line 42 "private_builtin.opt"
                          if (mercury__ops__succeeded)
#line 41 "private_builtin.opt"
                            *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                          else
#line 43 "private_builtin.opt"
                            *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                        }
#line 34 "ops.m"
                    }
#line 34 "ops.m"
                }
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 1:
#line 4096 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 2:
#line 4102 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 3:
#line 4108 "ops.c"
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
#line 4132 "ops.c"
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

#line 34 "private_builtin.opt"
                  mercury__ops__succeeded = (mercury__ops__V_78_78 < mercury__ops__V_79_79);
#line 37 "private_builtin.opt"
                  if (mercury__ops__succeeded)
#line 36 "private_builtin.opt"
                    *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                  else
#line 42 "private_builtin.opt"
                    {
#line 39 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_78_78 == mercury__ops__V_79_79);
#line 42 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 41 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                      else
#line 43 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                    }
#line 34 "ops.m"
                }
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 2:
#line 4175 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 3:
#line 4181 "ops.c"
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
#line 4207 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 1:
#line 4213 "ops.c"
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

#line 34 "private_builtin.opt"
                  mercury__ops__succeeded = (mercury__ops__V_68_68 < mercury__ops__V_69_69);
#line 37 "private_builtin.opt"
                  if (mercury__ops__succeeded)
#line 36 "private_builtin.opt"
                    mercury__ops__V_40_40 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                  else
#line 42 "private_builtin.opt"
                    {
#line 39 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_68_68 == mercury__ops__V_69_69);
#line 42 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 41 "private_builtin.opt"
                        mercury__ops__V_40_40 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                      else
#line 43 "private_builtin.opt"
                        mercury__ops__V_40_40 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                    }
#line 4254 "ops.c"
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

#line 34 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_70_70 < mercury__ops__V_71_71);
#line 37 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 36 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                      else
#line 42 "private_builtin.opt"
                        {
#line 39 "private_builtin.opt"
                          mercury__ops__succeeded = (mercury__ops__V_70_70 == mercury__ops__V_71_71);
#line 42 "private_builtin.opt"
                          if (mercury__ops__succeeded)
#line 41 "private_builtin.opt"
                            *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                          else
#line 43 "private_builtin.opt"
                            *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
                        }
#line 34 "ops.m"
                    }
#line 34 "ops.m"
                }
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 3:
#line 4301 "ops.c"
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
#line 4325 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 1:
#line 4331 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                break;
#line 34 "ops.m"
              case (MR_Integer) 2:
#line 4337 "ops.c"
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

#line 34 "private_builtin.opt"
                  mercury__ops__succeeded = (mercury__ops__V_76_76 < mercury__ops__V_77_77);
#line 37 "private_builtin.opt"
                  if (mercury__ops__succeeded)
#line 36 "private_builtin.opt"
                    *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
                  else
#line 42 "private_builtin.opt"
                    {
#line 39 "private_builtin.opt"
                      mercury__ops__succeeded = (mercury__ops__V_76_76 == mercury__ops__V_77_77);
#line 42 "private_builtin.opt"
                      if (mercury__ops__succeeded)
#line 41 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
                      else
#line 43 "private_builtin.opt"
                        *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
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
#line 4445 "ops.c"
                mercury__ops__succeeded = (mercury__ops__V_3_3 == mercury__ops__V_5_5);
#line 34 "ops.m"
                if (mercury__ops__succeeded)
#line 4449 "ops.c"
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
#line 4474 "ops.c"
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
#line 4505 "ops.c"
                mercury__ops__succeeded = (mercury__ops__V_9_9 == mercury__ops__V_11_11);
#line 34 "ops.m"
                if (mercury__ops__succeeded)
#line 4509 "ops.c"
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
#line 4534 "ops.c"
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

#line 34 "private_builtin.opt"
    mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 < mercury__ops__Cast_HeadVar2_5);
#line 37 "private_builtin.opt"
    if (mercury__ops__succeeded)
#line 36 "private_builtin.opt"
      *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "private_builtin.opt"
    else
#line 42 "private_builtin.opt"
      {
#line 39 "private_builtin.opt"
        mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 == mercury__ops__Cast_HeadVar2_5);
#line 42 "private_builtin.opt"
        if (mercury__ops__succeeded)
#line 41 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "private_builtin.opt"
        else
#line 43 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "private_builtin.opt"
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
#line 4607 "ops.c"
  {
#line 4609 "ops.c"
    MR_bool mercury__ops__succeeded = (mercury__ops__HeadVar__2_1 == mercury__ops__HeadVar__2_2);

#line 4612 "ops.c"
    return mercury__ops__succeeded;
#line 4614 "ops.c"
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
#line 6413 "ops.c"
  {
#line 6415 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6417 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6419 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 13)));
#line 6421 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6424 "ops.c"
    {
#line 6426 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6429 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6431 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6433 "ops.c"
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
#line 6447 "ops.c"
  {
#line 6449 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6451 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6453 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6455 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6458 "ops.c"
    {
#line 6460 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6463 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6465 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6467 "ops.c"
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
#line 6487 "ops.c"
  {
#line 6489 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6491 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 11)));
#line 6493 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__2_2;
#line 6495 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6497 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6500 "ops.c"
    {
#line 6502 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, &mercury__ops__conv3_HeadVar__2_2, &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6505 "ops.c"
    if (mercury__ops__succeeded)
#line 6507 "ops.c"
      {
#line 6509 "ops.c"
        *mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv3_HeadVar__2_2);
#line 6511 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6513 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6515 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6517 "ops.c"
      }
#line 6519 "ops.c"
    return mercury__ops__succeeded;
#line 6521 "ops.c"
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
#line 6541 "ops.c"
  {
#line 6543 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6545 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 10)));
#line 6547 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6549 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6552 "ops.c"
    {
#line 6554 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6557 "ops.c"
    if (mercury__ops__succeeded)
#line 6559 "ops.c"
      {
#line 6561 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6563 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6565 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6567 "ops.c"
      }
#line 6569 "ops.c"
    return mercury__ops__succeeded;
#line 6571 "ops.c"
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
#line 6587 "ops.c"
  {
#line 6589 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6591 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 9)));

#line 6594 "ops.c"
    {
#line 6596 "ops.c"
      return mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)));
    }
#line 6599 "ops.c"
    return mercury__ops__succeeded;
#line 6601 "ops.c"
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
#line 6621 "ops.c"
  {
#line 6623 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6625 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 8)));
#line 6627 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6629 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6632 "ops.c"
    {
#line 6634 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6637 "ops.c"
    if (mercury__ops__succeeded)
#line 6639 "ops.c"
      {
#line 6641 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6643 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6645 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6647 "ops.c"
      }
#line 6649 "ops.c"
    return mercury__ops__succeeded;
#line 6651 "ops.c"
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
#line 6673 "ops.c"
  {
#line 6675 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6677 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 7)));
#line 6679 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6681 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6683 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6686 "ops.c"
    {
#line 6688 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6691 "ops.c"
    if (mercury__ops__succeeded)
#line 6693 "ops.c"
      {
#line 6695 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6697 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6699 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6701 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6703 "ops.c"
      }
#line 6705 "ops.c"
    return mercury__ops__succeeded;
#line 6707 "ops.c"
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
#line 6727 "ops.c"
  {
#line 6729 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6731 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6733 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6735 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6738 "ops.c"
    {
#line 6740 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6743 "ops.c"
    if (mercury__ops__succeeded)
#line 6745 "ops.c"
      {
#line 6747 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6749 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6751 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6753 "ops.c"
      }
#line 6755 "ops.c"
    return mercury__ops__succeeded;
#line 6757 "ops.c"
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
#line 6779 "ops.c"
  {
#line 6781 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6783 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6785 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6787 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6789 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6792 "ops.c"
    {
#line 6794 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6797 "ops.c"
    if (mercury__ops__succeeded)
#line 6799 "ops.c"
      {
#line 6801 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6803 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6805 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6807 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6809 "ops.c"
      }
#line 6811 "ops.c"
    return mercury__ops__succeeded;
#line 6813 "ops.c"
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
