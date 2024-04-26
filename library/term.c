/*
** Automatically generated from `term.m'
** by the Mercury compiler,
** version rotd-2024-04-26
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


// :- module term.
// :- implementation.

/*
INIT mercury__term__init
ENDINIT
*/

#include "term.mih"


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
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
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




static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_0;

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[4];

static const MR_ConstString mercury__term__term__field_names_const_0_1[4];

static const MR_DuArgLocn mercury__term__term__field_locns_const_0_1[4];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_1;

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2;

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3;

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4;

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1];

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1];

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1];

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2];

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4];

static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5];

static const MR_Integer mercury__term__term__functor_number_map_const_0[5];

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0;

static const MR_EnumFunctorDescPtr mercury__term__term__enum_ordinal_ordered_generic_0[1];

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1];

static const MR_Integer mercury__term__term__functor_number_map_generic_0[1];

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_0;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_1;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_2;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_3;

static const MR_EnumFunctorDescPtr mercury__term__term__enum_ordinal_ordered_integer_base_0[4];

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_base_0[4];

static const MR_Integer mercury__term__term__functor_number_map_integer_base_0[4];

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_0;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_1;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_2;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_3;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_4;

static const MR_EnumFunctorDescPtr mercury__term__term__enum_ordinal_ordered_integer_size_0[5];

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_size_0[5];

static const MR_Integer mercury__term__term__functor_number_map_integer_size_0[5];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_signedness_0_0;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_signedness_0_1;

static const MR_EnumFunctorDescPtr mercury__term__term__enum_ordinal_ordered_signedness_0[2];

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_signedness_0[2];

static const MR_Integer mercury__term__term__functor_number_map_signedness_0[2];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_0;

static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_1;

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1];

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1];

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2];

static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2];

static const MR_Integer mercury__term__term__functor_number_map_term_1[2];

static const MR_Integer mercury__term__term__functor_number_map_var_1[1];

static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1;

static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1];

static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1;

static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____integer_base_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____integer_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____integer_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____signedness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____signedness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box mercury__term_scalar_common_1[3][2];

static /* final */ const MR_Box mercury__term_scalar_common_2[3][3];

static /* final */ const MR_Box mercury__term_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__term_scalar_common_4[1][5];




static /* final */ const MR_Box mercury__term_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__term_scalar_common_1[0])),
    ((MR_Box) (&mercury__term_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__term_scalar_common_1[0])),
    ((MR_Box) (&mercury__term_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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


static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_0 = {
  (MR_String) "atom",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term__term__field_types_const_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[4] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_integer_base_0),
  (MR_PseudoTypeInfo) (&mercury__integer__integer__type_ctor_info_integer_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_signedness_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_integer_size_0)
};

static const MR_ConstString mercury__term__term__field_names_const_0_1[4] = {
  (MR_String) "integer_base",
  (MR_String) "integer_value",
  (MR_String) "integer_signedness",
  (MR_String) "integer_size"
};

static const MR_DuArgLocn mercury__term__term__field_locns_const_0_1[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_1 = {
  (MR_String) "integer",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__term__term__field_types_const_0_1,
  mercury__term__term__field_names_const_0_1,
  mercury__term__term__field_locns_const_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2 = {
  (MR_String) "string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__term__term__field_types_const_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0) };

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3 = {
  (MR_String) "float",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__term__term__field_types_const_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4 = {
  (MR_String) "implementation_defined",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__term__term__field_types_const_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1] = { &mercury__term__term__du_functor_desc_const_0_0 };

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1] = { &mercury__term__term__du_functor_desc_const_0_1 };

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1] = { &mercury__term__term__du_functor_desc_const_0_2 };

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4
};

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__term__term__du_stag_ordered_const_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[5] = {
  &mercury__term__term__du_functor_desc_const_0_0,
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_1,
  &mercury__term__term__du_functor_desc_const_0_2
};

static const MR_Integer mercury__term__term__functor_number_map_const_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_const_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____const_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____const_0_0_10001)),
  (MR_String) "term",
  (MR_String) "const",
  { mercury__term__term__du_name_ordered_const_0 },
  { mercury__term__term__du_ptag_ordered_const_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mercury__term__term__functor_number_map_const_0,

};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____context_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____context_0_0_10001)),
  (MR_String) "term",
  (MR_String) "context",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_ordinal_ordered_generic_0[1] = { &mercury__term__term__enum_functor_desc_generic_0_0 };

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1] = { &mercury__term__term__enum_functor_desc_generic_0_0 };

static const MR_Integer mercury__term__term__functor_number_map_generic_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_generic_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__term____Unify____generic_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____generic_0_0_10001)),
  (MR_String) "term",
  (MR_String) "generic",
  { mercury__term__term__enum_name_ordered_generic_0 },
  { mercury__term__term__enum_ordinal_ordered_generic_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__term__term__functor_number_map_generic_0,

};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_0 = {
  (MR_String) "base_2",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_1 = {
  (MR_String) "base_8",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_2 = {
  (MR_String) "base_10",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_3 = {
  (MR_String) "base_16",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_ordinal_ordered_integer_base_0[4] = {
  &mercury__term__term__enum_functor_desc_integer_base_0_0,
  &mercury__term__term__enum_functor_desc_integer_base_0_1,
  &mercury__term__term__enum_functor_desc_integer_base_0_2,
  &mercury__term__term__enum_functor_desc_integer_base_0_3
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_base_0[4] = {
  &mercury__term__term__enum_functor_desc_integer_base_0_2,
  &mercury__term__term__enum_functor_desc_integer_base_0_3,
  &mercury__term__term__enum_functor_desc_integer_base_0_0,
  &mercury__term__term__enum_functor_desc_integer_base_0_1
};

static const MR_Integer mercury__term__term__functor_number_map_integer_base_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_integer_base_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term____Unify____integer_base_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____integer_base_0_0_10001)),
  (MR_String) "term",
  (MR_String) "integer_base",
  { mercury__term__term__enum_name_ordered_integer_base_0 },
  { mercury__term__term__enum_ordinal_ordered_integer_base_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__term__term__functor_number_map_integer_base_0,

};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_0 = {
  (MR_String) "size_word",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_1 = {
  (MR_String) "size_8_bit",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_2 = {
  (MR_String) "size_16_bit",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_3 = {
  (MR_String) "size_32_bit",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_4 = {
  (MR_String) "size_64_bit",
  INT32_C(4)
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_ordinal_ordered_integer_size_0[5] = {
  &mercury__term__term__enum_functor_desc_integer_size_0_0,
  &mercury__term__term__enum_functor_desc_integer_size_0_1,
  &mercury__term__term__enum_functor_desc_integer_size_0_2,
  &mercury__term__term__enum_functor_desc_integer_size_0_3,
  &mercury__term__term__enum_functor_desc_integer_size_0_4
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_size_0[5] = {
  &mercury__term__term__enum_functor_desc_integer_size_0_2,
  &mercury__term__term__enum_functor_desc_integer_size_0_3,
  &mercury__term__term__enum_functor_desc_integer_size_0_4,
  &mercury__term__term__enum_functor_desc_integer_size_0_1,
  &mercury__term__term__enum_functor_desc_integer_size_0_0
};

static const MR_Integer mercury__term__term__functor_number_map_integer_size_0[5] = {
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_integer_size_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term____Unify____integer_size_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____integer_size_0_0_10001)),
  (MR_String) "term",
  (MR_String) "integer_size",
  { mercury__term__term__enum_name_ordered_integer_size_0 },
  { mercury__term__term__enum_ordinal_ordered_integer_size_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mercury__term__term__functor_number_map_integer_size_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__term__term__pti_var_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_renaming_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____renaming_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_1_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__term__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&mercury__term__term__ti_var_1term__type_ctor_info_generic_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_renaming_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____renaming_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_0_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_signedness_0_0 = {
  (MR_String) "signed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_signedness_0_1 = {
  (MR_String) "unsigned",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_ordinal_ordered_signedness_0[2] = {
  &mercury__term__term__enum_functor_desc_signedness_0_0,
  &mercury__term__term__enum_functor_desc_signedness_0_1
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_signedness_0[2] = {
  &mercury__term__term__enum_functor_desc_signedness_0_0,
  &mercury__term__term__enum_functor_desc_signedness_0_1
};

static const MR_Integer mercury__term__term__functor_number_map_signedness_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_signedness_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term____Unify____signedness_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____signedness_0_0_10001)),
  (MR_String) "term",
  (MR_String) "signedness",
  { mercury__term__term__enum_name_ordered_signedness_0 },
  { mercury__term__term__enum_ordinal_ordered_signedness_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term__term__functor_number_map_signedness_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__pti_var_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__term__term__pti_term_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_substitution_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____substitution_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_1_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  { (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0) }
};

static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__term__term__ti_var_1term__type_ctor_info_generic_0),
    (MR_TypeInfo) (&mercury__term__term__ti_term_1term__type_ctor_info_generic_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_substitution_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____substitution_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_0_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__term__term__pti_term_1__pseudo_1) }
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_const_0),
  (MR_PseudoTypeInfo) (&mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_0 = {
  (MR_String) "functor",
  INT16_C(3),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term__term__field_types_term_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__pti_var_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_1 = {
  (MR_String) "variable",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__term__term__field_types_term_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = { &mercury__term__term__du_functor_desc_term_1_0 };

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = { &mercury__term__term__du_functor_desc_term_1_1 };

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_term_1[2] = {
  &mercury__term__term__du_functor_desc_term_1_0,
  &mercury__term__term__du_functor_desc_term_1_1
};

static const MR_Integer mercury__term__term__functor_number_map_term_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____term_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_1_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  { mercury__term__term__du_name_ordered_term_1 },
  { mercury__term__term__du_ptag_ordered_term_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__term__term__functor_number_map_term_1,

};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____term_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_0_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term__term__ti_term_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  { &mercury__term__term__notag_functor_desc_var_1 },
  { &mercury__term__term__notag_functor_desc_var_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__term__term__functor_number_map_var_1,

};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____var_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_0_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__term__term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_supply_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_supply_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_supply_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var_supply",
  { &mercury__term__term__notag_functor_desc_var_supply_1 },
  { &mercury__term__term__notag_functor_desc_var_supply_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__term__term__functor_number_map_var_supply_1,

};

const MR_BaseTypeclassInfo base_typeclass_info_enum__uenum__arity1__term__var__arity1__[7] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__to_uint_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__from_uint_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__term__var__arity1__[7] = {
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001))
};

void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0(void)
{
}

MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__from_uint_2_2_p_0(
  MR_Word TypeInfo_3_3,
  MR_Unsigned HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_Integer Var_4;

{
#define MR_PROC_LABEL mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__from_uint_2_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = HeadVar__1_1 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_4  = I;
}
  *HeadVar__2_2 = (MR_Word) (Var_4);
  return MR_TRUE;
}

MR_Unsigned MR_CALL 
mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__to_uint_1_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Word HeadVar__1_1)
{
  MR_Unsigned HeadVar__2_2;
  MR_Integer VarNum_4 = (MR_Integer) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__to_uint_1_1_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = VarNum_4 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = U;
}
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Integer HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) (HeadVar__1_1);
  return MR_TRUE;
}

MR_Integer MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(
  MR_Word TypeInfo_3_3,
  MR_Word HeadVar__1_1)
{
  MR_Integer HeadVar__2_2 = (MR_Integer) (HeadVar__1_1);

  return HeadVar__2_2;
}

void MR_CALL 
mercury__term____Compare____var_supply_1_0(
  MR_Word TypeInfo_for_T_8,
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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

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
mercury__term____Unify____var_supply_1_0(
  MR_Word TypeInfo_for_T_7,
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__term____Unify____var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;
  MR_Integer CastX_8 = (MR_Integer) (Cast_HeadVar1_3);
  MR_Integer CastY_9 = (MR_Integer) (Cast_HeadVar2_4);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Integer ArgX1_6 = (MR_Integer) (Cast_HeadVar1_3);
    MR_Integer ArgY1_7 = (MR_Integer) (Cast_HeadVar2_4);

    succeeded = (ArgX1_6 == ArgY1_7);
  }
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____var_1_0(
  MR_Word TypeInfo_for_T_8,
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
    MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

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
mercury__term____Unify____var_1_0(
  MR_Word TypeInfo_for_T_7,
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
    MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__term____Unify____term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__term____Unify____term_1_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____term_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__term____Compare____const_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Word TypeInfo_25_25;

        {
          TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_19));
        }
        mercury__list____Compare____list_1_0(TypeInfo_25_25, &SubResult2_9, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_14;
    MR_Integer Var_29 = (MR_Integer) (ArgX1_12);
    MR_Integer Var_30 = (MR_Integer) (ArgY1_13);

    succeeded = (Var_29 < Var_30);
    if (succeeded)
      SubResult1_14 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_29 == Var_30);
      if (succeeded)
        SubResult1_14 = (MR_Integer) 0;
      else
        SubResult1_14 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_14 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_14;
    else
      mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX2_15, ArgY2_16);
  }
}

MR_bool MR_CALL 
mercury__term____Unify____term_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = mercury__term____Unify____const_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeCtorInfo_16_16 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
        {
          TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
          MR_hl_field(0, TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
        }
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_17_17, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
        if (succeeded)
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX3_7, ArgY3_8);
      }
    }
  }
  else
  {
    MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_10;
    MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_12;
    MR_Integer CastX_24;
    MR_Integer CastY_25;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      CastX_24 = (MR_Integer) (ArgX1_9);
      CastY_25 = (MR_Integer) (ArgY1_10);
      succeeded = (CastX_24 == CastY_25);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_22 = (MR_Integer) (ArgX1_9);
        MR_Integer ArgY1_23 = (MR_Integer) (ArgY1_10);

        succeeded = (ArgX1_22 == ArgY1_23);
      }
      if (succeeded)
        succeeded = mercury__term_context____Unify____term_context_0_0(ArgX2_11, ArgY2_12);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____substitution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__term_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____substitution_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word TypeInfo_10_10;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__tree234____Compare____tree234_2_0(TypeInfo_8_8, TypeInfo_10_10, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word TypeInfo_9_9;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
    MR_hl_field(0, TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_7_7, TypeInfo_9_9, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____signedness_0_0(
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
mercury__term____Unify____signedness_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__term____Compare____renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__term_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____renaming_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__tree234____Compare____tree234_2_0(TypeInfo_8_8, TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_7_7, TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____integer_size_0_0(
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
mercury__term____Unify____integer_size_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__term____Compare____integer_base_0_0(
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
mercury__term____Unify____integer_base_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__term____Compare____generic_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__term____Unify____generic_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__term____Compare____context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__term____Unify____context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__term_context____Unify____term_context_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__term____Compare____const_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer Var_43;

{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_43  = Res;
}
              succeeded = (Var_43 < (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_43 == (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word ArgX3_12 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
              MR_Word ArgY3_13 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
              MR_Word ArgX4_15 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word ArgY4_16 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word SubResult1_8;
              MR_Integer Var_33 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_34 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_33 < Var_34);
              if (succeeded)
                SubResult1_8 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_33 == Var_34);
                if (succeeded)
                  SubResult1_8 = (MR_Integer) 0;
                else
                  SubResult1_8 = (MR_Integer) 2;
              }
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
              {
                MR_Word SubResult2_11;

                mercury__integer____Compare____integer_0_0(&SubResult2_11, ArgX2_9, ArgY2_10);
                succeeded = (SubResult2_11 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult2_11;
                else
                {
                  MR_Word SubResult3_14;
                  MR_Integer Var_35 = (MR_Integer) (ArgX3_12);
                  MR_Integer Var_36 = (MR_Integer) (ArgY3_13);

                  succeeded = (Var_35 < Var_36);
                  if (succeeded)
                    SubResult3_14 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_35 == Var_36);
                    if (succeeded)
                      SubResult3_14 = (MR_Integer) 0;
                    else
                      SubResult3_14 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult3_14 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult3_14;
                  else
                  {
                    MR_Integer Var_37 = (MR_Integer) (ArgX4_15);
                    MR_Integer Var_38 = (MR_Integer) (ArgY4_16);

                    succeeded = (Var_37 < Var_38);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_37 == Var_38);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *HeadVar__1_1 = (MR_Integer) 2;
                    }
                  }
                }
              }
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_18 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Integer Var_41;

{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_17 ;
	S2 = ArgY1_18 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_41  = Res;
}
              succeeded = (Var_41 < (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_41 == (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 0;
                else
                  *HeadVar__1_1 = (MR_Integer) 2;
              }
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Float ArgX1_19 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                      MR_Float ArgY1_20 = MR_unbox_float((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                      succeeded = (ArgX1_19 < ArgY1_20);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_19 > ArgY1_20);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
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
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_String ArgY1_22 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Integer Var_39;

{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_21 ;
	S2 = ArgY1_22 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_39  = Res;
}
                      succeeded = (Var_39 < (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_39 == (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 0;
                        else
                          *HeadVar__1_1 = (MR_Integer) 2;
                      }
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__term____Unify____const_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          MR_Word ArgY3_10;
          MR_Word ArgX4_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 7);
          MR_Word ArgY4_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
            ArgY4_12 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);
            succeeded = (ArgX1_5 == ArgY1_6);
            if (succeeded)
            {
              succeeded = mercury__integer____Unify____integer_0_0(ArgX2_7, ArgY2_8);
              if (succeeded)
              {
                succeeded = (ArgX3_9 == ArgY3_10);
                if (succeeded)
                  succeeded = (ArgX4_11 == ArgY4_12);
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Float ArgX1_15 = MR_unbox_float((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              MR_Float ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_16 = MR_unbox_float((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__term__unsafe_uint_to_var_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Unsigned UVarNum_3,
  MR_Word * HeadVar__2_2)
{
  MR_Integer Var_4;

{
#define MR_PROC_LABEL mercury__term__unsafe_uint_to_var_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = UVarNum_3 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_4  = I;
}
  *HeadVar__2_2 = (MR_Word) (Var_4);
}

MR_Word MR_CALL 
mercury__term__unsafe_int_to_var_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer VarNum_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (VarNum_3);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__term__force_construct_var_supply_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer V_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (V_3);

  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__term__force_construct_var_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer V_3)
{
  MR_Word HeadVar__2_2 = (MR_Word) (V_3);

  return HeadVar__2_2;
}

MR_Integer MR_CALL 
mercury__term__var_supply_num_allocated_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  MR_Integer V_3 = (MR_Integer) (HeadVar__1_1);

  return V_3;
}

MR_Word MR_CALL 
mercury__term__var_supply_max_var_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Integer V_3 = (MR_Integer) (HeadVar__1_1);

  HeadVar__2_2 = (MR_Word) (V_3);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__term__contains_var_list_2_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Word Terms_3,
  MR_Word * Var_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__term_vars__terms_contain_var_2_p_1(TypeInfo_for_T_5, Terms_3, Var_4, cont, cont_env_ptr);
}

MR_bool MR_CALL 
mercury__term__contains_var_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Terms_3,
  MR_Word Var_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_vars__terms_contain_var_2_p_0(TypeInfo_for_T_5, Terms_3, Var_4);
  return succeeded;
}

void MR_CALL 
mercury__term__contains_var_2_p_1(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  MR_Word * Var_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));

    mercury__term_vars__terms_contain_var_2_p_1(TypeInfo_for_T_5, Var_9, Var_4, cont, cont_env_ptr);
  }
  else
  {
    *Var_4 = ((MR_Word) ((MR_hl_field(1, Term_3, (MR_Integer) 0))));
    cont(cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__term__contains_var_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  MR_Word Var_4)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 1))));

    succeeded = mercury__term_vars__terms_contain_var_2_p_0(TypeInfo_for_T_5, Var_9, Var_4);
  }
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, Term_3, (MR_Integer) 0))));
    MR_Integer CastX_14 = (MR_Integer) (Var_4);
    MR_Integer CastY_15 = (MR_Integer) (Var_6);

    succeeded = (CastX_14 == CastY_15);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_12 = (MR_Integer) (Var_4);
      MR_Integer ArgY1_13 = (MR_Integer) (Var_6);

      succeeded = (ArgX1_12 == ArgY1_13);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__term__vars_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Terms_3,
  MR_Word * Vars_4)
{
  mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_5, Terms_3, (MR_Word) ((MR_Unsigned) 0U), Vars_4);
}

MR_Word MR_CALL 
mercury__term__vars_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Terms_3)
{
  MR_Word HeadVar__2_2;

  mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_4, Terms_3, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__2_2);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__term__vars_2_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_Acc_0_6,
  MR_Word * STATE_VARIABLE_Acc_7)
{
  mercury__term_vars__vars_in_term_acc_3_p_0(TypeInfo_for_T_8, Term_4, STATE_VARIABLE_Acc_0_6, STATE_VARIABLE_Acc_7);
}

MR_Word MR_CALL 
mercury__term__vars_2_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_Acc_0_6)
{
  MR_Word STATE_VARIABLE_Acc_7;

  mercury__term_vars__vars_in_term_acc_3_p_0(TypeInfo_for_T_8, Term_4, STATE_VARIABLE_Acc_0_6, &STATE_VARIABLE_Acc_7);
  return STATE_VARIABLE_Acc_7;
}

void MR_CALL 
mercury__term__vars_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  MR_Word * Vars_4)
{
  mercury__term_vars__vars_in_term_acc_3_p_0(TypeInfo_for_T_5, Term_3, (MR_Word) ((MR_Unsigned) 0U), Vars_4);
}

MR_Word MR_CALL 
mercury__term__vars_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Term_3)
{
  MR_Word HeadVar__2_2;

  mercury__term_vars__vars_in_term_acc_3_p_0(TypeInfo_for_T_4, Term_3, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__term__list_subsumes_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word TermsX_4,
  MR_Word TermsY_5,
  MR_Word * Subst_6)
{
  MR_bool succeeded;
  MR_Word Var_8;

  mercury__term_vars__vars_in_terms_acc_3_p_0(TypeInfo_for_T_7, TermsY_5, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
  succeeded = mercury__term_unify__unify_term_lists_dont_bind_5_p_0(TypeInfo_for_T_7, TermsX_4, TermsY_5, Var_8, (MR_Word) ((MR_Unsigned) 0U), Subst_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__unify_term_list_dont_bind_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word TermsX_6,
  MR_Word TermsY_7,
  MR_Word DontBindVars_8,
  MR_Word STATE_VARIABLE_Subst_0_10,
  MR_Word * STATE_VARIABLE_Subst_11)
{
  MR_bool succeeded;

  succeeded = mercury__term_unify__unify_term_lists_dont_bind_5_p_0(TypeInfo_for_T_12, TermsX_6, TermsY_7, DontBindVars_8, STATE_VARIABLE_Subst_0_10, STATE_VARIABLE_Subst_11);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__unify_term_dont_bind_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word TermX_6,
  MR_Word TermY_7,
  MR_Word DontBindVars_8,
  MR_Word STATE_VARIABLE_Subst_0_10,
  MR_Word * STATE_VARIABLE_Subst_11)
{
  MR_bool succeeded;

  succeeded = mercury__term_unify__unify_terms_dont_bind_5_p_0(TypeInfo_for_T_12, TermX_6, TermY_7, DontBindVars_8, STATE_VARIABLE_Subst_0_10, STATE_VARIABLE_Subst_11);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__unify_term_list_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TermsX_5,
  MR_Word TermsY_6,
  MR_Word STATE_VARIABLE_Subst_0_8,
  MR_Word * STATE_VARIABLE_Subst_9)
{
  MR_bool succeeded;

  succeeded = mercury__term_unify__unify_term_lists_4_p_0(TypeInfo_for_T_10, TermsX_5, TermsY_6, STATE_VARIABLE_Subst_0_8, STATE_VARIABLE_Subst_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__unify_term_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word TermX_5,
  MR_Word TermY_6,
  MR_Word STATE_VARIABLE_Subst_0_8,
  MR_Word * STATE_VARIABLE_Subst_9)
{
  MR_bool succeeded;

  succeeded = mercury__term_unify__unify_terms_4_p_0(TypeInfo_for_T_10, TermX_5, TermY_6, STATE_VARIABLE_Subst_0_8, STATE_VARIABLE_Subst_9);
  return succeeded;
}

void MR_CALL 
mercury__term__var_list_to_term_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Vars_3,
  MR_Word * Terms_4)
{
  mercury__term_subst__var_list_to_term_list_2_p_0(TypeInfo_for_T_5, Vars_3, Terms_4);
}

MR_Word MR_CALL 
mercury__term__var_list_to_term_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Vars_3)
{
  MR_Word HeadVar__2_2;

  mercury__term_subst__var_list_to_term_list_2_p_0(TypeInfo_for_T_4, Vars_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__term__term_list_to_var_list_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Terms_3,
  MR_Word * Vars_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_subst__term_list_to_var_list_2_p_0(TypeInfo_for_T_5, Terms_3, Vars_4);
  return succeeded;
}

MR_Word MR_CALL 
mercury__term__term_list_to_var_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word Terms_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__term_subst__term_list_to_var_list_1_f_0(TypeInfo_for_T_4, Terms_3);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__term__apply_rec_substitution_in_terms_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Terms_0_6,
  MR_Word * STATE_VARIABLE_Terms_7)
{
  mercury__term_subst__apply_rec_substitution_in_terms_3_p_0(TypeInfo_for_T_8, Subst_4, STATE_VARIABLE_Terms_0_6, STATE_VARIABLE_Terms_7);
}

void MR_CALL 
mercury__term__apply_rec_substitution_in_term_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Term_0_6,
  MR_Word * STATE_VARIABLE_Term_7)
{
  mercury__term_subst__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_8, Subst_4, STATE_VARIABLE_Term_0_6, STATE_VARIABLE_Term_7);
}

void MR_CALL 
mercury__term__apply_substitution_in_terms_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Terms_0_6,
  MR_Word * STATE_VARIABLE_Terms_7)
{
  mercury__term_subst__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_8, Subst_4, STATE_VARIABLE_Terms_0_6, STATE_VARIABLE_Terms_7);
}

void MR_CALL 
mercury__term__apply_substitution_in_term_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Subst_4,
  MR_Word STATE_VARIABLE_Term_0_6,
  MR_Word * STATE_VARIABLE_Term_7)
{
  mercury__term_subst__apply_substitution_in_term_3_p_0(TypeInfo_for_T_8, Subst_4, STATE_VARIABLE_Term_0_6, STATE_VARIABLE_Term_7);
}

void MR_CALL 
mercury__term__substitute_corresponding_in_terms_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Var_5,
  MR_Word ReplacementTerm_6,
  MR_Word STATE_VARIABLE_Terms_0_8,
  MR_Word * STATE_VARIABLE_Terms_9)
{
  MR_Word Var_12;

  mercury__term_subst__build_subst_4_p_0(TypeInfo_for_T_10, Var_5, ReplacementTerm_6, (MR_Word) ((MR_Unsigned) 0U), &Var_12);
  mercury__term_subst__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_10, Var_12, STATE_VARIABLE_Terms_0_8, STATE_VARIABLE_Terms_9);
}

void MR_CALL 
mercury__term__substitute_corresponding_in_term_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Var_5,
  MR_Word ReplacementTerm_6,
  MR_Word STATE_VARIABLE_Term_0_8,
  MR_Word * STATE_VARIABLE_Term_9)
{
  MR_Word Var_12;

  mercury__term_subst__build_subst_4_p_0(TypeInfo_for_T_10, Var_5, ReplacementTerm_6, (MR_Word) ((MR_Unsigned) 0U), &Var_12);
  mercury__term_subst__apply_substitution_in_term_3_p_0(TypeInfo_for_T_10, Var_12, STATE_VARIABLE_Term_0_8, STATE_VARIABLE_Term_9);
}

void MR_CALL 
mercury__term__substitute_var_in_terms_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Var_5,
  MR_Word ReplacementTerm_6,
  MR_Word STATE_VARIABLE_Terms_0_8,
  MR_Word * STATE_VARIABLE_Terms_9)
{
  mercury__term_subst__substitute_var_in_terms_4_p_0(TypeInfo_for_T_10, Var_5, ReplacementTerm_6, STATE_VARIABLE_Terms_0_8, STATE_VARIABLE_Terms_9);
}

void MR_CALL 
mercury__term__substitute_var_in_term_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Var_5,
  MR_Word ReplacementTerm_6,
  MR_Word STATE_VARIABLE_Term_0_8,
  MR_Word * STATE_VARIABLE_Term_9)
{
  mercury__term_subst__substitute_var_in_term_4_p_0(TypeInfo_for_T_10, Var_5, ReplacementTerm_6, STATE_VARIABLE_Term_0_8, STATE_VARIABLE_Term_9);
}

void MR_CALL 
mercury__term__apply_renaming_in_terms_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Terms_0_6,
  MR_Word * STATE_VARIABLE_Terms_7)
{
  mercury__term_subst__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_8, Renaming_4, STATE_VARIABLE_Terms_0_6, STATE_VARIABLE_Terms_7);
}

void MR_CALL 
mercury__term__apply_renaming_in_term_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Term_0_6,
  MR_Word * STATE_VARIABLE_Term_7)
{
  mercury__term_subst__apply_renaming_in_term_3_p_0(TypeInfo_for_T_8, Renaming_4, STATE_VARIABLE_Term_0_6, STATE_VARIABLE_Term_7);
}

void MR_CALL 
mercury__term__apply_renaming_in_vars_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Vars_0_6,
  MR_Word * STATE_VARIABLE_Vars_7)
{
  mercury__term_subst__apply_renaming_in_vars_3_p_0(TypeInfo_for_T_8, Renaming_4, STATE_VARIABLE_Vars_0_6, STATE_VARIABLE_Vars_7);
}

void MR_CALL 
mercury__term__apply_renaming_in_var_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Renaming_4,
  MR_Word STATE_VARIABLE_Var_0_6,
  MR_Word * STATE_VARIABLE_Var_7)
{
  MR_bool succeeded;
  MR_Word Var_9;
  MR_Word TypeInfo_10_11;
  MR_Box conv0_Var_9;

  {
    TypeInfo_10_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_10_11, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
    MR_hl_field(0, TypeInfo_10_11, 1) = ((MR_Box) (TypeInfo_for_T_8));
  }
  succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_116_101_114_109_46_118_97_114_40_65_110_111_110_49_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_8, TypeInfo_10_11, TypeInfo_10_11, (MR_Word) (Renaming_4), STATE_VARIABLE_Var_0_6, &conv0_Var_9);
  if (succeeded)
  {
    Var_9 = ((MR_Word) (conv0_Var_9));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *STATE_VARIABLE_Var_7 = Var_9;
  else
    *STATE_VARIABLE_Var_7 = STATE_VARIABLE_Var_0_6;
}

void MR_CALL 
mercury__term__rename_var_in_terms_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Var_5,
  MR_Word ReplacementVar_6,
  MR_Word STATE_VARIABLE_Terms_0_8,
  MR_Word * STATE_VARIABLE_Terms_9)
{
  mercury__term_subst__rename_var_in_terms_4_p_0(TypeInfo_for_T_10, Var_5, ReplacementVar_6, STATE_VARIABLE_Terms_0_8, STATE_VARIABLE_Terms_9);
}

void MR_CALL 
mercury__term__rename_var_in_term_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Var_5,
  MR_Word ReplacementVar_6,
  MR_Word STATE_VARIABLE_Term_0_8,
  MR_Word * STATE_VARIABLE_Term_9)
{
  mercury__term_subst__rename_var_in_term_4_p_0(TypeInfo_for_T_10, Var_5, ReplacementVar_6, STATE_VARIABLE_Term_0_8, STATE_VARIABLE_Term_9);
}

MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  MR_Word Subst_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_subst__term_is_ground_in_bindings_2_p_0(TypeInfo_for_T_5, Term_3, Subst_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__is_ground_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word Term_2)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Term_2)) == (MR_Integer) 0);
  MR_Word Var_5;

  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(0, Term_2, (MR_Integer) 1))));
    succeeded = mercury__term_subst__terms_are_ground_1_p_0(TypeInfo_for_T_3, Var_5);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__occurs_list_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Terms_4,
  MR_Word Var_5,
  MR_Word Subst_6)
{
  MR_bool succeeded;

  succeeded = mercury__term_subst__var_occurs_in_subst_terms_3_p_0(TypeInfo_for_T_7, Var_5, Subst_6, Terms_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__occurs_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term_4,
  MR_Word Var_5,
  MR_Word Subst_6)
{
  MR_bool succeeded;

  succeeded = mercury__term_subst__var_occurs_in_subst_term_3_p_0(TypeInfo_for_T_7, Var_5, Subst_6, Term_4);
  return succeeded;
}

MR_Word MR_CALL 
mercury__term__uint64_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  uint64_t UInt64_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__uint64_to_decimal_term_2_f_0(TypeInfo_for_T_6, UInt64_4, Context_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__term__uint32_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  uint32_t UInt32_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__uint32_to_decimal_term_2_f_0(TypeInfo_for_T_6, UInt32_4, Context_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__term__uint16_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  uint16_t UInt16_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__uint16_to_decimal_term_2_f_0(TypeInfo_for_T_6, UInt16_4, Context_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__term__uint8_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  uint8_t UInt8_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__uint8_to_decimal_term_2_f_0(TypeInfo_for_T_6, UInt8_4, Context_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__term__uint_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Unsigned UInt_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__uint_to_decimal_term_2_f_0(TypeInfo_for_T_6, UInt_4, Context_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__term__int64_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  int64_t Int64_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__int64_to_decimal_term_2_f_0(TypeInfo_for_T_6, Int64_4, Context_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__term__int32_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  int32_t Int32_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__int32_to_decimal_term_2_f_0(TypeInfo_for_T_6, Int32_4, Context_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__term__int16_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  int16_t Int16_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__int16_to_decimal_term_2_f_0(TypeInfo_for_T_6, Int16_4, Context_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__term__int8_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  int8_t Int8_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__int8_to_decimal_term_2_f_0(TypeInfo_for_T_6, Int8_4, Context_5);
  return HeadVar__3_3;
}

MR_Word MR_CALL 
mercury__term__int_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Integer Int_4,
  MR_Word Context_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__term_int__int_to_decimal_term_2_f_0(TypeInfo_for_T_6, Int_4, Context_5);
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__term__term_to_uint64_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  uint64_t * UInt64_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_uint64_2_p_0(TypeInfo_for_T_5, Term_3, UInt64_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__term_to_uint32_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  uint32_t * UInt32_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_uint32_2_p_0(TypeInfo_for_T_5, Term_3, UInt32_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__term_to_uint16_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  uint16_t * UInt16_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_uint16_2_p_0(TypeInfo_for_T_5, Term_3, UInt16_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__term_to_uint8_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  uint8_t * UInt8_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_uint8_2_p_0(TypeInfo_for_T_5, Term_3, UInt8_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__term_to_uint_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  MR_Unsigned * UInt_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_uint_2_p_0(TypeInfo_for_T_5, Term_3, UInt_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__term_to_int64_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  int64_t * Int64_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_int64_2_p_0(TypeInfo_for_T_5, Term_3, Int64_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__term_to_int32_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  int32_t * Int32_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_int32_2_p_0(TypeInfo_for_T_5, Term_3, Int32_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__term_to_int16_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  int16_t * Int16_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_int16_2_p_0(TypeInfo_for_T_5, Term_3, Int16_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__term_to_int8_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  int8_t * Int8_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_int8_2_p_0(TypeInfo_for_T_5, Term_3, Int8_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__term_to_int_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  MR_Integer * Int_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__term_to_int_2_p_0(TypeInfo_for_T_5, Term_3, Int_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__term__decimal_term_to_int_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3,
  MR_Integer * Int_4)
{
  MR_bool succeeded;

  succeeded = mercury__term_int__decimal_term_to_int_2_p_0(TypeInfo_for_T_5, Term_3, Int_4);
  return succeeded;
}

void MR_CALL 
mercury__term__context_line_2_p_0(
  MR_Word Context_3,
  MR_Integer * LineNumber_4)
{
  *LineNumber_4 = ((MR_Integer) ((MR_hl_field(0, Context_3, (MR_Integer) 1))));
}

MR_Integer MR_CALL 
mercury__term__context_line_1_f_0(
  MR_Word Context_3)
{
  MR_Integer LineNumber_4 = ((MR_Integer) ((MR_hl_field(0, Context_3, (MR_Integer) 1))));

  return LineNumber_4;
}

void MR_CALL 
mercury__term__context_file_2_p_0(
  MR_Word Context_3,
  MR_String * FileName_4)
{
  *FileName_4 = ((MR_String) ((MR_hl_field(0, Context_3, (MR_Integer) 0))));
}

MR_String MR_CALL 
mercury__term__context_file_1_f_0(
  MR_Word Context_3)
{
  MR_String FileName_4 = ((MR_String) ((MR_hl_field(0, Context_3, (MR_Integer) 0))));

  return FileName_4;
}

MR_bool MR_CALL 
mercury__term__is_dummy_context_1_p_0(
  MR_Word Context_2)
{
  MR_bool succeeded;

  succeeded = mercury__term_context____Unify____term_context_0_0(Context_2, (MR_Word) (&mercury__term_scalar_common_1[2]));
  return succeeded;
}

void MR_CALL 
mercury__term__context_init_1_p_0(
  MR_Word * Context_2)
{
  *Context_2 = (MR_Word) (&mercury__term_scalar_common_1[2]);
}

MR_Word MR_CALL 
mercury__term__context_init_0_f_0(void)
{
  return (MR_Word) (&mercury__term_scalar_common_1[2]);
}

MR_Word MR_CALL 
mercury__term__dummy_context_init_0_f_0(void)
{
  return (MR_Word) (&mercury__term_scalar_common_1[2]);
}

void MR_CALL 
mercury__term__context_init_3_p_0(
  MR_String FileName_4,
  MR_Integer LineNumber_5,
  MR_Word * Context_6)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Context_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FileName_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (LineNumber_5));
  }
}

MR_Word MR_CALL 
mercury__term__context_init_2_f_0(
  MR_String FileName_4,
  MR_Integer LineNumber_5)
{
  MR_Word Context_6;

  {
    Context_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Context_6, 0) = ((MR_Box) (FileName_4));
    MR_hl_field(0, Context_6, 1) = ((MR_Box) (LineNumber_5));
  }
  return Context_6;
}

MR_Word MR_CALL 
mercury__term__get_term_context_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Term_3)
{
  MR_Word Context_4;

  if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
    Context_4 = ((MR_Word) ((MR_hl_field(0, Term_3, (MR_Integer) 2))));
  else
    Context_4 = ((MR_Word) ((MR_hl_field(1, Term_3, (MR_Integer) 1))));
  return Context_4;
}

void MR_CALL 
mercury__term__coerce_var_supply_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word TypeInfo_for_U_5,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__term__coerce_var_supply_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_U_6,
  MR_Word VarSupplyTypeA_3)
{
  MR_Word VarSupplyTypeB_4 = VarSupplyTypeA_3;

  return VarSupplyTypeB_4;
}

void MR_CALL 
mercury__term__coerce_var_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word TypeInfo_for_U_5,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__term__coerce_var_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_U_6,
  MR_Word VarTypeA_3)
{
  MR_Word VarTypeB_4 = VarTypeA_3;

  return VarTypeB_4;
}

void MR_CALL 
mercury__term__coerce_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_U_6,
  MR_Word TermTypeA_3,
  MR_Word * TermTypeB_4)
{
  *TermTypeB_4 = TermTypeA_3;
}

MR_Word MR_CALL 
mercury__term__coerce_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word TypeInfo_for_U_6,
  MR_Word TermTypeA_3)
{
  MR_Word TermTypeB_4 = TermTypeA_3;

  return TermTypeB_4;
}

void MR_CALL 
mercury__term__generic_term_1_p_0(
  MR_Word HeadVar__1_2)
{
}

void MR_CALL 
mercury__term__var_to_uint_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Unsigned * HeadVar__2_2)
{
  MR_Integer VarNum_3 = (MR_Integer) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__term__var_to_uint_2_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = VarNum_3 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = U;
}
}

MR_Unsigned MR_CALL 
mercury__term__var_to_uint_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  MR_Unsigned HeadVar__2_2;
  MR_Integer VarNum_3 = (MR_Integer) (HeadVar__1_1);

{
#define MR_PROC_LABEL mercury__term__var_to_uint_1_f_0

	MR_Integer I;
	MR_Unsigned U;

	I = VarNum_3 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = U;
}
  return HeadVar__2_2;
}

void MR_CALL 
mercury__term__var_to_int_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1,
  MR_Integer * VarNum_3)
{
  *VarNum_3 = (MR_Integer) (HeadVar__1_1);
}

MR_Integer MR_CALL 
mercury__term__var_to_int_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  MR_Integer VarNum_3 = (MR_Integer) (HeadVar__1_1);

  return VarNum_3;
}

void MR_CALL 
mercury__term__create_var_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_Integer V_4;
  MR_Integer V0_5 = (MR_Integer) (HeadVar__2_2);

  V_4 = (MR_Integer) ((MR_Unsigned) V0_5 + (MR_Unsigned) 1);
  *HeadVar__1_1 = (MR_Word) (V_4);
  *HeadVar__3_3 = (MR_Word) (V_4);
}

MR_bool MR_CALL 
mercury__term__init_var_supply_1_p_1(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer Var_2 = (MR_Integer) (HeadVar__1_1);

  succeeded = (Var_2 == (MR_Integer) 0);
  return succeeded;
}

void MR_CALL 
mercury__term__init_var_supply_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (((MR_Box) ((MR_Integer) 0)));
}

MR_Word MR_CALL 
mercury__term__init_var_supply_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  return (MR_Word) (((MR_Box) ((MR_Integer) 0)));
}

static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____const_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____const_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____generic_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____generic_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____integer_base_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____integer_base_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____integer_base_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____integer_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____integer_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____integer_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____integer_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____renaming_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____renaming_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____renaming_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____renaming_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____signedness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____signedness_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____signedness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____signedness_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____substitution_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____substitution_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____term_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____term_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____var_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____var_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__term____Compare____var_supply_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Unsigned conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__to_uint_1_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = mercury__term__ClassMethod_for_enum__uenum____term__var__arity1______enum__from_uint_2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 1)))), ((MR_Unsigned) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 1)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void mercury__term__init(void)
{
}

void mercury__term__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_const_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_context_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_generic_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_integer_base_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_integer_size_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_renaming_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_renaming_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_signedness_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_substitution_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_substitution_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_term_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_var_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_var_0);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_var_supply_1);
}

void mercury__term__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__term__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module term.
