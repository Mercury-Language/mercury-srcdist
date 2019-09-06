/*
** Automatically generated from `ops.m'
** by the Mercury compiler,
** version rotd-2019-09-06
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
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0;

static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1;

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2];

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2];

static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2];

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2];

static const MR_DuArgLocn mercury__ops__ops__field_locns_class_0_0[2];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_0;

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1];

static const MR_DuArgLocn mercury__ops__ops__field_locns_class_0_1[1];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_1;

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2];

static const MR_DuArgLocn mercury__ops__ops__field_locns_class_0_2[2];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_2;

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1];

static const MR_DuArgLocn mercury__ops__ops__field_locns_class_0_3[1];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_3;

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1];

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_class_0[4];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4];

static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4];

static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0;

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1];

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1];

static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1];

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2];

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_op_info_0_0;

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1];

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1];

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1];

static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1];

static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1];

static const MR_TypeClassMethod mercury__ops__ops__type_class_id_method_ids_op_table_1[9];

static const MR_TypeClassId mercury__ops__ops__type_class_id_op_table_1;

static MR_bool MR_CALL 
mercury__ops__op_table_3_p_0(
  MR_String Op_4,
  MR_Word * Info_5,
  MR_Word * OtherInfos_6);

static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
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
mercury__ops____Unify____op_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
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
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box mercury__ops_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__ops_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__ops_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__ops_scalar_common_4[5][1];

static /* final */ const MR_Box mercury__ops_scalar_common_5[48][2];


/* sealed */ struct mercury__ops__vector_common_type_6_0_s {
  const MR_Word mercury__ops__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mercury__ops__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mercury__ops__vector_common_type_6_0_s mercury__ops_vector_common_6[98];



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

static /* final */ const MR_Box mercury__ops_scalar_common_4[5][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row 1 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    (MR_Box) (((MR_Unsigned) 0U << 1))
  },
  /* row 4 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box mercury__ops_scalar_common_5[48][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1025))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 400))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 200))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 500))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 500))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_5[4])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 500))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1000))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 200))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_5[8])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1179))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 1200))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1050))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 550))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 120))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 1200))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_5[16])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 1175))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 650))
  },
  /* row 20 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1100))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 700))
  },
  /* row 22 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 920))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 90))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 99))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 100))
  },
  /* row 26 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_5[25])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &mercury__ops_scalar_common_4[0]))),
    ((MR_Box) ((MR_Integer) 950))
  },
  /* row 28 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 720))
  },
  /* row 29 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1180))
  },
  /* row 30 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1190))
  },
  /* row 31 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 1170))
  },
  /* row 32 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 500))
  },
  /* row 33 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 701))
  },
  /* row 34 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 400))
  },
  /* row 35 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 740))
  },
  /* row 36 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 1150))
  },
  /* row 37 */
  {
    ((MR_Box) (&mercury__ops_scalar_common_4[3])),
    ((MR_Box) ((MR_Integer) 900))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 40))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[4]))),
    ((MR_Box) ((MR_Integer) 900))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 1199))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 800))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 1160))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[4]))),
    ((MR_Box) ((MR_Integer) 800))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[4]))),
    ((MR_Box) ((MR_Integer) 950))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 950))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[4]))),
    ((MR_Box) ((MR_Integer) 1181))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_4[2]))),
    ((MR_Box) ((MR_Integer) 1180))
  },
};


static /* final */ const struct mercury__ops__vector_common_type_6_0_s mercury__ops_vector_common_6[98] = {
  /* row 0 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[38]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[38]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[38]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[0]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 4 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[1]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 5 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[2]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 6 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[3]),
    (MR_Word) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[5]))
  },
  /* row 7 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[6]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 8 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[7]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 9 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[3]),
    (MR_Word) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[9]))
  },
  /* row 10 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[3]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 11 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[10]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 12 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[11]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 13 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[12]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 14 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[13]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 15 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[14]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 16 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[1]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 17 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[1]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 18 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[3]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 19 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[15]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 20 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[11]),
    (MR_Word) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[17]))
  },
  /* row 21 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[18]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 22 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[19]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 23 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[20]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 24 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 25 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[1]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 26 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[22]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 27 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[22]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 28 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 29 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 30 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 31 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 32 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 33 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[18]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 34 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[22]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 35 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 36 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[19]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 37 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 38 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 39 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[1]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 40 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[16]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 41 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[23]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 42 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 43 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 44 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 45 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 46 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[8]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 47 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[39]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 48 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[3]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 49 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 50 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 51 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[24]),
    (MR_Word) (MR_mkword(MR_mktag(1), &mercury__ops_scalar_common_5[26]))
  },
  /* row 52 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[27]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 53 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[28]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 54 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[27]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 55 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[29]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 56 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[30]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 57 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[1]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 58 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[31]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 59 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 60 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[25]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 61 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 62 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 63 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[32]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 64 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[41]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 65 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[42]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 66 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 67 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[43]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 68 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 69 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 70 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 71 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 72 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 73 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[33]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 74 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[34]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 75 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 76 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 77 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[39]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 78 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[35]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 79 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[20]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 80 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 81 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[41]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 82 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 83 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[44]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 84 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[45]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 85 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[34]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 86 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 87 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[43]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 88 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[46]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 89 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[27]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 90 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[36]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 91 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[47]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 92 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 93 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[40]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 94 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[37]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 95 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[18]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 96 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[39]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
  /* row 97 */
  {
    (MR_Word) (&mercury__ops_scalar_common_5[21]),
    (MR_Word) ((MR_Unsigned) 0U)
  },
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
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_0 = {
  (MR_String) "x",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_assoc_0_1 = {
  (MR_String) "y",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_assoc_0[2] = {
  &mercury__ops__ops__enum_functor_desc_assoc_0_0,
  &mercury__ops__ops__enum_functor_desc_assoc_0_1
};

static const MR_Integer mercury__ops__ops__functor_number_map_assoc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_assoc_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__ops____Unify____assoc_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____assoc_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "assoc",
  {     mercury__ops__ops__enum_name_ordered_assoc_0 },
  {     mercury__ops__ops__enum_value_ordered_assoc_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__ops__ops__functor_number_map_assoc_0
};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_assoc_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_assoc_0)
};

static const MR_DuArgLocn mercury__ops__ops__field_locns_class_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_0 = {
  (MR_String) "infix",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__ops__ops__field_types_class_0_0,
  NULL,
  mercury__ops__ops__field_locns_class_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_assoc_0)
};

static const MR_DuArgLocn mercury__ops__ops__field_locns_class_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_1 = {
  (MR_String) "prefix",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ops__ops__field_types_class_0_1,
  NULL,
  mercury__ops__ops__field_locns_class_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_assoc_0),
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_assoc_0)
};

static const MR_DuArgLocn mercury__ops__ops__field_locns_class_0_2[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_2 = {
  (MR_String) "binary_prefix",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__ops__ops__field_types_class_0_2,
  NULL,
  mercury__ops__ops__field_locns_class_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_class_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_assoc_0)
};

static const MR_DuArgLocn mercury__ops__ops__field_locns_class_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_class_0_3 = {
  (MR_String) "postfix",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mercury__ops__ops__field_types_class_0_3,
  NULL,
  mercury__ops__ops__field_locns_class_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_0
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_1[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_1
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_2[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_2
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_class_0_3[1] = {
  &mercury__ops__ops__du_functor_desc_class_0_3
};

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_class_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_class_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_class_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_class_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_class_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_class_0[4] = {
  &mercury__ops__ops__du_functor_desc_class_0_2,
  &mercury__ops__ops__du_functor_desc_class_0_0,
  &mercury__ops__ops__du_functor_desc_class_0_3,
  &mercury__ops__ops__du_functor_desc_class_0_1
};

static const MR_Integer mercury__ops__ops__functor_number_map_class_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_class_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____class_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____class_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "class",
  {     mercury__ops__ops__du_name_ordered_class_0 },
  {     mercury__ops__ops__du_ptag_ordered_class_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  mercury__ops__ops__functor_number_map_class_0
};

static const MR_EnumFunctorDesc mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0 = {
  (MR_String) "mercury_op_table",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_value_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

static const MR_EnumFunctorDescPtr mercury__ops__ops__enum_name_ordered_mercury_op_table_0[1] = {
  &mercury__ops__ops__enum_functor_desc_mercury_op_table_0_0
};

static const MR_Integer mercury__ops__ops__functor_number_map_mercury_op_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_mercury_op_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__ops____Unify____mercury_op_table_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____mercury_op_table_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "mercury_op_table",
  {     mercury__ops__ops__enum_name_ordered_mercury_op_table_0 },
  {     mercury__ops__ops__enum_value_ordered_mercury_op_table_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__ops__ops__functor_number_map_mercury_op_table_0
};

static const MR_PseudoTypeInfo mercury__ops__ops__field_types_op_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_class_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__ops__ops__du_functor_desc_op_info_0_0 = {
  (MR_String) "op_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__ops__ops__field_types_op_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_stag_ordered_op_info_0_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

static const MR_DuPtagLayout mercury__ops__ops__du_ptag_ordered_op_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ops__ops__du_stag_ordered_op_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__ops__ops__du_name_ordered_op_info_0[1] = {
  &mercury__ops__ops__du_functor_desc_op_info_0_0
};

static const MR_Integer mercury__ops__ops__functor_number_map_op_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_op_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ops____Unify____op_info_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____op_info_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "op_info",
  {     mercury__ops__ops__du_name_ordered_op_info_0 },
  {     mercury__ops__ops__du_ptag_ordered_op_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__ops__ops__functor_number_map_op_info_0
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_priority_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__ops____Unify____priority_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____priority_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "priority",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mercury__ops__ops__type_ctor_info_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__ops____Unify____table_0_0_10001)),
  ((MR_Box) (mercury__ops____Compare____table_0_0_10001)),
  (MR_String) "ops",
  (MR_String) "table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_BaseTypeclassInfo base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__[14] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 9)),
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

static const MR_ConstString mercury__ops__ops__type_class_id_var_names_op_table_1[1] = {
  (MR_String) "Table"
};

static const MR_TypeClassMethod mercury__ops__ops__type_class_id_method_ids_op_table_1[9] = {
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
    (MR_String) "lookup_op",
    (MR_Integer) 2,
    MR_PREDICATE
  },
  {
    (MR_String) "lookup_op_infos",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "lookup_operator_term",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "max_priority",
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
  (MR_Integer) 9,
  mercury__ops__ops__type_class_id_var_names_op_table_1,
  mercury__ops__ops__type_class_id_method_ids_op_table_1
};

const MR_TypeClassDeclStruct mercury__ops__ops__type_class_decl_op_table_1 = {
  &mercury__ops__ops__type_class_id_op_table_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

MR_Integer MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0(void)
{
  {
    MR_Integer HeadVar__2_2;

    HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_0();
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_97_114_103_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    return (MR_Integer) 999;
  }
}

MR_Integer MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0(void)
{
  {
    MR_Integer HeadVar__2_2;

    HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_0();
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0(
  MR_Integer * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_52_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_52_95_95_91_49_93_95_48_4_p_0(
  MR_Integer * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    *HeadVar__2_2 = (MR_Integer) 120;
    *HeadVar__3_3 = (MR_Integer) 1;
    *HeadVar__4_4 = (MR_Integer) 0;
    return MR_TRUE;
  }
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0(
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_105_110_102_111_115_95_52_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_105_110_102_111_115_95_52_95_95_91_49_93_95_48_4_p_0(
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__op_table_3_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0(
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_50_95_95_91_49_93_95_48_2_p_0(HeadVar__2_2);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_111_112_95_50_95_95_91_49_93_95_48_2_p_0(
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;

    succeeded = mercury__ops__op_table_3_p_0(HeadVar__2_2, &Var_5, &Var_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0(
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_111_115_116_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_111_115_116_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_p_0(
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_binary_prefix_op_5_5_p_0(
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_p_0(
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0(
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_114_101_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_112_114_101_102_105_120_95_111_112_95_52_95_95_91_49_93_95_48_4_p_0(
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_infix_op_5_5_p_0(
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_105_110_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_108_111_111_107_117_112_95_105_110_102_105_120_95_111_112_95_53_95_95_91_49_93_95_48_5_p_0(
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5);
    return succeeded;
  }
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
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
mercury__ops____Compare____priority_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__ops____Compare____op_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__ops____Compare____class_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
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
mercury__ops____Unify____op_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__ops____Unify____class_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
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
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
mercury__ops____Compare____class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_54 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_55 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_54 == CastY_55);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word SubResult1_6;
                  MR_Integer Var_72 = (MR_Integer) (Var_65);
                  MR_Integer Var_73 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_72 < Var_73);
                  if (succeeded)
                    SubResult1_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_72 == Var_73);
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
                    MR_Integer Var_74 = (MR_Integer) (Var_64);
                    MR_Integer Var_75 = (MR_Integer) (ArgY2_8);

                    succeeded = (Var_74 < Var_75);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_74 == Var_75);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer Var_78 = (MR_Integer) (Var_67);
                  MR_Integer Var_79 = (MR_Integer) (ArgY1_23);

                  succeeded = (Var_78 < Var_79);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_78 == Var_79);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word Var_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                  MR_Word ArgY2_40 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Word SubResult1_38;
                  MR_Integer Var_68 = (MR_Integer) (Var_63);
                  MR_Integer Var_69 = (MR_Integer) (ArgY1_37);

                  succeeded = (Var_68 < Var_69);
                  if (succeeded)
                    SubResult1_38 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_68 == Var_69);
                    if (succeeded)
                      SubResult1_38 = (MR_Integer) 0;
                    else
                      SubResult1_38 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult1_38 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_38;
                  else
                  {
                    MR_Integer Var_70 = (MR_Integer) (Var_62);
                    MR_Integer Var_71 = (MR_Integer) (ArgY2_40);

                    succeeded = (Var_70 < Var_71);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_70 == Var_71);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_66 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer Var_76 = (MR_Integer) (Var_66);
                  MR_Integer Var_77 = (MR_Integer) (ArgY1_53);

                  succeeded = (Var_76 < Var_77);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_76 == Var_77);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__ops____Unify____class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_3 == ArgY1_4);
              if (succeeded)
                succeeded = (ArgX2_5 == ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY2_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_9 == ArgY1_10);
              if (succeeded)
                succeeded = (ArgX2_11 == ArgY2_12);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_13 == ArgY1_14);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__ops____Compare____assoc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__ops__arg_priority_1_f_0(
  MR_Word TypeClassInfo_for_op_table_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 13))));
    MR_Box conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_op_table_3)), HeadVar__1_1);
    HeadVar__2_2 = ((MR_Integer) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__ops__max_priority_1_f_0(
  MR_Word TypeClassInfo_for_op_table_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_op_table_3)), HeadVar__1_1);
    HeadVar__2_2 = ((MR_Integer) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_operator_term_4_p_0(
  MR_Word TypeClassInfo_for_op_table_5,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 11))));
    MR_Box conv3_HeadVar__2_2;
    MR_Box conv2_HeadVar__3_3;
    MR_Box conv1_HeadVar__4_4;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_5)), HeadVar__1_1, &conv3_HeadVar__2_2, &conv2_HeadVar__3_3, &conv1_HeadVar__4_4);
    if (succeeded)
    {
      *HeadVar__2_2 = ((MR_Integer) (conv3_HeadVar__2_2));
      *HeadVar__3_3 = ((MR_Word) (conv2_HeadVar__3_3));
      *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_op_infos_4_p_0(
  MR_Word TypeClassInfo_for_op_table_5,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 10))));
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
}

MR_bool MR_CALL 
mercury__ops__lookup_op_2_p_0(
  MR_Word TypeClassInfo_for_op_table_3,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_3, (MR_Integer) 0)), (MR_Integer) 9))));

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_3)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_postfix_op_4_p_0(
  MR_Word TypeClassInfo_for_op_table_5,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 8))));
    MR_Box conv2_HeadVar__3_3;
    MR_Box conv1_HeadVar__4_4;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_5)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Integer) (conv2_HeadVar__3_3));
      *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_binary_prefix_op_5_p_0(
  MR_Word TypeClassInfo_for_op_table_6,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 7))));
    MR_Box conv3_HeadVar__3_3;
    MR_Box conv2_HeadVar__4_4;
    MR_Box conv1_HeadVar__5_5;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_6)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Integer) (conv3_HeadVar__3_3));
      *HeadVar__4_4 = ((MR_Word) (conv2_HeadVar__4_4));
      *HeadVar__5_5 = ((MR_Word) (conv1_HeadVar__5_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_prefix_op_4_p_0(
  MR_Word TypeClassInfo_for_op_table_5,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_5, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv2_HeadVar__3_3;
    MR_Box conv1_HeadVar__4_4;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_5)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv2_HeadVar__3_3, &conv1_HeadVar__4_4);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Integer) (conv2_HeadVar__3_3));
      *HeadVar__4_4 = ((MR_Word) (conv1_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_infix_op_5_p_0(
  MR_Word TypeClassInfo_for_op_table_6,
  MR_Box HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer * HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_op_table_6, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv3_HeadVar__3_3;
    MR_Box conv2_HeadVar__4_4;
    MR_Box conv1_HeadVar__5_5;

    succeeded = func_0(((MR_Box) (TypeClassInfo_for_op_table_6)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), &conv3_HeadVar__3_3, &conv2_HeadVar__4_4, &conv1_HeadVar__5_5);
    if (succeeded)
    {
      *HeadVar__3_3 = ((MR_Integer) (conv3_HeadVar__3_3));
      *HeadVar__4_4 = ((MR_Word) (conv2_HeadVar__4_4));
      *HeadVar__5_5 = ((MR_Word) (conv1_HeadVar__5_5));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__ops__mercury_arg_priority_1_f_0(void)
{
  {
    MR_Integer HeadVar__2_2;

    HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_97_114_103_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    return (MR_Integer) 999;
  }
}

void MR_CALL 
mercury__ops__lookup_mercury_operator_term_4_p_0(
  MR_Integer * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_101_114_97_116_111_114_95_116_101_114_109_95_95_91_49_93_95_48_4_p_0(
  MR_Integer * HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    *HeadVar__2_2 = (MR_Integer) 120;
    *HeadVar__3_3 = (MR_Integer) 1;
    *HeadVar__4_4 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_op_infos_4_p_0(
  MR_String Name_6,
  MR_Word * Info_7,
  MR_Word * OtherInfos_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_4_p_0(Name_6, Info_7, OtherInfos_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_105_110_102_111_115_95_95_91_49_93_95_48_4_p_0(
  MR_String Name_6,
  MR_Word * Info_7,
  MR_Word * OtherInfos_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__op_table_3_p_0(Name_6, Info_7, OtherInfos_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_op_2_p_0(
  MR_String Name_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_p_0(Name_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_111_112_95_95_91_49_93_95_48_2_p_0(
  MR_String Name_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_Word Var_6;

    succeeded = mercury__ops__op_table_3_p_0(Name_4, &Var_5, &Var_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_postfix_op_4_p_0(
  MR_String Name_6,
  MR_Integer * Priority_7,
  MR_Word * LeftAssoc_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(Name_6, Priority_7, LeftAssoc_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_111_115_116_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String Name_6,
  MR_Integer * Priority_7,
  MR_Word * LeftAssoc_8)
{
  {
    MR_bool succeeded;
    MR_Word Info_9;
    MR_Word MaybeOtherInfo_10;
    MR_Word LeftAssocPrime_11;
    MR_Integer PriorityPrime_12;
    MR_Word Var_13;

    succeeded = mercury__ops__op_table_3_p_0(Name_6, &Info_9, &MaybeOtherInfo_10);
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
      PriorityPrime_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3);
      if (succeeded)
      {
        LeftAssocPrime_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_13, (MR_Integer) 0))) & (MR_Integer) 1);
        *LeftAssoc_8 = LeftAssocPrime_11;
        *Priority_7 = PriorityPrime_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word Var_16;

        succeeded = (MaybeOtherInfo_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherInfo_10, (MR_Integer) 0))));
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherInfo_10, (MR_Integer) 1))));
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
          *Priority_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3);
          if (succeeded)
          {
            *LeftAssoc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_binary_prefix_op_5_p_0(
  MR_String Name_7,
  MR_Integer * Priority_8,
  MR_Word * LeftAssoc_9,
  MR_Word * RightAssoc_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(Name_7, Priority_8, LeftAssoc_9, RightAssoc_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_98_105_110_97_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_String Name_7,
  MR_Integer * Priority_8,
  MR_Word * LeftAssoc_9,
  MR_Word * RightAssoc_10)
{
  {
    MR_bool succeeded;
    MR_Word Info_11;
    MR_Word MaybeOtherInfo_12;
    MR_Integer PriorityPrime_14;
    MR_Word LeftAssocPrime_15;
    MR_Word RightAssocPrime_16;
    MR_Word Class_13;

    succeeded = mercury__ops__op_table_3_p_0(Name_7, &Info_11, &MaybeOtherInfo_12);
    if (succeeded)
    {
      Class_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
      PriorityPrime_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Class_13)) == (MR_Integer) 2);
      if (succeeded)
      {
        LeftAssocPrime_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Class_13, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        RightAssocPrime_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Class_13, (MR_Integer) 0))) & (MR_Integer) 1);
        *LeftAssoc_9 = LeftAssocPrime_15;
        *RightAssoc_10 = RightAssocPrime_16;
        *Priority_8 = PriorityPrime_14;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Class_19;

        succeeded = (MaybeOtherInfo_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherInfo_12, (MR_Integer) 0))));
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherInfo_12, (MR_Integer) 1))));
          Class_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
          *Priority_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
          succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Class_19)) == (MR_Integer) 2);
            if (succeeded)
            {
              *LeftAssoc_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Class_19, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              *RightAssoc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Class_19, (MR_Integer) 0))) & (MR_Integer) 1);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_prefix_op_4_p_0(
  MR_String Name_6,
  MR_Integer * Priority_7,
  MR_Word * LeftAssoc_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(Name_6, Priority_7, LeftAssoc_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_112_114_101_102_105_120_95_111_112_95_95_91_49_93_95_48_4_p_0(
  MR_String Name_6,
  MR_Integer * Priority_7,
  MR_Word * LeftAssoc_8)
{
  {
    MR_bool succeeded;
    MR_Word Info_9;
    MR_Word MaybeOtherInfo_10;
    MR_Word LeftAssocPrime_11;
    MR_Integer PriorityPrime_12;
    MR_Word Var_13;

    succeeded = mercury__ops__op_table_3_p_0(Name_6, &Info_9, &MaybeOtherInfo_10);
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 0))));
      PriorityPrime_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_9, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        LeftAssocPrime_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))) & (MR_Integer) 1);
        *LeftAssoc_8 = LeftAssocPrime_11;
        *Priority_7 = PriorityPrime_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_14;
        MR_Word Var_15;
        MR_Word Var_16;

        succeeded = (MaybeOtherInfo_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherInfo_10, (MR_Integer) 0))));
          Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherInfo_10, (MR_Integer) 1))));
          Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
          *Priority_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1);
          if (succeeded)
          {
            *LeftAssoc_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__lookup_mercury_infix_op_5_p_0(
  MR_String Name_7,
  MR_Integer * Priority_8,
  MR_Word * LeftAssoc_9,
  MR_Word * RightAssoc_10)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(Name_7, Priority_8, LeftAssoc_9, RightAssoc_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_111_111_107_117_112_95_109_101_114_99_117_114_121_95_105_110_102_105_120_95_111_112_95_95_91_49_93_95_48_5_p_0(
  MR_String Name_7,
  MR_Integer * Priority_8,
  MR_Word * LeftAssoc_9,
  MR_Word * RightAssoc_10)
{
  {
    MR_bool succeeded;
    MR_Word Info_11;
    MR_Word MaybeOtherInfo_12;
    MR_Integer PriorityPrime_14;
    MR_Word LeftAssocPrime_15;
    MR_Word RightAssocPrime_16;
    MR_Word Class_13;

    succeeded = mercury__ops__op_table_3_p_0(Name_7, &Info_11, &MaybeOtherInfo_12);
    if (succeeded)
    {
      Class_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0))));
      PriorityPrime_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Class_13)) == (MR_Integer) 0);
      if (succeeded)
      {
        LeftAssocPrime_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Class_13, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        RightAssocPrime_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Class_13, (MR_Integer) 0))) & (MR_Integer) 1);
        *LeftAssoc_9 = LeftAssocPrime_15;
        *RightAssoc_10 = RightAssocPrime_16;
        *Priority_8 = PriorityPrime_14;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Var_17;
        MR_Word Var_18;
        MR_Word Class_19;

        succeeded = (MaybeOtherInfo_12 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherInfo_12, (MR_Integer) 0))));
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOtherInfo_12, (MR_Integer) 1))));
          Class_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 0))));
          *Priority_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
          succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) Class_19)) == (MR_Integer) 0);
            if (succeeded)
            {
              *LeftAssoc_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Class_19, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
              *RightAssoc_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Class_19, (MR_Integer) 0))) & (MR_Integer) 1);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__ops__op_table_3_p_0(
  MR_String Op_4,
  MR_Word * Info_5,
  MR_Word * OtherInfos_6)
{
  {
    MR_bool succeeded;

    {
      MR_Integer case_num_0 = (MR_Integer) -1;

      switch (MR_nth_code_unit(Op_4, 0)) {
        case (MR_Integer) 33:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 46:
              if (MR_offset_streq(2, Op_4, (MR_String) "!."))
                case_num_0 = (MR_Integer) 1;
              break;
            case (MR_Integer) 58:
              if (MR_offset_streq(2, Op_4, (MR_String) "!:"))
                case_num_0 = (MR_Integer) 2;
              break;
          }
          break;
        case (MR_Integer) 38:
          if (MR_offset_streq(1, Op_4, (MR_String) "&"))
            case_num_0 = (MR_Integer) 3;
          break;
        case (MR_Integer) 42:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 4;
              break;
            case (MR_Integer) 42:
              if (MR_offset_streq(2, Op_4, (MR_String) "**"))
                case_num_0 = (MR_Integer) 5;
              break;
          }
          break;
        case (MR_Integer) 43:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 6;
              break;
            case (MR_Integer) 43:
              if (MR_offset_streq(2, Op_4, (MR_String) "++"))
                case_num_0 = (MR_Integer) 7;
              break;
          }
          break;
        case (MR_Integer) 44:
          if (MR_offset_streq(1, Op_4, (MR_String) ","))
            case_num_0 = (MR_Integer) 8;
          break;
        case (MR_Integer) 45:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 9;
              break;
            case (MR_Integer) 45:
              switch (MR_nth_code_unit(Op_4, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 10;
                  break;
                case (MR_Integer) 45:
                  if (MR_offset_streq(3, Op_4, (MR_String) "--->"))
                    case_num_0 = (MR_Integer) 11;
                  break;
                case (MR_Integer) 62:
                  if (MR_offset_streq(3, Op_4, (MR_String) "-->"))
                    case_num_0 = (MR_Integer) 12;
                  break;
              }
              break;
            case (MR_Integer) 62:
              if (MR_offset_streq(2, Op_4, (MR_String) "->"))
                case_num_0 = (MR_Integer) 13;
              break;
          }
          break;
        case (MR_Integer) 46:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 14;
              break;
            case (MR_Integer) 46:
              if (MR_offset_streq(2, Op_4, (MR_String) ".."))
                case_num_0 = (MR_Integer) 15;
              break;
          }
          break;
        case (MR_Integer) 47:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 16;
              break;
            case (MR_Integer) 47:
              if (MR_offset_streq(2, Op_4, (MR_String) "//"))
                case_num_0 = (MR_Integer) 17;
              break;
            case (MR_Integer) 92:
              if (MR_offset_streq(2, Op_4, (MR_String) "/\\"))
                case_num_0 = (MR_Integer) 18;
              break;
          }
          break;
        case (MR_Integer) 58:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 19;
              break;
            case (MR_Integer) 45:
              if (MR_offset_streq(2, Op_4, (MR_String) ":-"))
                case_num_0 = (MR_Integer) 20;
              break;
            case (MR_Integer) 58:
              if (MR_offset_streq(2, Op_4, (MR_String) "::"))
                case_num_0 = (MR_Integer) 21;
              break;
            case (MR_Integer) 61:
              if (MR_offset_streq(2, Op_4, (MR_String) ":="))
                case_num_0 = (MR_Integer) 22;
              break;
          }
          break;
        case (MR_Integer) 59:
          if (MR_offset_streq(1, Op_4, (MR_String) ";"))
            case_num_0 = (MR_Integer) 23;
          break;
        case (MR_Integer) 60:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 24;
              break;
            case (MR_Integer) 60:
              if (MR_offset_streq(2, Op_4, (MR_String) "<<"))
                case_num_0 = (MR_Integer) 25;
              break;
            case (MR_Integer) 61:
              switch (MR_nth_code_unit(Op_4, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 26;
                  break;
                case (MR_Integer) 62:
                  if (MR_offset_streq(3, Op_4, (MR_String) "<=>"))
                    case_num_0 = (MR_Integer) 27;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 61:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 28;
              break;
            case (MR_Integer) 46:
              if (MR_offset_streq(2, Op_4, (MR_String) "=.."))
                case_num_0 = (MR_Integer) 29;
              break;
            case (MR_Integer) 58:
              if (MR_offset_streq(2, Op_4, (MR_String) "=:="))
                case_num_0 = (MR_Integer) 30;
              break;
            case (MR_Integer) 60:
              if (MR_offset_streq(2, Op_4, (MR_String) "=<"))
                case_num_0 = (MR_Integer) 31;
              break;
            case (MR_Integer) 61:
              switch (MR_nth_code_unit(Op_4, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 32;
                  break;
                case (MR_Integer) 62:
                  if (MR_offset_streq(3, Op_4, (MR_String) "==>"))
                    case_num_0 = (MR_Integer) 33;
                  break;
              }
              break;
            case (MR_Integer) 62:
              if (MR_offset_streq(2, Op_4, (MR_String) "=>"))
                case_num_0 = (MR_Integer) 34;
              break;
            case (MR_Integer) 92:
              if (MR_offset_streq(2, Op_4, (MR_String) "=\\="))
                case_num_0 = (MR_Integer) 35;
              break;
            case (MR_Integer) 94:
              if (MR_offset_streq(2, Op_4, (MR_String) "=^"))
                case_num_0 = (MR_Integer) 36;
              break;
          }
          break;
        case (MR_Integer) 62:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 37;
              break;
            case (MR_Integer) 61:
              if (MR_offset_streq(2, Op_4, (MR_String) ">="))
                case_num_0 = (MR_Integer) 38;
              break;
            case (MR_Integer) 62:
              if (MR_offset_streq(2, Op_4, (MR_String) ">>"))
                case_num_0 = (MR_Integer) 39;
              break;
          }
          break;
        case (MR_Integer) 63:
          if (MR_offset_streq(1, Op_4, (MR_String) "\?-"))
            case_num_0 = (MR_Integer) 40;
          break;
        case (MR_Integer) 64:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 41;
              break;
            case (MR_Integer) 60:
              if (MR_offset_streq(2, Op_4, (MR_String) "\100<"))
                case_num_0 = (MR_Integer) 42;
              break;
            case (MR_Integer) 61:
              if (MR_offset_streq(2, Op_4, (MR_String) "\100=<"))
                case_num_0 = (MR_Integer) 43;
              break;
            case (MR_Integer) 62:
              switch (MR_nth_code_unit(Op_4, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 44;
                  break;
                case (MR_Integer) 61:
                  if (MR_offset_streq(3, Op_4, (MR_String) "\100>="))
                    case_num_0 = (MR_Integer) 45;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 92:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 46;
              break;
            case (MR_Integer) 43:
              if (MR_offset_streq(2, Op_4, (MR_String) "\\+"))
                case_num_0 = (MR_Integer) 47;
              break;
            case (MR_Integer) 47:
              if (MR_offset_streq(2, Op_4, (MR_String) "\\/"))
                case_num_0 = (MR_Integer) 48;
              break;
            case (MR_Integer) 61:
              switch (MR_nth_code_unit(Op_4, 2)) {
                case (MR_Integer) 0:
                  case_num_0 = (MR_Integer) 49;
                  break;
                case (MR_Integer) 61:
                  if (MR_offset_streq(3, Op_4, (MR_String) "\\=="))
                    case_num_0 = (MR_Integer) 50;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 94:
          if (MR_offset_streq(1, Op_4, (MR_String) "^"))
            case_num_0 = (MR_Integer) 51;
          break;
        case (MR_Integer) 97:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, Op_4, (MR_String) "all"))
                case_num_0 = (MR_Integer) 52;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, Op_4, (MR_String) "and"))
                case_num_0 = (MR_Integer) 53;
              break;
            case (MR_Integer) 114:
              if (MR_offset_streq(2, Op_4, (MR_String) "arbitrary"))
                case_num_0 = (MR_Integer) 54;
              break;
            case (MR_Integer) 116:
              if (MR_offset_streq(2, Op_4, (MR_String) "atomic"))
                case_num_0 = (MR_Integer) 54;
              break;
          }
          break;
        case (MR_Integer) 99:
          if (((((((((MR_nth_code_unit(Op_4, 1)) == (MR_Integer) 97)) && (((MR_nth_code_unit(Op_4, 2)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Op_4, 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Op_4, 4)) == (MR_Integer) 104))))
            switch (MR_nth_code_unit(Op_4, 5)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 55;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(6, Op_4, (MR_String) "catch_any"))
                  case_num_0 = (MR_Integer) 56;
                break;
            }
          break;
        case (MR_Integer) 100:
          if (((MR_nth_code_unit(Op_4, 1)) == (MR_Integer) 105))
            switch (MR_nth_code_unit(Op_4, 2)) {
              case (MR_Integer) 115:
                if (((((((((((((((((((((((((MR_nth_code_unit(Op_4, 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(Op_4, 4)) == (MR_Integer) 98)))) && (((MR_nth_code_unit(Op_4, 5)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Op_4, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Op_4, 7)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Op_4, 8)) == (MR_Integer) 119)))) && (((MR_nth_code_unit(Op_4, 9)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Op_4, 10)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Op_4, 11)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Op_4, 12)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Op_4, 13)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Op_4, 14)) == (MR_Integer) 103))))
                  switch (MR_nth_code_unit(Op_4, 15)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 54;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(16, Op_4, (MR_String) "disable_warnings"))
                        case_num_0 = (MR_Integer) 54;
                      break;
                  }
                break;
              case (MR_Integer) 118:
                if (MR_offset_streq(3, Op_4, (MR_String) "div"))
                  case_num_0 = (MR_Integer) 57;
                break;
            }
          break;
        case (MR_Integer) 101:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 108:
              if (MR_offset_streq(2, Op_4, (MR_String) "else"))
                case_num_0 = (MR_Integer) 58;
              break;
            case (MR_Integer) 110:
              if (MR_offset_streq(2, Op_4, (MR_String) "end_module"))
                case_num_0 = (MR_Integer) 59;
              break;
            case (MR_Integer) 118:
              if (MR_offset_streq(2, Op_4, (MR_String) "event"))
                case_num_0 = (MR_Integer) 60;
              break;
          }
          break;
        case (MR_Integer) 102:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 105:
              if (((((((((MR_nth_code_unit(Op_4, 2)) == (MR_Integer) 110)) && (((MR_nth_code_unit(Op_4, 3)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Op_4, 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Op_4, 5)) == (MR_Integer) 105))))
                switch (MR_nth_code_unit(Op_4, 6)) {
                  case (MR_Integer) 115:
                    if (MR_offset_streq(7, Op_4, (MR_String) "finalise"))
                      case_num_0 = (MR_Integer) 61;
                    break;
                  case (MR_Integer) 122:
                    if (MR_offset_streq(7, Op_4, (MR_String) "finalize"))
                      case_num_0 = (MR_Integer) 62;
                    break;
                }
              break;
            case (MR_Integer) 111:
              if (MR_offset_streq(2, Op_4, (MR_String) "for"))
                case_num_0 = (MR_Integer) 63;
              break;
            case (MR_Integer) 117:
              if (MR_offset_streq(2, Op_4, (MR_String) "func"))
                case_num_0 = (MR_Integer) 64;
              break;
          }
          break;
        case (MR_Integer) 105:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 102:
              if (MR_offset_streq(2, Op_4, (MR_String) "if"))
                case_num_0 = (MR_Integer) 65;
              break;
            case (MR_Integer) 109:
              if (((MR_nth_code_unit(Op_4, 2)) == (MR_Integer) 112))
                switch (MR_nth_code_unit(Op_4, 3)) {
                  case (MR_Integer) 111:
                    if (MR_offset_streq(4, Op_4, (MR_String) "import_module"))
                      case_num_0 = (MR_Integer) 66;
                    break;
                  case (MR_Integer) 117:
                    if (MR_offset_streq(4, Op_4, (MR_String) "impure"))
                      case_num_0 = (MR_Integer) 67;
                    break;
                }
              break;
            case (MR_Integer) 110:
              switch (MR_nth_code_unit(Op_4, 2)) {
                case (MR_Integer) 99:
                  if (MR_offset_streq(3, Op_4, (MR_String) "include_module"))
                    case_num_0 = (MR_Integer) 68;
                  break;
                case (MR_Integer) 105:
                  if (((((((((((MR_nth_code_unit(Op_4, 3)) == (MR_Integer) 116)) && (((MR_nth_code_unit(Op_4, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Op_4, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Op_4, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Op_4, 7)) == (MR_Integer) 105))))
                    switch (MR_nth_code_unit(Op_4, 8)) {
                      case (MR_Integer) 115:
                        if (MR_offset_streq(9, Op_4, (MR_String) "initialise"))
                          case_num_0 = (MR_Integer) 69;
                        break;
                      case (MR_Integer) 122:
                        if (MR_offset_streq(9, Op_4, (MR_String) "initialize"))
                          case_num_0 = (MR_Integer) 70;
                        break;
                    }
                  break;
                case (MR_Integer) 115:
                  if (((MR_nth_code_unit(Op_4, 3)) == (MR_Integer) 116))
                    switch (MR_nth_code_unit(Op_4, 4)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 71;
                        break;
                      case (MR_Integer) 97:
                        if (MR_offset_streq(5, Op_4, (MR_String) "instance"))
                          case_num_0 = (MR_Integer) 72;
                        break;
                    }
                  break;
              }
              break;
            case (MR_Integer) 115:
              if (MR_offset_streq(2, Op_4, (MR_String) "is"))
                case_num_0 = (MR_Integer) 73;
              break;
          }
          break;
        case (MR_Integer) 109:
          if (((((MR_nth_code_unit(Op_4, 1)) == (MR_Integer) 111)) && (((MR_nth_code_unit(Op_4, 2)) == (MR_Integer) 100))))
            switch (MR_nth_code_unit(Op_4, 3)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 74;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(4, Op_4, (MR_String) "mode"))
                  case_num_0 = (MR_Integer) 75;
                break;
              case (MR_Integer) 117:
                if (MR_offset_streq(4, Op_4, (MR_String) "module"))
                  case_num_0 = (MR_Integer) 76;
                break;
            }
          break;
        case (MR_Integer) 110:
          if (MR_offset_streq(1, Op_4, (MR_String) "not"))
            case_num_0 = (MR_Integer) 77;
          break;
        case (MR_Integer) 111:
          if (((MR_nth_code_unit(Op_4, 1)) == (MR_Integer) 114))
            switch (MR_nth_code_unit(Op_4, 2)) {
              case (MR_Integer) 0:
                case_num_0 = (MR_Integer) 78;
                break;
              case (MR_Integer) 95:
                if (MR_offset_streq(3, Op_4, (MR_String) "or_else"))
                  case_num_0 = (MR_Integer) 79;
                break;
            }
          break;
        case (MR_Integer) 112:
          if (((MR_nth_code_unit(Op_4, 1)) == (MR_Integer) 114))
            switch (MR_nth_code_unit(Op_4, 2)) {
              case (MR_Integer) 97:
                if (MR_offset_streq(3, Op_4, (MR_String) "pragma"))
                  case_num_0 = (MR_Integer) 80;
                break;
              case (MR_Integer) 101:
                if (MR_offset_streq(3, Op_4, (MR_String) "pred"))
                  case_num_0 = (MR_Integer) 81;
                break;
              case (MR_Integer) 111:
                if (((((((((MR_nth_code_unit(Op_4, 3)) == (MR_Integer) 109)) && (((MR_nth_code_unit(Op_4, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Op_4, 5)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Op_4, 6)) == (MR_Integer) 101))))
                  switch (MR_nth_code_unit(Op_4, 7)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 82;
                      break;
                    case (MR_Integer) 95:
                      switch (MR_nth_code_unit(Op_4, 8)) {
                        case (MR_Integer) 101:
                          switch (MR_nth_code_unit(Op_4, 9)) {
                            case (MR_Integer) 113:
                              if (((((((((((((((((((((((((((((((((((MR_nth_code_unit(Op_4, 10)) == (MR_Integer) 117)) && (((MR_nth_code_unit(Op_4, 11)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Op_4, 12)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(Op_4, 13)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Op_4, 14)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Op_4, 15)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Op_4, 16)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Op_4, 17)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Op_4, 18)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Op_4, 19)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Op_4, 20)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Op_4, 21)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Op_4, 22)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Op_4, 23)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Op_4, 24)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Op_4, 25)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(Op_4, 26)) == (MR_Integer) 110))))
                                switch (MR_nth_code_unit(Op_4, 27)) {
                                  case (MR_Integer) 95:
                                    if (MR_offset_streq(28, Op_4, (MR_String) "promise_equivalent_solution_sets"))
                                      case_num_0 = (MR_Integer) 54;
                                    break;
                                  case (MR_Integer) 115:
                                    if (MR_offset_streq(28, Op_4, (MR_String) "promise_equivalent_solutions"))
                                      case_num_0 = (MR_Integer) 54;
                                    break;
                                }
                              break;
                            case (MR_Integer) 120:
                              switch (MR_nth_code_unit(Op_4, 10)) {
                                case (MR_Integer) 99:
                                  if (((((((((((((MR_nth_code_unit(Op_4, 11)) == (MR_Integer) 108)) && (((MR_nth_code_unit(Op_4, 12)) == (MR_Integer) 117)))) && (((MR_nth_code_unit(Op_4, 13)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Op_4, 14)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Op_4, 15)) == (MR_Integer) 118)))) && (((MR_nth_code_unit(Op_4, 16)) == (MR_Integer) 101))))
                                    switch (MR_nth_code_unit(Op_4, 17)) {
                                      case (MR_Integer) 0:
                                        case_num_0 = (MR_Integer) 83;
                                        break;
                                      case (MR_Integer) 95:
                                        if (MR_offset_streq(18, Op_4, (MR_String) "promise_exclusive_exhaustive"))
                                          case_num_0 = (MR_Integer) 83;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 104:
                                  if (MR_offset_streq(11, Op_4, (MR_String) "promise_exhaustive"))
                                    case_num_0 = (MR_Integer) 83;
                                  break;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 105:
                          if (MR_offset_streq(9, Op_4, (MR_String) "promise_impure"))
                            case_num_0 = (MR_Integer) 84;
                          break;
                        case (MR_Integer) 112:
                          if (MR_offset_streq(9, Op_4, (MR_String) "promise_pure"))
                            case_num_0 = (MR_Integer) 84;
                          break;
                        case (MR_Integer) 115:
                          if (MR_offset_streq(9, Op_4, (MR_String) "promise_semipure"))
                            case_num_0 = (MR_Integer) 84;
                          break;
                      }
                      break;
                  }
                break;
            }
          break;
        case (MR_Integer) 114:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 101:
              switch (MR_nth_code_unit(Op_4, 2)) {
                case (MR_Integer) 109:
                  if (MR_offset_streq(3, Op_4, (MR_String) "rem"))
                    case_num_0 = (MR_Integer) 85;
                  break;
                case (MR_Integer) 113:
                  if (((((((((((MR_nth_code_unit(Op_4, 3)) == (MR_Integer) 117)) && (((MR_nth_code_unit(Op_4, 4)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(Op_4, 5)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Op_4, 6)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Op_4, 7)) == (MR_Integer) 95))))
                    switch (MR_nth_code_unit(Op_4, 8)) {
                      case (MR_Integer) 99:
                        switch (MR_nth_code_unit(Op_4, 9)) {
                          case (MR_Integer) 99:
                            if (((MR_nth_code_unit(Op_4, 10)) == (MR_Integer) 95))
                              switch (MR_nth_code_unit(Op_4, 11)) {
                                case (MR_Integer) 109:
                                  if (MR_offset_streq(12, Op_4, (MR_String) "require_cc_multi"))
                                    case_num_0 = (MR_Integer) 84;
                                  break;
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(12, Op_4, (MR_String) "require_cc_nondet"))
                                    case_num_0 = (MR_Integer) 84;
                                  break;
                              }
                            break;
                          case (MR_Integer) 111:
                            if (MR_offset_streq(10, Op_4, (MR_String) "require_complete_switch"))
                              case_num_0 = (MR_Integer) 54;
                            break;
                        }
                        break;
                      case (MR_Integer) 100:
                        if (MR_offset_streq(9, Op_4, (MR_String) "require_det"))
                          case_num_0 = (MR_Integer) 84;
                        break;
                      case (MR_Integer) 101:
                        if (MR_offset_streq(9, Op_4, (MR_String) "require_erroneous"))
                          case_num_0 = (MR_Integer) 84;
                        break;
                      case (MR_Integer) 102:
                        if (MR_offset_streq(9, Op_4, (MR_String) "require_failure"))
                          case_num_0 = (MR_Integer) 84;
                        break;
                      case (MR_Integer) 109:
                        if (MR_offset_streq(9, Op_4, (MR_String) "require_multi"))
                          case_num_0 = (MR_Integer) 84;
                        break;
                      case (MR_Integer) 110:
                        if (MR_offset_streq(9, Op_4, (MR_String) "require_nondet"))
                          case_num_0 = (MR_Integer) 84;
                        break;
                      case (MR_Integer) 115:
                        switch (MR_nth_code_unit(Op_4, 9)) {
                          case (MR_Integer) 101:
                            if (MR_offset_streq(10, Op_4, (MR_String) "require_semidet"))
                              case_num_0 = (MR_Integer) 84;
                            break;
                          case (MR_Integer) 119:
                            if (((((((((((((((((((((MR_nth_code_unit(Op_4, 10)) == (MR_Integer) 105)) && (((MR_nth_code_unit(Op_4, 11)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(Op_4, 12)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(Op_4, 13)) == (MR_Integer) 104)))) && (((MR_nth_code_unit(Op_4, 14)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(Op_4, 15)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Op_4, 16)) == (MR_Integer) 114)))) && (((MR_nth_code_unit(Op_4, 17)) == (MR_Integer) 109)))) && (((MR_nth_code_unit(Op_4, 18)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(Op_4, 19)) == (MR_Integer) 95))))
                              switch (MR_nth_code_unit(Op_4, 20)) {
                                case (MR_Integer) 99:
                                  if (((((MR_nth_code_unit(Op_4, 21)) == (MR_Integer) 99)) && (((MR_nth_code_unit(Op_4, 22)) == (MR_Integer) 95))))
                                    switch (MR_nth_code_unit(Op_4, 23)) {
                                      case (MR_Integer) 109:
                                        if (MR_offset_streq(24, Op_4, (MR_String) "require_switch_arms_cc_multi"))
                                          case_num_0 = (MR_Integer) 54;
                                        break;
                                      case (MR_Integer) 110:
                                        if (MR_offset_streq(24, Op_4, (MR_String) "require_switch_arms_cc_nondet"))
                                          case_num_0 = (MR_Integer) 54;
                                        break;
                                    }
                                  break;
                                case (MR_Integer) 100:
                                  if (MR_offset_streq(21, Op_4, (MR_String) "require_switch_arms_det"))
                                    case_num_0 = (MR_Integer) 54;
                                  break;
                                case (MR_Integer) 101:
                                  if (MR_offset_streq(21, Op_4, (MR_String) "require_switch_arms_erroneous"))
                                    case_num_0 = (MR_Integer) 54;
                                  break;
                                case (MR_Integer) 102:
                                  if (MR_offset_streq(21, Op_4, (MR_String) "require_switch_arms_failure"))
                                    case_num_0 = (MR_Integer) 54;
                                  break;
                                case (MR_Integer) 109:
                                  if (MR_offset_streq(21, Op_4, (MR_String) "require_switch_arms_multi"))
                                    case_num_0 = (MR_Integer) 54;
                                  break;
                                case (MR_Integer) 110:
                                  if (MR_offset_streq(21, Op_4, (MR_String) "require_switch_arms_nondet"))
                                    case_num_0 = (MR_Integer) 54;
                                  break;
                                case (MR_Integer) 115:
                                  if (MR_offset_streq(21, Op_4, (MR_String) "require_switch_arms_semidet"))
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
              if (MR_offset_streq(2, Op_4, (MR_String) "rule"))
                case_num_0 = (MR_Integer) 86;
              break;
          }
          break;
        case (MR_Integer) 115:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 101:
              if (MR_offset_streq(2, Op_4, (MR_String) "semipure"))
                case_num_0 = (MR_Integer) 87;
              break;
            case (MR_Integer) 111:
              switch (MR_nth_code_unit(Op_4, 2)) {
                case (MR_Integer) 108:
                  if (MR_offset_streq(3, Op_4, (MR_String) "solver"))
                    case_num_0 = (MR_Integer) 88;
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(3, Op_4, (MR_String) "some"))
                    case_num_0 = (MR_Integer) 89;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 116:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 104:
              if (MR_offset_streq(2, Op_4, (MR_String) "then"))
                case_num_0 = (MR_Integer) 90;
              break;
            case (MR_Integer) 114:
              switch (MR_nth_code_unit(Op_4, 2)) {
                case (MR_Integer) 97:
                  if (MR_offset_streq(3, Op_4, (MR_String) "trace"))
                    case_num_0 = (MR_Integer) 54;
                  break;
                case (MR_Integer) 121:
                  if (MR_offset_streq(3, Op_4, (MR_String) "try"))
                    case_num_0 = (MR_Integer) 54;
                  break;
              }
              break;
            case (MR_Integer) 121:
              if (((((MR_nth_code_unit(Op_4, 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(Op_4, 3)) == (MR_Integer) 101))))
                switch (MR_nth_code_unit(Op_4, 4)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 91;
                    break;
                  case (MR_Integer) 99:
                    if (MR_offset_streq(5, Op_4, (MR_String) "typeclass"))
                      case_num_0 = (MR_Integer) 92;
                    break;
                }
              break;
          }
          break;
        case (MR_Integer) 117:
          if (MR_offset_streq(1, Op_4, (MR_String) "use_module"))
            case_num_0 = (MR_Integer) 93;
          break;
        case (MR_Integer) 119:
          if (((((MR_nth_code_unit(Op_4, 1)) == (MR_Integer) 104)) && (((MR_nth_code_unit(Op_4, 2)) == (MR_Integer) 101))))
            switch (MR_nth_code_unit(Op_4, 3)) {
              case (MR_Integer) 110:
                if (MR_offset_streq(4, Op_4, (MR_String) "when"))
                  case_num_0 = (MR_Integer) 94;
                break;
              case (MR_Integer) 114:
                if (MR_offset_streq(4, Op_4, (MR_String) "where"))
                  case_num_0 = (MR_Integer) 95;
                break;
            }
          break;
        case (MR_Integer) 126:
          switch (MR_nth_code_unit(Op_4, 1)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 96;
              break;
            case (MR_Integer) 61:
              if (MR_offset_streq(2, Op_4, (MR_String) "~="))
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
        *Info_5 = ((&mercury__ops_vector_common_6[0 + case_num_0]))->mercury__ops__vector_common_type_6_0__vct_6_f_0;
        *OtherInfos_6 = ((&mercury__ops_vector_common_6[0 + case_num_0]))->mercury__ops__vector_common_type_6_0__vct_6_f_1;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__ops__mercury_max_priority_1_f_0(void)
{
  {
    MR_Integer HeadVar__2_2;

    HeadVar__2_2 = mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0();
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__ops__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_101_114_99_117_114_121_95_109_97_120_95_112_114_105_111_114_105_116_121_95_95_91_49_93_95_48_1_f_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__ops__adjust_priority_for_assoc_3_p_0(
  MR_Integer Priority_1,
  MR_Word HeadVar__2_2,
  MR_Integer * HeadVar__3_3)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) Priority_1 - (MR_Unsigned) 1);
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = Priority_1;
      break;
  }
}

void MR_CALL 
mercury__ops__init_mercury_op_table_0_f_0(void)
{
  {
  }
}

static MR_bool MR_CALL 
mercury__ops____Unify____assoc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops____Unify____assoc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__ops____Compare____assoc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__ops____Compare____assoc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__ops____Unify____class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops____Unify____class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__ops____Compare____class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__ops____Compare____class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__ops____Unify____mercury_op_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops____Unify____mercury_op_table_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mercury__ops____Compare____mercury_op_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__ops____Compare____mercury_op_table_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__ops____Unify____op_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops____Unify____op_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__ops____Compare____op_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__ops____Compare____op_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__ops____Unify____priority_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops____Unify____priority_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__ops____Compare____priority_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__ops____Compare____priority_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__ops____Unify____table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__ops____Unify____table_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mercury__ops____Compare____table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__ops____Compare____table_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__3_3;
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
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_prefix_op_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;
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
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__3_3;
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
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_postfix_op_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv1_HeadVar__3_3;
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
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_2_2_p_0(((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__4_4;

    succeeded = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_op_infos_4_4_p_0(((MR_String) (wrapper_arg_2)), &conv1_HeadVar__3_3, &conv0_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
      *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__lookup_operator_term_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv2_HeadVar__2_2;
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
}

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1_1_f_0();
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__ops__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__arg_priority_1_1_f_0();
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ops__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ops.
