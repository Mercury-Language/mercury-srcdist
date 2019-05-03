/*
** Automatically generated from `stream.m'
** by the Mercury compiler,
** version rotd-2019-05-03
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


// :- module stream.
// :- implementation.

/*
INIT mercury__stream__init
ENDINIT
*/

#include "stream.mih"


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




static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0;

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1;

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1];

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2[2];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2];

static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2];

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_0;

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_1;

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1];

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_2[2];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2];

static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_0;

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_1;

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1];

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_1[2];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2];

static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2];

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_0;

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_1;

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_2;

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1];

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_2[3];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3];

static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_0;

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_1;

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1];

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_2;

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1];

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_1[2];

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3];

static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3];

static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0;

static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1;

static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2;

static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3];

static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3];

static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3];

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1];

static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3;

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4];

static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4;

static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2];

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1];

static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2;

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2];

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1];

static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2;

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4];

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1];

static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4;

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1;

static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4];

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1];

static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4;

static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2];

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1];

static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2;

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2];

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_line_oriented_2[2];

static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2;

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2];

static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2;

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1];

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1];

static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1;

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2];

static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2;

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1;

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2];

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5];

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1];

static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5;

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1;

static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2;

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2];

static MR_Integer MR_CALL 
mercury__stream__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__stream_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__stream_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__stream_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__stream_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stream_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stream_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stream_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stream_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stream_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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



static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__stream__stream__field_types_maybe_partial_res_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_maybe_partial_res_2_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1 = {
  (MR_String) "error",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__stream__stream__field_types_maybe_partial_res_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1
};

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_maybe_partial_res_2_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_maybe_partial_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_1,
  &mercury__stream__stream__du_functor_desc_maybe_partial_res_2_0
};

static const MR_Integer mercury__stream__stream__functor_number_map_maybe_partial_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_maybe_partial_res_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____maybe_partial_res_2_0_10001)),
  ((MR_Box) (mercury__stream____Compare____maybe_partial_res_2_0_10001)),
  (MR_String) "stream",
  (MR_String) "maybe_partial_res",
  {     mercury__stream__stream__du_name_ordered_maybe_partial_res_2 },
  {     mercury__stream__stream__du_ptag_ordered_maybe_partial_res_2 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__stream__stream__functor_number_map_maybe_partial_res_2
};

const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_name_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__stream____Unify____name_0_0_10001)),
  ((MR_Box) (mercury__stream____Compare____name_0_0_10001)),
  (MR_String) "stream",
  (MR_String) "name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__stream__stream__field_types_res_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_2_1[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_2_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__stream__stream__field_types_res_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_0
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_2_1
};

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_2[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_res_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_res_2_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_2[2] = {
  &mercury__stream__stream__du_functor_desc_res_2_1,
  &mercury__stream__stream__du_functor_desc_res_2_0
};

static const MR_Integer mercury__stream__stream__functor_number_map_res_2[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_res_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____res_2_0_10001)),
  ((MR_Box) (mercury__stream____Compare____res_2_0_10001)),
  (MR_String) "stream",
  (MR_String) "res",
  {     mercury__stream__stream__du_name_ordered_res_2 },
  {     mercury__stream__stream__du_ptag_ordered_res_2 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__stream__stream__functor_number_map_res_2
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_0 = {
  (MR_String) "ok",
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

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_res_1_1[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_res_1_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__stream__stream__field_types_res_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_0[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_0
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_res_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_res_1_1
};

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_res_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__stream__stream__du_stag_ordered_res_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_res_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_res_1[2] = {
  &mercury__stream__stream__du_functor_desc_res_1_1,
  &mercury__stream__stream__du_functor_desc_res_1_0
};

static const MR_Integer mercury__stream__stream__functor_number_map_res_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_res_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____res_1_0_10001)),
  ((MR_Box) (mercury__stream____Compare____res_1_0_10001)),
  (MR_String) "stream",
  (MR_String) "res",
  {     mercury__stream__stream__du_name_ordered_res_1 },
  {     mercury__stream__stream__du_ptag_ordered_res_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__stream__stream__functor_number_map_res_1
};

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__stream__stream__field_types_result_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_1 = {
  (MR_String) "eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_2_2[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 2)
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_2_2 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__stream__stream__field_types_result_2_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_0[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_1
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_0
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_2_2[1] = {
  &mercury__stream__stream__du_functor_desc_result_2_2
};

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_2[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__stream__stream__du_stag_ordered_result_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_result_2_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_result_2_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_2[3] = {
  &mercury__stream__stream__du_functor_desc_result_2_1,
  &mercury__stream__stream__du_functor_desc_result_2_2,
  &mercury__stream__stream__du_functor_desc_result_2_0
};

static const MR_Integer mercury__stream__stream__functor_number_map_result_2[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_result_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____result_2_0_10001)),
  ((MR_Box) (mercury__stream____Compare____result_2_0_10001)),
  (MR_String) "stream",
  (MR_String) "result",
  {     mercury__stream__stream__du_name_ordered_result_2 },
  {     mercury__stream__stream__du_ptag_ordered_result_2 },
  (MR_Integer) 3,
  UINT16_C(4),
  mercury__stream__stream__functor_number_map_result_2
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_0 = {
  (MR_String) "ok",
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

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_1 = {
  (MR_String) "eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__stream__stream__field_types_result_1_2[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__stream__stream__du_functor_desc_result_1_2 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__stream__stream__field_types_result_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_0[2] = {
  &mercury__stream__stream__du_functor_desc_result_1_0,
  &mercury__stream__stream__du_functor_desc_result_1_1
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_stag_ordered_result_1_1[1] = {
  &mercury__stream__stream__du_functor_desc_result_1_2
};

static const MR_DuPtagLayout mercury__stream__stream__du_ptag_ordered_result_1[2] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__stream__stream__du_stag_ordered_result_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__stream__stream__du_stag_ordered_result_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__stream__stream__du_name_ordered_result_1[3] = {
  &mercury__stream__stream__du_functor_desc_result_1_1,
  &mercury__stream__stream__du_functor_desc_result_1_2,
  &mercury__stream__stream__du_functor_desc_result_1_0
};

static const MR_Integer mercury__stream__stream__functor_number_map_result_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_result_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__stream____Unify____result_1_0_10001)),
  ((MR_Box) (mercury__stream____Compare____result_1_0_10001)),
  (MR_String) "stream",
  (MR_String) "result",
  {     mercury__stream__stream__du_name_ordered_result_1 },
  {     mercury__stream__stream__du_ptag_ordered_result_1 },
  (MR_Integer) 3,
  UINT16_C(4),
  mercury__stream__stream__functor_number_map_result_1
};

static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_0 = {
  (MR_String) "set",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_1 = {
  (MR_String) "cur",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__stream__stream__enum_functor_desc_whence_0_2 = {
  (MR_String) "end",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_value_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_0,
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2
};

static const MR_EnumFunctorDescPtr mercury__stream__stream__enum_name_ordered_whence_0[3] = {
  &mercury__stream__stream__enum_functor_desc_whence_0_1,
  &mercury__stream__stream__enum_functor_desc_whence_0_2,
  &mercury__stream__stream__enum_functor_desc_whence_0_0
};

static const MR_Integer mercury__stream__stream__functor_number_map_whence_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__stream__stream__type_ctor_info_whence_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__stream____Unify____whence_0_0_10001)),
  ((MR_Box) (mercury__stream____Compare____whence_0_0_10001)),
  (MR_String) "stream",
  (MR_String) "whence",
  {     mercury__stream__stream__enum_name_ordered_whence_0 },
  {     mercury__stream__stream__enum_value_ordered_whence_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  mercury__stream__stream__functor_number_map_whence_0
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_writer_3[3] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State"
};

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_writer_3[1] = {
  {
    (MR_String) "put",
    (MR_Integer) 4,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_writer_3 = {
  (MR_String) "stream",
  (MR_String) "writer",
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_writer_3,
  mercury__stream__stream__type_class_id_method_ids_writer_3
};

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_writer_3_1 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_writer_3[1] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_writer_3_1)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_writer_3 = {
  &mercury__stream__stream__type_class_id_writer_3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_unbounded_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_unbounded_putback_4 = {
  (MR_String) "stream",
  (MR_String) "unbounded_putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_unbounded_putback_4,
  NULL
};

static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_putback_4,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3),
    (MR_PseudoTypeInfo) ((MR_Integer) 4)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_unbounded_putback_4[1] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_unbounded_putback_4_1)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_unbounded_putback_4 = {
  &mercury__stream__stream__type_class_id_unbounded_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_stream_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_stream_2[1] = {
  {
    (MR_String) "name",
    (MR_Integer) 4,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_stream_2 = {
  (MR_String) "stream",
  (MR_String) "stream",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_stream_2,
  mercury__stream__stream__type_class_id_method_ids_stream_2
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_stream_2 = {
  &mercury__stream__stream__type_class_id_stream_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_seekable_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_seekable_2[1] = {
  {
    (MR_String) "seek",
    (MR_Integer) 5,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_seekable_2 = {
  (MR_String) "stream",
  (MR_String) "seekable",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_seekable_2,
  mercury__stream__stream__type_class_id_method_ids_seekable_2
};

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_seekable_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_seekable_2[1] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_seekable_2_1)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_seekable_2 = {
  &mercury__stream__stream__type_class_id_seekable_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_reader_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_reader_4[1] = {
  {
    (MR_String) "get",
    (MR_Integer) 4,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_reader_4 = {
  (MR_String) "stream",
  (MR_String) "reader",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_reader_4,
  mercury__stream__stream__type_class_id_method_ids_reader_4
};

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_reader_4_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 3)
  }
};

static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_reader_4_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 4)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_reader_4[2] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_reader_4_1),
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_reader_4_2)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_reader_4 = {
  &mercury__stream__stream__type_class_id_reader_4,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_putback_4[4] = {
  (MR_String) "Stream",
  (MR_String) "Unit",
  (MR_String) "State",
  (MR_String) "Error"
};

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_putback_4[1] = {
  {
    (MR_String) "unget",
    (MR_Integer) 4,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_putback_4 = {
  (MR_String) "stream",
  (MR_String) "putback",
  (MR_Integer) 4,
  (MR_Integer) 4,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_putback_4,
  mercury__stream__stream__type_class_id_method_ids_putback_4
};

static const MR_TypeClassConstraint_4Struct mercury__stream__stream__type_class_decl_super_putback_4_1 = {
  &mercury__stream__stream__type_class_decl_reader_4,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 3),
    (MR_PseudoTypeInfo) ((MR_Integer) 4)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_putback_4[1] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_putback_4_1)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_putback_4 = {
  &mercury__stream__stream__type_class_id_putback_4,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_output_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_output_2[1] = {
  {
    (MR_String) "flush",
    (MR_Integer) 3,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_output_2 = {
  (MR_String) "stream",
  (MR_String) "output",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_output_2,
  mercury__stream__stream__type_class_id_method_ids_output_2
};

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_output_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_output_2[1] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_output_2_1)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_output_2 = {
  &mercury__stream__stream__type_class_id_output_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_line_oriented_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_line_oriented_2[2] = {
  {
    (MR_String) "get_line",
    (MR_Integer) 4,
    MR_PREDICATE
  },
  {
    (MR_String) "set_line",
    (MR_Integer) 4,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_line_oriented_2 = {
  (MR_String) "stream",
  (MR_String) "line_oriented",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__stream__stream__type_class_id_var_names_line_oriented_2,
  mercury__stream__stream__type_class_id_method_ids_line_oriented_2
};

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_line_oriented_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_line_oriented_2[1] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_line_oriented_2_1)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_line_oriented_2 = {
  &mercury__stream__stream__type_class_id_line_oriented_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_input_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_input_2 = {
  (MR_String) "stream",
  (MR_String) "input",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_input_2,
  NULL
};

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_input_2_1 = {
  &mercury__stream__stream__type_class_decl_stream_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_input_2[1] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_input_2_1)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_input_2 = {
  &mercury__stream__stream__type_class_id_input_2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_error_1[1] = {
  (MR_String) "Error"
};

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_error_1[1] = {
  {
    (MR_String) "error_message",
    (MR_Integer) 2,
    MR_FUNCTION
  }
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_error_1 = {
  (MR_String) "stream",
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_error_1,
  mercury__stream__stream__type_class_id_method_ids_error_1
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_error_1 = {
  &mercury__stream__stream__type_class_id_error_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_duplex_2[2] = {
  (MR_String) "Stream",
  (MR_String) "State"
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_duplex_2 = {
  (MR_String) "stream",
  (MR_String) "duplex",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__stream__stream__type_class_id_var_names_duplex_2,
  NULL
};

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_duplex_2_2 = {
  &mercury__stream__stream__type_class_decl_output_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_duplex_2[2] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_duplex_2_1),
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_duplex_2_2)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_duplex_2 = {
  &mercury__stream__stream__type_class_id_duplex_2,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

static const MR_ConstString mercury__stream__stream__type_class_id_var_names_bulk_reader_5[5] = {
  (MR_String) "Stream",
  (MR_String) "Index",
  (MR_String) "Store",
  (MR_String) "State",
  (MR_String) "Error"
};

static const MR_TypeClassMethod mercury__stream__stream__type_class_id_method_ids_bulk_reader_5[1] = {
  {
    (MR_String) "bulk_get",
    (MR_Integer) 9,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__stream__stream__type_class_id_bulk_reader_5 = {
  (MR_String) "stream",
  (MR_String) "bulk_reader",
  (MR_Integer) 5,
  (MR_Integer) 5,
  (MR_Integer) 1,
  mercury__stream__stream__type_class_id_var_names_bulk_reader_5,
  mercury__stream__stream__type_class_id_method_ids_bulk_reader_5
};

static const MR_TypeClassConstraint_2Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_1 = {
  &mercury__stream__stream__type_class_decl_input_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 4)
  }
};

static const MR_TypeClassConstraint_1Struct mercury__stream__stream__type_class_decl_super_bulk_reader_5_2 = {
  &mercury__stream__stream__type_class_decl_error_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 5)
  }
};

static const MR_TypeClassConstraint mercury__stream__stream__type_class_decl_supers_bulk_reader_5[2] = {
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_bulk_reader_5_1),
  (MR_TypeClassConstraint) (&mercury__stream__stream__type_class_decl_super_bulk_reader_5_2)
};

const MR_TypeClassDeclStruct mercury__stream__stream__type_class_decl_bulk_reader_5 = {
  &mercury__stream__stream__type_class_id_bulk_reader_5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL
};

static MR_Integer MR_CALL 
mercury__stream__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__stream____Compare____whence_0_0(
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
mercury__stream____Unify____whence_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__stream____Compare____result_2_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word TypeInfo_for_Error_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Var_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_18, HeadVar__1_1, Var_21, ArgY1_5);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box Var_20 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

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
                  MR_Box ArgY1_15 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_Error_19, HeadVar__1_1, Var_20, ArgY1_15);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__stream____Unify____result_2_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_Error_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_6 == CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_7 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Error_12, ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__stream____Compare____result_1_0(
  MR_Word TypeInfo_for_Error_12,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_10 == CastY_11);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box Var_13 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_9 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_Error_12, HeadVar__1_1, Var_13, ArgY1_9);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__stream____Unify____result_1_0(
  MR_Word TypeInfo_for_Error_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Error_11, ArgX1_7, ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__stream____Compare____res_2_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word TypeInfo_for_Error_15,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Box Var_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Box ArgY1_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_Error_15, HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_17 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__stream____Unify____res_2_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word TypeInfo_for_Error_10,
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Error_10, ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__stream____Compare____res_1_0(
  MR_Word TypeInfo_for_Error_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box Var_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_7 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_Error_10, HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__stream____Unify____res_1_0(
  MR_Word TypeInfo_for_Error_9,
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Error_9, ArgX1_5, ArgY1_6);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__stream____Compare____name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;
    MR_Integer V_7_10;

{
#define MR_PROC_LABEL mercury__stream____Compare____name_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Cast_HeadVar1_4 ;
	S2 =  Cast_HeadVar2_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_10  = Res;
}
    succeeded = (V_7_10 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (V_7_10 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__stream____Unify____name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word TypeInfo_for_Error_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Box Var_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
      MR_Box Var_22 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Box ArgY1_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Box ArgY2_16 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
        MR_Word SubResult1_14;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, &SubResult1_14, Var_22, ArgY1_13);
        succeeded = (SubResult1_14 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_14;
        else
          mercury__builtin__compare_3_p_0(TypeInfo_for_Error_20, HeadVar__1_1, Var_21, ArgY2_16);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_23 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_19, HeadVar__1_1, Var_23, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word TypeInfo_for_Error_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY2_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Error_12, ArgX2_7, ArgY2_8);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_11, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__stream__set_line_4_p_0(
  MR_Word TypeClassInfo_for_line_oriented_5,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 6))));

    func_0(((MR_Box) (TypeClassInfo_for_line_oriented_5)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), HeadVar__3_3, HeadVar__4_4);
  }
}

void MR_CALL 
mercury__stream__get_line_4_p_0(
  MR_Word TypeClassInfo_for_line_oriented_5,
  MR_Box HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_line_oriented_5, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__2_2;

    func_0(((MR_Box) (TypeClassInfo_for_line_oriented_5)), HeadVar__1_1, &conv1_HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    *HeadVar__2_2 = ((MR_Integer) (conv1_HeadVar__2_2));
  }
}

void MR_CALL 
mercury__stream__seek_5_p_0(
  MR_Word TypeClassInfo_for_seekable_6,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_seekable_6, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_seekable_6)), HeadVar__1_1, ((MR_Box) (HeadVar__2_2)), ((MR_Box) (HeadVar__3_3)), HeadVar__4_4, HeadVar__5_5);
  }
}

void MR_CALL 
mercury__stream__unget_4_p_0(
  MR_Word TypeClassInfo_for_putback_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_putback_5, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_putback_5)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
  }
}

void MR_CALL 
mercury__stream__put_4_p_0(
  MR_Word TypeClassInfo_for_writer_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_writer_5, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_writer_5)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
  }
}

void MR_CALL 
mercury__stream__flush_3_p_0(
  MR_Word TypeClassInfo_for_output_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_output_4, (MR_Integer) 0)), (MR_Integer) 5))));

    func_0(((MR_Box) (TypeClassInfo_for_output_4)), HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
mercury__stream__bulk_get_9_p_0(
  MR_Word TypeClassInfo_for_bulk_reader_10,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Box HeadVar__4_4,
  MR_Box * HeadVar__5_5,
  MR_Integer * HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Box HeadVar__8_8,
  MR_Box * HeadVar__9_9)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_bulk_reader_10, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv2_HeadVar__6_6;
    MR_Box conv1_HeadVar__7_7;

    func_0(((MR_Box) (TypeClassInfo_for_bulk_reader_10)), HeadVar__1_1, HeadVar__2_2, ((MR_Box) (HeadVar__3_3)), HeadVar__4_4, HeadVar__5_5, &conv2_HeadVar__6_6, &conv1_HeadVar__7_7, HeadVar__8_8, HeadVar__9_9);
    *HeadVar__6_6 = ((MR_Integer) (conv2_HeadVar__6_6));
    *HeadVar__7_7 = ((MR_Word) (conv1_HeadVar__7_7));
  }
}

void MR_CALL 
mercury__stream__get_4_p_0(
  MR_Word TypeClassInfo_for_reader_5,
  MR_Box HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_5, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__2_2;

    func_0(((MR_Box) (TypeClassInfo_for_reader_5)), HeadVar__1_1, &conv1_HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    *HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  }
}

void MR_CALL 
mercury__stream__name_4_p_0(
  MR_Word TypeClassInfo_for_stream_5,
  MR_Box HeadVar__1_1,
  MR_String * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_stream_5, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__2_2;

    func_0(((MR_Box) (TypeClassInfo_for_stream_5)), HeadVar__1_1, &conv1_HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    *HeadVar__2_2 = ((MR_String) (conv1_HeadVar__2_2));
  }
}

MR_String MR_CALL 
mercury__stream__error_message_1_f_0(
  MR_Word TypeClassInfo_for_error_3,
  MR_Box HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_error_3, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = func_0(((MR_Box) (TypeClassInfo_for_error_3)), HeadVar__1_1);
    HeadVar__2_2 = ((MR_String) (conv1_HeadVar__2_2));
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__stream__put_list_6_p_2(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_output_26,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_State_0_5,
  MR_Box * STATE_VARIABLE_State_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    else
    {
      MR_Box X_16 = (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0));
      MR_Word Xs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_State_23_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      func_0(((MR_Box) (HeadVar__2_2)), HeadVar__1_1, X_16, STATE_VARIABLE_State_0_5, &STATE_VARIABLE_State_23_23);
      if ((Xs_17 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_23_23;
      else
      {
        MR_Box STATE_VARIABLE_State_24_24;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__4_4;
        MR_Box next_value_of_STATE_VARIABLE_State_0_5;

        func_1(((MR_Box) (HeadVar__3_3)), HeadVar__1_1, STATE_VARIABLE_State_23_23, &STATE_VARIABLE_State_24_24);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Xs_17;
        next_value_of_STATE_VARIABLE_State_0_5 = STATE_VARIABLE_State_24_24;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_State_0_5 = next_value_of_STATE_VARIABLE_State_0_5;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__put_list_6_p_1(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_output_26,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_State_0_5,
  MR_Box * STATE_VARIABLE_State_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    else
    {
      MR_Box X_16 = (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0));
      MR_Word Xs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_State_23_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      func_0(((MR_Box) (HeadVar__2_2)), HeadVar__1_1, X_16, STATE_VARIABLE_State_0_5, &STATE_VARIABLE_State_23_23);
      if ((Xs_17 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_23_23;
      else
      {
        MR_Box STATE_VARIABLE_State_24_24;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__4_4;
        MR_Box next_value_of_STATE_VARIABLE_State_0_5;

        func_1(((MR_Box) (HeadVar__3_3)), HeadVar__1_1, STATE_VARIABLE_State_23_23, &STATE_VARIABLE_State_24_24);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Xs_17;
        next_value_of_STATE_VARIABLE_State_0_5 = STATE_VARIABLE_State_24_24;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_State_0_5 = next_value_of_STATE_VARIABLE_State_0_5;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__put_list_6_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word TypeClassInfo_for_output_26,
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Box STATE_VARIABLE_State_0_5,
  MR_Box * STATE_VARIABLE_State_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_0_5;
    else
    {
      MR_Box X_16 = (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0));
      MR_Word Xs_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Box STATE_VARIABLE_State_23_23;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      func_0(((MR_Box) (HeadVar__2_2)), HeadVar__1_1, X_16, STATE_VARIABLE_State_0_5, &STATE_VARIABLE_State_23_23);
      if ((Xs_17 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_State_6 = STATE_VARIABLE_State_23_23;
      else
      {
        MR_Box STATE_VARIABLE_State_24_24;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__4_4;
        MR_Box next_value_of_STATE_VARIABLE_State_0_5;

        func_1(((MR_Box) (HeadVar__3_3)), HeadVar__1_1, STATE_VARIABLE_State_23_23, &STATE_VARIABLE_State_24_24);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__4_4 = Xs_17;
        next_value_of_STATE_VARIABLE_State_0_5 = STATE_VARIABLE_State_24_24;
        HeadVar__4_4 = next_value_of_HeadVar__4_4;
        STATE_VARIABLE_State_0_5 = next_value_of_STATE_VARIABLE_State_0_5;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__stream__ignore_whitespace_4_p_0(
  MR_Word TypeClassInfo_for_putback_16,
  MR_Box Stream_5,
  MR_Word * Result_6,
  MR_Box STATE_VARIABLE_State_0_11,
  MR_Box * STATE_VARIABLE_State_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeClassInfo_for_reader_17;
    MR_Word CharResult_8;
    MR_Box STATE_VARIABLE_State_13_13;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
    MR_Box conv1_CharResult_8;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__stream__ignore_whitespace_4_p_0

	MR_Word TypeClassInfo0;
	MR_Integer Index;
	MR_Word TypeClassInfo;

	TypeClassInfo0 =  TypeClassInfo_for_putback_16 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);


		;}
#undef MR_PROC_LABEL
	 TypeClassInfo_for_reader_17  = TypeClassInfo;
}
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_17, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_reader_17)), Stream_5, &conv1_CharResult_8, STATE_VARIABLE_State_0_11, &STATE_VARIABLE_State_13_13);
    CharResult_8 = ((MR_Word) (conv1_CharResult_8));
    switch (MR_tag((MR_Word) CharResult_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Result_6 = (MR_Word) ((MR_Unsigned) 4U);
          *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_13_13;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Char Char_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), CharResult_8, (MR_Integer) 0)));

          succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
          if (succeeded)
          {
            MR_Box next_value_of_STATE_VARIABLE_State_0_11 = STATE_VARIABLE_State_13_13;

            // direct tailcall eliminated
            ;
            STATE_VARIABLE_State_0_11 = next_value_of_STATE_VARIABLE_State_0_11;
            continue;
          }
          else
          {
            void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_putback_16, (MR_Integer) 0)), (MR_Integer) 5))));

            func_2(((MR_Box) (TypeClassInfo_for_putback_16)), Stream_5, ((MR_Box) (MR_Word) (Char_10)), STATE_VARIABLE_State_13_13, STATE_VARIABLE_State_12);
            *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Error_9 = (MR_hl_field(MR_mktag(2), CharResult_8, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Error_9;
          }
          *STATE_VARIABLE_State_12 = STATE_VARIABLE_State_13_13;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__input_stream_fold2_state_maybe_stop_6_p_1(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeClassInfo_for_reader_22,
  MR_Box Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10,
  MR_Box STATE_VARIABLE_S_0_17,
  MR_Box * STATE_VARIABLE_S_18)
{
  while (MR_TRUE)
  {
    MR_Word Result0_12;
    MR_Box STATE_VARIABLE_S_19_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Result0_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_reader_22)), Stream_7, &conv1_Result0_12, STATE_VARIABLE_S_0_17, &STATE_VARIABLE_S_19_19);
    Result0_12 = ((MR_Word) (conv1_Result0_12));
    switch (MR_tag((MR_Word) Result0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_9;
          }
          *STATE_VARIABLE_S_18 = STATE_VARIABLE_S_19_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Result_13 = (MR_hl_field(MR_mktag(1), Result0_12, (MR_Integer) 0));
          MR_Word Continue_14;
          MR_Box T1_15;
          MR_Box STATE_VARIABLE_S_20_20;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
          MR_Box conv3_Continue_14;

          func_2(((MR_Box) (Pred_8)), Result_13, &conv3_Continue_14, T0_9, &T1_15, STATE_VARIABLE_S_19_19, &STATE_VARIABLE_S_20_20);
          Continue_14 = ((MR_Word) (conv3_Continue_14));
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Res_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = T1_15;
                }
                *STATE_VARIABLE_S_18 = STATE_VARIABLE_S_20_20;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;
                MR_Box next_value_of_STATE_VARIABLE_S_0_17 = STATE_VARIABLE_S_20_20;

                // direct tailcall eliminated
                ;
                T0_9 = next_value_of_T0_9;
                STATE_VARIABLE_S_0_17 = next_value_of_STATE_VARIABLE_S_0_17;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Error_16 = (MR_hl_field(MR_mktag(2), Result0_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = Error_16;
          }
          *STATE_VARIABLE_S_18 = STATE_VARIABLE_S_19_19;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__input_stream_fold2_state_maybe_stop_6_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeClassInfo_for_reader_22,
  MR_Box Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10,
  MR_Box STATE_VARIABLE_S_0_17,
  MR_Box * STATE_VARIABLE_S_18)
{
  while (MR_TRUE)
  {
    MR_Word Result0_12;
    MR_Box STATE_VARIABLE_S_19_19;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_22, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Result0_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_reader_22)), Stream_7, &conv1_Result0_12, STATE_VARIABLE_S_0_17, &STATE_VARIABLE_S_19_19);
    Result0_12 = ((MR_Word) (conv1_Result0_12));
    switch (MR_tag((MR_Word) Result0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_9;
          }
          *STATE_VARIABLE_S_18 = STATE_VARIABLE_S_19_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Result_13 = (MR_hl_field(MR_mktag(1), Result0_12, (MR_Integer) 0));
          MR_Word Continue_14;
          MR_Box T1_15;
          MR_Box STATE_VARIABLE_S_20_20;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
          MR_Box conv3_Continue_14;

          func_2(((MR_Box) (Pred_8)), Result_13, &conv3_Continue_14, T0_9, &T1_15, STATE_VARIABLE_S_19_19, &STATE_VARIABLE_S_20_20);
          Continue_14 = ((MR_Word) (conv3_Continue_14));
          switch (Continue_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  *Res_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = T1_15;
                }
                *STATE_VARIABLE_S_18 = STATE_VARIABLE_S_20_20;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box next_value_of_T0_9 = T1_15;
                MR_Box next_value_of_STATE_VARIABLE_S_0_17 = STATE_VARIABLE_S_20_20;

                // direct tailcall eliminated
                ;
                T0_9 = next_value_of_T0_9;
                STATE_VARIABLE_S_0_17 = next_value_of_STATE_VARIABLE_S_0_17;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Error_16 = (MR_hl_field(MR_mktag(2), Result0_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = Error_16;
          }
          *STATE_VARIABLE_S_18 = STATE_VARIABLE_S_19_19;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__input_stream_fold2_state_6_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeClassInfo_for_reader_21,
  MR_Box Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10,
  MR_Box STATE_VARIABLE_S_0_16,
  MR_Box * STATE_VARIABLE_S_17)
{
  while (MR_TRUE)
  {
    MR_Word Result0_12;
    MR_Box STATE_VARIABLE_S_18_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Result0_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_reader_21)), Stream_7, &conv1_Result0_12, STATE_VARIABLE_S_0_16, &STATE_VARIABLE_S_18_18);
    Result0_12 = ((MR_Word) (conv1_Result0_12));
    switch (MR_tag((MR_Word) Result0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_9;
          }
          *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Result_13 = (MR_hl_field(MR_mktag(1), Result0_12, (MR_Integer) 0));
          MR_Box T1_14;
          MR_Box STATE_VARIABLE_S_19_19;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
          MR_Box next_value_of_T0_9;
          MR_Box next_value_of_STATE_VARIABLE_S_0_16;

          func_2(((MR_Box) (Pred_8)), Result_13, T0_9, &T1_14, STATE_VARIABLE_S_18_18, &STATE_VARIABLE_S_19_19);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          next_value_of_STATE_VARIABLE_S_0_16 = STATE_VARIABLE_S_19_19;
          T0_9 = next_value_of_T0_9;
          STATE_VARIABLE_S_0_16 = next_value_of_STATE_VARIABLE_S_0_16;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Error_15 = (MR_hl_field(MR_mktag(2), Result0_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = Error_15;
          }
          *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__input_stream_fold2_state_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeClassInfo_for_reader_21,
  MR_Box Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10,
  MR_Box STATE_VARIABLE_S_0_16,
  MR_Box * STATE_VARIABLE_S_17)
{
  while (MR_TRUE)
  {
    MR_Word Result0_12;
    MR_Box STATE_VARIABLE_S_18_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_21, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Result0_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_reader_21)), Stream_7, &conv1_Result0_12, STATE_VARIABLE_S_0_16, &STATE_VARIABLE_S_18_18);
    Result0_12 = ((MR_Word) (conv1_Result0_12));
    switch (MR_tag((MR_Word) Result0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_9;
          }
          *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Result_13 = (MR_hl_field(MR_mktag(1), Result0_12, (MR_Integer) 0));
          MR_Box T1_14;
          MR_Box STATE_VARIABLE_S_19_19;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
          MR_Box next_value_of_T0_9;
          MR_Box next_value_of_STATE_VARIABLE_S_0_16;

          func_2(((MR_Box) (Pred_8)), Result_13, T0_9, &T1_14, STATE_VARIABLE_S_18_18, &STATE_VARIABLE_S_19_19);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          next_value_of_STATE_VARIABLE_S_0_16 = STATE_VARIABLE_S_19_19;
          T0_9 = next_value_of_T0_9;
          STATE_VARIABLE_S_0_16 = next_value_of_STATE_VARIABLE_S_0_16;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Error_15 = (MR_hl_field(MR_mktag(2), Result0_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = Error_15;
          }
          *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__input_stream_fold_state_5_p_1(
  MR_Word TypeClassInfo_for_reader_18,
  MR_Box Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8,
  MR_Box STATE_VARIABLE_S_0_13,
  MR_Box * STATE_VARIABLE_S_14)
{
  while (MR_TRUE)
  {
    MR_Word Result0_10;
    MR_Box STATE_VARIABLE_S_15_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Result0_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_reader_18)), Stream_6, &conv1_Result0_10, STATE_VARIABLE_S_0_13, &STATE_VARIABLE_S_15_15);
    Result0_10 = ((MR_Word) (conv1_Result0_10));
    switch (MR_tag((MR_Word) Result0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_S_14 = STATE_VARIABLE_S_15_15;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Result_11 = (MR_hl_field(MR_mktag(1), Result0_10, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_S_16_16;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
          MR_Box next_value_of_STATE_VARIABLE_S_0_13;

          func_2(((MR_Box) (Pred_7)), Result_11, STATE_VARIABLE_S_15_15, &STATE_VARIABLE_S_16_16);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_S_0_13 = STATE_VARIABLE_S_16_16;
          STATE_VARIABLE_S_0_13 = next_value_of_STATE_VARIABLE_S_0_13;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Error_12 = (MR_hl_field(MR_mktag(2), Result0_10, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Error_12;
          }
          *STATE_VARIABLE_S_14 = STATE_VARIABLE_S_15_15;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__input_stream_fold_state_5_p_0(
  MR_Word TypeClassInfo_for_reader_18,
  MR_Box Stream_6,
  MR_Word Pred_7,
  MR_Word * Res_8,
  MR_Box STATE_VARIABLE_S_0_13,
  MR_Box * STATE_VARIABLE_S_14)
{
  while (MR_TRUE)
  {
    MR_Word Result0_10;
    MR_Box STATE_VARIABLE_S_15_15;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_18, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Result0_10;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_reader_18)), Stream_6, &conv1_Result0_10, STATE_VARIABLE_S_0_13, &STATE_VARIABLE_S_15_15);
    Result0_10 = ((MR_Word) (conv1_Result0_10));
    switch (MR_tag((MR_Word) Result0_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Res_8 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_S_14 = STATE_VARIABLE_S_15_15;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Result_11 = (MR_hl_field(MR_mktag(1), Result0_10, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_S_16_16;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_7, (MR_Integer) 1))));
          MR_Box next_value_of_STATE_VARIABLE_S_0_13;

          func_2(((MR_Box) (Pred_7)), Result_11, STATE_VARIABLE_S_15_15, &STATE_VARIABLE_S_16_16);
          // direct tailcall eliminated
          ;
          next_value_of_STATE_VARIABLE_S_0_13 = STATE_VARIABLE_S_16_16;
          STATE_VARIABLE_S_0_13 = next_value_of_STATE_VARIABLE_S_0_13;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Error_12 = (MR_hl_field(MR_mktag(2), Result0_10, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Error_12;
          }
          *STATE_VARIABLE_S_14 = STATE_VARIABLE_S_15_15;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__input_stream_fold_6_p_1(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_reader_20,
  MR_Box Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10,
  MR_Box STATE_VARIABLE_S_0_16,
  MR_Box * STATE_VARIABLE_S_17)
{
  while (MR_TRUE)
  {
    MR_Word Result_12;
    MR_Box STATE_VARIABLE_S_18_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Result_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_reader_20)), Stream_7, &conv1_Result_12, STATE_VARIABLE_S_0_16, &STATE_VARIABLE_S_18_18);
    Result_12 = ((MR_Word) (conv1_Result_12));
    switch (MR_tag((MR_Word) Result_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_9;
          }
          *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Unit_13 = (MR_hl_field(MR_mktag(1), Result_12, (MR_Integer) 0));
          MR_Box T1_14;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
          MR_Box next_value_of_T0_9;
          MR_Box next_value_of_STATE_VARIABLE_S_0_16;

          func_2(((MR_Box) (Pred_8)), Unit_13, T0_9, &T1_14);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          next_value_of_STATE_VARIABLE_S_0_16 = STATE_VARIABLE_S_18_18;
          T0_9 = next_value_of_T0_9;
          STATE_VARIABLE_S_0_16 = next_value_of_STATE_VARIABLE_S_0_16;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Error_15 = (MR_hl_field(MR_mktag(2), Result_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = Error_15;
          }
          *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__stream__input_stream_fold_6_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word TypeClassInfo_for_reader_20,
  MR_Box Stream_7,
  MR_Word Pred_8,
  MR_Box T0_9,
  MR_Word * Res_10,
  MR_Box STATE_VARIABLE_S_0_16,
  MR_Box * STATE_VARIABLE_S_17)
{
  while (MR_TRUE)
  {
    MR_Word Result_12;
    MR_Box STATE_VARIABLE_S_18_18;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_reader_20, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_Result_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    func_0(((MR_Box) (TypeClassInfo_for_reader_20)), Stream_7, &conv1_Result_12, STATE_VARIABLE_S_0_16, &STATE_VARIABLE_S_18_18);
    Result_12 = ((MR_Word) (conv1_Result_12));
    switch (MR_tag((MR_Word) Result_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Res_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T0_9;
          }
          *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box Unit_13 = (MR_hl_field(MR_mktag(1), Result_12, (MR_Integer) 0));
          MR_Box T1_14;
          void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_8, (MR_Integer) 1))));
          MR_Box next_value_of_T0_9;
          MR_Box next_value_of_STATE_VARIABLE_S_0_16;

          func_2(((MR_Box) (Pred_8)), Unit_13, T0_9, &T1_14);
          // direct tailcall eliminated
          ;
          next_value_of_T0_9 = T1_14;
          next_value_of_STATE_VARIABLE_S_0_16 = STATE_VARIABLE_S_18_18;
          T0_9 = next_value_of_T0_9;
          STATE_VARIABLE_S_0_16 = next_value_of_STATE_VARIABLE_S_0_16;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box Error_15 = (MR_hl_field(MR_mktag(2), Result_12, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = T0_9;
            MR_hl_field(MR_mktag(1), base, 1) = Error_15;
          }
          *STATE_VARIABLE_S_17 = STATE_VARIABLE_S_18_18;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
mercury__stream____Unify____maybe_partial_res_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__stream____Unify____maybe_partial_res_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__stream____Compare____maybe_partial_res_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__stream____Compare____maybe_partial_res_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__stream____Unify____name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__stream____Unify____name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__stream____Compare____name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__stream____Compare____name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__stream____Unify____res_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__stream____Unify____res_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__stream____Compare____res_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__stream____Compare____res_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__stream____Unify____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__stream____Unify____res_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__stream____Compare____res_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__stream____Compare____res_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__stream____Unify____result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__stream____Unify____result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__stream____Compare____result_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__stream____Compare____result_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__stream____Unify____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__stream____Unify____result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__stream____Compare____result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__stream____Compare____result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__stream____Unify____whence_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__stream____Unify____whence_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__stream____Compare____whence_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__stream____Compare____whence_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__stream__init(void)
{
}

void mercury__stream__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_maybe_partial_res_2);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_name_0);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_res_2);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_res_1);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_result_2);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_result_1);
	MR_register_type_ctor_info(&mercury__stream__stream__type_ctor_info_whence_0);
}

void mercury__stream__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__stream__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module stream.
