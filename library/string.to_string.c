/*
** Automatically generated from `string.to_string.m'
** by the Mercury compiler,
** version rotd-2026-01-13
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


// :- module string.to_string.
// :- implementation.

/*
INIT mercury__string__to_string__init
ENDINIT
*/

#include "string.to_string.mih"


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
#include "time.mih"
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




static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0;

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35);

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_3(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35);

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_2(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35);

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_0(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35);

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_1(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
  MR_Word TypeInfo_for_T1_8,
  MR_Word TypeInfo_for_T2_9,
  MR_Box A_3,
  MR_Box * B_4);

static MR_String MR_CALL 
mercury__string__to_string__type_ctor_desc_to_string_1_f_0(
  MR_Word TypeCtorDesc_3);

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(
  MR_Box HeadVar__2_7,
  MR_Integer HeadVar__3_8,
  MR_Word HeadVar__4_9,
  MR_Word * HeadVar__5_10);

static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
  MR_String String_6,
  MR_Word Priority_7,
  MR_Word OpPrio_8,
  MR_Word STATE_VARIABLE_Rs_0_10,
  MR_Word * STATE_VARIABLE_Rs_11);

static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
  MR_String String_4,
  MR_Word RevStrings_5,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__string__to_string_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[2][4];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1];


struct mercury__string__to_string__vector_common_type_6_0_s {
  const MR_String mercury__string__to_string__vector_common_type_6_0__vct_6_f_0;
  const MR_Integer mercury__string__to_string__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mercury__string__to_string__vector_common_type_6_0_s mercury__string__to_string_vector_common_6[32];

struct mercury__string__to_string__vector_common_type_7_0_s {
  const MR_String mercury__string__to_string__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct mercury__string__to_string__vector_common_type_7_0_s mercury__string__to_string_vector_common_7[512];



static /* final */ const MR_Box mercury__string__to_string_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};


static /* final */ const struct mercury__string__to_string__vector_common_type_6_0_s mercury__string__to_string_vector_common_6[32] = {
  /* row   0 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 3
  },
  /* row   4 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row   5 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row   6 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row   7 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 3
  },
  /* row   8 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row   9 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row  10 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row  11 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 3
  },
  /* row  12 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row  13 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row  14 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row  15 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 3
  },
  /* row  16 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row  17 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row  18 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row  19 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 3
  },
  /* row  20 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row  21 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row  22 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row  23 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 3
  },
  /* row  24 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row  25 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row  26 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row  27 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 3
  },
  /* row  28 */
  {
    (MR_String) "bitmap",
    (MR_Integer) 0
  },
  /* row  29 */
  {
    (MR_String) "builtin",
    (MR_Integer) 1
  },
  /* row  30 */
  {
    (MR_String) "private_builtin",
    (MR_Integer) 2
  },
  /* row  31 */
  {
    (MR_String) "type_desc",
    (MR_Integer) 3
  },
};

static /* final */ const struct mercury__string__to_string__vector_common_type_7_0_s mercury__string__to_string_vector_common_7[512] = {
  /* row   0 */   { NULL },
  /* row   1 */   { (MR_String) "string" },
  /* row   2 */   { NULL },
  /* row   3 */   { (MR_String) "uint32" },
  /* row   4 */   { (MR_String) "character" },
  /* row   5 */   { NULL },
  /* row   6 */   { NULL },
  /* row   7 */   { (MR_String) "int16" },
  /* row   8 */   { (MR_String) "int" },
  /* row   9 */   { NULL },
  /* row  10 */   { NULL },
  /* row  11 */   { NULL },
  /* row  12 */   { NULL },
  /* row  13 */   { (MR_String) "uint8" },
  /* row  14 */   { NULL },
  /* row  15 */   { NULL },
  /* row  16 */   { NULL },
  /* row  17 */   { NULL },
  /* row  18 */   { NULL },
  /* row  19 */   { NULL },
  /* row  20 */   { (MR_String) "uint" },
  /* row  21 */   { NULL },
  /* row  22 */   { NULL },
  /* row  23 */   { (MR_String) "int8" },
  /* row  24 */   { NULL },
  /* row  25 */   { NULL },
  /* row  26 */   { (MR_String) "c_pointer" },
  /* row  27 */   { NULL },
  /* row  28 */   { (MR_String) "uint64" },
  /* row  29 */   { NULL },
  /* row  30 */   { NULL },
  /* row  31 */   { NULL },
  /* row  32 */   { NULL },
  /* row  33 */   { (MR_String) "uint16" },
  /* row  34 */   { NULL },
  /* row  35 */   { (MR_String) "float" },
  /* row  36 */   { NULL },
  /* row  37 */   { (MR_String) "int32" },
  /* row  38 */   { NULL },
  /* row  39 */   { NULL },
  /* row  40 */   { NULL },
  /* row  41 */   { NULL },
  /* row  42 */   { NULL },
  /* row  43 */   { NULL },
  /* row  44 */   { NULL },
  /* row  45 */   { NULL },
  /* row  46 */   { NULL },
  /* row  47 */   { NULL },
  /* row  48 */   { (MR_String) "int64" },
  /* row  49 */   { NULL },
  /* row  50 */   { NULL },
  /* row  51 */   { NULL },
  /* row  52 */   { NULL },
  /* row  53 */   { NULL },
  /* row  54 */   { NULL },
  /* row  55 */   { NULL },
  /* row  56 */   { NULL },
  /* row  57 */   { NULL },
  /* row  58 */   { NULL },
  /* row  59 */   { NULL },
  /* row  60 */   { NULL },
  /* row  61 */   { NULL },
  /* row  62 */   { NULL },
  /* row  63 */   { NULL },
  /* row  64 */   { NULL },
  /* row  65 */   { (MR_String) "string" },
  /* row  66 */   { NULL },
  /* row  67 */   { (MR_String) "uint32" },
  /* row  68 */   { (MR_String) "character" },
  /* row  69 */   { NULL },
  /* row  70 */   { NULL },
  /* row  71 */   { (MR_String) "int16" },
  /* row  72 */   { (MR_String) "int" },
  /* row  73 */   { NULL },
  /* row  74 */   { NULL },
  /* row  75 */   { NULL },
  /* row  76 */   { NULL },
  /* row  77 */   { (MR_String) "uint8" },
  /* row  78 */   { NULL },
  /* row  79 */   { NULL },
  /* row  80 */   { NULL },
  /* row  81 */   { NULL },
  /* row  82 */   { NULL },
  /* row  83 */   { NULL },
  /* row  84 */   { (MR_String) "uint" },
  /* row  85 */   { NULL },
  /* row  86 */   { NULL },
  /* row  87 */   { (MR_String) "int8" },
  /* row  88 */   { NULL },
  /* row  89 */   { NULL },
  /* row  90 */   { (MR_String) "c_pointer" },
  /* row  91 */   { NULL },
  /* row  92 */   { (MR_String) "uint64" },
  /* row  93 */   { NULL },
  /* row  94 */   { NULL },
  /* row  95 */   { NULL },
  /* row  96 */   { NULL },
  /* row  97 */   { (MR_String) "uint16" },
  /* row  98 */   { NULL },
  /* row  99 */   { (MR_String) "float" },
  /* row 100 */   { NULL },
  /* row 101 */   { (MR_String) "int32" },
  /* row 102 */   { NULL },
  /* row 103 */   { NULL },
  /* row 104 */   { NULL },
  /* row 105 */   { NULL },
  /* row 106 */   { NULL },
  /* row 107 */   { NULL },
  /* row 108 */   { NULL },
  /* row 109 */   { NULL },
  /* row 110 */   { NULL },
  /* row 111 */   { NULL },
  /* row 112 */   { (MR_String) "int64" },
  /* row 113 */   { NULL },
  /* row 114 */   { NULL },
  /* row 115 */   { NULL },
  /* row 116 */   { NULL },
  /* row 117 */   { NULL },
  /* row 118 */   { NULL },
  /* row 119 */   { NULL },
  /* row 120 */   { NULL },
  /* row 121 */   { NULL },
  /* row 122 */   { NULL },
  /* row 123 */   { NULL },
  /* row 124 */   { NULL },
  /* row 125 */   { NULL },
  /* row 126 */   { NULL },
  /* row 127 */   { NULL },
  /* row 128 */   { NULL },
  /* row 129 */   { (MR_String) "string" },
  /* row 130 */   { NULL },
  /* row 131 */   { (MR_String) "uint32" },
  /* row 132 */   { (MR_String) "character" },
  /* row 133 */   { NULL },
  /* row 134 */   { NULL },
  /* row 135 */   { (MR_String) "int16" },
  /* row 136 */   { (MR_String) "int" },
  /* row 137 */   { NULL },
  /* row 138 */   { NULL },
  /* row 139 */   { NULL },
  /* row 140 */   { NULL },
  /* row 141 */   { (MR_String) "uint8" },
  /* row 142 */   { NULL },
  /* row 143 */   { NULL },
  /* row 144 */   { NULL },
  /* row 145 */   { NULL },
  /* row 146 */   { NULL },
  /* row 147 */   { NULL },
  /* row 148 */   { (MR_String) "uint" },
  /* row 149 */   { NULL },
  /* row 150 */   { NULL },
  /* row 151 */   { (MR_String) "int8" },
  /* row 152 */   { NULL },
  /* row 153 */   { NULL },
  /* row 154 */   { (MR_String) "c_pointer" },
  /* row 155 */   { NULL },
  /* row 156 */   { (MR_String) "uint64" },
  /* row 157 */   { NULL },
  /* row 158 */   { NULL },
  /* row 159 */   { NULL },
  /* row 160 */   { NULL },
  /* row 161 */   { (MR_String) "uint16" },
  /* row 162 */   { NULL },
  /* row 163 */   { (MR_String) "float" },
  /* row 164 */   { NULL },
  /* row 165 */   { (MR_String) "int32" },
  /* row 166 */   { NULL },
  /* row 167 */   { NULL },
  /* row 168 */   { NULL },
  /* row 169 */   { NULL },
  /* row 170 */   { NULL },
  /* row 171 */   { NULL },
  /* row 172 */   { NULL },
  /* row 173 */   { NULL },
  /* row 174 */   { NULL },
  /* row 175 */   { NULL },
  /* row 176 */   { (MR_String) "int64" },
  /* row 177 */   { NULL },
  /* row 178 */   { NULL },
  /* row 179 */   { NULL },
  /* row 180 */   { NULL },
  /* row 181 */   { NULL },
  /* row 182 */   { NULL },
  /* row 183 */   { NULL },
  /* row 184 */   { NULL },
  /* row 185 */   { NULL },
  /* row 186 */   { NULL },
  /* row 187 */   { NULL },
  /* row 188 */   { NULL },
  /* row 189 */   { NULL },
  /* row 190 */   { NULL },
  /* row 191 */   { NULL },
  /* row 192 */   { NULL },
  /* row 193 */   { (MR_String) "string" },
  /* row 194 */   { NULL },
  /* row 195 */   { (MR_String) "uint32" },
  /* row 196 */   { (MR_String) "character" },
  /* row 197 */   { NULL },
  /* row 198 */   { NULL },
  /* row 199 */   { (MR_String) "int16" },
  /* row 200 */   { (MR_String) "int" },
  /* row 201 */   { NULL },
  /* row 202 */   { NULL },
  /* row 203 */   { NULL },
  /* row 204 */   { NULL },
  /* row 205 */   { (MR_String) "uint8" },
  /* row 206 */   { NULL },
  /* row 207 */   { NULL },
  /* row 208 */   { NULL },
  /* row 209 */   { NULL },
  /* row 210 */   { NULL },
  /* row 211 */   { NULL },
  /* row 212 */   { (MR_String) "uint" },
  /* row 213 */   { NULL },
  /* row 214 */   { NULL },
  /* row 215 */   { (MR_String) "int8" },
  /* row 216 */   { NULL },
  /* row 217 */   { NULL },
  /* row 218 */   { (MR_String) "c_pointer" },
  /* row 219 */   { NULL },
  /* row 220 */   { (MR_String) "uint64" },
  /* row 221 */   { NULL },
  /* row 222 */   { NULL },
  /* row 223 */   { NULL },
  /* row 224 */   { NULL },
  /* row 225 */   { (MR_String) "uint16" },
  /* row 226 */   { NULL },
  /* row 227 */   { (MR_String) "float" },
  /* row 228 */   { NULL },
  /* row 229 */   { (MR_String) "int32" },
  /* row 230 */   { NULL },
  /* row 231 */   { NULL },
  /* row 232 */   { NULL },
  /* row 233 */   { NULL },
  /* row 234 */   { NULL },
  /* row 235 */   { NULL },
  /* row 236 */   { NULL },
  /* row 237 */   { NULL },
  /* row 238 */   { NULL },
  /* row 239 */   { NULL },
  /* row 240 */   { (MR_String) "int64" },
  /* row 241 */   { NULL },
  /* row 242 */   { NULL },
  /* row 243 */   { NULL },
  /* row 244 */   { NULL },
  /* row 245 */   { NULL },
  /* row 246 */   { NULL },
  /* row 247 */   { NULL },
  /* row 248 */   { NULL },
  /* row 249 */   { NULL },
  /* row 250 */   { NULL },
  /* row 251 */   { NULL },
  /* row 252 */   { NULL },
  /* row 253 */   { NULL },
  /* row 254 */   { NULL },
  /* row 255 */   { NULL },
  /* row 256 */   { NULL },
  /* row 257 */   { (MR_String) "string" },
  /* row 258 */   { NULL },
  /* row 259 */   { (MR_String) "uint32" },
  /* row 260 */   { (MR_String) "character" },
  /* row 261 */   { NULL },
  /* row 262 */   { NULL },
  /* row 263 */   { (MR_String) "int16" },
  /* row 264 */   { (MR_String) "int" },
  /* row 265 */   { NULL },
  /* row 266 */   { NULL },
  /* row 267 */   { NULL },
  /* row 268 */   { NULL },
  /* row 269 */   { (MR_String) "uint8" },
  /* row 270 */   { NULL },
  /* row 271 */   { NULL },
  /* row 272 */   { NULL },
  /* row 273 */   { NULL },
  /* row 274 */   { NULL },
  /* row 275 */   { NULL },
  /* row 276 */   { (MR_String) "uint" },
  /* row 277 */   { NULL },
  /* row 278 */   { NULL },
  /* row 279 */   { (MR_String) "int8" },
  /* row 280 */   { NULL },
  /* row 281 */   { NULL },
  /* row 282 */   { (MR_String) "c_pointer" },
  /* row 283 */   { NULL },
  /* row 284 */   { (MR_String) "uint64" },
  /* row 285 */   { NULL },
  /* row 286 */   { NULL },
  /* row 287 */   { NULL },
  /* row 288 */   { NULL },
  /* row 289 */   { (MR_String) "uint16" },
  /* row 290 */   { NULL },
  /* row 291 */   { (MR_String) "float" },
  /* row 292 */   { NULL },
  /* row 293 */   { (MR_String) "int32" },
  /* row 294 */   { NULL },
  /* row 295 */   { NULL },
  /* row 296 */   { NULL },
  /* row 297 */   { NULL },
  /* row 298 */   { NULL },
  /* row 299 */   { NULL },
  /* row 300 */   { NULL },
  /* row 301 */   { NULL },
  /* row 302 */   { NULL },
  /* row 303 */   { NULL },
  /* row 304 */   { (MR_String) "int64" },
  /* row 305 */   { NULL },
  /* row 306 */   { NULL },
  /* row 307 */   { NULL },
  /* row 308 */   { NULL },
  /* row 309 */   { NULL },
  /* row 310 */   { NULL },
  /* row 311 */   { NULL },
  /* row 312 */   { NULL },
  /* row 313 */   { NULL },
  /* row 314 */   { NULL },
  /* row 315 */   { NULL },
  /* row 316 */   { NULL },
  /* row 317 */   { NULL },
  /* row 318 */   { NULL },
  /* row 319 */   { NULL },
  /* row 320 */   { NULL },
  /* row 321 */   { (MR_String) "string" },
  /* row 322 */   { NULL },
  /* row 323 */   { (MR_String) "uint32" },
  /* row 324 */   { (MR_String) "character" },
  /* row 325 */   { NULL },
  /* row 326 */   { NULL },
  /* row 327 */   { (MR_String) "int16" },
  /* row 328 */   { (MR_String) "int" },
  /* row 329 */   { NULL },
  /* row 330 */   { NULL },
  /* row 331 */   { NULL },
  /* row 332 */   { NULL },
  /* row 333 */   { (MR_String) "uint8" },
  /* row 334 */   { NULL },
  /* row 335 */   { NULL },
  /* row 336 */   { NULL },
  /* row 337 */   { NULL },
  /* row 338 */   { NULL },
  /* row 339 */   { NULL },
  /* row 340 */   { (MR_String) "uint" },
  /* row 341 */   { NULL },
  /* row 342 */   { NULL },
  /* row 343 */   { (MR_String) "int8" },
  /* row 344 */   { NULL },
  /* row 345 */   { NULL },
  /* row 346 */   { (MR_String) "c_pointer" },
  /* row 347 */   { NULL },
  /* row 348 */   { (MR_String) "uint64" },
  /* row 349 */   { NULL },
  /* row 350 */   { NULL },
  /* row 351 */   { NULL },
  /* row 352 */   { NULL },
  /* row 353 */   { (MR_String) "uint16" },
  /* row 354 */   { NULL },
  /* row 355 */   { (MR_String) "float" },
  /* row 356 */   { NULL },
  /* row 357 */   { (MR_String) "int32" },
  /* row 358 */   { NULL },
  /* row 359 */   { NULL },
  /* row 360 */   { NULL },
  /* row 361 */   { NULL },
  /* row 362 */   { NULL },
  /* row 363 */   { NULL },
  /* row 364 */   { NULL },
  /* row 365 */   { NULL },
  /* row 366 */   { NULL },
  /* row 367 */   { NULL },
  /* row 368 */   { (MR_String) "int64" },
  /* row 369 */   { NULL },
  /* row 370 */   { NULL },
  /* row 371 */   { NULL },
  /* row 372 */   { NULL },
  /* row 373 */   { NULL },
  /* row 374 */   { NULL },
  /* row 375 */   { NULL },
  /* row 376 */   { NULL },
  /* row 377 */   { NULL },
  /* row 378 */   { NULL },
  /* row 379 */   { NULL },
  /* row 380 */   { NULL },
  /* row 381 */   { NULL },
  /* row 382 */   { NULL },
  /* row 383 */   { NULL },
  /* row 384 */   { NULL },
  /* row 385 */   { (MR_String) "string" },
  /* row 386 */   { NULL },
  /* row 387 */   { (MR_String) "uint32" },
  /* row 388 */   { (MR_String) "character" },
  /* row 389 */   { NULL },
  /* row 390 */   { NULL },
  /* row 391 */   { (MR_String) "int16" },
  /* row 392 */   { (MR_String) "int" },
  /* row 393 */   { NULL },
  /* row 394 */   { NULL },
  /* row 395 */   { NULL },
  /* row 396 */   { NULL },
  /* row 397 */   { (MR_String) "uint8" },
  /* row 398 */   { NULL },
  /* row 399 */   { NULL },
  /* row 400 */   { NULL },
  /* row 401 */   { NULL },
  /* row 402 */   { NULL },
  /* row 403 */   { NULL },
  /* row 404 */   { (MR_String) "uint" },
  /* row 405 */   { NULL },
  /* row 406 */   { NULL },
  /* row 407 */   { (MR_String) "int8" },
  /* row 408 */   { NULL },
  /* row 409 */   { NULL },
  /* row 410 */   { (MR_String) "c_pointer" },
  /* row 411 */   { NULL },
  /* row 412 */   { (MR_String) "uint64" },
  /* row 413 */   { NULL },
  /* row 414 */   { NULL },
  /* row 415 */   { NULL },
  /* row 416 */   { NULL },
  /* row 417 */   { (MR_String) "uint16" },
  /* row 418 */   { NULL },
  /* row 419 */   { (MR_String) "float" },
  /* row 420 */   { NULL },
  /* row 421 */   { (MR_String) "int32" },
  /* row 422 */   { NULL },
  /* row 423 */   { NULL },
  /* row 424 */   { NULL },
  /* row 425 */   { NULL },
  /* row 426 */   { NULL },
  /* row 427 */   { NULL },
  /* row 428 */   { NULL },
  /* row 429 */   { NULL },
  /* row 430 */   { NULL },
  /* row 431 */   { NULL },
  /* row 432 */   { (MR_String) "int64" },
  /* row 433 */   { NULL },
  /* row 434 */   { NULL },
  /* row 435 */   { NULL },
  /* row 436 */   { NULL },
  /* row 437 */   { NULL },
  /* row 438 */   { NULL },
  /* row 439 */   { NULL },
  /* row 440 */   { NULL },
  /* row 441 */   { NULL },
  /* row 442 */   { NULL },
  /* row 443 */   { NULL },
  /* row 444 */   { NULL },
  /* row 445 */   { NULL },
  /* row 446 */   { NULL },
  /* row 447 */   { NULL },
  /* row 448 */   { NULL },
  /* row 449 */   { (MR_String) "string" },
  /* row 450 */   { NULL },
  /* row 451 */   { (MR_String) "uint32" },
  /* row 452 */   { (MR_String) "character" },
  /* row 453 */   { NULL },
  /* row 454 */   { NULL },
  /* row 455 */   { (MR_String) "int16" },
  /* row 456 */   { (MR_String) "int" },
  /* row 457 */   { NULL },
  /* row 458 */   { NULL },
  /* row 459 */   { NULL },
  /* row 460 */   { NULL },
  /* row 461 */   { (MR_String) "uint8" },
  /* row 462 */   { NULL },
  /* row 463 */   { NULL },
  /* row 464 */   { NULL },
  /* row 465 */   { NULL },
  /* row 466 */   { NULL },
  /* row 467 */   { NULL },
  /* row 468 */   { (MR_String) "uint" },
  /* row 469 */   { NULL },
  /* row 470 */   { NULL },
  /* row 471 */   { (MR_String) "int8" },
  /* row 472 */   { NULL },
  /* row 473 */   { NULL },
  /* row 474 */   { (MR_String) "c_pointer" },
  /* row 475 */   { NULL },
  /* row 476 */   { (MR_String) "uint64" },
  /* row 477 */   { NULL },
  /* row 478 */   { NULL },
  /* row 479 */   { NULL },
  /* row 480 */   { NULL },
  /* row 481 */   { (MR_String) "uint16" },
  /* row 482 */   { NULL },
  /* row 483 */   { (MR_String) "float" },
  /* row 484 */   { NULL },
  /* row 485 */   { (MR_String) "int32" },
  /* row 486 */   { NULL },
  /* row 487 */   { NULL },
  /* row 488 */   { NULL },
  /* row 489 */   { NULL },
  /* row 490 */   { NULL },
  /* row 491 */   { NULL },
  /* row 492 */   { NULL },
  /* row 493 */   { NULL },
  /* row 494 */   { NULL },
  /* row 495 */   { NULL },
  /* row 496 */   { (MR_String) "int64" },
  /* row 497 */   { NULL },
  /* row 498 */   { NULL },
  /* row 499 */   { NULL },
  /* row 500 */   { NULL },
  /* row 501 */   { NULL },
  /* row 502 */   { NULL },
  /* row 503 */   { NULL },
  /* row 504 */   { NULL },
  /* row 505 */   { NULL },
  /* row 506 */   { NULL },
  /* row 507 */   { NULL },
  /* row 508 */   { NULL },
  /* row 509 */   { NULL },
  /* row 510 */   { NULL },
  /* row 511 */   { NULL },
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


static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct mercury__string__to_string__string__to_string__type_ctor_info_revstrings_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__string__to_string____Unify____revstrings_0_0_10001)),
  ((MR_Box) (mercury__string__to_string____Compare____revstrings_0_0_10001)),
  (MR_String) "string.to_string",
  (MR_String) "revstrings",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_3(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  MR_Box conv1_Priority_14;

  conv1_Priority_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_14 = ((MR_Word) (conv1_Priority_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_for_T_12, NonCanon_5, Priority_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  *String_8 = mercury__string__append_list_1_f_0(Var_11);
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word Priority_10;
  MR_Box Var_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 15))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(0, X_8, 0))));
  Var_13 = (MR_hl_field(0, X_8, 1));
  mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_15, NonCanon_6, Priority_10, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_27_27 = ((MR_Word) ((MR_hl_field(0, Univ_8, 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(0, Univ_8, 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_3(TypeInfo_27_27, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(1, Var_18, 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_32;
      MR_Word STATE_VARIABLE_Rs_1_21;
      MR_Word STATE_VARIABLE_Rs_2_22;
      MR_Word Priority_29;
      MR_Box Var_30;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_29 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_30 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_32, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_32, NonCanon_6, Priority_29, Var_30, STATE_VARIABLE_Rs_1_21, &STATE_VARIABLE_Rs_2_22);
      // direct tailcall eliminated
      ;
      next_value_of_Univ_8 = ListTail_14;
      next_value_of_STATE_VARIABLE_Rs_0_15 = STATE_VARIABLE_Rs_2_22;
      Univ_8 = next_value_of_Univ_8;
      STATE_VARIABLE_Rs_0_15 = next_value_of_STATE_VARIABLE_Rs_0_15;
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_10, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Rs_16 = STATE_VARIABLE_Rs_0_15;
      else
      {
        MR_Word TypeInfo_28_28;
        MR_Word STATE_VARIABLE_Rs_4_25;
        MR_Box Var_26;
        MR_Word Priority_33;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Priority_33;

        {
          STATE_VARIABLE_Rs_4_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Rs_4_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(1, STATE_VARIABLE_Rs_4_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(0, Univ_8, 0))));
        Var_26 = (MR_hl_field(0, Univ_8, 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
        conv1_Priority_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Priority_33 = ((MR_Word) (conv1_Priority_33));
        mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_28_28, NonCanon_6, Priority_33, Var_26, STATE_VARIABLE_Rs_4_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word Priority_10;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_for_T_13, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_3(
  MR_Word TypeInfo_for_T_75,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_39,
  MR_Word * STATE_VARIABLE_Rs_40)
{
  MR_bool succeeded;
  MR_Word TypeCtorDesc_12;
  MR_Word ArgTypeDescs_13;
  MR_String TypeCtorModuleName_14;
  MR_String TypeCtorName_15;
  MR_Word Var_41;
  MR_String Var_106;
  MR_Integer Var_107;
  MR_String ToAddStr_17;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_75 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_41 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_12  = TypeCtorDesc;
	ArgTypeDescs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	TypeCtorModuleName_14  = TypeCtorModuleName;
	Var_106  = TypeCtorName;
	Var_107  = TypeCtorArity;
}
  TypeCtorName_15 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtorDesc_12);
  // binary string jump switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 3;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(TypeCtorModuleName_14, ((&mercury__string__to_string_vector_common_6[28 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&mercury__string__to_string_vector_common_6[28 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "bitmap"
            ;
            {
              MR_Word TypeCtorInfo_90_90;
              MR_Box Bitmap_31;
              MR_String Var_60;
              MR_Box conv17_Bitmap_31;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "bitmap") == 0);
              if (succeeded)
              {
                TypeCtorInfo_90_90 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_90_90, X_10, &conv17_Bitmap_31);
                Bitmap_31 = ((MR_Box) (conv17_Bitmap_31));
                Var_60 = mercury__bitmap__to_string_1_f_0(Bitmap_31);
                ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Var_60);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "builtin"
            ;
            {
              MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_15)) & (MR_Integer) 63);
              MR_String str_5 = ((&mercury__string__to_string_vector_common_7[448 + slot_4]))->mercury__string__to_string__vector_common_type_7_0__vct_7_f_0;

              // hashed string jump switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_5 != NULL)) && ((strcmp(str_5, TypeCtorName_15) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_4) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      // case "string"
                      ;
                      {
                        MR_String Str_16;
                        MR_Box conv11_Str_16;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv11_Str_16);
                        Str_16 = ((MR_String) (conv11_Str_16));
                        ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Str_16);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "uint32"
                      ;
                      {
                        uint32_t U32_28;
                        MR_String Var_56;
                        MR_Box conv14_U32_28;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv14_U32_28);
                        U32_28 = ((uint32_t) (MR_Word) conv14_U32_28);
                        Var_56 = mercury__string__uint32_to_string_1_f_0(U32_28);
                        mercury__string__append_3_p_2(Var_56, (MR_String) "u32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "character"
                      ;
                      {
                        MR_Char Char_18;
                        MR_Box conv4_Char_18;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv4_Char_18);
                        Char_18 = ((MR_Char) (MR_Word) conv4_Char_18);
                        ToAddStr_17 = mercury__term_io__quoted_char_to_string_1_f_0(Char_18);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      // case "int16"
                      ;
                      {
                        int16_t I16_22;
                        MR_String Var_44;
                        MR_Box conv7_I16_22;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv7_I16_22);
                        I16_22 = ((int16_t) (MR_Word) conv7_I16_22);
                        Var_44 = mercury__string__int16_to_string_1_f_0(I16_22);
                        mercury__string__append_3_p_2(Var_44, (MR_String) "i16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      // case "int"
                      ;
                      {
                        MR_Integer I_20;
                        MR_Box conv6_I_20;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv6_I_20);
                        I_20 = ((MR_Integer) (conv6_I_20));
                        ToAddStr_17 = mercury__string__int_to_string_1_f_0(I_20);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      // case "uint8"
                      ;
                      {
                        uint8_t U8_26;
                        MR_String Var_52;
                        MR_Box conv16_U8_26;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv16_U8_26);
                        U8_26 = ((uint8_t) (MR_Word) conv16_U8_26);
                        Var_52 = mercury__string__uint8_to_string_1_f_0(U8_26);
                        mercury__string__append_3_p_2(Var_52, (MR_String) "u8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 20:
                    {
                      // case "uint"
                      ;
                      {
                        MR_Unsigned U_25;
                        MR_String Var_50;
                        MR_Box conv12_U_25;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv12_U_25);
                        U_25 = ((MR_Unsigned) (conv12_U_25));
                        Var_50 = mercury__string__uint_to_string_1_f_0(U_25);
                        mercury__string__append_3_p_2(Var_50, (MR_String) "u", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 23:
                    {
                      // case "int8"
                      ;
                      {
                        int8_t I8_21;
                        MR_String Var_42;
                        MR_Box conv10_I8_21;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv10_I8_21);
                        I8_21 = ((int8_t) (MR_Word) conv10_I8_21);
                        Var_42 = mercury__string__int8_to_string_1_f_0(I8_21);
                        mercury__string__append_3_p_2(Var_42, (MR_String) "i8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 26:
                    {
                      // case "c_pointer"
                      ;
                      {
                        MR_Word CPtr_30;
                        MR_Box conv3_CPtr_30;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv3_CPtr_30);
                        CPtr_30 = ((MR_Word) (conv3_CPtr_30));
                        mercury__string__c_pointer_to_string_2_p_0(CPtr_30, &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 28:
                    {
                      // case "uint64"
                      ;
                      {
                        uint64_t U64_29;
                        MR_String Var_58;
                        MR_Box conv15_U64_29;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), X_10, &conv15_U64_29);
                        U64_29 = MR_unbox_uint64(conv15_U64_29);
                        Var_58 = mercury__string__uint64_to_string_1_f_0(U64_29);
                        mercury__string__append_3_p_2(Var_58, (MR_String) "u64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 33:
                    {
                      // case "uint16"
                      ;
                      {
                        uint16_t U16_27;
                        MR_String Var_54;
                        MR_Box conv13_U16_27;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv13_U16_27);
                        U16_27 = ((uint16_t) (MR_Word) conv13_U16_27);
                        Var_54 = mercury__string__uint16_to_string_1_f_0(U16_27);
                        mercury__string__append_3_p_2(Var_54, (MR_String) "u16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 35:
                    {
                      // case "float"
                      ;
                      {
                        MR_Float Float_19;
                        MR_Box conv5_Float_19;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv5_Float_19);
                        Float_19 = MR_unbox_float(conv5_Float_19);
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Float Flt;
	MR_String Str;

	Flt = Float_19 ;
		{
{
    // For efficiency reasons, we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	ToAddStr_17  = Str;
}
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 37:
                    {
                      // case "int32"
                      ;
                      {
                        int32_t I32_23;
                        MR_String Var_46;
                        MR_Box conv8_I32_23;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_I32_23);
                        I32_23 = ((int32_t) (MR_Word) conv8_I32_23);
                        Var_46 = mercury__string__int32_to_string_1_f_0(I32_23);
                        mercury__string__append_3_p_2(Var_46, (MR_String) "i32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 48:
                    {
                      // case "int64"
                      ;
                      {
                        int64_t I64_24;
                        MR_String Var_48;
                        MR_Box conv9_I64_24;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), X_10, &conv9_I64_24);
                        I64_24 = MR_unbox_int64(conv9_I64_24);
                        Var_48 = mercury__string__int64_to_string_1_f_0(I64_24);
                        mercury__string__append_3_p_2(Var_48, (MR_String) "i64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "private_builtin"
            ;
            {
              MR_Word PITypeInfo_35;
              MR_Word TypeCtorInfo_94_94;
              MR_Word TypeInfo_36;
              MR_Word Var_62;
              MR_String Var_63;
              MR_Word TypeDesc_70;
              MR_Box conv2_PITypeInfo_35;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "type_info") == 0);
              if (succeeded)
              {
                succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
                  succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_94_94 = (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0);
                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_94_94, X_10, &conv2_PITypeInfo_35);
                    PITypeInfo_35 = ((MR_Word) (conv2_PITypeInfo_35));
                    TypeInfo_36 = (MR_Word) (PITypeInfo_35);
                    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_36, &TypeDesc_70);
                    Var_63 = mercury__type_desc__type_name_1_f_0(TypeDesc_70);
                    ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_63);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "type_desc"
            ;
            if ((strcmp(TypeCtorName_15, (MR_String) "type_desc") == 0))
            {
              MR_Word TypeDesc_32;
              MR_String Var_61;
              MR_Box conv0_TypeDesc_32;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv0_TypeDesc_32);
              TypeDesc_32 = ((MR_Word) (conv0_TypeDesc_32));
              Var_61 = mercury__type_desc__type_name_1_f_0(TypeDesc_32);
              ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_61);
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(TypeCtorName_15, (MR_String) "type_ctor_desc") == 0))
            {
              MR_Word Var_102;
              MR_Box conv1_Var_102;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv1_Var_102);
              Var_102 = ((MR_Word) (conv1_Var_102));
              succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(TypeCtorDesc_12, Var_102);
              if (succeeded)
              {
                ToAddStr_17 = mercury__string__to_string__type_ctor_desc_to_string_1_f_0(TypeCtorDesc_12);
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_1;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_1:;
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_40 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ToAddStr_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_39));
    }
  else
  {
    MR_Word STATE_VARIABLE_Rs_2_66;
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_104 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 0))));
      Var_103 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
      succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_95_95;
          MR_Word TypeCtorInfo_96_96;
          MR_Word TypeInfo_97_97;
          MR_ArrayPtr Array_37;
          MR_Box conv18_Array_37;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_95_95  = TypeInfo_for_T;
}
            TypeCtorInfo_96_96 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
            {
              TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_97_97, 0) = ((MR_Box) (TypeCtorInfo_96_96));
              MR_hl_field(0, TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_95_95));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_97_97, X_10, &conv18_Array_37);
            Array_37 = ((MR_ArrayPtr) (conv18_Array_37));
            mercury__string__to_string__array_to_revstrings_5_p_3(TypeInfo_95_95, NonCanon_7, (MR_ArrayPtr) (Array_37), STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_98_98;
          MR_Word TypeCtorInfo_99_99;
          MR_Word TypeInfo_100_100;
          MR_Box VersionArray_38;
          MR_Box conv19_VersionArray_38;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "version_array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_98_98  = TypeInfo_for_T;
}
            TypeCtorInfo_99_99 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
            {
              TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_100_100, 0) = ((MR_Box) (TypeCtorInfo_99_99));
              MR_hl_field(0, TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_98_98));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_100_100, X_10, &conv19_VersionArray_38);
            VersionArray_38 = ((MR_Box) (conv19_VersionArray_38));
            mercury__string__to_string__version_array_to_revstrings_5_p_3(TypeInfo_98_98, NonCanon_7, VersionArray_38, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Rs_40 = STATE_VARIABLE_Rs_2_66;
    else
      mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(TypeInfo_for_T_75, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_39, STATE_VARIABLE_Rs_40);
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String Functor_12;
  MR_Word Args_14;
  MR_Integer _Arity_13;
  MR_Word STATE_VARIABLE_Rs_4_43;

  mercury__deconstruct__deconstruct_5_p_3(TypeInfo_for_T_157, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((strcmp(Functor_12, (MR_String) "[]") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_4_43);
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_4_43);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
  {
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(1, Args_14, 1))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, Args_14, 0))));

    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_158_158;
        MR_Word STATE_VARIABLE_Rs_7_50;
        MR_Box Var_51;
        MR_Word STATE_VARIABLE_Rs_8_52;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_7_50);
        Var_51 = mercury__univ__univ_value_1_f_0(&TypeInfo_158_158, Var_172);
        mercury__string__to_string__value_to_revstrings_5_p_3(TypeInfo_158_158, NonCanon_7, Var_51, STATE_VARIABLE_Rs_7_50, &STATE_VARIABLE_Rs_8_52);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_8_52, &STATE_VARIABLE_Rs_4_43);
      }
      else
      {
        MR_Word STATE_VARIABLE_Rs_10_56;
        MR_Word STATE_VARIABLE_Rs_11_57;
        MR_Word STATE_VARIABLE_Rs_12_58;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_10_56);
        mercury__string__to_string__arg_to_revstrings_5_p_3(NonCanon_7, Var_172, STATE_VARIABLE_Rs_10_56, &STATE_VARIABLE_Rs_11_57);
        mercury__string__to_string__term_args_to_revstrings_5_p_3(NonCanon_7, Var_171, STATE_VARIABLE_Rs_11_57, &STATE_VARIABLE_Rs_12_58);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_12_58, &STATE_VARIABLE_Rs_4_43);
      }
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "[|]") == 0))
    {
      MR_Word ListTail_16;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_1_39;
      MR_Word STATE_VARIABLE_Rs_2_40;
      MR_Word STATE_VARIABLE_Rs_3_41;
      MR_String Var_42;

      succeeded = (Var_171 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_16 = ((MR_Word) ((MR_hl_field(1, Var_171, 0))));
        Var_37 = ((MR_Word) ((MR_hl_field(1, Var_171, 1))));
        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = (MR_String) "[";
          mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_1_39);
          mercury__string__to_string__arg_to_revstrings_5_p_3(NonCanon_7, Var_172, STATE_VARIABLE_Rs_1_39, &STATE_VARIABLE_Rs_2_40);
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_2_40, &STATE_VARIABLE_Rs_3_41);
          Var_42 = (MR_String) "]";
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_3_41, &STATE_VARIABLE_Rs_4_43);
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    *STATE_VARIABLE_Rs_35 = STATE_VARIABLE_Rs_4_43;
  else
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
  else
  {
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, Args_14, 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Args_14, 0))));

    if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpInfos_23;

      succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_23);
      if (succeeded)
      {
        MR_Word OpPrio_24;
        MR_Word GtOrGeA_25;
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, 2))));

        succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OpPrio_24 = ((MR_Word) ((MR_hl_field(1, Var_62, 0))));
          GtOrGeA_25 = ((MR_Unsigned) ((MR_hl_field(1, Var_62, 1))) & (MR_Integer) 1);
          {
            MR_Word TypeInfo_160_160;
            MR_Word MinPrioA_26;
            MR_Word STATE_VARIABLE_Rs_14_64;
            MR_String Var_65;
            MR_Word STATE_VARIABLE_Rs_15_66;
            MR_Word STATE_VARIABLE_Rs_16_68;
            MR_Box Var_69;
            MR_Word STATE_VARIABLE_Rs_17_70;

            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_14_64);
            Var_65 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
            mercury__string__to_string__add_revstring_3_p_0(Var_65, STATE_VARIABLE_Rs_14_64, &STATE_VARIABLE_Rs_15_66);
            mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_15_66, &STATE_VARIABLE_Rs_16_68);
            switch (GtOrGeA_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                MinPrioA_26 = OpPrio_24;
                break;
              case (MR_Integer) 0:
                MinPrioA_26 = mercury__ops__increment_priority_1_f_0(OpPrio_24);
                break;
            }
            Var_69 = mercury__univ__univ_value_1_f_0(&TypeInfo_160_160, Var_170);
            mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_160_160, NonCanon_7, MinPrioA_26, Var_69, STATE_VARIABLE_Rs_16_68, &STATE_VARIABLE_Rs_17_70);
            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_17_70, STATE_VARIABLE_Rs_35);
          }
        }
        else
        {
          MR_Word OpPrio_126;
          MR_Word GtOrGeA_127;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, 3))));

          succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_126 = ((MR_Word) ((MR_hl_field(1, Var_73, 0))));
            GtOrGeA_127 = ((MR_Unsigned) ((MR_hl_field(1, Var_73, 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_161_161;
              MR_Word STATE_VARIABLE_Rs_19_75;
              MR_Box Var_76;
              MR_Word STATE_VARIABLE_Rs_20_77;
              MR_Word STATE_VARIABLE_Rs_21_79;
              MR_String Var_80;
              MR_Word STATE_VARIABLE_Rs_22_81;
              MR_Word MinPrioA_125;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_19_75);
              switch (GtOrGeA_127) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_125 = OpPrio_126;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_125 = mercury__ops__increment_priority_1_f_0(OpPrio_126);
                  break;
              }
              Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_161_161, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_161_161, NonCanon_7, MinPrioA_125, Var_76, STATE_VARIABLE_Rs_19_75, &STATE_VARIABLE_Rs_20_77);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_20_77, &STATE_VARIABLE_Rs_21_79);
              Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_21_79, &STATE_VARIABLE_Rs_22_81);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_22_81, STATE_VARIABLE_Rs_35);
            }
          }
          else
            mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, Var_169, 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, Var_169, 0))));

      if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OpInfos_140;

        succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_140);
        if (succeeded)
        {
          MR_Word GtOrGeB_28;
          MR_Word OpPrio_137;
          MR_Word GtOrGeA_138;
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, 0))));

          succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_137 = ((MR_Word) ((MR_hl_field(1, Var_88, 0))));
            GtOrGeA_138 = ((((MR_Unsigned) ((MR_hl_field(1, Var_88, 1))) >> 1)) & (MR_Integer) 1);
            GtOrGeB_28 = ((MR_Unsigned) ((MR_hl_field(1, Var_88, 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_163_163;
              MR_Word TypeInfo_164_164;
              MR_Word MinPrioB_29;
              MR_Word STATE_VARIABLE_Rs_26_90;
              MR_Box Var_91;
              MR_Word STATE_VARIABLE_Rs_27_92;
              MR_Word STATE_VARIABLE_Rs_28_94;
              MR_Box Var_101;
              MR_Word STATE_VARIABLE_Rs_32_102;
              MR_Word MinPrioA_129;

              switch (GtOrGeA_138) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_129 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_129 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              switch (GtOrGeB_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioB_29 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioB_29 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_26_90);
              Var_91 = mercury__univ__univ_value_1_f_0(&TypeInfo_163_163, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_163_163, NonCanon_7, MinPrioA_129, Var_91, STATE_VARIABLE_Rs_26_90, &STATE_VARIABLE_Rs_27_92);
              succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
              if (succeeded)
                mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_27_92, &STATE_VARIABLE_Rs_28_94);
              else
              {
                MR_Word STATE_VARIABLE_Rs_29_96;
                MR_String Var_97;
                MR_Word STATE_VARIABLE_Rs_30_98;

                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_27_92, &STATE_VARIABLE_Rs_29_96);
                Var_97 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_97, STATE_VARIABLE_Rs_29_96, &STATE_VARIABLE_Rs_30_98);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_30_98, &STATE_VARIABLE_Rs_28_94);
              }
              Var_101 = mercury__univ__univ_value_1_f_0(&TypeInfo_164_164, Var_174);
              mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_164_164, NonCanon_7, MinPrioB_29, Var_101, STATE_VARIABLE_Rs_28_94, &STATE_VARIABLE_Rs_32_102);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_32_102, STATE_VARIABLE_Rs_35);
            }
          }
          else
          {
            MR_Word OpPrio_132;
            MR_Word GtOrGeA_133;
            MR_Word GtOrGeB_135;
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, 1))));

            succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OpPrio_132 = ((MR_Word) ((MR_hl_field(1, Var_105, 0))));
              GtOrGeA_133 = ((((MR_Unsigned) ((MR_hl_field(1, Var_105, 1))) >> 1)) & (MR_Integer) 1);
              GtOrGeB_135 = ((MR_Unsigned) ((MR_hl_field(1, Var_105, 1))) & (MR_Integer) 1);
              {
                MR_Word TypeInfo_165_165;
                MR_Word TypeInfo_166_166;
                MR_Word STATE_VARIABLE_Rs_34_107;
                MR_String Var_108;
                MR_Word STATE_VARIABLE_Rs_35_109;
                MR_Word STATE_VARIABLE_Rs_36_111;
                MR_Box Var_112;
                MR_Word STATE_VARIABLE_Rs_37_113;
                MR_Word STATE_VARIABLE_Rs_38_115;
                MR_Box Var_116;
                MR_Word STATE_VARIABLE_Rs_39_117;
                MR_Word MinPrioA_130;
                MR_Word MinPrioB_131;

                switch (GtOrGeA_133) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioA_130 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioA_130 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                switch (GtOrGeB_135) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioB_131 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioB_131 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_34_107);
                Var_108 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_108, STATE_VARIABLE_Rs_34_107, &STATE_VARIABLE_Rs_35_109);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_35_109, &STATE_VARIABLE_Rs_36_111);
                Var_112 = mercury__univ__univ_value_1_f_0(&TypeInfo_165_165, Var_170);
                mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_165_165, NonCanon_7, MinPrioA_130, Var_112, STATE_VARIABLE_Rs_36_111, &STATE_VARIABLE_Rs_37_113);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_37_113, &STATE_VARIABLE_Rs_38_115);
                Var_116 = mercury__univ__univ_value_1_f_0(&TypeInfo_166_166, Var_174);
                mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_166_166, NonCanon_7, MinPrioB_131, Var_116, STATE_VARIABLE_Rs_38_115, &STATE_VARIABLE_Rs_39_117);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_39_117, STATE_VARIABLE_Rs_35);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
        }
        else
          mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_3(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_3(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfSTATE_VARIABLE_Rs_25 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Rs_1_19;
      MR_Word STATE_VARIABLE_Rs_2_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_1_19, &STATE_VARIABLE_Rs_2_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_2_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_5 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Rs_1_19;
      MR_Word STATE_VARIABLE_Rs_2_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_1_19, &STATE_VARIABLE_Rs_2_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_2_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3(
  MR_Word TypeInfo_for_T_75,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_39,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_108)
{
  MR_bool succeeded;
  MR_Word TypeCtorDesc_12;
  MR_Word ArgTypeDescs_13;
  MR_String TypeCtorModuleName_14;
  MR_String TypeCtorName_15;
  MR_Word Var_41;
  MR_String Var_106;
  MR_Integer Var_107;
  MR_String ToAddStr_17;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_75 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_41 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_12  = TypeCtorDesc;
	ArgTypeDescs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	TypeCtorModuleName_14  = TypeCtorModuleName;
	Var_106  = TypeCtorName;
	Var_107  = TypeCtorArity;
}
  TypeCtorName_15 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtorDesc_12);
  // binary string jump switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 3;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(TypeCtorModuleName_14, ((&mercury__string__to_string_vector_common_6[24 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&mercury__string__to_string_vector_common_6[24 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "bitmap"
            ;
            {
              MR_Word TypeCtorInfo_90_90;
              MR_Box Bitmap_31;
              MR_String Var_60;
              MR_Box conv17_Bitmap_31;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "bitmap") == 0);
              if (succeeded)
              {
                TypeCtorInfo_90_90 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_90_90, X_10, &conv17_Bitmap_31);
                Bitmap_31 = ((MR_Box) (conv17_Bitmap_31));
                Var_60 = mercury__bitmap__to_string_1_f_0(Bitmap_31);
                ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Var_60);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "builtin"
            ;
            {
              MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_15)) & (MR_Integer) 63);
              MR_String str_5 = ((&mercury__string__to_string_vector_common_7[384 + slot_4]))->mercury__string__to_string__vector_common_type_7_0__vct_7_f_0;

              // hashed string jump switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_5 != NULL)) && ((strcmp(str_5, TypeCtorName_15) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_4) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      // case "string"
                      ;
                      {
                        MR_String Str_16;
                        MR_Box conv11_Str_16;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv11_Str_16);
                        Str_16 = ((MR_String) (conv11_Str_16));
                        ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Str_16);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "uint32"
                      ;
                      {
                        uint32_t U32_28;
                        MR_String Var_56;
                        MR_Box conv14_U32_28;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv14_U32_28);
                        U32_28 = ((uint32_t) (MR_Word) conv14_U32_28);
                        Var_56 = mercury__string__uint32_to_string_1_f_0(U32_28);
                        mercury__string__append_3_p_2(Var_56, (MR_String) "u32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "character"
                      ;
                      {
                        MR_Char Char_18;
                        MR_Box conv4_Char_18;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv4_Char_18);
                        Char_18 = ((MR_Char) (MR_Word) conv4_Char_18);
                        ToAddStr_17 = mercury__term_io__quoted_char_to_string_1_f_0(Char_18);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      // case "int16"
                      ;
                      {
                        int16_t I16_22;
                        MR_String Var_44;
                        MR_Box conv7_I16_22;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv7_I16_22);
                        I16_22 = ((int16_t) (MR_Word) conv7_I16_22);
                        Var_44 = mercury__string__int16_to_string_1_f_0(I16_22);
                        mercury__string__append_3_p_2(Var_44, (MR_String) "i16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      // case "int"
                      ;
                      {
                        MR_Integer I_20;
                        MR_Box conv6_I_20;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv6_I_20);
                        I_20 = ((MR_Integer) (conv6_I_20));
                        ToAddStr_17 = mercury__string__int_to_string_1_f_0(I_20);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      // case "uint8"
                      ;
                      {
                        uint8_t U8_26;
                        MR_String Var_52;
                        MR_Box conv16_U8_26;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv16_U8_26);
                        U8_26 = ((uint8_t) (MR_Word) conv16_U8_26);
                        Var_52 = mercury__string__uint8_to_string_1_f_0(U8_26);
                        mercury__string__append_3_p_2(Var_52, (MR_String) "u8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 20:
                    {
                      // case "uint"
                      ;
                      {
                        MR_Unsigned U_25;
                        MR_String Var_50;
                        MR_Box conv12_U_25;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv12_U_25);
                        U_25 = ((MR_Unsigned) (conv12_U_25));
                        Var_50 = mercury__string__uint_to_string_1_f_0(U_25);
                        mercury__string__append_3_p_2(Var_50, (MR_String) "u", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 23:
                    {
                      // case "int8"
                      ;
                      {
                        int8_t I8_21;
                        MR_String Var_42;
                        MR_Box conv10_I8_21;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv10_I8_21);
                        I8_21 = ((int8_t) (MR_Word) conv10_I8_21);
                        Var_42 = mercury__string__int8_to_string_1_f_0(I8_21);
                        mercury__string__append_3_p_2(Var_42, (MR_String) "i8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 26:
                    {
                      // case "c_pointer"
                      ;
                      {
                        MR_Word CPtr_30;
                        MR_Box conv3_CPtr_30;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv3_CPtr_30);
                        CPtr_30 = ((MR_Word) (conv3_CPtr_30));
                        mercury__string__c_pointer_to_string_2_p_0(CPtr_30, &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 28:
                    {
                      // case "uint64"
                      ;
                      {
                        uint64_t U64_29;
                        MR_String Var_58;
                        MR_Box conv15_U64_29;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), X_10, &conv15_U64_29);
                        U64_29 = MR_unbox_uint64(conv15_U64_29);
                        Var_58 = mercury__string__uint64_to_string_1_f_0(U64_29);
                        mercury__string__append_3_p_2(Var_58, (MR_String) "u64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 33:
                    {
                      // case "uint16"
                      ;
                      {
                        uint16_t U16_27;
                        MR_String Var_54;
                        MR_Box conv13_U16_27;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv13_U16_27);
                        U16_27 = ((uint16_t) (MR_Word) conv13_U16_27);
                        Var_54 = mercury__string__uint16_to_string_1_f_0(U16_27);
                        mercury__string__append_3_p_2(Var_54, (MR_String) "u16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 35:
                    {
                      // case "float"
                      ;
                      {
                        MR_Float Float_19;
                        MR_Box conv5_Float_19;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv5_Float_19);
                        Float_19 = MR_unbox_float(conv5_Float_19);
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3

	MR_Float Flt;
	MR_String Str;

	Flt = Float_19 ;
		{
{
    // For efficiency reasons, we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	ToAddStr_17  = Str;
}
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 37:
                    {
                      // case "int32"
                      ;
                      {
                        int32_t I32_23;
                        MR_String Var_46;
                        MR_Box conv8_I32_23;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_I32_23);
                        I32_23 = ((int32_t) (MR_Word) conv8_I32_23);
                        Var_46 = mercury__string__int32_to_string_1_f_0(I32_23);
                        mercury__string__append_3_p_2(Var_46, (MR_String) "i32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 48:
                    {
                      // case "int64"
                      ;
                      {
                        int64_t I64_24;
                        MR_String Var_48;
                        MR_Box conv9_I64_24;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), X_10, &conv9_I64_24);
                        I64_24 = MR_unbox_int64(conv9_I64_24);
                        Var_48 = mercury__string__int64_to_string_1_f_0(I64_24);
                        mercury__string__append_3_p_2(Var_48, (MR_String) "i64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "private_builtin"
            ;
            {
              MR_Word PITypeInfo_35;
              MR_Word TypeCtorInfo_94_94;
              MR_Word TypeInfo_36;
              MR_Word Var_62;
              MR_String Var_63;
              MR_Word TypeDesc_70;
              MR_Box conv2_PITypeInfo_35;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "type_info") == 0);
              if (succeeded)
              {
                succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
                  succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_94_94 = (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0);
                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_94_94, X_10, &conv2_PITypeInfo_35);
                    PITypeInfo_35 = ((MR_Word) (conv2_PITypeInfo_35));
                    TypeInfo_36 = (MR_Word) (PITypeInfo_35);
                    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_36, &TypeDesc_70);
                    Var_63 = mercury__type_desc__type_name_1_f_0(TypeDesc_70);
                    ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_63);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "type_desc"
            ;
            if ((strcmp(TypeCtorName_15, (MR_String) "type_desc") == 0))
            {
              MR_Word TypeDesc_32;
              MR_String Var_61;
              MR_Box conv0_TypeDesc_32;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv0_TypeDesc_32);
              TypeDesc_32 = ((MR_Word) (conv0_TypeDesc_32));
              Var_61 = mercury__type_desc__type_name_1_f_0(TypeDesc_32);
              ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_61);
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(TypeCtorName_15, (MR_String) "type_ctor_desc") == 0))
            {
              MR_Word Var_102;
              MR_Box conv1_Var_102;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv1_Var_102);
              Var_102 = ((MR_Word) (conv1_Var_102));
              succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(TypeCtorDesc_12, Var_102);
              if (succeeded)
              {
                ToAddStr_17 = mercury__string__to_string__type_ctor_desc_to_string_1_f_0(TypeCtorDesc_12);
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_1;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_1:;
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_40;

    {
      STATE_VARIABLE_Rs_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_40, 0) = ((MR_Box) (ToAddStr_17));
      MR_hl_field(1, STATE_VARIABLE_Rs_40, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_39));
    }
    *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_40;
  }
  else
  {
    MR_Word STATE_VARIABLE_Rs_2_66;
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_104 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 0))));
      Var_103 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
      succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_95_95;
          MR_Word TypeCtorInfo_96_96;
          MR_Word TypeInfo_97_97;
          MR_ArrayPtr Array_37;
          MR_Box conv18_Array_37;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_95_95  = TypeInfo_for_T;
}
            TypeCtorInfo_96_96 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
            {
              TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_97_97, 0) = ((MR_Box) (TypeCtorInfo_96_96));
              MR_hl_field(0, TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_95_95));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_97_97, X_10, &conv18_Array_37);
            Array_37 = ((MR_ArrayPtr) (conv18_Array_37));
            mercury__string__to_string__array_to_revstrings_5_p_3(TypeInfo_95_95, NonCanon_7, (MR_ArrayPtr) (Array_37), STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_98_98;
          MR_Word TypeCtorInfo_99_99;
          MR_Word TypeInfo_100_100;
          MR_Box VersionArray_38;
          MR_Box conv19_VersionArray_38;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "version_array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_98_98  = TypeInfo_for_T;
}
            TypeCtorInfo_99_99 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
            {
              TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_100_100, 0) = ((MR_Box) (TypeCtorInfo_99_99));
              MR_hl_field(0, TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_98_98));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_100_100, X_10, &conv19_VersionArray_38);
            VersionArray_38 = ((MR_Box) (conv19_VersionArray_38));
            mercury__string__to_string__version_array_to_revstrings_5_p_3(TypeInfo_98_98, NonCanon_7, VersionArray_38, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_2_66;
    else
    {
      MR_Word STATE_VARIABLE_Rs_110;

      mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(TypeInfo_for_T_75, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_110);
      *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_110;
    }
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_1_14;
  MR_Word Var_15;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Word Priority_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_29;
  MR_Word * AddrSTATE_VARIABLE_Rs_2_32;

  {
    STATE_VARIABLE_Rs_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 0) = ((MR_Box) ((MR_String) "version_array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_3

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) Array_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
  Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(Array_8, Var_25, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  conv1_Priority_29 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_29 = ((MR_Word) (conv1_Priority_29));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_2_32 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3(TypeInfo_20_20, NonCanon_6, Priority_29, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_1_14, AddrSTATE_VARIABLE_Rs_2_32);
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_1_14;
  MR_Word Var_15;
  MR_Word Priority_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_21;
  MR_Word * AddrSTATE_VARIABLE_Rs_2_23;

  {
    STATE_VARIABLE_Rs_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 0) = ((MR_Box) ((MR_String) "array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
  mercury__array__to_list_2_p_0(TypeInfo_for_T_18, Array_8, &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  conv1_Priority_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_21 = ((MR_Word) (conv1_Priority_21));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_2_23 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_3(TypeInfo_20_20, NonCanon_6, Priority_21, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_1_14, AddrSTATE_VARIABLE_Rs_2_23);
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_Rs_3_24;
  MR_Word TypeClassInfo_for_op_table_33;
  MR_Word Var_18;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_18;

  if (succeeded)
  {
    TypeClassInfo_for_op_table_33 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, 0)), 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, 0)), 13))));
      conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)));
      Var_18 = ((MR_Word) (conv2_Var_18));
      Var_34 = (MR_Unsigned) (Priority_10);
      Var_35 = (MR_Unsigned) (Var_18);
      succeeded = (Var_34 > Var_35);
      if (!(succeeded))
        succeeded = (Var_34 == Var_35);
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_1_20;
    MR_String Var_21;
    MR_Word STATE_VARIABLE_Rs_2_22;

    {
      STATE_VARIABLE_Rs_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_1_20, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_1_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
    Var_21 = mercury__term_io__quoted_atom_1_f_0(Functor_11);
    {
      STATE_VARIABLE_Rs_2_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_2_22, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, STATE_VARIABLE_Rs_2_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_1_20));
    }
    {
      STATE_VARIABLE_Rs_3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_2_22));
    }
  }
  else
  {
    MR_String Var_25;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_4[0]), Functor_11, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_38);
    Var_41 = (MR_Word) (Var_38);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, &Var_42);
    Var_25 = mercury__string__append_list_1_f_0(Var_42);
    {
      STATE_VARIABLE_Rs_3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
  }
  if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_3_24;
  else
  {
    MR_Word TypeInfo_15_47;
    MR_Word Y_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
    MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
    MR_Word STATE_VARIABLE_Rs_5_29;
    MR_Word STATE_VARIABLE_Rs_6_30;
    MR_Word Priority_44;
    MR_Box Var_45;
    MR_Word * AddrSTATE_VARIABLE_Rs_7_48;

    {
      STATE_VARIABLE_Rs_5_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_5_29, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_5_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_3_24));
    }
    Priority_44 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
    Var_45 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_47, Y_14);
    mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_15_47, NonCanon_8, Priority_44, Var_45, STATE_VARIABLE_Rs_5_29, &STATE_VARIABLE_Rs_6_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_Rs_7_48 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_17, 1)));
    mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_3(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_6_30, AddrSTATE_VARIABLE_Rs_7_48);
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_2(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  MR_Box conv1_Priority_14;

  conv1_Priority_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_14 = ((MR_Word) (conv1_Priority_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_for_T_12, NonCanon_5, Priority_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  *String_8 = mercury__string__append_list_1_f_0(Var_11);
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word Priority_10;
  MR_Box Var_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 15))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(0, X_8, 0))));
  Var_13 = (MR_hl_field(0, X_8, 1));
  mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_15, NonCanon_6, Priority_10, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_27_27 = ((MR_Word) ((MR_hl_field(0, Univ_8, 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(0, Univ_8, 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_2(TypeInfo_27_27, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(1, Var_18, 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_32;
      MR_Word STATE_VARIABLE_Rs_1_21;
      MR_Word STATE_VARIABLE_Rs_2_22;
      MR_Word Priority_29;
      MR_Box Var_30;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_29 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_30 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_32, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_32, NonCanon_6, Priority_29, Var_30, STATE_VARIABLE_Rs_1_21, &STATE_VARIABLE_Rs_2_22);
      // direct tailcall eliminated
      ;
      next_value_of_Univ_8 = ListTail_14;
      next_value_of_STATE_VARIABLE_Rs_0_15 = STATE_VARIABLE_Rs_2_22;
      Univ_8 = next_value_of_Univ_8;
      STATE_VARIABLE_Rs_0_15 = next_value_of_STATE_VARIABLE_Rs_0_15;
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_10, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Rs_16 = STATE_VARIABLE_Rs_0_15;
      else
      {
        MR_Word TypeInfo_28_28;
        MR_Word STATE_VARIABLE_Rs_4_25;
        MR_Box Var_26;
        MR_Word Priority_33;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Priority_33;

        {
          STATE_VARIABLE_Rs_4_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Rs_4_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(1, STATE_VARIABLE_Rs_4_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(0, Univ_8, 0))));
        Var_26 = (MR_hl_field(0, Univ_8, 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
        conv1_Priority_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Priority_33 = ((MR_Word) (conv1_Priority_33));
        mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_28_28, NonCanon_6, Priority_33, Var_26, STATE_VARIABLE_Rs_4_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word Priority_10;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_for_T_13, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_2(
  MR_Word TypeInfo_for_T_75,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_39,
  MR_Word * STATE_VARIABLE_Rs_40)
{
  MR_bool succeeded;
  MR_Word TypeCtorDesc_12;
  MR_Word ArgTypeDescs_13;
  MR_String TypeCtorModuleName_14;
  MR_String TypeCtorName_15;
  MR_Word Var_41;
  MR_String Var_106;
  MR_Integer Var_107;
  MR_String ToAddStr_17;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_75 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_41 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_12  = TypeCtorDesc;
	ArgTypeDescs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	TypeCtorModuleName_14  = TypeCtorModuleName;
	Var_106  = TypeCtorName;
	Var_107  = TypeCtorArity;
}
  TypeCtorName_15 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtorDesc_12);
  // binary string jump switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 3;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(TypeCtorModuleName_14, ((&mercury__string__to_string_vector_common_6[20 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&mercury__string__to_string_vector_common_6[20 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "bitmap"
            ;
            {
              MR_Word TypeCtorInfo_90_90;
              MR_Box Bitmap_31;
              MR_String Var_60;
              MR_Box conv17_Bitmap_31;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "bitmap") == 0);
              if (succeeded)
              {
                TypeCtorInfo_90_90 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_90_90, X_10, &conv17_Bitmap_31);
                Bitmap_31 = ((MR_Box) (conv17_Bitmap_31));
                Var_60 = mercury__bitmap__to_string_1_f_0(Bitmap_31);
                ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Var_60);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "builtin"
            ;
            {
              MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_15)) & (MR_Integer) 63);
              MR_String str_5 = ((&mercury__string__to_string_vector_common_7[320 + slot_4]))->mercury__string__to_string__vector_common_type_7_0__vct_7_f_0;

              // hashed string jump switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_5 != NULL)) && ((strcmp(str_5, TypeCtorName_15) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_4) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      // case "string"
                      ;
                      {
                        MR_String Str_16;
                        MR_Box conv11_Str_16;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv11_Str_16);
                        Str_16 = ((MR_String) (conv11_Str_16));
                        ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Str_16);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "uint32"
                      ;
                      {
                        uint32_t U32_28;
                        MR_String Var_56;
                        MR_Box conv14_U32_28;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv14_U32_28);
                        U32_28 = ((uint32_t) (MR_Word) conv14_U32_28);
                        Var_56 = mercury__string__uint32_to_string_1_f_0(U32_28);
                        mercury__string__append_3_p_2(Var_56, (MR_String) "u32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "character"
                      ;
                      {
                        MR_Char Char_18;
                        MR_Box conv4_Char_18;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv4_Char_18);
                        Char_18 = ((MR_Char) (MR_Word) conv4_Char_18);
                        ToAddStr_17 = mercury__term_io__quoted_char_to_string_1_f_0(Char_18);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      // case "int16"
                      ;
                      {
                        int16_t I16_22;
                        MR_String Var_44;
                        MR_Box conv7_I16_22;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv7_I16_22);
                        I16_22 = ((int16_t) (MR_Word) conv7_I16_22);
                        Var_44 = mercury__string__int16_to_string_1_f_0(I16_22);
                        mercury__string__append_3_p_2(Var_44, (MR_String) "i16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      // case "int"
                      ;
                      {
                        MR_Integer I_20;
                        MR_Box conv6_I_20;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv6_I_20);
                        I_20 = ((MR_Integer) (conv6_I_20));
                        ToAddStr_17 = mercury__string__int_to_string_1_f_0(I_20);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      // case "uint8"
                      ;
                      {
                        uint8_t U8_26;
                        MR_String Var_52;
                        MR_Box conv16_U8_26;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv16_U8_26);
                        U8_26 = ((uint8_t) (MR_Word) conv16_U8_26);
                        Var_52 = mercury__string__uint8_to_string_1_f_0(U8_26);
                        mercury__string__append_3_p_2(Var_52, (MR_String) "u8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 20:
                    {
                      // case "uint"
                      ;
                      {
                        MR_Unsigned U_25;
                        MR_String Var_50;
                        MR_Box conv12_U_25;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv12_U_25);
                        U_25 = ((MR_Unsigned) (conv12_U_25));
                        Var_50 = mercury__string__uint_to_string_1_f_0(U_25);
                        mercury__string__append_3_p_2(Var_50, (MR_String) "u", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 23:
                    {
                      // case "int8"
                      ;
                      {
                        int8_t I8_21;
                        MR_String Var_42;
                        MR_Box conv10_I8_21;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv10_I8_21);
                        I8_21 = ((int8_t) (MR_Word) conv10_I8_21);
                        Var_42 = mercury__string__int8_to_string_1_f_0(I8_21);
                        mercury__string__append_3_p_2(Var_42, (MR_String) "i8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 26:
                    {
                      // case "c_pointer"
                      ;
                      {
                        MR_Word CPtr_30;
                        MR_Box conv3_CPtr_30;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv3_CPtr_30);
                        CPtr_30 = ((MR_Word) (conv3_CPtr_30));
                        mercury__string__c_pointer_to_string_2_p_0(CPtr_30, &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 28:
                    {
                      // case "uint64"
                      ;
                      {
                        uint64_t U64_29;
                        MR_String Var_58;
                        MR_Box conv15_U64_29;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), X_10, &conv15_U64_29);
                        U64_29 = MR_unbox_uint64(conv15_U64_29);
                        Var_58 = mercury__string__uint64_to_string_1_f_0(U64_29);
                        mercury__string__append_3_p_2(Var_58, (MR_String) "u64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 33:
                    {
                      // case "uint16"
                      ;
                      {
                        uint16_t U16_27;
                        MR_String Var_54;
                        MR_Box conv13_U16_27;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv13_U16_27);
                        U16_27 = ((uint16_t) (MR_Word) conv13_U16_27);
                        Var_54 = mercury__string__uint16_to_string_1_f_0(U16_27);
                        mercury__string__append_3_p_2(Var_54, (MR_String) "u16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 35:
                    {
                      // case "float"
                      ;
                      {
                        MR_Float Float_19;
                        MR_Box conv5_Float_19;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv5_Float_19);
                        Float_19 = MR_unbox_float(conv5_Float_19);
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Float Flt;
	MR_String Str;

	Flt = Float_19 ;
		{
{
    // For efficiency reasons, we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	ToAddStr_17  = Str;
}
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 37:
                    {
                      // case "int32"
                      ;
                      {
                        int32_t I32_23;
                        MR_String Var_46;
                        MR_Box conv8_I32_23;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_I32_23);
                        I32_23 = ((int32_t) (MR_Word) conv8_I32_23);
                        Var_46 = mercury__string__int32_to_string_1_f_0(I32_23);
                        mercury__string__append_3_p_2(Var_46, (MR_String) "i32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 48:
                    {
                      // case "int64"
                      ;
                      {
                        int64_t I64_24;
                        MR_String Var_48;
                        MR_Box conv9_I64_24;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), X_10, &conv9_I64_24);
                        I64_24 = MR_unbox_int64(conv9_I64_24);
                        Var_48 = mercury__string__int64_to_string_1_f_0(I64_24);
                        mercury__string__append_3_p_2(Var_48, (MR_String) "i64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "private_builtin"
            ;
            {
              MR_Word PITypeInfo_35;
              MR_Word TypeCtorInfo_94_94;
              MR_Word TypeInfo_36;
              MR_Word Var_62;
              MR_String Var_63;
              MR_Word TypeDesc_70;
              MR_Box conv2_PITypeInfo_35;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "type_info") == 0);
              if (succeeded)
              {
                succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
                  succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_94_94 = (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0);
                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_94_94, X_10, &conv2_PITypeInfo_35);
                    PITypeInfo_35 = ((MR_Word) (conv2_PITypeInfo_35));
                    TypeInfo_36 = (MR_Word) (PITypeInfo_35);
                    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_36, &TypeDesc_70);
                    Var_63 = mercury__type_desc__type_name_1_f_0(TypeDesc_70);
                    ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_63);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "type_desc"
            ;
            if ((strcmp(TypeCtorName_15, (MR_String) "type_desc") == 0))
            {
              MR_Word TypeDesc_32;
              MR_String Var_61;
              MR_Box conv0_TypeDesc_32;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv0_TypeDesc_32);
              TypeDesc_32 = ((MR_Word) (conv0_TypeDesc_32));
              Var_61 = mercury__type_desc__type_name_1_f_0(TypeDesc_32);
              ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_61);
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(TypeCtorName_15, (MR_String) "type_ctor_desc") == 0))
            {
              MR_Word Var_102;
              MR_Box conv1_Var_102;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv1_Var_102);
              Var_102 = ((MR_Word) (conv1_Var_102));
              succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(TypeCtorDesc_12, Var_102);
              if (succeeded)
              {
                ToAddStr_17 = mercury__string__to_string__type_ctor_desc_to_string_1_f_0(TypeCtorDesc_12);
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_1;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_1:;
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_40 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ToAddStr_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_39));
    }
  else
  {
    MR_Word STATE_VARIABLE_Rs_2_66;
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_104 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 0))));
      Var_103 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
      succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_95_95;
          MR_Word TypeCtorInfo_96_96;
          MR_Word TypeInfo_97_97;
          MR_ArrayPtr Array_37;
          MR_Box conv18_Array_37;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_95_95  = TypeInfo_for_T;
}
            TypeCtorInfo_96_96 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
            {
              TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_97_97, 0) = ((MR_Box) (TypeCtorInfo_96_96));
              MR_hl_field(0, TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_95_95));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_97_97, X_10, &conv18_Array_37);
            Array_37 = ((MR_ArrayPtr) (conv18_Array_37));
            mercury__string__to_string__array_to_revstrings_5_p_2(TypeInfo_95_95, NonCanon_7, (MR_ArrayPtr) (Array_37), STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_98_98;
          MR_Word TypeCtorInfo_99_99;
          MR_Word TypeInfo_100_100;
          MR_Box VersionArray_38;
          MR_Box conv19_VersionArray_38;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "version_array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_98_98  = TypeInfo_for_T;
}
            TypeCtorInfo_99_99 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
            {
              TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_100_100, 0) = ((MR_Box) (TypeCtorInfo_99_99));
              MR_hl_field(0, TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_98_98));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_100_100, X_10, &conv19_VersionArray_38);
            VersionArray_38 = ((MR_Box) (conv19_VersionArray_38));
            mercury__string__to_string__version_array_to_revstrings_5_p_2(TypeInfo_98_98, NonCanon_7, VersionArray_38, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Rs_40 = STATE_VARIABLE_Rs_2_66;
    else
      mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(TypeInfo_for_T_75, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_39, STATE_VARIABLE_Rs_40);
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String Functor_12;
  MR_Word Args_14;
  MR_Integer _Arity_13;
  MR_Word STATE_VARIABLE_Rs_4_43;

  mercury__deconstruct__deconstruct_5_p_2(TypeInfo_for_T_157, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((strcmp(Functor_12, (MR_String) "[]") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_4_43);
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_4_43);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
  {
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(1, Args_14, 1))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, Args_14, 0))));

    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_158_158;
        MR_Word STATE_VARIABLE_Rs_7_50;
        MR_Box Var_51;
        MR_Word STATE_VARIABLE_Rs_8_52;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_7_50);
        Var_51 = mercury__univ__univ_value_1_f_0(&TypeInfo_158_158, Var_172);
        mercury__string__to_string__value_to_revstrings_5_p_2(TypeInfo_158_158, NonCanon_7, Var_51, STATE_VARIABLE_Rs_7_50, &STATE_VARIABLE_Rs_8_52);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_8_52, &STATE_VARIABLE_Rs_4_43);
      }
      else
      {
        MR_Word STATE_VARIABLE_Rs_10_56;
        MR_Word STATE_VARIABLE_Rs_11_57;
        MR_Word STATE_VARIABLE_Rs_12_58;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_10_56);
        mercury__string__to_string__arg_to_revstrings_5_p_2(NonCanon_7, Var_172, STATE_VARIABLE_Rs_10_56, &STATE_VARIABLE_Rs_11_57);
        mercury__string__to_string__term_args_to_revstrings_5_p_2(NonCanon_7, Var_171, STATE_VARIABLE_Rs_11_57, &STATE_VARIABLE_Rs_12_58);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_12_58, &STATE_VARIABLE_Rs_4_43);
      }
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "[|]") == 0))
    {
      MR_Word ListTail_16;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_1_39;
      MR_Word STATE_VARIABLE_Rs_2_40;
      MR_Word STATE_VARIABLE_Rs_3_41;
      MR_String Var_42;

      succeeded = (Var_171 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_16 = ((MR_Word) ((MR_hl_field(1, Var_171, 0))));
        Var_37 = ((MR_Word) ((MR_hl_field(1, Var_171, 1))));
        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = (MR_String) "[";
          mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_1_39);
          mercury__string__to_string__arg_to_revstrings_5_p_2(NonCanon_7, Var_172, STATE_VARIABLE_Rs_1_39, &STATE_VARIABLE_Rs_2_40);
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_2_40, &STATE_VARIABLE_Rs_3_41);
          Var_42 = (MR_String) "]";
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_3_41, &STATE_VARIABLE_Rs_4_43);
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    *STATE_VARIABLE_Rs_35 = STATE_VARIABLE_Rs_4_43;
  else
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
  else
  {
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, Args_14, 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Args_14, 0))));

    if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpInfos_23;

      succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_23);
      if (succeeded)
      {
        MR_Word OpPrio_24;
        MR_Word GtOrGeA_25;
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, 2))));

        succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OpPrio_24 = ((MR_Word) ((MR_hl_field(1, Var_62, 0))));
          GtOrGeA_25 = ((MR_Unsigned) ((MR_hl_field(1, Var_62, 1))) & (MR_Integer) 1);
          {
            MR_Word TypeInfo_160_160;
            MR_Word MinPrioA_26;
            MR_Word STATE_VARIABLE_Rs_14_64;
            MR_String Var_65;
            MR_Word STATE_VARIABLE_Rs_15_66;
            MR_Word STATE_VARIABLE_Rs_16_68;
            MR_Box Var_69;
            MR_Word STATE_VARIABLE_Rs_17_70;

            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_14_64);
            Var_65 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
            mercury__string__to_string__add_revstring_3_p_0(Var_65, STATE_VARIABLE_Rs_14_64, &STATE_VARIABLE_Rs_15_66);
            mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_15_66, &STATE_VARIABLE_Rs_16_68);
            switch (GtOrGeA_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                MinPrioA_26 = OpPrio_24;
                break;
              case (MR_Integer) 0:
                MinPrioA_26 = mercury__ops__increment_priority_1_f_0(OpPrio_24);
                break;
            }
            Var_69 = mercury__univ__univ_value_1_f_0(&TypeInfo_160_160, Var_170);
            mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_160_160, NonCanon_7, MinPrioA_26, Var_69, STATE_VARIABLE_Rs_16_68, &STATE_VARIABLE_Rs_17_70);
            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_17_70, STATE_VARIABLE_Rs_35);
          }
        }
        else
        {
          MR_Word OpPrio_126;
          MR_Word GtOrGeA_127;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, 3))));

          succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_126 = ((MR_Word) ((MR_hl_field(1, Var_73, 0))));
            GtOrGeA_127 = ((MR_Unsigned) ((MR_hl_field(1, Var_73, 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_161_161;
              MR_Word STATE_VARIABLE_Rs_19_75;
              MR_Box Var_76;
              MR_Word STATE_VARIABLE_Rs_20_77;
              MR_Word STATE_VARIABLE_Rs_21_79;
              MR_String Var_80;
              MR_Word STATE_VARIABLE_Rs_22_81;
              MR_Word MinPrioA_125;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_19_75);
              switch (GtOrGeA_127) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_125 = OpPrio_126;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_125 = mercury__ops__increment_priority_1_f_0(OpPrio_126);
                  break;
              }
              Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_161_161, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_161_161, NonCanon_7, MinPrioA_125, Var_76, STATE_VARIABLE_Rs_19_75, &STATE_VARIABLE_Rs_20_77);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_20_77, &STATE_VARIABLE_Rs_21_79);
              Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_21_79, &STATE_VARIABLE_Rs_22_81);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_22_81, STATE_VARIABLE_Rs_35);
            }
          }
          else
            mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, Var_169, 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, Var_169, 0))));

      if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OpInfos_140;

        succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_140);
        if (succeeded)
        {
          MR_Word GtOrGeB_28;
          MR_Word OpPrio_137;
          MR_Word GtOrGeA_138;
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, 0))));

          succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_137 = ((MR_Word) ((MR_hl_field(1, Var_88, 0))));
            GtOrGeA_138 = ((((MR_Unsigned) ((MR_hl_field(1, Var_88, 1))) >> 1)) & (MR_Integer) 1);
            GtOrGeB_28 = ((MR_Unsigned) ((MR_hl_field(1, Var_88, 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_163_163;
              MR_Word TypeInfo_164_164;
              MR_Word MinPrioB_29;
              MR_Word STATE_VARIABLE_Rs_26_90;
              MR_Box Var_91;
              MR_Word STATE_VARIABLE_Rs_27_92;
              MR_Word STATE_VARIABLE_Rs_28_94;
              MR_Box Var_101;
              MR_Word STATE_VARIABLE_Rs_32_102;
              MR_Word MinPrioA_129;

              switch (GtOrGeA_138) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_129 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_129 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              switch (GtOrGeB_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioB_29 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioB_29 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_26_90);
              Var_91 = mercury__univ__univ_value_1_f_0(&TypeInfo_163_163, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_163_163, NonCanon_7, MinPrioA_129, Var_91, STATE_VARIABLE_Rs_26_90, &STATE_VARIABLE_Rs_27_92);
              succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
              if (succeeded)
                mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_27_92, &STATE_VARIABLE_Rs_28_94);
              else
              {
                MR_Word STATE_VARIABLE_Rs_29_96;
                MR_String Var_97;
                MR_Word STATE_VARIABLE_Rs_30_98;

                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_27_92, &STATE_VARIABLE_Rs_29_96);
                Var_97 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_97, STATE_VARIABLE_Rs_29_96, &STATE_VARIABLE_Rs_30_98);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_30_98, &STATE_VARIABLE_Rs_28_94);
              }
              Var_101 = mercury__univ__univ_value_1_f_0(&TypeInfo_164_164, Var_174);
              mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_164_164, NonCanon_7, MinPrioB_29, Var_101, STATE_VARIABLE_Rs_28_94, &STATE_VARIABLE_Rs_32_102);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_32_102, STATE_VARIABLE_Rs_35);
            }
          }
          else
          {
            MR_Word OpPrio_132;
            MR_Word GtOrGeA_133;
            MR_Word GtOrGeB_135;
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, 1))));

            succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OpPrio_132 = ((MR_Word) ((MR_hl_field(1, Var_105, 0))));
              GtOrGeA_133 = ((((MR_Unsigned) ((MR_hl_field(1, Var_105, 1))) >> 1)) & (MR_Integer) 1);
              GtOrGeB_135 = ((MR_Unsigned) ((MR_hl_field(1, Var_105, 1))) & (MR_Integer) 1);
              {
                MR_Word TypeInfo_165_165;
                MR_Word TypeInfo_166_166;
                MR_Word STATE_VARIABLE_Rs_34_107;
                MR_String Var_108;
                MR_Word STATE_VARIABLE_Rs_35_109;
                MR_Word STATE_VARIABLE_Rs_36_111;
                MR_Box Var_112;
                MR_Word STATE_VARIABLE_Rs_37_113;
                MR_Word STATE_VARIABLE_Rs_38_115;
                MR_Box Var_116;
                MR_Word STATE_VARIABLE_Rs_39_117;
                MR_Word MinPrioA_130;
                MR_Word MinPrioB_131;

                switch (GtOrGeA_133) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioA_130 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioA_130 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                switch (GtOrGeB_135) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioB_131 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioB_131 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_34_107);
                Var_108 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_108, STATE_VARIABLE_Rs_34_107, &STATE_VARIABLE_Rs_35_109);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_35_109, &STATE_VARIABLE_Rs_36_111);
                Var_112 = mercury__univ__univ_value_1_f_0(&TypeInfo_165_165, Var_170);
                mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_165_165, NonCanon_7, MinPrioA_130, Var_112, STATE_VARIABLE_Rs_36_111, &STATE_VARIABLE_Rs_37_113);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_37_113, &STATE_VARIABLE_Rs_38_115);
                Var_116 = mercury__univ__univ_value_1_f_0(&TypeInfo_166_166, Var_174);
                mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_166_166, NonCanon_7, MinPrioB_131, Var_116, STATE_VARIABLE_Rs_38_115, &STATE_VARIABLE_Rs_39_117);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_39_117, STATE_VARIABLE_Rs_35);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
        }
        else
          mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_2(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_2(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfSTATE_VARIABLE_Rs_25 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Rs_1_19;
      MR_Word STATE_VARIABLE_Rs_2_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_1_19, &STATE_VARIABLE_Rs_2_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_2_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_5 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Rs_1_19;
      MR_Word STATE_VARIABLE_Rs_2_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_1_19, &STATE_VARIABLE_Rs_2_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_2_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2(
  MR_Word TypeInfo_for_T_75,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_39,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_108)
{
  MR_bool succeeded;
  MR_Word TypeCtorDesc_12;
  MR_Word ArgTypeDescs_13;
  MR_String TypeCtorModuleName_14;
  MR_String TypeCtorName_15;
  MR_Word Var_41;
  MR_String Var_106;
  MR_Integer Var_107;
  MR_String ToAddStr_17;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_75 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_41 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_12  = TypeCtorDesc;
	ArgTypeDescs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	TypeCtorModuleName_14  = TypeCtorModuleName;
	Var_106  = TypeCtorName;
	Var_107  = TypeCtorArity;
}
  TypeCtorName_15 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtorDesc_12);
  // binary string jump switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 3;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(TypeCtorModuleName_14, ((&mercury__string__to_string_vector_common_6[16 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&mercury__string__to_string_vector_common_6[16 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "bitmap"
            ;
            {
              MR_Word TypeCtorInfo_90_90;
              MR_Box Bitmap_31;
              MR_String Var_60;
              MR_Box conv17_Bitmap_31;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "bitmap") == 0);
              if (succeeded)
              {
                TypeCtorInfo_90_90 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_90_90, X_10, &conv17_Bitmap_31);
                Bitmap_31 = ((MR_Box) (conv17_Bitmap_31));
                Var_60 = mercury__bitmap__to_string_1_f_0(Bitmap_31);
                ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Var_60);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "builtin"
            ;
            {
              MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_15)) & (MR_Integer) 63);
              MR_String str_5 = ((&mercury__string__to_string_vector_common_7[256 + slot_4]))->mercury__string__to_string__vector_common_type_7_0__vct_7_f_0;

              // hashed string jump switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_5 != NULL)) && ((strcmp(str_5, TypeCtorName_15) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_4) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      // case "string"
                      ;
                      {
                        MR_String Str_16;
                        MR_Box conv11_Str_16;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv11_Str_16);
                        Str_16 = ((MR_String) (conv11_Str_16));
                        ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Str_16);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "uint32"
                      ;
                      {
                        uint32_t U32_28;
                        MR_String Var_56;
                        MR_Box conv14_U32_28;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv14_U32_28);
                        U32_28 = ((uint32_t) (MR_Word) conv14_U32_28);
                        Var_56 = mercury__string__uint32_to_string_1_f_0(U32_28);
                        mercury__string__append_3_p_2(Var_56, (MR_String) "u32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "character"
                      ;
                      {
                        MR_Char Char_18;
                        MR_Box conv4_Char_18;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv4_Char_18);
                        Char_18 = ((MR_Char) (MR_Word) conv4_Char_18);
                        ToAddStr_17 = mercury__term_io__quoted_char_to_string_1_f_0(Char_18);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      // case "int16"
                      ;
                      {
                        int16_t I16_22;
                        MR_String Var_44;
                        MR_Box conv7_I16_22;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv7_I16_22);
                        I16_22 = ((int16_t) (MR_Word) conv7_I16_22);
                        Var_44 = mercury__string__int16_to_string_1_f_0(I16_22);
                        mercury__string__append_3_p_2(Var_44, (MR_String) "i16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      // case "int"
                      ;
                      {
                        MR_Integer I_20;
                        MR_Box conv6_I_20;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv6_I_20);
                        I_20 = ((MR_Integer) (conv6_I_20));
                        ToAddStr_17 = mercury__string__int_to_string_1_f_0(I_20);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      // case "uint8"
                      ;
                      {
                        uint8_t U8_26;
                        MR_String Var_52;
                        MR_Box conv16_U8_26;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv16_U8_26);
                        U8_26 = ((uint8_t) (MR_Word) conv16_U8_26);
                        Var_52 = mercury__string__uint8_to_string_1_f_0(U8_26);
                        mercury__string__append_3_p_2(Var_52, (MR_String) "u8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 20:
                    {
                      // case "uint"
                      ;
                      {
                        MR_Unsigned U_25;
                        MR_String Var_50;
                        MR_Box conv12_U_25;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv12_U_25);
                        U_25 = ((MR_Unsigned) (conv12_U_25));
                        Var_50 = mercury__string__uint_to_string_1_f_0(U_25);
                        mercury__string__append_3_p_2(Var_50, (MR_String) "u", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 23:
                    {
                      // case "int8"
                      ;
                      {
                        int8_t I8_21;
                        MR_String Var_42;
                        MR_Box conv10_I8_21;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv10_I8_21);
                        I8_21 = ((int8_t) (MR_Word) conv10_I8_21);
                        Var_42 = mercury__string__int8_to_string_1_f_0(I8_21);
                        mercury__string__append_3_p_2(Var_42, (MR_String) "i8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 26:
                    {
                      // case "c_pointer"
                      ;
                      {
                        MR_Word CPtr_30;
                        MR_Box conv3_CPtr_30;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv3_CPtr_30);
                        CPtr_30 = ((MR_Word) (conv3_CPtr_30));
                        mercury__string__c_pointer_to_string_2_p_0(CPtr_30, &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 28:
                    {
                      // case "uint64"
                      ;
                      {
                        uint64_t U64_29;
                        MR_String Var_58;
                        MR_Box conv15_U64_29;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), X_10, &conv15_U64_29);
                        U64_29 = MR_unbox_uint64(conv15_U64_29);
                        Var_58 = mercury__string__uint64_to_string_1_f_0(U64_29);
                        mercury__string__append_3_p_2(Var_58, (MR_String) "u64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 33:
                    {
                      // case "uint16"
                      ;
                      {
                        uint16_t U16_27;
                        MR_String Var_54;
                        MR_Box conv13_U16_27;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv13_U16_27);
                        U16_27 = ((uint16_t) (MR_Word) conv13_U16_27);
                        Var_54 = mercury__string__uint16_to_string_1_f_0(U16_27);
                        mercury__string__append_3_p_2(Var_54, (MR_String) "u16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 35:
                    {
                      // case "float"
                      ;
                      {
                        MR_Float Float_19;
                        MR_Box conv5_Float_19;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv5_Float_19);
                        Float_19 = MR_unbox_float(conv5_Float_19);
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2

	MR_Float Flt;
	MR_String Str;

	Flt = Float_19 ;
		{
{
    // For efficiency reasons, we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	ToAddStr_17  = Str;
}
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 37:
                    {
                      // case "int32"
                      ;
                      {
                        int32_t I32_23;
                        MR_String Var_46;
                        MR_Box conv8_I32_23;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_I32_23);
                        I32_23 = ((int32_t) (MR_Word) conv8_I32_23);
                        Var_46 = mercury__string__int32_to_string_1_f_0(I32_23);
                        mercury__string__append_3_p_2(Var_46, (MR_String) "i32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 48:
                    {
                      // case "int64"
                      ;
                      {
                        int64_t I64_24;
                        MR_String Var_48;
                        MR_Box conv9_I64_24;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), X_10, &conv9_I64_24);
                        I64_24 = MR_unbox_int64(conv9_I64_24);
                        Var_48 = mercury__string__int64_to_string_1_f_0(I64_24);
                        mercury__string__append_3_p_2(Var_48, (MR_String) "i64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "private_builtin"
            ;
            {
              MR_Word PITypeInfo_35;
              MR_Word TypeCtorInfo_94_94;
              MR_Word TypeInfo_36;
              MR_Word Var_62;
              MR_String Var_63;
              MR_Word TypeDesc_70;
              MR_Box conv2_PITypeInfo_35;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "type_info") == 0);
              if (succeeded)
              {
                succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
                  succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_94_94 = (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0);
                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_94_94, X_10, &conv2_PITypeInfo_35);
                    PITypeInfo_35 = ((MR_Word) (conv2_PITypeInfo_35));
                    TypeInfo_36 = (MR_Word) (PITypeInfo_35);
                    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_36, &TypeDesc_70);
                    Var_63 = mercury__type_desc__type_name_1_f_0(TypeDesc_70);
                    ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_63);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "type_desc"
            ;
            if ((strcmp(TypeCtorName_15, (MR_String) "type_desc") == 0))
            {
              MR_Word TypeDesc_32;
              MR_String Var_61;
              MR_Box conv0_TypeDesc_32;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv0_TypeDesc_32);
              TypeDesc_32 = ((MR_Word) (conv0_TypeDesc_32));
              Var_61 = mercury__type_desc__type_name_1_f_0(TypeDesc_32);
              ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_61);
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(TypeCtorName_15, (MR_String) "type_ctor_desc") == 0))
            {
              MR_Word Var_102;
              MR_Box conv1_Var_102;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv1_Var_102);
              Var_102 = ((MR_Word) (conv1_Var_102));
              succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(TypeCtorDesc_12, Var_102);
              if (succeeded)
              {
                ToAddStr_17 = mercury__string__to_string__type_ctor_desc_to_string_1_f_0(TypeCtorDesc_12);
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_1;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_1:;
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_40;

    {
      STATE_VARIABLE_Rs_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_40, 0) = ((MR_Box) (ToAddStr_17));
      MR_hl_field(1, STATE_VARIABLE_Rs_40, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_39));
    }
    *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_40;
  }
  else
  {
    MR_Word STATE_VARIABLE_Rs_2_66;
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_104 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 0))));
      Var_103 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
      succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_95_95;
          MR_Word TypeCtorInfo_96_96;
          MR_Word TypeInfo_97_97;
          MR_ArrayPtr Array_37;
          MR_Box conv18_Array_37;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_95_95  = TypeInfo_for_T;
}
            TypeCtorInfo_96_96 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
            {
              TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_97_97, 0) = ((MR_Box) (TypeCtorInfo_96_96));
              MR_hl_field(0, TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_95_95));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_97_97, X_10, &conv18_Array_37);
            Array_37 = ((MR_ArrayPtr) (conv18_Array_37));
            mercury__string__to_string__array_to_revstrings_5_p_2(TypeInfo_95_95, NonCanon_7, (MR_ArrayPtr) (Array_37), STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_98_98;
          MR_Word TypeCtorInfo_99_99;
          MR_Word TypeInfo_100_100;
          MR_Box VersionArray_38;
          MR_Box conv19_VersionArray_38;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "version_array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_98_98  = TypeInfo_for_T;
}
            TypeCtorInfo_99_99 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
            {
              TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_100_100, 0) = ((MR_Box) (TypeCtorInfo_99_99));
              MR_hl_field(0, TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_98_98));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_100_100, X_10, &conv19_VersionArray_38);
            VersionArray_38 = ((MR_Box) (conv19_VersionArray_38));
            mercury__string__to_string__version_array_to_revstrings_5_p_2(TypeInfo_98_98, NonCanon_7, VersionArray_38, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_2_66;
    else
    {
      MR_Word STATE_VARIABLE_Rs_110;

      mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(TypeInfo_for_T_75, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_110);
      *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_110;
    }
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_1_14;
  MR_Word Var_15;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Word Priority_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_29;
  MR_Word * AddrSTATE_VARIABLE_Rs_2_32;

  {
    STATE_VARIABLE_Rs_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 0) = ((MR_Box) ((MR_String) "version_array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_2

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) Array_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
  Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(Array_8, Var_25, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  conv1_Priority_29 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_29 = ((MR_Word) (conv1_Priority_29));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_2_32 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2(TypeInfo_20_20, NonCanon_6, Priority_29, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_1_14, AddrSTATE_VARIABLE_Rs_2_32);
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_1_14;
  MR_Word Var_15;
  MR_Word Priority_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_21;
  MR_Word * AddrSTATE_VARIABLE_Rs_2_23;

  {
    STATE_VARIABLE_Rs_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 0) = ((MR_Box) ((MR_String) "array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
  mercury__array__to_list_2_p_0(TypeInfo_for_T_18, Array_8, &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  conv1_Priority_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_21 = ((MR_Word) (conv1_Priority_21));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_2_23 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_2(TypeInfo_20_20, NonCanon_6, Priority_21, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_1_14, AddrSTATE_VARIABLE_Rs_2_23);
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_Rs_3_24;
  MR_Word TypeClassInfo_for_op_table_33;
  MR_Word Var_18;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_18;

  if (succeeded)
  {
    TypeClassInfo_for_op_table_33 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, 0)), 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, 0)), 13))));
      conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)));
      Var_18 = ((MR_Word) (conv2_Var_18));
      Var_34 = (MR_Unsigned) (Priority_10);
      Var_35 = (MR_Unsigned) (Var_18);
      succeeded = (Var_34 > Var_35);
      if (!(succeeded))
        succeeded = (Var_34 == Var_35);
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_1_20;
    MR_String Var_21;
    MR_Word STATE_VARIABLE_Rs_2_22;

    {
      STATE_VARIABLE_Rs_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_1_20, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_1_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
    Var_21 = mercury__term_io__quoted_atom_1_f_0(Functor_11);
    {
      STATE_VARIABLE_Rs_2_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_2_22, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, STATE_VARIABLE_Rs_2_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_1_20));
    }
    {
      STATE_VARIABLE_Rs_3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_2_22));
    }
  }
  else
  {
    MR_String Var_25;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_4[0]), Functor_11, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_38);
    Var_41 = (MR_Word) (Var_38);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, &Var_42);
    Var_25 = mercury__string__append_list_1_f_0(Var_42);
    {
      STATE_VARIABLE_Rs_3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
  }
  if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_3_24;
  else
  {
    MR_Word TypeInfo_15_47;
    MR_Word Y_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
    MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
    MR_Word STATE_VARIABLE_Rs_5_29;
    MR_Word STATE_VARIABLE_Rs_6_30;
    MR_Word Priority_44;
    MR_Box Var_45;
    MR_Word * AddrSTATE_VARIABLE_Rs_7_48;

    {
      STATE_VARIABLE_Rs_5_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_5_29, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_5_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_3_24));
    }
    Priority_44 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
    Var_45 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_47, Y_14);
    mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_15_47, NonCanon_8, Priority_44, Var_45, STATE_VARIABLE_Rs_5_29, &STATE_VARIABLE_Rs_6_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_Rs_7_48 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_17, 1)));
    mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_2(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_6_30, AddrSTATE_VARIABLE_Rs_7_48);
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  MR_Box conv1_Priority_14;

  conv1_Priority_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_14 = ((MR_Word) (conv1_Priority_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_12, NonCanon_5, Priority_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  *String_8 = mercury__string__append_list_1_f_0(Var_11);
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  MR_Box conv1_Priority_14;

  conv1_Priority_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_14 = ((MR_Word) (conv1_Priority_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_for_T_12, NonCanon_5, Priority_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  *String_8 = mercury__string__append_list_1_f_0(Var_11);
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word Priority_10;
  MR_Box Var_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 15))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(0, X_8, 0))));
  Var_13 = (MR_hl_field(0, X_8, 1));
  mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_15, NonCanon_6, Priority_10, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_27_27 = ((MR_Word) ((MR_hl_field(0, Univ_8, 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(0, Univ_8, 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_0(TypeInfo_27_27, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(1, Var_18, 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_32;
      MR_Word STATE_VARIABLE_Rs_1_21;
      MR_Word STATE_VARIABLE_Rs_2_22;
      MR_Word Priority_29;
      MR_Box Var_30;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_29 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_30 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_32, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_32, NonCanon_6, Priority_29, Var_30, STATE_VARIABLE_Rs_1_21, &STATE_VARIABLE_Rs_2_22);
      // direct tailcall eliminated
      ;
      next_value_of_Univ_8 = ListTail_14;
      next_value_of_STATE_VARIABLE_Rs_0_15 = STATE_VARIABLE_Rs_2_22;
      Univ_8 = next_value_of_Univ_8;
      STATE_VARIABLE_Rs_0_15 = next_value_of_STATE_VARIABLE_Rs_0_15;
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_10, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Rs_16 = STATE_VARIABLE_Rs_0_15;
      else
      {
        MR_Word TypeInfo_28_28;
        MR_Word STATE_VARIABLE_Rs_4_25;
        MR_Box Var_26;
        MR_Word Priority_33;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Priority_33;

        {
          STATE_VARIABLE_Rs_4_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Rs_4_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(1, STATE_VARIABLE_Rs_4_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(0, Univ_8, 0))));
        Var_26 = (MR_hl_field(0, Univ_8, 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
        conv1_Priority_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Priority_33 = ((MR_Word) (conv1_Priority_33));
        mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_28_28, NonCanon_6, Priority_33, Var_26, STATE_VARIABLE_Rs_4_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word Priority_10;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_for_T_13, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_0(
  MR_Word TypeInfo_for_T_75,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_39,
  MR_Word * STATE_VARIABLE_Rs_40)
{
  MR_bool succeeded;
  MR_Word TypeCtorDesc_12;
  MR_Word ArgTypeDescs_13;
  MR_String TypeCtorModuleName_14;
  MR_String TypeCtorName_15;
  MR_Word Var_41;
  MR_String Var_106;
  MR_Integer Var_107;
  MR_String ToAddStr_17;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_75 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_41 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_12  = TypeCtorDesc;
	ArgTypeDescs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	TypeCtorModuleName_14  = TypeCtorModuleName;
	Var_106  = TypeCtorName;
	Var_107  = TypeCtorArity;
}
  TypeCtorName_15 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtorDesc_12);
  // binary string jump switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 3;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(TypeCtorModuleName_14, ((&mercury__string__to_string_vector_common_6[12 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&mercury__string__to_string_vector_common_6[12 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "bitmap"
            ;
            {
              MR_Word TypeCtorInfo_90_90;
              MR_Box Bitmap_31;
              MR_String Var_60;
              MR_Box conv17_Bitmap_31;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "bitmap") == 0);
              if (succeeded)
              {
                TypeCtorInfo_90_90 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_90_90, X_10, &conv17_Bitmap_31);
                Bitmap_31 = ((MR_Box) (conv17_Bitmap_31));
                Var_60 = mercury__bitmap__to_string_1_f_0(Bitmap_31);
                ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Var_60);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "builtin"
            ;
            {
              MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_15)) & (MR_Integer) 63);
              MR_String str_5 = ((&mercury__string__to_string_vector_common_7[192 + slot_4]))->mercury__string__to_string__vector_common_type_7_0__vct_7_f_0;

              // hashed string jump switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_5 != NULL)) && ((strcmp(str_5, TypeCtorName_15) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_4) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      // case "string"
                      ;
                      {
                        MR_String Str_16;
                        MR_Box conv11_Str_16;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv11_Str_16);
                        Str_16 = ((MR_String) (conv11_Str_16));
                        ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Str_16);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "uint32"
                      ;
                      {
                        uint32_t U32_28;
                        MR_String Var_56;
                        MR_Box conv14_U32_28;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv14_U32_28);
                        U32_28 = ((uint32_t) (MR_Word) conv14_U32_28);
                        Var_56 = mercury__string__uint32_to_string_1_f_0(U32_28);
                        mercury__string__append_3_p_2(Var_56, (MR_String) "u32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "character"
                      ;
                      {
                        MR_Char Char_18;
                        MR_Box conv4_Char_18;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv4_Char_18);
                        Char_18 = ((MR_Char) (MR_Word) conv4_Char_18);
                        ToAddStr_17 = mercury__term_io__quoted_char_to_string_1_f_0(Char_18);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      // case "int16"
                      ;
                      {
                        int16_t I16_22;
                        MR_String Var_44;
                        MR_Box conv7_I16_22;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv7_I16_22);
                        I16_22 = ((int16_t) (MR_Word) conv7_I16_22);
                        Var_44 = mercury__string__int16_to_string_1_f_0(I16_22);
                        mercury__string__append_3_p_2(Var_44, (MR_String) "i16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      // case "int"
                      ;
                      {
                        MR_Integer I_20;
                        MR_Box conv6_I_20;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv6_I_20);
                        I_20 = ((MR_Integer) (conv6_I_20));
                        ToAddStr_17 = mercury__string__int_to_string_1_f_0(I_20);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      // case "uint8"
                      ;
                      {
                        uint8_t U8_26;
                        MR_String Var_52;
                        MR_Box conv16_U8_26;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv16_U8_26);
                        U8_26 = ((uint8_t) (MR_Word) conv16_U8_26);
                        Var_52 = mercury__string__uint8_to_string_1_f_0(U8_26);
                        mercury__string__append_3_p_2(Var_52, (MR_String) "u8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 20:
                    {
                      // case "uint"
                      ;
                      {
                        MR_Unsigned U_25;
                        MR_String Var_50;
                        MR_Box conv12_U_25;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv12_U_25);
                        U_25 = ((MR_Unsigned) (conv12_U_25));
                        Var_50 = mercury__string__uint_to_string_1_f_0(U_25);
                        mercury__string__append_3_p_2(Var_50, (MR_String) "u", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 23:
                    {
                      // case "int8"
                      ;
                      {
                        int8_t I8_21;
                        MR_String Var_42;
                        MR_Box conv10_I8_21;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv10_I8_21);
                        I8_21 = ((int8_t) (MR_Word) conv10_I8_21);
                        Var_42 = mercury__string__int8_to_string_1_f_0(I8_21);
                        mercury__string__append_3_p_2(Var_42, (MR_String) "i8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 26:
                    {
                      // case "c_pointer"
                      ;
                      {
                        MR_Word CPtr_30;
                        MR_Box conv3_CPtr_30;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv3_CPtr_30);
                        CPtr_30 = ((MR_Word) (conv3_CPtr_30));
                        mercury__string__c_pointer_to_string_2_p_0(CPtr_30, &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 28:
                    {
                      // case "uint64"
                      ;
                      {
                        uint64_t U64_29;
                        MR_String Var_58;
                        MR_Box conv15_U64_29;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), X_10, &conv15_U64_29);
                        U64_29 = MR_unbox_uint64(conv15_U64_29);
                        Var_58 = mercury__string__uint64_to_string_1_f_0(U64_29);
                        mercury__string__append_3_p_2(Var_58, (MR_String) "u64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 33:
                    {
                      // case "uint16"
                      ;
                      {
                        uint16_t U16_27;
                        MR_String Var_54;
                        MR_Box conv13_U16_27;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv13_U16_27);
                        U16_27 = ((uint16_t) (MR_Word) conv13_U16_27);
                        Var_54 = mercury__string__uint16_to_string_1_f_0(U16_27);
                        mercury__string__append_3_p_2(Var_54, (MR_String) "u16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 35:
                    {
                      // case "float"
                      ;
                      {
                        MR_Float Float_19;
                        MR_Box conv5_Float_19;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv5_Float_19);
                        Float_19 = MR_unbox_float(conv5_Float_19);
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Float Flt;
	MR_String Str;

	Flt = Float_19 ;
		{
{
    // For efficiency reasons, we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	ToAddStr_17  = Str;
}
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 37:
                    {
                      // case "int32"
                      ;
                      {
                        int32_t I32_23;
                        MR_String Var_46;
                        MR_Box conv8_I32_23;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_I32_23);
                        I32_23 = ((int32_t) (MR_Word) conv8_I32_23);
                        Var_46 = mercury__string__int32_to_string_1_f_0(I32_23);
                        mercury__string__append_3_p_2(Var_46, (MR_String) "i32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 48:
                    {
                      // case "int64"
                      ;
                      {
                        int64_t I64_24;
                        MR_String Var_48;
                        MR_Box conv9_I64_24;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), X_10, &conv9_I64_24);
                        I64_24 = MR_unbox_int64(conv9_I64_24);
                        Var_48 = mercury__string__int64_to_string_1_f_0(I64_24);
                        mercury__string__append_3_p_2(Var_48, (MR_String) "i64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "private_builtin"
            ;
            {
              MR_Word PITypeInfo_35;
              MR_Word TypeCtorInfo_94_94;
              MR_Word TypeInfo_36;
              MR_Word Var_62;
              MR_String Var_63;
              MR_Word TypeDesc_70;
              MR_Box conv2_PITypeInfo_35;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "type_info") == 0);
              if (succeeded)
              {
                succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
                  succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_94_94 = (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0);
                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_94_94, X_10, &conv2_PITypeInfo_35);
                    PITypeInfo_35 = ((MR_Word) (conv2_PITypeInfo_35));
                    TypeInfo_36 = (MR_Word) (PITypeInfo_35);
                    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_36, &TypeDesc_70);
                    Var_63 = mercury__type_desc__type_name_1_f_0(TypeDesc_70);
                    ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_63);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "type_desc"
            ;
            if ((strcmp(TypeCtorName_15, (MR_String) "type_desc") == 0))
            {
              MR_Word TypeDesc_32;
              MR_String Var_61;
              MR_Box conv0_TypeDesc_32;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv0_TypeDesc_32);
              TypeDesc_32 = ((MR_Word) (conv0_TypeDesc_32));
              Var_61 = mercury__type_desc__type_name_1_f_0(TypeDesc_32);
              ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_61);
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(TypeCtorName_15, (MR_String) "type_ctor_desc") == 0))
            {
              MR_Word Var_102;
              MR_Box conv1_Var_102;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv1_Var_102);
              Var_102 = ((MR_Word) (conv1_Var_102));
              succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(TypeCtorDesc_12, Var_102);
              if (succeeded)
              {
                ToAddStr_17 = mercury__string__to_string__type_ctor_desc_to_string_1_f_0(TypeCtorDesc_12);
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_1;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_1:;
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_40 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ToAddStr_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_39));
    }
  else
  {
    MR_Word STATE_VARIABLE_Rs_2_66;
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_104 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 0))));
      Var_103 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
      succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_95_95;
          MR_Word TypeCtorInfo_96_96;
          MR_Word TypeInfo_97_97;
          MR_ArrayPtr Array_37;
          MR_Box conv18_Array_37;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_95_95  = TypeInfo_for_T;
}
            TypeCtorInfo_96_96 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
            {
              TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_97_97, 0) = ((MR_Box) (TypeCtorInfo_96_96));
              MR_hl_field(0, TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_95_95));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_97_97, X_10, &conv18_Array_37);
            Array_37 = ((MR_ArrayPtr) (conv18_Array_37));
            mercury__string__to_string__array_to_revstrings_5_p_0(TypeInfo_95_95, NonCanon_7, (MR_ArrayPtr) (Array_37), STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_98_98;
          MR_Word TypeCtorInfo_99_99;
          MR_Word TypeInfo_100_100;
          MR_Box VersionArray_38;
          MR_Box conv19_VersionArray_38;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "version_array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_98_98  = TypeInfo_for_T;
}
            TypeCtorInfo_99_99 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
            {
              TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_100_100, 0) = ((MR_Box) (TypeCtorInfo_99_99));
              MR_hl_field(0, TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_98_98));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_100_100, X_10, &conv19_VersionArray_38);
            VersionArray_38 = ((MR_Box) (conv19_VersionArray_38));
            mercury__string__to_string__version_array_to_revstrings_5_p_0(TypeInfo_98_98, NonCanon_7, VersionArray_38, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Rs_40 = STATE_VARIABLE_Rs_2_66;
    else
      mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(TypeInfo_for_T_75, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_39, STATE_VARIABLE_Rs_40);
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String Functor_12;
  MR_Word Args_14;
  MR_Integer _Arity_13;
  MR_Word STATE_VARIABLE_Rs_4_43;

  mercury__deconstruct__deconstruct_5_p_0(TypeInfo_for_T_157, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((strcmp(Functor_12, (MR_String) "[]") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_4_43);
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_4_43);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
  {
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(1, Args_14, 1))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, Args_14, 0))));

    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_158_158;
        MR_Word STATE_VARIABLE_Rs_7_50;
        MR_Box Var_51;
        MR_Word STATE_VARIABLE_Rs_8_52;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_7_50);
        Var_51 = mercury__univ__univ_value_1_f_0(&TypeInfo_158_158, Var_172);
        mercury__string__to_string__value_to_revstrings_5_p_0(TypeInfo_158_158, NonCanon_7, Var_51, STATE_VARIABLE_Rs_7_50, &STATE_VARIABLE_Rs_8_52);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_8_52, &STATE_VARIABLE_Rs_4_43);
      }
      else
      {
        MR_Word STATE_VARIABLE_Rs_10_56;
        MR_Word STATE_VARIABLE_Rs_11_57;
        MR_Word STATE_VARIABLE_Rs_12_58;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_10_56);
        mercury__string__to_string__arg_to_revstrings_5_p_0(NonCanon_7, Var_172, STATE_VARIABLE_Rs_10_56, &STATE_VARIABLE_Rs_11_57);
        mercury__string__to_string__term_args_to_revstrings_5_p_0(NonCanon_7, Var_171, STATE_VARIABLE_Rs_11_57, &STATE_VARIABLE_Rs_12_58);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_12_58, &STATE_VARIABLE_Rs_4_43);
      }
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "[|]") == 0))
    {
      MR_Word ListTail_16;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_1_39;
      MR_Word STATE_VARIABLE_Rs_2_40;
      MR_Word STATE_VARIABLE_Rs_3_41;
      MR_String Var_42;

      succeeded = (Var_171 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_16 = ((MR_Word) ((MR_hl_field(1, Var_171, 0))));
        Var_37 = ((MR_Word) ((MR_hl_field(1, Var_171, 1))));
        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = (MR_String) "[";
          mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_1_39);
          mercury__string__to_string__arg_to_revstrings_5_p_0(NonCanon_7, Var_172, STATE_VARIABLE_Rs_1_39, &STATE_VARIABLE_Rs_2_40);
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_2_40, &STATE_VARIABLE_Rs_3_41);
          Var_42 = (MR_String) "]";
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_3_41, &STATE_VARIABLE_Rs_4_43);
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    *STATE_VARIABLE_Rs_35 = STATE_VARIABLE_Rs_4_43;
  else
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
  else
  {
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, Args_14, 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Args_14, 0))));

    if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpInfos_23;

      succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_23);
      if (succeeded)
      {
        MR_Word OpPrio_24;
        MR_Word GtOrGeA_25;
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, 2))));

        succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OpPrio_24 = ((MR_Word) ((MR_hl_field(1, Var_62, 0))));
          GtOrGeA_25 = ((MR_Unsigned) ((MR_hl_field(1, Var_62, 1))) & (MR_Integer) 1);
          {
            MR_Word TypeInfo_160_160;
            MR_Word MinPrioA_26;
            MR_Word STATE_VARIABLE_Rs_14_64;
            MR_String Var_65;
            MR_Word STATE_VARIABLE_Rs_15_66;
            MR_Word STATE_VARIABLE_Rs_16_68;
            MR_Box Var_69;
            MR_Word STATE_VARIABLE_Rs_17_70;

            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_14_64);
            Var_65 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
            mercury__string__to_string__add_revstring_3_p_0(Var_65, STATE_VARIABLE_Rs_14_64, &STATE_VARIABLE_Rs_15_66);
            mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_15_66, &STATE_VARIABLE_Rs_16_68);
            switch (GtOrGeA_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                MinPrioA_26 = OpPrio_24;
                break;
              case (MR_Integer) 0:
                MinPrioA_26 = mercury__ops__increment_priority_1_f_0(OpPrio_24);
                break;
            }
            Var_69 = mercury__univ__univ_value_1_f_0(&TypeInfo_160_160, Var_170);
            mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_160_160, NonCanon_7, MinPrioA_26, Var_69, STATE_VARIABLE_Rs_16_68, &STATE_VARIABLE_Rs_17_70);
            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_17_70, STATE_VARIABLE_Rs_35);
          }
        }
        else
        {
          MR_Word OpPrio_126;
          MR_Word GtOrGeA_127;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, 3))));

          succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_126 = ((MR_Word) ((MR_hl_field(1, Var_73, 0))));
            GtOrGeA_127 = ((MR_Unsigned) ((MR_hl_field(1, Var_73, 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_161_161;
              MR_Word STATE_VARIABLE_Rs_19_75;
              MR_Box Var_76;
              MR_Word STATE_VARIABLE_Rs_20_77;
              MR_Word STATE_VARIABLE_Rs_21_79;
              MR_String Var_80;
              MR_Word STATE_VARIABLE_Rs_22_81;
              MR_Word MinPrioA_125;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_19_75);
              switch (GtOrGeA_127) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_125 = OpPrio_126;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_125 = mercury__ops__increment_priority_1_f_0(OpPrio_126);
                  break;
              }
              Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_161_161, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_161_161, NonCanon_7, MinPrioA_125, Var_76, STATE_VARIABLE_Rs_19_75, &STATE_VARIABLE_Rs_20_77);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_20_77, &STATE_VARIABLE_Rs_21_79);
              Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_21_79, &STATE_VARIABLE_Rs_22_81);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_22_81, STATE_VARIABLE_Rs_35);
            }
          }
          else
            mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, Var_169, 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, Var_169, 0))));

      if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OpInfos_140;

        succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_140);
        if (succeeded)
        {
          MR_Word GtOrGeB_28;
          MR_Word OpPrio_137;
          MR_Word GtOrGeA_138;
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, 0))));

          succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_137 = ((MR_Word) ((MR_hl_field(1, Var_88, 0))));
            GtOrGeA_138 = ((((MR_Unsigned) ((MR_hl_field(1, Var_88, 1))) >> 1)) & (MR_Integer) 1);
            GtOrGeB_28 = ((MR_Unsigned) ((MR_hl_field(1, Var_88, 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_163_163;
              MR_Word TypeInfo_164_164;
              MR_Word MinPrioB_29;
              MR_Word STATE_VARIABLE_Rs_26_90;
              MR_Box Var_91;
              MR_Word STATE_VARIABLE_Rs_27_92;
              MR_Word STATE_VARIABLE_Rs_28_94;
              MR_Box Var_101;
              MR_Word STATE_VARIABLE_Rs_32_102;
              MR_Word MinPrioA_129;

              switch (GtOrGeA_138) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_129 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_129 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              switch (GtOrGeB_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioB_29 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioB_29 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_26_90);
              Var_91 = mercury__univ__univ_value_1_f_0(&TypeInfo_163_163, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_163_163, NonCanon_7, MinPrioA_129, Var_91, STATE_VARIABLE_Rs_26_90, &STATE_VARIABLE_Rs_27_92);
              succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
              if (succeeded)
                mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_27_92, &STATE_VARIABLE_Rs_28_94);
              else
              {
                MR_Word STATE_VARIABLE_Rs_29_96;
                MR_String Var_97;
                MR_Word STATE_VARIABLE_Rs_30_98;

                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_27_92, &STATE_VARIABLE_Rs_29_96);
                Var_97 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_97, STATE_VARIABLE_Rs_29_96, &STATE_VARIABLE_Rs_30_98);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_30_98, &STATE_VARIABLE_Rs_28_94);
              }
              Var_101 = mercury__univ__univ_value_1_f_0(&TypeInfo_164_164, Var_174);
              mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_164_164, NonCanon_7, MinPrioB_29, Var_101, STATE_VARIABLE_Rs_28_94, &STATE_VARIABLE_Rs_32_102);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_32_102, STATE_VARIABLE_Rs_35);
            }
          }
          else
          {
            MR_Word OpPrio_132;
            MR_Word GtOrGeA_133;
            MR_Word GtOrGeB_135;
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, 1))));

            succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OpPrio_132 = ((MR_Word) ((MR_hl_field(1, Var_105, 0))));
              GtOrGeA_133 = ((((MR_Unsigned) ((MR_hl_field(1, Var_105, 1))) >> 1)) & (MR_Integer) 1);
              GtOrGeB_135 = ((MR_Unsigned) ((MR_hl_field(1, Var_105, 1))) & (MR_Integer) 1);
              {
                MR_Word TypeInfo_165_165;
                MR_Word TypeInfo_166_166;
                MR_Word STATE_VARIABLE_Rs_34_107;
                MR_String Var_108;
                MR_Word STATE_VARIABLE_Rs_35_109;
                MR_Word STATE_VARIABLE_Rs_36_111;
                MR_Box Var_112;
                MR_Word STATE_VARIABLE_Rs_37_113;
                MR_Word STATE_VARIABLE_Rs_38_115;
                MR_Box Var_116;
                MR_Word STATE_VARIABLE_Rs_39_117;
                MR_Word MinPrioA_130;
                MR_Word MinPrioB_131;

                switch (GtOrGeA_133) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioA_130 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioA_130 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                switch (GtOrGeB_135) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioB_131 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioB_131 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_34_107);
                Var_108 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_108, STATE_VARIABLE_Rs_34_107, &STATE_VARIABLE_Rs_35_109);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_35_109, &STATE_VARIABLE_Rs_36_111);
                Var_112 = mercury__univ__univ_value_1_f_0(&TypeInfo_165_165, Var_170);
                mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_165_165, NonCanon_7, MinPrioA_130, Var_112, STATE_VARIABLE_Rs_36_111, &STATE_VARIABLE_Rs_37_113);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_37_113, &STATE_VARIABLE_Rs_38_115);
                Var_116 = mercury__univ__univ_value_1_f_0(&TypeInfo_166_166, Var_174);
                mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_166_166, NonCanon_7, MinPrioB_131, Var_116, STATE_VARIABLE_Rs_38_115, &STATE_VARIABLE_Rs_39_117);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_39_117, STATE_VARIABLE_Rs_35);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
        }
        else
          mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_0(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_0(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfSTATE_VARIABLE_Rs_25 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Rs_1_19;
      MR_Word STATE_VARIABLE_Rs_2_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_1_19, &STATE_VARIABLE_Rs_2_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_2_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_5 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Rs_1_19;
      MR_Word STATE_VARIABLE_Rs_2_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_1_19, &STATE_VARIABLE_Rs_2_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_2_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0(
  MR_Word TypeInfo_for_T_75,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_39,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_108)
{
  MR_bool succeeded;
  MR_Word TypeCtorDesc_12;
  MR_Word ArgTypeDescs_13;
  MR_String TypeCtorModuleName_14;
  MR_String TypeCtorName_15;
  MR_Word Var_41;
  MR_String Var_106;
  MR_Integer Var_107;
  MR_String ToAddStr_17;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_75 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_41 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_12  = TypeCtorDesc;
	ArgTypeDescs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	TypeCtorModuleName_14  = TypeCtorModuleName;
	Var_106  = TypeCtorName;
	Var_107  = TypeCtorArity;
}
  TypeCtorName_15 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtorDesc_12);
  // binary string jump switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 3;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(TypeCtorModuleName_14, ((&mercury__string__to_string_vector_common_6[8 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&mercury__string__to_string_vector_common_6[8 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "bitmap"
            ;
            {
              MR_Word TypeCtorInfo_90_90;
              MR_Box Bitmap_31;
              MR_String Var_60;
              MR_Box conv17_Bitmap_31;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "bitmap") == 0);
              if (succeeded)
              {
                TypeCtorInfo_90_90 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_90_90, X_10, &conv17_Bitmap_31);
                Bitmap_31 = ((MR_Box) (conv17_Bitmap_31));
                Var_60 = mercury__bitmap__to_string_1_f_0(Bitmap_31);
                ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Var_60);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "builtin"
            ;
            {
              MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_15)) & (MR_Integer) 63);
              MR_String str_5 = ((&mercury__string__to_string_vector_common_7[128 + slot_4]))->mercury__string__to_string__vector_common_type_7_0__vct_7_f_0;

              // hashed string jump switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_5 != NULL)) && ((strcmp(str_5, TypeCtorName_15) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_4) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      // case "string"
                      ;
                      {
                        MR_String Str_16;
                        MR_Box conv11_Str_16;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv11_Str_16);
                        Str_16 = ((MR_String) (conv11_Str_16));
                        ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Str_16);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "uint32"
                      ;
                      {
                        uint32_t U32_28;
                        MR_String Var_56;
                        MR_Box conv14_U32_28;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv14_U32_28);
                        U32_28 = ((uint32_t) (MR_Word) conv14_U32_28);
                        Var_56 = mercury__string__uint32_to_string_1_f_0(U32_28);
                        mercury__string__append_3_p_2(Var_56, (MR_String) "u32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "character"
                      ;
                      {
                        MR_Char Char_18;
                        MR_Box conv4_Char_18;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv4_Char_18);
                        Char_18 = ((MR_Char) (MR_Word) conv4_Char_18);
                        ToAddStr_17 = mercury__term_io__quoted_char_to_string_1_f_0(Char_18);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      // case "int16"
                      ;
                      {
                        int16_t I16_22;
                        MR_String Var_44;
                        MR_Box conv7_I16_22;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv7_I16_22);
                        I16_22 = ((int16_t) (MR_Word) conv7_I16_22);
                        Var_44 = mercury__string__int16_to_string_1_f_0(I16_22);
                        mercury__string__append_3_p_2(Var_44, (MR_String) "i16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      // case "int"
                      ;
                      {
                        MR_Integer I_20;
                        MR_Box conv6_I_20;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv6_I_20);
                        I_20 = ((MR_Integer) (conv6_I_20));
                        ToAddStr_17 = mercury__string__int_to_string_1_f_0(I_20);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      // case "uint8"
                      ;
                      {
                        uint8_t U8_26;
                        MR_String Var_52;
                        MR_Box conv16_U8_26;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv16_U8_26);
                        U8_26 = ((uint8_t) (MR_Word) conv16_U8_26);
                        Var_52 = mercury__string__uint8_to_string_1_f_0(U8_26);
                        mercury__string__append_3_p_2(Var_52, (MR_String) "u8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 20:
                    {
                      // case "uint"
                      ;
                      {
                        MR_Unsigned U_25;
                        MR_String Var_50;
                        MR_Box conv12_U_25;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv12_U_25);
                        U_25 = ((MR_Unsigned) (conv12_U_25));
                        Var_50 = mercury__string__uint_to_string_1_f_0(U_25);
                        mercury__string__append_3_p_2(Var_50, (MR_String) "u", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 23:
                    {
                      // case "int8"
                      ;
                      {
                        int8_t I8_21;
                        MR_String Var_42;
                        MR_Box conv10_I8_21;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv10_I8_21);
                        I8_21 = ((int8_t) (MR_Word) conv10_I8_21);
                        Var_42 = mercury__string__int8_to_string_1_f_0(I8_21);
                        mercury__string__append_3_p_2(Var_42, (MR_String) "i8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 26:
                    {
                      // case "c_pointer"
                      ;
                      {
                        MR_Word CPtr_30;
                        MR_Box conv3_CPtr_30;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv3_CPtr_30);
                        CPtr_30 = ((MR_Word) (conv3_CPtr_30));
                        mercury__string__c_pointer_to_string_2_p_0(CPtr_30, &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 28:
                    {
                      // case "uint64"
                      ;
                      {
                        uint64_t U64_29;
                        MR_String Var_58;
                        MR_Box conv15_U64_29;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), X_10, &conv15_U64_29);
                        U64_29 = MR_unbox_uint64(conv15_U64_29);
                        Var_58 = mercury__string__uint64_to_string_1_f_0(U64_29);
                        mercury__string__append_3_p_2(Var_58, (MR_String) "u64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 33:
                    {
                      // case "uint16"
                      ;
                      {
                        uint16_t U16_27;
                        MR_String Var_54;
                        MR_Box conv13_U16_27;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv13_U16_27);
                        U16_27 = ((uint16_t) (MR_Word) conv13_U16_27);
                        Var_54 = mercury__string__uint16_to_string_1_f_0(U16_27);
                        mercury__string__append_3_p_2(Var_54, (MR_String) "u16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 35:
                    {
                      // case "float"
                      ;
                      {
                        MR_Float Float_19;
                        MR_Box conv5_Float_19;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv5_Float_19);
                        Float_19 = MR_unbox_float(conv5_Float_19);
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0

	MR_Float Flt;
	MR_String Str;

	Flt = Float_19 ;
		{
{
    // For efficiency reasons, we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	ToAddStr_17  = Str;
}
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 37:
                    {
                      // case "int32"
                      ;
                      {
                        int32_t I32_23;
                        MR_String Var_46;
                        MR_Box conv8_I32_23;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_I32_23);
                        I32_23 = ((int32_t) (MR_Word) conv8_I32_23);
                        Var_46 = mercury__string__int32_to_string_1_f_0(I32_23);
                        mercury__string__append_3_p_2(Var_46, (MR_String) "i32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 48:
                    {
                      // case "int64"
                      ;
                      {
                        int64_t I64_24;
                        MR_String Var_48;
                        MR_Box conv9_I64_24;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), X_10, &conv9_I64_24);
                        I64_24 = MR_unbox_int64(conv9_I64_24);
                        Var_48 = mercury__string__int64_to_string_1_f_0(I64_24);
                        mercury__string__append_3_p_2(Var_48, (MR_String) "i64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "private_builtin"
            ;
            {
              MR_Word PITypeInfo_35;
              MR_Word TypeCtorInfo_94_94;
              MR_Word TypeInfo_36;
              MR_Word Var_62;
              MR_String Var_63;
              MR_Word TypeDesc_70;
              MR_Box conv2_PITypeInfo_35;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "type_info") == 0);
              if (succeeded)
              {
                succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
                  succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_94_94 = (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0);
                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_94_94, X_10, &conv2_PITypeInfo_35);
                    PITypeInfo_35 = ((MR_Word) (conv2_PITypeInfo_35));
                    TypeInfo_36 = (MR_Word) (PITypeInfo_35);
                    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_36, &TypeDesc_70);
                    Var_63 = mercury__type_desc__type_name_1_f_0(TypeDesc_70);
                    ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_63);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "type_desc"
            ;
            if ((strcmp(TypeCtorName_15, (MR_String) "type_desc") == 0))
            {
              MR_Word TypeDesc_32;
              MR_String Var_61;
              MR_Box conv0_TypeDesc_32;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv0_TypeDesc_32);
              TypeDesc_32 = ((MR_Word) (conv0_TypeDesc_32));
              Var_61 = mercury__type_desc__type_name_1_f_0(TypeDesc_32);
              ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_61);
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(TypeCtorName_15, (MR_String) "type_ctor_desc") == 0))
            {
              MR_Word Var_102;
              MR_Box conv1_Var_102;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv1_Var_102);
              Var_102 = ((MR_Word) (conv1_Var_102));
              succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(TypeCtorDesc_12, Var_102);
              if (succeeded)
              {
                ToAddStr_17 = mercury__string__to_string__type_ctor_desc_to_string_1_f_0(TypeCtorDesc_12);
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_1;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_1:;
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_40;

    {
      STATE_VARIABLE_Rs_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_40, 0) = ((MR_Box) (ToAddStr_17));
      MR_hl_field(1, STATE_VARIABLE_Rs_40, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_39));
    }
    *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_40;
  }
  else
  {
    MR_Word STATE_VARIABLE_Rs_2_66;
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_104 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 0))));
      Var_103 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
      succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_95_95;
          MR_Word TypeCtorInfo_96_96;
          MR_Word TypeInfo_97_97;
          MR_ArrayPtr Array_37;
          MR_Box conv18_Array_37;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_95_95  = TypeInfo_for_T;
}
            TypeCtorInfo_96_96 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
            {
              TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_97_97, 0) = ((MR_Box) (TypeCtorInfo_96_96));
              MR_hl_field(0, TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_95_95));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_97_97, X_10, &conv18_Array_37);
            Array_37 = ((MR_ArrayPtr) (conv18_Array_37));
            mercury__string__to_string__array_to_revstrings_5_p_0(TypeInfo_95_95, NonCanon_7, (MR_ArrayPtr) (Array_37), STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_98_98;
          MR_Word TypeCtorInfo_99_99;
          MR_Word TypeInfo_100_100;
          MR_Box VersionArray_38;
          MR_Box conv19_VersionArray_38;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "version_array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_98_98  = TypeInfo_for_T;
}
            TypeCtorInfo_99_99 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
            {
              TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_100_100, 0) = ((MR_Box) (TypeCtorInfo_99_99));
              MR_hl_field(0, TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_98_98));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_100_100, X_10, &conv19_VersionArray_38);
            VersionArray_38 = ((MR_Box) (conv19_VersionArray_38));
            mercury__string__to_string__version_array_to_revstrings_5_p_0(TypeInfo_98_98, NonCanon_7, VersionArray_38, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_2_66;
    else
    {
      MR_Word STATE_VARIABLE_Rs_110;

      mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(TypeInfo_for_T_75, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_110);
      *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_110;
    }
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_1_14;
  MR_Word Var_15;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Word Priority_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_29;
  MR_Word * AddrSTATE_VARIABLE_Rs_2_32;

  {
    STATE_VARIABLE_Rs_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 0) = ((MR_Box) ((MR_String) "version_array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) Array_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
  Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(Array_8, Var_25, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  conv1_Priority_29 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_29 = ((MR_Word) (conv1_Priority_29));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_2_32 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0(TypeInfo_20_20, NonCanon_6, Priority_29, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_1_14, AddrSTATE_VARIABLE_Rs_2_32);
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_1_14;
  MR_Word Var_15;
  MR_Word Priority_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_21;
  MR_Word * AddrSTATE_VARIABLE_Rs_2_23;

  {
    STATE_VARIABLE_Rs_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 0) = ((MR_Box) ((MR_String) "array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
  mercury__array__to_list_2_p_0(TypeInfo_for_T_18, Array_8, &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  conv1_Priority_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_21 = ((MR_Word) (conv1_Priority_21));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_2_23 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_0(TypeInfo_20_20, NonCanon_6, Priority_21, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_1_14, AddrSTATE_VARIABLE_Rs_2_23);
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_Rs_3_24;
  MR_Word TypeClassInfo_for_op_table_33;
  MR_Word Var_18;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_18;

  if (succeeded)
  {
    TypeClassInfo_for_op_table_33 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, 0)), 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, 0)), 13))));
      conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)));
      Var_18 = ((MR_Word) (conv2_Var_18));
      Var_34 = (MR_Unsigned) (Priority_10);
      Var_35 = (MR_Unsigned) (Var_18);
      succeeded = (Var_34 > Var_35);
      if (!(succeeded))
        succeeded = (Var_34 == Var_35);
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_1_20;
    MR_String Var_21;
    MR_Word STATE_VARIABLE_Rs_2_22;

    {
      STATE_VARIABLE_Rs_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_1_20, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_1_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
    Var_21 = mercury__term_io__quoted_atom_1_f_0(Functor_11);
    {
      STATE_VARIABLE_Rs_2_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_2_22, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, STATE_VARIABLE_Rs_2_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_1_20));
    }
    {
      STATE_VARIABLE_Rs_3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_2_22));
    }
  }
  else
  {
    MR_String Var_25;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_4[0]), Functor_11, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_38);
    Var_41 = (MR_Word) (Var_38);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, &Var_42);
    Var_25 = mercury__string__append_list_1_f_0(Var_42);
    {
      STATE_VARIABLE_Rs_3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
  }
  if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_3_24;
  else
  {
    MR_Word TypeInfo_15_47;
    MR_Word Y_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
    MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
    MR_Word STATE_VARIABLE_Rs_5_29;
    MR_Word STATE_VARIABLE_Rs_6_30;
    MR_Word Priority_44;
    MR_Box Var_45;
    MR_Word * AddrSTATE_VARIABLE_Rs_7_48;

    {
      STATE_VARIABLE_Rs_5_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_5_29, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_5_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_3_24));
    }
    Priority_44 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
    Var_45 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_47, Y_14);
    mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_15_47, NonCanon_8, Priority_44, Var_45, STATE_VARIABLE_Rs_5_29, &STATE_VARIABLE_Rs_6_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_Rs_7_48 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_17, 1)));
    mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_0(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_6_30, AddrSTATE_VARIABLE_Rs_7_48);
  }
}

MR_String MR_CALL 
mercury__string__to_string__string_ops_impl_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box Univ_5)
{
  MR_String String_6;
  MR_Word RevStrings_9;
  MR_Word Var_11;
  MR_Word Priority_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  MR_Box conv1_Priority_13;

  conv1_Priority_13 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_13 = ((MR_Word) (conv1_Priority_13));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_8, (MR_Integer) 1, Priority_13, Univ_5, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_9, &Var_11);
  String_6 = mercury__string__append_list_1_f_0(Var_11);
  return String_6;
}

MR_String MR_CALL 
mercury__string__to_string__string_impl_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box Univ_3)
{
  MR_String String_4;
  MR_Word RevStrings_8;
  MR_Word Var_10;
  MR_Word Priority_12;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_12;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  conv1_Priority_12 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_12 = ((MR_Word) (conv1_Priority_12));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_7, (MR_Integer) 1, Priority_12, Univ_3, (MR_Word) ((MR_Unsigned) 0U), &RevStrings_8);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_8, &Var_10);
  String_4 = mercury__string__append_list_1_f_0(Var_10);
  return String_4;
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
  MR_Word NonCanon_6,
  MR_Word X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_15_15;
  MR_Word Priority_10;
  MR_Box Var_13;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 15))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(0, X_8, 0))));
  Var_13 = (MR_hl_field(0, X_8, 1));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_15, NonCanon_6, Priority_10, Var_13, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
  MR_Word NonCanon_6,
  MR_Word Univ_8,
  MR_Word STATE_VARIABLE_Rs_0_15,
  MR_Word * STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_27_27 = ((MR_Word) ((MR_hl_field(0, Univ_8, 0))));
    MR_String Functor_10;
    MR_Word Args_12;
    MR_Box Var_17 = (MR_hl_field(0, Univ_8, 1));
    MR_Integer _Arity_11;
    MR_Word ListHead_13;
    MR_Word ListTail_14;
    MR_Word Var_18;
    MR_Word Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__deconstruct__deconstruct_5_p_1(TypeInfo_27_27, Var_17, NonCanon_6, &Functor_10, &_Arity_11, &Args_12);
    succeeded = (strcmp(Functor_10, (MR_String) "[|]") == 0);
    if (succeeded)
    {
      succeeded = (Args_12 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListHead_13 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
        succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ListTail_14 = ((MR_Word) ((MR_hl_field(1, Var_18, 0))));
          Var_19 = ((MR_Word) ((MR_hl_field(1, Var_18, 1))));
          succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
        }
      }
    }
    if (succeeded)
    {
      MR_Word TypeInfo_15_32;
      MR_Word STATE_VARIABLE_Rs_1_21;
      MR_Word STATE_VARIABLE_Rs_2_22;
      MR_Word Priority_29;
      MR_Box Var_30;
      MR_Word next_value_of_Univ_8;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_15;

      {
        STATE_VARIABLE_Rs_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_21, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_21, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
      }
      Priority_29 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_30 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_32, ListHead_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_32, NonCanon_6, Priority_29, Var_30, STATE_VARIABLE_Rs_1_21, &STATE_VARIABLE_Rs_2_22);
      // direct tailcall eliminated
      ;
      next_value_of_Univ_8 = ListTail_14;
      next_value_of_STATE_VARIABLE_Rs_0_15 = STATE_VARIABLE_Rs_2_22;
      Univ_8 = next_value_of_Univ_8;
      STATE_VARIABLE_Rs_0_15 = next_value_of_STATE_VARIABLE_Rs_0_15;
      continue;
    }
    else
    {
      succeeded = (strcmp(Functor_10, (MR_String) "[]") == 0);
      if (succeeded)
        succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *STATE_VARIABLE_Rs_16 = STATE_VARIABLE_Rs_0_15;
      else
      {
        MR_Word TypeInfo_28_28;
        MR_Word STATE_VARIABLE_Rs_4_25;
        MR_Box Var_26;
        MR_Word Priority_33;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
        MR_Box conv1_Priority_33;

        {
          STATE_VARIABLE_Rs_4_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Rs_4_25, 0) = ((MR_Box) ((MR_String) " | "));
          MR_hl_field(1, STATE_VARIABLE_Rs_4_25, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_15));
        }
        TypeInfo_28_28 = ((MR_Word) ((MR_hl_field(0, Univ_8, 0))));
        Var_26 = (MR_hl_field(0, Univ_8, 1));
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
        conv1_Priority_33 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
        Priority_33 = ((MR_Word) (conv1_Priority_33));
        mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_28_28, NonCanon_6, Priority_33, Var_26, STATE_VARIABLE_Rs_4_25, STATE_VARIABLE_Rs_16);
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word NonCanon_6,
  MR_Box X_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word Priority_10;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  MR_Box conv1_Priority_10;

  conv1_Priority_10 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_10 = ((MR_Word) (conv1_Priority_10));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_13, NonCanon_6, Priority_10, X_8, STATE_VARIABLE_Rs_0_11, STATE_VARIABLE_Rs_12);
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_1(
  MR_Word TypeInfo_for_T_75,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_39,
  MR_Word * STATE_VARIABLE_Rs_40)
{
  MR_bool succeeded;
  MR_Word TypeCtorDesc_12;
  MR_Word ArgTypeDescs_13;
  MR_String TypeCtorModuleName_14;
  MR_String TypeCtorName_15;
  MR_Word Var_41;
  MR_String Var_106;
  MR_Integer Var_107;
  MR_String ToAddStr_17;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_75 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_41 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_12  = TypeCtorDesc;
	ArgTypeDescs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	TypeCtorModuleName_14  = TypeCtorModuleName;
	Var_106  = TypeCtorName;
	Var_107  = TypeCtorArity;
}
  TypeCtorName_15 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtorDesc_12);
  // binary string jump switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 3;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(TypeCtorModuleName_14, ((&mercury__string__to_string_vector_common_6[4 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&mercury__string__to_string_vector_common_6[4 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "bitmap"
            ;
            {
              MR_Word TypeCtorInfo_90_90;
              MR_Box Bitmap_31;
              MR_String Var_60;
              MR_Box conv17_Bitmap_31;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "bitmap") == 0);
              if (succeeded)
              {
                TypeCtorInfo_90_90 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_90_90, X_10, &conv17_Bitmap_31);
                Bitmap_31 = ((MR_Box) (conv17_Bitmap_31));
                Var_60 = mercury__bitmap__to_string_1_f_0(Bitmap_31);
                ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Var_60);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "builtin"
            ;
            {
              MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_15)) & (MR_Integer) 63);
              MR_String str_5 = ((&mercury__string__to_string_vector_common_7[64 + slot_4]))->mercury__string__to_string__vector_common_type_7_0__vct_7_f_0;

              // hashed string jump switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_5 != NULL)) && ((strcmp(str_5, TypeCtorName_15) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_4) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      // case "string"
                      ;
                      {
                        MR_String Str_16;
                        MR_Box conv11_Str_16;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv11_Str_16);
                        Str_16 = ((MR_String) (conv11_Str_16));
                        ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Str_16);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "uint32"
                      ;
                      {
                        uint32_t U32_28;
                        MR_String Var_56;
                        MR_Box conv14_U32_28;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv14_U32_28);
                        U32_28 = ((uint32_t) (MR_Word) conv14_U32_28);
                        Var_56 = mercury__string__uint32_to_string_1_f_0(U32_28);
                        mercury__string__append_3_p_2(Var_56, (MR_String) "u32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "character"
                      ;
                      {
                        MR_Char Char_18;
                        MR_Box conv4_Char_18;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv4_Char_18);
                        Char_18 = ((MR_Char) (MR_Word) conv4_Char_18);
                        ToAddStr_17 = mercury__term_io__quoted_char_to_string_1_f_0(Char_18);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      // case "int16"
                      ;
                      {
                        int16_t I16_22;
                        MR_String Var_44;
                        MR_Box conv7_I16_22;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv7_I16_22);
                        I16_22 = ((int16_t) (MR_Word) conv7_I16_22);
                        Var_44 = mercury__string__int16_to_string_1_f_0(I16_22);
                        mercury__string__append_3_p_2(Var_44, (MR_String) "i16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      // case "int"
                      ;
                      {
                        MR_Integer I_20;
                        MR_Box conv6_I_20;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv6_I_20);
                        I_20 = ((MR_Integer) (conv6_I_20));
                        ToAddStr_17 = mercury__string__int_to_string_1_f_0(I_20);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      // case "uint8"
                      ;
                      {
                        uint8_t U8_26;
                        MR_String Var_52;
                        MR_Box conv16_U8_26;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv16_U8_26);
                        U8_26 = ((uint8_t) (MR_Word) conv16_U8_26);
                        Var_52 = mercury__string__uint8_to_string_1_f_0(U8_26);
                        mercury__string__append_3_p_2(Var_52, (MR_String) "u8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 20:
                    {
                      // case "uint"
                      ;
                      {
                        MR_Unsigned U_25;
                        MR_String Var_50;
                        MR_Box conv12_U_25;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv12_U_25);
                        U_25 = ((MR_Unsigned) (conv12_U_25));
                        Var_50 = mercury__string__uint_to_string_1_f_0(U_25);
                        mercury__string__append_3_p_2(Var_50, (MR_String) "u", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 23:
                    {
                      // case "int8"
                      ;
                      {
                        int8_t I8_21;
                        MR_String Var_42;
                        MR_Box conv10_I8_21;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv10_I8_21);
                        I8_21 = ((int8_t) (MR_Word) conv10_I8_21);
                        Var_42 = mercury__string__int8_to_string_1_f_0(I8_21);
                        mercury__string__append_3_p_2(Var_42, (MR_String) "i8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 26:
                    {
                      // case "c_pointer"
                      ;
                      {
                        MR_Word CPtr_30;
                        MR_Box conv3_CPtr_30;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv3_CPtr_30);
                        CPtr_30 = ((MR_Word) (conv3_CPtr_30));
                        mercury__string__c_pointer_to_string_2_p_0(CPtr_30, &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 28:
                    {
                      // case "uint64"
                      ;
                      {
                        uint64_t U64_29;
                        MR_String Var_58;
                        MR_Box conv15_U64_29;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), X_10, &conv15_U64_29);
                        U64_29 = MR_unbox_uint64(conv15_U64_29);
                        Var_58 = mercury__string__uint64_to_string_1_f_0(U64_29);
                        mercury__string__append_3_p_2(Var_58, (MR_String) "u64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 33:
                    {
                      // case "uint16"
                      ;
                      {
                        uint16_t U16_27;
                        MR_String Var_54;
                        MR_Box conv13_U16_27;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv13_U16_27);
                        U16_27 = ((uint16_t) (MR_Word) conv13_U16_27);
                        Var_54 = mercury__string__uint16_to_string_1_f_0(U16_27);
                        mercury__string__append_3_p_2(Var_54, (MR_String) "u16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 35:
                    {
                      // case "float"
                      ;
                      {
                        MR_Float Float_19;
                        MR_Box conv5_Float_19;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv5_Float_19);
                        Float_19 = MR_unbox_float(conv5_Float_19);
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Float Flt;
	MR_String Str;

	Flt = Float_19 ;
		{
{
    // For efficiency reasons, we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	ToAddStr_17  = Str;
}
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 37:
                    {
                      // case "int32"
                      ;
                      {
                        int32_t I32_23;
                        MR_String Var_46;
                        MR_Box conv8_I32_23;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_I32_23);
                        I32_23 = ((int32_t) (MR_Word) conv8_I32_23);
                        Var_46 = mercury__string__int32_to_string_1_f_0(I32_23);
                        mercury__string__append_3_p_2(Var_46, (MR_String) "i32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 48:
                    {
                      // case "int64"
                      ;
                      {
                        int64_t I64_24;
                        MR_String Var_48;
                        MR_Box conv9_I64_24;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), X_10, &conv9_I64_24);
                        I64_24 = MR_unbox_int64(conv9_I64_24);
                        Var_48 = mercury__string__int64_to_string_1_f_0(I64_24);
                        mercury__string__append_3_p_2(Var_48, (MR_String) "i64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "private_builtin"
            ;
            {
              MR_Word PITypeInfo_35;
              MR_Word TypeCtorInfo_94_94;
              MR_Word TypeInfo_36;
              MR_Word Var_62;
              MR_String Var_63;
              MR_Word TypeDesc_70;
              MR_Box conv2_PITypeInfo_35;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "type_info") == 0);
              if (succeeded)
              {
                succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
                  succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_94_94 = (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0);
                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_94_94, X_10, &conv2_PITypeInfo_35);
                    PITypeInfo_35 = ((MR_Word) (conv2_PITypeInfo_35));
                    TypeInfo_36 = (MR_Word) (PITypeInfo_35);
                    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_36, &TypeDesc_70);
                    Var_63 = mercury__type_desc__type_name_1_f_0(TypeDesc_70);
                    ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_63);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "type_desc"
            ;
            if ((strcmp(TypeCtorName_15, (MR_String) "type_desc") == 0))
            {
              MR_Word TypeDesc_32;
              MR_String Var_61;
              MR_Box conv0_TypeDesc_32;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv0_TypeDesc_32);
              TypeDesc_32 = ((MR_Word) (conv0_TypeDesc_32));
              Var_61 = mercury__type_desc__type_name_1_f_0(TypeDesc_32);
              ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_61);
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(TypeCtorName_15, (MR_String) "type_ctor_desc") == 0))
            {
              MR_Word Var_102;
              MR_Box conv1_Var_102;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv1_Var_102);
              Var_102 = ((MR_Word) (conv1_Var_102));
              succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(TypeCtorDesc_12, Var_102);
              if (succeeded)
              {
                ToAddStr_17 = mercury__string__to_string__type_ctor_desc_to_string_1_f_0(TypeCtorDesc_12);
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_1;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_1:;
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_40 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ToAddStr_17));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_39));
    }
  else
  {
    MR_Word STATE_VARIABLE_Rs_2_66;
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_104 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 0))));
      Var_103 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
      succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_95_95;
          MR_Word TypeCtorInfo_96_96;
          MR_Word TypeInfo_97_97;
          MR_ArrayPtr Array_37;
          MR_Box conv18_Array_37;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_95_95  = TypeInfo_for_T;
}
            TypeCtorInfo_96_96 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
            {
              TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_97_97, 0) = ((MR_Box) (TypeCtorInfo_96_96));
              MR_hl_field(0, TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_95_95));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_97_97, X_10, &conv18_Array_37);
            Array_37 = ((MR_ArrayPtr) (conv18_Array_37));
            mercury__string__to_string__array_to_revstrings_5_p_1(TypeInfo_95_95, NonCanon_7, (MR_ArrayPtr) (Array_37), STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_98_98;
          MR_Word TypeCtorInfo_99_99;
          MR_Word TypeInfo_100_100;
          MR_Box VersionArray_38;
          MR_Box conv19_VersionArray_38;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "version_array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_98_98  = TypeInfo_for_T;
}
            TypeCtorInfo_99_99 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
            {
              TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_100_100, 0) = ((MR_Box) (TypeCtorInfo_99_99));
              MR_hl_field(0, TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_98_98));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_100_100, X_10, &conv19_VersionArray_38);
            VersionArray_38 = ((MR_Box) (conv19_VersionArray_38));
            mercury__string__to_string__version_array_to_revstrings_5_p_1(TypeInfo_98_98, NonCanon_7, VersionArray_38, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      *STATE_VARIABLE_Rs_40 = STATE_VARIABLE_Rs_2_66;
    else
      mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(TypeInfo_for_T_75, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_39, STATE_VARIABLE_Rs_40);
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
  MR_Word TypeInfo_for_T_157,
  MR_Word NonCanon_7,
  MR_Word MinTermPrio_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_34,
  MR_Word * STATE_VARIABLE_Rs_35)
{
  MR_bool succeeded;
  MR_String Functor_12;
  MR_Word Args_14;
  MR_Integer _Arity_13;
  MR_Word STATE_VARIABLE_Rs_4_43;

  mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_157, X_10, NonCanon_7, &Functor_12, &_Arity_13, &Args_14);
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((strcmp(Functor_12, (MR_String) "[]") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_4_43);
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_4_43);
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
  else
  {
    MR_Word Var_171 = ((MR_Word) ((MR_hl_field(1, Args_14, 1))));
    MR_Word Var_172 = ((MR_Word) ((MR_hl_field(1, Args_14, 0))));

    if ((strcmp(Functor_12, (MR_String) "{}") == 0))
    {
      if ((Var_171 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TypeInfo_158_158;
        MR_Word STATE_VARIABLE_Rs_7_50;
        MR_Box Var_51;
        MR_Word STATE_VARIABLE_Rs_8_52;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_7_50);
        Var_51 = mercury__univ__univ_value_1_f_0(&TypeInfo_158_158, Var_172);
        mercury__string__to_string__value_to_revstrings_5_p_1(TypeInfo_158_158, NonCanon_7, Var_51, STATE_VARIABLE_Rs_7_50, &STATE_VARIABLE_Rs_8_52);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", STATE_VARIABLE_Rs_8_52, &STATE_VARIABLE_Rs_4_43);
      }
      else
      {
        MR_Word STATE_VARIABLE_Rs_10_56;
        MR_Word STATE_VARIABLE_Rs_11_57;
        MR_Word STATE_VARIABLE_Rs_12_58;

        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_10_56);
        mercury__string__to_string__arg_to_revstrings_5_p_1(NonCanon_7, Var_172, STATE_VARIABLE_Rs_10_56, &STATE_VARIABLE_Rs_11_57);
        mercury__string__to_string__term_args_to_revstrings_5_p_1(NonCanon_7, Var_171, STATE_VARIABLE_Rs_11_57, &STATE_VARIABLE_Rs_12_58);
        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", STATE_VARIABLE_Rs_12_58, &STATE_VARIABLE_Rs_4_43);
      }
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(Functor_12, (MR_String) "[|]") == 0))
    {
      MR_Word ListTail_16;
      MR_Word Var_37;
      MR_String Var_38;
      MR_Word STATE_VARIABLE_Rs_1_39;
      MR_Word STATE_VARIABLE_Rs_2_40;
      MR_Word STATE_VARIABLE_Rs_3_41;
      MR_String Var_42;

      succeeded = (Var_171 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ListTail_16 = ((MR_Word) ((MR_hl_field(1, Var_171, 0))));
        Var_37 = ((MR_Word) ((MR_hl_field(1, Var_171, 1))));
        succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_38 = (MR_String) "[";
          mercury__string__to_string__add_revstring_3_p_0(Var_38, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_1_39);
          mercury__string__to_string__arg_to_revstrings_5_p_1(NonCanon_7, Var_172, STATE_VARIABLE_Rs_1_39, &STATE_VARIABLE_Rs_2_40);
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(NonCanon_7, ListTail_16, STATE_VARIABLE_Rs_2_40, &STATE_VARIABLE_Rs_3_41);
          Var_42 = (MR_String) "]";
          mercury__string__to_string__add_revstring_3_p_0(Var_42, STATE_VARIABLE_Rs_3_41, &STATE_VARIABLE_Rs_4_43);
          succeeded = MR_TRUE;
        }
      }
    }
    else
      succeeded = MR_FALSE;
  }
  if (succeeded)
    *STATE_VARIABLE_Rs_35 = STATE_VARIABLE_Rs_4_43;
  else
  if ((Args_14 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
  else
  {
    MR_Word Var_169 = ((MR_Word) ((MR_hl_field(1, Args_14, 1))));
    MR_Word Var_170 = ((MR_Word) ((MR_hl_field(1, Args_14, 0))));

    if ((Var_169 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word OpInfos_23;

      succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_23);
      if (succeeded)
      {
        MR_Word OpPrio_24;
        MR_Word GtOrGeA_25;
        MR_Word Var_62 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, 2))));

        succeeded = (Var_62 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          OpPrio_24 = ((MR_Word) ((MR_hl_field(1, Var_62, 0))));
          GtOrGeA_25 = ((MR_Unsigned) ((MR_hl_field(1, Var_62, 1))) & (MR_Integer) 1);
          {
            MR_Word TypeInfo_160_160;
            MR_Word MinPrioA_26;
            MR_Word STATE_VARIABLE_Rs_14_64;
            MR_String Var_65;
            MR_Word STATE_VARIABLE_Rs_15_66;
            MR_Word STATE_VARIABLE_Rs_16_68;
            MR_Box Var_69;
            MR_Word STATE_VARIABLE_Rs_17_70;

            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_14_64);
            Var_65 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
            mercury__string__to_string__add_revstring_3_p_0(Var_65, STATE_VARIABLE_Rs_14_64, &STATE_VARIABLE_Rs_15_66);
            mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_15_66, &STATE_VARIABLE_Rs_16_68);
            switch (GtOrGeA_25) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                MinPrioA_26 = OpPrio_24;
                break;
              case (MR_Integer) 0:
                MinPrioA_26 = mercury__ops__increment_priority_1_f_0(OpPrio_24);
                break;
            }
            Var_69 = mercury__univ__univ_value_1_f_0(&TypeInfo_160_160, Var_170);
            mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_160_160, NonCanon_7, MinPrioA_26, Var_69, STATE_VARIABLE_Rs_16_68, &STATE_VARIABLE_Rs_17_70);
            mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_24, STATE_VARIABLE_Rs_17_70, STATE_VARIABLE_Rs_35);
          }
        }
        else
        {
          MR_Word OpPrio_126;
          MR_Word GtOrGeA_127;
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, OpInfos_23, 3))));

          succeeded = (Var_73 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_126 = ((MR_Word) ((MR_hl_field(1, Var_73, 0))));
            GtOrGeA_127 = ((MR_Unsigned) ((MR_hl_field(1, Var_73, 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_161_161;
              MR_Word STATE_VARIABLE_Rs_19_75;
              MR_Box Var_76;
              MR_Word STATE_VARIABLE_Rs_20_77;
              MR_Word STATE_VARIABLE_Rs_21_79;
              MR_String Var_80;
              MR_Word STATE_VARIABLE_Rs_22_81;
              MR_Word MinPrioA_125;

              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_19_75);
              switch (GtOrGeA_127) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_125 = OpPrio_126;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_125 = mercury__ops__increment_priority_1_f_0(OpPrio_126);
                  break;
              }
              Var_76 = mercury__univ__univ_value_1_f_0(&TypeInfo_161_161, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_161_161, NonCanon_7, MinPrioA_125, Var_76, STATE_VARIABLE_Rs_19_75, &STATE_VARIABLE_Rs_20_77);
              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_20_77, &STATE_VARIABLE_Rs_21_79);
              Var_80 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
              mercury__string__to_string__add_revstring_3_p_0(Var_80, STATE_VARIABLE_Rs_21_79, &STATE_VARIABLE_Rs_22_81);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_126, STATE_VARIABLE_Rs_22_81, STATE_VARIABLE_Rs_35);
            }
          }
          else
            mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
        }
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
    else
    {
      MR_Word Var_173 = ((MR_Word) ((MR_hl_field(1, Var_169, 1))));
      MR_Word Var_174 = ((MR_Word) ((MR_hl_field(1, Var_169, 0))));

      if ((Var_173 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word OpInfos_140;

        succeeded = mercury__ops__lookup_op_infos_3_p_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), Functor_12, &OpInfos_140);
        if (succeeded)
        {
          MR_Word GtOrGeB_28;
          MR_Word OpPrio_137;
          MR_Word GtOrGeA_138;
          MR_Word Var_88 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, 0))));

          succeeded = (Var_88 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            OpPrio_137 = ((MR_Word) ((MR_hl_field(1, Var_88, 0))));
            GtOrGeA_138 = ((((MR_Unsigned) ((MR_hl_field(1, Var_88, 1))) >> 1)) & (MR_Integer) 1);
            GtOrGeB_28 = ((MR_Unsigned) ((MR_hl_field(1, Var_88, 1))) & (MR_Integer) 1);
            {
              MR_Word TypeInfo_163_163;
              MR_Word TypeInfo_164_164;
              MR_Word MinPrioB_29;
              MR_Word STATE_VARIABLE_Rs_26_90;
              MR_Box Var_91;
              MR_Word STATE_VARIABLE_Rs_27_92;
              MR_Word STATE_VARIABLE_Rs_28_94;
              MR_Box Var_101;
              MR_Word STATE_VARIABLE_Rs_32_102;
              MR_Word MinPrioA_129;

              switch (GtOrGeA_138) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioA_129 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioA_129 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              switch (GtOrGeB_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  MinPrioB_29 = OpPrio_137;
                  break;
                case (MR_Integer) 0:
                  MinPrioB_29 = mercury__ops__increment_priority_1_f_0(OpPrio_137);
                  break;
              }
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_26_90);
              Var_91 = mercury__univ__univ_value_1_f_0(&TypeInfo_163_163, Var_170);
              mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_163_163, NonCanon_7, MinPrioA_129, Var_91, STATE_VARIABLE_Rs_26_90, &STATE_VARIABLE_Rs_27_92);
              succeeded = (strcmp(Functor_12, (MR_String) ",") == 0);
              if (succeeded)
                mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", STATE_VARIABLE_Rs_27_92, &STATE_VARIABLE_Rs_28_94);
              else
              {
                MR_Word STATE_VARIABLE_Rs_29_96;
                MR_String Var_97;
                MR_Word STATE_VARIABLE_Rs_30_98;

                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_27_92, &STATE_VARIABLE_Rs_29_96);
                Var_97 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_97, STATE_VARIABLE_Rs_29_96, &STATE_VARIABLE_Rs_30_98);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_30_98, &STATE_VARIABLE_Rs_28_94);
              }
              Var_101 = mercury__univ__univ_value_1_f_0(&TypeInfo_164_164, Var_174);
              mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_164_164, NonCanon_7, MinPrioB_29, Var_101, STATE_VARIABLE_Rs_28_94, &STATE_VARIABLE_Rs_32_102);
              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_137, STATE_VARIABLE_Rs_32_102, STATE_VARIABLE_Rs_35);
            }
          }
          else
          {
            MR_Word OpPrio_132;
            MR_Word GtOrGeA_133;
            MR_Word GtOrGeB_135;
            MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, OpInfos_140, 1))));

            succeeded = (Var_105 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              OpPrio_132 = ((MR_Word) ((MR_hl_field(1, Var_105, 0))));
              GtOrGeA_133 = ((((MR_Unsigned) ((MR_hl_field(1, Var_105, 1))) >> 1)) & (MR_Integer) 1);
              GtOrGeB_135 = ((MR_Unsigned) ((MR_hl_field(1, Var_105, 1))) & (MR_Integer) 1);
              {
                MR_Word TypeInfo_165_165;
                MR_Word TypeInfo_166_166;
                MR_Word STATE_VARIABLE_Rs_34_107;
                MR_String Var_108;
                MR_Word STATE_VARIABLE_Rs_35_109;
                MR_Word STATE_VARIABLE_Rs_36_111;
                MR_Box Var_112;
                MR_Word STATE_VARIABLE_Rs_37_113;
                MR_Word STATE_VARIABLE_Rs_38_115;
                MR_Box Var_116;
                MR_Word STATE_VARIABLE_Rs_39_117;
                MR_Word MinPrioA_130;
                MR_Word MinPrioB_131;

                switch (GtOrGeA_133) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioA_130 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioA_130 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                switch (GtOrGeB_135) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    MinPrioB_131 = OpPrio_132;
                    break;
                  case (MR_Integer) 0:
                    MinPrioB_131 = mercury__ops__increment_priority_1_f_0(OpPrio_132);
                    break;
                }
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_0_34, &STATE_VARIABLE_Rs_34_107);
                Var_108 = mercury__term_io__quoted_atom_1_f_0(Functor_12);
                mercury__string__to_string__add_revstring_3_p_0(Var_108, STATE_VARIABLE_Rs_34_107, &STATE_VARIABLE_Rs_35_109);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_35_109, &STATE_VARIABLE_Rs_36_111);
                Var_112 = mercury__univ__univ_value_1_f_0(&TypeInfo_165_165, Var_170);
                mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_165_165, NonCanon_7, MinPrioA_130, Var_112, STATE_VARIABLE_Rs_36_111, &STATE_VARIABLE_Rs_37_113);
                mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", STATE_VARIABLE_Rs_37_113, &STATE_VARIABLE_Rs_38_115);
                Var_116 = mercury__univ__univ_value_1_f_0(&TypeInfo_166_166, Var_174);
                mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_166_166, NonCanon_7, MinPrioB_131, Var_116, STATE_VARIABLE_Rs_38_115, &STATE_VARIABLE_Rs_39_117);
                mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", MinTermPrio_9, OpPrio_132, STATE_VARIABLE_Rs_39_117, STATE_VARIABLE_Rs_35);
              }
            }
            else
              mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
          }
        }
        else
          mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
      }
      else
        mercury__string__to_string__plain_term_to_revstrings_7_p_1(NonCanon_7, MinTermPrio_9, Functor_12, Args_14, STATE_VARIABLE_Rs_0_34, STATE_VARIABLE_Rs_35);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_1(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_25)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfSTATE_VARIABLE_Rs_25 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Rs_1_19;
      MR_Word STATE_VARIABLE_Rs_2_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_1_19, &STATE_VARIABLE_Rs_2_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_2_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
  MR_Word NonCanon_1,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Rs_0_4,
  MR_Word * STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Rs_5 = STATE_VARIABLE_Rs_0_4;
    else
    {
      MR_Word TypeInfo_15_24;
      MR_Word X_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Xs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_Rs_1_19;
      MR_Word STATE_VARIABLE_Rs_2_20;
      MR_Word Priority_21;
      MR_Box Var_22;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Rs_0_4;

      {
        STATE_VARIABLE_Rs_1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 0) = ((MR_Box) ((MR_String) ", "));
        MR_hl_field(1, STATE_VARIABLE_Rs_1_19, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_4));
      }
      Priority_21 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
      Var_22 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_24, X_13);
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_24, NonCanon_1, Priority_21, Var_22, STATE_VARIABLE_Rs_1_19, &STATE_VARIABLE_Rs_2_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Xs_14;
      next_value_of_STATE_VARIABLE_Rs_0_4 = STATE_VARIABLE_Rs_2_20;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Rs_0_4 = next_value_of_STATE_VARIABLE_Rs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1(
  MR_Word TypeInfo_for_T_75,
  MR_Word NonCanon_7,
  MR_Word Priority_9,
  MR_Box X_10,
  MR_Word STATE_VARIABLE_Rs_0_39,
  MR_Word * AddrOfSTATE_VARIABLE_Rs_108)
{
  MR_bool succeeded;
  MR_Word TypeCtorDesc_12;
  MR_Word ArgTypeDescs_13;
  MR_String TypeCtorModuleName_14;
  MR_String TypeCtorName_15;
  MR_Word Var_41;
  MR_String Var_106;
  MR_Integer Var_107;
  MR_String ToAddStr_17;
  MR_Integer lo_0;
  MR_Integer hi_1;
  MR_Integer mid_2;
  MR_Integer result_3;

{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word TypeInfo;

	TypeInfo_for_T = TypeInfo_for_T_75 ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{
{
    TypeInfo = TypeInfo_for_T;

    // We used to collapse equivalences for efficiency here, but that is not
    // always desirable, due to the reverse mode of make_type/3, and efficiency
    // of type_infos probably isn't very important anyway.
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	Var_41  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc = Var_41 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;
    MR_TypeInfo     type_info;

    MR_save_transient_registers();

    type_info = (MR_TypeInfo) TypeDesc;
    MR_type_ctor_and_args(type_info, MR_TRUE, &type_ctor_desc, &ArgTypes);
    TypeCtorDesc = (MR_Word) type_ctor_desc;

    MR_restore_transient_registers();
}

		;}
#undef MR_PROC_LABEL
	TypeCtorDesc_12  = TypeCtorDesc;
	ArgTypeDescs_13  = ArgTypes;
}
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_12 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	TypeCtorModuleName_14  = TypeCtorModuleName;
	Var_106  = TypeCtorName;
	Var_107  = TypeCtorArity;
}
  TypeCtorName_15 = mercury__type_desc__type_ctor_name_1_f_0(TypeCtorDesc_12);
  // binary string jump switch
  ;
  lo_0 = (MR_Integer) 0;
  hi_1 = (MR_Integer) 3;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(TypeCtorModuleName_14, ((&mercury__string__to_string_vector_common_6[0 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      switch (((&mercury__string__to_string_vector_common_6[0 + mid_2]))->mercury__string__to_string__vector_common_type_6_0__vct_6_f_1) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            // case "bitmap"
            ;
            {
              MR_Word TypeCtorInfo_90_90;
              MR_Box Bitmap_31;
              MR_String Var_60;
              MR_Box conv17_Bitmap_31;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "bitmap") == 0);
              if (succeeded)
              {
                TypeCtorInfo_90_90 = (MR_Word) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0);
                mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_90_90, X_10, &conv17_Bitmap_31);
                Bitmap_31 = ((MR_Box) (conv17_Bitmap_31));
                Var_60 = mercury__bitmap__to_string_1_f_0(Bitmap_31);
                ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Var_60);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            // case "builtin"
            ;
            {
              MR_Integer slot_4 = ((MR_hash_string6(TypeCtorName_15)) & (MR_Integer) 63);
              MR_String str_5 = ((&mercury__string__to_string_vector_common_7[0 + slot_4]))->mercury__string__to_string__vector_common_type_7_0__vct_7_f_0;

              // hashed string jump switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_5 != NULL)) && ((strcmp(str_5, TypeCtorName_15) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_4) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      // case "string"
                      ;
                      {
                        MR_String Str_16;
                        MR_Box conv11_Str_16;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), X_10, &conv11_Str_16);
                        Str_16 = ((MR_String) (conv11_Str_16));
                        ToAddStr_17 = mercury__term_io__quoted_string_1_f_0(Str_16);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      // case "uint32"
                      ;
                      {
                        uint32_t U32_28;
                        MR_String Var_56;
                        MR_Box conv14_U32_28;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), X_10, &conv14_U32_28);
                        U32_28 = ((uint32_t) (MR_Word) conv14_U32_28);
                        Var_56 = mercury__string__uint32_to_string_1_f_0(U32_28);
                        mercury__string__append_3_p_2(Var_56, (MR_String) "u32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      // case "character"
                      ;
                      {
                        MR_Char Char_18;
                        MR_Box conv4_Char_18;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), X_10, &conv4_Char_18);
                        Char_18 = ((MR_Char) (MR_Word) conv4_Char_18);
                        ToAddStr_17 = mercury__term_io__quoted_char_to_string_1_f_0(Char_18);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      // case "int16"
                      ;
                      {
                        int16_t I16_22;
                        MR_String Var_44;
                        MR_Box conv7_I16_22;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int16_0), X_10, &conv7_I16_22);
                        I16_22 = ((int16_t) (MR_Word) conv7_I16_22);
                        Var_44 = mercury__string__int16_to_string_1_f_0(I16_22);
                        mercury__string__append_3_p_2(Var_44, (MR_String) "i16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      // case "int"
                      ;
                      {
                        MR_Integer I_20;
                        MR_Box conv6_I_20;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_10, &conv6_I_20);
                        I_20 = ((MR_Integer) (conv6_I_20));
                        ToAddStr_17 = mercury__string__int_to_string_1_f_0(I_20);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      // case "uint8"
                      ;
                      {
                        uint8_t U8_26;
                        MR_String Var_52;
                        MR_Box conv16_U8_26;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint8_0), X_10, &conv16_U8_26);
                        U8_26 = ((uint8_t) (MR_Word) conv16_U8_26);
                        Var_52 = mercury__string__uint8_to_string_1_f_0(U8_26);
                        mercury__string__append_3_p_2(Var_52, (MR_String) "u8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 20:
                    {
                      // case "uint"
                      ;
                      {
                        MR_Unsigned U_25;
                        MR_String Var_50;
                        MR_Box conv12_U_25;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), X_10, &conv12_U_25);
                        U_25 = ((MR_Unsigned) (conv12_U_25));
                        Var_50 = mercury__string__uint_to_string_1_f_0(U_25);
                        mercury__string__append_3_p_2(Var_50, (MR_String) "u", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 23:
                    {
                      // case "int8"
                      ;
                      {
                        int8_t I8_21;
                        MR_String Var_42;
                        MR_Box conv10_I8_21;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int8_0), X_10, &conv10_I8_21);
                        I8_21 = ((int8_t) (MR_Word) conv10_I8_21);
                        Var_42 = mercury__string__int8_to_string_1_f_0(I8_21);
                        mercury__string__append_3_p_2(Var_42, (MR_String) "i8", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 26:
                    {
                      // case "c_pointer"
                      ;
                      {
                        MR_Word CPtr_30;
                        MR_Box conv3_CPtr_30;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_c_pointer_0), X_10, &conv3_CPtr_30);
                        CPtr_30 = ((MR_Word) (conv3_CPtr_30));
                        mercury__string__c_pointer_to_string_2_p_0(CPtr_30, &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 28:
                    {
                      // case "uint64"
                      ;
                      {
                        uint64_t U64_29;
                        MR_String Var_58;
                        MR_Box conv15_U64_29;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint64_0), X_10, &conv15_U64_29);
                        U64_29 = MR_unbox_uint64(conv15_U64_29);
                        Var_58 = mercury__string__uint64_to_string_1_f_0(U64_29);
                        mercury__string__append_3_p_2(Var_58, (MR_String) "u64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 33:
                    {
                      // case "uint16"
                      ;
                      {
                        uint16_t U16_27;
                        MR_String Var_54;
                        MR_Box conv13_U16_27;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint16_0), X_10, &conv13_U16_27);
                        U16_27 = ((uint16_t) (MR_Word) conv13_U16_27);
                        Var_54 = mercury__string__uint16_to_string_1_f_0(U16_27);
                        mercury__string__append_3_p_2(Var_54, (MR_String) "u16", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 35:
                    {
                      // case "float"
                      ;
                      {
                        MR_Float Float_19;
                        MR_Box conv5_Float_19;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), X_10, &conv5_Float_19);
                        Float_19 = MR_unbox_float(conv5_Float_19);
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1

	MR_Float Flt;
	MR_String Str;

	Flt = Float_19 ;
		{
{
    // For efficiency reasons, we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	ToAddStr_17  = Str;
}
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 37:
                    {
                      // case "int32"
                      ;
                      {
                        int32_t I32_23;
                        MR_String Var_46;
                        MR_Box conv8_I32_23;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int32_0), X_10, &conv8_I32_23);
                        I32_23 = ((int32_t) (MR_Word) conv8_I32_23);
                        Var_46 = mercury__string__int32_to_string_1_f_0(I32_23);
                        mercury__string__append_3_p_2(Var_46, (MR_String) "i32", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                  case (MR_Integer) 48:
                    {
                      // case "int64"
                      ;
                      {
                        int64_t I64_24;
                        MR_String Var_48;
                        MR_Box conv9_I64_24;

                        mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int64_0), X_10, &conv9_I64_24);
                        I64_24 = MR_unbox_int64(conv9_I64_24);
                        Var_48 = mercury__string__int64_to_string_1_f_0(I64_24);
                        mercury__string__append_3_p_2(Var_48, (MR_String) "i64", &ToAddStr_17);
                        succeeded = MR_TRUE;
                      }
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              succeeded = MR_FALSE;
            label_0:;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            // case "private_builtin"
            ;
            {
              MR_Word PITypeInfo_35;
              MR_Word TypeCtorInfo_94_94;
              MR_Word TypeInfo_36;
              MR_Word Var_62;
              MR_String Var_63;
              MR_Word TypeDesc_70;
              MR_Box conv2_PITypeInfo_35;

              succeeded = (strcmp(TypeCtorName_15, (MR_String) "type_info") == 0);
              if (succeeded)
              {
                succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_62 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
                  succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    TypeCtorInfo_94_94 = (MR_Word) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0);
                    mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeCtorInfo_94_94, X_10, &conv2_PITypeInfo_35);
                    PITypeInfo_35 = ((MR_Word) (conv2_PITypeInfo_35));
                    TypeInfo_36 = (MR_Word) (PITypeInfo_35);
                    mercury__type_desc__type_info_to_type_desc_2_p_0(TypeInfo_36, &TypeDesc_70);
                    Var_63 = mercury__type_desc__type_name_1_f_0(TypeDesc_70);
                    ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_63);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            // case "type_desc"
            ;
            if ((strcmp(TypeCtorName_15, (MR_String) "type_desc") == 0))
            {
              MR_Word TypeDesc_32;
              MR_String Var_61;
              MR_Box conv0_TypeDesc_32;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), X_10, &conv0_TypeDesc_32);
              TypeDesc_32 = ((MR_Word) (conv0_TypeDesc_32));
              Var_61 = mercury__type_desc__type_name_1_f_0(TypeDesc_32);
              ToAddStr_17 = mercury__term_io__quoted_atom_1_f_0(Var_61);
              succeeded = MR_TRUE;
            }
            else
            if ((strcmp(TypeCtorName_15, (MR_String) "type_ctor_desc") == 0))
            {
              MR_Word Var_102;
              MR_Box conv1_Var_102;

              mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, (MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), X_10, &conv1_Var_102);
              Var_102 = ((MR_Word) (conv1_Var_102));
              succeeded = mercury__type_desc____Unify____type_ctor_desc_0_0(TypeCtorDesc_12, Var_102);
              if (succeeded)
              {
                ToAddStr_17 = mercury__string__to_string__type_ctor_desc_to_string_1_f_0(TypeCtorDesc_12);
                succeeded = MR_TRUE;
              }
            }
            else
              succeeded = MR_FALSE;
          }
          break;
      }
      // jump out of search loop
      ;
      goto label_1;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_1:;
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_40;

    {
      STATE_VARIABLE_Rs_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_40, 0) = ((MR_Box) (ToAddStr_17));
      MR_hl_field(1, STATE_VARIABLE_Rs_40, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_39));
    }
    *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_40;
  }
  else
  {
    MR_Word STATE_VARIABLE_Rs_2_66;
    MR_Word Var_103;
    MR_Word Var_104;

    succeeded = (ArgTypeDescs_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_104 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 0))));
      Var_103 = ((MR_Word) ((MR_hl_field(1, ArgTypeDescs_13, 1))));
      succeeded = (Var_103 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "array") == 0))
        {
          MR_Word TypeInfo_95_95;
          MR_Word TypeCtorInfo_96_96;
          MR_Word TypeInfo_97_97;
          MR_ArrayPtr Array_37;
          MR_Box conv18_Array_37;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_95_95  = TypeInfo_for_T;
}
            TypeCtorInfo_96_96 = (MR_Word) (&mercury__array__array__type_ctor_info_array_1);
            {
              TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_97_97, 0) = ((MR_Box) (TypeCtorInfo_96_96));
              MR_hl_field(0, TypeInfo_97_97, 1) = ((MR_Box) (TypeInfo_95_95));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_97_97, X_10, &conv18_Array_37);
            Array_37 = ((MR_ArrayPtr) (conv18_Array_37));
            mercury__string__to_string__array_to_revstrings_5_p_1(TypeInfo_95_95, NonCanon_7, (MR_ArrayPtr) (Array_37), STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
        if ((strcmp(TypeCtorModuleName_14, (MR_String) "version_array") == 0))
        {
          MR_Word TypeInfo_98_98;
          MR_Word TypeCtorInfo_99_99;
          MR_Word TypeInfo_100_100;
          MR_Box VersionArray_38;
          MR_Box conv19_VersionArray_38;

          succeeded = (strcmp(TypeCtorName_15, (MR_String) "version_array") == 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_Out_1;
	MR_Word TypeInfo;

	TypeInfo = Var_104 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	TypeInfo_Out_1 = TypeInfo_for_T;
	TypeInfo_98_98  = TypeInfo_for_T;
}
            TypeCtorInfo_99_99 = (MR_Word) (&mercury__version_array__version_array__type_ctor_info_version_array_1);
            {
              TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_100_100, 0) = ((MR_Box) (TypeCtorInfo_99_99));
              MR_hl_field(0, TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_98_98));
            }
            mercury__string__to_string__det_dynamic_cast_2_p_0(TypeInfo_for_T_75, TypeInfo_100_100, X_10, &conv19_VersionArray_38);
            VersionArray_38 = ((MR_Box) (conv19_VersionArray_38));
            mercury__string__to_string__version_array_to_revstrings_5_p_1(TypeInfo_98_98, NonCanon_7, VersionArray_38, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_2_66);
            succeeded = MR_TRUE;
          }
        }
        else
          succeeded = MR_FALSE;
      }
    }
    if (succeeded)
      *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_2_66;
    else
    {
      MR_Word STATE_VARIABLE_Rs_110;

      mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(TypeInfo_for_T_75, NonCanon_7, Priority_9, X_10, STATE_VARIABLE_Rs_0_39, &STATE_VARIABLE_Rs_110);
      *AddrOfSTATE_VARIABLE_Rs_108 = STATE_VARIABLE_Rs_110;
    }
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_Box Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_1_14;
  MR_Word Var_15;
  MR_Integer Var_25;
  MR_Integer Var_26;
  MR_Word Priority_29;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_29;
  MR_Word * AddrSTATE_VARIABLE_Rs_2_32;

  {
    STATE_VARIABLE_Rs_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 0) = ((MR_Box) ((MR_String) "version_array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_1

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) Array_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
  Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
  mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(Array_8, Var_25, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  conv1_Priority_29 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_29 = ((MR_Word) (conv1_Priority_29));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_2_32 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1(TypeInfo_20_20, NonCanon_6, Priority_29, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_1_14, AddrSTATE_VARIABLE_Rs_2_32);
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word NonCanon_6,
  MR_ArrayPtr Array_8,
  MR_Word STATE_VARIABLE_Rs_0_11,
  MR_Word * STATE_VARIABLE_Rs_12)
{
  MR_Word TypeInfo_20_20;
  MR_Word STATE_VARIABLE_Rs_1_14;
  MR_Word Var_15;
  MR_Word Priority_21;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Priority_21;
  MR_Word * AddrSTATE_VARIABLE_Rs_2_23;

  {
    STATE_VARIABLE_Rs_1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 0) = ((MR_Box) ((MR_String) "array("));
    MR_hl_field(1, STATE_VARIABLE_Rs_1_14, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_11));
  }
  mercury__array__to_list_2_p_0(TypeInfo_for_T_18, Array_8, &Var_15);
  {
    TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_20_20, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(0, TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_T_18));
  }
  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string__to_string_scalar_common_1[0]), 0)), 12))));
  conv1_Priority_21 = func_0(((MR_Box) ((MR_Word) (&mercury__string__to_string_scalar_common_1[0]))), ((MR_Box) ((MR_Integer) 0)));
  Priority_21 = ((MR_Word) (conv1_Priority_21));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Rs_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
    MR_hl_field(1, base, 1) = NULL;
  }
  AddrSTATE_VARIABLE_Rs_2_23 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_12, 1)));
  mercury__string__to_string__LCMC__pred__value_to_revstrings_prio__1_6_p_1(TypeInfo_20_20, NonCanon_6, Priority_21, ((MR_Box) (Var_15)), STATE_VARIABLE_Rs_1_14, AddrSTATE_VARIABLE_Rs_2_23);
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
  MR_Word NonCanon_8,
  MR_Word Priority_10,
  MR_String Functor_11,
  MR_Word Args_12,
  MR_Word STATE_VARIABLE_Rs_0_16,
  MR_Word * STATE_VARIABLE_Rs_17)
{
  MR_bool succeeded = (Args_12 == (MR_Word) ((MR_Unsigned) 0U));
  MR_Word STATE_VARIABLE_Rs_3_24;
  MR_Word TypeClassInfo_for_op_table_33;
  MR_Word Var_18;
  MR_Unsigned Var_34;
  MR_Unsigned Var_35;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);
  MR_Box MR_CALL (* func_1)(MR_Box, MR_Box);
  MR_Box conv2_Var_18;

  if (succeeded)
  {
    TypeClassInfo_for_op_table_33 = (MR_Word) (&mercury__string__to_string_scalar_common_1[0]);
    func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, 0)), 9))));
    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (Functor_11)));
    if (succeeded)
    {
      func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_33, 0)), 13))));
      conv2_Var_18 = func_1(((MR_Box) (TypeClassInfo_for_op_table_33)), ((MR_Box) ((MR_Integer) 0)));
      Var_18 = ((MR_Word) (conv2_Var_18));
      Var_34 = (MR_Unsigned) (Priority_10);
      Var_35 = (MR_Unsigned) (Var_18);
      succeeded = (Var_34 > Var_35);
      if (!(succeeded))
        succeeded = (Var_34 == Var_35);
    }
  }
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_Rs_1_20;
    MR_String Var_21;
    MR_Word STATE_VARIABLE_Rs_2_22;

    {
      STATE_VARIABLE_Rs_1_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_1_20, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_1_20, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
    Var_21 = mercury__term_io__quoted_atom_1_f_0(Functor_11);
    {
      STATE_VARIABLE_Rs_2_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_2_22, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, STATE_VARIABLE_Rs_2_22, 1) = ((MR_Box) (STATE_VARIABLE_Rs_1_20));
    }
    {
      STATE_VARIABLE_Rs_3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_2_22));
    }
  }
  else
  {
    MR_String Var_25;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_42;

    mercury__term_io__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_113_117_111_116_101_100_95_97_116_111_109_95_97_103_116_95_95_91_83_116_114_101_97_109_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_83_116_97_116_101_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_4[0]), Functor_11, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &Var_38);
    Var_41 = (MR_Word) (Var_38);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_41, &Var_42);
    Var_25 = mercury__string__append_list_1_f_0(Var_42);
    {
      STATE_VARIABLE_Rs_3_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(1, STATE_VARIABLE_Rs_3_24, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_16));
    }
  }
  if ((Args_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Rs_17 = STATE_VARIABLE_Rs_3_24;
  else
  {
    MR_Word TypeInfo_15_47;
    MR_Word Y_14 = ((MR_Word) ((MR_hl_field(1, Args_12, 0))));
    MR_Word Ys_15 = ((MR_Word) ((MR_hl_field(1, Args_12, 1))));
    MR_Word STATE_VARIABLE_Rs_5_29;
    MR_Word STATE_VARIABLE_Rs_6_30;
    MR_Word Priority_44;
    MR_Box Var_45;
    MR_Word * AddrSTATE_VARIABLE_Rs_7_48;

    {
      STATE_VARIABLE_Rs_5_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Rs_5_29, 0) = ((MR_Box) ((MR_String) "("));
      MR_hl_field(1, STATE_VARIABLE_Rs_5_29, 1) = ((MR_Box) (STATE_VARIABLE_Rs_3_24));
    }
    Priority_44 = mercury__ops__comma_priority_1_f_0((MR_Word) (&mercury__string__to_string_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)));
    Var_45 = mercury__univ__univ_value_1_f_0(&TypeInfo_15_47, Y_14);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_15_47, NonCanon_8, Priority_44, Var_45, STATE_VARIABLE_Rs_5_29, &STATE_VARIABLE_Rs_6_30);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_17 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_Rs_7_48 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_Rs_17, 1)));
    mercury__string__to_string__LCMC__pred__term_args_to_revstrings__1_5_p_1(NonCanon_8, Ys_15, STATE_VARIABLE_Rs_6_30, AddrSTATE_VARIABLE_Rs_7_48);
  }
}

static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
  MR_Word TypeInfo_for_T1_8,
  MR_Word TypeInfo_for_T2_9,
  MR_Box A_3,
  MR_Box * B_4)
{
  MR_bool succeeded;
  MR_Box BPrime_5;

  succeeded = mercury__private_builtin__typed_unify_2_p_1(TypeInfo_for_T1_8, TypeInfo_for_T2_9, A_3, &BPrime_5);
  if (succeeded)
    *B_4 = BPrime_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.to_string.det_dynamic_cast\'/2", (MR_String) "dynamic_cast failed");
      return;
    }
}

static MR_String MR_CALL 
mercury__string__to_string__type_ctor_desc_to_string_1_f_0(
  MR_Word TypeCtorDesc_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_String ModuleName_5;
  MR_String Name0_6;
  MR_Integer Arity0_7;
  MR_String Name_8;
  MR_Integer Arity_9;

{
#define MR_PROC_LABEL mercury__string__to_string__type_ctor_desc_to_string_1_f_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc = TypeCtorDesc_3 ;
		{
{
    MR_TypeCtorDesc type_ctor_desc;

    type_ctor_desc = (MR_TypeCtorDesc) TypeCtorDesc;

    if (MR_TYPECTOR_DESC_IS_VARIABLE_ARITY(type_ctor_desc)) {
        TypeCtorModuleName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_MODULE_NAME(type_ctor_desc);
        TypeCtorName = (MR_String) (MR_Word)
            MR_TYPECTOR_DESC_GET_VA_NAME(type_ctor_desc);
        TypeCtorArity = MR_TYPECTOR_DESC_GET_VA_ARITY(type_ctor_desc);
    } else {
        MR_TypeCtorInfo type_ctor_info;

        type_ctor_info =
            MR_TYPECTOR_DESC_GET_FIXED_ARITY_TYPE_CTOR_INFO(type_ctor_desc);

        // We cast away the const-ness of the module and type names,
        // because MR_String is defined as char *, not const char *.

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	ModuleName_5  = TypeCtorModuleName;
	Name0_6  = TypeCtorName;
	Arity0_7  = TypeCtorArity;
}
  Name_8 = mercury__term_io__quoted_atom_1_f_0(Name0_6);
  succeeded = (strcmp(ModuleName_5, (MR_String) "builtin") == 0);
  if (succeeded)
    succeeded = (strcmp(Name_8, (MR_String) "func") == 0);
  if (succeeded)
    Arity_9 = (MR_Integer) ((MR_Unsigned) Arity0_7 - (MR_Unsigned) 1);
  else
    Arity_9 = Arity0_7;
  succeeded = (strcmp(ModuleName_5, (MR_String) "builtin") == 0);
  if (succeeded)
  {
    MR_String Var_25;
    MR_String Var_33;

    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Arity_9, &Var_25);
    mercury__string__append_3_p_2((MR_String) "/", Var_25, &Var_33);
    mercury__string__append_3_p_2(Name_8, Var_33, &Str_4);
  }
  else
  {
    MR_String Var_34;
    MR_String Var_42;
    MR_String Var_43;
    MR_String Var_45;

    mercury__string__format__format_signed_int_component_5_p_0((MR_Word) (&mercury__string__to_string_scalar_common_5[0]), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Arity_9, &Var_34);
    mercury__string__append_3_p_2((MR_String) "/", Var_34, &Var_42);
    mercury__string__append_3_p_2(Name_8, Var_42, &Var_43);
    mercury__string__append_3_p_2((MR_String) ".", Var_43, &Var_45);
    mercury__string__append_3_p_2(ModuleName_5, Var_45, &Str_4);
  }
  return Str_4;
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0(
  MR_Box HeadVar__2_7,
  MR_Integer HeadVar__3_8,
  MR_Word HeadVar__4_9,
  MR_Word * HeadVar__5_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_8 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Box Var_12;
      MR_Word Var_13;
      MR_Integer Var_14;
      MR_Box Var_21;
      MR_Integer next_value_of_HeadVar__3_8;
      MR_Word next_value_of_HeadVar__4_9;

{
#define MR_PROC_LABEL mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) HeadVar__2_7 ;
	I = HeadVar__3_8 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_21  = (MR_Box) X;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_12 = Var_21;
      else
      {
        MR_Integer Var_22;
        MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_5_p_in__version_array_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) HeadVar__2_7 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_24  = N;
}
        Var_22 = (MR_Integer) ((MR_Unsigned) Var_24 - (MR_Unsigned) 1);
        {
          mercury__version_array__out_of_bounds_error_3_p_0(HeadVar__3_8, Var_22, (MR_String) "version_array.lookup");
          return;
        }
      }
      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = Var_12;
        MR_hl_field(1, Var_13, 1) = ((MR_Box) (HeadVar__4_9));
      }
      Var_14 = (MR_Integer) ((MR_Unsigned) HeadVar__3_8 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_8 = Var_14;
      next_value_of_HeadVar__4_9 = Var_13;
      HeadVar__3_8 = next_value_of_HeadVar__3_8;
      HeadVar__4_9 = next_value_of_HeadVar__4_9;
      continue;
    }
    else
      *HeadVar__5_10 = HeadVar__4_9;
    break;
  }
}

static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
  MR_String String_6,
  MR_Word Priority_7,
  MR_Word OpPrio_8,
  MR_Word STATE_VARIABLE_Rs_0_10,
  MR_Word * STATE_VARIABLE_Rs_11)
{
  MR_bool succeeded;
  MR_Unsigned Var_12 = (MR_Unsigned) (OpPrio_8);
  MR_Unsigned Var_13 = (MR_Unsigned) (Priority_7);

  succeeded = (Var_12 < Var_13);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Rs_11 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (String_6));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Rs_0_10));
    }
  else
    *STATE_VARIABLE_Rs_11 = STATE_VARIABLE_Rs_0_10;
}

static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
  MR_String String_4,
  MR_Word RevStrings_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__3_3 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (String_4));
    MR_hl_field(1, base, 1) = ((MR_Box) (RevStrings_5));
  }
}

static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__to_string____Unify____revstrings_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string__to_string____Compare____revstrings_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__string__to_string__init(void)
{
}

void mercury__string__to_string__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__string__to_string__string__to_string__type_ctor_info_revstrings_0);
}

void mercury__string__to_string__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__string__to_string__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module string.to_string.
