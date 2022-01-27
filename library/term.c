/*
** Automatically generated from `term.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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


/* :- module term. */
/* :- implementation. */

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

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_1;

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[2];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2;

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3;

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4;

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_5[1];

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_5;

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_0[1];

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_1[1];

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_2[1];

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[3];

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4];

static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[6];

static const MR_Integer mercury__term__term__functor_number_map_const_0[6];

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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0;

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
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____integer_base_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2);

static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3);

static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4);

static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
  MR_Box mercury__term__closure_arg,
  MR_Box mercury__term__wrapper_arg_1);

static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
  MR_Box mercury__term__closure_arg,
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2);

static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
  MR_Word mercury__term__V_13_13,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2);

static MR_Integer MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2);

static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
  MR_Word mercury__term__TypeInfo_for_T_19,
  MR_Word mercury__term__X_6,
  MR_Word mercury__term__BoundY_7,
  MR_Word mercury__term__DontBindVars_8,
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
  MR_Word * mercury__term__STATE_VARIABLE_Subst_14);


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
#include "version_array.mh"



static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_0 = {
  (MR_String) "atom",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term__term__field_types_const_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_1 = {
  (MR_String) "integer",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term__term__field_types_const_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_integer_base_0,
  (MR_PseudoTypeInfo) &mercury__integer__integer__type_ctor_info_integer_0
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_2 = {
  (MR_String) "big_integer",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__term__term__field_types_const_0_2,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_3 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__term__term__field_types_const_0_3,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_4 = {
  (MR_String) "float",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__field_types_const_0_4,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_const_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_const_0_5 = {
  (MR_String) "implementation_defined",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mercury__term__term__field_types_const_0_5,
  NULL,
  NULL,
  NULL
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

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_const_0_3[3] = {
  &mercury__term__term__du_functor_desc_const_0_3,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_5
};

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_const_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_const_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mercury__term__term__du_stag_ordered_const_0_3
  }
};

static const MR_DuFunctorDescPtr mercury__term__term__du_name_ordered_const_0[6] = {
  &mercury__term__term__du_functor_desc_const_0_0,
  &mercury__term__term__du_functor_desc_const_0_2,
  &mercury__term__term__du_functor_desc_const_0_4,
  &mercury__term__term__du_functor_desc_const_0_5,
  &mercury__term__term__du_functor_desc_const_0_1,
  &mercury__term__term__du_functor_desc_const_0_3
};

static const MR_Integer mercury__term__term__functor_number_map_const_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_const_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____const_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____const_0_0_10001)),
  (MR_String) "term",
  (MR_String) "const",
  {     mercury__term__term__du_name_ordered_const_0 },
  {     mercury__term__term__du_ptag_ordered_const_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_const_0
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_context_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_context_0_0 = {
  (MR_String) "context",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term__term__field_types_context_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_context_0_0[1] = {
  &mercury__term__term__du_functor_desc_context_0_0
};

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_context_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_context_0_0
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____context_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____context_0_0_10001)),
  (MR_String) "term",
  (MR_String) "context",
  {     mercury__term__term__du_name_ordered_context_0 },
  {     mercury__term__term__du_ptag_ordered_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_context_0
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_generic_0_0 = {
  (MR_String) "generic",
  (MR_Integer) 0
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
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__term____Unify____generic_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____generic_0_0_10001)),
  (MR_String) "term",
  (MR_String) "generic",
  {     mercury__term__term__enum_name_ordered_generic_0 },
  {     mercury__term__term__enum_value_ordered_generic_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_generic_0
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_0 = {
  (MR_String) "base_2",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_1 = {
  (MR_String) "base_8",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_2 = {
  (MR_String) "base_10",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__term__term__enum_functor_desc_integer_base_0_3 = {
  (MR_String) "base_16",
  (MR_Integer) 3
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
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__term____Unify____integer_base_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____integer_base_0_0_10001)),
  (MR_String) "term",
  (MR_String) "integer_base",
  {     mercury__term__term__enum_name_ordered_integer_base_0 },
  {     mercury__term__term__enum_value_ordered_integer_base_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_integer_base_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_renaming_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____renaming_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_1_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0
  }
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_renaming_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____renaming_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____renaming_0_0_10001)),
  (MR_String) "term",
  (MR_String) "renaming",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__term__pti_term_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_substitution_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__term____Unify____substitution_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_1_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_term_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 mercury__term__term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

static const MR_FA_TypeInfo_Struct2 mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0,
    (MR_TypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0
  }
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_substitution_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____substitution_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____substitution_0_0_10001)),
  (MR_String) "term",
  (MR_String) "substitution",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__tree234__ti_tree234_2term__ti_var_1term__type_ctor_info_generic_0term__ti_term_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__pti_term_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_const_0,
  (MR_PseudoTypeInfo) &mercury__term__list__pti_list_1__pseudo_term__pti_term_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_0 = {
  (MR_String) "functor",
  (MR_Integer) 3,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__term__term__field_types_term_1_0,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mercury__term__term__field_types_term_1_1[2] = {
  (MR_PseudoTypeInfo) &mercury__term__term__pti_var_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury__term__term__du_functor_desc_term_1_1 = {
  (MR_String) "variable",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__term__term__field_types_term_1_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_0[1] = {
  &mercury__term__term__du_functor_desc_term_1_0
};

static const MR_DuFunctorDescPtr mercury__term__term__du_stag_ordered_term_1_1[1] = {
  &mercury__term__term__du_functor_desc_term_1_1
};

static const MR_DuPtagLayout mercury__term__term__du_ptag_ordered_term_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__term__term__du_stag_ordered_term_1_1
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
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__term____Unify____term_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_1_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  {     mercury__term__term__du_name_ordered_term_1 },
  {     mercury__term__term__du_ptag_ordered_term_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_term_1
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_term_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____term_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____term_0_0_10001)),
  (MR_String) "term",
  (MR_String) "term",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__term__ti_term_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer mercury__term__term__functor_number_map_var_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_1 = {
  (MR_String) "var",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  {     &mercury__term__term__notag_functor_desc_var_1 },
  {     &mercury__term__term__notag_functor_desc_var_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_var_1
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__term____Unify____var_0_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_0_0_10001)),
  (MR_String) "term",
  (MR_String) "var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__term__term__ti_var_1term__type_ctor_info_generic_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer mercury__term__term__functor_number_map_var_supply_1[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__term__term__notag_functor_desc_var_supply_1 = {
  (MR_String) "var_supply",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__term__term__type_ctor_info_var_supply_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__term____Unify____var_supply_1_0_10001)),
  ((MR_Box) (mercury__term____Compare____var_supply_1_0_10001)),
  (MR_String) "term",
  (MR_String) "var_supply",
  {     &mercury__term__term__notag_functor_desc_var_supply_1 },
  {     &mercury__term__term__notag_functor_desc_var_supply_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__term__term__functor_number_map_var_supply_1
};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__term__var__arity1__[7] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001))
};

static MR_bool MR_CALL 
mercury__term____Unify____const_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____const_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____const_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____const_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____context_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____context_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____context_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____context_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____generic_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____generic_0_0();
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____generic_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____generic_0_0(&mercury__term__conv0_HeadVar__1_1);
    }
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____integer_base_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____integer_base_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____integer_base_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____renaming_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____renaming_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____renaming_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____renaming_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____renaming_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____substitution_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____substitution_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____substitution_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____substitution_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____substitution_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____term_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____term_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____term_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____term_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____term_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____term_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____term_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____var_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____var_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____var_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____var_0_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____var_0_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____var_0_0_10001(
  MR_Box * mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____var_0_0(&mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    *mercury__term__wrapper_arg_1 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term____Unify____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), ((MR_Word) mercury__term__wrapper_arg_2), ((MR_Word) mercury__term__wrapper_arg_3));
    }
    return mercury__term__succeeded;
  }
}

static void MR_CALL 
mercury__term____Compare____var_supply_1_0_10001(
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2,
  MR_Box mercury__term__wrapper_arg_3,
  MR_Box mercury__term__wrapper_arg_4)
{
  {
    MR_Word mercury__term__conv0_HeadVar__1_1;

    {
      mercury__term____Compare____var_supply_1_0(((MR_Word) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__1_1, ((MR_Word) mercury__term__wrapper_arg_3), ((MR_Word) mercury__term__wrapper_arg_4));
    }
    *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0_10001(
  MR_Box mercury__term__closure_arg,
  MR_Box mercury__term__wrapper_arg_1)
{
  {
    MR_Box mercury__term__wrapper_arg_2;
    MR_Box mercury__term__closure;
    MR_Integer mercury__term__conv0_HeadVar__2_2;

    mercury__term__closure = mercury__term__closure_arg;
    {
      mercury__term__conv0_HeadVar__2_2 = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Word) mercury__term__wrapper_arg_1));
    }
    mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
    return mercury__term__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0_10001(
  MR_Box mercury__term__closure_arg,
  MR_Box mercury__term__wrapper_arg_1,
  MR_Box * mercury__term__wrapper_arg_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Box mercury__term__closure;
    MR_Word mercury__term__conv0_HeadVar__2_2;

    mercury__term__closure = mercury__term__closure_arg;
    {
      mercury__term__succeeded = mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__closure, (MR_Integer) 1))), ((MR_Integer) mercury__term__wrapper_arg_1), &mercury__term__conv0_HeadVar__2_2);
    }
    if (mercury__term__succeeded)
      {
        *mercury__term__wrapper_arg_2 = ((MR_Box) (mercury__term__conv0_HeadVar__2_2));
        mercury__term__succeeded = MR_TRUE;
      }
    return mercury__term__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(
  MR_Word mercury__term__V_13_13,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mercury__term__V_10_10;
        MR_Word mercury__term__V_11_11;

        if (mercury__term__succeeded)
          {
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
            {
              MR_Integer mercury__term__V_14_14 = (MR_Integer) mercury__term__HeadVar__1_1;
              MR_Integer mercury__term__V_15_15 = (MR_Integer) mercury__term__V_11_11;

              mercury__term__succeeded = (mercury__term__V_14_14 == mercury__term__V_15_15);
            }
            if (!(mercury__term__succeeded))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__V_10_10;

                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__term__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;

    *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_105_99_95_116_101_114_109_95_95_91_49_93_95_48_1_p_0(void)
{
  {
    MR_bool mercury__term__succeeded;

  }
}

MR_bool MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__from_int_1_1_f_0(
  MR_Word mercury__term__TypeInfo_5_5,
  MR_Integer mercury__term__X_4,
  MR_Word * mercury__term__HeadVar__2_2)
{
  {
    *mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__X_4;
    return MR_TRUE;
  }
}

MR_Integer MR_CALL 
mercury__term__ClassMethod_for_enum__enum____term__var__arity1______enum__to_int_1_1_f_0(
  MR_Word mercury__term__TypeInfo_5_5,
  MR_Word mercury__term__X_4)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__HeadVar__2_2 = (MR_Integer) mercury__term__X_4;

    return mercury__term__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term____Compare____var_supply_1_0(
  MR_Word mercury__term__TypeInfo_for_T_8,
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
    if (mercury__term__succeeded)
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
        MR_Integer mercury__term__V_5_5 = (MR_Integer) mercury__term__HeadVar__3_3;

        mercury__term__succeeded = (mercury__term__V_4_4 < mercury__term__V_5_5);
        if (mercury__term__succeeded)
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_5_5);
            if (mercury__term__succeeded)
              *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____var_supply_1_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
    if (mercury__term__succeeded)
      mercury__term__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
      }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____var_1_0(
  MR_Word mercury__term__TypeInfo_for_T_8,
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_6 = (MR_Integer) mercury__term__HeadVar__2_2;
    MR_Integer mercury__term__CastY_7 = (MR_Integer) mercury__term__HeadVar__3_3;

    mercury__term__succeeded = (mercury__term__CastX_6 == mercury__term__CastY_7);
    if (mercury__term__succeeded)
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;
        MR_Integer mercury__term__V_5_5 = (MR_Integer) mercury__term__HeadVar__3_3;

        mercury__term__succeeded = (mercury__term__V_4_4 < mercury__term__V_5_5);
        if (mercury__term__succeeded)
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_5_5);
            if (mercury__term__succeeded)
              *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
            else
              *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____var_1_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_5 = (MR_Integer) mercury__term__HeadVar__1_1;
    MR_Integer mercury__term__CastY_6 = (MR_Integer) mercury__term__HeadVar__2_2;

    mercury__term__succeeded = (mercury__term__CastX_5 == mercury__term__CastY_6);
    if (mercury__term__succeeded)
      mercury__term__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__term__V_3_3 = (MR_Integer) mercury__term__HeadVar__1_1;
        MR_Integer mercury__term__V_4_4 = (MR_Integer) mercury__term__HeadVar__2_2;

        mercury__term__succeeded = (mercury__term__V_3_3 == mercury__term__V_4_4);
      }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____var_0_0(
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_1[0];
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____var_0_0(
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;
    MR_Integer mercury__term__CastX_8 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
    MR_Integer mercury__term__CastY_9 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

    mercury__term__succeeded = (mercury__term__CastX_8 == mercury__term__CastY_9);
    if (mercury__term__succeeded)
      mercury__term__succeeded = MR_TRUE;
    else
      {
        MR_Integer mercury__term__V_6_6 = (MR_Integer) mercury__term__Cast_HeadVar1_3;
        MR_Integer mercury__term__V_7_7 = (MR_Integer) mercury__term__Cast_HeadVar2_4;

        mercury__term__succeeded = (mercury__term__V_6_6 == mercury__term__V_7_7);
      }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____term_1_0(
  MR_Word mercury__term__TypeInfo_for_T_29,
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_27 = (MR_Integer) mercury__term__HeadVar__2_2;
    MR_Integer mercury__term__CastY_28 = (MR_Integer) mercury__term__HeadVar__3_3;

    mercury__term__succeeded = (mercury__term__CastX_27 == mercury__term__CastY_28);
    if (mercury__term__succeeded)
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__term__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 2)));
            MR_Word mercury__term__V_10_10;

            {
              mercury__term____Compare____const_0_0(&mercury__term__V_10_10, mercury__term__V_41_41, mercury__term__V_7_7);
            }
            mercury__term__succeeded = (mercury__term__V_10_10 == (MR_Integer) 0);
            mercury__term__succeeded = !(mercury__term__succeeded);
            if (mercury__term__succeeded)
              *mercury__term__HeadVar__1_1 = mercury__term__V_10_10;
            else
              {
                MR_Word mercury__term__V_11_11;
                MR_Word mercury__term__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                MR_Word mercury__term__TypeInfo_35_35;

                {
                  mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_29));
                }
                {
                  mercury__list____Compare____list_1_0(mercury__term__TypeInfo_35_35, &mercury__term__V_11_11, (MR_Word) mercury__term__V_40_40, (MR_Word) mercury__term__V_8_8);
                }
                mercury__term__succeeded = (mercury__term__V_11_11 == (MR_Integer) 0);
                mercury__term__succeeded = !(mercury__term__succeeded);
                if (mercury__term__succeeded)
                  *mercury__term__HeadVar__1_1 = mercury__term__V_11_11;
                else
                  {
                    mercury__term____Compare____context_0_0(mercury__term__HeadVar__1_1, mercury__term__V_39_39, mercury__term__V_9_9);
                  }
              }
          }
        else
          *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word mercury__term__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) mercury__term__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mercury__term__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__term__V_26_26;
            MR_Integer mercury__term__V_44_44 = (MR_Integer) mercury__term__V_43_43;
            MR_Integer mercury__term__V_45_45 = (MR_Integer) mercury__term__V_24_24;

            mercury__term__succeeded = (mercury__term__V_44_44 < mercury__term__V_45_45);
            if (mercury__term__succeeded)
              mercury__term__V_26_26 = (MR_Integer) 1;
            else
              {
                mercury__term__succeeded = (mercury__term__V_44_44 == mercury__term__V_45_45);
                if (mercury__term__succeeded)
                  mercury__term__V_26_26 = (MR_Integer) 0;
                else
                  mercury__term__V_26_26 = (MR_Integer) 2;
              }
            mercury__term__succeeded = (mercury__term__V_26_26 == (MR_Integer) 0);
            mercury__term__succeeded = !(mercury__term__succeeded);
            if (mercury__term__succeeded)
              *mercury__term__HeadVar__1_1 = mercury__term__V_26_26;
            else
              {
                mercury__term____Compare____context_0_0(mercury__term__HeadVar__1_1, mercury__term__V_42_42, mercury__term__V_25_25);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____term_1_0(
  MR_Word mercury__term__TypeInfo_for_T_15,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_13 = (MR_Integer) mercury__term__HeadVar__1_1;
    MR_Integer mercury__term__CastY_14 = (MR_Integer) mercury__term__HeadVar__2_2;

    mercury__term__succeeded = (mercury__term__CastX_13 == mercury__term__CastY_14);
    if (mercury__term__succeeded)
      mercury__term__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__TypeCtorInfo_16_16;
        MR_Word mercury__term__TypeInfo_17_17;
        MR_Word mercury__term__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__term__V_6_6;
        MR_Word mercury__term__V_7_7;
        MR_Word mercury__term__V_8_8;

        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__term__succeeded)
          {
            mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
            mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
            mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 2)));
            {
              mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_3_3, mercury__term__V_6_6);
            }
            if (mercury__term__succeeded)
              {
                mercury__term__TypeCtorInfo_16_16 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                {
                  mercury__term__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_16_16));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_17_17, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_15));
                }
                {
                  mercury__term__succeeded = mercury__list____Unify____list_1_0(mercury__term__TypeInfo_17_17, (MR_Word) mercury__term__V_4_4, (MR_Word) mercury__term__V_7_7);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_5_5, mercury__term__V_8_8);
                  }
              }
          }
      }
    else
      {
        MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term__V_11_11;
        MR_Word mercury__term__V_12_12;
        MR_Integer mercury__term__CastX_22;
        MR_Integer mercury__term__CastY_23;

        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__term__succeeded)
          {
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
            mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
            mercury__term__CastX_22 = (MR_Integer) mercury__term__V_9_9;
            mercury__term__CastY_23 = (MR_Integer) mercury__term__V_11_11;
            mercury__term__succeeded = (mercury__term__CastX_22 == mercury__term__CastY_23);
            if (mercury__term__succeeded)
              mercury__term__succeeded = MR_TRUE;
            else
              {
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__V_9_9;
                MR_Integer mercury__term__V_21_21 = (MR_Integer) mercury__term__V_11_11;

                mercury__term__succeeded = (mercury__term__V_20_20 == mercury__term__V_21_21);
              }
            if (mercury__term__succeeded)
              {
                mercury__term__succeeded = mercury__term____Unify____context_0_0(mercury__term__V_10_10, mercury__term__V_12_12);
              }
          }
      }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____term_0_0(
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_1[1];
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____term_0_0(
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeCtorInfo_5_5 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

    {
      mercury__term__succeeded = mercury__term____Unify____term_1_0(mercury__term__TypeCtorInfo_5_5, mercury__term__Cast_HeadVar1_3, mercury__term__Cast_HeadVar2_4);
    }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____substitution_1_0(
  MR_Word mercury__term__TypeInfo_for_T_6,
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__term__TypeInfo_8_8;
    MR_Word mercury__term__TypeCtorInfo_9_9;
    MR_Word mercury__term__TypeInfo_10_10;
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

    {
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
    }
    mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    {
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
    }
    {
      mercury__tree234____Compare____tree234_2_0(mercury__term__TypeInfo_8_8, mercury__term__TypeInfo_10_10, mercury__term__HeadVar__1_1, (MR_Word) mercury__term__Cast_HeadVar1_4, (MR_Word) mercury__term__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____substitution_1_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__term__TypeInfo_7_7;
    MR_Word mercury__term__TypeCtorInfo_8_8 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
    MR_Word mercury__term__TypeInfo_9_9;
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

    {
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
    }
    {
      mercury__term__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_9_9, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
    }
    {
      mercury__term__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__term__TypeInfo_7_7, mercury__term__TypeInfo_9_9, (MR_Word) mercury__term__Cast_HeadVar1_3, (MR_Word) mercury__term__Cast_HeadVar2_4);
    }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____substitution_0_0(
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_2[1];
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____substitution_0_0(
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeInfo_5_5 = (MR_Word) &mercury__term_scalar_common_2[1];
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

    {
      mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_5_5, ((MR_Box) (mercury__term__Cast_HeadVar1_3)), ((MR_Box) (mercury__term__Cast_HeadVar2_4)));
    }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____renaming_1_0(
  MR_Word mercury__term__TypeInfo_for_T_6,
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeCtorInfo_7_7 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__term__TypeInfo_8_8;
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

    {
      mercury__term__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_8_8, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_6));
    }
    {
      mercury__tree234____Compare____tree234_2_0(mercury__term__TypeInfo_8_8, mercury__term__TypeInfo_8_8, mercury__term__HeadVar__1_1, (MR_Word) mercury__term__Cast_HeadVar1_4, (MR_Word) mercury__term__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____renaming_1_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeCtorInfo_6_6 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__term__TypeInfo_7_7;
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

    {
      mercury__term__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_7_7, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_5));
    }
    {
      mercury__term__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__term__TypeInfo_7_7, mercury__term__TypeInfo_7_7, (MR_Word) mercury__term__Cast_HeadVar1_3, (MR_Word) mercury__term__Cast_HeadVar2_4);
    }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____renaming_0_0(
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeInfo_6_6 = (MR_Word) &mercury__term_scalar_common_2[0];
    MR_Word mercury__term__Cast_HeadVar1_4 = mercury__term__HeadVar__2_2;
    MR_Word mercury__term__Cast_HeadVar2_5 = mercury__term__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__term__TypeInfo_6_6, mercury__term__HeadVar__1_1, ((MR_Box) (mercury__term__Cast_HeadVar1_4)), ((MR_Box) (mercury__term__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____renaming_0_0(
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TypeInfo_5_5 = (MR_Word) &mercury__term_scalar_common_2[0];
    MR_Word mercury__term__Cast_HeadVar1_3 = mercury__term__HeadVar__1_1;
    MR_Word mercury__term__Cast_HeadVar2_4 = mercury__term__HeadVar__2_2;

    {
      mercury__term__succeeded = mercury__builtin__unify_2_p_0(mercury__term__TypeInfo_5_5, ((MR_Box) (mercury__term__Cast_HeadVar1_3)), ((MR_Box) (mercury__term__Cast_HeadVar2_4)));
    }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____integer_base_0_0(
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__Cast_HeadVar1_4 = (MR_Integer) mercury__term__HeadVar__2_2;
    MR_Integer mercury__term__Cast_HeadVar2_5 = (MR_Integer) mercury__term__HeadVar__3_3;

    mercury__term__succeeded = (mercury__term__Cast_HeadVar1_4 < mercury__term__Cast_HeadVar2_5);
    if (mercury__term__succeeded)
      *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__term__succeeded = (mercury__term__Cast_HeadVar1_4 == mercury__term__Cast_HeadVar2_5);
        if (mercury__term__succeeded)
          *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____integer_base_0_0(
  MR_Word mercury__term__HeadVar__2_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded = (mercury__term__HeadVar__2_1 == mercury__term__HeadVar__2_2);

    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____generic_0_0(
  MR_Word * mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__term__HeadVar__1_1);
    }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____generic_0_0(void)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_116_101_114_109_95_95_103_101_110_101_114_105_99_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____context_0_0(
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_9 = (MR_Integer) mercury__term__HeadVar__2_2;
    MR_Integer mercury__term__CastY_10 = (MR_Integer) mercury__term__HeadVar__3_3;

    mercury__term__succeeded = (mercury__term__CastX_9 == mercury__term__CastY_10);
    if (mercury__term__succeeded)
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mercury__term__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__term__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mercury__term__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__term__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__term__V_8_8;
        MR_Integer mercury__term__V_7_16;

{
#define MR_PROC_LABEL mercury__term____Compare____context_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_4_4 ;
	S2 =  mercury__term__V_6_6 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term__V_7_16  = Res;
}
        mercury__term__succeeded = (mercury__term__V_7_16 < (MR_Integer) 0);
        if (mercury__term__succeeded)
          mercury__term__V_8_8 = (MR_Integer) 1;
        else
          {
            mercury__term__succeeded = (mercury__term__V_7_16 == (MR_Integer) 0);
            if (mercury__term__succeeded)
              mercury__term__V_8_8 = (MR_Integer) 0;
            else
              mercury__term__V_8_8 = (MR_Integer) 2;
          }
        mercury__term__succeeded = (mercury__term__V_8_8 == (MR_Integer) 0);
        mercury__term__succeeded = !(mercury__term__succeeded);
        if (mercury__term__succeeded)
          *mercury__term__HeadVar__1_1 = mercury__term__V_8_8;
        else
          {
            mercury__term__succeeded = (mercury__term__V_5_5 < mercury__term__V_7_7);
            if (mercury__term__succeeded)
              *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
            else
              {
                mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_7_7);
                if (mercury__term__succeeded)
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
                else
                  *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__term____Unify____context_0_0(
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_7 = (MR_Integer) mercury__term__HeadVar__1_1;
    MR_Integer mercury__term__CastY_8 = (MR_Integer) mercury__term__HeadVar__2_2;

    mercury__term__succeeded = (mercury__term__CastX_7 == mercury__term__CastY_8);
    if (mercury__term__succeeded)
      mercury__term__succeeded = MR_TRUE;
    else
      {
        MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mercury__term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

        mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_5_5) == 0);
        if (mercury__term__succeeded)
          mercury__term__succeeded = (mercury__term__V_4_4 == mercury__term__V_6_6);
      }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term____Compare____const_0_0(
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_89 = (MR_Integer) mercury__term__HeadVar__2_2;
    MR_Integer mercury__term__CastY_90 = (MR_Integer) mercury__term__HeadVar__3_3;

    mercury__term__succeeded = (mercury__term__CastX_89 == mercury__term__CastY_90);
    if (mercury__term__succeeded)
      *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__term__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String mercury__term__V_98_98 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__term__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__term__V_7_110;

{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_98_98 ;
	S2 =  mercury__term__V_5_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term__V_7_110  = Res;
}
                  mercury__term__succeeded = (mercury__term__V_7_110 < (MR_Integer) 0);
                  if (mercury__term__succeeded)
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__term__succeeded = (mercury__term__V_7_110 == (MR_Integer) 0);
                      if (mercury__term__succeeded)
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 1:
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__term__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__term__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__term__succeeded = (mercury__term__V_103_103 < mercury__term__V_20_20);
                  if (mercury__term__succeeded)
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                  else
                    {
                      mercury__term__succeeded = (mercury__term__V_103_103 == mercury__term__V_20_20);
                      if (mercury__term__succeeded)
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
                      else
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    }
                }
                break;
              case (MR_Integer) 2:
                *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__term__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__term__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__term__V_40_40;
                  MR_Integer mercury__term__V_105_105 = (MR_Integer) mercury__term__V_100_100;
                  MR_Integer mercury__term__V_106_106 = (MR_Integer) mercury__term__V_38_38;

                  mercury__term__succeeded = (mercury__term__V_105_105 < mercury__term__V_106_106);
                  if (mercury__term__succeeded)
                    mercury__term__V_40_40 = (MR_Integer) 1;
                  else
                    {
                      mercury__term__succeeded = (mercury__term__V_105_105 == mercury__term__V_106_106);
                      if (mercury__term__succeeded)
                        mercury__term__V_40_40 = (MR_Integer) 0;
                      else
                        mercury__term__V_40_40 = (MR_Integer) 2;
                    }
                  mercury__term__succeeded = (mercury__term__V_40_40 == (MR_Integer) 0);
                  mercury__term__succeeded = !(mercury__term__succeeded);
                  if (mercury__term__succeeded)
                    *mercury__term__HeadVar__1_1 = mercury__term__V_40_40;
                  else
                    {
                      mercury__integer____Compare____integer_0_0(mercury__term__HeadVar__1_1, mercury__term__V_99_99, mercury__term__V_39_39);
                    }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__term__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mercury__term__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__term__V_7_129;

{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_104_104 ;
	S2 =  mercury__term__V_58_58 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term__V_7_129  = Res;
}
                          mercury__term__succeeded = (mercury__term__V_7_129 < (MR_Integer) 0);
                          if (mercury__term__succeeded)
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__term__succeeded = (mercury__term__V_7_129 == (MR_Integer) 0);
                              if (mercury__term__succeeded)
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Float mercury__term__V_101_101 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Float mercury__term__V_73_73 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__term__succeeded = (mercury__term__V_101_101 < mercury__term__V_73_73);
                          if (mercury__term__succeeded)
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__term__succeeded = (mercury__term__V_101_101 > mercury__term__V_73_73);
                              if (mercury__term__succeeded)
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                              else
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String mercury__term__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__term__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String mercury__term__V_88_88 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__term__V_7_121;

{
#define MR_PROC_LABEL mercury__term____Compare____const_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__term__V_102_102 ;
	S2 =  mercury__term__V_88_88 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__term__V_7_121  = Res;
}
                          mercury__term__succeeded = (mercury__term__V_7_121 < (MR_Integer) 0);
                          if (mercury__term__succeeded)
                            *mercury__term__HeadVar__1_1 = (MR_Integer) 1;
                          else
                            {
                              mercury__term__succeeded = (mercury__term__V_7_121 == (MR_Integer) 0);
                              if (mercury__term__succeeded)
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *mercury__term__HeadVar__1_1 = (MR_Integer) 2;
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

MR_bool MR_CALL 
mercury__term____Unify____const_0_0(
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__CastX_17 = (MR_Integer) mercury__term__HeadVar__1_1;
    MR_Integer mercury__term__CastY_18 = (MR_Integer) mercury__term__HeadVar__2_2;

    mercury__term__succeeded = (mercury__term__CastX_17 == mercury__term__CastY_18);
    if (mercury__term__succeeded)
      mercury__term__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__term__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__term__V_4_4;

            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__term__succeeded)
              {
                mercury__term__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term__succeeded = (strcmp(mercury__term__V_3_3, mercury__term__V_4_4) == 0);
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__term__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__term__V_6_6;

            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term__succeeded)
              {
                mercury__term__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term__succeeded = (mercury__term__V_5_5 == mercury__term__V_6_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term__V_9_9;
            MR_Word mercury__term__V_10_10;

            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__term__succeeded)
              {
                mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
                mercury__term__succeeded = (mercury__term__V_7_7 == mercury__term__V_9_9);
                if (mercury__term__succeeded)
                  {
                    mercury__term__succeeded = mercury__integer____Unify____integer_0_0(mercury__term__V_8_8, mercury__term__V_10_10);
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__term__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__term__V_12_12;

                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__term__succeeded)
                  {
                    mercury__term__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__term__succeeded = (strcmp(mercury__term__V_11_11, mercury__term__V_12_12) == 0);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Float mercury__term__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
                MR_Float mercury__term__V_14_14;

                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__term__succeeded)
                  {
                    mercury__term__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__term__succeeded = (mercury__term__V_13_13 == mercury__term__V_14_14);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String mercury__term__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__term__V_16_16;

                mercury__term__succeeded = ((((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__term__succeeded)
                  {
                    mercury__term__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
                    mercury__term__succeeded = (strcmp(mercury__term__V_15_15, mercury__term__V_16_16) == 0);
                  }
              }
              break;
          }
          break;
      }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term__build_subst_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_33,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
                return;
              }
            }
        else
          {
            MR_Word mercury__term__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

            if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "predicate \140term.build_subst\'/4", (MR_String) "length mismatch");
                  return;
                }
              }
            else
              {
                MR_Word mercury__term__TypeCtorInfo_34_34 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mercury__term__TypeInfo_35_35;
                MR_Word mercury__term__TypeCtorInfo_36_36;
                MR_Word mercury__term__TypeInfo_37_37;
                MR_Word mercury__term__Term_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word mercury__term__Terms_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__term__STATE_VARIABLE_Subst_31_31;
                MR_Word mercury__term__conv0_STATE_VARIABLE_Subst_31_31;

                {
                  mercury__term__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_34_34));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_35_35, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
                }
                mercury__term__TypeCtorInfo_36_36 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                {
                  mercury__term__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_36_36));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_37_37, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_33));
                }
                {
                  mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_33, mercury__term__TypeInfo_35_35, mercury__term__TypeInfo_37_37, mercury__term__V_39_39, ((MR_Box) (mercury__term__Term_26)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__conv0_STATE_VARIABLE_Subst_31_31);
                }
                mercury__term__STATE_VARIABLE_Subst_31_31 = (MR_Word) mercury__term__conv0_STATE_VARIABLE_Subst_31_31;
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_38_38;
                  MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__Terms_27;
                  MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_31_31;

                  mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
                  mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_list_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__term__succeeded = MR_TRUE;
        else
          {
            MR_Word mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__term__succeeded = mercury__term__is_ground_in_bindings_2_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Term_4, mercury__term__HeadVar__2_2);
            }
            if (mercury__term__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__term__is_ground_list_1_p_0(
  MR_Word mercury__term__TypeInfo_for_T_4,
  MR_Word mercury__term__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__term__succeeded = MR_TRUE;
        else
          {
            MR_Word mercury__term__Term_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term__Terms_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term__ArgTerms_6;
            MR_Word mercury__term__V_5_5;
            MR_Word mercury__term__V_7_7;

            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__Term_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__term__succeeded)
              {
                mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 0)));
                mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 1)));
                mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_2, (MR_Integer) 2)));
                {
                  mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_4, mercury__term__ArgTerms_6);
                }
                if (mercury__term__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_3;

                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__term__vars_2_list_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_14,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_2,
  MR_Word * mercury__term__STATE_VARIABLE_Vars_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__term__STATE_VARIABLE_Vars_3 = mercury__term__STATE_VARIABLE_Vars_0_2;
        else
          {
            MR_Word mercury__term__Term_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term__Terms_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term__STATE_VARIABLE_Vars_12_12;

            {
              mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Terms_8, mercury__term__STATE_VARIABLE_Vars_0_2, &mercury__term__STATE_VARIABLE_Vars_12_12);
            }
            if (((MR_tag((MR_Word) mercury__term__Term_7)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__term__ArgTerms_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 1)));
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 0)));
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_7, (MR_Integer) 2)));

                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__ArgTerms_22;
                  MR_Word mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2 = mercury__term__STATE_VARIABLE_Vars_12_12;

                  mercury__term__STATE_VARIABLE_Vars_0_2 = mercury__term__STATE_VARIABLE_Vars_0__tmp_copy_2;
                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
            else
              {
                MR_Word mercury__term__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 0)));
                MR_Word mercury__term__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_7, (MR_Integer) 1)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__term__STATE_VARIABLE_Vars_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_19));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_12_12));
                }
              }
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__term__unify_term_bound_var_5_p_0(
  MR_Word mercury__term__TypeInfo_for_T_19,
  MR_Word mercury__term__X_6,
  MR_Word mercury__term__BoundY_7,
  MR_Word mercury__term__DontBindVars_8,
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_13,
  MR_Word * mercury__term__STATE_VARIABLE_Subst_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;
        MR_Word mercury__term__TermBoundToX_10;
        MR_Word mercury__term__TypeCtorInfo_20_20 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mercury__term__TypeInfo_21_21;
        MR_Word mercury__term__TypeCtorInfo_22_22 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
        MR_Word mercury__term__TypeInfo_23_23;
        MR_Box mercury__term__conv0_TermBoundToX_10;

        {
          mercury__term__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_20_20));
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_21_21, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
        }
        {
          mercury__term__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_22_22));
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_23_23, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
        }
        {
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_21_21, mercury__term__TypeInfo_23_23, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_13, mercury__term__X_6, &mercury__term__conv0_TermBoundToX_10);
        }
        if (mercury__term__succeeded)
          {
            mercury__term__TermBoundToX_10 = ((MR_Word) mercury__term__conv0_TermBoundToX_10);
            mercury__term__succeeded = MR_TRUE;
          }
        if (mercury__term__succeeded)
          {
            MR_Word mercury__term__NewX_11;
            MR_Word mercury__term__V_12_12;

            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__TermBoundToX_10)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term__succeeded)
              {
                mercury__term__NewX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 0)));
                mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermBoundToX_10, (MR_Integer) 1)));
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term__X__tmp_copy_6 = mercury__term__NewX_11;

                  mercury__term__X_6 = mercury__term__X__tmp_copy_6;
                }
                continue;
              }
          }
        else
          {
            MR_Integer mercury__term__CastX_36 = (MR_Integer) mercury__term__X_6;
            MR_Integer mercury__term__CastY_37 = (MR_Integer) mercury__term__BoundY_7;

            mercury__term__succeeded = (mercury__term__CastX_36 == mercury__term__CastY_37);
            if (mercury__term__succeeded)
              mercury__term__succeeded = MR_TRUE;
            else
              {
                MR_Integer mercury__term__V_34_34 = (MR_Integer) mercury__term__X_6;
                MR_Integer mercury__term__V_35_35 = (MR_Integer) mercury__term__BoundY_7;

                mercury__term__succeeded = (mercury__term__V_34_34 == mercury__term__V_35_35);
              }
            if (mercury__term__succeeded)
              {
                *mercury__term__STATE_VARIABLE_Subst_14 = mercury__term__STATE_VARIABLE_Subst_0_13;
                mercury__term__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word mercury__term__TypeCtorInfo_26_26;
                MR_Word mercury__term__TypeInfo_27_27;
                MR_Word mercury__term__TypeCtorInfo_28_28;
                MR_Word mercury__term__TypeInfo_29_29;
                MR_Word mercury__term__V_16_16;
                MR_Word mercury__term__V_18_18;
                MR_String mercury__term__V_38_38;
                MR_Integer mercury__term__V_39_39;
                MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_14;

                {
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_19, mercury__term__X_6, mercury__term__DontBindVars_8);
                }
                mercury__term__succeeded = !(mercury__term__succeeded);
                if (mercury__term__succeeded)
                  {
                    mercury__term__V_38_38 = (MR_String) "";
                    mercury__term__V_39_39 = (MR_Integer) 0;
                    mercury__term__TypeCtorInfo_26_26 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    mercury__term__TypeCtorInfo_28_28 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                    mercury__term__V_18_18 = (MR_Word) &mercury__term_scalar_common_1[2];
                    {
                      mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 0) = ((MR_Box) (mercury__term__BoundY_7));
                      MR_hl_field(MR_mktag(1), mercury__term__V_16_16, 1) = ((MR_Box) (mercury__term__V_18_18));
                    }
                    {
                      mercury__term__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_26_26));
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_27_27, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
                    }
                    {
                      mercury__term__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_28_28));
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_29_29, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_19));
                    }
                    {
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_19, mercury__term__TypeInfo_27_27, mercury__term__TypeInfo_29_29, mercury__term__X_6, ((MR_Box) (mercury__term__V_16_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_13, &mercury__term__conv1_STATE_VARIABLE_Subst_14);
                    }
                    *mercury__term__STATE_VARIABLE_Subst_14 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_14;
                    mercury__term__succeeded = MR_TRUE;
                  }
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

MR_Integer MR_CALL 
mercury__term__var_supply_num_allocated_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_4,
  MR_Word mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

    return mercury__term__V_3;
  }
}

MR_Word MR_CALL 
mercury__term__var_supply_max_var_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_4,
  MR_Word mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__HeadVar__2_2;
    MR_Integer mercury__term__V_3 = (MR_Integer) mercury__term__HeadVar__1_1;

    mercury__term__HeadVar__2_2 = (MR_Word) mercury__term__V_3;
    return mercury__term__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__term__context_file_2_p_0(
  MR_Word mercury__term__HeadVar__1_1,
  MR_String * mercury__term__FileName_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__V_4_4;

    *mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
    mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
  }
}

MR_String MR_CALL 
mercury__term__context_file_1_f_0(
  MR_Word mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;
    MR_String mercury__term__FileName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__term__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));

    return mercury__term__FileName_3;
  }
}

void MR_CALL 
mercury__term__context_line_2_p_0(
  MR_Word mercury__term__HeadVar__1_1,
  MR_Integer * mercury__term__LineNumber_4)
{
  {
    MR_bool mercury__term__succeeded;
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

    *mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
  }
}

MR_Integer MR_CALL 
mercury__term__context_line_1_f_0(
  MR_Word mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__LineNumber_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
    MR_String mercury__term__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));

    return mercury__term__LineNumber_4;
  }
}

void MR_CALL 
mercury__term__context_init_3_p_0(
  MR_String mercury__term__File_4,
  MR_Integer mercury__term__LineNumber_5,
  MR_Word * mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__term__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__File_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__LineNumber_5));
    }
  }
}

MR_Word MR_CALL 
mercury__term__context_init_2_f_0(
  MR_String mercury__term__File_4,
  MR_Integer mercury__term__LineNumber_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__HeadVar__3_3;

    {
      mercury__term__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, 0) = ((MR_Box) (mercury__term__File_4));
      MR_hl_field(MR_mktag(0), mercury__term__HeadVar__3_3, 1) = ((MR_Box) (mercury__term__LineNumber_5));
    }
    return mercury__term__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__term__context_init_1_p_0(
  MR_Word * mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;

    *mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[2];
  }
}

MR_Word MR_CALL 
mercury__term__context_init_0_f_0(void)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__HeadVar__1_1 = (MR_Word) &mercury__term_scalar_common_1[2];

    return mercury__term__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__term__get_term_context_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_8,
  MR_Word mercury__term__Term_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Context_4;

    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
        MR_Word mercury__term__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));

        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));
      }
    else
      {
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));

        mercury__term__Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));
      }
    return mercury__term__Context_4;
  }
}

void MR_CALL 
mercury__term__coerce_var_supply_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_4,
  MR_Word mercury__term__TypeInfo_for_U_5,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word * mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;

    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__term__coerce_var_supply_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__TypeInfo_for_U_6,
  MR_Word mercury__term__VarSupplyTypeA_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__VarSupplyTypeB_4 = mercury__term__VarSupplyTypeA_3;

    return mercury__term__VarSupplyTypeB_4;
  }
}

void MR_CALL 
mercury__term__coerce_var_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_4,
  MR_Word mercury__term__TypeInfo_for_U_5,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word * mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;

    *mercury__term__HeadVar__2_2 = mercury__term__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__term__coerce_var_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__TypeInfo_for_U_6,
  MR_Word mercury__term__VarTypeA_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__VarTypeB_4 = mercury__term__VarTypeA_3;

    return mercury__term__VarTypeB_4;
  }
}

void MR_CALL 
mercury__term__coerce_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__TypeInfo_for_U_6,
  MR_Word mercury__term__TermTypeA_3,
  MR_Word * mercury__term__TermTypeB_4)
{
  {
    MR_bool mercury__term__succeeded;

    *mercury__term__TermTypeB_4 = mercury__term__TermTypeA_3;
  }
}

MR_Word MR_CALL 
mercury__term__coerce_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__TypeInfo_for_U_6,
  MR_Word mercury__term__TermTypeA_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__TermTypeB_4 = mercury__term__TermTypeA_3;

    return mercury__term__TermTypeB_4;
  }
}

void MR_CALL 
mercury__term__generic_term_1_p_0(
  MR_Word mercury__term__HeadVar__1_2)
{
  {
    MR_bool mercury__term__succeeded;

  }
}

void MR_CALL 
mercury__term__var_list_to_term_list_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_8,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word * mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;

    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term__Vars_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term__Terms_5;
        MR_Word mercury__term__V_6_6;
        MR_Word mercury__term__V_7_7 = (MR_Word) &mercury__term_scalar_common_1[2];

        {
          mercury__term__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 0) = ((MR_Box) (mercury__term__Var_3));
          MR_hl_field(MR_mktag(1), mercury__term__V_6_6, 1) = ((MR_Box) (mercury__term__V_7_7));
        }
        {
          mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Vars_4, &mercury__term__Terms_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__V_6_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_5));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__term__var_list_to_term_list_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__Vs_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Ts_4;

    {
      mercury__term__var_list_to_term_list_2_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Vs_3, &mercury__term__Ts_4);
    }
    return mercury__term__Ts_4;
  }
}

MR_bool MR_CALL 
mercury__term__term_list_to_var_list_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_8,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word * mercury__term__HeadVar__2_2)
{
  {
    MR_bool mercury__term__succeeded;

    if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__term__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__term__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__term__Var_3;
        MR_Word mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term__Vars_6;
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term__V_4_4;

        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__V_7_7)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__term__succeeded)
          {
            mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 0)));
            mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_7_7, (MR_Integer) 1)));
            {
              mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Terms_5, &mercury__term__Vars_6);
            }
            if (mercury__term__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__term__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_3));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_6));
                }
                mercury__term__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__term__succeeded;
  }
}

MR_Word MR_CALL 
mercury__term__term_list_to_var_list_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Terms_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Vars_4;
    MR_Word mercury__term__VarsPrime_5;

    {
      mercury__term__succeeded = mercury__term__term_list_to_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms_3, &mercury__term__VarsPrime_5);
    }
    if (mercury__term__succeeded)
      mercury__term__Vars_4 = mercury__term__VarsPrime_5;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "term", (MR_String) "function \140term.term_list_to_var_list\'/1", (MR_String) "not all vars");
        }
      }
    return mercury__term__Vars_4;
  }
}

void MR_CALL 
mercury__term__apply_rec_substitution_in_terms_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_10,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word * mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;

    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term__Term_8;
        MR_Word mercury__term__Terms_9;

        {
          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
        {
          mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
        }
      }
  }
}

void MR_CALL 
mercury__term__apply_rec_substitution_in_term_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_14,
  MR_Word mercury__term__Subst_4,
  MR_Word mercury__term__Term0_5,
  MR_Word * mercury__term__Term_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
            MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
            MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
            MR_Word mercury__term__ArgTerms_13;

            {
              mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Subst_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_13);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *mercury__term__Term_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
            }
          }
        else
          {
            MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
            MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
            MR_Word mercury__term__ReplacementTerm_9;
            MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mercury__term__TypeInfo_16_16;
            MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
            MR_Word mercury__term__TypeInfo_18_18;
            MR_Box mercury__term__conv0_ReplacementTerm_9;

            {
              mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
            }
            {
              mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
            }
            {
              mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_4, mercury__term__Var_7, &mercury__term__conv0_ReplacementTerm_9);
            }
            if (mercury__term__succeeded)
              {
                mercury__term__ReplacementTerm_9 = ((MR_Word) mercury__term__conv0_ReplacementTerm_9);
                mercury__term__succeeded = MR_TRUE;
              }
            if (mercury__term__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term__Term0__tmp_copy_5 = mercury__term__ReplacementTerm_9;

                  mercury__term__Term0_5 = mercury__term__Term0__tmp_copy_5;
                }
                continue;
              }
            else
              *mercury__term__Term_6 = mercury__term__Term0_5;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__term__apply_substitution_in_terms_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_10,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word * mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;

    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term__Term_8;
        MR_Word mercury__term__Terms_9;

        {
          mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
        {
          mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
        }
      }
  }
}

void MR_CALL 
mercury__term__apply_substitution_in_term_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_14,
  MR_Word mercury__term__Subst_4,
  MR_Word mercury__term__Term0_5,
  MR_Word * mercury__term__Term_6)
{
  {
    MR_bool mercury__term__succeeded;

    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
        MR_Word mercury__term__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));
        MR_Word mercury__term__ArgTerms_13;

        {
          mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Subst_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *mercury__term__Term_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_12));
        }
      }
    else
      {
        MR_Word mercury__term__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
        MR_Word mercury__term__ReplacementTerm_9;
        MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mercury__term__TypeInfo_16_16;
        MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
        MR_Word mercury__term__TypeInfo_18_18;
        MR_Box mercury__term__conv0_ReplacementTerm_9;

        {
          mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
        }
        {
          mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
        }
        {
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_4, mercury__term__Var_7, &mercury__term__conv0_ReplacementTerm_9);
        }
        if (mercury__term__succeeded)
          {
            mercury__term__ReplacementTerm_9 = ((MR_Word) mercury__term__conv0_ReplacementTerm_9);
            mercury__term__succeeded = MR_TRUE;
          }
        if (mercury__term__succeeded)
          *mercury__term__Term_6 = mercury__term__ReplacementTerm_9;
        else
          *mercury__term__Term_6 = mercury__term__Term0_5;
      }
  }
}

void MR_CALL 
mercury__term__apply_rec_substitution_to_list_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Terms0_4,
  MR_Word mercury__term__Subst_5,
  MR_Word * mercury__term__Terms_6)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, mercury__term__Terms_6);
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_rec_substitution_to_list_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Terms0_4,
  MR_Word mercury__term__Subst_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Terms_6;

    {
      mercury__term__apply_rec_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
    return mercury__term__Terms_6;
  }
}

void MR_CALL 
mercury__term__apply_rec_substitution_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Term0_4,
  MR_Word mercury__term__Subst_5,
  MR_Word * mercury__term__Term_6)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, mercury__term__Term_6);
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_rec_substitution_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Term0_4,
  MR_Word mercury__term__Subst_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Term_6;

    {
      mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
    return mercury__term__Term_6;
  }
}

void MR_CALL 
mercury__term__apply_substitution_to_list_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Terms0_4,
  MR_Word mercury__term__Subst_5,
  MR_Word * mercury__term__Terms_6)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, mercury__term__Terms_6);
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_substitution_to_list_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Terms0_4,
  MR_Word mercury__term__Subst_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Terms_6;

    {
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
    return mercury__term__Terms_6;
  }
}

void MR_CALL 
mercury__term__apply_substitution_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Term0_4,
  MR_Word mercury__term__Subst_5,
  MR_Word * mercury__term__Term_6)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, mercury__term__Term_6);
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_substitution_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Term0_4,
  MR_Word mercury__term__Subst_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Term_6;

    {
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Subst_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
    return mercury__term__Term_6;
  }
}

void MR_CALL 
mercury__term__substitute_corresponding_in_terms_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_11,
  MR_Word mercury__term__Vars_5,
  MR_Word mercury__term__ReplacementTerms_6,
  MR_Word mercury__term__Terms0_7,
  MR_Word * mercury__term__Terms_8)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__term__Subst_10;

    {
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
    {
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Subst_10, mercury__term__Terms0_7, mercury__term__Terms_8);
    }
  }
}

void MR_CALL 
mercury__term__substitute_corresponding_in_term_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_11,
  MR_Word mercury__term__Vars_5,
  MR_Word mercury__term__ReplacementTerms_6,
  MR_Word mercury__term__Term0_7,
  MR_Word * mercury__term__Term_8)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Subst0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__term__Subst_10;

    {
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_9, &mercury__term__Subst_10);
    }
    {
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Subst_10, mercury__term__Term0_7, mercury__term__Term_8);
    }
  }
}

void MR_CALL 
mercury__term__substitute_var_in_terms_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_13,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3,
  MR_Word * mercury__term__HeadVar__4_4)
{
  {
    MR_bool mercury__term__succeeded;

    if ((mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__term__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__term__Term_11;
        MR_Word mercury__term__Terms_12;

        {
          mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Term0_9, &mercury__term__Term_11);
        }
        {
          mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Terms0_10, &mercury__term__Terms_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
        }
      }
  }
}

void MR_CALL 
mercury__term__substitute_var_in_term_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_15,
  MR_Word mercury__term__Var_5,
  MR_Word mercury__term__ReplacementTerm_6,
  MR_Word mercury__term__Term0_7,
  MR_Word * mercury__term__Term_8)
{
  {
    MR_bool mercury__term__succeeded;

    if (((MR_tag((MR_Word) mercury__term__Term0_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 0)));
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 1)));
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 2)));
        MR_Word mercury__term__ArgTerms_14;

        {
          mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Var_5, mercury__term__ReplacementTerm_6, mercury__term__ArgTerms0_12, &mercury__term__ArgTerms_14);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *mercury__term__Term_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_14));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
        }
      }
    else
      {
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 0)));
        MR_Word mercury__term___Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 1)));
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_5;

        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
        if (mercury__term__succeeded)
          mercury__term__succeeded = MR_TRUE;
        else
          {
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_5;

            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
          }
        if (mercury__term__succeeded)
          *mercury__term__Term_8 = mercury__term__ReplacementTerm_6;
        else
          *mercury__term__Term_8 = mercury__term__Term0_7;
      }
  }
}

void MR_CALL 
mercury__term__substitute_corresponding_list_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Vars_5,
  MR_Word mercury__term__ReplacementTerms_6,
  MR_Word mercury__term__Terms0_7,
  MR_Word * mercury__term__Terms_8)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__term__Subst_15;

    {
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
    {
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Terms0_7, mercury__term__Terms_8);
    }
  }
}

MR_Word MR_CALL 
mercury__term__substitute_corresponding_list_3_f_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Vars_5,
  MR_Word mercury__term__ReplacementTerms_6,
  MR_Word mercury__term__Terms0_7)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Terms_8;
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__term__Subst_15;

    {
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
    {
      mercury__term__apply_substitution_in_terms_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Terms0_7, &mercury__term__Terms_8);
    }
    return mercury__term__Terms_8;
  }
}

void MR_CALL 
mercury__term__substitute_corresponding_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Vars_5,
  MR_Word mercury__term__ReplacementTerms_6,
  MR_Word mercury__term__Term0_7,
  MR_Word * mercury__term__Term_8)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__term__Subst_15;

    {
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
    {
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Term0_7, mercury__term__Term_8);
    }
  }
}

MR_Word MR_CALL 
mercury__term__substitute_corresponding_3_f_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Vars_5,
  MR_Word mercury__term__ReplacementTerms_6,
  MR_Word mercury__term__Term0_7)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Term_8;
    MR_Word mercury__term__Subst0_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__term__Subst_15;

    {
      mercury__term__build_subst_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Vars_5, mercury__term__ReplacementTerms_6, mercury__term__Subst0_14, &mercury__term__Subst_15);
    }
    {
      mercury__term__apply_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Subst_15, mercury__term__Term0_7, &mercury__term__Term_8);
    }
    return mercury__term__Term_8;
  }
}

void MR_CALL 
mercury__term__substitute_list_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Terms0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementTerm_7,
  MR_Word * mercury__term__Terms_8)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Terms0_5, mercury__term__Terms_8);
    }
  }
}

MR_Word MR_CALL 
mercury__term__substitute_list_3_f_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Terms0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementTerm_7)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Terms_8;

    {
      mercury__term__substitute_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
    return mercury__term__Terms_8;
  }
}

void MR_CALL 
mercury__term__substitute_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Term0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementTerm_7,
  MR_Word * mercury__term__Term_8)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Term0_5, mercury__term__Term_8);
    }
  }
}

MR_Word MR_CALL 
mercury__term__substitute_3_f_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Term0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementTerm_7)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Term_8;

    {
      mercury__term__substitute_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementTerm_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
    return mercury__term__Term_8;
  }
}

void MR_CALL 
mercury__term__apply_renaming_in_terms_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_10,
  MR_Word mercury__term__Renaming_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word * mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;

    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term__Term0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term__Terms0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term__Term_8;
        MR_Word mercury__term__Terms_9;

        {
          mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Renaming_1, mercury__term__Term0_6, &mercury__term__Term_8);
        }
        {
          mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__Renaming_1, mercury__term__Terms0_7, &mercury__term__Terms_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_9));
        }
      }
  }
}

void MR_CALL 
mercury__term__apply_renaming_in_term_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_14,
  MR_Word mercury__term__Renaming_4,
  MR_Word mercury__term__Term0_5,
  MR_Word * mercury__term__Term_6)
{
  {
    MR_bool mercury__term__succeeded;

    if (((MR_tag((MR_Word) mercury__term__Term0_5)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 0)));
        MR_Word mercury__term__ArgTerms0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 1)));
        MR_Word mercury__term__ArgTerms_12;
        MR_Word mercury__term__Context_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_5, (MR_Integer) 2)));

        {
          mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__Renaming_4, mercury__term__ArgTerms0_11, &mercury__term__ArgTerms_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *mercury__term__Term_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_10));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_12));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_13));
        }
      }
    else
      {
        MR_Word mercury__term__Var0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 0)));
        MR_Word mercury__term__Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_5, (MR_Integer) 1)));
        MR_Word mercury__term__Var_9;
        MR_Word mercury__term__NewVar_18;
        MR_Word mercury__term__TypeCtorInfo_9_19 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mercury__term__TypeInfo_10_20;
        MR_Box mercury__term__conv0_NewVar_18;

        {
          mercury__term__TypeInfo_10_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_19));
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_20, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
        }
        {
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_10_20, mercury__term__TypeInfo_10_20, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_7, &mercury__term__conv0_NewVar_18);
        }
        if (mercury__term__succeeded)
          {
            mercury__term__NewVar_18 = ((MR_Word) mercury__term__conv0_NewVar_18);
            mercury__term__succeeded = MR_TRUE;
          }
        if (mercury__term__succeeded)
          mercury__term__Var_9 = mercury__term__NewVar_18;
        else
          mercury__term__Var_9 = mercury__term__Var0_7;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__Term_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_8));
        }
      }
  }
}

void MR_CALL 
mercury__term__apply_renaming_in_vars_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_10,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word * mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;

    if ((mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__term__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term__Var0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__term__Vars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__term__Var_8;
        MR_Word mercury__term__Vars_9;
        MR_Word mercury__term__NewVar_14;
        MR_Word mercury__term__TypeCtorInfo_9_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
        MR_Word mercury__term__TypeInfo_10_16;
        MR_Box mercury__term__conv0_NewVar_14;

        {
          mercury__term__TypeInfo_10_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_15));
          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_10));
        }
        {
          mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__TypeInfo_10_16, mercury__term__TypeInfo_10_16, (MR_Word) mercury__term__HeadVar__1_1, mercury__term__Var0_6, &mercury__term__conv0_NewVar_14);
        }
        if (mercury__term__succeeded)
          {
            mercury__term__NewVar_14 = ((MR_Word) mercury__term__conv0_NewVar_14);
            mercury__term__succeeded = MR_TRUE;
          }
        if (mercury__term__succeeded)
          mercury__term__Var_8 = mercury__term__NewVar_14;
        else
          mercury__term__Var_8 = mercury__term__Var0_6;
        {
          mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_10, mercury__term__HeadVar__1_1, mercury__term__Vars0_7, &mercury__term__Vars_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_8));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Vars_9));
        }
      }
  }
}

void MR_CALL 
mercury__term__apply_renaming_in_var_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_8,
  MR_Word mercury__term__Renaming_4,
  MR_Word mercury__term__Var0_5,
  MR_Word * mercury__term__Var_6)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__NewVar_7;
    MR_Word mercury__term__TypeCtorInfo_9_9 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__term__TypeInfo_10_10;
    MR_Box mercury__term__conv0_NewVar_7;

    {
      mercury__term__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_10, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_8));
    }
    {
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__TypeInfo_10_10, mercury__term__TypeInfo_10_10, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_5, &mercury__term__conv0_NewVar_7);
    }
    if (mercury__term__succeeded)
      {
        mercury__term__NewVar_7 = ((MR_Word) mercury__term__conv0_NewVar_7);
        mercury__term__succeeded = MR_TRUE;
      }
    if (mercury__term__succeeded)
      *mercury__term__Var_6 = mercury__term__NewVar_7;
    else
      *mercury__term__Var_6 = mercury__term__Var0_5;
  }
}

void MR_CALL 
mercury__term__apply_variable_renaming_to_list_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Terms0_4,
  MR_Word mercury__term__Renaming_5,
  MR_Word * mercury__term__Terms_6)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, mercury__term__Terms_6);
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_list_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Terms0_4,
  MR_Word mercury__term__Renaming_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Terms_6;

    {
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
    return mercury__term__Terms_6;
  }
}

void MR_CALL 
mercury__term__apply_variable_renaming_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Term0_4,
  MR_Word mercury__term__Renaming_5,
  MR_Word * mercury__term__Term_6)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, mercury__term__Term_6);
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_variable_renaming_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Term0_4,
  MR_Word mercury__term__Renaming_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Term_6;

    {
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
    return mercury__term__Term_6;
  }
}

void MR_CALL 
mercury__term__apply_variable_renaming_to_vars_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Renaming_4,
  MR_Word mercury__term__Vars0_5,
  MR_Word * mercury__term__Vars_6)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_4, mercury__term__Vars0_5, mercury__term__Vars_6);
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_vars_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Renaming_4,
  MR_Word mercury__term__Vars0_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Vars_6;

    {
      mercury__term__apply_renaming_in_vars_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_4, mercury__term__Vars0_5, &mercury__term__Vars_6);
    }
    return mercury__term__Vars_6;
  }
}

void MR_CALL 
mercury__term__apply_variable_renaming_to_var_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Renaming_4,
  MR_Word mercury__term__Var0_5,
  MR_Word * mercury__term__Var_6)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__NewVar_11;
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__term__TypeInfo_10_13;
    MR_Box mercury__term__conv0_NewVar_11;

    {
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
    }
    {
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__TypeInfo_10_13, mercury__term__TypeInfo_10_13, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_5, &mercury__term__conv0_NewVar_11);
    }
    if (mercury__term__succeeded)
      {
        mercury__term__NewVar_11 = ((MR_Word) mercury__term__conv0_NewVar_11);
        mercury__term__succeeded = MR_TRUE;
      }
    if (mercury__term__succeeded)
      *mercury__term__Var_6 = mercury__term__NewVar_11;
    else
      *mercury__term__Var_6 = mercury__term__Var0_5;
  }
}

MR_Word MR_CALL 
mercury__term__apply_variable_renaming_to_var_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Renaming_4,
  MR_Word mercury__term__Var0_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Var_6;
    MR_Word mercury__term__NewVar_11;
    MR_Word mercury__term__TypeCtorInfo_9_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
    MR_Word mercury__term__TypeInfo_10_13;
    MR_Box mercury__term__conv0_NewVar_11;

    {
      mercury__term__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_9_12));
      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_10_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_7));
    }
    {
      mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__TypeInfo_10_13, mercury__term__TypeInfo_10_13, (MR_Word) mercury__term__Renaming_4, mercury__term__Var0_5, &mercury__term__conv0_NewVar_11);
    }
    if (mercury__term__succeeded)
      {
        mercury__term__NewVar_11 = ((MR_Word) mercury__term__conv0_NewVar_11);
        mercury__term__succeeded = MR_TRUE;
      }
    if (mercury__term__succeeded)
      mercury__term__Var_6 = mercury__term__NewVar_11;
    else
      mercury__term__Var_6 = mercury__term__Var0_5;
    return mercury__term__Var_6;
  }
}

void MR_CALL 
mercury__term__apply_renaming_to_list_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Terms0_4,
  MR_Word mercury__term__Renaming_5,
  MR_Word * mercury__term__Terms_6)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, mercury__term__Terms_6);
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_renaming_to_list_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Terms0_4,
  MR_Word mercury__term__Renaming_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Terms_6;

    {
      mercury__term__apply_renaming_in_terms_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Terms0_4, &mercury__term__Terms_6);
    }
    return mercury__term__Terms_6;
  }
}

void MR_CALL 
mercury__term__apply_renaming_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Term0_4,
  MR_Word mercury__term__Renaming_5,
  MR_Word * mercury__term__Term_6)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, mercury__term__Term_6);
    }
  }
}

MR_Word MR_CALL 
mercury__term__apply_renaming_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Term0_4,
  MR_Word mercury__term__Renaming_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Term_6;

    {
      mercury__term__apply_renaming_in_term_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__Renaming_5, mercury__term__Term0_4, &mercury__term__Term_6);
    }
    return mercury__term__Term_6;
  }
}

void MR_CALL 
mercury__term__rename_var_in_terms_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_13,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__HeadVar__3_3,
  MR_Word * mercury__term__HeadVar__4_4)
{
  {
    MR_bool mercury__term__succeeded;

    if ((mercury__term__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__term__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__term__Term0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__term__Terms0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__term__Term_11;
        MR_Word mercury__term__Terms_12;

        {
          mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Term0_9, &mercury__term__Term_11);
        }
        {
          mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_13, mercury__term__HeadVar__1_1, mercury__term__HeadVar__2_2, mercury__term__Terms0_10, &mercury__term__Terms_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Term_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Terms_12));
        }
      }
  }
}

void MR_CALL 
mercury__term__rename_var_in_term_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_15,
  MR_Word mercury__term__Var_5,
  MR_Word mercury__term__ReplacementVar_6,
  MR_Word mercury__term__Term0_7,
  MR_Word * mercury__term__Term_8)
{
  {
    MR_bool mercury__term__succeeded;

    if (((MR_tag((MR_Word) mercury__term__Term0_7)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 0)));
        MR_Word mercury__term__ArgTerms0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 1)));
        MR_Word mercury__term__ArgTerms_13;
        MR_Word mercury__term__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term0_7, (MR_Integer) 2)));

        {
          mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__Var_5, mercury__term__ReplacementVar_6, mercury__term__ArgTerms0_12, &mercury__term__ArgTerms_13);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *mercury__term__Term_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__term__Name_11));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__term__ArgTerms_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__term__Context_14));
        }
      }
    else
      {
        MR_Word mercury__term__Var0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 0)));
        MR_Word mercury__term__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term0_7, (MR_Integer) 1)));
        MR_Integer mercury__term__CastX_18 = (MR_Integer) mercury__term__Var0_9;
        MR_Integer mercury__term__CastY_19 = (MR_Integer) mercury__term__Var_5;

        mercury__term__succeeded = (mercury__term__CastX_18 == mercury__term__CastY_19);
        if (mercury__term__succeeded)
          mercury__term__succeeded = MR_TRUE;
        else
          {
            MR_Integer mercury__term__V_16_16 = (MR_Integer) mercury__term__Var0_9;
            MR_Integer mercury__term__V_17_17 = (MR_Integer) mercury__term__Var_5;

            mercury__term__succeeded = (mercury__term__V_16_16 == mercury__term__V_17_17);
          }
        if (mercury__term__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__term__Term_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__ReplacementVar_6));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__Context_10));
          }
        else
          *mercury__term__Term_8 = mercury__term__Term0_7;
      }
  }
}

void MR_CALL 
mercury__term__rename_list_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Terms0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementVar_7,
  MR_Word * mercury__term__Terms_8)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, mercury__term__Terms_8);
    }
  }
}

MR_Word MR_CALL 
mercury__term__rename_list_3_f_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Terms0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementVar_7)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Terms_8;

    {
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
    return mercury__term__Terms_8;
  }
}

void MR_CALL 
mercury__term__rename_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Term0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementVar_7,
  MR_Word * mercury__term__Term_8)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, mercury__term__Term_8);
    }
  }
}

MR_Word MR_CALL 
mercury__term__rename_3_f_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Term0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementVar_7)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Term_8;

    {
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
    return mercury__term__Term_8;
  }
}

void MR_CALL 
mercury__term__relabel_variables_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Terms0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementVar_7,
  MR_Word * mercury__term__Terms_8)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, mercury__term__Terms_8);
    }
  }
}

MR_Word MR_CALL 
mercury__term__relabel_variables_3_f_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Terms0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementVar_7)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Terms_8;

    {
      mercury__term__rename_var_in_terms_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Terms0_5, &mercury__term__Terms_8);
    }
    return mercury__term__Terms_8;
  }
}

void MR_CALL 
mercury__term__relabel_variable_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Term0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementVar_7,
  MR_Word * mercury__term__Term_8)
{
  {
    MR_bool mercury__term__succeeded;

    {
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, mercury__term__Term_8);
    }
  }
}

MR_Word MR_CALL 
mercury__term__relabel_variable_3_f_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Term0_5,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__ReplacementVar_7)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Term_8;

    {
      mercury__term__rename_var_in_term_4_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Var_6, mercury__term__ReplacementVar_7, mercury__term__Term0_5, &mercury__term__Term_8);
    }
    return mercury__term__Term_8;
  }
}

MR_bool MR_CALL 
mercury__term__is_ground_in_bindings_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_11,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__Bindings_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mercury__term__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

            {
              mercury__term__succeeded = mercury__term__is_ground_in_bindings_list_2_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__Args_8, mercury__term__Bindings_2);
            }
          }
        else
          {
            MR_Word mercury__term__TypeCtorInfo_12_12 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
            MR_Word mercury__term__TypeInfo_13_13;
            MR_Word mercury__term__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
            MR_Word mercury__term__TypeInfo_15_15;
            MR_Word mercury__term__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term__Binding_6;
            MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__term__conv0_Binding_6;

            {
              mercury__term__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_12_12));
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_13_13, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
            }
            {
              mercury__term__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_14_14));
              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_15_15, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_11));
            }
            {
              mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_11, mercury__term__TypeInfo_13_13, mercury__term__TypeInfo_15_15, (MR_Word) mercury__term__Bindings_2, mercury__term__V_3, &mercury__term__conv0_Binding_6);
            }
            if (mercury__term__succeeded)
              {
                mercury__term__Binding_6 = ((MR_Word) mercury__term__conv0_Binding_6);
                mercury__term__succeeded = MR_TRUE;
              }
            if (mercury__term__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Binding_6;

                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__term__is_ground_1_p_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_Word mercury__term__ArgTerms_3;
    MR_Word mercury__term__V_2_2;
    MR_Word mercury__term__V_4_4;

    if (mercury__term__succeeded)
      {
        mercury__term__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        mercury__term__ArgTerms_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));
        {
          mercury__term__succeeded = mercury__term__is_ground_list_1_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_3);
        }
      }
    return mercury__term__succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__occurs_list_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_8,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__Var_6,
  MR_Word mercury__term__Subst_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mercury__term__Term_4;
        MR_Word mercury__term__Terms_5;

        if (mercury__term__succeeded)
          {
            mercury__term__Term_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            mercury__term__Terms_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            {
              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_8, mercury__term__Term_4, mercury__term__Var_6, mercury__term__Subst_7);
            }
            if (mercury__term__succeeded)
              mercury__term__succeeded = MR_TRUE;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__Terms_5;

                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__term__occurs_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_14,
  MR_Word mercury__term__Term_4,
  MR_Word mercury__term__Var_5,
  MR_Word mercury__term__Subst_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mercury__term__ArgTerms_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
            MR_Word mercury__term___Name_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
            MR_Word mercury__term___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

            {
              mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__ArgTerms_11, mercury__term__Var_5, mercury__term__Subst_6);
            }
          }
        else
          {
            MR_Word mercury__term__X_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
            MR_Word mercury__term___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));
            MR_Integer mercury__term__CastX_21 = (MR_Integer) mercury__term__X_7;
            MR_Integer mercury__term__CastY_22 = (MR_Integer) mercury__term__Var_5;

            mercury__term__succeeded = (mercury__term__CastX_21 == mercury__term__CastY_22);
            if (mercury__term__succeeded)
              mercury__term__succeeded = MR_TRUE;
            else
              {
                MR_Integer mercury__term__V_19_19 = (MR_Integer) mercury__term__X_7;
                MR_Integer mercury__term__V_20_20 = (MR_Integer) mercury__term__Var_5;

                mercury__term__succeeded = (mercury__term__V_19_19 == mercury__term__V_20_20);
              }
            if (mercury__term__succeeded)
              mercury__term__succeeded = MR_TRUE;
            else
              {
                MR_Word mercury__term__TypeCtorInfo_15_15 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mercury__term__TypeInfo_16_16;
                MR_Word mercury__term__TypeCtorInfo_17_17 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                MR_Word mercury__term__TypeInfo_18_18;
                MR_Word mercury__term__TermBoundToX_9;
                MR_Box mercury__term__conv0_TermBoundToX_9;

                {
                  mercury__term__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_15_15));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_16_16, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
                }
                {
                  mercury__term__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_17_17));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_18_18, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_14));
                }
                {
                  mercury__term__succeeded = mercury__tree234__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_14, mercury__term__TypeInfo_16_16, mercury__term__TypeInfo_18_18, (MR_Word) mercury__term__Subst_6, mercury__term__X_7, &mercury__term__conv0_TermBoundToX_9);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__TermBoundToX_9 = ((MR_Word) mercury__term__conv0_TermBoundToX_9);
                    mercury__term__succeeded = MR_TRUE;
                  }
                if (mercury__term__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__term__Term__tmp_copy_4 = mercury__term__TermBoundToX_9;

                      mercury__term__Term_4 = mercury__term__Term__tmp_copy_4;
                    }
                    continue;
                  }
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__term__contains_var_list_2_p_1(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word * mercury__term__Var_2,
  MR_Cont mercury__term__cont,
  void * mercury__term__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mercury__term__V_10_10;
        MR_Word mercury__term__V_11_11;

        if (mercury__term__succeeded)
          {
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            if (((MR_tag((MR_Word) mercury__term__V_11_11)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 1)));
                MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 0)));
                MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__V_11_11, (MR_Integer) 2)));

                {
                  mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_15, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
                }
              }
            else
              {
                MR_Word mercury__term__V_13_13;

                *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 0)));
                mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__V_11_11, (MR_Integer) 1)));
                {
                  mercury__term__cont(mercury__term__cont_env_ptr);
                }
              }
            {
              /* direct tailcall eliminated */
              {
                MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

                mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
              }
              continue;
            }
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__term__contains_var_list_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__Var_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mercury__term__V_10_10;
        MR_Word mercury__term__V_11_11;

        if (mercury__term__succeeded)
          {
            mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            {
              mercury__term__succeeded = mercury__term__contains_var_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__V_11_11, mercury__term__Var_2);
            }
            if (!(mercury__term__succeeded))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__V_10_10;

                  mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__term__contains_var_2_p_1(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word * mercury__term__Var_2,
  MR_Cont mercury__term__cont,
  void * mercury__term__cont_env_ptr)
{
  {
    MR_bool mercury__term__succeeded;

    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

        {
          mercury__term__contains_var_list_2_p_1(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2, mercury__term__cont, mercury__term__cont_env_ptr);
        }
      }
    else
      {
        MR_Word mercury__term__V_4_4;

        *mercury__term__Var_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        {
          mercury__term__cont(mercury__term__cont_env_ptr);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__term__contains_var_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__Var_2)
{
  {
    MR_bool mercury__term__succeeded;

    if (((MR_tag((MR_Word) mercury__term__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__ArgTerms_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__term__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__HeadVar__1_1, (MR_Integer) 2)));

        {
          mercury__term__succeeded = mercury__term__contains_var_list_2_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__ArgTerms_6, mercury__term__Var_2);
        }
      }
    else
      {
        MR_Word mercury__term__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__term__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__term__CastX_12 = (MR_Integer) mercury__term__Var_2;
        MR_Integer mercury__term__CastY_13 = (MR_Integer) mercury__term__Var_3;

        mercury__term__succeeded = (mercury__term__CastX_12 == mercury__term__CastY_13);
        if (mercury__term__succeeded)
          mercury__term__succeeded = MR_TRUE;
        else
          {
            MR_Integer mercury__term__V_10_10 = (MR_Integer) mercury__term__Var_2;
            MR_Integer mercury__term__V_11_11 = (MR_Integer) mercury__term__Var_3;

            mercury__term__succeeded = (mercury__term__V_10_10 == mercury__term__V_11_11);
          }
      }
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term__vars_list_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_6,
  MR_Word mercury__term__Terms_3,
  MR_Word * mercury__term__Vars_4)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__Terms_3, mercury__term__V_5_5, mercury__term__Vars_4);
    }
  }
}

MR_Word MR_CALL 
mercury__term__vars_list_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__Terms_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Vars_4;
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__Terms_3, mercury__term__V_8_8, &mercury__term__Vars_4);
    }
    return mercury__term__Vars_4;
  }
}

void MR_CALL 
mercury__term__vars_2_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_15,
  MR_Word mercury__term__Term_4,
  MR_Word mercury__term__STATE_VARIABLE_Vars_0_11,
  MR_Word * mercury__term__STATE_VARIABLE_Vars_12)
{
  {
    MR_bool mercury__term__succeeded;

    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__ArgTerms_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
        MR_Word mercury__term__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
        MR_Word mercury__term__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

        {
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_15, mercury__term__ArgTerms_9, mercury__term__STATE_VARIABLE_Vars_0_11, mercury__term__STATE_VARIABLE_Vars_12);
        }
      }
    else
      {
        MR_Word mercury__term__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
        MR_Word mercury__term__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__STATE_VARIABLE_Vars_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_6));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__STATE_VARIABLE_Vars_0_11));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__term__vars_2_2_f_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word mercury__term__Term_4,
  MR_Word mercury__term__Vars0_5)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Vars_6;

    if (((MR_tag((MR_Word) mercury__term__Term_4)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__ArgTerms_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 1)));
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 0)));
        MR_Word mercury__term__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_4, (MR_Integer) 2)));

        {
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_7, mercury__term__ArgTerms_15, mercury__term__Vars0_5, &mercury__term__Vars_6);
        }
      }
    else
      {
        MR_Word mercury__term__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 0)));
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_4, (MR_Integer) 1)));

        {
          mercury__term__Vars_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 0) = ((MR_Box) (mercury__term__Var_12));
          MR_hl_field(MR_mktag(1), mercury__term__Vars_6, 1) = ((MR_Box) (mercury__term__Vars0_5));
        }
      }
    return mercury__term__Vars_6;
  }
}

void MR_CALL 
mercury__term__vars_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_6,
  MR_Word mercury__term__Term_3,
  MR_Word * mercury__term__Vars_4)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
        MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

        {
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_6, mercury__term__ArgTerms_14, mercury__term__V_5_5, mercury__term__Vars_4);
        }
      }
    else
      {
        MR_Word mercury__term__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
        MR_Word mercury__term__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__term__Vars_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__term__Var_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__term__V_5_5));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__term__vars_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_5,
  MR_Word mercury__term__Term_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Vars_4;
    MR_Word mercury__term__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    if (((MR_tag((MR_Word) mercury__term__Term_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__term__ArgTerms_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 1)));
        MR_Word mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 0)));
        MR_Word mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__Term_3, (MR_Integer) 2)));

        {
          mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_5, mercury__term__ArgTerms_16, mercury__term__V_8_8, &mercury__term__Vars_4);
        }
      }
    else
      {
        MR_Word mercury__term__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 0)));
        MR_Word mercury__term__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__Term_3, (MR_Integer) 1)));

        {
          mercury__term__Vars_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 0) = ((MR_Box) (mercury__term__Var_13));
          MR_hl_field(MR_mktag(1), mercury__term__Vars_4, 1) = ((MR_Box) (mercury__term__V_8_8));
        }
      }
    return mercury__term__Vars_4;
  }
}

MR_bool MR_CALL 
mercury__term__list_subsumes_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_9,
  MR_Word mercury__term__Terms1_4,
  MR_Word mercury__term__Terms2_5,
  MR_Word * mercury__term__Subst_6)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__Terms2Vars_7;
    MR_Word mercury__term__Subst0_8;
    MR_Word mercury__term__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__term__vars_2_list_3_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms2_5, mercury__term__V_16_16, &mercury__term__Terms2Vars_7);
    }
    mercury__term__Subst0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_9, mercury__term__Terms1_4, mercury__term__Terms2_5, mercury__term__Terms2Vars_7, mercury__term__Subst0_8, mercury__term__Subst_6);
    }
    return mercury__term__succeeded;
  }
}

MR_bool MR_CALL 
mercury__term__unify_term_list_dont_bind_5_p_0(
  MR_Word mercury__term__TypeInfo_for_T_20,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__DontBindVars_3,
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_4,
  MR_Word * mercury__term__STATE_VARIABLE_Subst_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__term__succeeded)
              {
                *mercury__term__STATE_VARIABLE_Subst_5 = mercury__term__STATE_VARIABLE_Subst_0_4;
                mercury__term__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mercury__term__TermX_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term__TermXs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term__TermY_12;
            MR_Word mercury__term__TermYs_13;
            MR_Word mercury__term__STATE_VARIABLE_Subst_18_18;

            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term__succeeded)
              {
                mercury__term__TermY_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term__TermYs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mercury__term__succeeded = mercury__term__unify_term_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_20, mercury__term__TermX_10, mercury__term__TermY_12, mercury__term__DontBindVars_3, mercury__term__STATE_VARIABLE_Subst_0_4, &mercury__term__STATE_VARIABLE_Subst_18_18);
                }
                if (mercury__term__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_11;
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_13;
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4 = mercury__term__STATE_VARIABLE_Subst_18_18;

                      mercury__term__STATE_VARIABLE_Subst_0_4 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_4;
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__term__unify_term_dont_bind_5_p_0(
  MR_Word mercury__term__TypeInfo_for_T_56,
  MR_Word mercury__term__TermX_6,
  MR_Word mercury__term__TermY_7,
  MR_Word mercury__term__DontBindVars_8,
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_34,
  MR_Word * mercury__term__STATE_VARIABLE_Subst_35)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if (((MR_tag((MR_Word) mercury__term__TermX_6)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mercury__term__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 1)));
            MR_Word mercury__term__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 0)));
            MR_Word mercury__term__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_6, (MR_Integer) 2)));

            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__term__TypeCtorInfo_105_105;
                MR_Word mercury__term__TypeInfo_106_106;
                MR_Word mercury__term__NameY_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
                MR_Integer mercury__term__ArityX_32;
                MR_Integer mercury__term__ArityY_33;
                MR_Word mercury__term__ArgTermsY_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
                MR_Word mercury__term___CY_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));

                {
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_111_111, mercury__term__NameY_30);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__TypeCtorInfo_105_105 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                    {
                      mercury__term__TypeInfo_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_105_105));
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_106_106, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                    }
                    {
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__V_110_110, &mercury__term__ArityX_32);
                    }
                    {
                      mercury__list__length_2_p_0(mercury__term__TypeInfo_106_106, (MR_Word) mercury__term__ArgTermsY_54, &mercury__term__ArityY_33);
                    }
                    mercury__term__succeeded = (mercury__term__ArityX_32 == mercury__term__ArityY_33);
                    if (mercury__term__succeeded)
                      {
                        mercury__term__succeeded = mercury__term__unify_term_list_dont_bind_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__ArgTermsY_54, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
                  }
              }
            else
              {
                MR_Word mercury__term__Y_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
                MR_Word mercury__term__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));
                MR_Word mercury__term__TermBoundToY_51;
                MR_Word mercury__term__TypeCtorInfo_95_95 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mercury__term__TypeInfo_96_96;
                MR_Word mercury__term__TypeCtorInfo_97_97 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                MR_Word mercury__term__TypeInfo_98_98;
                MR_Box mercury__term__conv0_TermBoundToY_51;

                {
                  mercury__term__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_95_95));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_96_96, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                }
                {
                  mercury__term__TypeInfo_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_97_97));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_98_98, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                }
                {
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_96_96, mercury__term__TypeInfo_98_98, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_52, &mercury__term__conv0_TermBoundToY_51);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__TermBoundToY_51 = ((MR_Word) mercury__term__conv0_TermBoundToY_51);
                    mercury__term__succeeded = MR_TRUE;
                  }
                if (mercury__term__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_51;

                      mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word mercury__term__TypeCtorInfo_101_101;
                    MR_Word mercury__term__TypeInfo_102_102;
                    MR_Word mercury__term__TypeCtorInfo_103_103;
                    MR_Word mercury__term__TypeInfo_104_104;
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_35;

                    {
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_110_110, mercury__term__Y_52, mercury__term__STATE_VARIABLE_Subst_0_34);
                    }
                    mercury__term__succeeded = !(mercury__term__succeeded);
                    if (mercury__term__succeeded)
                      {
                        {
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_52, mercury__term__DontBindVars_8);
                        }
                        mercury__term__succeeded = !(mercury__term__succeeded);
                        if (mercury__term__succeeded)
                          {
                            mercury__term__TypeCtorInfo_101_101 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                            mercury__term__TypeCtorInfo_103_103 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                            {
                              mercury__term__TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_101_101));
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_102_102, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                            }
                            {
                              mercury__term__TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_103_103));
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_104_104, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                            }
                            {
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_102_102, mercury__term__TypeInfo_104_104, mercury__term__Y_52, ((MR_Box) (mercury__term__TermX_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv1_STATE_VARIABLE_Subst_35);
                            }
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_35;
                            mercury__term__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
        else
          {
            MR_Word mercury__term__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 0)));
            MR_Word mercury__term__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_6, (MR_Integer) 1)));

            if (((MR_tag((MR_Word) mercury__term__TermY_7)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__term__ArgTermsY_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 1)));
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 0)));
                MR_Word mercury__term__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_7, (MR_Integer) 2)));
                MR_Word mercury__term__TermBoundToX_48;
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mercury__term__TypeInfo_86_86;
                MR_Word mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                MR_Word mercury__term__TypeInfo_88_88;
                MR_Box mercury__term__conv2_TermBoundToX_48;

                {
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                }
                {
                  mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                }
                {
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_86_86, mercury__term__TypeInfo_88_88, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv2_TermBoundToX_48);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__TermBoundToX_48 = ((MR_Word) mercury__term__conv2_TermBoundToX_48);
                    mercury__term__succeeded = MR_TRUE;
                  }
                if (mercury__term__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_48;

                      mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word mercury__term__TypeCtorInfo_91_91;
                    MR_Word mercury__term__TypeInfo_92_92;
                    MR_Word mercury__term__TypeCtorInfo_93_93;
                    MR_Word mercury__term__TypeInfo_94_94;
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_35;

                    {
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__ArgTermsY_22, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
                    }
                    mercury__term__succeeded = !(mercury__term__succeeded);
                    if (mercury__term__succeeded)
                      {
                        {
                          mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                        }
                        mercury__term__succeeded = !(mercury__term__succeeded);
                        if (mercury__term__succeeded)
                          {
                            mercury__term__TypeCtorInfo_91_91 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                            mercury__term__TypeCtorInfo_93_93 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                            {
                              mercury__term__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_91_91));
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_92_92, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                            }
                            {
                              mercury__term__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_93_93));
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_94_94, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                            }
                            {
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_92_92, mercury__term__TypeInfo_94_94, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv3_STATE_VARIABLE_Subst_35);
                            }
                            *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_35;
                            mercury__term__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
            else
              {
                MR_Word mercury__term__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 0)));
                MR_Word mercury__term__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_7, (MR_Integer) 1)));

                {
                  mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__DontBindVars_8);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                  }
                else
                  {
                    {
                      mercury__term__succeeded = mercury__term__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_95_95_91_50_93_95_48_2_p_in__list_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__DontBindVars_8);
                    }
                    if (mercury__term__succeeded)
                      {
                        mercury__term__succeeded = mercury__term__unify_term_bound_var_5_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_113_113, mercury__term__DontBindVars_8, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__STATE_VARIABLE_Subst_35);
                      }
                    else
                      {
                        MR_Word mercury__term__TypeInfo_62_62;
                        MR_Word mercury__term__TypeInfo_64_64;
                        MR_Word mercury__term__TermBoundToX_14;
                        MR_Word mercury__term__TypeCtorInfo_61_61 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                        MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                        MR_Box mercury__term__conv4_TermBoundToX_14;

                        {
                          mercury__term__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_61_61));
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_62_62, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                        }
                        {
                          mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                        }
                        {
                          mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__V_113_113, &mercury__term__conv4_TermBoundToX_14);
                        }
                        if (mercury__term__succeeded)
                          {
                            mercury__term__TermBoundToX_14 = ((MR_Word) mercury__term__conv4_TermBoundToX_14);
                            mercury__term__succeeded = MR_TRUE;
                          }
                        if (mercury__term__succeeded)
                          {
                            MR_Word mercury__term__TermBoundToY_15;
                            MR_Box mercury__term__conv5_TermBoundToY_15;

                            {
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv5_TermBoundToY_15);
                            }
                            if (mercury__term__succeeded)
                              {
                                mercury__term__TermBoundToY_15 = ((MR_Word) mercury__term__conv5_TermBoundToY_15);
                                mercury__term__succeeded = MR_TRUE;
                              }
                            if (mercury__term__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word mercury__term__TermX__tmp_copy_6 = mercury__term__TermBoundToX_14;
                                  MR_Word mercury__term__TermY__tmp_copy_7 = mercury__term__TermBoundToY_15;

                                  mercury__term__TermY_7 = mercury__term__TermY__tmp_copy_7;
                                  mercury__term__TermX_6 = mercury__term__TermX__tmp_copy_6;
                                }
                                continue;
                              }
                            else
                              {
                                MR_Word mercury__term__SubstTermBoundToX_16;
                                MR_Word mercury__term__V_107_107;
                                MR_Word mercury__term__V_17_17;

                                {
                                  mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__TermBoundToX_14, &mercury__term__SubstTermBoundToX_16);
                                }
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_16)) == (MR_mktag((MR_Integer) 1)));
                                if (mercury__term__succeeded)
                                  {
                                    mercury__term__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 0)));
                                    mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_16, (MR_Integer) 1)));
                                    {
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__Y_12, mercury__term__V_107_107);
                                    }
                                  }
                                if (mercury__term__succeeded)
                                  {
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
                                    mercury__term__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_35;

                                    {
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToX_16, mercury__term__Y_12, mercury__term__STATE_VARIABLE_Subst_0_34);
                                    }
                                    mercury__term__succeeded = !(mercury__term__succeeded);
                                    if (mercury__term__succeeded)
                                      {
                                        {
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_62_62, mercury__term__TypeInfo_64_64, mercury__term__Y_12, ((MR_Box) (mercury__term__SubstTermBoundToX_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv6_STATE_VARIABLE_Subst_35);
                                        }
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_35;
                                        mercury__term__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                          }
                        else
                          {
                            MR_Word mercury__term__TypeInfo_74_74;
                            MR_Word mercury__term__TypeInfo_76_76;
                            MR_Word mercury__term__TermBoundToY_47;
                            MR_Word mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                            MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                            MR_Box mercury__term__conv7_TermBoundToY_47;

                            {
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                            }
                            {
                              mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                            }
                            {
                              mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__Y_12, &mercury__term__conv7_TermBoundToY_47);
                            }
                            if (mercury__term__succeeded)
                              {
                                mercury__term__TermBoundToY_47 = ((MR_Word) mercury__term__conv7_TermBoundToY_47);
                                mercury__term__succeeded = MR_TRUE;
                              }
                            if (mercury__term__succeeded)
                              {
                                MR_Word mercury__term__SubstTermBoundToY_18;
                                MR_Word mercury__term__V_108_108;
                                MR_Word mercury__term__V_19_19;

                                {
                                  mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__STATE_VARIABLE_Subst_0_34, mercury__term__TermBoundToY_47, &mercury__term__SubstTermBoundToY_18);
                                }
                                mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_18)) == (MR_mktag((MR_Integer) 1)));
                                if (mercury__term__succeeded)
                                  {
                                    mercury__term__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 0)));
                                    mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_18, (MR_Integer) 1)));
                                    {
                                      mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__V_108_108);
                                    }
                                  }
                                if (mercury__term__succeeded)
                                  {
                                    *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
                                    mercury__term__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_35;

                                    {
                                      mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__SubstTermBoundToY_18, mercury__term__V_113_113, mercury__term__STATE_VARIABLE_Subst_0_34);
                                    }
                                    mercury__term__succeeded = !(mercury__term__succeeded);
                                    if (mercury__term__succeeded)
                                      {
                                        {
                                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_74_74, mercury__term__TypeInfo_76_76, mercury__term__V_113_113, ((MR_Box) (mercury__term__SubstTermBoundToY_18)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv8_STATE_VARIABLE_Subst_35);
                                        }
                                        *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_35;
                                        mercury__term__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                            else
                              {
                                {
                                  mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_56, mercury__term__V_113_113, mercury__term__Y_12);
                                }
                                if (mercury__term__succeeded)
                                  *mercury__term__STATE_VARIABLE_Subst_35 = mercury__term__STATE_VARIABLE_Subst_0_34;
                                else
                                  {
                                    MR_Word mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                                    MR_Word mercury__term__TypeInfo_82_82;
                                    MR_Word mercury__term__TypeCtorInfo_83_83;
                                    MR_Word mercury__term__TypeInfo_84_84;
                                    MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_35;

                                    {
                                      mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                                    }
                                    mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                                    {
                                      mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
                                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_56));
                                    }
                                    {
                                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_56, mercury__term__TypeInfo_82_82, mercury__term__TypeInfo_84_84, mercury__term__V_113_113, ((MR_Box) (mercury__term__TermY_7)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_34, &mercury__term__conv9_STATE_VARIABLE_Subst_35);
                                    }
                                    *mercury__term__STATE_VARIABLE_Subst_35 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_35;
                                  }
                                mercury__term__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__term__unify_term_list_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_17,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_3,
  MR_Word * mercury__term__STATE_VARIABLE_Subst_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if ((mercury__term__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__term__succeeded = (mercury__term__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__term__succeeded)
              {
                *mercury__term__STATE_VARIABLE_Subst_4 = mercury__term__STATE_VARIABLE_Subst_0_3;
                mercury__term__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_Word mercury__term__TermX_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__term__TermXs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__term__TermY_10;
            MR_Word mercury__term__TermYs_11;
            MR_Word mercury__term__STATE_VARIABLE_Subst_15_15;

            mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__term__succeeded)
              {
                mercury__term__TermY_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 0)));
                mercury__term__TermYs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mercury__term__succeeded = mercury__term__unify_term_4_p_0(mercury__term__TypeInfo_for_T_17, mercury__term__TermX_8, mercury__term__TermY_10, mercury__term__STATE_VARIABLE_Subst_0_3, &mercury__term__STATE_VARIABLE_Subst_15_15);
                }
                if (mercury__term__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__term__HeadVar__1__tmp_copy_1 = mercury__term__TermXs_9;
                      MR_Word mercury__term__HeadVar__2__tmp_copy_2 = mercury__term__TermYs_11;
                      MR_Word mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3 = mercury__term__STATE_VARIABLE_Subst_15_15;

                      mercury__term__STATE_VARIABLE_Subst_0_3 = mercury__term__STATE_VARIABLE_Subst_0__tmp_copy_3;
                      mercury__term__HeadVar__2_2 = mercury__term__HeadVar__2__tmp_copy_2;
                      mercury__term__HeadVar__1_1 = mercury__term__HeadVar__1__tmp_copy_1;
                    }
                    continue;
                  }
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__term__unify_term_4_p_0(
  MR_Word mercury__term__TypeInfo_for_T_50,
  MR_Word mercury__term__TermX_5,
  MR_Word mercury__term__TermY_6,
  MR_Word mercury__term__STATE_VARIABLE_Subst_0_30,
  MR_Word * mercury__term__STATE_VARIABLE_Subst_31)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__term__succeeded;

        if (((MR_tag((MR_Word) mercury__term__TermX_5)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word mercury__term__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 1)));
            MR_Word mercury__term__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 0)));
            MR_Word mercury__term__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermX_5, (MR_Integer) 2)));

            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__term__NameY_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
                MR_Word mercury__term__ArgTermsY_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
                MR_Word mercury__term__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));

                {
                  mercury__term__succeeded = mercury__term____Unify____const_0_0(mercury__term__V_95_95, mercury__term__NameY_28);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__succeeded = mercury__term__unify_term_list_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__ArgTermsY_48, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__STATE_VARIABLE_Subst_31);
                  }
              }
            else
              {
                MR_Word mercury__term__Y_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
                MR_Word mercury__term__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
                MR_Word mercury__term__TermBoundToY_45;
                MR_Word mercury__term__TypeCtorInfo_83_83 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mercury__term__TypeInfo_84_84;
                MR_Word mercury__term__TypeCtorInfo_85_85 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                MR_Word mercury__term__TypeInfo_86_86;
                MR_Box mercury__term__conv0_TermBoundToY_45;

                {
                  mercury__term__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_83_83));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_84_84, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                }
                {
                  mercury__term__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_85_85));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_86_86, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                }
                {
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_84_84, mercury__term__TypeInfo_86_86, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_46, &mercury__term__conv0_TermBoundToY_45);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__TermBoundToY_45 = ((MR_Word) mercury__term__conv0_TermBoundToY_45);
                    mercury__term__succeeded = MR_TRUE;
                  }
                if (mercury__term__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_45;

                      mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word mercury__term__TypeCtorInfo_87_87;
                    MR_Word mercury__term__TypeInfo_88_88;
                    MR_Word mercury__term__TypeCtorInfo_89_89;
                    MR_Word mercury__term__TypeInfo_90_90;
                    MR_Word mercury__term__conv1_STATE_VARIABLE_Subst_31;

                    {
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_94_94, mercury__term__Y_46, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
                    mercury__term__succeeded = !(mercury__term__succeeded);
                    if (mercury__term__succeeded)
                      {
                        mercury__term__TypeCtorInfo_87_87 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                        mercury__term__TypeCtorInfo_89_89 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                        {
                          mercury__term__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_87_87));
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_88_88, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                        }
                        {
                          mercury__term__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_89_89));
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_90_90, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                        }
                        {
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_88_88, mercury__term__TypeInfo_90_90, mercury__term__Y_46, ((MR_Box) (mercury__term__TermX_5)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv1_STATE_VARIABLE_Subst_31);
                        }
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv1_STATE_VARIABLE_Subst_31;
                        mercury__term__succeeded = MR_TRUE;
                      }
                  }
              }
          }
        else
          {
            MR_Word mercury__term__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 0)));
            MR_Word mercury__term__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermX_5, (MR_Integer) 1)));

            if (((MR_tag((MR_Word) mercury__term__TermY_6)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word mercury__term__ArgTermsY_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 1)));
                MR_Word mercury__term__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 0)));
                MR_Word mercury__term__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__term__TermY_6, (MR_Integer) 2)));
                MR_Word mercury__term__TermBoundToX_42;
                MR_Word mercury__term__TypeCtorInfo_75_75 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mercury__term__TypeInfo_76_76;
                MR_Word mercury__term__TypeCtorInfo_77_77 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                MR_Word mercury__term__TypeInfo_78_78;
                MR_Box mercury__term__conv2_TermBoundToX_42;

                {
                  mercury__term__TypeInfo_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_75_75));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_76_76, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                }
                {
                  mercury__term__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_77_77));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_78_78, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                }
                {
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_76_76, mercury__term__TypeInfo_78_78, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv2_TermBoundToX_42);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__TermBoundToX_42 = ((MR_Word) mercury__term__conv2_TermBoundToX_42);
                    mercury__term__succeeded = MR_TRUE;
                  }
                if (mercury__term__succeeded)
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_42;

                      mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word mercury__term__TypeCtorInfo_79_79;
                    MR_Word mercury__term__TypeInfo_80_80;
                    MR_Word mercury__term__TypeCtorInfo_81_81;
                    MR_Word mercury__term__TypeInfo_82_82;
                    MR_Word mercury__term__conv3_STATE_VARIABLE_Subst_31;

                    {
                      mercury__term__succeeded = mercury__term__occurs_list_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__ArgTermsY_20, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                    }
                    mercury__term__succeeded = !(mercury__term__succeeded);
                    if (mercury__term__succeeded)
                      {
                        mercury__term__TypeCtorInfo_79_79 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                        mercury__term__TypeCtorInfo_81_81 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                        {
                          mercury__term__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_79_79));
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_80_80, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                        }
                        {
                          mercury__term__TypeInfo_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_81_81));
                          MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_82_82, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                        }
                        {
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_80_80, mercury__term__TypeInfo_82_82, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv3_STATE_VARIABLE_Subst_31);
                        }
                        *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv3_STATE_VARIABLE_Subst_31;
                        mercury__term__succeeded = MR_TRUE;
                      }
                  }
              }
            else
              {
                MR_Word mercury__term__Y_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 0)));
                MR_Word mercury__term__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__TermY_6, (MR_Integer) 1)));
                MR_Word mercury__term__TypeInfo_52_52;
                MR_Word mercury__term__TypeInfo_54_54;
                MR_Word mercury__term__TermBoundToX_12;
                MR_Word mercury__term__TypeCtorInfo_51_51 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                MR_Word mercury__term__TypeCtorInfo_53_53 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                MR_Box mercury__term__conv4_TermBoundToX_12;

                {
                  mercury__term__TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_51_51));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_52_52, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                }
                {
                  mercury__term__TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_53_53));
                  MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_54_54, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                }
                {
                  mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__V_97_97, &mercury__term__conv4_TermBoundToX_12);
                }
                if (mercury__term__succeeded)
                  {
                    mercury__term__TermBoundToX_12 = ((MR_Word) mercury__term__conv4_TermBoundToX_12);
                    mercury__term__succeeded = MR_TRUE;
                  }
                if (mercury__term__succeeded)
                  {
                    MR_Word mercury__term__TermBoundToY_13;
                    MR_Box mercury__term__conv5_TermBoundToY_13;

                    {
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv5_TermBoundToY_13);
                    }
                    if (mercury__term__succeeded)
                      {
                        mercury__term__TermBoundToY_13 = ((MR_Word) mercury__term__conv5_TermBoundToY_13);
                        mercury__term__succeeded = MR_TRUE;
                      }
                    if (mercury__term__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__term__TermX__tmp_copy_5 = mercury__term__TermBoundToX_12;
                          MR_Word mercury__term__TermY__tmp_copy_6 = mercury__term__TermBoundToY_13;

                          mercury__term__TermY_6 = mercury__term__TermY__tmp_copy_6;
                          mercury__term__TermX_5 = mercury__term__TermX__tmp_copy_5;
                        }
                        continue;
                      }
                    else
                      {
                        MR_Word mercury__term__SubstTermBoundToX_14;
                        MR_Word mercury__term__V_91_91;
                        MR_Word mercury__term__V_15_15;

                        {
                          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__TermBoundToX_12, &mercury__term__SubstTermBoundToX_14);
                        }
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToX_14)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__term__succeeded)
                          {
                            mercury__term__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 0)));
                            mercury__term__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToX_14, (MR_Integer) 1)));
                            {
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__Y_10, mercury__term__V_91_91);
                            }
                          }
                        if (mercury__term__succeeded)
                          {
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
                            mercury__term__succeeded = MR_TRUE;
                          }
                        else
                          {
                            MR_Word mercury__term__conv6_STATE_VARIABLE_Subst_31;

                            {
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToX_14, mercury__term__Y_10, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
                            mercury__term__succeeded = !(mercury__term__succeeded);
                            if (mercury__term__succeeded)
                              {
                                {
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_52_52, mercury__term__TypeInfo_54_54, mercury__term__Y_10, ((MR_Box) (mercury__term__SubstTermBoundToX_14)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv6_STATE_VARIABLE_Subst_31);
                                }
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv6_STATE_VARIABLE_Subst_31;
                                mercury__term__succeeded = MR_TRUE;
                              }
                          }
                      }
                  }
                else
                  {
                    MR_Word mercury__term__TypeInfo_64_64;
                    MR_Word mercury__term__TypeInfo_66_66;
                    MR_Word mercury__term__TermBoundToY_41;
                    MR_Word mercury__term__TypeCtorInfo_63_63 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                    MR_Word mercury__term__TypeCtorInfo_65_65 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                    MR_Box mercury__term__conv7_TermBoundToY_41;

                    {
                      mercury__term__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_63_63));
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_64_64, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                    }
                    {
                      mercury__term__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_65_65));
                      MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_66_66, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                    }
                    {
                      mercury__term__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__Y_10, &mercury__term__conv7_TermBoundToY_41);
                    }
                    if (mercury__term__succeeded)
                      {
                        mercury__term__TermBoundToY_41 = ((MR_Word) mercury__term__conv7_TermBoundToY_41);
                        mercury__term__succeeded = MR_TRUE;
                      }
                    if (mercury__term__succeeded)
                      {
                        MR_Word mercury__term__SubstTermBoundToY_16;
                        MR_Word mercury__term__V_92_92;
                        MR_Word mercury__term__V_17_17;

                        {
                          mercury__term__apply_rec_substitution_in_term_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__STATE_VARIABLE_Subst_0_30, mercury__term__TermBoundToY_41, &mercury__term__SubstTermBoundToY_16);
                        }
                        mercury__term__succeeded = ((MR_tag((MR_Word) mercury__term__SubstTermBoundToY_16)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__term__succeeded)
                          {
                            mercury__term__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 0)));
                            mercury__term__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__term__SubstTermBoundToY_16, (MR_Integer) 1)));
                            {
                              mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__V_92_92);
                            }
                          }
                        if (mercury__term__succeeded)
                          {
                            *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
                            mercury__term__succeeded = MR_TRUE;
                          }
                        else
                          {
                            MR_Word mercury__term__conv8_STATE_VARIABLE_Subst_31;

                            {
                              mercury__term__succeeded = mercury__term__occurs_3_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__SubstTermBoundToY_16, mercury__term__V_97_97, mercury__term__STATE_VARIABLE_Subst_0_30);
                            }
                            mercury__term__succeeded = !(mercury__term__succeeded);
                            if (mercury__term__succeeded)
                              {
                                {
                                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_64_64, mercury__term__TypeInfo_66_66, mercury__term__V_97_97, ((MR_Box) (mercury__term__SubstTermBoundToY_16)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv8_STATE_VARIABLE_Subst_31);
                                }
                                *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv8_STATE_VARIABLE_Subst_31;
                                mercury__term__succeeded = MR_TRUE;
                              }
                          }
                      }
                    else
                      {
                        {
                          mercury__term__succeeded = mercury__term____Unify____var_1_0(mercury__term__TypeInfo_for_T_50, mercury__term__V_97_97, mercury__term__Y_10);
                        }
                        if (mercury__term__succeeded)
                          *mercury__term__STATE_VARIABLE_Subst_31 = mercury__term__STATE_VARIABLE_Subst_0_30;
                        else
                          {
                            MR_Word mercury__term__TypeCtorInfo_71_71 = (MR_Word) &mercury__term__term__type_ctor_info_var_1;
                            MR_Word mercury__term__TypeInfo_72_72;
                            MR_Word mercury__term__TypeCtorInfo_73_73;
                            MR_Word mercury__term__TypeInfo_74_74;
                            MR_Word mercury__term__conv9_STATE_VARIABLE_Subst_31;

                            {
                              mercury__term__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_71_71));
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_72_72, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                            }
                            mercury__term__TypeCtorInfo_73_73 = (MR_Word) &mercury__term__term__type_ctor_info_term_1;
                            {
                              mercury__term__TypeInfo_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 0) = ((MR_Box) (mercury__term__TypeCtorInfo_73_73));
                              MR_hl_field(MR_mktag(0), mercury__term__TypeInfo_74_74, 1) = ((MR_Box) (mercury__term__TypeInfo_for_T_50));
                            }
                            {
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_p_0(mercury__term__TypeInfo_for_T_50, mercury__term__TypeInfo_72_72, mercury__term__TypeInfo_74_74, mercury__term__V_97_97, ((MR_Box) (mercury__term__TermY_6)), (MR_Word) mercury__term__STATE_VARIABLE_Subst_0_30, &mercury__term__conv9_STATE_VARIABLE_Subst_31);
                            }
                            *mercury__term__STATE_VARIABLE_Subst_31 = (MR_Word) mercury__term__conv9_STATE_VARIABLE_Subst_31;
                          }
                        mercury__term__succeeded = MR_TRUE;
                      }
                  }
              }
          }
        return mercury__term__succeeded;
      }
      break;
    }
}

MR_Integer MR_CALL 
mercury__term__var_id_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_4,
  MR_Word mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;

    return mercury__term__VarNum_3;
  }
}

void MR_CALL 
mercury__term__var_to_int_2_p_0(
  MR_Word mercury__term__TypeInfo_for_T_4,
  MR_Word mercury__term__HeadVar__1_1,
  MR_Integer * mercury__term__VarNum_3)
{
  {
    MR_bool mercury__term__succeeded;

    *mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;
  }
}

MR_Integer MR_CALL 
mercury__term__var_to_int_1_f_0(
  MR_Word mercury__term__TypeInfo_for_T_4,
  MR_Word mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__VarNum_3 = (MR_Integer) mercury__term__HeadVar__1_1;

    return mercury__term__VarNum_3;
  }
}

void MR_CALL 
mercury__term__create_var_3_p_0(
  MR_Word mercury__term__TypeInfo_for_T_7,
  MR_Word * mercury__term__HeadVar__1_1,
  MR_Word mercury__term__HeadVar__2_2,
  MR_Word * mercury__term__HeadVar__3_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__V_4;
    MR_Integer mercury__term__V0_5 = (MR_Integer) mercury__term__HeadVar__2_2;

    mercury__term__V_4 = (mercury__term__V0_5 + (MR_Integer) 1);
    *mercury__term__HeadVar__1_1 = (MR_Word) mercury__term__V_4;
    *mercury__term__HeadVar__3_3 = (MR_Word) mercury__term__V_4;
  }
}

MR_bool MR_CALL 
mercury__term__init_var_supply_1_p_1(
  MR_Word mercury__term__TypeInfo_for_T_3,
  MR_Word mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Integer mercury__term__V_2_2 = (MR_Integer) mercury__term__HeadVar__1_1;

    mercury__term__succeeded = (mercury__term__V_2_2 == (MR_Integer) 0);
    return mercury__term__succeeded;
  }
}

void MR_CALL 
mercury__term__init_var_supply_1_p_0(
  MR_Word mercury__term__TypeInfo_for_T_3,
  MR_Word * mercury__term__HeadVar__1_1)
{
  {
    MR_bool mercury__term__succeeded;

    *mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mercury__term__init_var_supply_0_f_0(
  MR_Word mercury__term__TypeInfo_for_T_3)
{
  {
    MR_bool mercury__term__succeeded;
    MR_Word mercury__term__HeadVar__1_1 = (MR_Word) ((MR_Box) ((MR_Integer) 0));

    return mercury__term__HeadVar__1_1;
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
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_renaming_1);
	MR_register_type_ctor_info(&mercury__term__term__type_ctor_info_renaming_0);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module term. */
