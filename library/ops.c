/*
** Automatically generated from `ops.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 90 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0;

#line 93 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1;

#line 96 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2];

#line 99 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2];

#line 102 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2];

#line 105 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2];

#line 108 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_0;

#line 111 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1];

#line 114 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_1;

#line 117 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2];

#line 120 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_2;

#line 123 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1];

#line 126 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_3;

#line 129 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1];

#line 132 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1];

#line 135 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1];

#line 138 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1];

#line 141 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_class_0[4];

#line 144 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4];

#line 147 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4];

#line 150 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0;

#line 153 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1];

#line 156 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1];

#line 159 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1];

#line 162 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2];

#line 165 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_op_info_0_0;

#line 168 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1];

#line 171 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1];

#line 174 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1];

#line 177 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1];

#line 180 "ops.c"
static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1];

#line 183 "ops.c"
static const MR_TypeClassMethod mercury__ops__ops__type_class_id_method_ids_op_table_1[9];

#line 186 "ops.c"
static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1;

#line 189 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
#line 192 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 194 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 197 "ops.c"
static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
#line 200 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 202 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 204 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 207 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
#line 210 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 212 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 215 "ops.c"
static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
#line 218 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 220 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 222 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 225 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
#line 228 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 230 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 233 "ops.c"
static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
#line 236 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 238 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 240 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 243 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0_10001(
#line 246 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 248 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 251 "ops.c"
static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
#line 254 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 256 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 258 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 261 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
#line 264 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 266 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 269 "ops.c"
static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
#line 272 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 274 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 276 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 279 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
#line 282 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 284 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 287 "ops.c"
static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
#line 290 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 292 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 294 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 297 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
#line 300 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 302 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 304 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 306 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 308 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 310 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5);

#line 313 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
#line 316 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 318 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 320 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 322 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 324 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 327 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
#line 330 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 332 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 334 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 336 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 338 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 340 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5);

#line 343 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
#line 346 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 348 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 350 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 352 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 354 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 357 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
#line 360 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 362 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 364 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 367 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
#line 370 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 372 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 374 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 376 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 378 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 381 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
#line 384 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 386 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 388 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_2,
#line 390 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 392 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 395 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
#line 398 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 400 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1);

#line 403 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
#line 406 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 408 "ops.c"
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



#line 1053 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0 = {
  (MR_String) "x",
  (MR_Integer) 0
};

#line 1059 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1 = {
  (MR_String) "y",
  (MR_Integer) 1
};

#line 1065 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1071 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1077 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1083 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_assoc_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__ops____Unify____assoc_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____assoc_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "assoc",
  {
    mercury__ops__ops__enum_name_ordered_assoc_0
  },
  {
    mercury__ops__ops__enum_value_ordered_assoc_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__ops__ops__functor_number_map_assoc_0
};

#line 1104 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1110 "ops.c"
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

#line 1125 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1130 "ops.c"
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

#line 1145 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1151 "ops.c"
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

#line 1166 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1171 "ops.c"
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

#line 1186 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_0
};

#line 1191 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1196 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_2
};

#line 1201 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_3
};

#line 1206 "ops.c"
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

#line 1230 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4] = {
  &mercury__ops__ops__du_functor_desc_class_0_2,
  &mercury__ops__ops__du_functor_desc_class_0_0,
  &mercury__ops__ops__du_functor_desc_class_0_3,
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1238 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1246 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____class_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____class_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "class",
  {
    mercury__ops__ops__du_name_ordered_class_0
  },
  {
    mercury__ops__ops__du_ptag_ordered_class_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__ops__ops__functor_number_map_class_0
};

#line 1267 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0 = {
  (MR_String) "mercury_op_table",
  (MR_Integer) 0
};

#line 1273 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1278 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1283 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1] = {
  (MR_Integer) 0
};

#line 1288 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_mercury_op_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__ops____Unify____mercury_op_table_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____mercury_op_table_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "mercury_op_table",
  {
    mercury__ops__ops__enum_name_ordered_mercury_op_table_0
  },
  {
    mercury__ops__ops__enum_value_ordered_mercury_op_table_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__ops__ops__functor_number_map_mercury_op_table_0
};

#line 1309 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1315 "ops.c"
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

#line 1330 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1335 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_op_info_0_0
  }
};

#line 1344 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1349 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1] = {
  (MR_Integer) 0
};

#line 1354 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_op_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____op_info_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____op_info_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "op_info",
  {
    mercury__ops__ops__du_name_ordered_op_info_0
  },
  {
    mercury__ops__ops__du_ptag_ordered_op_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__ops__ops__functor_number_map_op_info_0
};

#line 1375 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_priority_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__ops____Unify____priority_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____priority_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "priority",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1396 "ops.c"
const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__ops____Unify____table_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____table_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_mercury_op_table_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1417 "ops.c"
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

#line 1435 "ops.c"
static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1] = {
  (MR_String) "Table"
};

#line 1440 "ops.c"
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

#line 1489 "ops.c"
static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1 = {
  (MR_String) "ops",
  (MR_String) "op_table",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 9,
  mercury__ops__ops__type_class_id_var_names_op_table_1,
  mercury__ops__ops__type_class_id_method_ids_op_table_1
};

#line 1500 "ops.c"
const MR_TypeClassDeclStruct mercury__ops__ops__type_class_decl_op_table_1 = {
  &mercury__ops__ops__type_class_id_op_table_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1508 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
#line 1511 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1513 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1515 "ops.c"
{
#line 1517 "ops.c"
  {
#line 1519 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1522 "ops.c"
    {
#line 1524 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____assoc_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1527 "ops.c"
    return mercury__ops__succeeded;
#line 1529 "ops.c"
  }
#line 1531 "ops.c"
}

#line 1534 "ops.c"
static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
#line 1537 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1539 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1541 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1543 "ops.c"
{
#line 1545 "ops.c"
  {
#line 1547 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1550 "ops.c"
    {
#line 1552 "ops.c"
      mercury__ops____Compare____assoc_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1555 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1557 "ops.c"
  }
#line 1559 "ops.c"
}

#line 1562 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
#line 1565 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1567 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1569 "ops.c"
{
#line 1571 "ops.c"
  {
#line 1573 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1576 "ops.c"
    {
#line 1578 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____class_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1581 "ops.c"
    return mercury__ops__succeeded;
#line 1583 "ops.c"
  }
#line 1585 "ops.c"
}

#line 1588 "ops.c"
static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
#line 1591 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1593 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1595 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1597 "ops.c"
{
#line 1599 "ops.c"
  {
#line 1601 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1604 "ops.c"
    {
#line 1606 "ops.c"
      mercury__ops____Compare____class_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1609 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1611 "ops.c"
  }
#line 1613 "ops.c"
}

#line 1616 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
#line 1619 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1621 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1623 "ops.c"
{
#line 1625 "ops.c"
  {
#line 1627 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1630 "ops.c"
    {
#line 1632 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____mercury_op_table_0_0();
    }
#line 1635 "ops.c"
    return mercury__ops__succeeded;
#line 1637 "ops.c"
  }
#line 1639 "ops.c"
}

#line 1642 "ops.c"
static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
#line 1645 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1647 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1649 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1651 "ops.c"
{
#line 1653 "ops.c"
  {
#line 1655 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1658 "ops.c"
    {
#line 1660 "ops.c"
      mercury__ops____Compare____mercury_op_table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 1663 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1665 "ops.c"
  }
#line 1667 "ops.c"
}

#line 1670 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0_10001(
#line 1673 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1675 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1677 "ops.c"
{
#line 1679 "ops.c"
  {
#line 1681 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1684 "ops.c"
    {
#line 1686 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____op_info_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1689 "ops.c"
    return mercury__ops__succeeded;
#line 1691 "ops.c"
  }
#line 1693 "ops.c"
}

#line 1696 "ops.c"
static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
#line 1699 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1701 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1703 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1705 "ops.c"
{
#line 1707 "ops.c"
  {
#line 1709 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1712 "ops.c"
    {
#line 1714 "ops.c"
      mercury__ops____Compare____op_info_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1717 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1719 "ops.c"
  }
#line 1721 "ops.c"
}

#line 1724 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
#line 1727 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1729 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1731 "ops.c"
{
#line 1733 "ops.c"
  {
#line 1735 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1738 "ops.c"
    {
#line 1740 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____priority_0_0(((MR_Integer) mercury__ops__wrapper_arg_1), ((MR_Integer) mercury__ops__wrapper_arg_2));
    }
#line 1743 "ops.c"
    return mercury__ops__succeeded;
#line 1745 "ops.c"
  }
#line 1747 "ops.c"
}

#line 1750 "ops.c"
static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
#line 1753 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1755 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1757 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1759 "ops.c"
{
#line 1761 "ops.c"
  {
#line 1763 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1766 "ops.c"
    {
#line 1768 "ops.c"
      mercury__ops____Compare____priority_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Integer) mercury__ops__wrapper_arg_2), ((MR_Integer) mercury__ops__wrapper_arg_3));
    }
#line 1771 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1773 "ops.c"
  }
#line 1775 "ops.c"
}

#line 1778 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
#line 1781 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1783 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1785 "ops.c"
{
#line 1787 "ops.c"
  {
#line 1789 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1792 "ops.c"
    {
#line 1794 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____table_0_0();
    }
#line 1797 "ops.c"
    return mercury__ops__succeeded;
#line 1799 "ops.c"
  }
#line 1801 "ops.c"
}

#line 1804 "ops.c"
static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
#line 1807 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1809 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1811 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1813 "ops.c"
{
#line 1815 "ops.c"
  {
#line 1817 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1820 "ops.c"
    {
#line 1822 "ops.c"
      mercury__ops____Compare____table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 1825 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1827 "ops.c"
  }
#line 1829 "ops.c"
}

#line 1832 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
#line 1835 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1837 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1839 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1841 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1843 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 1845 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 1847 "ops.c"
{
#line 1849 "ops.c"
  {
#line 1851 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1853 "ops.c"
    MR_Box mercury__ops__closure;
#line 1855 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 1857 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 1859 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 1862 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 1864 "ops.c"
    {
#line 1866 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 1869 "ops.c"
    if (mercury__ops__succeeded)
#line 1871 "ops.c"
      {
#line 1873 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 1875 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 1877 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 1879 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 1881 "ops.c"
      }
#line 1883 "ops.c"
    return mercury__ops__succeeded;
#line 1885 "ops.c"
  }
#line 1887 "ops.c"
}

#line 1890 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
#line 1893 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1895 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1897 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1899 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1901 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 1903 "ops.c"
{
#line 1905 "ops.c"
  {
#line 1907 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1909 "ops.c"
    MR_Box mercury__ops__closure;
#line 1911 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 1913 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 1916 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 1918 "ops.c"
    {
#line 1920 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 1923 "ops.c"
    if (mercury__ops__succeeded)
#line 1925 "ops.c"
      {
#line 1927 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 1929 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 1931 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 1933 "ops.c"
      }
#line 1935 "ops.c"
    return mercury__ops__succeeded;
#line 1937 "ops.c"
  }
#line 1939 "ops.c"
}

#line 1942 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
#line 1945 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1947 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1949 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1951 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1953 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 1955 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 1957 "ops.c"
{
#line 1959 "ops.c"
  {
#line 1961 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1963 "ops.c"
    MR_Box mercury__ops__closure;
#line 1965 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 1967 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 1969 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 1972 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 1974 "ops.c"
    {
#line 1976 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 1979 "ops.c"
    if (mercury__ops__succeeded)
#line 1981 "ops.c"
      {
#line 1983 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 1985 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 1987 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 1989 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 1991 "ops.c"
      }
#line 1993 "ops.c"
    return mercury__ops__succeeded;
#line 1995 "ops.c"
  }
#line 1997 "ops.c"
}

#line 2000 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
#line 2003 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2005 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2007 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2009 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2011 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2013 "ops.c"
{
#line 2015 "ops.c"
  {
#line 2017 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2019 "ops.c"
    MR_Box mercury__ops__closure;
#line 2021 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 2023 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2026 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2028 "ops.c"
    {
#line 2030 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2033 "ops.c"
    if (mercury__ops__succeeded)
#line 2035 "ops.c"
      {
#line 2037 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2039 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2041 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2043 "ops.c"
      }
#line 2045 "ops.c"
    return mercury__ops__succeeded;
#line 2047 "ops.c"
  }
#line 2049 "ops.c"
}

#line 2052 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
#line 2055 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2057 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2059 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2061 "ops.c"
{
#line 2063 "ops.c"
  {
#line 2065 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2067 "ops.c"
    MR_Box mercury__ops__closure;

#line 2070 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2072 "ops.c"
    {
#line 2074 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0(((MR_String) mercury__ops__wrapper_arg_2));
    }
#line 2077 "ops.c"
    return mercury__ops__succeeded;
#line 2079 "ops.c"
  }
#line 2081 "ops.c"
}

#line 2084 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
#line 2087 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2089 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2091 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2093 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2095 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2097 "ops.c"
{
#line 2099 "ops.c"
  {
#line 2101 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2103 "ops.c"
    MR_Box mercury__ops__closure;
#line 2105 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2107 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2110 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2112 "ops.c"
    {
#line 2114 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2117 "ops.c"
    if (mercury__ops__succeeded)
#line 2119 "ops.c"
      {
#line 2121 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2123 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2125 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2127 "ops.c"
      }
#line 2129 "ops.c"
    return mercury__ops__succeeded;
#line 2131 "ops.c"
  }
#line 2133 "ops.c"
}

#line 2136 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
#line 2139 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2141 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2143 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_2,
#line 2145 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2147 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2149 "ops.c"
{
#line 2151 "ops.c"
  {
#line 2153 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2155 "ops.c"
    MR_Box mercury__ops__closure;
#line 2157 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__2_2;
#line 2159 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2161 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2164 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2166 "ops.c"
    {
#line 2168 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0(&mercury__ops__conv2_HeadVar__2_2, &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2171 "ops.c"
    if (mercury__ops__succeeded)
#line 2173 "ops.c"
      {
#line 2175 "ops.c"
        *mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv2_HeadVar__2_2));
#line 2177 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2179 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2181 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2183 "ops.c"
      }
#line 2185 "ops.c"
    return mercury__ops__succeeded;
#line 2187 "ops.c"
  }
#line 2189 "ops.c"
}

#line 2192 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
#line 2195 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2197 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2199 "ops.c"
{
#line 2201 "ops.c"
  {
#line 2203 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2205 "ops.c"
    MR_Box mercury__ops__closure;
#line 2207 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2210 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2212 "ops.c"
    {
#line 2214 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0();
    }
#line 2217 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2219 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2221 "ops.c"
  }
#line 2223 "ops.c"
}

#line 2226 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
#line 2229 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2231 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2233 "ops.c"
{
#line 2235 "ops.c"
  {
#line 2237 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2239 "ops.c"
    MR_Box mercury__ops__closure;
#line 2241 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2244 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2246 "ops.c"
    {
#line 2248 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0();
    }
#line 2251 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2253 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2255 "ops.c"
  }
#line 2257 "ops.c"
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
#line 3515 "ops.c"
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
#line 3537 "ops.c"
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

#line 3617 "ops.c"
        {
#line 3619 "ops.c"
          mercury__ops__succeeded = mercury__ops____Unify____class_0_0(mercury__ops__V_3_3, mercury__ops__V_5_5);
        }
#line 57 "ops.m"
        if (mercury__ops__succeeded)
#line 3624 "ops.c"
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
#line 3705 "ops.c"
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
#line 3755 "ops.c"
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
#line 3802 "ops.c"
              *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
            else
#line 34 "ops.m"
              if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3808 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
              else
#line 3812 "ops.c"
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
#line 3829 "ops.c"
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
#line 3870 "ops.c"
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
#line 3917 "ops.c"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                else
#line 3921 "ops.c"
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
#line 3936 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
              else
#line 34 "ops.m"
                if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3942 "ops.c"
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
#line 3983 "ops.c"
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
#line 3996 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
              else
#line 34 "ops.m"
                if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4002 "ops.c"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                else
#line 34 "ops.m"
                  if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4008 "ops.c"
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
#line 4101 "ops.c"
              mercury__ops__succeeded = (mercury__ops__V_9_9 == mercury__ops__V_11_11);
#line 34 "ops.m"
              if (mercury__ops__succeeded)
#line 4105 "ops.c"
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
#line 4136 "ops.c"
                mercury__ops__succeeded = (mercury__ops__V_3_3 == mercury__ops__V_5_5);
#line 34 "ops.m"
                if (mercury__ops__succeeded)
#line 4140 "ops.c"
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
#line 4165 "ops.c"
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
#line 4188 "ops.c"
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
#line 4257 "ops.c"
  {
#line 4259 "ops.c"
    MR_bool mercury__ops__succeeded = (mercury__ops__HeadVar__2_1 == mercury__ops__HeadVar__2_2);

#line 4262 "ops.c"
    return mercury__ops__succeeded;
#line 4264 "ops.c"
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
#line 6057 "ops.c"
  {
#line 6059 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6061 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6063 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 13)));
#line 6065 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6068 "ops.c"
    {
#line 6070 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6073 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6075 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6077 "ops.c"
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
#line 6091 "ops.c"
  {
#line 6093 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6095 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6097 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6099 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6102 "ops.c"
    {
#line 6104 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6107 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6109 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6111 "ops.c"
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
#line 6131 "ops.c"
  {
#line 6133 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6135 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 11)));
#line 6137 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__2_2;
#line 6139 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6141 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6144 "ops.c"
    {
#line 6146 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, &mercury__ops__conv3_HeadVar__2_2, &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6149 "ops.c"
    if (mercury__ops__succeeded)
#line 6151 "ops.c"
      {
#line 6153 "ops.c"
        *mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv3_HeadVar__2_2);
#line 6155 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6157 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6159 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6161 "ops.c"
      }
#line 6163 "ops.c"
    return mercury__ops__succeeded;
#line 6165 "ops.c"
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
#line 6185 "ops.c"
  {
#line 6187 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6189 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 10)));
#line 6191 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6193 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6196 "ops.c"
    {
#line 6198 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6201 "ops.c"
    if (mercury__ops__succeeded)
#line 6203 "ops.c"
      {
#line 6205 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6207 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6209 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6211 "ops.c"
      }
#line 6213 "ops.c"
    return mercury__ops__succeeded;
#line 6215 "ops.c"
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
#line 6231 "ops.c"
  {
#line 6233 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6235 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 9)));

#line 6238 "ops.c"
    {
#line 6240 "ops.c"
      return mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)));
    }
#line 6243 "ops.c"
    return mercury__ops__succeeded;
#line 6245 "ops.c"
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
#line 6265 "ops.c"
  {
#line 6267 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6269 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 8)));
#line 6271 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6273 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6276 "ops.c"
    {
#line 6278 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6281 "ops.c"
    if (mercury__ops__succeeded)
#line 6283 "ops.c"
      {
#line 6285 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6287 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6289 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6291 "ops.c"
      }
#line 6293 "ops.c"
    return mercury__ops__succeeded;
#line 6295 "ops.c"
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
#line 6317 "ops.c"
  {
#line 6319 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6321 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 7)));
#line 6323 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6325 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6327 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6330 "ops.c"
    {
#line 6332 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6335 "ops.c"
    if (mercury__ops__succeeded)
#line 6337 "ops.c"
      {
#line 6339 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6341 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6343 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6345 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6347 "ops.c"
      }
#line 6349 "ops.c"
    return mercury__ops__succeeded;
#line 6351 "ops.c"
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
#line 6371 "ops.c"
  {
#line 6373 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6375 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6377 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6379 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6382 "ops.c"
    {
#line 6384 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6387 "ops.c"
    if (mercury__ops__succeeded)
#line 6389 "ops.c"
      {
#line 6391 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6393 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6395 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6397 "ops.c"
      }
#line 6399 "ops.c"
    return mercury__ops__succeeded;
#line 6401 "ops.c"
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
#line 6423 "ops.c"
  {
#line 6425 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6427 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6429 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6431 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6433 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6436 "ops.c"
    {
#line 6438 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6441 "ops.c"
    if (mercury__ops__succeeded)
#line 6443 "ops.c"
      {
#line 6445 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6447 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6449 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6451 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6453 "ops.c"
      }
#line 6455 "ops.c"
    return mercury__ops__succeeded;
#line 6457 "ops.c"
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
