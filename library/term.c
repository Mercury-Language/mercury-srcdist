/*
** Automatically generated from `term.m'
** by the Mercury compiler,
** version rotd-2020-06-14
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
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
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

static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_context_0_0;

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1];

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1];

static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1];

static const MR_Integer mercury__term__term__functor_number_map_context_0[1];

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0;

static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1];

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1];

static const MR_Integer mercury__term__term__functor_number_map_generic_0[1];

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_0;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_1;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_2;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_3;

static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_integer_base_0[4];

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_base_0[4];

static const MR_Integer mercury__term__term__functor_number_map_integer_base_0[4];

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_0;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_1;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_2;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_3;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_size_0_4;

static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_integer_size_0[5];

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_integer_size_0[5];

static const MR_Integer mercury__term__term__functor_number_map_integer_size_0[5];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_signedness_0_0;

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_signedness_0_1;

static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_signedness_0[2];

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

static MR_Integer MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word X_6,
  MR_Word BoundY_7,
  MR_Word DontBindVars_8,
  MR_Word STATE_VARIABLE_Subst_0_13,
  MR_Word * STATE_VARIABLE_Subst_14);

static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
  MR_Word Var_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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

static /* final */ const MR_Box mercury__term_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__term_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__term_scalar_common_1[0])),
    ((MR_Box) (&mercury__term_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__term_scalar_common_1[0])),
    ((MR_Box) (&mercury__term_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_scalar_common_2[2])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__term_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__term_scalar_common_3[0])),
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



static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

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

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

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

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1] = {
  &mercury__term__term__du_functor_desc_const_0_0
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1] = {
  &mercury__term__term__du_functor_desc_const_0_1
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1] = {
  &mercury__term__term__du_functor_desc_const_0_2
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[2] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4
};

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__term__term__du_stag_ordered_const_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____const_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____const_0_0_10001)),
  (MR_String) "term",
  (MR_String) "const",
  {     mercury__term__term__du_name_ordered_const_0 },
  {     mercury__term__term__du_ptag_ordered_const_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  mercury__term__term__functor_number_map_const_0
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_context_0_0 = {
  (MR_String) "context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__term__term__field_types_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_context_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_context_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

static const MR_Integer mercury__term__term__functor_number_map_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_context_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____context_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____context_0_0_10001)),
  (MR_String) "term",
  (MR_String) "context",
  {     mercury__term__term__du_name_ordered_context_0 },
  {     mercury__term__term__du_ptag_ordered_context_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__term__term__functor_number_map_context_0
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_name_ordered_generic_0[1] = {
  &mercury__term__term__enum_functor_desc_generic_0_0
};

static const MR_Integer mercury__term__term__functor_number_map_generic_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_generic_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__term____Unify____generic_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____generic_0_0_10001)),
  (MR_String) "term",
  (MR_String) "generic",
  {     mercury__term__term__enum_name_ordered_generic_0 },
  {     mercury__term__term__enum_value_ordered_generic_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__term__term__functor_number_map_generic_0
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

static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_integer_base_0[4] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term____Unify____integer_base_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____integer_base_0_0_10001)),
  (MR_String) "term",
  (MR_String) "integer_base",
  {     mercury__term__term__enum_name_ordered_integer_base_0 },
  {     mercury__term__term__enum_value_ordered_integer_base_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  mercury__term__term__functor_number_map_integer_base_0
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

static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_integer_size_0[5] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term____Unify____integer_size_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____integer_size_0_0_10001)),
  (MR_String) "term",
  (MR_String) "integer_size",
  {     mercury__term__term__enum_name_ordered_integer_size_0 },
  {     mercury__term__term__enum_value_ordered_integer_size_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  mercury__term__term__functor_number_map_integer_size_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____renaming_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_1_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____renaming_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_0_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_signedness_0_0 = {
  (MR_String) "signed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_signedness_0_1 = {
  (MR_String) "unsigned",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__term__term__enum_value_ordered_signedness_0[2] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term____Unify____signedness_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____signedness_0_0_10001)),
  (MR_String) "term",
  (MR_String) "signedness",
  {     mercury__term__term__enum_name_ordered_signedness_0 },
  {     mercury__term__term__enum_value_ordered_signedness_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__term__term__functor_number_map_signedness_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____substitution_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_1_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_generic_0)
  }
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____substitution_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_0_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__term__term__pti_term_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_const_0),
  (MR_PseudoTypeInfo) (&mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
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
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
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

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_1_0
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_1_1
};

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_1_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____term_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_1_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  {     mercury__term__term__du_name_ordered_term_1 },
  {     mercury__term__term__du_ptag_ordered_term_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__term__term__functor_number_map_term_1
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____term_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_0_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term__term__ti_term_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  {     &mercury__term__term__notag_functor_desc_var_1 },
  {     &mercury__term__term__notag_functor_desc_var_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__term__term__functor_number_map_var_1
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____var_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_0_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__term__term__ti_var_1term__type_ctor_info_generic_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_supply_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_supply_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_supply_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var_supply",
  {     &mercury__term__term__notag_functor_desc_var_supply_1 },
  {     &mercury__term__term__notag_functor_desc_var_supply_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__term__term__functor_number_map_var_supply_1
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

static MR_Integer MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0(void)
{
  {
  }
}

MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(
  MR_Word TypeInfo_5_5,
  MR_Integer X_4,
  MR_Word * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = (MR_Word) (X_4);
    return MR_TRUE;
  }
}

MR_Integer MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(
  MR_Word TypeInfo_5_5,
  MR_Word X_4)
{
  {
    MR_Integer HeadVar__2_2 = (MR_Integer) (X_4);

    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term____Compare____var_supply_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

void MR_CALL 
mercury__term____Compare____var_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

void MR_CALL 
mercury__term____Compare____var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__term____Unify____var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

void MR_CALL 
mercury__term____Compare____term_1_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_6;

        mercury__term____Compare____const_0_0(&SubResult1_6, Var_41, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
        {
          MR_Word SubResult2_9;
          MR_Word TypeInfo_35_35;

          {
            TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_35_35, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
            MR_hl_field(MR_mktag(0), TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_29));
          }
          mercury__list____Compare____list_1_0(TypeInfo_35_35, &SubResult2_9, (MR_Word) (Var_40), (MR_Word) (ArgY2_8));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_9;
          else
            mercury__term____Compare____context_0_0(HeadVar__1_1, Var_39, ArgY3_11);
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_24;
        MR_Integer Var_44 = (MR_Integer) (Var_43);
        MR_Integer Var_45 = (MR_Integer) (ArgY1_23);

        succeeded = (Var_44 < Var_45);
        if (succeeded)
          SubResult1_24 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_44 == Var_45);
          if (succeeded)
            SubResult1_24 = (MR_Integer) 0;
          else
            SubResult1_24 = (MR_Integer) 2;
        }
        succeeded = (SubResult1_24 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_24;
        else
          mercury__term____Compare____context_0_0(HeadVar__1_1, Var_42, ArgY2_26);
      }
    }
  }
}

void MR_CALL 
mercury__term____Compare____term_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__term____Unify____term_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__term____Unify____term_1_0((MR_Word) (&mercury__term__term__type_ctor_info_generic_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term____Unify____term_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = mercury__term____Unify____const_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
        {
          TypeCtorInfo_16_16 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
          {
            TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
            MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_15));
          }
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_17_17, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
          if (succeeded)
            succeeded = mercury__term____Unify____context_0_0(ArgX3_7, ArgY3_8);
        }
      }
    }
    else
    {
      MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_10;
      MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_12;
      MR_Integer CastX_22;
      MR_Integer CastY_23;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        CastX_22 = (MR_Integer) (ArgX1_9);
        CastY_23 = (MR_Integer) (ArgY1_10);
        succeeded = (CastX_22 == CastY_23);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_20 = (MR_Integer) (ArgX1_9);
          MR_Integer ArgY1_21 = (MR_Integer) (ArgY1_10);

          succeeded = (ArgX1_20 == ArgY1_21);
        }
        if (succeeded)
          succeeded = mercury__term____Unify____context_0_0(ArgX2_11, ArgY2_12);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____substitution_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word TypeInfo_10_10;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__tree234____Compare____tree234_2_0(TypeInfo_8_8, TypeInfo_10_10, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_7_7, TypeInfo_9_9, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____substitution_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__term_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____signedness_0_0(
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
mercury__term____Unify____signedness_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____renaming_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeInfo_8_8;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__tree234____Compare____tree234_2_0(TypeInfo_8_8, TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_7_7;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_7_7, TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____renaming_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__term_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__term_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____integer_size_0_0(
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
mercury__term____Unify____integer_size_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____integer_base_0_0(
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
mercury__term____Unify____integer_base_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
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
  {
    MR_bool succeeded;

    succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__term____Compare____context_0_0(
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
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;
      MR_Integer V_7_16;

{
#define MR_PROC_LABEL mercury__term____Compare____context_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_16  = Res;
}
      succeeded = (V_7_16 < (MR_Integer) 0);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (V_7_16 == (MR_Integer) 0);
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

void MR_CALL 
mercury__term____Compare____const_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_87 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_88 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_87 == CastY_88);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_97 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_114;

{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_97 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_114  = Res;
}
                  succeeded = (V_7_114 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_114 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
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
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_100 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word Var_101 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
            MR_Word Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Word ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
                  MR_Word ArgY4_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 7);
                  MR_Word SubResult1_24;
                  MR_Integer Var_105 = (MR_Integer) (Var_103);
                  MR_Integer Var_106 = (MR_Integer) (ArgY1_23);

                  succeeded = (Var_105 < Var_106);
                  if (succeeded)
                    SubResult1_24 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_105 == Var_106);
                    if (succeeded)
                      SubResult1_24 = (MR_Integer) 0;
                    else
                      SubResult1_24 = (MR_Integer) 2;
                  }
                  succeeded = (SubResult1_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_24;
                  else
                  {
                    MR_Word SubResult2_27;

                    mercury__integer____Compare____integer_0_0(&SubResult2_27, Var_102, ArgY2_26);
                    succeeded = (SubResult2_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_27;
                    else
                    {
                      MR_Word SubResult3_30;
                      MR_Integer Var_107 = (MR_Integer) (Var_101);
                      MR_Integer Var_108 = (MR_Integer) (ArgY3_29);

                      succeeded = (Var_107 < Var_108);
                      if (succeeded)
                        SubResult3_30 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_107 == Var_108);
                        if (succeeded)
                          SubResult3_30 = (MR_Integer) 0;
                        else
                          SubResult3_30 = (MR_Integer) 2;
                      }
                      succeeded = (SubResult3_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_30;
                      else
                      {
                        MR_Integer Var_109 = (MR_Integer) (Var_100);
                        MR_Integer Var_110 = (MR_Integer) (ArgY4_32);

                        succeeded = (Var_109 < Var_110);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_109 == Var_110);
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_104 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_56 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_136;

{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_104 ;
	S2 = ArgY1_56 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_136  = Res;
}
                  succeeded = (V_7_136 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_136 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Float Var_98 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Float ArgY1_71 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                          succeeded = (Var_98 < ArgY1_71);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_98 > ArgY1_71);
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
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_99 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String ArgY1_86 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer V_7_122;

{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_99 ;
	S2 = ArgY1_86 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_122  = Res;
}
                          succeeded = (V_7_122 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_122 == (MR_Integer) 0);
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
              }
              break;
          }
          break;
      }
  }
}

MR_Word MR_CALL 
mercury__term__force_construct_var_supply_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer V_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (V_3);

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__term__force_construct_var_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Integer V_3)
{
  {
    MR_Word HeadVar__2_2 = (MR_Word) (V_3);

    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
mercury__term__var_supply_num_allocated_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer V_3 = (MR_Integer) (HeadVar__1_1);

    return V_3;
  }
}

MR_Word MR_CALL 
mercury__term__var_supply_max_var_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer V_3 = (MR_Integer) (HeadVar__1_1);

    HeadVar__2_2 = (MR_Word) (V_3);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term__context_file_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * FileName_3)
{
  *FileName_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
}

MR_String MR_CALL 
mercury__term__context_file_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String FileName_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return FileName_3;
  }
}

void MR_CALL 
mercury__term__context_line_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * LineNumber_4)
{
  *LineNumber_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
}

MR_Integer MR_CALL 
mercury__term__context_line_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer LineNumber_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return LineNumber_4;
  }
}

MR_bool MR_CALL 
mercury__term__is_dummy_context_1_p_0(
  MR_Word Context_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____context_0_0(Context_2, (MR_Word) (&mercury__term_scalar_common_1[2]));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term____Unify____context_0_0(
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term__context_init_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (&mercury__term_scalar_common_1[2]);
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
  MR_String File_4,
  MR_Integer LineNumber_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (File_4));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LineNumber_5));
  }
}

MR_Word MR_CALL 
mercury__term__context_init_2_f_0(
  MR_String File_4,
  MR_Integer LineNumber_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 0) = ((MR_Box) (File_4));
      MR_hl_field(MR_mktag(0), HeadVar__3_3, 1) = ((MR_Box) (LineNumber_5));
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__term__get_term_context_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Term_3)
{
  {
    MR_Word Context_4;

    if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
      Context_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 2))));
    else
      Context_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_3, (MR_Integer) 1))));
    return Context_4;
  }
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
  {
    MR_Word VarSupplyTypeB_4 = VarSupplyTypeA_3;

    return VarSupplyTypeB_4;
  }
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
  {
    MR_Word VarTypeB_4 = VarTypeA_3;

    return VarTypeB_4;
  }
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
  {
    MR_Word TermTypeB_4 = TermTypeA_3;

    return TermTypeB_4;
  }
}

void MR_CALL 
mercury__term__generic_term_1_p_0(
  MR_Word HeadVar__1_2)
{
  {
  }
}

MR_Word MR_CALL 
mercury__term__var_list_to_term_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Vs_3)
{
  {
    MR_Word Ts_4;

    mercury__term__var_list_to_term_list_2_p_0(TypeInfo_for_T_5, Vs_3, &Ts_4);
    return Ts_4;
  }
}

void MR_CALL 
mercury__term__var_list_to_term_list_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Vars_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Terms_5;
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (Var_3));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) (&mercury__term_scalar_common_1[2]));
    }
    mercury__term__var_list_to_term_list_2_p_0(TypeInfo_for_T_8, Vars_4, &Terms_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_5));
    }
  }
}

MR_Word MR_CALL 
mercury__term__term_list_to_var_list_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Terms_3)
{
  {
    MR_bool succeeded;
    MR_Word Vars_4;
    MR_Word VarsPrime_5;

    succeeded = mercury__term__term_list_to_var_list_2_p_0(TypeInfo_for_T_8, Terms_3, &VarsPrime_5);
    if (succeeded)
      Vars_4 = VarsPrime_5;
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140term.term_list_to_var_list\'/1", (MR_String) "not all vars");
    return Vars_4;
  }
}

MR_bool MR_CALL 
mercury__term__term_list_to_var_list_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Var_3;
      MR_Word Terms_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Vars_6;
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      succeeded = ((MR_tag((MR_Word) Var_7)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_7, (MR_Integer) 0))));
        succeeded = mercury__term__term_list_to_var_list_2_p_0(TypeInfo_for_T_8, Terms_5, &Vars_6);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_3));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_6));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__term__apply_rec_substitution_to_list_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Terms0_4,
  MR_Word Subst_5,
  MR_Word * Terms_6)
{
  mercury__term__apply_rec_substitution_in_terms_3_p_0(TypeInfo_for_T_7, Subst_5, Terms0_4, Terms_6);
}

MR_Word MR_CALL 
mercury__term__apply_rec_substitution_to_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Terms0_4,
  MR_Word Subst_5)
{
  {
    MR_Word Terms_6;

    mercury__term__apply_rec_substitution_in_terms_3_p_0(TypeInfo_for_T_7, Subst_5, Terms0_4, &Terms_6);
    return Terms_6;
  }
}

void MR_CALL 
mercury__term__apply_rec_substitution_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term0_4,
  MR_Word Subst_5,
  MR_Word * Term_6)
{
  mercury__term__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_7, Subst_5, Term0_4, Term_6);
}

MR_Word MR_CALL 
mercury__term__apply_rec_substitution_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term0_4,
  MR_Word Subst_5)
{
  {
    MR_Word Term_6;

    mercury__term__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_7, Subst_5, Term0_4, &Term_6);
    return Term_6;
  }
}

void MR_CALL 
mercury__term__apply_substitution_to_list_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Terms0_4,
  MR_Word Subst_5,
  MR_Word * Terms_6)
{
  mercury__term__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_7, Subst_5, Terms0_4, Terms_6);
}

MR_Word MR_CALL 
mercury__term__apply_substitution_to_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Terms0_4,
  MR_Word Subst_5)
{
  {
    MR_Word Terms_6;

    mercury__term__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_7, Subst_5, Terms0_4, &Terms_6);
    return Terms_6;
  }
}

void MR_CALL 
mercury__term__apply_substitution_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term0_4,
  MR_Word Subst_5,
  MR_Word * Term_6)
{
  mercury__term__apply_substitution_in_term_3_p_0(TypeInfo_for_T_7, Subst_5, Term0_4, Term_6);
}

MR_Word MR_CALL 
mercury__term__apply_substitution_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term0_4,
  MR_Word Subst_5)
{
  {
    MR_Word Term_6;

    mercury__term__apply_substitution_in_term_3_p_0(TypeInfo_for_T_7, Subst_5, Term0_4, &Term_6);
    return Term_6;
  }
}

void MR_CALL 
mercury__term__substitute_corresponding_in_terms_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Vars_5,
  MR_Word ReplacementTerms_6,
  MR_Word Terms0_7,
  MR_Word * Terms_8)
{
  {
    MR_Word Subst_10;

    mercury__term__build_subst_4_p_0(TypeInfo_for_T_11, Vars_5, ReplacementTerms_6, (MR_Word) ((MR_Unsigned) 0U), &Subst_10);
    mercury__term__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_11, Subst_10, Terms0_7, Terms_8);
  }
}

void MR_CALL 
mercury__term__substitute_corresponding_in_term_4_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Vars_5,
  MR_Word ReplacementTerms_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  {
    MR_Word Subst_10;

    mercury__term__build_subst_4_p_0(TypeInfo_for_T_11, Vars_5, ReplacementTerms_6, (MR_Word) ((MR_Unsigned) 0U), &Subst_10);
    mercury__term__apply_substitution_in_term_3_p_0(TypeInfo_for_T_11, Subst_10, Term0_7, Term_8);
  }
}

void MR_CALL 
mercury__term__substitute_corresponding_list_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Vars_5,
  MR_Word ReplacementTerms_6,
  MR_Word Terms0_7,
  MR_Word * Terms_8)
{
  {
    MR_Word Subst_15;

    mercury__term__build_subst_4_p_0(TypeInfo_for_T_9, Vars_5, ReplacementTerms_6, (MR_Word) ((MR_Unsigned) 0U), &Subst_15);
    mercury__term__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_9, Subst_15, Terms0_7, Terms_8);
  }
}

MR_Word MR_CALL 
mercury__term__substitute_corresponding_list_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Vars_5,
  MR_Word ReplacementTerms_6,
  MR_Word Terms0_7)
{
  {
    MR_Word Terms_8;
    MR_Word Subst_15;

    mercury__term__build_subst_4_p_0(TypeInfo_for_T_9, Vars_5, ReplacementTerms_6, (MR_Word) ((MR_Unsigned) 0U), &Subst_15);
    mercury__term__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_9, Subst_15, Terms0_7, &Terms_8);
    return Terms_8;
  }
}

void MR_CALL 
mercury__term__substitute_corresponding_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Vars_5,
  MR_Word ReplacementTerms_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  {
    MR_Word Subst_15;

    mercury__term__build_subst_4_p_0(TypeInfo_for_T_9, Vars_5, ReplacementTerms_6, (MR_Word) ((MR_Unsigned) 0U), &Subst_15);
    mercury__term__apply_substitution_in_term_3_p_0(TypeInfo_for_T_9, Subst_15, Term0_7, Term_8);
  }
}

MR_Word MR_CALL 
mercury__term__substitute_corresponding_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Vars_5,
  MR_Word ReplacementTerms_6,
  MR_Word Term0_7)
{
  {
    MR_Word Term_8;
    MR_Word Subst_15;

    mercury__term__build_subst_4_p_0(TypeInfo_for_T_9, Vars_5, ReplacementTerms_6, (MR_Word) ((MR_Unsigned) 0U), &Subst_15);
    mercury__term__apply_substitution_in_term_3_p_0(TypeInfo_for_T_9, Subst_15, Term0_7, &Term_8);
    return Term_8;
  }
}

void MR_CALL 
mercury__term__build_subst_4_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word TypeInfo_33_33;
        MR_Word TypeInfo_35_35;
        MR_Word Term_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Terms_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word STATE_VARIABLE_Subst_29_29;
        MR_Word conv0_STATE_VARIABLE_Subst_29_29;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;

        {
          TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_31));
        }
        {
          TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_35_35, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(MR_mktag(0), TypeInfo_35_35, 1) = ((MR_Box) (TypeInfo_for_T_31));
        }
        mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_31, TypeInfo_33_33, TypeInfo_35_35, Var_37, ((MR_Box) (Term_24)), (MR_Word) (STATE_VARIABLE_Subst_0_3), &conv0_STATE_VARIABLE_Subst_29_29);
        STATE_VARIABLE_Subst_29_29 = (MR_Word) (conv0_STATE_VARIABLE_Subst_29_29);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_36;
        next_value_of_HeadVar__2_2 = Terms_25;
        next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_29_29;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__term__apply_substitution_in_terms_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Terms0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Term_8;
    MR_Word Terms_9;

    mercury__term__apply_substitution_in_term_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Term0_6, &Term_8);
    mercury__term__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Terms0_7, &Terms_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_9));
    }
  }
}

void MR_CALL 
mercury__term__apply_substitution_in_term_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Subst_4,
  MR_Word Term0_5,
  MR_Word * Term_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term0_5)) == (MR_Integer) 0))
    {
      MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_5, (MR_Integer) 0))));
      MR_Word ArgTerms0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_5, (MR_Integer) 1))));
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_5, (MR_Integer) 2))));
      MR_Word ArgTerms_13;

      mercury__term__apply_substitution_in_terms_3_p_0(TypeInfo_for_T_14, Subst_4, ArgTerms0_11, &ArgTerms_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_12));
      }
    }
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_5, (MR_Integer) 0))));
      MR_Word ReplacementTerm_9;
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_18_18;
      MR_Box conv0_ReplacementTerm_9;

      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_14, TypeInfo_16_16, TypeInfo_18_18, (MR_Word) (Subst_4), Var_7, &conv0_ReplacementTerm_9);
      if (succeeded)
      {
        ReplacementTerm_9 = ((MR_Word) (conv0_ReplacementTerm_9));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        *Term_6 = ReplacementTerm_9;
      else
        *Term_6 = Term0_5;
    }
  }
}

void MR_CALL 
mercury__term__substitute_list_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Terms0_5,
  MR_Word Var_6,
  MR_Word ReplacementTerm_7,
  MR_Word * Terms_8)
{
  mercury__term__substitute_var_in_terms_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementTerm_7, Terms0_5, Terms_8);
}

MR_Word MR_CALL 
mercury__term__substitute_list_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Terms0_5,
  MR_Word Var_6,
  MR_Word ReplacementTerm_7)
{
  {
    MR_Word Terms_8;

    mercury__term__substitute_var_in_terms_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementTerm_7, Terms0_5, &Terms_8);
    return Terms_8;
  }
}

void MR_CALL 
mercury__term__substitute_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term0_5,
  MR_Word Var_6,
  MR_Word ReplacementTerm_7,
  MR_Word * Term_8)
{
  mercury__term__substitute_var_in_term_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementTerm_7, Term0_5, Term_8);
}

MR_Word MR_CALL 
mercury__term__substitute_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term0_5,
  MR_Word Var_6,
  MR_Word ReplacementTerm_7)
{
  {
    MR_Word Term_8;

    mercury__term__substitute_var_in_term_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementTerm_7, Term0_5, &Term_8);
    return Term_8;
  }
}

void MR_CALL 
mercury__term__substitute_var_in_terms_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Terms0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Term_11;
    MR_Word Terms_12;

    mercury__term__substitute_var_in_term_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Term0_9, &Term_11);
    mercury__term__substitute_var_in_terms_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Terms0_10, &Terms_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_12));
    }
  }
}

void MR_CALL 
mercury__term__substitute_var_in_term_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Var_5,
  MR_Word ReplacementTerm_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term0_7)) == (MR_Integer) 0))
    {
      MR_Word Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_7, (MR_Integer) 0))));
      MR_Word ArgTerms0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_7, (MR_Integer) 1))));
      MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_7, (MR_Integer) 2))));
      MR_Word ArgTerms_14;

      mercury__term__substitute_var_in_terms_4_p_0(TypeInfo_for_T_15, Var_5, ReplacementTerm_6, ArgTerms0_12, &ArgTerms_14);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_14));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_13));
      }
    }
    else
    {
      MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_7, (MR_Integer) 0))));
      MR_Integer CastX_18 = (MR_Integer) (Var0_9);
      MR_Integer CastY_19 = (MR_Integer) (Var_5);

      succeeded = (CastX_18 == CastY_19);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_16 = (MR_Integer) (Var0_9);
        MR_Integer ArgY1_17 = (MR_Integer) (Var_5);

        succeeded = (ArgX1_16 == ArgY1_17);
      }
      if (succeeded)
        *Term_8 = ReplacementTerm_6;
      else
        *Term_8 = Term0_7;
    }
  }
}

void MR_CALL 
mercury__term__apply_renaming_in_term_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Renaming_4,
  MR_Word Term0_5,
  MR_Word * Term_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term0_5)) == (MR_Integer) 0))
    {
      MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_5, (MR_Integer) 0))));
      MR_Word ArgTerms0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_5, (MR_Integer) 1))));
      MR_Word ArgTerms_12;
      MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_5, (MR_Integer) 2))));

      mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_14, Renaming_4, ArgTerms0_11, &ArgTerms_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_12));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_13));
      }
    }
    else
    {
      MR_Word Var0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_5, (MR_Integer) 0))));
      MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_5, (MR_Integer) 1))));
      MR_Word Var_9;
      MR_Word NewVar_18;
      MR_Word TypeInfo_10_20;
      MR_Box conv0_NewVar_18;

      {
        TypeInfo_10_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_10_20, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_10_20, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_14, TypeInfo_10_20, TypeInfo_10_20, (MR_Word) (Renaming_4), Var0_7, &conv0_NewVar_18);
      if (succeeded)
      {
        NewVar_18 = ((MR_Word) (conv0_NewVar_18));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_9 = NewVar_18;
      else
        Var_9 = Var0_7;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Term_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Context_8));
      }
    }
  }
}

void MR_CALL 
mercury__term__apply_renaming_in_var_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Renaming_4,
  MR_Word Var0_5,
  MR_Word * Var_6)
{
  {
    MR_bool succeeded;
    MR_Word NewVar_7;
    MR_Word TypeInfo_10_10;
    MR_Box conv0_NewVar_7;

    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_8, TypeInfo_10_10, TypeInfo_10_10, (MR_Word) (Renaming_4), Var0_5, &conv0_NewVar_7);
    if (succeeded)
    {
      NewVar_7 = ((MR_Word) (conv0_NewVar_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Var_6 = NewVar_7;
    else
      *Var_6 = Var0_5;
  }
}

void MR_CALL 
mercury__term__apply_variable_renaming_to_list_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Terms0_4,
  MR_Word Renaming_5,
  MR_Word * Terms_6)
{
  mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_7, Renaming_5, Terms0_4, Terms_6);
}

MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Terms0_4,
  MR_Word Renaming_5)
{
  {
    MR_Word Terms_6;

    mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_7, Renaming_5, Terms0_4, &Terms_6);
    return Terms_6;
  }
}

void MR_CALL 
mercury__term__apply_variable_renaming_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term0_4,
  MR_Word Renaming_5,
  MR_Word * Term_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term0_4)) == (MR_Integer) 0))
    {
      MR_Word Name_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 0))));
      MR_Word ArgTerms0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 1))));
      MR_Word ArgTerms_16;
      MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 2))));

      mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_7, Renaming_5, ArgTerms0_15, &ArgTerms_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_16));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_17));
      }
    }
    else
    {
      MR_Word Var0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_4, (MR_Integer) 0))));
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_4, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word NewVar_21;
      MR_Word TypeInfo_10_23;
      MR_Box conv0_NewVar_21;

      {
        TypeInfo_10_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_10_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_10_23, 1) = ((MR_Box) (TypeInfo_for_T_7));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_7, TypeInfo_10_23, TypeInfo_10_23, (MR_Word) (Renaming_5), Var0_11, &conv0_NewVar_21);
      if (succeeded)
      {
        NewVar_21 = ((MR_Word) (conv0_NewVar_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_13 = NewVar_21;
      else
        Var_13 = Var0_11;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Term_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Context_12));
      }
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_variable_renaming_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term0_4,
  MR_Word Renaming_5)
{
  {
    MR_bool succeeded;
    MR_Word Term_6;

    if (((MR_tag((MR_Word) Term0_4)) == (MR_Integer) 0))
    {
      MR_Word Name_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 0))));
      MR_Word ArgTerms0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 1))));
      MR_Word ArgTerms_16;
      MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 2))));

      mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_7, Renaming_5, ArgTerms0_15, &ArgTerms_16);
      {
        Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Name_14));
        MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (ArgTerms_16));
        MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_17));
      }
    }
    else
    {
      MR_Word Var0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_4, (MR_Integer) 0))));
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_4, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word NewVar_21;
      MR_Word TypeInfo_10_23;
      MR_Box conv0_NewVar_21;

      {
        TypeInfo_10_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_10_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_10_23, 1) = ((MR_Box) (TypeInfo_for_T_7));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_7, TypeInfo_10_23, TypeInfo_10_23, (MR_Word) (Renaming_5), Var0_11, &conv0_NewVar_21);
      if (succeeded)
      {
        NewVar_21 = ((MR_Word) (conv0_NewVar_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_13 = NewVar_21;
      else
        Var_13 = Var0_11;
      {
        Term_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Term_6, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), Term_6, 1) = ((MR_Box) (Context_12));
      }
    }
    return Term_6;
  }
}

void MR_CALL 
mercury__term__apply_variable_renaming_to_vars_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Renaming_4,
  MR_Word Vars0_5,
  MR_Word * Vars_6)
{
  mercury__term__apply_renaming_in_vars_3_p_0(TypeInfo_for_T_7, Renaming_4, Vars0_5, Vars_6);
}

MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_vars_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Renaming_4,
  MR_Word Vars0_5)
{
  {
    MR_Word Vars_6;

    mercury__term__apply_renaming_in_vars_3_p_0(TypeInfo_for_T_7, Renaming_4, Vars0_5, &Vars_6);
    return Vars_6;
  }
}

void MR_CALL 
mercury__term__apply_renaming_in_vars_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word Vars_9;
      MR_Word NewVar_14;
      MR_Word TypeInfo_10_16;
      MR_Box conv0_NewVar_14;

      {
        TypeInfo_10_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_10_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_10_16, 1) = ((MR_Box) (TypeInfo_for_T_10));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_10, TypeInfo_10_16, TypeInfo_10_16, (MR_Word) (HeadVar__1_1), Var0_6, &conv0_NewVar_14);
      if (succeeded)
      {
        NewVar_14 = ((MR_Word) (conv0_NewVar_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_8 = NewVar_14;
      else
        Var_8 = Var0_6;
      mercury__term__apply_renaming_in_vars_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Vars0_7, &Vars_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_9));
      }
    }
  }
}

void MR_CALL 
mercury__term__apply_variable_renaming_to_var_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Renaming_4,
  MR_Word Var0_5,
  MR_Word * Var_6)
{
  {
    MR_bool succeeded;
    MR_Word NewVar_11;
    MR_Word TypeInfo_10_13;
    MR_Box conv0_NewVar_11;

    {
      TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_7, TypeInfo_10_13, TypeInfo_10_13, (MR_Word) (Renaming_4), Var0_5, &conv0_NewVar_11);
    if (succeeded)
    {
      NewVar_11 = ((MR_Word) (conv0_NewVar_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Var_6 = NewVar_11;
    else
      *Var_6 = Var0_5;
  }
}

MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_var_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Renaming_4,
  MR_Word Var0_5)
{
  {
    MR_bool succeeded;
    MR_Word Var_6;
    MR_Word NewVar_11;
    MR_Word TypeInfo_10_13;
    MR_Box conv0_NewVar_11;

    {
      TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_10_13, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_7, TypeInfo_10_13, TypeInfo_10_13, (MR_Word) (Renaming_4), Var0_5, &conv0_NewVar_11);
    if (succeeded)
    {
      NewVar_11 = ((MR_Word) (conv0_NewVar_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Var_6 = NewVar_11;
    else
      Var_6 = Var0_5;
    return Var_6;
  }
}

void MR_CALL 
mercury__term__apply_renaming_to_list_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Terms0_4,
  MR_Word Renaming_5,
  MR_Word * Terms_6)
{
  mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_7, Renaming_5, Terms0_4, Terms_6);
}

MR_Word MR_CALL 
mercury__term__apply_renaming_to_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Terms0_4,
  MR_Word Renaming_5)
{
  {
    MR_Word Terms_6;

    mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_7, Renaming_5, Terms0_4, &Terms_6);
    return Terms_6;
  }
}

void MR_CALL 
mercury__term__apply_renaming_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term0_4,
  MR_Word Renaming_5,
  MR_Word * Term_6)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term0_4)) == (MR_Integer) 0))
    {
      MR_Word Name_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 0))));
      MR_Word ArgTerms0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 1))));
      MR_Word ArgTerms_16;
      MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 2))));

      mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_7, Renaming_5, ArgTerms0_15, &ArgTerms_16);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_16));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_17));
      }
    }
    else
    {
      MR_Word Var0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_4, (MR_Integer) 0))));
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_4, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word NewVar_21;
      MR_Word TypeInfo_10_23;
      MR_Box conv0_NewVar_21;

      {
        TypeInfo_10_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_10_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_10_23, 1) = ((MR_Box) (TypeInfo_for_T_7));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_7, TypeInfo_10_23, TypeInfo_10_23, (MR_Word) (Renaming_5), Var0_11, &conv0_NewVar_21);
      if (succeeded)
      {
        NewVar_21 = ((MR_Word) (conv0_NewVar_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_13 = NewVar_21;
      else
        Var_13 = Var0_11;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Term_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Context_12));
      }
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_renaming_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term0_4,
  MR_Word Renaming_5)
{
  {
    MR_bool succeeded;
    MR_Word Term_6;

    if (((MR_tag((MR_Word) Term0_4)) == (MR_Integer) 0))
    {
      MR_Word Name_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 0))));
      MR_Word ArgTerms0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 1))));
      MR_Word ArgTerms_16;
      MR_Word Context_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_4, (MR_Integer) 2))));

      mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_7, Renaming_5, ArgTerms0_15, &ArgTerms_16);
      {
        Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Name_14));
        MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) (ArgTerms_16));
        MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_17));
      }
    }
    else
    {
      MR_Word Var0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_4, (MR_Integer) 0))));
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_4, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word NewVar_21;
      MR_Word TypeInfo_10_23;
      MR_Box conv0_NewVar_21;

      {
        TypeInfo_10_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_10_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_10_23, 1) = ((MR_Box) (TypeInfo_for_T_7));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_7, TypeInfo_10_23, TypeInfo_10_23, (MR_Word) (Renaming_5), Var0_11, &conv0_NewVar_21);
      if (succeeded)
      {
        NewVar_21 = ((MR_Word) (conv0_NewVar_21));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        Var_13 = NewVar_21;
      else
        Var_13 = Var0_11;
      {
        Term_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Term_6, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), Term_6, 1) = ((MR_Box) (Context_12));
      }
    }
    return Term_6;
  }
}

void MR_CALL 
mercury__term__apply_renaming_in_terms_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Renaming_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Term0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Terms0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Term_8;
      MR_Word Terms_9;

      if (((MR_tag((MR_Word) Term0_6)) == (MR_Integer) 0))
      {
        MR_Word Name_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_6, (MR_Integer) 0))));
        MR_Word ArgTerms0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_6, (MR_Integer) 1))));
        MR_Word ArgTerms_19;
        MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_6, (MR_Integer) 2))));

        mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_10, Renaming_1, ArgTerms0_18, &ArgTerms_19);
        {
          Term_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Term_8, 0) = ((MR_Box) (Name_17));
          MR_hl_field(MR_mktag(0), Term_8, 1) = ((MR_Box) (ArgTerms_19));
          MR_hl_field(MR_mktag(0), Term_8, 2) = ((MR_Box) (Context_20));
        }
      }
      else
      {
        MR_Word Var0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_6, (MR_Integer) 0))));
        MR_Word Context_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_6, (MR_Integer) 1))));
        MR_Word Var_16;
        MR_Word NewVar_24;
        MR_Word TypeInfo_10_26;
        MR_Box conv0_NewVar_24;

        {
          TypeInfo_10_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_10_26, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_10_26, 1) = ((MR_Box) (TypeInfo_for_T_10));
        }
        succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_10, TypeInfo_10_26, TypeInfo_10_26, (MR_Word) (Renaming_1), Var0_14, &conv0_NewVar_24);
        if (succeeded)
        {
          NewVar_24 = ((MR_Word) (conv0_NewVar_24));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          Var_16 = NewVar_24;
        else
          Var_16 = Var0_14;
        {
          Term_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Term_8, 0) = ((MR_Box) (Var_16));
          MR_hl_field(MR_mktag(1), Term_8, 1) = ((MR_Box) (Context_15));
        }
      }
      mercury__term__apply_renaming_in_terms_3_p_0(TypeInfo_for_T_10, Renaming_1, Terms0_7, &Terms_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_9));
      }
    }
  }
}

void MR_CALL 
mercury__term__rename_list_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Terms0_5,
  MR_Word Var_6,
  MR_Word ReplacementVar_7,
  MR_Word * Terms_8)
{
  mercury__term__rename_var_in_terms_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementVar_7, Terms0_5, Terms_8);
}

MR_Word MR_CALL 
mercury__term__rename_list_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Terms0_5,
  MR_Word Var_6,
  MR_Word ReplacementVar_7)
{
  {
    MR_Word Terms_8;

    mercury__term__rename_var_in_terms_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementVar_7, Terms0_5, &Terms_8);
    return Terms_8;
  }
}

void MR_CALL 
mercury__term__rename_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term0_5,
  MR_Word Var_6,
  MR_Word ReplacementVar_7,
  MR_Word * Term_8)
{
  mercury__term__rename_var_in_term_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementVar_7, Term0_5, Term_8);
}

MR_Word MR_CALL 
mercury__term__rename_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term0_5,
  MR_Word Var_6,
  MR_Word ReplacementVar_7)
{
  {
    MR_Word Term_8;

    mercury__term__rename_var_in_term_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementVar_7, Term0_5, &Term_8);
    return Term_8;
  }
}

void MR_CALL 
mercury__term__relabel_variables_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Terms0_5,
  MR_Word Var_6,
  MR_Word ReplacementVar_7,
  MR_Word * Terms_8)
{
  mercury__term__rename_var_in_terms_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementVar_7, Terms0_5, Terms_8);
}

MR_Word MR_CALL 
mercury__term__relabel_variables_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Terms0_5,
  MR_Word Var_6,
  MR_Word ReplacementVar_7)
{
  {
    MR_Word Terms_8;

    mercury__term__rename_var_in_terms_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementVar_7, Terms0_5, &Terms_8);
    return Terms_8;
  }
}

void MR_CALL 
mercury__term__relabel_variable_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term0_5,
  MR_Word Var_6,
  MR_Word ReplacementVar_7,
  MR_Word * Term_8)
{
  mercury__term__rename_var_in_term_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementVar_7, Term0_5, Term_8);
}

MR_Word MR_CALL 
mercury__term__relabel_variable_3_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Term0_5,
  MR_Word Var_6,
  MR_Word ReplacementVar_7)
{
  {
    MR_Word Term_8;

    mercury__term__rename_var_in_term_4_p_0(TypeInfo_for_T_9, Var_6, ReplacementVar_7, Term0_5, &Term_8);
    return Term_8;
  }
}

void MR_CALL 
mercury__term__rename_var_in_terms_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Terms0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Term_11;
    MR_Word Terms_12;

    mercury__term__rename_var_in_term_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Term0_9, &Term_11);
    mercury__term__rename_var_in_terms_4_p_0(TypeInfo_for_T_13, HeadVar__1_1, HeadVar__2_2, Terms0_10, &Terms_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_12));
    }
  }
}

void MR_CALL 
mercury__term__rename_var_in_term_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Var_5,
  MR_Word ReplacementVar_6,
  MR_Word Term0_7,
  MR_Word * Term_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) Term0_7)) == (MR_Integer) 0))
    {
      MR_Word Name_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_7, (MR_Integer) 0))));
      MR_Word ArgTerms0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_7, (MR_Integer) 1))));
      MR_Word ArgTerms_13;
      MR_Word Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_7, (MR_Integer) 2))));

      mercury__term__rename_var_in_terms_4_p_0(TypeInfo_for_T_15, Var_5, ReplacementVar_6, ArgTerms0_12, &ArgTerms_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_14));
      }
    }
    else
    {
      MR_Word Var0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_7, (MR_Integer) 0))));
      MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_7, (MR_Integer) 1))));
      MR_Integer CastX_18 = (MR_Integer) (Var0_9);
      MR_Integer CastY_19 = (MR_Integer) (Var_5);

      succeeded = (CastX_18 == CastY_19);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_16 = (MR_Integer) (Var0_9);
        MR_Integer ArgY1_17 = (MR_Integer) (Var_5);

        succeeded = (ArgX1_16 == ArgY1_17);
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Term_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ReplacementVar_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Context_10));
        }
      else
        *Term_8 = Term0_7;
    }
  }
}

MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Term_3,
  MR_Word Bindings_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
    {
      MR_Word ArgTerms_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));

      succeeded = mercury__term__are_ground_in_bindings_2_p_0(TypeInfo_for_T_11, ArgTerms_9, Bindings_4);
    }
    else
    {
      MR_Word TypeInfo_13_13;
      MR_Word TypeInfo_15_15;
      MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_3, (MR_Integer) 0))));
      MR_Word BoundTerm_7;
      MR_Box conv0_BoundTerm_7;
      MR_Word next_value_of_Term_3;

      {
        TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_13_13, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      {
        TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
        MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_T_11));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_11, TypeInfo_13_13, TypeInfo_15_15, (MR_Word) (Bindings_4), Var_5, &conv0_BoundTerm_7);
      if (succeeded)
      {
        BoundTerm_7 = ((MR_Word) (conv0_BoundTerm_7));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Term_3 = BoundTerm_7;
        Term_3 = next_value_of_Term_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term__are_ground_in_bindings_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Term_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = mercury__term__is_ground_in_bindings_2_p_0(TypeInfo_for_T_7, Term_4, HeadVar__2_2);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Terms_5;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term__is_ground_1_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
    MR_Word ArgTerms_3;

    if (succeeded)
    {
      ArgTerms_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = mercury__term__is_ground_list_1_p_0(TypeInfo_for_T_5, ArgTerms_3);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__is_ground_list_1_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Term_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgTerms_6;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = ((MR_tag((MR_Word) Term_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgTerms_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_2, (MR_Integer) 1))));
        succeeded = mercury__term__is_ground_list_1_p_0(TypeInfo_for_T_4, ArgTerms_6);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Terms_3;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__term__contains_var_2_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word * Var_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgTerms_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    mercury__term__contains_var_list_2_p_1(TypeInfo_for_T_9, ArgTerms_6, Var_2, cont, cont_env_ptr);
  }
  else
  {
    *Var_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    cont(cont_env_ptr);
  }
}

void MR_CALL 
mercury__term__contains_var_list_2_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word * Var_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0))
      {
        MR_Word ArgTerms_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));

        mercury__term__contains_var_list_2_p_1(TypeInfo_for_T_9, ArgTerms_15, Var_2, cont, cont_env_ptr);
      }
      else
      {
        *Var_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
        cont(cont_env_ptr);
      }
      {
        MR_Word next_value_of_HeadVar__1_1 = Var_10;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__term__contains_var_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word Var_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word ArgTerms_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__term__contains_var_list_2_p_0(TypeInfo_for_T_9, ArgTerms_6, Var_2);
    }
    else
    {
      MR_Word Var_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer CastX_12 = (MR_Integer) (Var_2);
      MR_Integer CastY_13 = (MR_Integer) (Var_3);

      succeeded = (CastX_12 == CastY_13);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_10 = (MR_Integer) (Var_2);
        MR_Integer ArgY1_11 = (MR_Integer) (Var_3);

        succeeded = (ArgX1_10 == ArgY1_11);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__contains_var_list_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word Var_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      if (((MR_tag((MR_Word) Var_11)) == (MR_Integer) 0))
      {
        MR_Word ArgTerms_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));

        succeeded = mercury__term__contains_var_list_2_p_0(TypeInfo_for_T_9, ArgTerms_15, Var_2);
      }
      else
      {
        MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
        MR_Integer CastX_20 = (MR_Integer) (Var_2);
        MR_Integer CastY_21 = (MR_Integer) (Var_12);

        succeeded = (CastX_20 == CastY_21);
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Integer ArgX1_18 = (MR_Integer) (Var_2);
          MR_Integer ArgY1_19 = (MR_Integer) (Var_12);

          succeeded = (ArgX1_18 == ArgY1_19);
        }
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__1_1 = Var_10;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__term__vars_list_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Terms_3,
  MR_Word * Vars_4)
{
  mercury__term__vars_2_list_3_p_0(TypeInfo_for_T_6, Terms_3, (MR_Word) ((MR_Unsigned) 0U), Vars_4);
}

MR_Word MR_CALL 
mercury__term__vars_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Terms_3)
{
  {
    MR_Word Vars_4;

    mercury__term__vars_2_list_3_p_0(TypeInfo_for_T_5, Terms_3, (MR_Word) ((MR_Unsigned) 0U), &Vars_4);
    return Vars_4;
  }
}

void MR_CALL 
mercury__term__vars_2_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Term_4,
  MR_Word STATE_VARIABLE_Vars_0_11,
  MR_Word * STATE_VARIABLE_Vars_12)
{
  if (((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0))
  {
    MR_Word ArgTerms_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 1))));

    mercury__term__vars_2_list_3_p_0(TypeInfo_for_T_15, ArgTerms_9, STATE_VARIABLE_Vars_0_11, STATE_VARIABLE_Vars_12);
  }
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_4, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Vars_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Vars_0_11));
    }
  }
}

MR_Word MR_CALL 
mercury__term__vars_2_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Term_4,
  MR_Word Vars0_5)
{
  {
    MR_Word Vars_6;

    if (((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0))
    {
      MR_Word ArgTerms_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 1))));

      mercury__term__vars_2_list_3_p_0(TypeInfo_for_T_7, ArgTerms_15, Vars0_5, &Vars_6);
    }
    else
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_4, (MR_Integer) 0))));

      {
        Vars_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Vars_6, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(1), Vars_6, 1) = ((MR_Box) (Vars0_5));
      }
    }
    return Vars_6;
  }
}

void MR_CALL 
mercury__term__vars_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Term_3,
  MR_Word * Vars_4)
{
  if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
  {
    MR_Word ArgTerms_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));

    mercury__term__vars_2_list_3_p_0(TypeInfo_for_T_6, ArgTerms_14, (MR_Word) ((MR_Unsigned) 0U), Vars_4);
  }
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_3, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Vars_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

MR_Word MR_CALL 
mercury__term__vars_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Term_3)
{
  {
    MR_Word Vars_4;

    if (((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0))
    {
      MR_Word ArgTerms_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));

      mercury__term__vars_2_list_3_p_0(TypeInfo_for_T_5, ArgTerms_16, (MR_Word) ((MR_Unsigned) 0U), &Vars_4);
    }
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_3, (MR_Integer) 0))));

      {
        Vars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Vars_4, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(1), Vars_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    return Vars_4;
  }
}

MR_bool MR_CALL 
mercury__term__list_subsumes_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Terms1_4,
  MR_Word Terms2_5,
  MR_Word * Subst_6)
{
  {
    MR_bool succeeded;
    MR_Word Terms2Vars_7;

    mercury__term__vars_2_list_3_p_0(TypeInfo_for_T_9, Terms2_5, (MR_Word) ((MR_Unsigned) 0U), &Terms2Vars_7);
    succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(TypeInfo_for_T_9, Terms1_4, Terms2_5, Terms2Vars_7, (MR_Word) ((MR_Unsigned) 0U), Subst_6);
    return succeeded;
  }
}

void MR_CALL 
mercury__term__vars_2_list_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Vars_0_2,
  MR_Word * STATE_VARIABLE_Vars_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Vars_3 = STATE_VARIABLE_Vars_0_2;
    else
    {
      MR_Word Term_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Terms_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Vars_12_12;

      mercury__term__vars_2_list_3_p_0(TypeInfo_for_T_14, Terms_8, STATE_VARIABLE_Vars_0_2, &STATE_VARIABLE_Vars_12_12);
      if (((MR_tag((MR_Word) Term_7)) == (MR_Integer) 0))
      {
        MR_Word ArgTerms_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_7, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__1_1 = ArgTerms_22;
        MR_Word next_value_of_STATE_VARIABLE_Vars_0_2 = STATE_VARIABLE_Vars_12_12;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Vars_0_2 = next_value_of_STATE_VARIABLE_Vars_0_2;
        continue;
      }
      else
      {
        MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_7, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Vars_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Vars_12_12));
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__term__unify_term_dont_bind_5_p_0(
  MR_Word TypeInfo_for_T_56,
  MR_Word TermX_6,
  MR_Word TermY_7,
  MR_Word DontBindVars_8,
  MR_Word STATE_VARIABLE_Subst_0_34,
  MR_Word * STATE_VARIABLE_Subst_35)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) TermX_6)) == (MR_Integer) 0))
    {
      MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermX_6, (MR_Integer) 1))));
      MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermX_6, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TermY_7)) == (MR_Integer) 0))
      {
        MR_Word TypeCtorInfo_105_105;
        MR_Word TypeInfo_106_106;
        MR_Word NameY_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermY_7, (MR_Integer) 0))));
        MR_Integer ArityX_32;
        MR_Integer ArityY_33;
        MR_Word ArgTermsY_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermY_7, (MR_Integer) 1))));

        succeeded = mercury__term____Unify____const_0_0(Var_111, NameY_30);
        if (succeeded)
        {
          TypeCtorInfo_105_105 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
          {
            TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_106_106, 0) = ((MR_Box) (TypeCtorInfo_105_105));
            MR_hl_field(MR_mktag(0), TypeInfo_106_106, 1) = ((MR_Box) (TypeInfo_for_T_56));
          }
          mercury__list__length_2_p_0(TypeInfo_106_106, (MR_Word) (Var_110), &ArityX_32);
          mercury__list__length_2_p_0(TypeInfo_106_106, (MR_Word) (ArgTermsY_54), &ArityY_33);
          succeeded = (ArityX_32 == ArityY_33);
          if (succeeded)
            succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(TypeInfo_for_T_56, Var_110, ArgTermsY_54, DontBindVars_8, STATE_VARIABLE_Subst_0_34, STATE_VARIABLE_Subst_35);
        }
      }
      else
      {
        MR_Word Y_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermY_7, (MR_Integer) 0))));
        MR_Word TermBoundToY_51;
        MR_Word TypeInfo_96_96;
        MR_Word TypeInfo_98_98;
        MR_Box conv0_TermBoundToY_51;

        {
          TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_for_T_56));
        }
        {
          TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_98_98, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(MR_mktag(0), TypeInfo_98_98, 1) = ((MR_Box) (TypeInfo_for_T_56));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_96_96, TypeInfo_98_98, (MR_Word) (STATE_VARIABLE_Subst_0_34), Y_52, &conv0_TermBoundToY_51);
        if (succeeded)
        {
          TermBoundToY_51 = ((MR_Word) (conv0_TermBoundToY_51));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_TermY_7 = TermBoundToY_51;

          // direct tailcall eliminated
          ;
          TermY_7 = next_value_of_TermY_7;
          continue;
        }
        else
        {
          MR_Word TypeCtorInfo_101_101;
          MR_Word TypeInfo_102_102;
          MR_Word TypeCtorInfo_103_103;
          MR_Word TypeInfo_104_104;
          MR_Word conv1_STATE_VARIABLE_Subst_35;

          succeeded = mercury__term__occurs_list_3_p_0(TypeInfo_for_T_56, Var_110, Y_52, STATE_VARIABLE_Subst_0_34);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_56, Y_52, DontBindVars_8);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeCtorInfo_101_101 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
              TypeCtorInfo_103_103 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
              {
                TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_102_102, 0) = ((MR_Box) (TypeCtorInfo_101_101));
                MR_hl_field(MR_mktag(0), TypeInfo_102_102, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              {
                TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_104_104, 0) = ((MR_Box) (TypeCtorInfo_103_103));
                MR_hl_field(MR_mktag(0), TypeInfo_104_104, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_102_102, TypeInfo_104_104, Y_52, ((MR_Box) (TermX_6)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv1_STATE_VARIABLE_Subst_35);
              *STATE_VARIABLE_Subst_35 = (MR_Word) (conv1_STATE_VARIABLE_Subst_35);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    else
    {
      MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermX_6, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TermY_7)) == (MR_Integer) 0))
      {
        MR_Word ArgTermsY_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermY_7, (MR_Integer) 1))));
        MR_Word TermBoundToX_48;
        MR_Word TypeInfo_86_86;
        MR_Word TypeInfo_88_88;
        MR_Box conv2_TermBoundToX_48;

        {
          TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_86_86, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_86_86, 1) = ((MR_Box) (TypeInfo_for_T_56));
        }
        {
          TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_88_88, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(MR_mktag(0), TypeInfo_88_88, 1) = ((MR_Box) (TypeInfo_for_T_56));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_86_86, TypeInfo_88_88, (MR_Word) (STATE_VARIABLE_Subst_0_34), Var_113, &conv2_TermBoundToX_48);
        if (succeeded)
        {
          TermBoundToX_48 = ((MR_Word) (conv2_TermBoundToX_48));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_TermX_6 = TermBoundToX_48;

          // direct tailcall eliminated
          ;
          TermX_6 = next_value_of_TermX_6;
          continue;
        }
        else
        {
          MR_Word TypeCtorInfo_91_91;
          MR_Word TypeInfo_92_92;
          MR_Word TypeCtorInfo_93_93;
          MR_Word TypeInfo_94_94;
          MR_Word conv3_STATE_VARIABLE_Subst_35;

          succeeded = mercury__term__occurs_list_3_p_0(TypeInfo_for_T_56, ArgTermsY_22, Var_113, STATE_VARIABLE_Subst_0_34);
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_56, Var_113, DontBindVars_8);
            succeeded = !(succeeded);
            if (succeeded)
            {
              TypeCtorInfo_91_91 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
              TypeCtorInfo_93_93 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
              {
                TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_92_92, 0) = ((MR_Box) (TypeCtorInfo_91_91));
                MR_hl_field(MR_mktag(0), TypeInfo_92_92, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              {
                TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_94_94, 0) = ((MR_Box) (TypeCtorInfo_93_93));
                MR_hl_field(MR_mktag(0), TypeInfo_94_94, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_92_92, TypeInfo_94_94, Var_113, ((MR_Box) (TermY_7)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv3_STATE_VARIABLE_Subst_35);
              *STATE_VARIABLE_Subst_35 = (MR_Word) (conv3_STATE_VARIABLE_Subst_35);
              succeeded = MR_TRUE;
            }
          }
        }
      }
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermY_7, (MR_Integer) 0))));

        succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_56, Y_12, DontBindVars_8);
        if (succeeded)
          succeeded = mercury__term__unify_term_bound_var_5_p_0(TypeInfo_for_T_56, Var_113, Y_12, DontBindVars_8, STATE_VARIABLE_Subst_0_34, STATE_VARIABLE_Subst_35);
        else
        {
          succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_56, Var_113, DontBindVars_8);
          if (succeeded)
            succeeded = mercury__term__unify_term_bound_var_5_p_0(TypeInfo_for_T_56, Y_12, Var_113, DontBindVars_8, STATE_VARIABLE_Subst_0_34, STATE_VARIABLE_Subst_35);
          else
          {
            MR_Word TypeInfo_62_62;
            MR_Word TypeInfo_64_64;
            MR_Word TermBoundToX_14;
            MR_Box conv4_TermBoundToX_14;

            {
              TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_62_62, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
              MR_hl_field(MR_mktag(0), TypeInfo_62_62, 1) = ((MR_Box) (TypeInfo_for_T_56));
            }
            {
              TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_64_64, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
              MR_hl_field(MR_mktag(0), TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_for_T_56));
            }
            succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_62_62, TypeInfo_64_64, (MR_Word) (STATE_VARIABLE_Subst_0_34), Var_113, &conv4_TermBoundToX_14);
            if (succeeded)
            {
              TermBoundToX_14 = ((MR_Word) (conv4_TermBoundToX_14));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_Word TermBoundToY_15;
              MR_Box conv5_TermBoundToY_15;

              succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_62_62, TypeInfo_64_64, (MR_Word) (STATE_VARIABLE_Subst_0_34), Y_12, &conv5_TermBoundToY_15);
              if (succeeded)
              {
                TermBoundToY_15 = ((MR_Word) (conv5_TermBoundToY_15));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word next_value_of_TermX_6 = TermBoundToX_14;
                MR_Word next_value_of_TermY_7 = TermBoundToY_15;

                // direct tailcall eliminated
                ;
                TermX_6 = next_value_of_TermX_6;
                TermY_7 = next_value_of_TermY_7;
                continue;
              }
              else
              {
                MR_Word SubstTermBoundToX_16;
                MR_Word Var_107;

                mercury__term__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_56, STATE_VARIABLE_Subst_0_34, TermBoundToX_14, &SubstTermBoundToX_16);
                succeeded = ((MR_tag((MR_Word) SubstTermBoundToX_16)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubstTermBoundToX_16, (MR_Integer) 0))));
                  succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_56, Y_12, Var_107);
                }
                if (succeeded)
                {
                  *STATE_VARIABLE_Subst_35 = STATE_VARIABLE_Subst_0_34;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word conv6_STATE_VARIABLE_Subst_35;

                  succeeded = mercury__term__occurs_3_p_0(TypeInfo_for_T_56, SubstTermBoundToX_16, Y_12, STATE_VARIABLE_Subst_0_34);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_62_62, TypeInfo_64_64, Y_12, ((MR_Box) (SubstTermBoundToX_16)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv6_STATE_VARIABLE_Subst_35);
                    *STATE_VARIABLE_Subst_35 = (MR_Word) (conv6_STATE_VARIABLE_Subst_35);
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
            else
            {
              MR_Word TypeInfo_74_74;
              MR_Word TypeInfo_76_76;
              MR_Word TermBoundToY_47;
              MR_Box conv7_TermBoundToY_47;

              {
                TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_74_74, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                MR_hl_field(MR_mktag(0), TypeInfo_74_74, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              {
                TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_76_76, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
                MR_hl_field(MR_mktag(0), TypeInfo_76_76, 1) = ((MR_Box) (TypeInfo_for_T_56));
              }
              succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_56, TypeInfo_74_74, TypeInfo_76_76, (MR_Word) (STATE_VARIABLE_Subst_0_34), Y_12, &conv7_TermBoundToY_47);
              if (succeeded)
              {
                TermBoundToY_47 = ((MR_Word) (conv7_TermBoundToY_47));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word SubstTermBoundToY_18;
                MR_Word Var_108;

                mercury__term__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_56, STATE_VARIABLE_Subst_0_34, TermBoundToY_47, &SubstTermBoundToY_18);
                succeeded = ((MR_tag((MR_Word) SubstTermBoundToY_18)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubstTermBoundToY_18, (MR_Integer) 0))));
                  succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_56, Var_113, Var_108);
                }
                if (succeeded)
                {
                  *STATE_VARIABLE_Subst_35 = STATE_VARIABLE_Subst_0_34;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word conv8_STATE_VARIABLE_Subst_35;

                  succeeded = mercury__term__occurs_3_p_0(TypeInfo_for_T_56, SubstTermBoundToY_18, Var_113, STATE_VARIABLE_Subst_0_34);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_74_74, TypeInfo_76_76, Var_113, ((MR_Box) (SubstTermBoundToY_18)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv8_STATE_VARIABLE_Subst_35);
                    *STATE_VARIABLE_Subst_35 = (MR_Word) (conv8_STATE_VARIABLE_Subst_35);
                    succeeded = MR_TRUE;
                  }
                }
              }
              else
              {
                succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_56, Var_113, Y_12);
                if (succeeded)
                  *STATE_VARIABLE_Subst_35 = STATE_VARIABLE_Subst_0_34;
                else
                {
                  MR_Word TypeInfo_82_82;
                  MR_Word TypeInfo_84_84;
                  MR_Word conv9_STATE_VARIABLE_Subst_35;

                  {
                    TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_82_82, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                    MR_hl_field(MR_mktag(0), TypeInfo_82_82, 1) = ((MR_Box) (TypeInfo_for_T_56));
                  }
                  {
                    TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_84_84, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
                    MR_hl_field(MR_mktag(0), TypeInfo_84_84, 1) = ((MR_Box) (TypeInfo_for_T_56));
                  }
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_56, TypeInfo_82_82, TypeInfo_84_84, Var_113, ((MR_Box) (TermY_7)), (MR_Word) (STATE_VARIABLE_Subst_0_34), &conv9_STATE_VARIABLE_Subst_35);
                  *STATE_VARIABLE_Subst_35 = (MR_Word) (conv9_STATE_VARIABLE_Subst_35);
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term__unify_term_list_dont_bind_5_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word DontBindVars_3,
  MR_Word STATE_VARIABLE_Subst_0_4,
  MR_Word * STATE_VARIABLE_Subst_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_5 = STATE_VARIABLE_Subst_0_4;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TermX_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TermXs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TermY_12;
      MR_Word TermYs_13;
      MR_Word STATE_VARIABLE_Subst_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermY_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TermYs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__term__unify_term_dont_bind_5_p_0(TypeInfo_for_T_20, TermX_10, TermY_12, DontBindVars_3, STATE_VARIABLE_Subst_0_4, &STATE_VARIABLE_Subst_18_18);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = TermXs_11;
          next_value_of_HeadVar__2_2 = TermYs_13;
          next_value_of_STATE_VARIABLE_Subst_0_4 = STATE_VARIABLE_Subst_18_18;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Subst_0_4 = next_value_of_STATE_VARIABLE_Subst_0_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word X_6,
  MR_Word BoundY_7,
  MR_Word DontBindVars_8,
  MR_Word STATE_VARIABLE_Subst_0_13,
  MR_Word * STATE_VARIABLE_Subst_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TermBoundToX_10;
    MR_Word TypeInfo_21_21;
    MR_Word TypeInfo_23_23;
    MR_Box conv0_TermBoundToX_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    {
      TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
      MR_hl_field(MR_mktag(0), TypeInfo_21_21, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_19));
    }
    succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_19, TypeInfo_21_21, TypeInfo_23_23, (MR_Word) (STATE_VARIABLE_Subst_0_13), X_6, &conv0_TermBoundToX_10);
    if (succeeded)
    {
      TermBoundToX_10 = ((MR_Word) (conv0_TermBoundToX_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word NewX_11;
      MR_Word next_value_of_X_6;

      succeeded = ((MR_tag((MR_Word) TermBoundToX_10)) == (MR_Integer) 1);
      if (succeeded)
      {
        NewX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermBoundToX_10, (MR_Integer) 0))));
        // direct tailcall eliminated
        ;
        next_value_of_X_6 = NewX_11;
        X_6 = next_value_of_X_6;
        continue;
      }
    }
    else
    {
      MR_Integer CastX_36 = (MR_Integer) (X_6);
      MR_Integer CastY_37 = (MR_Integer) (BoundY_7);

      succeeded = (CastX_36 == CastY_37);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_34 = (MR_Integer) (X_6);
        MR_Integer ArgY1_35 = (MR_Integer) (BoundY_7);

        succeeded = (ArgX1_34 == ArgY1_35);
      }
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_14 = STATE_VARIABLE_Subst_0_13;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word TypeCtorInfo_26_26;
        MR_Word TypeInfo_27_27;
        MR_Word TypeCtorInfo_28_28;
        MR_Word TypeInfo_29_29;
        MR_Word Var_16;
        MR_Word Var_18;
        MR_Word conv1_STATE_VARIABLE_Subst_14;

        succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(TypeInfo_for_T_19, X_6, DontBindVars_8);
        succeeded = !(succeeded);
        if (succeeded)
        {
          TypeCtorInfo_26_26 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
          TypeCtorInfo_28_28 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
          Var_18 = (MR_Word) (&mercury__term_scalar_common_1[2]);
          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (BoundY_7));
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_18));
          }
          {
            TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_27_27, 0) = ((MR_Box) (TypeCtorInfo_26_26));
            MR_hl_field(MR_mktag(0), TypeInfo_27_27, 1) = ((MR_Box) (TypeInfo_for_T_19));
          }
          {
            TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_29_29, 0) = ((MR_Box) (TypeCtorInfo_28_28));
            MR_hl_field(MR_mktag(0), TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_T_19));
          }
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_19, TypeInfo_27_27, TypeInfo_29_29, X_6, ((MR_Box) (Var_16)), (MR_Word) (STATE_VARIABLE_Subst_0_13), &conv1_STATE_VARIABLE_Subst_14);
          *STATE_VARIABLE_Subst_14 = (MR_Word) (conv1_STATE_VARIABLE_Subst_14);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
  MR_Word Var_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_10;
    MR_Word Var_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      {
        MR_Integer Var_14 = (MR_Integer) (HeadVar__1_1);
        MR_Integer Var_15 = (MR_Integer) (Var_11);

        succeeded = (Var_14 == Var_15);
      }
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__2_2 = Var_10;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term__unify_term_4_p_0(
  MR_Word TypeInfo_for_T_50,
  MR_Word TermX_5,
  MR_Word TermY_6,
  MR_Word STATE_VARIABLE_Subst_0_30,
  MR_Word * STATE_VARIABLE_Subst_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) TermX_5)) == (MR_Integer) 0))
    {
      MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermX_5, (MR_Integer) 1))));
      MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermX_5, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TermY_6)) == (MR_Integer) 0))
      {
        MR_Word NameY_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermY_6, (MR_Integer) 0))));
        MR_Word ArgTermsY_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermY_6, (MR_Integer) 1))));

        succeeded = mercury__term____Unify____const_0_0(Var_95, NameY_28);
        if (succeeded)
          succeeded = mercury__term__unify_term_list_4_p_0(TypeInfo_for_T_50, Var_94, ArgTermsY_48, STATE_VARIABLE_Subst_0_30, STATE_VARIABLE_Subst_31);
      }
      else
      {
        MR_Word Y_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermY_6, (MR_Integer) 0))));
        MR_Word TermBoundToY_45;
        MR_Word TypeInfo_84_84;
        MR_Word TypeInfo_86_86;
        MR_Box conv0_TermBoundToY_45;

        {
          TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_84_84, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_84_84, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        {
          TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_86_86, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(MR_mktag(0), TypeInfo_86_86, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_84_84, TypeInfo_86_86, (MR_Word) (STATE_VARIABLE_Subst_0_30), Y_46, &conv0_TermBoundToY_45);
        if (succeeded)
        {
          TermBoundToY_45 = ((MR_Word) (conv0_TermBoundToY_45));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_TermY_6 = TermBoundToY_45;

          // direct tailcall eliminated
          ;
          TermY_6 = next_value_of_TermY_6;
          continue;
        }
        else
        {
          MR_Word TypeCtorInfo_87_87;
          MR_Word TypeInfo_88_88;
          MR_Word TypeCtorInfo_89_89;
          MR_Word TypeInfo_90_90;
          MR_Word conv1_STATE_VARIABLE_Subst_31;

          succeeded = mercury__term__occurs_list_3_p_0(TypeInfo_for_T_50, Var_94, Y_46, STATE_VARIABLE_Subst_0_30);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeCtorInfo_87_87 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
            TypeCtorInfo_89_89 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
            {
              TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_88_88, 0) = ((MR_Box) (TypeCtorInfo_87_87));
              MR_hl_field(MR_mktag(0), TypeInfo_88_88, 1) = ((MR_Box) (TypeInfo_for_T_50));
            }
            {
              TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_90_90, 0) = ((MR_Box) (TypeCtorInfo_89_89));
              MR_hl_field(MR_mktag(0), TypeInfo_90_90, 1) = ((MR_Box) (TypeInfo_for_T_50));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_88_88, TypeInfo_90_90, Y_46, ((MR_Box) (TermX_5)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv1_STATE_VARIABLE_Subst_31);
            *STATE_VARIABLE_Subst_31 = (MR_Word) (conv1_STATE_VARIABLE_Subst_31);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    else
    {
      MR_Word Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermX_5, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) TermY_6)) == (MR_Integer) 0))
      {
        MR_Word ArgTermsY_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TermY_6, (MR_Integer) 1))));
        MR_Word TermBoundToX_42;
        MR_Word TypeInfo_76_76;
        MR_Word TypeInfo_78_78;
        MR_Box conv2_TermBoundToX_42;

        {
          TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_76_76, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_76_76, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        {
          TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_78_78, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(MR_mktag(0), TypeInfo_78_78, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_76_76, TypeInfo_78_78, (MR_Word) (STATE_VARIABLE_Subst_0_30), Var_97, &conv2_TermBoundToX_42);
        if (succeeded)
        {
          TermBoundToX_42 = ((MR_Word) (conv2_TermBoundToX_42));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word next_value_of_TermX_5 = TermBoundToX_42;

          // direct tailcall eliminated
          ;
          TermX_5 = next_value_of_TermX_5;
          continue;
        }
        else
        {
          MR_Word TypeCtorInfo_79_79;
          MR_Word TypeInfo_80_80;
          MR_Word TypeCtorInfo_81_81;
          MR_Word TypeInfo_82_82;
          MR_Word conv3_STATE_VARIABLE_Subst_31;

          succeeded = mercury__term__occurs_list_3_p_0(TypeInfo_for_T_50, ArgTermsY_20, Var_97, STATE_VARIABLE_Subst_0_30);
          succeeded = !(succeeded);
          if (succeeded)
          {
            TypeCtorInfo_79_79 = (MR_Word) (&mercury__term__term__type_ctor_info_var_1);
            TypeCtorInfo_81_81 = (MR_Word) (&mercury__term__term__type_ctor_info_term_1);
            {
              TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_80_80, 0) = ((MR_Box) (TypeCtorInfo_79_79));
              MR_hl_field(MR_mktag(0), TypeInfo_80_80, 1) = ((MR_Box) (TypeInfo_for_T_50));
            }
            {
              TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_82_82, 0) = ((MR_Box) (TypeCtorInfo_81_81));
              MR_hl_field(MR_mktag(0), TypeInfo_82_82, 1) = ((MR_Box) (TypeInfo_for_T_50));
            }
            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_80_80, TypeInfo_82_82, Var_97, ((MR_Box) (TermY_6)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv3_STATE_VARIABLE_Subst_31);
            *STATE_VARIABLE_Subst_31 = (MR_Word) (conv3_STATE_VARIABLE_Subst_31);
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        MR_Word Y_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TermY_6, (MR_Integer) 0))));
        MR_Word TypeInfo_52_52;
        MR_Word TypeInfo_54_54;
        MR_Word TermBoundToX_12;
        MR_Box conv4_TermBoundToX_12;

        {
          TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_52_52, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        {
          TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_54_54, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(MR_mktag(0), TypeInfo_54_54, 1) = ((MR_Box) (TypeInfo_for_T_50));
        }
        succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_52_52, TypeInfo_54_54, (MR_Word) (STATE_VARIABLE_Subst_0_30), Var_97, &conv4_TermBoundToX_12);
        if (succeeded)
        {
          TermBoundToX_12 = ((MR_Word) (conv4_TermBoundToX_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word TermBoundToY_13;
          MR_Box conv5_TermBoundToY_13;

          succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_52_52, TypeInfo_54_54, (MR_Word) (STATE_VARIABLE_Subst_0_30), Y_10, &conv5_TermBoundToY_13);
          if (succeeded)
          {
            TermBoundToY_13 = ((MR_Word) (conv5_TermBoundToY_13));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word next_value_of_TermX_5 = TermBoundToX_12;
            MR_Word next_value_of_TermY_6 = TermBoundToY_13;

            // direct tailcall eliminated
            ;
            TermX_5 = next_value_of_TermX_5;
            TermY_6 = next_value_of_TermY_6;
            continue;
          }
          else
          {
            MR_Word SubstTermBoundToX_14;
            MR_Word Var_91;

            mercury__term__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_50, STATE_VARIABLE_Subst_0_30, TermBoundToX_12, &SubstTermBoundToX_14);
            succeeded = ((MR_tag((MR_Word) SubstTermBoundToX_14)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubstTermBoundToX_14, (MR_Integer) 0))));
              succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_50, Y_10, Var_91);
            }
            if (succeeded)
            {
              *STATE_VARIABLE_Subst_31 = STATE_VARIABLE_Subst_0_30;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word conv6_STATE_VARIABLE_Subst_31;

              succeeded = mercury__term__occurs_3_p_0(TypeInfo_for_T_50, SubstTermBoundToX_14, Y_10, STATE_VARIABLE_Subst_0_30);
              succeeded = !(succeeded);
              if (succeeded)
              {
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_52_52, TypeInfo_54_54, Y_10, ((MR_Box) (SubstTermBoundToX_14)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv6_STATE_VARIABLE_Subst_31);
                *STATE_VARIABLE_Subst_31 = (MR_Word) (conv6_STATE_VARIABLE_Subst_31);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          MR_Word TypeInfo_64_64;
          MR_Word TypeInfo_66_66;
          MR_Word TermBoundToY_41;
          MR_Box conv7_TermBoundToY_41;

          {
            TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_64_64, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
            MR_hl_field(MR_mktag(0), TypeInfo_64_64, 1) = ((MR_Box) (TypeInfo_for_T_50));
          }
          {
            TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_66_66, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
            MR_hl_field(MR_mktag(0), TypeInfo_66_66, 1) = ((MR_Box) (TypeInfo_for_T_50));
          }
          succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_50, TypeInfo_64_64, TypeInfo_66_66, (MR_Word) (STATE_VARIABLE_Subst_0_30), Y_10, &conv7_TermBoundToY_41);
          if (succeeded)
          {
            TermBoundToY_41 = ((MR_Word) (conv7_TermBoundToY_41));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word SubstTermBoundToY_16;
            MR_Word Var_92;

            mercury__term__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_50, STATE_VARIABLE_Subst_0_30, TermBoundToY_41, &SubstTermBoundToY_16);
            succeeded = ((MR_tag((MR_Word) SubstTermBoundToY_16)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubstTermBoundToY_16, (MR_Integer) 0))));
              succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_50, Var_97, Var_92);
            }
            if (succeeded)
            {
              *STATE_VARIABLE_Subst_31 = STATE_VARIABLE_Subst_0_30;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word conv8_STATE_VARIABLE_Subst_31;

              succeeded = mercury__term__occurs_3_p_0(TypeInfo_for_T_50, SubstTermBoundToY_16, Var_97, STATE_VARIABLE_Subst_0_30);
              succeeded = !(succeeded);
              if (succeeded)
              {
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_64_64, TypeInfo_66_66, Var_97, ((MR_Box) (SubstTermBoundToY_16)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv8_STATE_VARIABLE_Subst_31);
                *STATE_VARIABLE_Subst_31 = (MR_Word) (conv8_STATE_VARIABLE_Subst_31);
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            succeeded = mercury__term____Unify____var_1_0(TypeInfo_for_T_50, Var_97, Y_10);
            if (succeeded)
              *STATE_VARIABLE_Subst_31 = STATE_VARIABLE_Subst_0_30;
            else
            {
              MR_Word TypeInfo_72_72;
              MR_Word TypeInfo_74_74;
              MR_Word conv9_STATE_VARIABLE_Subst_31;

              {
                TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_72_72, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
                MR_hl_field(MR_mktag(0), TypeInfo_72_72, 1) = ((MR_Box) (TypeInfo_for_T_50));
              }
              {
                TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_74_74, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
                MR_hl_field(MR_mktag(0), TypeInfo_74_74, 1) = ((MR_Box) (TypeInfo_for_T_50));
              }
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(TypeInfo_for_T_50, TypeInfo_72_72, TypeInfo_74_74, Var_97, ((MR_Box) (TermY_6)), (MR_Word) (STATE_VARIABLE_Subst_0_30), &conv9_STATE_VARIABLE_Subst_31);
              *STATE_VARIABLE_Subst_31 = (MR_Word) (conv9_STATE_VARIABLE_Subst_31);
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term__unify_term_list_4_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Subst_0_3,
  MR_Word * STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *STATE_VARIABLE_Subst_4 = STATE_VARIABLE_Subst_0_3;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Word TermX_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TermXs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TermY_10;
      MR_Word TermYs_11;
      MR_Word STATE_VARIABLE_Subst_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Subst_0_3;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TermY_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TermYs_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = mercury__term__unify_term_4_p_0(TypeInfo_for_T_17, TermX_8, TermY_10, STATE_VARIABLE_Subst_0_3, &STATE_VARIABLE_Subst_15_15);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = TermXs_9;
          next_value_of_HeadVar__2_2 = TermYs_11;
          next_value_of_STATE_VARIABLE_Subst_0_3 = STATE_VARIABLE_Subst_15_15;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Subst_0_3 = next_value_of_STATE_VARIABLE_Subst_0_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term____Unify____var_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

MR_bool MR_CALL 
mercury__term____Unify____const_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Word ArgX3_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
            MR_Word ArgY3_10;
            MR_Word ArgX4_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word ArgY4_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
              ArgY4_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 7);
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
            MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_14;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_14 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Float ArgX1_15 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Float ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_16 = MR_unbox_float((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (ArgX1_15 == ArgY1_16);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__term__apply_rec_substitution_in_term_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Subst_4,
  MR_Word Term0_5,
  MR_Word * Term_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term0_5)) == (MR_Integer) 0))
    {
      MR_Word Name_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_5, (MR_Integer) 0))));
      MR_Word ArgTerms0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_5, (MR_Integer) 1))));
      MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term0_5, (MR_Integer) 2))));
      MR_Word ArgTerms_13;

      mercury__term__apply_rec_substitution_in_terms_3_p_0(TypeInfo_for_T_14, Subst_4, ArgTerms0_11, &ArgTerms_13);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *Term_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ArgTerms_13));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Context_12));
      }
    }
    else
    {
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term0_5, (MR_Integer) 0))));
      MR_Word ReplacementTerm_9;
      MR_Word TypeInfo_16_16;
      MR_Word TypeInfo_18_18;
      MR_Box conv0_ReplacementTerm_9;

      {
        TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
        MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      {
        TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
        MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
      }
      succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_14, TypeInfo_16_16, TypeInfo_18_18, (MR_Word) (Subst_4), Var_7, &conv0_ReplacementTerm_9);
      if (succeeded)
      {
        ReplacementTerm_9 = ((MR_Word) (conv0_ReplacementTerm_9));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word next_value_of_Term0_5 = ReplacementTerm_9;

        // direct tailcall eliminated
        ;
        Term0_5 = next_value_of_Term0_5;
        continue;
      }
      else
        *Term_6 = Term0_5;
    }
    break;
  }
}

void MR_CALL 
mercury__term__apply_rec_substitution_in_terms_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Term0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Terms0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Term_8;
    MR_Word Terms_9;

    mercury__term__apply_rec_substitution_in_term_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Term0_6, &Term_8);
    mercury__term__apply_rec_substitution_in_terms_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Terms0_7, &Terms_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Term_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Terms_9));
    }
  }
}

MR_bool MR_CALL 
mercury__term__occurs_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Term_4,
  MR_Word Var_5,
  MR_Word Subst_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Term_4)) == (MR_Integer) 0))
    {
      MR_Word ArgTerms_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_4, (MR_Integer) 1))));

      succeeded = mercury__term__occurs_list_3_p_0(TypeInfo_for_T_14, ArgTerms_11, Var_5, Subst_6);
    }
    else
    {
      MR_Word X_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Term_4, (MR_Integer) 0))));
      MR_Integer CastX_21 = (MR_Integer) (X_7);
      MR_Integer CastY_22 = (MR_Integer) (Var_5);

      succeeded = (CastX_21 == CastY_22);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer ArgX1_19 = (MR_Integer) (X_7);
        MR_Integer ArgY1_20 = (MR_Integer) (Var_5);

        succeeded = (ArgX1_19 == ArgY1_20);
      }
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word TypeInfo_16_16;
        MR_Word TypeInfo_18_18;
        MR_Word TermBoundToX_9;
        MR_Box conv0_TermBoundToX_9;
        MR_Word next_value_of_Term_4;

        {
          TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
          MR_hl_field(MR_mktag(0), TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_T_14));
        }
        {
          TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_term_1));
          MR_hl_field(MR_mktag(0), TypeInfo_18_18, 1) = ((MR_Box) (TypeInfo_for_T_14));
        }
        succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(TypeInfo_for_T_14, TypeInfo_16_16, TypeInfo_18_18, (MR_Word) (Subst_6), X_7, &conv0_TermBoundToX_9);
        if (succeeded)
        {
          TermBoundToX_9 = ((MR_Word) (conv0_TermBoundToX_9));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_Term_4 = TermBoundToX_9;
          Term_4 = next_value_of_Term_4;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__term__occurs_list_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1,
  MR_Word Var_6,
  MR_Word Subst_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Term_4;
    MR_Word Terms_5;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Term_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Terms_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      succeeded = mercury__term__occurs_3_p_0(TypeInfo_for_T_8, Term_4, Var_6, Subst_7);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Terms_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__term__uint64_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  uint64_t UInt64_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;

    Var_9 = mercury__integer__from_uint64_1_f_0(UInt64_4);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
mercury__term__uint32_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  uint32_t UInt32_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;

    Var_9 = mercury__integer__from_uint32_1_f_0(UInt32_4);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
mercury__term__uint16_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  uint16_t UInt16_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;
    MR_Integer V_5_16;

{
#define MR_PROC_LABEL mercury__term__uint16_to_decimal_term_2_f_0

	uint16_t U16;
	MR_Integer I;

	U16 = UInt16_4 ;
		{

    I = U16;


		;}
#undef MR_PROC_LABEL
	 V_5_16  = I;
}
    Var_9 = mercury__integer__int_to_integer_1_f_0(V_5_16);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
mercury__term__uint8_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  uint8_t UInt8_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;
    MR_Integer V_5_16;

{
#define MR_PROC_LABEL mercury__term__uint8_to_decimal_term_2_f_0

	uint8_t U8;
	MR_Integer I;

	U8 = UInt8_4 ;
		{

    I = U8;


		;}
#undef MR_PROC_LABEL
	 V_5_16  = I;
}
    Var_9 = mercury__integer__int_to_integer_1_f_0(V_5_16);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
mercury__term__uint_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Unsigned UInt_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;

    Var_9 = mercury__integer__from_uint_1_f_0(UInt_4);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
mercury__term__int64_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  int64_t Int64_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;

    Var_9 = mercury__integer__from_int64_1_f_0(Int64_4);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 4)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
mercury__term__int32_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  int32_t Int32_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;
    MR_Integer V_5_16;

{
#define MR_PROC_LABEL mercury__term__int32_to_decimal_term_2_f_0

	int32_t I32;
	MR_Integer I;

	I32 = Int32_4 ;
		{

    I = I32;


		;}
#undef MR_PROC_LABEL
	 V_5_16  = I;
}
    Var_9 = mercury__integer__int_to_integer_1_f_0(V_5_16);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 3)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
mercury__term__int16_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  int16_t Int16_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;
    MR_Integer V_5_16;

{
#define MR_PROC_LABEL mercury__term__int16_to_decimal_term_2_f_0

	int16_t I16;
	MR_Integer I;

	I16 = Int16_4 ;
		{

    I = I16;


		;}
#undef MR_PROC_LABEL
	 V_5_16  = I;
}
    Var_9 = mercury__integer__int_to_integer_1_f_0(V_5_16);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 2)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
mercury__term__int8_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  int8_t Int8_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;
    MR_Integer V_5_16;

{
#define MR_PROC_LABEL mercury__term__int8_to_decimal_term_2_f_0

	int8_t I8;
	MR_Integer I;

	I8 = Int8_4 ;
		{

    I = I8;


		;}
#undef MR_PROC_LABEL
	 V_5_16  = I;
}
    Var_9 = mercury__integer__int_to_integer_1_f_0(V_5_16);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 1)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_Word MR_CALL 
mercury__term__int_to_decimal_term_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Integer Int_4,
  MR_Word Context_5)
{
  {
    MR_Word Term_6;
    MR_Word Const_7;
    MR_Word Var_9;

    Var_9 = mercury__integer__int_to_integer_1_f_0(Int_4);
    {
      Const_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Const_7, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(1), Const_7, 1) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(1), Const_7, 2) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (MR_Unsigned) ((MR_Integer) 0)));
    }
    {
      Term_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Term_6, 0) = ((MR_Box) (Const_7));
      MR_hl_field(MR_mktag(0), Term_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Term_6, 2) = ((MR_Box) (Context_5));
    }
    return Term_6;
  }
}

MR_bool MR_CALL 
mercury__term__decimal_term_to_int_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  MR_Integer * Int_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 0))) & (MR_Integer) 3);
          Integer_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_9 == (MR_Integer) 2);
          if (succeeded)
          {
            succeeded = (Var_10 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Var_11 == (MR_Integer) 0);
              if (succeeded)
                succeeded = mercury__integer__to_int_2_p_0(Integer_7, Int_4);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_uint64_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  uint64_t * UInt64_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 4);
            if (succeeded)
              succeeded = mercury__integer__to_uint64_2_p_0(Integer_8, UInt64_4);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_uint32_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  uint32_t * UInt32_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 3);
            if (succeeded)
              succeeded = mercury__integer__to_uint32_2_p_0(Integer_8, UInt32_4);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_uint16_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  uint16_t * UInt16_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer V_5_15;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 2);
            if (succeeded)
            {
              succeeded = mercury__integer__to_int_2_p_0(Integer_8, &V_5_15);
              if (succeeded)
                succeeded = mercury__uint16__from_int_2_p_0(V_5_15, UInt16_4);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_uint8_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  uint8_t * UInt8_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 1);
            if (succeeded)
              succeeded = mercury__integer__to_uint8_2_p_0(Integer_8, UInt8_4);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_uint_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  MR_Unsigned * UInt_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 0);
            if (succeeded)
              succeeded = mercury__integer__to_uint_2_p_0(Integer_8, UInt_4);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_int64_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  int64_t * Int64_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 4);
            if (succeeded)
              succeeded = mercury__integer__to_int64_2_p_0(Integer_8, Int64_4);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_int32_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  int32_t * Int32_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer V_5_15;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 3);
            if (succeeded)
            {
              succeeded = mercury__integer__to_int_2_p_0(Integer_8, &V_5_15);
              if (succeeded)
              {
{
#define MR_PROC_LABEL mercury__term__term_to_int32_2_p_0

	MR_Integer I;
	int32_t I32;
	MR_bool SUCCESS_INDICATOR;

	I = V_5_15 ;
		{

    if (I > (MR_Integer) INT32_MAX) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (I < (MR_Integer) INT32_MIN) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        I32 = (int32_t) I;
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *Int32_4  = I32;
	}
succeeded  = SUCCESS_INDICATOR;
}
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_int16_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  int16_t * Int16_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer V_5_15;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 2);
            if (succeeded)
            {
              succeeded = mercury__integer__to_int_2_p_0(Integer_8, &V_5_15);
              if (succeeded)
                succeeded = mercury__int16__from_int_2_p_0(V_5_15, Int16_4);
            }
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_int8_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  int8_t * Int8_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 1);
            if (succeeded)
              succeeded = mercury__integer__to_int8_2_p_0(Integer_8, Int8_4);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__term_to_int_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Term_3,
  MR_Integer * Int_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Term_3)) == (MR_Integer) 0);
    MR_Word Const_5;
    MR_Word Integer_8;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    if (succeeded)
    {
      Const_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 0))));
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Term_3, (MR_Integer) 1))));
      succeeded = (Var_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Const_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Integer_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 1))));
          Var_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) >> 3)) & (MR_Integer) 1);
          Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 2))) & (MR_Integer) 7);
          succeeded = (Var_10 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (Var_11 == (MR_Integer) 0);
            if (succeeded)
              succeeded = mercury__integer__to_int_2_p_0(Integer_8, Int_4);
          }
        }
      }
    }
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__term__var_id_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer VarNum_3 = (MR_Integer) (HeadVar__1_1);

    return VarNum_3;
  }
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
  {
    MR_Integer VarNum_3 = (MR_Integer) (HeadVar__1_1);

    return VarNum_3;
  }
}

void MR_CALL 
mercury__term__create_var_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Integer V_4;
    MR_Integer V0_5 = (MR_Integer) (HeadVar__2_2);

    V_4 = (MR_Integer) ((MR_Unsigned) V0_5 + (MR_Unsigned) 1);
    *HeadVar__1_1 = (MR_Word) (V_4);
    *HeadVar__3_3 = (MR_Word) (V_4);
  }
}

MR_bool MR_CALL 
mercury__term__init_var_supply_1_p_1(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Integer Var_2 = (MR_Integer) (HeadVar__1_1);

    succeeded = (Var_2 == (MR_Integer) 0);
    return succeeded;
  }
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
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____const_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____const_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____generic_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____generic_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____integer_base_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____integer_base_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____integer_base_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____integer_size_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____integer_size_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____integer_size_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____integer_size_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____renaming_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____renaming_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____renaming_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____renaming_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____signedness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____signedness_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____signedness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____signedness_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____substitution_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____substitution_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____term_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____term_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____term_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____term_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____var_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____var_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__term____Compare____var_supply_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 1)))), ((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
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
