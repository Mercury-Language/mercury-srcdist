/*
** Automatically generated from `ops.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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
    ((MR_Box) ((MR_Integer) 1160))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 800))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 1199))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 1180))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]))),
    ((MR_Box) ((MR_Integer) 800))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]))),
    ((MR_Box) ((MR_Integer) 1181))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]))),
    ((MR_Box) ((MR_Integer) 950))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]))),
    ((MR_Box) ((MR_Integer) 950))
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
#include "builtin.mh"
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
#include "table_builtin.mh"
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
#include "math.mh"
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
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
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



#line 1056 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0 = {
  (MR_String) "x",
  (MR_Integer) 0
};

#line 1062 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1 = {
  (MR_String) "y",
  (MR_Integer) 1
};

#line 1068 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1074 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1080 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1086 "ops.c"
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

#line 1103 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1109 "ops.c"
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

#line 1124 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1129 "ops.c"
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

#line 1144 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1150 "ops.c"
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

#line 1165 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1170 "ops.c"
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

#line 1185 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_0
};

#line 1190 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1195 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_2
};

#line 1200 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_3
};

#line 1205 "ops.c"
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

#line 1229 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4] = {
  &mercury__ops__ops__du_functor_desc_class_0_2,
  &mercury__ops__ops__du_functor_desc_class_0_0,
  &mercury__ops__ops__du_functor_desc_class_0_3,
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1237 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1245 "ops.c"
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

#line 1262 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0 = {
  (MR_String) "mercury_op_table",
  (MR_Integer) 0
};

#line 1268 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1273 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1278 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1] = {
  (MR_Integer) 0
};

#line 1283 "ops.c"
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

#line 1300 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1306 "ops.c"
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

#line 1321 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1326 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_op_info_0_0
  }
};

#line 1335 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1340 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1] = {
  (MR_Integer) 0
};

#line 1345 "ops.c"
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

#line 1362 "ops.c"
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

#line 1379 "ops.c"
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

#line 1396 "ops.c"
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

#line 1414 "ops.c"
static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1] = {
  (MR_String) "Table"
};

#line 1419 "ops.c"
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

#line 1468 "ops.c"
static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1 = {
  (MR_String) "ops",
  (MR_String) "op_table",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 9,
  mercury__ops__ops__type_class_id_var_names_op_table_1,
  mercury__ops__ops__type_class_id_method_ids_op_table_1
};

#line 1479 "ops.c"
const MR_TypeClassDeclStruct mercury__ops__ops__type_class_decl_op_table_1 = {
  &mercury__ops__ops__type_class_id_op_table_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1487 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
#line 1490 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1492 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1494 "ops.c"
{
#line 1496 "ops.c"
  {
#line 1498 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1501 "ops.c"
    {
#line 1503 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____assoc_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1506 "ops.c"
    return mercury__ops__succeeded;
#line 1508 "ops.c"
  }
#line 1510 "ops.c"
}

#line 1513 "ops.c"
static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
#line 1516 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1518 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1520 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1522 "ops.c"
{
#line 1524 "ops.c"
  {
#line 1526 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1529 "ops.c"
    {
#line 1531 "ops.c"
      mercury__ops____Compare____assoc_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1534 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1536 "ops.c"
  }
#line 1538 "ops.c"
}

#line 1541 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
#line 1544 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1546 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1548 "ops.c"
{
#line 1550 "ops.c"
  {
#line 1552 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1555 "ops.c"
    {
#line 1557 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____class_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1560 "ops.c"
    return mercury__ops__succeeded;
#line 1562 "ops.c"
  }
#line 1564 "ops.c"
}

#line 1567 "ops.c"
static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
#line 1570 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1572 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1574 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1576 "ops.c"
{
#line 1578 "ops.c"
  {
#line 1580 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1583 "ops.c"
    {
#line 1585 "ops.c"
      mercury__ops____Compare____class_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1588 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1590 "ops.c"
  }
#line 1592 "ops.c"
}

#line 1595 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
#line 1598 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1600 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1602 "ops.c"
{
#line 1604 "ops.c"
  {
#line 1606 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1609 "ops.c"
    {
#line 1611 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____mercury_op_table_0_0();
    }
#line 1614 "ops.c"
    return mercury__ops__succeeded;
#line 1616 "ops.c"
  }
#line 1618 "ops.c"
}

#line 1621 "ops.c"
static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
#line 1624 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1626 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1628 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1630 "ops.c"
{
#line 1632 "ops.c"
  {
#line 1634 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1637 "ops.c"
    {
#line 1639 "ops.c"
      mercury__ops____Compare____mercury_op_table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 1642 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1644 "ops.c"
  }
#line 1646 "ops.c"
}

#line 1649 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0_10001(
#line 1652 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1654 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1656 "ops.c"
{
#line 1658 "ops.c"
  {
#line 1660 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1663 "ops.c"
    {
#line 1665 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____op_info_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1668 "ops.c"
    return mercury__ops__succeeded;
#line 1670 "ops.c"
  }
#line 1672 "ops.c"
}

#line 1675 "ops.c"
static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
#line 1678 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1680 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1682 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1684 "ops.c"
{
#line 1686 "ops.c"
  {
#line 1688 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1691 "ops.c"
    {
#line 1693 "ops.c"
      mercury__ops____Compare____op_info_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1696 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1698 "ops.c"
  }
#line 1700 "ops.c"
}

#line 1703 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
#line 1706 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1708 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1710 "ops.c"
{
#line 1712 "ops.c"
  {
#line 1714 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1717 "ops.c"
    {
#line 1719 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____priority_0_0(((MR_Integer) mercury__ops__wrapper_arg_1), ((MR_Integer) mercury__ops__wrapper_arg_2));
    }
#line 1722 "ops.c"
    return mercury__ops__succeeded;
#line 1724 "ops.c"
  }
#line 1726 "ops.c"
}

#line 1729 "ops.c"
static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
#line 1732 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1734 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1736 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1738 "ops.c"
{
#line 1740 "ops.c"
  {
#line 1742 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1745 "ops.c"
    {
#line 1747 "ops.c"
      mercury__ops____Compare____priority_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Integer) mercury__ops__wrapper_arg_2), ((MR_Integer) mercury__ops__wrapper_arg_3));
    }
#line 1750 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1752 "ops.c"
  }
#line 1754 "ops.c"
}

#line 1757 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
#line 1760 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1762 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1764 "ops.c"
{
#line 1766 "ops.c"
  {
#line 1768 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1771 "ops.c"
    {
#line 1773 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____table_0_0();
    }
#line 1776 "ops.c"
    return mercury__ops__succeeded;
#line 1778 "ops.c"
  }
#line 1780 "ops.c"
}

#line 1783 "ops.c"
static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
#line 1786 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1788 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1790 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1792 "ops.c"
{
#line 1794 "ops.c"
  {
#line 1796 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1799 "ops.c"
    {
#line 1801 "ops.c"
      mercury__ops____Compare____table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 1804 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1806 "ops.c"
  }
#line 1808 "ops.c"
}

#line 1811 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
#line 1814 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1816 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1818 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1820 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1822 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 1824 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 1826 "ops.c"
{
#line 1828 "ops.c"
  {
#line 1830 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1832 "ops.c"
    MR_Box mercury__ops__closure;
#line 1834 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 1836 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 1838 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 1841 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 1843 "ops.c"
    {
#line 1845 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 1848 "ops.c"
    if (mercury__ops__succeeded)
#line 1850 "ops.c"
      {
#line 1852 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 1854 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 1856 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 1858 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 1860 "ops.c"
      }
#line 1862 "ops.c"
    return mercury__ops__succeeded;
#line 1864 "ops.c"
  }
#line 1866 "ops.c"
}

#line 1869 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
#line 1872 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1874 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1876 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1878 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1880 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 1882 "ops.c"
{
#line 1884 "ops.c"
  {
#line 1886 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1888 "ops.c"
    MR_Box mercury__ops__closure;
#line 1890 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 1892 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 1895 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 1897 "ops.c"
    {
#line 1899 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 1902 "ops.c"
    if (mercury__ops__succeeded)
#line 1904 "ops.c"
      {
#line 1906 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 1908 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 1910 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 1912 "ops.c"
      }
#line 1914 "ops.c"
    return mercury__ops__succeeded;
#line 1916 "ops.c"
  }
#line 1918 "ops.c"
}

#line 1921 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
#line 1924 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1926 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1928 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1930 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1932 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 1934 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 1936 "ops.c"
{
#line 1938 "ops.c"
  {
#line 1940 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1942 "ops.c"
    MR_Box mercury__ops__closure;
#line 1944 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 1946 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 1948 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 1951 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 1953 "ops.c"
    {
#line 1955 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 1958 "ops.c"
    if (mercury__ops__succeeded)
#line 1960 "ops.c"
      {
#line 1962 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 1964 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 1966 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 1968 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 1970 "ops.c"
      }
#line 1972 "ops.c"
    return mercury__ops__succeeded;
#line 1974 "ops.c"
  }
#line 1976 "ops.c"
}

#line 1979 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
#line 1982 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1984 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1986 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1988 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1990 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 1992 "ops.c"
{
#line 1994 "ops.c"
  {
#line 1996 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1998 "ops.c"
    MR_Box mercury__ops__closure;
#line 2000 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 2002 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2005 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2007 "ops.c"
    {
#line 2009 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2012 "ops.c"
    if (mercury__ops__succeeded)
#line 2014 "ops.c"
      {
#line 2016 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2018 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2020 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2022 "ops.c"
      }
#line 2024 "ops.c"
    return mercury__ops__succeeded;
#line 2026 "ops.c"
  }
#line 2028 "ops.c"
}

#line 2031 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
#line 2034 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2036 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2038 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2040 "ops.c"
{
#line 2042 "ops.c"
  {
#line 2044 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2046 "ops.c"
    MR_Box mercury__ops__closure;

#line 2049 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2051 "ops.c"
    {
#line 2053 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0(((MR_String) mercury__ops__wrapper_arg_2));
    }
#line 2056 "ops.c"
    return mercury__ops__succeeded;
#line 2058 "ops.c"
  }
#line 2060 "ops.c"
}

#line 2063 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
#line 2066 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2068 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2070 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2072 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2074 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2076 "ops.c"
{
#line 2078 "ops.c"
  {
#line 2080 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2082 "ops.c"
    MR_Box mercury__ops__closure;
#line 2084 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2086 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2089 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2091 "ops.c"
    {
#line 2093 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2096 "ops.c"
    if (mercury__ops__succeeded)
#line 2098 "ops.c"
      {
#line 2100 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2102 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2104 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2106 "ops.c"
      }
#line 2108 "ops.c"
    return mercury__ops__succeeded;
#line 2110 "ops.c"
  }
#line 2112 "ops.c"
}

#line 2115 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
#line 2118 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2120 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2122 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_2,
#line 2124 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2126 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2128 "ops.c"
{
#line 2130 "ops.c"
  {
#line 2132 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2134 "ops.c"
    MR_Box mercury__ops__closure;
#line 2136 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__2_2;
#line 2138 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2140 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2143 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2145 "ops.c"
    {
#line 2147 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0(&mercury__ops__conv2_HeadVar__2_2, &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2150 "ops.c"
    if (mercury__ops__succeeded)
#line 2152 "ops.c"
      {
#line 2154 "ops.c"
        *mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv2_HeadVar__2_2));
#line 2156 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2158 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2160 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2162 "ops.c"
      }
#line 2164 "ops.c"
    return mercury__ops__succeeded;
#line 2166 "ops.c"
  }
#line 2168 "ops.c"
}

#line 2171 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
#line 2174 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2176 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2178 "ops.c"
{
#line 2180 "ops.c"
  {
#line 2182 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2184 "ops.c"
    MR_Box mercury__ops__closure;
#line 2186 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2189 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2191 "ops.c"
    {
#line 2193 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0();
    }
#line 2196 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2198 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2200 "ops.c"
  }
#line 2202 "ops.c"
}

#line 2205 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
#line 2208 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2210 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2212 "ops.c"
{
#line 2214 "ops.c"
  {
#line 2216 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2218 "ops.c"
    MR_Box mercury__ops__closure;
#line 2220 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2223 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2225 "ops.c"
    {
#line 2227 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0();
    }
#line 2230 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2232 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2234 "ops.c"
  }
#line 2236 "ops.c"
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

#line 66 "private_builtin.opt"
    mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 < mercury__ops__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__ops__succeeded)
#line 68 "private_builtin.opt"
      *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 == mercury__ops__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__ops__succeeded)
#line 73 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
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
#line 3494 "ops.c"
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
#line 3516 "ops.c"
        mercury__ops__succeeded = (mercury__ops__V_8_8 == (MR_Integer) 0);
#line 57 "ops.m"
        mercury__ops__succeeded = !(mercury__ops__succeeded);
#line 57 "ops.m"
        if (mercury__ops__succeeded)
#line 57 "ops.m"
          *mercury__ops__HeadVar__1_1 = mercury__ops__V_8_8;
#line 57 "ops.m"
        else
#line 69 "private_builtin.opt"
          {
#line 66 "private_builtin.opt"
            mercury__ops__succeeded = (mercury__ops__V_5_5 < mercury__ops__V_7_7);
#line 69 "private_builtin.opt"
            if (mercury__ops__succeeded)
#line 68 "private_builtin.opt"
              *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__ops__succeeded = (mercury__ops__V_5_5 == mercury__ops__V_7_7);
#line 74 "private_builtin.opt"
                if (mercury__ops__succeeded)
#line 73 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 69 "private_builtin.opt"
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

#line 3596 "ops.c"
        {
#line 3598 "ops.c"
          mercury__ops__succeeded = mercury__ops____Unify____class_0_0(mercury__ops__V_3_3, mercury__ops__V_5_5);
        }
#line 57 "ops.m"
        if (mercury__ops__succeeded)
#line 3603 "ops.c"
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
#line 3684 "ops.c"
      *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 34 "ops.m"
    else
#line 34 "ops.m"
    if (((MR_tag((MR_Word) mercury__ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 34 "ops.m"
      {
#line 34 "ops.m"
        MR_Word mercury__ops__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "ops.m"
        MR_Word mercury__ops__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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

#line 66 "private_builtin.opt"
            mercury__ops__succeeded = (mercury__ops__V_68_68 < mercury__ops__V_69_69);
#line 69 "private_builtin.opt"
            if (mercury__ops__succeeded)
#line 68 "private_builtin.opt"
              mercury__ops__V_40_40 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__ops__succeeded = (mercury__ops__V_68_68 == mercury__ops__V_69_69);
#line 74 "private_builtin.opt"
                if (mercury__ops__succeeded)
#line 73 "private_builtin.opt"
                  mercury__ops__V_40_40 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__ops__V_40_40 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 3734 "ops.c"
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

#line 66 "private_builtin.opt"
                mercury__ops__succeeded = (mercury__ops__V_70_70 < mercury__ops__V_71_71);
#line 69 "private_builtin.opt"
                if (mercury__ops__succeeded)
#line 68 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__ops__succeeded = (mercury__ops__V_70_70 == mercury__ops__V_71_71);
#line 74 "private_builtin.opt"
                    if (mercury__ops__succeeded)
#line 73 "private_builtin.opt"
                      *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 34 "ops.m"
              }
#line 34 "ops.m"
          }
#line 34 "ops.m"
        else
#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3781 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
        else
#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3787 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
        else
#line 3791 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
      }
#line 34 "ops.m"
    else
#line 34 "ops.m"
    if (((MR_tag((MR_Word) mercury__ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 34 "ops.m"
      {
#line 34 "ops.m"
        MR_Word mercury__ops__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 1)));
#line 34 "ops.m"
        MR_Word mercury__ops__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3808 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
        else
#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
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

#line 66 "private_builtin.opt"
            mercury__ops__succeeded = (mercury__ops__V_72_72 < mercury__ops__V_73_73);
#line 69 "private_builtin.opt"
            if (mercury__ops__succeeded)
#line 68 "private_builtin.opt"
              mercury__ops__V_8_8 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__ops__succeeded = (mercury__ops__V_72_72 == mercury__ops__V_73_73);
#line 74 "private_builtin.opt"
                if (mercury__ops__succeeded)
#line 73 "private_builtin.opt"
                  mercury__ops__V_8_8 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__ops__V_8_8 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 3849 "ops.c"
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

#line 66 "private_builtin.opt"
                mercury__ops__succeeded = (mercury__ops__V_74_74 < mercury__ops__V_75_75);
#line 69 "private_builtin.opt"
                if (mercury__ops__succeeded)
#line 68 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__ops__succeeded = (mercury__ops__V_74_74 == mercury__ops__V_75_75);
#line 74 "private_builtin.opt"
                    if (mercury__ops__succeeded)
#line 73 "private_builtin.opt"
                      *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 34 "ops.m"
              }
#line 34 "ops.m"
          }
#line 34 "ops.m"
        else
#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3896 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
        else
#line 3900 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
      }
#line 34 "ops.m"
    else
#line 34 "ops.m"
    if (((MR_tag((MR_Word) mercury__ops__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 34 "ops.m"
      {
#line 34 "ops.m"
        MR_Word mercury__ops__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3915 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
        else
#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3921 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
        else
#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__ops__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "ops.m"
            MR_Integer mercury__ops__V_76_76 = (MR_Integer) mercury__ops__V_66_66;
#line 34 "ops.m"
            MR_Integer mercury__ops__V_77_77 = (MR_Integer) mercury__ops__V_53_53;

#line 66 "private_builtin.opt"
            mercury__ops__succeeded = (mercury__ops__V_76_76 < mercury__ops__V_77_77);
#line 69 "private_builtin.opt"
            if (mercury__ops__succeeded)
#line 68 "private_builtin.opt"
              *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__ops__succeeded = (mercury__ops__V_76_76 == mercury__ops__V_77_77);
#line 74 "private_builtin.opt"
                if (mercury__ops__succeeded)
#line 73 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 34 "ops.m"
          }
#line 34 "ops.m"
        else
#line 3962 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
      }
#line 34 "ops.m"
    else
#line 34 "ops.m"
      {
#line 34 "ops.m"
        MR_Word mercury__ops__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__HeadVar__2_2, (MR_Integer) 0)));

#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3975 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
        else
#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3981 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
        else
#line 34 "ops.m"
        if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3987 "ops.c"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
        else
#line 34 "ops.m"
          {
#line 34 "ops.m"
            MR_Word mercury__ops__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__ops__HeadVar__3_3, (MR_Integer) 0)));
#line 34 "ops.m"
            MR_Integer mercury__ops__V_78_78 = (MR_Integer) mercury__ops__V_67_67;
#line 34 "ops.m"
            MR_Integer mercury__ops__V_79_79 = (MR_Integer) mercury__ops__V_23_23;

#line 66 "private_builtin.opt"
            mercury__ops__succeeded = (mercury__ops__V_78_78 < mercury__ops__V_79_79);
#line 69 "private_builtin.opt"
            if (mercury__ops__succeeded)
#line 68 "private_builtin.opt"
              *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__ops__succeeded = (mercury__ops__V_78_78 == mercury__ops__V_79_79);
#line 74 "private_builtin.opt"
                if (mercury__ops__succeeded)
#line 73 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 34 "ops.m"
          }
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
    if (((MR_tag((MR_Word) mercury__ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 4080 "ops.c"
            mercury__ops__succeeded = (mercury__ops__V_9_9 == mercury__ops__V_11_11);
#line 34 "ops.m"
            if (mercury__ops__succeeded)
#line 4084 "ops.c"
              mercury__ops__succeeded = (mercury__ops__V_10_10 == mercury__ops__V_12_12);
#line 34 "ops.m"
          }
#line 34 "ops.m"
      }
#line 34 "ops.m"
    else
#line 34 "ops.m"
    if (((MR_tag((MR_Word) mercury__ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
#line 4115 "ops.c"
            mercury__ops__succeeded = (mercury__ops__V_3_3 == mercury__ops__V_5_5);
#line 34 "ops.m"
            if (mercury__ops__succeeded)
#line 4119 "ops.c"
              mercury__ops__succeeded = (mercury__ops__V_4_4 == mercury__ops__V_6_6);
#line 34 "ops.m"
          }
#line 34 "ops.m"
      }
#line 34 "ops.m"
    else
#line 34 "ops.m"
    if (((MR_tag((MR_Word) mercury__ops__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
#line 4144 "ops.c"
            mercury__ops__succeeded = (mercury__ops__V_13_13 == mercury__ops__V_14_14);
#line 34 "ops.m"
          }
#line 34 "ops.m"
      }
#line 34 "ops.m"
    else
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
#line 4167 "ops.c"
            mercury__ops__succeeded = (mercury__ops__V_7_7 == mercury__ops__V_8_8);
#line 34 "ops.m"
          }
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

#line 66 "private_builtin.opt"
    mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 < mercury__ops__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__ops__succeeded)
#line 68 "private_builtin.opt"
      *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__ops__succeeded = (mercury__ops__Cast_HeadVar1_4 == mercury__ops__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__ops__succeeded)
#line 73 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
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
#line 4236 "ops.c"
  {
#line 4238 "ops.c"
    MR_bool mercury__ops__succeeded = (mercury__ops__HeadVar__2_1 == mercury__ops__HeadVar__2_2);

#line 4241 "ops.c"
    return mercury__ops__succeeded;
#line 4243 "ops.c"
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
    if ((strcmp(mercury__ops__Op_4, (MR_String) "!") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 392 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[40];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "&") == 0))
#line 429 "ops.m"
      {
#line 395 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[1];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "*") == 0))
#line 358 "ops.m"
      {
#line 324 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[3];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "+") == 0))
#line 297 "ops.m"
      {
#line 298 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[5];
#line 300 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[7]);
#line 297 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 297 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) ",") == 0))
#line 358 "ops.m"
      {
#line 326 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[9];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "-") == 0))
#line 303 "ops.m"
      {
#line 304 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[5];
#line 306 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[11]);
#line 303 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 303 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) ".") == 0))
#line 429 "ops.m"
      {
#line 399 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[16];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "/") == 0))
#line 358 "ops.m"
      {
#line 329 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[3];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) ":") == 0))
#line 429 "ops.m"
      {
#line 401 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[18];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) ";") == 0))
#line 358 "ops.m"
      {
#line 332 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[23];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "<") == 0))
#line 358 "ops.m"
      {
#line 333 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "=") == 0))
#line 358 "ops.m"
      {
#line 335 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) ">") == 0))
#line 358 "ops.m"
      {
#line 341 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\100") == 0))
#line 429 "ops.m"
      {
#line 406 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[26];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\\") == 0))
#line 358 "ops.m"
      {
#line 358 "ops.m"
        MR_Word mercury__ops__V_243_243 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 349 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[10];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "^") == 0))
#line 315 "ops.m"
      {
#line 316 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[27];
#line 318 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[29]);
#line 315 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 315 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "~") == 0))
#line 362 "ops.m"
      {
#line 362 "ops.m"
        MR_Word mercury__ops__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]);

#line 362 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[41];
#line 363 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 362 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 362 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "!.") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 393 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[40];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "!:") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 394 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[40];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "**") == 0))
#line 358 "ops.m"
      {
#line 325 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[4];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "++") == 0))
#line 429 "ops.m"
      {
#line 396 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[8];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "--") == 0))
#line 429 "ops.m"
      {
#line 397 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[5];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "->") == 0))
#line 358 "ops.m"
      {
#line 328 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[15];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "..") == 0))
#line 429 "ops.m"
      {
#line 400 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[17];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "//") == 0))
#line 358 "ops.m"
      {
#line 330 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[3];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "/\\") == 0))
#line 358 "ops.m"
      {
#line 331 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[5];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) ":-") == 0))
#line 309 "ops.m"
      {
#line 310 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[14];
#line 312 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[20]);
#line 309 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 309 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "::") == 0))
#line 429 "ops.m"
      {
#line 402 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[21];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) ":=") == 0))
#line 429 "ops.m"
      {
#line 403 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[22];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "<<") == 0))
#line 358 "ops.m"
      {
#line 334 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[3];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "<=") == 0))
#line 388 "ops.m"
      {
#line 376 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[25];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "=<") == 0))
#line 358 "ops.m"
      {
#line 338 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "==") == 0))
#line 358 "ops.m"
      {
#line 339 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "=>") == 0))
#line 388 "ops.m"
      {
#line 378 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[25];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "=^") == 0))
#line 429 "ops.m"
      {
#line 405 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[22];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) ">=") == 0))
#line 358 "ops.m"
      {
#line 342 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) ">>") == 0))
#line 358 "ops.m"
      {
#line 343 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[3];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\?-") == 0))
#line 358 "ops.m"
      {
#line 358 "ops.m"
        MR_Word mercury__ops__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 344 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[19];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\100<") == 0))
#line 358 "ops.m"
      {
#line 345 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\100>") == 0))
#line 358 "ops.m"
      {
#line 347 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\\+") == 0))
#line 358 "ops.m"
      {
#line 358 "ops.m"
        MR_Word mercury__ops__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]);

#line 350 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[41];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\\/") == 0))
#line 358 "ops.m"
      {
#line 351 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[5];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\\=") == 0))
#line 358 "ops.m"
      {
#line 352 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "if") == 0))
#line 388 "ops.m"
      {
#line 388 "ops.m"
        MR_Word mercury__ops__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 381 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[42];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "is") == 0))
#line 358 "ops.m"
      {
#line 355 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[35];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "or") == 0))
#line 372 "ops.m"
      {
#line 368 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[37];
#line 373 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 372 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "~=") == 0))
#line 372 "ops.m"
      {
#line 366 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 373 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 372 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "-->") == 0))
#line 358 "ops.m"
      {
#line 327 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[14];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "<=>") == 0))
#line 388 "ops.m"
      {
#line 377 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[25];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "=..") == 0))
#line 358 "ops.m"
      {
#line 336 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "=:=") == 0))
#line 358 "ops.m"
      {
#line 337 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "==>") == 0))
#line 429 "ops.m"
      {
#line 404 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[21];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "=\\=") == 0))
#line 358 "ops.m"
      {
#line 340 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\100=<") == 0))
#line 358 "ops.m"
      {
#line 346 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\100>=") == 0))
#line 358 "ops.m"
      {
#line 348 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "\\==") == 0))
#line 358 "ops.m"
      {
#line 353 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[24];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "all") == 0))
#line 388 "ops.m"
      {
#line 379 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[30];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "and") == 0))
#line 372 "ops.m"
      {
#line 367 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[31];
#line 373 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 372 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "div") == 0))
#line 358 "ops.m"
      {
#line 354 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[3];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "mod") == 0))
#line 358 "ops.m"
      {
#line 356 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[36];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "not") == 0))
#line 388 "ops.m"
      {
#line 388 "ops.m"
        MR_Word mercury__ops__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]);

#line 386 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[41];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "rem") == 0))
#line 358 "ops.m"
      {
#line 357 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[36];
#line 359 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 358 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "--->") == 0))
#line 429 "ops.m"
      {
#line 398 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[12];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "else") == 0))
#line 388 "ops.m"
      {
#line 383 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[34];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "func") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 412 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[43];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "inst") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 418 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "mode") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 420 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "pred") == 0))
#line 388 "ops.m"
      {
#line 388 "ops.m"
        MR_Word mercury__ops__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 387 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[43];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "rule") == 0))
#line 372 "ops.m"
      {
#line 372 "ops.m"
        MR_Word mercury__ops__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 369 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 373 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 372 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "some") == 0))
#line 388 "ops.m"
      {
#line 380 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[30];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "then") == 0))
#line 388 "ops.m"
      {
#line 382 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[38];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "type") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 426 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[45];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "when") == 0))
#line 372 "ops.m"
      {
#line 370 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[39];
#line 373 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 372 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "catch") == 0))
#line 388 "ops.m"
      {
#line 384 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[32];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "event") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 409 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[28];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "where") == 0))
#line 372 "ops.m"
      {
#line 371 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[21];
#line 373 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 372 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 372 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "impure") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]);

#line 414 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[46];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "module") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 421 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "pragma") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 422 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "solver") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]);

#line 425 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[47];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "or_else") == 0))
#line 429 "ops.m"
      {
#line 407 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[23];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "promise") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 423 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "finalise") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 410 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "finalize") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 411 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "instance") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 419 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "semipure") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]);

#line 424 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[46];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "catch_any") == 0))
#line 388 "ops.m"
      {
#line 385 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[33];
#line 389 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 388 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "typeclass") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 427 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "end_module") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 408 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "initialise") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 416 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "initialize") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 417 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "use_module") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 428 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "import_module") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 413 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((strcmp(mercury__ops__Op_4, (MR_String) "include_module") == 0))
#line 429 "ops.m"
      {
#line 429 "ops.m"
        MR_Word mercury__ops__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 415 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[44];
#line 430 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 429 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((((((strcmp(mercury__ops__Op_4, (MR_String) "promise_exclusive") == 0)) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_exclusive_exhaustive") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_exhaustive") == 0))))
#line 454 "ops.m"
      {
#line 454 "ops.m"
        MR_Word mercury__ops__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]);

#line 455 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[48];
#line 456 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 454 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 454 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((((((((((((((((((((((strcmp(mercury__ops__Op_4, (MR_String) "promise_impure") == 0)) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_pure") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_semipure") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_cc_multi") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_cc_nondet") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_det") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_erroneous") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_failure") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_multi") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_nondet") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_semidet") == 0))))
#line 469 "ops.m"
      {
#line 469 "ops.m"
        MR_Word mercury__ops__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 470 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[49];
#line 471 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 469 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
    if ((((((((((((((((((((((((((((((strcmp(mercury__ops__Op_4, (MR_String) "arbitrary") == 0)) || ((strcmp(mercury__ops__Op_4, (MR_String) "atomic") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_equivalent_solution_sets") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_equivalent_solutions") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_complete_switch") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_switch_arms_cc_multi") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_switch_arms_cc_nondet") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_switch_arms_det") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_switch_arms_erroneous") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_switch_arms_failure") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_switch_arms_multi") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_switch_arms_nondet") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_switch_arms_semidet") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "trace") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "try") == 0))))
#line 447 "ops.m"
      {
#line 448 "ops.m"
        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[30];
#line 449 "ops.m"
        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 447 "ops.m"
        mercury__ops__succeeded = MR_TRUE;
#line 447 "ops.m"
      }
#line 297 "ops.m"
    else
#line 297 "ops.m"
      mercury__ops__succeeded = MR_FALSE;
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
    if ((mercury__ops__HeadVar__2_2 == (MR_Integer) 0))
#line 479 "ops.m"
      {
#line 479 "ops.m"
        *mercury__ops__HeadVar__3_3 = (mercury__ops__Priority_1 - (MR_Integer) 1);
#line 479 "ops.m"
      }
#line 478 "ops.m"
    else
#line 478 "ops.m"
      *mercury__ops__HeadVar__3_3 = mercury__ops__Priority_1;
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
#line 6036 "ops.c"
  {
#line 6038 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6040 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6042 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 13)));
#line 6044 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6047 "ops.c"
    {
#line 6049 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6052 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6054 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6056 "ops.c"
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
#line 6070 "ops.c"
  {
#line 6072 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6074 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6076 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6078 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6081 "ops.c"
    {
#line 6083 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6086 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6088 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6090 "ops.c"
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
#line 6110 "ops.c"
  {
#line 6112 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6114 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 11)));
#line 6116 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__2_2;
#line 6118 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6120 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6123 "ops.c"
    {
#line 6125 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, &mercury__ops__conv3_HeadVar__2_2, &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6128 "ops.c"
    if (mercury__ops__succeeded)
#line 6130 "ops.c"
      {
#line 6132 "ops.c"
        *mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv3_HeadVar__2_2);
#line 6134 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6136 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6138 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6140 "ops.c"
      }
#line 6142 "ops.c"
    return mercury__ops__succeeded;
#line 6144 "ops.c"
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
#line 6164 "ops.c"
  {
#line 6166 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6168 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 10)));
#line 6170 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6172 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6175 "ops.c"
    {
#line 6177 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6180 "ops.c"
    if (mercury__ops__succeeded)
#line 6182 "ops.c"
      {
#line 6184 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6186 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6188 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6190 "ops.c"
      }
#line 6192 "ops.c"
    return mercury__ops__succeeded;
#line 6194 "ops.c"
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
#line 6210 "ops.c"
  {
#line 6212 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6214 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 9)));

#line 6217 "ops.c"
    {
#line 6219 "ops.c"
      return mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)));
    }
#line 6222 "ops.c"
    return mercury__ops__succeeded;
#line 6224 "ops.c"
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
#line 6244 "ops.c"
  {
#line 6246 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6248 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 8)));
#line 6250 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6252 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6255 "ops.c"
    {
#line 6257 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6260 "ops.c"
    if (mercury__ops__succeeded)
#line 6262 "ops.c"
      {
#line 6264 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6266 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6268 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6270 "ops.c"
      }
#line 6272 "ops.c"
    return mercury__ops__succeeded;
#line 6274 "ops.c"
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
#line 6296 "ops.c"
  {
#line 6298 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6300 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 7)));
#line 6302 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6304 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6306 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6309 "ops.c"
    {
#line 6311 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6314 "ops.c"
    if (mercury__ops__succeeded)
#line 6316 "ops.c"
      {
#line 6318 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6320 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6322 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6324 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6326 "ops.c"
      }
#line 6328 "ops.c"
    return mercury__ops__succeeded;
#line 6330 "ops.c"
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
#line 6350 "ops.c"
  {
#line 6352 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6354 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6356 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6358 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6361 "ops.c"
    {
#line 6363 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6366 "ops.c"
    if (mercury__ops__succeeded)
#line 6368 "ops.c"
      {
#line 6370 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6372 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6374 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6376 "ops.c"
      }
#line 6378 "ops.c"
    return mercury__ops__succeeded;
#line 6380 "ops.c"
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
#line 6402 "ops.c"
  {
#line 6404 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6406 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6408 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6410 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6412 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6415 "ops.c"
    {
#line 6417 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6420 "ops.c"
    if (mercury__ops__succeeded)
#line 6422 "ops.c"
      {
#line 6424 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6426 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6428 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6430 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6432 "ops.c"
      }
#line 6434 "ops.c"
    return mercury__ops__succeeded;
#line 6436 "ops.c"
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
