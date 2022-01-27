/*
** Automatically generated from `ops.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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




#line 85 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0;

#line 88 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1;

#line 91 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2];

#line 94 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2];

#line 97 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2];

#line 100 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2];

#line 103 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_0;

#line 106 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1];

#line 109 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_1;

#line 112 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2];

#line 115 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_2;

#line 118 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1];

#line 121 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_3;

#line 124 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1];

#line 127 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1];

#line 130 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1];

#line 133 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1];

#line 136 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_class_0[4];

#line 139 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4];

#line 142 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4];

#line 145 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0;

#line 148 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1];

#line 151 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1];

#line 154 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1];

#line 157 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2];

#line 160 "ops.c"
static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_op_info_0_0;

#line 163 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1];

#line 166 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1];

#line 169 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1];

#line 172 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1];

#line 175 "ops.c"
static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1];

#line 178 "ops.c"
static const MR_TypeClassMethod mercury__ops__ops__type_class_id_method_ids_op_table_1[9];

#line 181 "ops.c"
static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1;

#line 184 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
#line 187 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 189 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 192 "ops.c"
static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
#line 195 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 197 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 199 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 202 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
#line 205 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 207 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 210 "ops.c"
static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
#line 213 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 215 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 217 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 220 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
#line 223 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 225 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 228 "ops.c"
static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
#line 231 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 233 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 235 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 238 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0_10001(
#line 241 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 243 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 246 "ops.c"
static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
#line 249 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 251 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 253 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 256 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
#line 259 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 261 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 264 "ops.c"
static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
#line 267 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 269 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 271 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 274 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
#line 277 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 279 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 282 "ops.c"
static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
#line 285 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 287 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 289 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3);

#line 292 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
#line 295 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 297 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 299 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 301 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 303 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 305 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5);

#line 308 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
#line 311 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 313 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 315 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 317 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 319 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 322 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
#line 325 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 327 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 329 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 331 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 333 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 335 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5);

#line 338 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
#line 341 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 343 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 345 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 347 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 349 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 352 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
#line 355 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 357 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 359 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2);

#line 362 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
#line 365 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 367 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 369 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 371 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 373 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 376 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
#line 379 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 381 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 383 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_2,
#line 385 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 387 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4);

#line 390 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
#line 393 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 395 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1);

#line 398 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
#line 401 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 403 "ops.c"
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
#include "type_desc.mh"
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



#line 1046 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0 = {
  (MR_String) "x",
  (MR_Integer) 0
};

#line 1052 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1 = {
  (MR_String) "y",
  (MR_Integer) 1
};

#line 1058 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1064 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

#line 1070 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1076 "ops.c"
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

#line 1097 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1103 "ops.c"
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

#line 1118 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1123 "ops.c"
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

#line 1138 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0,
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1144 "ops.c"
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

#line 1159 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_assoc_0
};

#line 1164 "ops.c"
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

#line 1179 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_0
};

#line 1184 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1189 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_2
};

#line 1194 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_3
};

#line 1199 "ops.c"
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

#line 1223 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4] = {
  &mercury__ops__ops__du_functor_desc_class_0_2,
  &mercury__ops__ops__du_functor_desc_class_0_0,
  &mercury__ops__ops__du_functor_desc_class_0_3,
  &mercury__ops__ops__du_functor_desc_class_0_1
};

#line 1231 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1239 "ops.c"
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

#line 1260 "ops.c"
static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0 = {
  (MR_String) "mercury_op_table",
  (MR_Integer) 0
};

#line 1266 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1271 "ops.c"
static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

#line 1276 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1] = {
  (MR_Integer) 0
};

#line 1281 "ops.c"
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

#line 1302 "ops.c"
static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__ops__ops__type_ctor_info_class_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1308 "ops.c"
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

#line 1323 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1328 "ops.c"
static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_op_info_0_0
  }
};

#line 1337 "ops.c"
static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

#line 1342 "ops.c"
static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1] = {
  (MR_Integer) 0
};

#line 1347 "ops.c"
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

#line 1368 "ops.c"
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

#line 1389 "ops.c"
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

#line 1410 "ops.c"
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

#line 1428 "ops.c"
static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1] = {
  (MR_String) "Table"
};

#line 1433 "ops.c"
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

#line 1482 "ops.c"
static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1 = {
  (MR_String) "ops",
  (MR_String) "op_table",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 9,
  mercury__ops__ops__type_class_id_var_names_op_table_1,
  mercury__ops__ops__type_class_id_method_ids_op_table_1
};

#line 1493 "ops.c"
const MR_TypeClassDeclStruct mercury__ops__ops__type_class_decl_op_table_1 = {
  &mercury__ops__ops__type_class_id_op_table_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 1501 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
#line 1504 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1506 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1508 "ops.c"
{
#line 1510 "ops.c"
  {
#line 1512 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1515 "ops.c"
    {
#line 1517 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____assoc_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1520 "ops.c"
    return mercury__ops__succeeded;
#line 1522 "ops.c"
  }
#line 1524 "ops.c"
}

#line 1527 "ops.c"
static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
#line 1530 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1532 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1534 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1536 "ops.c"
{
#line 1538 "ops.c"
  {
#line 1540 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1543 "ops.c"
    {
#line 1545 "ops.c"
      mercury__ops____Compare____assoc_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1548 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1550 "ops.c"
  }
#line 1552 "ops.c"
}

#line 1555 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
#line 1558 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1560 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1562 "ops.c"
{
#line 1564 "ops.c"
  {
#line 1566 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1569 "ops.c"
    {
#line 1571 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____class_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1574 "ops.c"
    return mercury__ops__succeeded;
#line 1576 "ops.c"
  }
#line 1578 "ops.c"
}

#line 1581 "ops.c"
static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
#line 1584 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1586 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1588 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1590 "ops.c"
{
#line 1592 "ops.c"
  {
#line 1594 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1597 "ops.c"
    {
#line 1599 "ops.c"
      mercury__ops____Compare____class_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1602 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1604 "ops.c"
  }
#line 1606 "ops.c"
}

#line 1609 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
#line 1612 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1614 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1616 "ops.c"
{
#line 1618 "ops.c"
  {
#line 1620 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1623 "ops.c"
    {
#line 1625 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____mercury_op_table_0_0();
    }
#line 1628 "ops.c"
    return mercury__ops__succeeded;
#line 1630 "ops.c"
  }
#line 1632 "ops.c"
}

#line 1635 "ops.c"
static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
#line 1638 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1640 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1642 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1644 "ops.c"
{
#line 1646 "ops.c"
  {
#line 1648 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1651 "ops.c"
    {
#line 1653 "ops.c"
      mercury__ops____Compare____mercury_op_table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 1656 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1658 "ops.c"
  }
#line 1660 "ops.c"
}

#line 1663 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0_10001(
#line 1666 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1668 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1670 "ops.c"
{
#line 1672 "ops.c"
  {
#line 1674 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1677 "ops.c"
    {
#line 1679 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____op_info_0_0(((MR_Word) mercury__ops__wrapper_arg_1), ((MR_Word) mercury__ops__wrapper_arg_2));
    }
#line 1682 "ops.c"
    return mercury__ops__succeeded;
#line 1684 "ops.c"
  }
#line 1686 "ops.c"
}

#line 1689 "ops.c"
static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
#line 1692 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1694 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1696 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1698 "ops.c"
{
#line 1700 "ops.c"
  {
#line 1702 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1705 "ops.c"
    {
#line 1707 "ops.c"
      mercury__ops____Compare____op_info_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Word) mercury__ops__wrapper_arg_2), ((MR_Word) mercury__ops__wrapper_arg_3));
    }
#line 1710 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1712 "ops.c"
  }
#line 1714 "ops.c"
}

#line 1717 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
#line 1720 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1722 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1724 "ops.c"
{
#line 1726 "ops.c"
  {
#line 1728 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1731 "ops.c"
    {
#line 1733 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____priority_0_0(((MR_Integer) mercury__ops__wrapper_arg_1), ((MR_Integer) mercury__ops__wrapper_arg_2));
    }
#line 1736 "ops.c"
    return mercury__ops__succeeded;
#line 1738 "ops.c"
  }
#line 1740 "ops.c"
}

#line 1743 "ops.c"
static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
#line 1746 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1748 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1750 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1752 "ops.c"
{
#line 1754 "ops.c"
  {
#line 1756 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1759 "ops.c"
    {
#line 1761 "ops.c"
      mercury__ops____Compare____priority_0_0(&mercury__ops__conv0_HeadVar__1_1, ((MR_Integer) mercury__ops__wrapper_arg_2), ((MR_Integer) mercury__ops__wrapper_arg_3));
    }
#line 1764 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1766 "ops.c"
  }
#line 1768 "ops.c"
}

#line 1771 "ops.c"
static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
#line 1774 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1776 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 1778 "ops.c"
{
#line 1780 "ops.c"
  {
#line 1782 "ops.c"
    MR_bool mercury__ops__succeeded;

#line 1785 "ops.c"
    {
#line 1787 "ops.c"
      mercury__ops__succeeded = mercury__ops____Unify____table_0_0();
    }
#line 1790 "ops.c"
    return mercury__ops__succeeded;
#line 1792 "ops.c"
  }
#line 1794 "ops.c"
}

#line 1797 "ops.c"
static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
#line 1800 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_1,
#line 1802 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1804 "ops.c"
  MR_Box mercury__ops__wrapper_arg_3)
#line 1806 "ops.c"
{
#line 1808 "ops.c"
  {
#line 1810 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__1_1;

#line 1813 "ops.c"
    {
#line 1815 "ops.c"
      mercury__ops____Compare____table_0_0(&mercury__ops__conv0_HeadVar__1_1);
    }
#line 1818 "ops.c"
    *mercury__ops__wrapper_arg_1 = ((MR_Box) (mercury__ops__conv0_HeadVar__1_1));
#line 1820 "ops.c"
  }
#line 1822 "ops.c"
}

#line 1825 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
#line 1828 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1830 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1832 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1834 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1836 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 1838 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 1840 "ops.c"
{
#line 1842 "ops.c"
  {
#line 1844 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1846 "ops.c"
    MR_Box mercury__ops__closure;
#line 1848 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 1850 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 1852 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 1855 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 1857 "ops.c"
    {
#line 1859 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 1862 "ops.c"
    if (mercury__ops__succeeded)
#line 1864 "ops.c"
      {
#line 1866 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 1868 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 1870 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 1872 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 1874 "ops.c"
      }
#line 1876 "ops.c"
    return mercury__ops__succeeded;
#line 1878 "ops.c"
  }
#line 1880 "ops.c"
}

#line 1883 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
#line 1886 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1888 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1890 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1892 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1894 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 1896 "ops.c"
{
#line 1898 "ops.c"
  {
#line 1900 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1902 "ops.c"
    MR_Box mercury__ops__closure;
#line 1904 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 1906 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 1909 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 1911 "ops.c"
    {
#line 1913 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 1916 "ops.c"
    if (mercury__ops__succeeded)
#line 1918 "ops.c"
      {
#line 1920 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 1922 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 1924 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 1926 "ops.c"
      }
#line 1928 "ops.c"
    return mercury__ops__succeeded;
#line 1930 "ops.c"
  }
#line 1932 "ops.c"
}

#line 1935 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
#line 1938 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1940 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 1942 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 1944 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 1946 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4,
#line 1948 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_5)
#line 1950 "ops.c"
{
#line 1952 "ops.c"
  {
#line 1954 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 1956 "ops.c"
    MR_Box mercury__ops__closure;
#line 1958 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__3_3;
#line 1960 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__4_4;
#line 1962 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__5_5;

#line 1965 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 1967 "ops.c"
    {
#line 1969 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4, &mercury__ops__conv0_HeadVar__5_5);
    }
#line 1972 "ops.c"
    if (mercury__ops__succeeded)
#line 1974 "ops.c"
      {
#line 1976 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv2_HeadVar__3_3));
#line 1978 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv1_HeadVar__4_4));
#line 1980 "ops.c"
        *mercury__ops__wrapper_arg_5 = ((MR_Box) (mercury__ops__conv0_HeadVar__5_5));
#line 1982 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 1984 "ops.c"
      }
#line 1986 "ops.c"
    return mercury__ops__succeeded;
#line 1988 "ops.c"
  }
#line 1990 "ops.c"
}

#line 1993 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
#line 1996 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 1998 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2000 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2002 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2004 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2006 "ops.c"
{
#line 2008 "ops.c"
  {
#line 2010 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2012 "ops.c"
    MR_Box mercury__ops__closure;
#line 2014 "ops.c"
    MR_Integer mercury__ops__conv1_HeadVar__3_3;
#line 2016 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2019 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2021 "ops.c"
    {
#line 2023 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2026 "ops.c"
    if (mercury__ops__succeeded)
#line 2028 "ops.c"
      {
#line 2030 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2032 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2034 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2036 "ops.c"
      }
#line 2038 "ops.c"
    return mercury__ops__succeeded;
#line 2040 "ops.c"
  }
#line 2042 "ops.c"
}

#line 2045 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
#line 2048 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2050 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2052 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2)
#line 2054 "ops.c"
{
#line 2056 "ops.c"
  {
#line 2058 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2060 "ops.c"
    MR_Box mercury__ops__closure;

#line 2063 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2065 "ops.c"
    {
#line 2067 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0(((MR_String) mercury__ops__wrapper_arg_2));
    }
#line 2070 "ops.c"
    return mercury__ops__succeeded;
#line 2072 "ops.c"
  }
#line 2074 "ops.c"
}

#line 2077 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
#line 2080 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2082 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2084 "ops.c"
  MR_Box mercury__ops__wrapper_arg_2,
#line 2086 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2088 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2090 "ops.c"
{
#line 2092 "ops.c"
  {
#line 2094 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2096 "ops.c"
    MR_Box mercury__ops__closure;
#line 2098 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2100 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2103 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2105 "ops.c"
    {
#line 2107 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0(((MR_String) mercury__ops__wrapper_arg_2), &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2110 "ops.c"
    if (mercury__ops__succeeded)
#line 2112 "ops.c"
      {
#line 2114 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2116 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2118 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2120 "ops.c"
      }
#line 2122 "ops.c"
    return mercury__ops__succeeded;
#line 2124 "ops.c"
  }
#line 2126 "ops.c"
}

#line 2129 "ops.c"
static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
#line 2132 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2134 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1,
#line 2136 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_2,
#line 2138 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_3,
#line 2140 "ops.c"
  MR_Box * mercury__ops__wrapper_arg_4)
#line 2142 "ops.c"
{
#line 2144 "ops.c"
  {
#line 2146 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 2148 "ops.c"
    MR_Box mercury__ops__closure;
#line 2150 "ops.c"
    MR_Integer mercury__ops__conv2_HeadVar__2_2;
#line 2152 "ops.c"
    MR_Word mercury__ops__conv1_HeadVar__3_3;
#line 2154 "ops.c"
    MR_Word mercury__ops__conv0_HeadVar__4_4;

#line 2157 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2159 "ops.c"
    {
#line 2161 "ops.c"
      mercury__ops__succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0(&mercury__ops__conv2_HeadVar__2_2, &mercury__ops__conv1_HeadVar__3_3, &mercury__ops__conv0_HeadVar__4_4);
    }
#line 2164 "ops.c"
    if (mercury__ops__succeeded)
#line 2166 "ops.c"
      {
#line 2168 "ops.c"
        *mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv2_HeadVar__2_2));
#line 2170 "ops.c"
        *mercury__ops__wrapper_arg_3 = ((MR_Box) (mercury__ops__conv1_HeadVar__3_3));
#line 2172 "ops.c"
        *mercury__ops__wrapper_arg_4 = ((MR_Box) (mercury__ops__conv0_HeadVar__4_4));
#line 2174 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 2176 "ops.c"
      }
#line 2178 "ops.c"
    return mercury__ops__succeeded;
#line 2180 "ops.c"
  }
#line 2182 "ops.c"
}

#line 2185 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
#line 2188 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2190 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2192 "ops.c"
{
#line 2194 "ops.c"
  {
#line 2196 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2198 "ops.c"
    MR_Box mercury__ops__closure;
#line 2200 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2203 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2205 "ops.c"
    {
#line 2207 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0();
    }
#line 2210 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2212 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2214 "ops.c"
  }
#line 2216 "ops.c"
}

#line 2219 "ops.c"
static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
#line 2222 "ops.c"
  MR_Box mercury__ops__closure_arg,
#line 2224 "ops.c"
  MR_Box mercury__ops__wrapper_arg_1)
#line 2226 "ops.c"
{
#line 2228 "ops.c"
  {
#line 2230 "ops.c"
    MR_Box mercury__ops__wrapper_arg_2;
#line 2232 "ops.c"
    MR_Box mercury__ops__closure;
#line 2234 "ops.c"
    MR_Integer mercury__ops__conv0_HeadVar__2_2;

#line 2237 "ops.c"
    mercury__ops__closure = mercury__ops__closure_arg;
#line 2239 "ops.c"
    {
#line 2241 "ops.c"
      mercury__ops__conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0();
    }
#line 2244 "ops.c"
    mercury__ops__wrapper_arg_2 = ((MR_Box) (mercury__ops__conv0_HeadVar__2_2));
#line 2246 "ops.c"
    return mercury__ops__wrapper_arg_2;
#line 2248 "ops.c"
  }
#line 2250 "ops.c"
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
#line 3508 "ops.c"
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
#line 3530 "ops.c"
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

#line 3610 "ops.c"
        {
#line 3612 "ops.c"
          mercury__ops__succeeded = mercury__ops____Unify____class_0_0(mercury__ops__V_3_3, mercury__ops__V_5_5);
        }
#line 57 "ops.m"
        if (mercury__ops__succeeded)
#line 3617 "ops.c"
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
#line 3698 "ops.c"
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
#line 3748 "ops.c"
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
#line 3795 "ops.c"
              *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
            else
#line 34 "ops.m"
              if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3801 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
              else
#line 3805 "ops.c"
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
#line 3822 "ops.c"
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
#line 3863 "ops.c"
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
#line 3910 "ops.c"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
                else
#line 3914 "ops.c"
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
#line 3929 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
              else
#line 34 "ops.m"
                if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3935 "ops.c"
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
#line 3976 "ops.c"
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
#line 3989 "ops.c"
                *mercury__ops__HeadVar__1_1 = (MR_Integer) 1;
#line 34 "ops.m"
              else
#line 34 "ops.m"
                if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3995 "ops.c"
                  *mercury__ops__HeadVar__1_1 = (MR_Integer) 2;
#line 34 "ops.m"
                else
#line 34 "ops.m"
                  if (((MR_tag((MR_Word) mercury__ops__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4001 "ops.c"
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
#line 4094 "ops.c"
              mercury__ops__succeeded = (mercury__ops__V_9_9 == mercury__ops__V_11_11);
#line 34 "ops.m"
              if (mercury__ops__succeeded)
#line 4098 "ops.c"
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
#line 4129 "ops.c"
                mercury__ops__succeeded = (mercury__ops__V_3_3 == mercury__ops__V_5_5);
#line 34 "ops.m"
                if (mercury__ops__succeeded)
#line 4133 "ops.c"
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
#line 4158 "ops.c"
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
#line 4181 "ops.c"
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
#line 4250 "ops.c"
  {
#line 4252 "ops.c"
    MR_bool mercury__ops__succeeded = (mercury__ops__HeadVar__2_1 == mercury__ops__HeadVar__2_2);

#line 4255 "ops.c"
    return mercury__ops__succeeded;
#line 4257 "ops.c"
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
#line 446 "ops.m"
                                                                                                                                                                                                  {
#line 446 "ops.m"
                                                                                                                                                                                                    MR_Word mercury__ops__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[1]);

#line 447 "ops.m"
                                                                                                                                                                                                    *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[48];
#line 448 "ops.m"
                                                                                                                                                                                                    *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 446 "ops.m"
                                                                                                                                                                                                    mercury__ops__succeeded = MR_TRUE;
#line 446 "ops.m"
                                                                                                                                                                                                  }
#line 297 "ops.m"
                                                                                                                                                                                                else
#line 297 "ops.m"
                                                                                                                                                                                                  if ((((((((((((((strcmp(mercury__ops__Op_4, (MR_String) "arbitrary") == 0)) || ((strcmp(mercury__ops__Op_4, (MR_String) "atomic") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_equivalent_solution_sets") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_equivalent_solutions") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_complete_switch") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "trace") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "try") == 0))))
#line 439 "ops.m"
                                                                                                                                                                                                    {
#line 440 "ops.m"
                                                                                                                                                                                                      *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[30];
#line 441 "ops.m"
                                                                                                                                                                                                      *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 439 "ops.m"
                                                                                                                                                                                                      mercury__ops__succeeded = MR_TRUE;
#line 439 "ops.m"
                                                                                                                                                                                                    }
#line 297 "ops.m"
                                                                                                                                                                                                  else
#line 297 "ops.m"
                                                                                                                                                                                                    if ((((((((((((((((((((((strcmp(mercury__ops__Op_4, (MR_String) "promise_impure") == 0)) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_pure") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "promise_semipure") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_cc_multi") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_cc_nondet") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_det") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_erroneous") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_failure") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_multi") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_nondet") == 0)))) || ((strcmp(mercury__ops__Op_4, (MR_String) "require_semidet") == 0))))
#line 461 "ops.m"
                                                                                                                                                                                                      {
#line 461 "ops.m"
                                                                                                                                                                                                        MR_Word mercury__ops__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[0]);

#line 462 "ops.m"
                                                                                                                                                                                                        *mercury__ops__Info_5 = (MR_Word) &mercury__ops_scalar_common_4[49];
#line 463 "ops.m"
                                                                                                                                                                                                        *mercury__ops__OtherInfos_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "ops.m"
                                                                                                                                                                                                        mercury__ops__succeeded = MR_TRUE;
#line 461 "ops.m"
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
#line 470 "ops.m"
  {
#line 470 "ops.m"
    MR_bool mercury__ops__succeeded;

#line 470 "ops.m"
    if ((mercury__ops__HeadVar__2_2 == (MR_Integer) 0))
#line 471 "ops.m"
      {
#line 471 "ops.m"
        *mercury__ops__HeadVar__3_3 = (mercury__ops__Priority_1 - (MR_Integer) 1);
#line 471 "ops.m"
      }
#line 470 "ops.m"
    else
#line 470 "ops.m"
      *mercury__ops__HeadVar__3_3 = mercury__ops__Priority_1;
#line 470 "ops.m"
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
#line 6050 "ops.c"
  {
#line 6052 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6054 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6056 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 13)));
#line 6058 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6061 "ops.c"
    {
#line 6063 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6066 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6068 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6070 "ops.c"
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
#line 6084 "ops.c"
  {
#line 6086 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6088 "ops.c"
    MR_Integer mercury__ops__HeadVar__2_2;
#line 6090 "ops.c"
    MR_Box MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 12)));
#line 6092 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__2_2;

#line 6095 "ops.c"
    {
#line 6097 "ops.c"
      mercury__ops__conv1_HeadVar__2_2 = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1);
    }
#line 6100 "ops.c"
    mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv1_HeadVar__2_2);
#line 6102 "ops.c"
    return mercury__ops__HeadVar__2_2;
#line 6104 "ops.c"
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
#line 6124 "ops.c"
  {
#line 6126 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6128 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 11)));
#line 6130 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__2_2;
#line 6132 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6134 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6137 "ops.c"
    {
#line 6139 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, &mercury__ops__conv3_HeadVar__2_2, &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6142 "ops.c"
    if (mercury__ops__succeeded)
#line 6144 "ops.c"
      {
#line 6146 "ops.c"
        *mercury__ops__HeadVar__2_2 = ((MR_Integer) mercury__ops__conv3_HeadVar__2_2);
#line 6148 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6150 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6152 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6154 "ops.c"
      }
#line 6156 "ops.c"
    return mercury__ops__succeeded;
#line 6158 "ops.c"
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
#line 6178 "ops.c"
  {
#line 6180 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6182 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 10)));
#line 6184 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6186 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6189 "ops.c"
    {
#line 6191 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6194 "ops.c"
    if (mercury__ops__succeeded)
#line 6196 "ops.c"
      {
#line 6198 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Word) mercury__ops__conv2_HeadVar__3_3);
#line 6200 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6202 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6204 "ops.c"
      }
#line 6206 "ops.c"
    return mercury__ops__succeeded;
#line 6208 "ops.c"
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
#line 6224 "ops.c"
  {
#line 6226 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6228 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 9)));

#line 6231 "ops.c"
    {
#line 6233 "ops.c"
      return mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_3), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)));
    }
#line 6236 "ops.c"
    return mercury__ops__succeeded;
#line 6238 "ops.c"
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
#line 6258 "ops.c"
  {
#line 6260 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6262 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 8)));
#line 6264 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6266 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6269 "ops.c"
    {
#line 6271 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6274 "ops.c"
    if (mercury__ops__succeeded)
#line 6276 "ops.c"
      {
#line 6278 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6280 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6282 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6284 "ops.c"
      }
#line 6286 "ops.c"
    return mercury__ops__succeeded;
#line 6288 "ops.c"
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
#line 6310 "ops.c"
  {
#line 6312 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6314 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 7)));
#line 6316 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6318 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6320 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6323 "ops.c"
    {
#line 6325 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6328 "ops.c"
    if (mercury__ops__succeeded)
#line 6330 "ops.c"
      {
#line 6332 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6334 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6336 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6338 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6340 "ops.c"
      }
#line 6342 "ops.c"
    return mercury__ops__succeeded;
#line 6344 "ops.c"
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
#line 6364 "ops.c"
  {
#line 6366 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6368 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 6)));
#line 6370 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__3_3;
#line 6372 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__4_4;

#line 6375 "ops.c"
    {
#line 6377 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_5), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv2_HeadVar__3_3, &mercury__ops__conv1_HeadVar__4_4);
    }
#line 6380 "ops.c"
    if (mercury__ops__succeeded)
#line 6382 "ops.c"
      {
#line 6384 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv2_HeadVar__3_3);
#line 6386 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv1_HeadVar__4_4);
#line 6388 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6390 "ops.c"
      }
#line 6392 "ops.c"
    return mercury__ops__succeeded;
#line 6394 "ops.c"
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
#line 6416 "ops.c"
  {
#line 6418 "ops.c"
    MR_bool mercury__ops__succeeded;
#line 6420 "ops.c"
    MR_bool MR_CALL (* mercury__ops__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__ops__TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6422 "ops.c"
    MR_Box mercury__ops__conv3_HeadVar__3_3;
#line 6424 "ops.c"
    MR_Box mercury__ops__conv2_HeadVar__4_4;
#line 6426 "ops.c"
    MR_Box mercury__ops__conv1_HeadVar__5_5;

#line 6429 "ops.c"
    {
#line 6431 "ops.c"
      mercury__ops__succeeded = mercury__ops__func_0(((MR_Box) mercury__ops__TypeClassInfo_for_op_table_6), mercury__ops__HeadVar__1_1, ((MR_Box) (mercury__ops__HeadVar__2_2)), &mercury__ops__conv3_HeadVar__3_3, &mercury__ops__conv2_HeadVar__4_4, &mercury__ops__conv1_HeadVar__5_5);
    }
#line 6434 "ops.c"
    if (mercury__ops__succeeded)
#line 6436 "ops.c"
      {
#line 6438 "ops.c"
        *mercury__ops__HeadVar__3_3 = ((MR_Integer) mercury__ops__conv3_HeadVar__3_3);
#line 6440 "ops.c"
        *mercury__ops__HeadVar__4_4 = ((MR_Word) mercury__ops__conv2_HeadVar__4_4);
#line 6442 "ops.c"
        *mercury__ops__HeadVar__5_5 = ((MR_Word) mercury__ops__conv1_HeadVar__5_5);
#line 6444 "ops.c"
        mercury__ops__succeeded = MR_TRUE;
#line 6446 "ops.c"
      }
#line 6448 "ops.c"
    return mercury__ops__succeeded;
#line 6450 "ops.c"
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
