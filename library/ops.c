/*
** Automatically generated from `ops.m'
** by the Mercury compiler,
** version rotd-2024-12-30
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


// :- module ops.
// :- implementation.

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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
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
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
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
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_arg_prio_gt_or_ge_0_0;

static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_arg_prio_gt_or_ge_0_1;

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_ordinal_ordered_arg_prio_gt_or_ge_0[2];

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_arg_prio_gt_or_ge_0[2];

static const MR_Integer mercury__ops__ops__functor_number_map_arg_prio_gt_or_ge_0[2];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_binary_prefix_0_0;

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_maybe_op_info_binary_prefix_0_1[3];

static const MR_DuArgLocn mercury__ops__ops__field_locns_maybe_op_info_binary_prefix_0_1[3];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_binary_prefix_0_1;

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_binary_prefix_0_0[1];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_binary_prefix_0_1[1];

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_maybe_op_info_binary_prefix_0[2];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_maybe_op_info_binary_prefix_0[2];

static const MR_Integer mercury__ops__ops__functor_number_map_maybe_op_info_binary_prefix_0[2];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_infix_0_0;

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_maybe_op_info_infix_0_1[3];

static const MR_DuArgLocn mercury__ops__ops__field_locns_maybe_op_info_infix_0_1[3];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_infix_0_1;

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_infix_0_0[1];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_infix_0_1[1];

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_maybe_op_info_infix_0[2];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_maybe_op_info_infix_0[2];

static const MR_Integer mercury__ops__ops__functor_number_map_maybe_op_info_infix_0[2];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_postfix_0_0;

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_maybe_op_info_postfix_0_1[2];

static const MR_DuArgLocn mercury__ops__ops__field_locns_maybe_op_info_postfix_0_1[2];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_postfix_0_1;

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_postfix_0_0[1];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_postfix_0_1[1];

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_maybe_op_info_postfix_0[2];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_maybe_op_info_postfix_0[2];

static const MR_Integer mercury__ops__ops__functor_number_map_maybe_op_info_postfix_0[2];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_prefix_0_0;

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_maybe_op_info_prefix_0_1[2];

static const MR_DuArgLocn mercury__ops__ops__field_locns_maybe_op_info_prefix_0_1[2];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_prefix_0_1;

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_prefix_0_0[1];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_prefix_0_1[1];

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_maybe_op_info_prefix_0[2];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_maybe_op_info_prefix_0[2];

static const MR_Integer mercury__ops__ops__functor_number_map_maybe_op_info_prefix_0[2];

static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0;

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_ordinal_ordered_mercury_op_table_0[1];

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1];

static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1];

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_infos_0_0[4];

static const MR_ConstString mercury__ops__ops__field_names_op_infos_0_0[4];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_op_infos_0_0;

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_infos_0_0[1];

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_infos_0[1];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_infos_0[1];

static const MR_Integer mercury__ops__ops__functor_number_map_op_infos_0[1];

static const MR_Integer mercury__ops__ops__functor_number_map_priority_0[1];

static const MR_NotagFunctorDesc mercury__ops__ops__notag_functor_desc_priority_0;

static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1];

static const MR_TypeClassMethod mercury__ops__ops__type_class_id_method_ids_op_table_1[12];

static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1;

static MR_bool MR_CALL 
mercury__ops____Unify____arg_prio_gt_or_ge_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____arg_prio_gt_or_ge_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_binary_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____maybe_op_info_binary_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_infix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____maybe_op_info_infix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_postfix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____maybe_op_info_postfix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____maybe_op_info_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops____Unify____op_infos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____op_infos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__is_op_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__universal_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__loosest_op_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__tightest_op_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__comma_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box mercury__ops_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__ops_scalar_common_2[47][4];

static /* final */ const MR_Box mercury__ops_scalar_common_3[1][5];

static /* final */ const MR_Box mercury__ops_scalar_common_4[44][2];


struct mercury__ops__vector_common_type_5_0_s {
  const MR_Word mercury__ops__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct mercury__ops__vector_common_type_5_0_s mercury__ops_vector_common_5[98];



static /* final */ const MR_Box mercury__ops_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ops_scalar_common_2[47][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ops_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[5]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[5]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[9]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[23]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[37]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[1]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[3]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[6]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[43]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[5]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[8]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[9]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[10]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[11]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[12]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[13]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[15]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[16]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[17]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[18]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[19]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[20]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[24]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[25]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[26]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[27]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[28]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[30]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[34]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[35]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[36]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[40]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(1, &mercury__ops_scalar_common_4[42]))),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__ops_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ops_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ops_scalar_common_4[44][2] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1460U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 475U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row   2 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1100U)))),
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row   3 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1300U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row   4 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1000U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   5 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1000U)))),
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row   6 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1000U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row   7 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1300U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 321U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row   9 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 300U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  10 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 450U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  11 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1490U)))),
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row  12 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 950U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  13 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1380U)))),
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row  14 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 300U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  15 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 325U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  16 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 850U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  17 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 400U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  18 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 800U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  19 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 580U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  20 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1410U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  21 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 600U)))),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  22 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1400U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  23 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1401U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  24 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 550U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  25 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 780U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  26 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 320U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  27 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 310U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  28 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 330U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  29 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 301U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  30 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1000U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  31 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 700U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  32 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 340U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  33 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 700U)))),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  34 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 799U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  35 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 1100U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  36 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 760U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row  37 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 550U)))),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  38 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 550U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  39 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 319U)))),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  40 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 350U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  41 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 320U)))),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  42 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 600U)))),
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row  43 */
  {
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 500U)))),
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
};


static /* final */ const struct mercury__ops__vector_common_type_5_0_s mercury__ops_vector_common_5[98] = {
  /* row   0 */   { (MR_Word) (&mercury__ops_scalar_common_2[1]) },
  /* row   1 */   { (MR_Word) (&mercury__ops_scalar_common_2[1]) },
  /* row   2 */   { (MR_Word) (&mercury__ops_scalar_common_2[1]) },
  /* row   3 */   { (MR_Word) (&mercury__ops_scalar_common_2[18]) },
  /* row   4 */   { (MR_Word) (&mercury__ops_scalar_common_2[19]) },
  /* row   5 */   { (MR_Word) (&mercury__ops_scalar_common_2[20]) },
  /* row   6 */   { (MR_Word) (&mercury__ops_scalar_common_2[2]) },
  /* row   7 */   { (MR_Word) (&mercury__ops_scalar_common_2[21]) },
  /* row   8 */   { (MR_Word) (&mercury__ops_scalar_common_2[22]) },
  /* row   9 */   { (MR_Word) (&mercury__ops_scalar_common_2[3]) },
  /* row  10 */   { (MR_Word) (&mercury__ops_scalar_common_2[23]) },
  /* row  11 */   { (MR_Word) (&mercury__ops_scalar_common_2[24]) },
  /* row  12 */   { (MR_Word) (&mercury__ops_scalar_common_2[25]) },
  /* row  13 */   { (MR_Word) (&mercury__ops_scalar_common_2[26]) },
  /* row  14 */   { (MR_Word) (&mercury__ops_scalar_common_2[27]) },
  /* row  15 */   { (MR_Word) (&mercury__ops_scalar_common_2[28]) },
  /* row  16 */   { (MR_Word) (&mercury__ops_scalar_common_2[19]) },
  /* row  17 */   { (MR_Word) (&mercury__ops_scalar_common_2[19]) },
  /* row  18 */   { (MR_Word) (&mercury__ops_scalar_common_2[23]) },
  /* row  19 */   { (MR_Word) (&mercury__ops_scalar_common_2[29]) },
  /* row  20 */   { (MR_Word) (&mercury__ops_scalar_common_2[4]) },
  /* row  21 */   { (MR_Word) (&mercury__ops_scalar_common_2[30]) },
  /* row  22 */   { (MR_Word) (&mercury__ops_scalar_common_2[31]) },
  /* row  23 */   { (MR_Word) (&mercury__ops_scalar_common_2[32]) },
  /* row  24 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  25 */   { (MR_Word) (&mercury__ops_scalar_common_2[19]) },
  /* row  26 */   { (MR_Word) (&mercury__ops_scalar_common_2[19]) },
  /* row  27 */   { (MR_Word) (&mercury__ops_scalar_common_2[34]) },
  /* row  28 */   { (MR_Word) (&mercury__ops_scalar_common_2[34]) },
  /* row  29 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  30 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  31 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  32 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  33 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  34 */   { (MR_Word) (&mercury__ops_scalar_common_2[30]) },
  /* row  35 */   { (MR_Word) (&mercury__ops_scalar_common_2[34]) },
  /* row  36 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  37 */   { (MR_Word) (&mercury__ops_scalar_common_2[31]) },
  /* row  38 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  39 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  40 */   { (MR_Word) (&mercury__ops_scalar_common_2[19]) },
  /* row  41 */   { (MR_Word) (&mercury__ops_scalar_common_2[19]) },
  /* row  42 */   { (MR_Word) (&mercury__ops_scalar_common_2[5]) },
  /* row  43 */   { (MR_Word) (&mercury__ops_scalar_common_2[35]) },
  /* row  44 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  45 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  46 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  47 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  48 */   { (MR_Word) (&mercury__ops_scalar_common_2[6]) },
  /* row  49 */   { (MR_Word) (&mercury__ops_scalar_common_2[7]) },
  /* row  50 */   { (MR_Word) (&mercury__ops_scalar_common_2[23]) },
  /* row  51 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  52 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
  /* row  53 */   { (MR_Word) (&mercury__ops_scalar_common_2[8]) },
  /* row  54 */   { (MR_Word) (&mercury__ops_scalar_common_2[36]) },
  /* row  55 */   { (MR_Word) (&mercury__ops_scalar_common_2[37]) },
  /* row  56 */   { (MR_Word) (&mercury__ops_scalar_common_2[38]) },
  /* row  57 */   { (MR_Word) (&mercury__ops_scalar_common_2[39]) },
  /* row  58 */   { (MR_Word) (&mercury__ops_scalar_common_2[19]) },
  /* row  59 */   { (MR_Word) (&mercury__ops_scalar_common_2[40]) },
  /* row  60 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  61 */   { (MR_Word) (&mercury__ops_scalar_common_2[10]) },
  /* row  62 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  63 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  64 */   { (MR_Word) (&mercury__ops_scalar_common_2[41]) },
  /* row  65 */   { (MR_Word) (&mercury__ops_scalar_common_2[11]) },
  /* row  66 */   { (MR_Word) (&mercury__ops_scalar_common_2[12]) },
  /* row  67 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  68 */   { (MR_Word) (&mercury__ops_scalar_common_2[13]) },
  /* row  69 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  70 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  71 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  72 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  73 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  74 */   { (MR_Word) (&mercury__ops_scalar_common_2[42]) },
  /* row  75 */   { (MR_Word) (&mercury__ops_scalar_common_2[43]) },
  /* row  76 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  77 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  78 */   { (MR_Word) (&mercury__ops_scalar_common_2[7]) },
  /* row  79 */   { (MR_Word) (&mercury__ops_scalar_common_2[44]) },
  /* row  80 */   { (MR_Word) (&mercury__ops_scalar_common_2[32]) },
  /* row  81 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  82 */   { (MR_Word) (&mercury__ops_scalar_common_2[11]) },
  /* row  83 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  84 */   { (MR_Word) (&mercury__ops_scalar_common_2[14]) },
  /* row  85 */   { (MR_Word) (&mercury__ops_scalar_common_2[15]) },
  /* row  86 */   { (MR_Word) (&mercury__ops_scalar_common_2[43]) },
  /* row  87 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  88 */   { (MR_Word) (&mercury__ops_scalar_common_2[13]) },
  /* row  89 */   { (MR_Word) (&mercury__ops_scalar_common_2[16]) },
  /* row  90 */   { (MR_Word) (&mercury__ops_scalar_common_2[45]) },
  /* row  91 */   { (MR_Word) (&mercury__ops_scalar_common_2[17]) },
  /* row  92 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  93 */   { (MR_Word) (&mercury__ops_scalar_common_2[9]) },
  /* row  94 */   { (MR_Word) (&mercury__ops_scalar_common_2[46]) },
  /* row  95 */   { (MR_Word) (&mercury__ops_scalar_common_2[30]) },
  /* row  96 */   { (MR_Word) (&mercury__ops_scalar_common_2[7]) },
  /* row  97 */   { (MR_Word) (&mercury__ops_scalar_common_2[33]) },
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


static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_arg_prio_gt_or_ge_0_0 = {
  (MR_String) "arg_gt",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_arg_prio_gt_or_ge_0_1 = {
  (MR_String) "arg_ge",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_ordinal_ordered_arg_prio_gt_or_ge_0[2] = {
  &mercury__ops__ops__enum_functor_desc_arg_prio_gt_or_ge_0_0,
  &mercury__ops__ops__enum_functor_desc_arg_prio_gt_or_ge_0_1
};

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_arg_prio_gt_or_ge_0[2] = {
  &mercury__ops__ops__enum_functor_desc_arg_prio_gt_or_ge_0_1,
  &mercury__ops__ops__enum_functor_desc_arg_prio_gt_or_ge_0_0
};

static const MR_Integer mercury__ops__ops__functor_number_map_arg_prio_gt_or_ge_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_arg_prio_gt_or_ge_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__ops____Unify____arg_prio_gt_or_ge_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____arg_prio_gt_or_ge_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "arg_prio_gt_or_ge",
  { mercury__ops__ops__enum_name_ordered_arg_prio_gt_or_ge_0 },
  { mercury__ops__ops__enum_ordinal_ordered_arg_prio_gt_or_ge_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ops__ops__functor_number_map_arg_prio_gt_or_ge_0,

};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_binary_prefix_0_0 = {
  (MR_String) "no_bin_pre",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_maybe_op_info_binary_prefix_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_priority_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_arg_prio_gt_or_ge_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_arg_prio_gt_or_ge_0)
};

static const MR_DuArgLocn mercury__ops__ops__field_locns_maybe_op_info_binary_prefix_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_binary_prefix_0_1 = {
  (MR_String) "bin_pre",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ops__ops__field_types_maybe_op_info_binary_prefix_0_1,
  NULL,
  mercury__ops__ops__field_locns_maybe_op_info_binary_prefix_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_binary_prefix_0_0[1] = { &mercury__ops__ops__du_functor_desc_maybe_op_info_binary_prefix_0_0 };

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_binary_prefix_0_1[1] = { &mercury__ops__ops__du_functor_desc_maybe_op_info_binary_prefix_0_1 };

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_maybe_op_info_binary_prefix_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__ops__ops__du_stag_ordered_maybe_op_info_binary_prefix_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_maybe_op_info_binary_prefix_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_maybe_op_info_binary_prefix_0[2] = {
  &mercury__ops__ops__du_functor_desc_maybe_op_info_binary_prefix_0_1,
  &mercury__ops__ops__du_functor_desc_maybe_op_info_binary_prefix_0_0
};

static const MR_Integer mercury__ops__ops__functor_number_map_maybe_op_info_binary_prefix_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_maybe_op_info_binary_prefix_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____maybe_op_info_binary_prefix_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____maybe_op_info_binary_prefix_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "maybe_op_info_binary_prefix",
  { mercury__ops__ops__du_name_ordered_maybe_op_info_binary_prefix_0 },
  { mercury__ops__ops__du_ptag_ordered_maybe_op_info_binary_prefix_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ops__ops__functor_number_map_maybe_op_info_binary_prefix_0,

};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_infix_0_0 = {
  (MR_String) "no_in",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_maybe_op_info_infix_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_priority_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_arg_prio_gt_or_ge_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_arg_prio_gt_or_ge_0)
};

static const MR_DuArgLocn mercury__ops__ops__field_locns_maybe_op_info_infix_0_1[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_infix_0_1 = {
  (MR_String) "in",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ops__ops__field_types_maybe_op_info_infix_0_1,
  NULL,
  mercury__ops__ops__field_locns_maybe_op_info_infix_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_infix_0_0[1] = { &mercury__ops__ops__du_functor_desc_maybe_op_info_infix_0_0 };

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_infix_0_1[1] = { &mercury__ops__ops__du_functor_desc_maybe_op_info_infix_0_1 };

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_maybe_op_info_infix_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__ops__ops__du_stag_ordered_maybe_op_info_infix_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_maybe_op_info_infix_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_maybe_op_info_infix_0[2] = {
  &mercury__ops__ops__du_functor_desc_maybe_op_info_infix_0_1,
  &mercury__ops__ops__du_functor_desc_maybe_op_info_infix_0_0
};

static const MR_Integer mercury__ops__ops__functor_number_map_maybe_op_info_infix_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_maybe_op_info_infix_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____maybe_op_info_infix_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____maybe_op_info_infix_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "maybe_op_info_infix",
  { mercury__ops__ops__du_name_ordered_maybe_op_info_infix_0 },
  { mercury__ops__ops__du_ptag_ordered_maybe_op_info_infix_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ops__ops__functor_number_map_maybe_op_info_infix_0,

};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_postfix_0_0 = {
  (MR_String) "no_post",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_maybe_op_info_postfix_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_priority_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_arg_prio_gt_or_ge_0)
};

static const MR_DuArgLocn mercury__ops__ops__field_locns_maybe_op_info_postfix_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_postfix_0_1 = {
  (MR_String) "post",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ops__ops__field_types_maybe_op_info_postfix_0_1,
  NULL,
  mercury__ops__ops__field_locns_maybe_op_info_postfix_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_postfix_0_0[1] = { &mercury__ops__ops__du_functor_desc_maybe_op_info_postfix_0_0 };

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_postfix_0_1[1] = { &mercury__ops__ops__du_functor_desc_maybe_op_info_postfix_0_1 };

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_maybe_op_info_postfix_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__ops__ops__du_stag_ordered_maybe_op_info_postfix_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_maybe_op_info_postfix_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_maybe_op_info_postfix_0[2] = {
  &mercury__ops__ops__du_functor_desc_maybe_op_info_postfix_0_0,
  &mercury__ops__ops__du_functor_desc_maybe_op_info_postfix_0_1
};

static const MR_Integer mercury__ops__ops__functor_number_map_maybe_op_info_postfix_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_maybe_op_info_postfix_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____maybe_op_info_postfix_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____maybe_op_info_postfix_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "maybe_op_info_postfix",
  { mercury__ops__ops__du_name_ordered_maybe_op_info_postfix_0 },
  { mercury__ops__ops__du_ptag_ordered_maybe_op_info_postfix_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ops__ops__functor_number_map_maybe_op_info_postfix_0,

};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_prefix_0_0 = {
  (MR_String) "no_pre",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_maybe_op_info_prefix_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_priority_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_arg_prio_gt_or_ge_0)
};

static const MR_DuArgLocn mercury__ops__ops__field_locns_maybe_op_info_prefix_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_maybe_op_info_prefix_0_1 = {
  (MR_String) "pre",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ops__ops__field_types_maybe_op_info_prefix_0_1,
  NULL,
  mercury__ops__ops__field_locns_maybe_op_info_prefix_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_prefix_0_0[1] = { &mercury__ops__ops__du_functor_desc_maybe_op_info_prefix_0_0 };

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_maybe_op_info_prefix_0_1[1] = { &mercury__ops__ops__du_functor_desc_maybe_op_info_prefix_0_1 };

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_maybe_op_info_prefix_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__ops__ops__du_stag_ordered_maybe_op_info_prefix_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_maybe_op_info_prefix_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_maybe_op_info_prefix_0[2] = {
  &mercury__ops__ops__du_functor_desc_maybe_op_info_prefix_0_0,
  &mercury__ops__ops__du_functor_desc_maybe_op_info_prefix_0_1
};

static const MR_Integer mercury__ops__ops__functor_number_map_maybe_op_info_prefix_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_maybe_op_info_prefix_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____maybe_op_info_prefix_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____maybe_op_info_prefix_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "maybe_op_info_prefix",
  { mercury__ops__ops__du_name_ordered_maybe_op_info_prefix_0 },
  { mercury__ops__ops__du_ptag_ordered_maybe_op_info_prefix_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ops__ops__functor_number_map_maybe_op_info_prefix_0,

};

static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0 = {
  (MR_String) "mercury_op_table",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_ordinal_ordered_mercury_op_table_0[1] = { &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0 };

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1] = { &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0 };

static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_mercury_op_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__ops____Unify____mercury_op_table_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____mercury_op_table_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "mercury_op_table",
  { mercury__ops__ops__enum_name_ordered_mercury_op_table_0 },
  { mercury__ops__ops__enum_ordinal_ordered_mercury_op_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__ops__ops__functor_number_map_mercury_op_table_0,

};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_infos_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_maybe_op_info_infix_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_maybe_op_info_binary_prefix_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_maybe_op_info_prefix_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_maybe_op_info_postfix_0)
};

static const MR_ConstString mercury__ops__ops__field_names_op_infos_0_0[4] = {
  (MR_String) "oi_infix",
  (MR_String) "oi_binary_prefix",
  (MR_String) "oi_prefix",
  (MR_String) "oi_postfix"
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_op_infos_0_0 = {
  (MR_String) "op_infos",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__ops__ops__field_types_op_infos_0_0,
  mercury__ops__ops__field_names_op_infos_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_infos_0_0[1] = { &mercury__ops__ops__du_functor_desc_op_infos_0_0 };

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_infos_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_op_infos_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_infos_0[1] = { &mercury__ops__ops__du_functor_desc_op_infos_0_0 };

static const MR_Integer mercury__ops__ops__functor_number_map_op_infos_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_op_infos_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____op_infos_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____op_infos_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "op_infos",
  { mercury__ops__ops__du_name_ordered_op_infos_0 },
  { mercury__ops__ops__du_ptag_ordered_op_infos_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__ops__ops__functor_number_map_op_infos_0,

};

static const MR_Integer mercury__ops__ops__functor_number_map_priority_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__ops__ops__notag_functor_desc_priority_0 = {
  (MR_String) "prio",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_priority_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__ops____Unify____priority_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____priority_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "priority",
  { &mercury__ops__ops__notag_functor_desc_priority_0 },
  { &mercury__ops__ops__notag_functor_desc_priority_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__ops__ops__functor_number_map_priority_0,

};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__ops____Unify____table_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____table_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "table",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_BaseTypeclassInfo base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[17] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 12)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__is_op_2_2_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_3_3_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__universal_priority_1_1_f_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__loosest_op_priority_1_1_f_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__tightest_op_priority_1_1_f_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__comma_priority_1_1_f_0_10001)),
  ((MR_Box) (mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001))
};

static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1] = { (MR_String) "Table" };

static const MR_TypeClassMethod mercury__ops__ops__type_class_id_method_ids_op_table_1[12] = {
  {
    (MR_String) "lookup_infix_op",
    (MR_Integer) 5,
    MR_PREDICATE
  },
  {
    (MR_String) "lookup_prefix_op",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "lookup_binary_prefix_op",
    (MR_Integer) 5,
    MR_PREDICATE
  },
  {
    (MR_String) "lookup_postfix_op",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "is_op",
    (MR_Integer) 2,
    MR_PREDICATE
  },
  {
    (MR_String) "lookup_op_infos",
    (MR_Integer) 3,
    MR_PREDICATE
  },
  {
    (MR_String) "lookup_operator_term",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "universal_priority",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "loosest_op_priority",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "tightest_op_priority",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "comma_priority",
    (MR_Integer) 2,
    MR_FUNCTION
  },
  {
    (MR_String) "arg_priority",
    (MR_Integer) 2,
    MR_FUNCTION
  }
};

static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1 = {
  (MR_String) "ops",
  (MR_String) "op_table",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 12,
  mercury__ops__ops__type_class_id_var_names_op_table_1,
  mercury__ops__ops__type_class_id_method_ids_op_table_1
};

const MR_TypeClassDeclStruct mercury__ops__ops__type_class_decl_op_table_1 = {
  &mercury__ops__ops__type_class_id_op_table_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

MR_Word MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 501U)));
}

MR_Word MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__comma_priority_1_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 500U)));
}

MR_Word MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__tightest_op_priority_1_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 1500U)));
}

MR_Word MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__loosest_op_priority_1_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 1U)));
}

MR_Word MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__universal_priority_1_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0(
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  *HeadVar__2_2 = (MR_Word) (((MR_Box) ((MR_Unsigned) 1380U)));
  *HeadVar__3_3 = (MR_Integer) 1;
  *HeadVar__4_4 = (MR_Integer) 0;
  return MR_TRUE;
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_3_3_p_0(
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  succeeded = mercury__ops__mercury_op_table_2_p_0(HeadVar__2_2, HeadVar__3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__is_op_2_2_p_0(
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Var_3;

  succeeded = mercury__ops__mercury_op_table_2_p_0(HeadVar__2_2, &Var_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0(
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word OpInfos_5;
  MR_Word MaybePostfix_9;

  succeeded = mercury__ops__mercury_op_table_2_p_0(HeadVar__2_2, &OpInfos_5);
  if (succeeded)
  {
    MaybePostfix_9 = ((MR_Word) ((MR_hl_field(0, OpInfos_5, (MR_Integer) 3))));
    succeeded = (MaybePostfix_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(1, MaybePostfix_9, (MR_Integer) 0))));
      *HeadVar__4_4 = ((MR_Unsigned) ((MR_hl_field(1, MaybePostfix_9, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0(
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;
  MR_Word OpInfos_6;
  MR_Word MaybeBinPrefix_8;

  succeeded = mercury__ops__mercury_op_table_2_p_0(HeadVar__2_2, &OpInfos_6);
  if (succeeded)
  {
    MaybeBinPrefix_8 = ((MR_Word) ((MR_hl_field(0, OpInfos_6, (MR_Integer) 1))));
    succeeded = (MaybeBinPrefix_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(1, MaybeBinPrefix_8, (MR_Integer) 0))));
      *HeadVar__4_4 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      *HeadVar__5_5 = ((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_8, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0(
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word OpInfos_5;
  MR_Word MaybePrefix_8;

  succeeded = mercury__ops__mercury_op_table_2_p_0(HeadVar__2_2, &OpInfos_5);
  if (succeeded)
  {
    MaybePrefix_8 = ((MR_Word) ((MR_hl_field(0, OpInfos_5, (MR_Integer) 2))));
    succeeded = (MaybePrefix_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(1, MaybePrefix_8, (MR_Integer) 0))));
      *HeadVar__4_4 = ((MR_Unsigned) ((MR_hl_field(1, MaybePrefix_8, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0(
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;
  MR_Word OpInfos_6;
  MR_Word MaybeInfix_7;

  succeeded = mercury__ops__mercury_op_table_2_p_0(HeadVar__2_2, &OpInfos_6);
  if (succeeded)
  {
    MaybeInfix_7 = ((MR_Word) ((MR_hl_field(0, OpInfos_6, (MR_Integer) 0))));
    succeeded = (MaybeInfix_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Word) ((MR_hl_field(1, MaybeInfix_7, (MR_Integer) 0))));
      *HeadVar__4_4 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      *HeadVar__5_5 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_7, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ops____Compare____table_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__ops____Unify____table_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__ops____Compare____priority_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Unsigned ArgX1_4 = (MR_Unsigned) (HeadVar__2_2);
    MR_Unsigned ArgY1_5 = (MR_Unsigned) (HeadVar__3_3);

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Unsigned ArgX1_3 = (MR_Unsigned) (HeadVar__1_1);
    MR_Unsigned ArgY1_4 = (MR_Unsigned) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__ops____Compare____op_infos_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mercury__ops____Compare____maybe_op_info_infix_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__ops____Compare____maybe_op_info_binary_prefix_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__ops____Compare____maybe_op_info_prefix_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__ops____Compare____maybe_op_info_postfix_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__ops____Unify____op_infos_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__ops____Unify____maybe_op_info_infix_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mercury__ops____Unify____maybe_op_info_binary_prefix_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__ops____Unify____maybe_op_info_prefix_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = mercury__ops____Unify____maybe_op_info_postfix_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__ops____Compare____maybe_op_info_prefix_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Unsigned Var_13 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_14 = (MR_Unsigned) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_13 == Var_14);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 == Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_prefix_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6;
    MR_Integer CastX_13;
    MR_Integer CastY_14;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      CastX_13 = (MR_Integer) (ArgX1_3);
      CastY_14 = (MR_Integer) (ArgY1_4);
      succeeded = (CastX_13 == CastY_14);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Unsigned ArgX1_11 = (MR_Unsigned) (ArgX1_3);
        MR_Unsigned ArgY1_12 = (MR_Unsigned) (ArgY1_4);

        succeeded = (ArgX1_11 == ArgY1_12);
      }
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ops____Compare____maybe_op_info_postfix_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Unsigned Var_13 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_14 = (MR_Unsigned) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_13 == Var_14);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 == Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_postfix_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6;
    MR_Integer CastX_13;
    MR_Integer CastY_14;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      CastX_13 = (MR_Integer) (ArgX1_3);
      CastY_14 = (MR_Integer) (ArgY1_4);
      succeeded = (CastX_13 == CastY_14);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Unsigned ArgX1_11 = (MR_Unsigned) (ArgX1_3);
        MR_Unsigned ArgY1_12 = (MR_Unsigned) (ArgY1_4);

        succeeded = (ArgX1_11 == ArgY1_12);
      }
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ops____Compare____maybe_op_info_infix_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Unsigned Var_17 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_18 = (MR_Unsigned) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_17 == Var_18);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_19 == Var_20);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 == Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_infix_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8;
    MR_Integer CastX_15;
    MR_Integer CastY_16;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      CastX_15 = (MR_Integer) (ArgX1_3);
      CastY_16 = (MR_Integer) (ArgY1_4);
      succeeded = (CastX_15 == CastY_16);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Unsigned ArgX1_13 = (MR_Unsigned) (ArgX1_3);
        MR_Unsigned ArgY1_14 = (MR_Unsigned) (ArgY1_4);

        succeeded = (ArgX1_13 == ArgY1_14);
      }
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ops____Compare____maybe_op_info_binary_prefix_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Unsigned Var_17 = (MR_Unsigned) (ArgX1_4);
    MR_Unsigned Var_18 = (MR_Unsigned) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_17 == Var_18);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_19 < Var_20);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_19 == Var_20);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_21 < Var_22);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 == Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_binary_prefix_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_10 == CastX_9);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8;
    MR_Integer CastX_15;
    MR_Integer CastY_16;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      CastX_15 = (MR_Integer) (ArgX1_3);
      CastY_16 = (MR_Integer) (ArgY1_4);
      succeeded = (CastX_15 == CastY_16);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Unsigned ArgX1_13 = (MR_Unsigned) (ArgX1_3);
        MR_Unsigned ArgY1_14 = (MR_Unsigned) (ArgY1_4);

        succeeded = (ArgX1_13 == ArgY1_14);
      }
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ops____Compare____arg_prio_gt_or_ge_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__ops____Unify____arg_prio_gt_or_ge_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_Word MR_CALL 
mercury__ops__arg_priority_1_f_0(
  MR_Word TypeClassInfo_for_op_table_3,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 16))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_op_table_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__comma_priority_1_f_0(
  MR_Word TypeClassInfo_for_op_table_3,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 15))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_op_table_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__tightest_op_priority_1_f_0(
  MR_Word TypeClassInfo_for_op_table_3,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 14))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_op_table_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__loosest_op_priority_1_f_0(
  MR_Word TypeClassInfo_for_op_table_3,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 13))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_op_table_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__universal_priority_1_f_0(
  MR_Word TypeClassInfo_for_op_table_3,
  MR_Box HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_op_table_3)), HeadVar__1_1);
  HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__ops__lookup_operator_term_4_p_0(
  MR_Word TypeClassInfo_for_op_table_5,
  MR_Box HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 11))));
  MR_Box conv3_HeadVar__2_2;
  MR_Box conv2_HeadVar__3_3;
  MR_Box conv1_HeadVar__4_4;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_5)), HeadVar__1_1, &conv3_HeadVar__2_2, &conv2_HeadVar__3_3, &conv1_HeadVar__4_4);
  if (succeeded)
  {
    *HeadVar__2_2 = ((MR_Word) (conv3_HeadVar__2_2));
    *HeadVar__3_3 = ((MR_Word) (conv2_HeadVar__3_3));
    *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__lookup_op_infos_3_p_0(
  MR_Word TypeClassInfo_for_op_table_4,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_4, (MR_Integer) 0)), (MR_Integer) 10))));
  MR_Box conv1_HeadVar__3_3;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_4)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv1_HeadVar__3_3);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv1_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__is_op_2_p_0(
  MR_Word TypeClassInfo_for_op_table_3,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 9))));

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_3)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)));
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__lookup_postfix_op_4_p_0(
  MR_Word TypeClassInfo_for_op_table_5,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 8))));
  MR_Box conv2_HeadVar__3_3;
  MR_Box conv1_HeadVar__4_4;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_5)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv2_HeadVar__3_3));
    *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__lookup_binary_prefix_op_5_p_0(
  MR_Word TypeClassInfo_for_op_table_6,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 7))));
  MR_Box conv3_HeadVar__3_3;
  MR_Box conv2_HeadVar__4_4;
  MR_Box conv1_HeadVar__5_5;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_6)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv3_HeadVar__3_3));
    *HeadVar__4_4 = ((MR_Word) (conv2_HeadVar__4_4));
    *HeadVar__5_5 = ((MR_Word) (conv1_HeadVar__5_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__lookup_prefix_op_4_p_0(
  MR_Word TypeClassInfo_for_op_table_5,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv2_HeadVar__3_3;
  MR_Box conv1_HeadVar__4_4;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_5)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv2_HeadVar__3_3));
    *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__lookup_infix_op_5_p_0(
  MR_Word TypeClassInfo_for_op_table_6,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;
  MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 5))));
  MR_Box conv3_HeadVar__3_3;
  MR_Box conv2_HeadVar__4_4;
  MR_Box conv1_HeadVar__5_5;

  succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_6)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5);
  if (succeeded)
  {
    *HeadVar__3_3 = ((MR_Word) (conv3_HeadVar__3_3));
    *HeadVar__4_4 = ((MR_Word) (conv2_HeadVar__4_4));
    *HeadVar__5_5 = ((MR_Word) (conv1_HeadVar__5_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__ops__mercury_arg_priority_1_f_0(void)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 501U)));
}

MR_Word MR_CALL 
mercury__ops__mercury_comma_priority_1_f_0(void)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_99_111_109_109_97_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 500U)));
}

MR_Word MR_CALL 
mercury__ops__mercury_tightest_op_priority_1_f_0(void)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_116_105_103_104_116_101_115_116_95_111_112_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_116_105_103_104_116_101_115_116_95_111_112_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 1500U)));
}

MR_Word MR_CALL 
mercury__ops__mercury_loosest_op_priority_1_f_0(void)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_108_111_111_115_101_115_116_95_111_112_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_108_111_111_115_101_115_116_95_111_112_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 1U)));
}

MR_Word MR_CALL 
mercury__ops__mercury_universal_priority_1_f_0(void)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_117_110_105_118_101_114_115_97_108_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_117_110_105_118_101_114_115_97_108_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

void MR_CALL 
mercury__ops__lookup_mercury_operator_term_4_p_0(
  MR_Word * OpPriority_6,
  MR_Word * LeftGtOrGe_7,
  MR_Word * RightGtOrGe_8)
{
  mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_p_0(OpPriority_6, LeftGtOrGe_7, RightGtOrGe_8);
}

void MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_p_0(
  MR_Word * OpPriority_6,
  MR_Word * LeftGtOrGe_7,
  MR_Word * RightGtOrGe_8)
{
  *OpPriority_6 = (MR_Word) (((MR_Box) ((MR_Unsigned) 1380U)));
  *LeftGtOrGe_7 = (MR_Integer) 1;
  *RightGtOrGe_8 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_op_infos_3_p_0(
  MR_String Name_5,
  MR_Word * OpInfos_6)
{
  MR_bool succeeded;

  succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_3_p_0(Name_5, OpInfos_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_3_p_0(
  MR_String Name_5,
  MR_Word * OpInfos_6)
{
  MR_bool succeeded;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_5, OpInfos_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__is_mercury_op_2_p_0(
  MR_String Name_4)
{
  MR_bool succeeded;

  succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_p_0(Name_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_p_0(
  MR_String Name_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_4, &Var_5);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_postfix_op_4_p_0(
  MR_String Name_6,
  MR_Word * OpPriority_7,
  MR_Word * LeftGtOrGe_8)
{
  MR_bool succeeded;

  succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(Name_6, OpPriority_7, LeftGtOrGe_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String Name_6,
  MR_Word * OpPriority_7,
  MR_Word * LeftGtOrGe_8)
{
  MR_bool succeeded;
  MR_Word OpInfos_9;
  MR_Word MaybePostfix_13;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_6, &OpInfos_9);
  if (succeeded)
  {
    MaybePostfix_13 = ((MR_Word) ((MR_hl_field(0, OpInfos_9, (MR_Integer) 3))));
    succeeded = (MaybePostfix_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *OpPriority_7 = ((MR_Word) ((MR_hl_field(1, MaybePostfix_13, (MR_Integer) 0))));
      *LeftGtOrGe_8 = ((MR_Unsigned) ((MR_hl_field(1, MaybePostfix_13, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_binary_prefix_op_5_p_0(
  MR_String Name_7,
  MR_Word * OpPriority_8,
  MR_Word * LeftGtOrGe_9,
  MR_Word * RightGtOrGe_10)
{
  MR_bool succeeded;

  succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(Name_7, OpPriority_8, LeftGtOrGe_9, RightGtOrGe_10);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_String Name_7,
  MR_Word * OpPriority_8,
  MR_Word * LeftGtOrGe_9,
  MR_Word * RightGtOrGe_10)
{
  MR_bool succeeded;
  MR_Word OpInfos_11;
  MR_Word MaybeBinPrefix_13;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_7, &OpInfos_11);
  if (succeeded)
  {
    MaybeBinPrefix_13 = ((MR_Word) ((MR_hl_field(0, OpInfos_11, (MR_Integer) 1))));
    succeeded = (MaybeBinPrefix_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *OpPriority_8 = ((MR_Word) ((MR_hl_field(1, MaybeBinPrefix_13, (MR_Integer) 0))));
      *LeftGtOrGe_9 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_13, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      *RightGtOrGe_10 = ((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_13, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_prefix_op_4_p_0(
  MR_String Name_6,
  MR_Word * OpPriority_7,
  MR_Word * LeftGtOrGe_8)
{
  MR_bool succeeded;

  succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(Name_6, OpPriority_7, LeftGtOrGe_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String Name_6,
  MR_Word * OpPriority_7,
  MR_Word * LeftGtOrGe_8)
{
  MR_bool succeeded;
  MR_Word OpInfos_9;
  MR_Word MaybePrefix_12;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_6, &OpInfos_9);
  if (succeeded)
  {
    MaybePrefix_12 = ((MR_Word) ((MR_hl_field(0, OpInfos_9, (MR_Integer) 2))));
    succeeded = (MaybePrefix_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *OpPriority_7 = ((MR_Word) ((MR_hl_field(1, MaybePrefix_12, (MR_Integer) 0))));
      *LeftGtOrGe_8 = ((MR_Unsigned) ((MR_hl_field(1, MaybePrefix_12, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_infix_op_5_p_0(
  MR_String Name_7,
  MR_Word * OpPriority_8,
  MR_Word * LeftGtOrGe_9,
  MR_Word * RightGtOrGe_10)
{
  MR_bool succeeded;

  succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(Name_7, OpPriority_8, LeftGtOrGe_9, RightGtOrGe_10);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_String Name_7,
  MR_Word * OpPriority_8,
  MR_Word * LeftGtOrGe_9,
  MR_Word * RightGtOrGe_10)
{
  MR_bool succeeded;
  MR_Word OpInfos_11;
  MR_Word MaybeInfix_12;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_7, &OpInfos_11);
  if (succeeded)
  {
    MaybeInfix_12 = ((MR_Word) ((MR_hl_field(0, OpInfos_11, (MR_Integer) 0))));
    succeeded = (MaybeInfix_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *OpPriority_8 = ((MR_Word) ((MR_hl_field(1, MaybeInfix_12, (MR_Integer) 0))));
      *LeftGtOrGe_9 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_12, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      *RightGtOrGe_10 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_12, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__op_infos_postfix_op_3_p_0(
  MR_Word OpInfos_4,
  MR_Word * OpPriority_5,
  MR_Word * LeftGtOrGe_6)
{
  MR_bool succeeded;
  MR_Word MaybePostfix_10 = ((MR_Word) ((MR_hl_field(0, OpInfos_4, (MR_Integer) 3))));

  succeeded = (MaybePostfix_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *OpPriority_5 = ((MR_Word) ((MR_hl_field(1, MaybePostfix_10, (MR_Integer) 0))));
    *LeftGtOrGe_6 = ((MR_Unsigned) ((MR_hl_field(1, MaybePostfix_10, (MR_Integer) 1))) & (MR_Integer) 1);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__op_infos_binary_prefix_op_4_p_0(
  MR_Word OpInfos_5,
  MR_Word * OpPriority_6,
  MR_Word * LeftGtOrGe_7,
  MR_Word * RightGtOrGe_8)
{
  MR_bool succeeded;
  MR_Word MaybeBinPrefix_10 = ((MR_Word) ((MR_hl_field(0, OpInfos_5, (MR_Integer) 1))));

  succeeded = (MaybeBinPrefix_10 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *OpPriority_6 = ((MR_Word) ((MR_hl_field(1, MaybeBinPrefix_10, (MR_Integer) 0))));
    *LeftGtOrGe_7 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    *RightGtOrGe_8 = ((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_10, (MR_Integer) 1))) & (MR_Integer) 1);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__op_infos_prefix_op_3_p_0(
  MR_Word OpInfos_4,
  MR_Word * OpPriority_5,
  MR_Word * LeftGtOrGe_6)
{
  MR_bool succeeded;
  MR_Word MaybePrefix_9 = ((MR_Word) ((MR_hl_field(0, OpInfos_4, (MR_Integer) 2))));

  succeeded = (MaybePrefix_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *OpPriority_5 = ((MR_Word) ((MR_hl_field(1, MaybePrefix_9, (MR_Integer) 0))));
    *LeftGtOrGe_6 = ((MR_Unsigned) ((MR_hl_field(1, MaybePrefix_9, (MR_Integer) 1))) & (MR_Integer) 1);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__op_infos_infix_op_4_p_0(
  MR_Word OpInfos_5,
  MR_Word * OpPriority_6,
  MR_Word * LeftGtOrGe_7,
  MR_Word * RightGtOrGe_8)
{
  MR_bool succeeded;
  MR_Word MaybeInfix_9 = ((MR_Word) ((MR_hl_field(0, OpInfos_5, (MR_Integer) 0))));

  succeeded = (MaybeInfix_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *OpPriority_6 = ((MR_Word) ((MR_hl_field(1, MaybeInfix_9, (MR_Integer) 0))));
    *LeftGtOrGe_7 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    *RightGtOrGe_8 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_9, (MR_Integer) 1))) & (MR_Integer) 1);
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__ops__mercury_op_table_arg_priority_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 501U)));
}

MR_Word MR_CALL 
mercury__ops__mercury_op_table_comma_priority_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 500U)));
}

MR_Word MR_CALL 
mercury__ops__mercury_op_table_tightest_op_priority_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 1500U)));
}

MR_Word MR_CALL 
mercury__ops__mercury_op_table_loosest_op_priority_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 1U)));
}

MR_Word MR_CALL 
mercury__ops__mercury_op_table_universal_priority_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
}

void MR_CALL 
mercury__ops__mercury_op_table_lookup_operator_term_3_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__1_1 = (MR_Word) (((MR_Box) ((MR_Unsigned) 1380U)));
  *HeadVar__2_2 = (MR_Integer) 1;
  *HeadVar__3_3 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__ops__mercury_op_table_search_op_infos_2_p_0(
  MR_String Name_3,
  MR_Word * OpInfos_4)
{
  MR_bool succeeded;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_3, OpInfos_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__mercury_op_table_is_op_1_p_0(
  MR_String Name_2)
{
  MR_bool succeeded;
  MR_Word Var_3;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_2, &Var_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__mercury_op_table_search_postfix_op_3_p_0(
  MR_String Name_4,
  MR_Word * OpPriority_5,
  MR_Word * LeftGtOrGe_6)
{
  MR_bool succeeded;
  MR_Word OpInfos_7;
  MR_Word MaybePostfix_11;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_4, &OpInfos_7);
  if (succeeded)
  {
    MaybePostfix_11 = ((MR_Word) ((MR_hl_field(0, OpInfos_7, (MR_Integer) 3))));
    succeeded = (MaybePostfix_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *OpPriority_5 = ((MR_Word) ((MR_hl_field(1, MaybePostfix_11, (MR_Integer) 0))));
      *LeftGtOrGe_6 = ((MR_Unsigned) ((MR_hl_field(1, MaybePostfix_11, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__mercury_op_table_search_binary_prefix_op_4_p_0(
  MR_String Name_5,
  MR_Word * OpPriority_6,
  MR_Word * LeftGtOrGe_7,
  MR_Word * RightGtOrGe_8)
{
  MR_bool succeeded;
  MR_Word OpInfos_9;
  MR_Word MaybeBinPrefix_11;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_5, &OpInfos_9);
  if (succeeded)
  {
    MaybeBinPrefix_11 = ((MR_Word) ((MR_hl_field(0, OpInfos_9, (MR_Integer) 1))));
    succeeded = (MaybeBinPrefix_11 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *OpPriority_6 = ((MR_Word) ((MR_hl_field(1, MaybeBinPrefix_11, (MR_Integer) 0))));
      *LeftGtOrGe_7 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_11, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      *RightGtOrGe_8 = ((MR_Unsigned) ((MR_hl_field(1, MaybeBinPrefix_11, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__mercury_op_table_search_prefix_op_3_p_0(
  MR_String Name_4,
  MR_Word * OpPriority_5,
  MR_Word * LeftGtOrGe_6)
{
  MR_bool succeeded;
  MR_Word OpInfos_7;
  MR_Word MaybePrefix_10;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_4, &OpInfos_7);
  if (succeeded)
  {
    MaybePrefix_10 = ((MR_Word) ((MR_hl_field(0, OpInfos_7, (MR_Integer) 2))));
    succeeded = (MaybePrefix_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *OpPriority_5 = ((MR_Word) ((MR_hl_field(1, MaybePrefix_10, (MR_Integer) 0))));
      *LeftGtOrGe_6 = ((MR_Unsigned) ((MR_hl_field(1, MaybePrefix_10, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__mercury_op_table_search_infix_op_4_p_0(
  MR_String Name_5,
  MR_Word * OpPriority_6,
  MR_Word * LeftGtOrGe_7,
  MR_Word * RightGtOrGe_8)
{
  MR_bool succeeded;
  MR_Word OpInfos_9;
  MR_Word MaybeInfix_10;

  succeeded = mercury__ops__mercury_op_table_2_p_0(Name_5, &OpInfos_9);
  if (succeeded)
  {
    MaybeInfix_10 = ((MR_Word) ((MR_hl_field(0, OpInfos_9, (MR_Integer) 0))));
    succeeded = (MaybeInfix_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *OpPriority_6 = ((MR_Word) ((MR_hl_field(1, MaybeInfix_10, (MR_Integer) 0))));
      *LeftGtOrGe_7 = ((((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      *RightGtOrGe_8 = ((MR_Unsigned) ((MR_hl_field(1, MaybeInfix_10, (MR_Integer) 1))) & (MR_Integer) 1);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__mercury_op_table_2_p_0(
  MR_String Op_3,
  MR_Word * OpInfos_4)
{
  MR_bool succeeded;

  {
    MR_Integer case_num_0 = (MR_Integer) -1;

    switch (MR_nth_code_unit(Op_3, 0)) {
      case (MR_Integer) 33:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 0;
            break;
          case (MR_Integer) 46:
            if (MR_offset_streq(2, Op_3, (MR_String) "!."))
              case_num_0 = (MR_Integer) 1;
            break;
          case (MR_Integer) 58:
            if (MR_offset_streq(2, Op_3, (MR_String) "!:"))
              case_num_0 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 38:
        if (MR_offset_streq(1, Op_3, (MR_String) "&"))
          case_num_0 = (MR_Integer) 3;
        break;
      case (MR_Integer) 42:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 4;
            break;
          case (MR_Integer) 42:
            if (MR_offset_streq(2, Op_3, (MR_String) "**"))
              case_num_0 = (MR_Integer) 5;
            break;
        }
        break;
      case (MR_Integer) 43:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 6;
            break;
          case (MR_Integer) 43:
            if (MR_offset_streq(2, Op_3, (MR_String) "++"))
              case_num_0 = (MR_Integer) 7;
            break;
        }
        break;
      case (MR_Integer) 44:
        if (MR_offset_streq(1, Op_3, (MR_String) ","))
          case_num_0 = (MR_Integer) 8;
        break;
      case (MR_Integer) 45:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 9;
            break;
          case (MR_Integer) 45:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 10;
                break;
              case (MR_Integer) 45:
                if (MR_offset_streq(3, Op_3, (MR_String) "--->"))
                  case_num_0 = (MR_Integer) 11;
                break;
              case (MR_Integer) 62:
                if (MR_offset_streq(3, Op_3, (MR_String) "-->"))
                  case_num_0 = (MR_Integer) 12;
                break;
            }
            break;
          case (MR_Integer) 62:
            if (MR_offset_streq(2, Op_3, (MR_String) "->"))
              case_num_0 = (MR_Integer) 13;
            break;
        }
        break;
      case (MR_Integer) 46:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 14;
            break;
          case (MR_Integer) 46:
            if (MR_offset_streq(2, Op_3, (MR_String) ".."))
              case_num_0 = (MR_Integer) 15;
            break;
        }
        break;
      case (MR_Integer) 47:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 16;
            break;
          case (MR_Integer) 47:
            if (MR_offset_streq(2, Op_3, (MR_String) "//"))
              case_num_0 = (MR_Integer) 17;
            break;
          case (MR_Integer) 92:
            if (MR_offset_streq(2, Op_3, (MR_String) "/\\"))
              case_num_0 = (MR_Integer) 18;
            break;
        }
        break;
      case (MR_Integer) 58:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 19;
            break;
          case (MR_Integer) 45:
            if (MR_offset_streq(2, Op_3, (MR_String) ":-"))
              case_num_0 = (MR_Integer) 20;
            break;
          case (MR_Integer) 58:
            if (MR_offset_streq(2, Op_3, (MR_String) "::"))
              case_num_0 = (MR_Integer) 21;
            break;
          case (MR_Integer) 61:
            if (MR_offset_streq(2, Op_3, (MR_String) ":="))
              case_num_0 = (MR_Integer) 22;
            break;
        }
        break;
      case (MR_Integer) 59:
        if (MR_offset_streq(1, Op_3, (MR_String) ";"))
          case_num_0 = (MR_Integer) 23;
        break;
      case (MR_Integer) 60:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 24;
            break;
          case (MR_Integer) 60:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 25;
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(3, Op_3, (MR_String) "<<u"))
                  case_num_0 = (MR_Integer) 26;
                break;
            }
            break;
          case (MR_Integer) 61:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 27;
                break;
              case (MR_Integer) 62:
                if (MR_offset_streq(3, Op_3, (MR_String) "<=>"))
                  case_num_0 = (MR_Integer) 28;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 61:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 29;
            break;
          case (MR_Integer) 46:
            if (MR_offset_streq(2, Op_3, (MR_String) "=.."))
              case_num_0 = (MR_Integer) 30;
            break;
          case (MR_Integer) 58:
            if (MR_offset_streq(2, Op_3, (MR_String) "=:="))
              case_num_0 = (MR_Integer) 31;
            break;
          case (MR_Integer) 60:
            if (MR_offset_streq(2, Op_3, (MR_String) "=<"))
              case_num_0 = (MR_Integer) 32;
            break;
          case (MR_Integer) 61:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 33;
                break;
              case (MR_Integer) 62:
                if (MR_offset_streq(3, Op_3, (MR_String) "==>"))
                  case_num_0 = (MR_Integer) 34;
                break;
            }
            break;
          case (MR_Integer) 62:
            if (MR_offset_streq(2, Op_3, (MR_String) "=>"))
              case_num_0 = (MR_Integer) 35;
            break;
          case (MR_Integer) 92:
            if (MR_offset_streq(2, Op_3, (MR_String) "=\\="))
              case_num_0 = (MR_Integer) 36;
            break;
          case (MR_Integer) 94:
            if (MR_offset_streq(2, Op_3, (MR_String) "=^"))
              case_num_0 = (MR_Integer) 37;
            break;
        }
        break;
      case (MR_Integer) 62:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 38;
            break;
          case (MR_Integer) 61:
            if (MR_offset_streq(2, Op_3, (MR_String) ">="))
              case_num_0 = (MR_Integer) 39;
            break;
          case (MR_Integer) 62:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 40;
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(3, Op_3, (MR_String) ">>u"))
                  case_num_0 = (MR_Integer) 41;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 63:
        if (MR_offset_streq(1, Op_3, (MR_String) "\?-"))
          case_num_0 = (MR_Integer) 42;
        break;
      case (MR_Integer) 64:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 43;
            break;
          case (MR_Integer) 60:
            if (MR_offset_streq(2, Op_3, (MR_String) "\100<"))
              case_num_0 = (MR_Integer) 44;
            break;
          case (MR_Integer) 61:
            if (MR_offset_streq(2, Op_3, (MR_String) "\100=<"))
              case_num_0 = (MR_Integer) 45;
            break;
          case (MR_Integer) 62:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 46;
                break;
              case (MR_Integer) 61:
                if (MR_offset_streq(3, Op_3, (MR_String) "\100>="))
                  case_num_0 = (MR_Integer) 47;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 92:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 48;
            break;
          case (MR_Integer) 43:
            if (MR_offset_streq(2, Op_3, (MR_String) "\\+"))
              case_num_0 = (MR_Integer) 49;
            break;
          case (MR_Integer) 47:
            if (MR_offset_streq(2, Op_3, (MR_String) "\\/"))
              case_num_0 = (MR_Integer) 50;
            break;
          case (MR_Integer) 61:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 51;
                break;
              case (MR_Integer) 61:
                if (MR_offset_streq(3, Op_3, (MR_String) "\\=="))
                  case_num_0 = (MR_Integer) 52;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 94:
        if (MR_offset_streq(1, Op_3, (MR_String) "^"))
          case_num_0 = (MR_Integer) 53;
        break;
      case (MR_Integer) 97:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 108:
            if (MR_offset_streq(2, Op_3, (MR_String) "all"))
              case_num_0 = (MR_Integer) 54;
            break;
          case (MR_Integer) 110:
            if (MR_offset_streq(2, Op_3, (MR_String) "and"))
              case_num_0 = (MR_Integer) 55;
            break;
          case (MR_Integer) 114:
            if (MR_offset_streq(2, Op_3, (MR_String) "arbitrary"))
              case_num_0 = (MR_Integer) 54;
            break;
          case (MR_Integer) 116:
            if (MR_offset_streq(2, Op_3, (MR_String) "atomic"))
              case_num_0 = (MR_Integer) 54;
            break;
        }
        break;
      case (MR_Integer) 99:
        if (MR_offset_strn_eq(1, 4, Op_3, (MR_String) "catch"))
          switch (MR_nth_code_unit(Op_3, 5)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 56;
              break;
            case (MR_Integer) 95:
              if (MR_offset_streq(6, Op_3, (MR_String) "catch_any"))
                case_num_0 = (MR_Integer) 57;
              break;
          }
        break;
      case (MR_Integer) 100:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 105:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 115:
                if (MR_offset_strn_eq(3, 12, Op_3, (MR_String) "disable_warning"))
                  switch (MR_nth_code_unit(Op_3, 15)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 54;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(16, Op_3, (MR_String) "disable_warnings"))
                        case_num_0 = (MR_Integer) 54;
                      break;
                  }
                break;
              case (MR_Integer) 118:
                if (MR_offset_streq(3, Op_3, (MR_String) "div"))
                  case_num_0 = (MR_Integer) 58;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 101:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 108:
            if (MR_offset_streq(2, Op_3, (MR_String) "else"))
              case_num_0 = (MR_Integer) 59;
            break;
          case (MR_Integer) 110:
            if (MR_offset_streq(2, Op_3, (MR_String) "end_module"))
              case_num_0 = (MR_Integer) 60;
            break;
          case (MR_Integer) 118:
            if (MR_offset_streq(2, Op_3, (MR_String) "event"))
              case_num_0 = (MR_Integer) 61;
            break;
        }
        break;
      case (MR_Integer) 102:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 105:
            if (MR_offset_strn_eq(2, 4, Op_3, (MR_String) "finali"))
              switch (MR_nth_code_unit(Op_3, 6)) {
                case (MR_Integer) 115:
                  if (MR_offset_streq(7, Op_3, (MR_String) "finalise"))
                    case_num_0 = (MR_Integer) 62;
                  break;
                case (MR_Integer) 122:
                  if (MR_offset_streq(7, Op_3, (MR_String) "finalize"))
                    case_num_0 = (MR_Integer) 63;
                  break;
              }
            break;
          case (MR_Integer) 111:
            if (MR_offset_streq(2, Op_3, (MR_String) "for"))
              case_num_0 = (MR_Integer) 64;
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(2, Op_3, (MR_String) "func"))
              case_num_0 = (MR_Integer) 65;
            break;
        }
        break;
      case (MR_Integer) 105:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 102:
            if (MR_offset_streq(2, Op_3, (MR_String) "if"))
              case_num_0 = (MR_Integer) 66;
            break;
          case (MR_Integer) 109:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 112:
                switch (MR_nth_code_unit(Op_3, 3)) {
                  case (MR_Integer) 111:
                    if (MR_offset_streq(4, Op_3, (MR_String) "import_module"))
                      case_num_0 = (MR_Integer) 67;
                    break;
                  case (MR_Integer) 117:
                    if (MR_offset_streq(4, Op_3, (MR_String) "impure"))
                      case_num_0 = (MR_Integer) 68;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 110:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 99:
                if (MR_offset_streq(3, Op_3, (MR_String) "include_module"))
                  case_num_0 = (MR_Integer) 69;
                break;
              case (MR_Integer) 105:
                if (MR_offset_strn_eq(3, 5, Op_3, (MR_String) "initiali"))
                  switch (MR_nth_code_unit(Op_3, 8)) {
                    case (MR_Integer) 115:
                      if (MR_offset_streq(9, Op_3, (MR_String) "initialise"))
                        case_num_0 = (MR_Integer) 70;
                      break;
                    case (MR_Integer) 122:
                      if (MR_offset_streq(9, Op_3, (MR_String) "initialize"))
                        case_num_0 = (MR_Integer) 71;
                      break;
                  }
                break;
              case (MR_Integer) 115:
                switch (MR_nth_code_unit(Op_3, 3)) {
                  case (MR_Integer) 116:
                    switch (MR_nth_code_unit(Op_3, 4)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 72;
                        break;
                      case (MR_Integer) 97:
                        if (MR_offset_streq(5, Op_3, (MR_String) "instance"))
                          case_num_0 = (MR_Integer) 73;
                        break;
                    }
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 115:
            if (MR_offset_streq(2, Op_3, (MR_String) "is"))
              case_num_0 = (MR_Integer) 74;
            break;
        }
        break;
      case (MR_Integer) 109:
        if (MR_offset_strn_eq(1, 2, Op_3, (MR_String) "mod"))
          switch (MR_nth_code_unit(Op_3, 3)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 75;
              break;
            case (MR_Integer) 101:
              if (MR_offset_streq(4, Op_3, (MR_String) "mode"))
                case_num_0 = (MR_Integer) 76;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(4, Op_3, (MR_String) "module"))
                case_num_0 = (MR_Integer) 77;
              break;
          }
        break;
      case (MR_Integer) 110:
        if (MR_offset_streq(1, Op_3, (MR_String) "not"))
          case_num_0 = (MR_Integer) 78;
        break;
      case (MR_Integer) 111:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 114:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 79;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(3, Op_3, (MR_String) "or_else"))
                  case_num_0 = (MR_Integer) 80;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 112:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 114:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, Op_3, (MR_String) "pragma"))
                  case_num_0 = (MR_Integer) 81;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(3, Op_3, (MR_String) "pred"))
                  case_num_0 = (MR_Integer) 82;
                break;
              case (MR_Integer) 111:
                if (MR_offset_strn_eq(3, 4, Op_3, (MR_String) "promise"))
                  switch (MR_nth_code_unit(Op_3, 7)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 83;
                      break;
                    case (MR_Integer) 95:
                      switch (MR_nth_code_unit(Op_3, 8)) {
                        case (MR_Integer) 101:
                          switch (MR_nth_code_unit(Op_3, 9)) {
                            case (MR_Integer) 113:
                              if (MR_offset_strn_eq(10, 17, Op_3, (MR_String) "promise_equivalent_solution"))
                                switch (MR_nth_code_unit(Op_3, 27)) {
                                  case (MR_Integer) 95:
                                    if (MR_offset_streq(28, Op_3, (MR_String) "promise_equivalent_solution_sets"))
                                      case_num_0 = (MR_Integer) 54;
                                    break;
                                  case (MR_Integer) 115:
                                    if (MR_offset_streq(28, Op_3, (MR_String) "promise_equivalent_solutions"))
                                      case_num_0 = (MR_Integer) 54;
                                    break;
                                }
                              break;
                            case (MR_Integer) 120:
                              switch (MR_nth_code_unit(Op_3, 10)) {
                                case (MR_Integer) 99:
                                  if (MR_offset_strn_eq(11, 6, Op_3, (MR_String) "promise_exclusive"))
                                    switch (MR_nth_code_unit(Op_3, 17)) {
                                      case (MR_Integer) 0:
                                        case_num_0 = (MR_Integer) 84;
                                        break;
                                      case (MR_Integer) 95:
                                        if (MR_offset_streq(18, Op_3, (MR_String) "promise_exclusive_exhaustive"))
                                          case_num_0 = (MR_Integer) 84;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 104:
                                  if (MR_offset_streq(11, Op_3, (MR_String) "promise_exhaustive"))
                                    case_num_0 = (MR_Integer) 84;
                                  break;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 105:
                          if (MR_offset_streq(9, Op_3, (MR_String) "promise_impure"))
                            case_num_0 = (MR_Integer) 85;
                          break;
                        case (MR_Integer) 112:
                          if (MR_offset_streq(9, Op_3, (MR_String) "promise_pure"))
                            case_num_0 = (MR_Integer) 85;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(9, Op_3, (MR_String) "promise_semipure"))
                            case_num_0 = (MR_Integer) 85;
                          break;
                      }
                      break;
                  }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 114:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 101:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 109:
                if (MR_offset_streq(3, Op_3, (MR_String) "rem"))
                  case_num_0 = (MR_Integer) 86;
                break;
              case (MR_Integer) 113:
                if (MR_offset_strn_eq(3, 5, Op_3, (MR_String) "require_"))
                  switch (MR_nth_code_unit(Op_3, 8)) {
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(Op_3, 9)) {
                        case (MR_Integer) 99:
                          switch (MR_nth_code_unit(Op_3, 10)) {
                            case (MR_Integer) 95:
                              switch (MR_nth_code_unit(Op_3, 11)) {
                                case (MR_Integer) 109:
                                  if (MR_offset_streq(12, Op_3, (MR_String) "require_cc_multi"))
                                    case_num_0 = (MR_Integer) 85;
                                  break;
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(12, Op_3, (MR_String) "require_cc_nondet"))
                                    case_num_0 = (MR_Integer) 85;
                                  break;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 111:
                          if (MR_offset_streq(10, Op_3, (MR_String) "require_complete_switch"))
                            case_num_0 = (MR_Integer) 54;
                          break;
                      }
                      break;
                    case (MR_Integer) 100:
                      if (MR_offset_streq(9, Op_3, (MR_String) "require_det"))
                        case_num_0 = (MR_Integer) 85;
                      break;
                    case (MR_Integer) 101:
                      if (MR_offset_streq(9, Op_3, (MR_String) "require_erroneous"))
                        case_num_0 = (MR_Integer) 85;
                      break;
                    case (MR_Integer) 102:
                      if (MR_offset_streq(9, Op_3, (MR_String) "require_failure"))
                        case_num_0 = (MR_Integer) 85;
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(9, Op_3, (MR_String) "require_multi"))
                        case_num_0 = (MR_Integer) 85;
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_streq(9, Op_3, (MR_String) "require_nondet"))
                        case_num_0 = (MR_Integer) 85;
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(Op_3, 9)) {
                        case (MR_Integer) 101:
                          if (MR_offset_streq(10, Op_3, (MR_String) "require_semidet"))
                            case_num_0 = (MR_Integer) 85;
                          break;
                        case (MR_Integer) 119:
                          if (MR_offset_strn_eq(10, 10, Op_3, (MR_String) "require_switch_arms_"))
                            switch (MR_nth_code_unit(Op_3, 20)) {
                              case (MR_Integer) 99:
                                if (MR_offset_strn_eq(21, 2, Op_3, (MR_String) "require_switch_arms_cc_"))
                                  switch (MR_nth_code_unit(Op_3, 23)) {
                                    case (MR_Integer) 109:
                                      if (MR_offset_streq(24, Op_3, (MR_String) "require_switch_arms_cc_multi"))
                                        case_num_0 = (MR_Integer) 54;
                                      break;
                                    case (MR_Integer) 110:
                                      if (MR_offset_streq(24, Op_3, (MR_String) "require_switch_arms_cc_nondet"))
                                        case_num_0 = (MR_Integer) 54;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 100:
                                if (MR_offset_streq(21, Op_3, (MR_String) "require_switch_arms_det"))
                                  case_num_0 = (MR_Integer) 54;
                                break;
                              case (MR_Integer) 101:
                                if (MR_offset_streq(21, Op_3, (MR_String) "require_switch_arms_erroneous"))
                                  case_num_0 = (MR_Integer) 54;
                                break;
                              case (MR_Integer) 102:
                                if (MR_offset_streq(21, Op_3, (MR_String) "require_switch_arms_failure"))
                                  case_num_0 = (MR_Integer) 54;
                                break;
                              case (MR_Integer) 109:
                                if (MR_offset_streq(21, Op_3, (MR_String) "require_switch_arms_multi"))
                                  case_num_0 = (MR_Integer) 54;
                                break;
                              case (MR_Integer) 110:
                                if (MR_offset_streq(21, Op_3, (MR_String) "require_switch_arms_nondet"))
                                  case_num_0 = (MR_Integer) 54;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(21, Op_3, (MR_String) "require_switch_arms_semidet"))
                                  case_num_0 = (MR_Integer) 54;
                                break;
                            }
                          break;
                      }
                      break;
                  }
                break;
            }
            break;
          case (MR_Integer) 117:
            if (MR_offset_streq(2, Op_3, (MR_String) "rule"))
              case_num_0 = (MR_Integer) 87;
            break;
        }
        break;
      case (MR_Integer) 115:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 101:
            if (MR_offset_streq(2, Op_3, (MR_String) "semipure"))
              case_num_0 = (MR_Integer) 88;
            break;
          case (MR_Integer) 111:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 108:
                if (MR_offset_streq(3, Op_3, (MR_String) "solver"))
                  case_num_0 = (MR_Integer) 89;
                break;
              case (MR_Integer) 109:
                if (MR_offset_streq(3, Op_3, (MR_String) "some"))
                  case_num_0 = (MR_Integer) 54;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 116:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 104:
            if (MR_offset_streq(2, Op_3, (MR_String) "then"))
              case_num_0 = (MR_Integer) 90;
            break;
          case (MR_Integer) 114:
            switch (MR_nth_code_unit(Op_3, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, Op_3, (MR_String) "trace"))
                  case_num_0 = (MR_Integer) 54;
                break;
              case (MR_Integer) 121:
                if (MR_offset_streq(3, Op_3, (MR_String) "try"))
                  case_num_0 = (MR_Integer) 54;
                break;
            }
            break;
          case (MR_Integer) 121:
            if (MR_offset_strn_eq(2, 2, Op_3, (MR_String) "type"))
              switch (MR_nth_code_unit(Op_3, 4)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 91;
                  break;
                case (MR_Integer) 99:
                  if (MR_offset_streq(5, Op_3, (MR_String) "typeclass"))
                    case_num_0 = (MR_Integer) 92;
                  break;
              }
            break;
        }
        break;
      case (MR_Integer) 117:
        if (MR_offset_streq(1, Op_3, (MR_String) "use_module"))
          case_num_0 = (MR_Integer) 93;
        break;
      case (MR_Integer) 119:
        if (MR_offset_strn_eq(1, 2, Op_3, (MR_String) "whe"))
          switch (MR_nth_code_unit(Op_3, 3)) {
            case (MR_Integer) 110:
              if (MR_offset_streq(4, Op_3, (MR_String) "when"))
                case_num_0 = (MR_Integer) 94;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(4, Op_3, (MR_String) "where"))
                case_num_0 = (MR_Integer) 95;
              break;
          }
        break;
      case (MR_Integer) 126:
        switch (MR_nth_code_unit(Op_3, 1)) {
          case (MR_Integer) 0:
            case_num_0 = (MR_Integer) 96;
            break;
          case (MR_Integer) 61:
            if (MR_offset_streq(2, Op_3, (MR_String) "~="))
              case_num_0 = (MR_Integer) 97;
            break;
        }
        break;
    }
    if ((case_num_0 < (MR_Integer) 0))
      succeeded = MR_FALSE;
    else
    {
      // we found a match; look up the results
      ;
      *OpInfos_4 = ((&mercury__ops_vector_common_5[0 + case_num_0]))->mercury__ops__vector_common_type_5_0__vct_5_f_0;
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ops__init_mercury_op_table_0_f_0(void)
{
}

MR_bool MR_CALL 
mercury__ops__priority_ge_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Unsigned L_3 = (MR_Unsigned) (HeadVar__1_1);
  MR_Unsigned R_4 = (MR_Unsigned) (HeadVar__2_2);

  succeeded = (L_3 > R_4);
  if (!(succeeded))
    succeeded = (L_3 == R_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__priority_gt_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Unsigned L_3 = (MR_Unsigned) (HeadVar__1_1);
  MR_Unsigned R_4 = (MR_Unsigned) (HeadVar__2_2);

  succeeded = (L_3 > R_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__priority_le_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Unsigned L_3 = (MR_Unsigned) (HeadVar__1_1);
  MR_Unsigned R_4 = (MR_Unsigned) (HeadVar__2_2);

  succeeded = (L_3 < R_4);
  if (!(succeeded))
    succeeded = (L_3 == R_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ops__priority_lt_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Unsigned L_3 = (MR_Unsigned) (HeadVar__1_1);
  MR_Unsigned R_4 = (MR_Unsigned) (HeadVar__2_2);

  succeeded = (L_3 < R_4);
  return succeeded;
}

MR_Word MR_CALL 
mercury__ops__increment_priority_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Unsigned P_3 = (MR_Unsigned) (HeadVar__1_1);
  MR_Unsigned IncP_4 = (P_3 + (MR_Unsigned) 1U);

  HeadVar__2_2 = (MR_Word) (IncP_4);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__decrement_priority_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Unsigned P_3 = (MR_Unsigned) (HeadVar__1_1);
  MR_Unsigned DecP_4;

  succeeded = (P_3 == (MR_Unsigned) 0U);
  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140ops.decrement_priority\'/1", (MR_String) "decrementing 0");
  else
    DecP_4 = (P_3 - (MR_Unsigned) 1U);
  HeadVar__2_2 = (MR_Word) (DecP_4);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ops__min_priority_for_arg_2_f_0(
  MR_Word OpPriority_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__3_3 = OpPriority_1;
      break;
    case (MR_Integer) 0:
      {
        MR_Unsigned P_6 = (MR_Unsigned) (OpPriority_1);
        MR_Unsigned IncP_7 = (P_6 + (MR_Unsigned) 1U);

        HeadVar__3_3 = (MR_Word) (IncP_7);
      }
      break;
  }
  return HeadVar__3_3;
}

static MR_bool MR_CALL 
mercury__ops____Unify____arg_prio_gt_or_ge_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops____Unify____arg_prio_gt_or_ge_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__ops____Compare____arg_prio_gt_or_ge_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ops____Compare____arg_prio_gt_or_ge_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_binary_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops____Unify____maybe_op_info_binary_prefix_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__ops____Compare____maybe_op_info_binary_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ops____Compare____maybe_op_info_binary_prefix_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_infix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops____Unify____maybe_op_info_infix_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__ops____Compare____maybe_op_info_infix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ops____Compare____maybe_op_info_infix_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_postfix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops____Unify____maybe_op_info_postfix_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__ops____Compare____maybe_op_info_postfix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ops____Compare____maybe_op_info_postfix_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ops____Unify____maybe_op_info_prefix_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops____Unify____maybe_op_info_prefix_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__ops____Compare____maybe_op_info_prefix_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ops____Compare____maybe_op_info_prefix_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops____Unify____mercury_op_table_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ops____Compare____mercury_op_table_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ops____Unify____op_infos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops____Unify____op_infos_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__ops____Compare____op_infos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ops____Compare____op_infos_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops____Unify____priority_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ops____Compare____priority_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ops____Unify____table_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ops____Compare____table_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__5_5;

  succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0(((MR_String) (wrapper_arg_2)), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4, &conv0_HeadVar__5_5);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__4_4;

  succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0(((MR_String) (wrapper_arg_2)), &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__5_5;

  succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0(((MR_String) (wrapper_arg_2)), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4, &conv0_HeadVar__5_5);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__4_4;

  succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0(((MR_String) (wrapper_arg_2)), &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__is_op_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__is_op_2_2_p_0(((MR_String) (wrapper_arg_2)));
  return succeeded;
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_3_3_p_0(((MR_String) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__4_4;

  succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0(&conv2_HeadVar__2_2, &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__universal_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__universal_priority_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__loosest_op_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__loosest_op_priority_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__tightest_op_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__tightest_op_priority_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__comma_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__comma_priority_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0();
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void mercury__ops__init(void)
{
}

void mercury__ops__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_arg_prio_gt_or_ge_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_maybe_op_info_binary_prefix_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_maybe_op_info_infix_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_maybe_op_info_postfix_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_maybe_op_info_prefix_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_mercury_op_table_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_op_infos_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_priority_0);
	MR_register_type_ctor_info(&mercury__ops__ops__type_ctor_info_table_0);
}

void mercury__ops__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ops__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ops.
