/*
** Automatically generated from `string.to_string.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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


/* :- module string.to_string. */
/* :- implementation. */

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




static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
  MR_Box mercury__string__to_string__wrapper_arg_1,
  MR_Box mercury__string__to_string__wrapper_arg_2);

static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
  MR_Box * mercury__string__to_string__wrapper_arg_1,
  MR_Box mercury__string__to_string__wrapper_arg_2,
  MR_Box mercury__string__to_string__wrapper_arg_3);

static MR_Word MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T1_1_16,
  MR_Box mercury__string__to_string__V_7_7,
  MR_Word mercury__string__to_string__V_8_8,
  MR_Integer mercury__string__to_string__V_9_9);

static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void);

static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T1_6,
  MR_Word mercury__string__to_string__TypeInfo_for_T2_7,
  MR_Box mercury__string__to_string__X_3,
  MR_Box * mercury__string__to_string__Y_4);

static void MR_CALL 
mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(
  MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_4,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_8,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_9);

static void MR_CALL 
mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(
  MR_Word mercury__string__to_string__TypeCtorDesc_4,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_12,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_13);

static void MR_CALL 
mercury__string__to_string__type_desc_to_revstrings_3_p_0(
  MR_Word mercury__string__to_string__TypeDesc_4,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_6,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_7);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_ArrayPtr mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_ArrayPtr mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_ArrayPtr mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_ArrayPtr mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__NonCanon_1,
  MR_Word mercury__string__to_string__HeadVar__3_3,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__NonCanon_1,
  MR_Word mercury__string__to_string__HeadVar__3_3,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__NonCanon_1,
  MR_Word mercury__string__to_string__HeadVar__3_3,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__NonCanon_1,
  MR_Word mercury__string__to_string__HeadVar__3_3,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__Univ_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__Univ_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__Univ_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__Univ_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16);

static void MR_CALL 
mercury__string__to_string__adjust_priority_3_p_0(
  MR_Integer mercury__string__to_string__Priority_1,
  MR_Word mercury__string__to_string__HeadVar__2_2,
  MR_Integer * mercury__string__to_string__HeadVar__3_3);

static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
  MR_String mercury__string__to_string__String_6,
  MR_Integer mercury__string__to_string__Priority_7,
  MR_Integer mercury__string__to_string__OpPriority_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_10,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_11);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
  MR_Word mercury__string__to_string__NonCanon_8,
  MR_Integer mercury__string__to_string__Priority_10,
  MR_String mercury__string__to_string__Functor_11,
  MR_Word mercury__string__to_string__Args_12,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
  MR_Word mercury__string__to_string__NonCanon_8,
  MR_Integer mercury__string__to_string__Priority_10,
  MR_String mercury__string__to_string__Functor_11,
  MR_Word mercury__string__to_string__Args_12,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
  MR_Word mercury__string__to_string__NonCanon_8,
  MR_Integer mercury__string__to_string__Priority_10,
  MR_String mercury__string__to_string__Functor_11,
  MR_Word mercury__string__to_string__Args_12,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
  MR_Word mercury__string__to_string__NonCanon_8,
  MR_Integer mercury__string__to_string__Priority_10,
  MR_String mercury__string__to_string__Functor_11,
  MR_Word mercury__string__to_string__Args_12,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37);

static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
  MR_String mercury__string__to_string__String_4,
  MR_Word mercury__string__to_string__RevStrings_5,
  MR_Word * mercury__string__to_string__HeadVar__3_3);


static /* final */ const MR_Box mercury__string__to_string_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__string__to_string_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string__to_string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string__to_string_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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



static const MR_FA_TypeInfo_Struct1 mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct mercury__string__to_string__string__to_string__type_ctor_info_revstrings_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__string__to_string____Unify____revstrings_0_0_10001)),
  ((MR_Box) (mercury__string__to_string____Compare____revstrings_0_0_10001)),
  (MR_String) "string.to_string",
  (MR_String) "revstrings",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__string__to_string__list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0_10001(
  MR_Box mercury__string__to_string__wrapper_arg_1,
  MR_Box mercury__string__to_string__wrapper_arg_2)
{
  {
    MR_bool mercury__string__to_string__succeeded;

    {
      mercury__string__to_string__succeeded = mercury__string__to_string____Unify____revstrings_0_0(((MR_Word) mercury__string__to_string__wrapper_arg_1), ((MR_Word) mercury__string__to_string__wrapper_arg_2));
    }
    return mercury__string__to_string__succeeded;
  }
}

static void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0_10001(
  MR_Box * mercury__string__to_string__wrapper_arg_1,
  MR_Box mercury__string__to_string__wrapper_arg_2,
  MR_Box mercury__string__to_string__wrapper_arg_3)
{
  {
    MR_Word mercury__string__to_string__conv0_HeadVar__1_1;

    {
      mercury__string__to_string____Compare____revstrings_0_0(&mercury__string__to_string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__to_string__wrapper_arg_2), ((MR_Word) mercury__string__to_string__wrapper_arg_3));
    }
    *mercury__string__to_string__wrapper_arg_1 = ((MR_Box) (mercury__string__to_string__conv0_HeadVar__1_1));
  }
}

static MR_Word MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T1_1_16,
  MR_Box mercury__string__to_string__V_7_7,
  MR_Word mercury__string__to_string__V_8_8,
  MR_Integer mercury__string__to_string__V_9_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__to_string__succeeded = ((MR_Integer) 0 <= mercury__string__to_string__V_9_9);
        MR_Word mercury__string__to_string__V_5_10;

        if (mercury__string__to_string__succeeded)
          {
            MR_Word mercury__string__to_string__V_11_12;
            MR_Integer mercury__string__to_string__V_13_13;
            MR_Box mercury__string__to_string__V_12_14;

            {
              mercury__string__to_string__V_12_14 = mercury__version_array__lookup_2_f_0(mercury__string__to_string__TypeInfo_for_T1_1_16, mercury__string__to_string__V_7_7, mercury__string__to_string__V_9_9);
            }
            {
              mercury__string__to_string__V_11_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__V_11_12, 0) = mercury__string__to_string__V_12_14;
              MR_hl_field(MR_mktag(1), mercury__string__to_string__V_11_12, 1) = ((MR_Box) (mercury__string__to_string__V_8_8));
            }
            mercury__string__to_string__V_13_13 = (mercury__string__to_string__V_9_9 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__to_string__V_8__tmp_copy_8 = mercury__string__to_string__V_11_12;
              MR_Integer mercury__string__to_string__V_9__tmp_copy_9 = mercury__string__to_string__V_13_13;

              mercury__string__to_string__V_9_9 = mercury__string__to_string__V_9__tmp_copy_9;
              mercury__string__to_string__V_8_8 = mercury__string__to_string__V_8__tmp_copy_8;
            }
            continue;
          }
        else
          mercury__string__to_string__V_5_10 = mercury__string__to_string__V_8_8;
        return mercury__string__to_string__V_5_10;
      }
      break;
    }
}

static MR_Integer MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__string__to_string__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_112_114_105_118_97_116_101_95_98_117_105_108_116_105_110_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
    MR_bool mercury__string__to_string__succeeded;

  }
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_118_101_114_115_105_111_110_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
    MR_bool mercury__string__to_string__succeeded;

  }
}

static void MR_CALL 
mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_97_109_101_95_97_114_114_97_121_95_101_108_101_109_95_116_121_112_101_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(void)
{
  {
    MR_bool mercury__string__to_string__succeeded;

  }
}

void MR_CALL 
mercury__string__to_string____Compare____revstrings_0_0(
  MR_Word * mercury__string__to_string__HeadVar__1_1,
  MR_Word mercury__string__to_string__HeadVar__2_2,
  MR_Word mercury__string__to_string__HeadVar__3_3)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeInfo_6_6 = (MR_Word) &mercury__string__to_string_scalar_common_1[1];
    MR_Word mercury__string__to_string__Cast_HeadVar1_4 = mercury__string__to_string__HeadVar__2_2;
    MR_Word mercury__string__to_string__Cast_HeadVar2_5 = mercury__string__to_string__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0(mercury__string__to_string__TypeInfo_6_6, mercury__string__to_string__HeadVar__1_1, ((MR_Box) (mercury__string__to_string__Cast_HeadVar1_4)), ((MR_Box) (mercury__string__to_string__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mercury__string__to_string____Unify____revstrings_0_0(
  MR_Word mercury__string__to_string__HeadVar__1_1,
  MR_Word mercury__string__to_string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeInfo_5_5 = (MR_Word) &mercury__string__to_string_scalar_common_1[1];
    MR_Word mercury__string__to_string__Cast_HeadVar1_3 = mercury__string__to_string__HeadVar__1_1;
    MR_Word mercury__string__to_string__Cast_HeadVar2_4 = mercury__string__to_string__HeadVar__2_2;

    {
      mercury__string__to_string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__to_string__TypeInfo_5_5, ((MR_Box) (mercury__string__to_string__Cast_HeadVar1_3)), ((MR_Box) (mercury__string__to_string__Cast_HeadVar2_4)));
    }
    return mercury__string__to_string__succeeded;
  }
}

static void MR_CALL 
mercury__string__to_string__det_dynamic_cast_2_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T1_6,
  MR_Word mercury__string__to_string__TypeInfo_for_T2_7,
  MR_Box mercury__string__to_string__X_3,
  MR_Box * mercury__string__to_string__Y_4)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__V_5_5;

    {
      mercury__univ__type_to_univ_2_p_1(mercury__string__to_string__TypeInfo_for_T1_6, mercury__string__to_string__X_3, &mercury__string__to_string__V_5_5);
    }
    {
      mercury__univ__det_univ_to_type_2_p_0(mercury__string__to_string__TypeInfo_for_T2_7, mercury__string__to_string__V_5_5, mercury__string__to_string__Y_4);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(
  MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_4,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_8,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_9)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeInfo_6 = (MR_Word) mercury__string__to_string__PrivateBuiltinTypeInfo_4;
    MR_Word mercury__string__to_string__TypeDesc_7;
    MR_String mercury__string__to_string__V_15_15;
    MR_String mercury__string__to_string__V_17_17;

    {
      mercury__type_desc__type_info_to_type_desc_2_p_0(mercury__string__to_string__TypeInfo_6, &mercury__string__to_string__TypeDesc_7);
    }
    {
      mercury__string__to_string__V_17_17 = mercury__type_desc__type_name_1_f_0(mercury__string__to_string__TypeDesc_7);
    }
    {
      mercury__string__to_string__V_15_15 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__V_17_17, (MR_Integer) 1);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_15_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_8));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(
  MR_Word mercury__string__to_string__TypeCtorDesc_4,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_12,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_13)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__ModuleName_6;
    MR_String mercury__string__to_string__Name0_7;
    MR_Integer mercury__string__to_string__Arity0_8;
    MR_String mercury__string__to_string__Name_9;
    MR_Integer mercury__string__to_string__Arity_10;
    MR_String mercury__string__to_string__String_11;

{
#define MR_PROC_LABEL mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0

	MR_Word TypeCtorDesc;
	MR_String TypeCtorModuleName;
	MR_String TypeCtorName;
	MR_Integer TypeCtorArity;

	TypeCtorDesc =  mercury__string__to_string__TypeCtorDesc_4 ;
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

        /*
        ** We cast away the const-ness of the module and type names,
        ** because MR_String is defined as char *, not const char *.
        */

        TypeCtorModuleName = (MR_String) (MR_Integer)
            MR_type_ctor_module_name(type_ctor_info);
        TypeCtorName = (MR_String) (MR_Integer)
            MR_type_ctor_name(type_ctor_info);
        TypeCtorArity = type_ctor_info->MR_type_ctor_arity;
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__ModuleName_6  = TypeCtorModuleName;
	 mercury__string__to_string__Name0_7  = TypeCtorName;
	 mercury__string__to_string__Arity0_8  = TypeCtorArity;
}
    {
      mercury__string__to_string__Name_9 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Name0_7, (MR_Integer) 1);
    }
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__ModuleName_6, (MR_String) "builtin") == 0);
    if (mercury__string__to_string__succeeded)
      mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Name_9, (MR_String) "func") == 0);
    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__Arity_10 = (mercury__string__to_string__Arity0_8 - (MR_Integer) 1);
      }
    else
      mercury__string__to_string__Arity_10 = mercury__string__to_string__Arity0_8;
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__ModuleName_6, (MR_String) "builtin") == 0);
    if (mercury__string__to_string__succeeded)
      {
        MR_String mercury__string__to_string__V_30_30;
        MR_Word mercury__string__to_string__V_36_36 = (MR_Word) &mercury__string__to_string_scalar_common_5[0];
        MR_String mercury__string__to_string__V_38_38;
        MR_Word mercury__string__to_string__V_7_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__string__to_string__V_8_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__string__format__format_signed_int_component_5_p_0(mercury__string__to_string__V_36_36, mercury__string__to_string__V_7_57, mercury__string__to_string__V_8_58, mercury__string__to_string__Arity_10, &mercury__string__to_string__V_30_30);
        }
        {
          mercury__string__append_3_p_2((MR_String) "/", mercury__string__to_string__V_30_30, &mercury__string__to_string__V_38_38);
        }
        {
          mercury__string__append_3_p_2(mercury__string__to_string__Name_9, mercury__string__to_string__V_38_38, &mercury__string__to_string__String_11);
        }
      }
    else
      {
        MR_String mercury__string__to_string__V_39_39;
        MR_Word mercury__string__to_string__V_45_45 = (MR_Word) &mercury__string__to_string_scalar_common_5[0];
        MR_String mercury__string__to_string__V_47_47;
        MR_String mercury__string__to_string__V_48_48;
        MR_String mercury__string__to_string__V_50_50;
        MR_Word mercury__string__to_string__V_7_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__string__to_string__V_8_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__string__format__format_signed_int_component_5_p_0(mercury__string__to_string__V_45_45, mercury__string__to_string__V_7_74, mercury__string__to_string__V_8_75, mercury__string__to_string__Arity_10, &mercury__string__to_string__V_39_39);
        }
        {
          mercury__string__append_3_p_2((MR_String) "/", mercury__string__to_string__V_39_39, &mercury__string__to_string__V_47_47);
        }
        {
          mercury__string__append_3_p_2(mercury__string__to_string__Name_9, mercury__string__to_string__V_47_47, &mercury__string__to_string__V_48_48);
        }
        {
          mercury__string__append_3_p_2((MR_String) ".", mercury__string__to_string__V_48_48, &mercury__string__to_string__V_50_50);
        }
        {
          mercury__string__to_string__String_11 = mercury__string__f_43_43_2_f_0(mercury__string__to_string__ModuleName_6, mercury__string__to_string__V_50_50);
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__String_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_12));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__type_desc_to_revstrings_3_p_0(
  MR_Word mercury__string__to_string__TypeDesc_4,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_6,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_7)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__V_8_8;
    MR_String mercury__string__to_string__V_10_10;

    {
      mercury__string__to_string__V_10_10 = mercury__type_desc__type_name_1_f_0(mercury__string__to_string__TypeDesc_4);
    }
    {
      mercury__string__to_string__V_8_8 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__V_10_10, (MR_Integer) 1);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_8_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_6));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
    MR_Word mercury__string__to_string__TypeInfo_21_21;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
    MR_Word mercury__string__to_string__V_15_15;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
    MR_Word mercury__string__to_string__V_5_29;
    MR_Integer mercury__string__to_string__V_8_40;
    MR_Integer mercury__string__to_string__V_4_44;
    MR_Integer mercury__string__to_string__Priority_52;
    MR_Integer mercury__string__to_string__V_53_53;
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv1_V_53_53;

    {
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
    }
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_3

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
}
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
    {
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
    }
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
    MR_Word mercury__string__to_string__TypeInfo_21_21;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
    MR_Word mercury__string__to_string__V_15_15;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
    MR_Word mercury__string__to_string__V_5_29;
    MR_Integer mercury__string__to_string__V_8_40;
    MR_Integer mercury__string__to_string__V_4_44;
    MR_Integer mercury__string__to_string__Priority_52;
    MR_Integer mercury__string__to_string__V_53_53;
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv1_V_53_53;

    {
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
    }
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_2

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
}
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
    {
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
    }
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
    MR_Word mercury__string__to_string__TypeInfo_21_21;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
    MR_Word mercury__string__to_string__V_15_15;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
    MR_Word mercury__string__to_string__V_5_29;
    MR_Integer mercury__string__to_string__V_8_40;
    MR_Integer mercury__string__to_string__V_4_44;
    MR_Integer mercury__string__to_string__Priority_52;
    MR_Integer mercury__string__to_string__V_53_53;
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv1_V_53_53;

    {
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
    }
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_1

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
}
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
    {
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
    }
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__version_array_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
    MR_Word mercury__string__to_string__TypeInfo_21_21;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_56;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
    MR_Word mercury__string__to_string__V_15_15;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
    MR_Word mercury__string__to_string__V_5_29;
    MR_Integer mercury__string__to_string__V_8_40;
    MR_Integer mercury__string__to_string__V_4_44;
    MR_Integer mercury__string__to_string__Priority_52;
    MR_Integer mercury__string__to_string__V_53_53;
    MR_Word mercury__string__to_string__TypeInfo_for_T_59;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv1_V_53_53;

    {
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "version_array("));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
    }
    mercury__string__to_string__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__string__to_string__version_array_to_revstrings_5_p_0

	struct ML_va * VA;
	MR_Integer N;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, mercury__string__to_string__Array_8 , VA);
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_4_44  = N;
}
    mercury__string__to_string__V_8_40 = (mercury__string__to_string__V_4_44 - (MR_Integer) 1);
    {
      mercury__string__to_string__V_15_15 = mercury__string__to_string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_f_in__version_array_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_29, mercury__string__to_string__V_8_40);
    }
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
    }
    mercury__string__to_string__TypeClassInfo_for_op_table_56 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_56, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__string__to_string__conv1_V_53_53 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_56), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_53_53 = ((MR_Integer) mercury__string__to_string__conv1_V_53_53);
    mercury__string__to_string__Priority_52 = (mercury__string__to_string__V_53_53 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_52, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_ArrayPtr mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
    MR_Word mercury__string__to_string__TypeInfo_21_21;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
    MR_Word mercury__string__to_string__V_15_15;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
    MR_Integer mercury__string__to_string__V_5_28;
    MR_Integer mercury__string__to_string__V_6_29;
    MR_Integer mercury__string__to_string__Priority_39;
    MR_Integer mercury__string__to_string__V_40_40;
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv1_V_40_40;

    {
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
    }
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_5_28  = Min;
}
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_3

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_6_29  = Max;
}
    {
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_28, mercury__string__to_string__V_6_29, &mercury__string__to_string__V_15_15);
    }
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
    }
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_ArrayPtr mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
    MR_Word mercury__string__to_string__TypeInfo_21_21;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
    MR_Word mercury__string__to_string__V_15_15;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
    MR_Integer mercury__string__to_string__V_5_28;
    MR_Integer mercury__string__to_string__V_6_29;
    MR_Integer mercury__string__to_string__Priority_39;
    MR_Integer mercury__string__to_string__V_40_40;
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv1_V_40_40;

    {
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
    }
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_5_28  = Min;
}
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_2

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_6_29  = Max;
}
    {
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_28, mercury__string__to_string__V_6_29, &mercury__string__to_string__V_15_15);
    }
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
    }
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_ArrayPtr mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
    MR_Word mercury__string__to_string__TypeInfo_21_21;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
    MR_Word mercury__string__to_string__V_15_15;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
    MR_Integer mercury__string__to_string__V_5_28;
    MR_Integer mercury__string__to_string__V_6_29;
    MR_Integer mercury__string__to_string__Priority_39;
    MR_Integer mercury__string__to_string__V_40_40;
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv1_V_40_40;

    {
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
    }
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_5_28  = Min;
}
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_1

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_6_29  = Max;
}
    {
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_28, mercury__string__to_string__V_6_29, &mercury__string__to_string__V_15_15);
    }
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
    }
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__array_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_19,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_ArrayPtr mercury__string__to_string__Array_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_20_20;
    MR_Word mercury__string__to_string__TypeInfo_21_21;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_43;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_14_14;
    MR_Word mercury__string__to_string__V_15_15;
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_16_16;
    MR_Integer mercury__string__to_string__V_5_28;
    MR_Integer mercury__string__to_string__V_6_29;
    MR_Integer mercury__string__to_string__Priority_39;
    MR_Integer mercury__string__to_string__V_40_40;
    MR_Word mercury__string__to_string__TypeInfo_for_T_46;
    MR_Word mercury__string__to_string__TypeInfo_for_T_47;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv1_V_40_40;

    {
      mercury__string__to_string__STATE_VARIABLE_Rs_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 0) = ((MR_Box) ((MR_String) "array("));
      MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_11));
    }
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Min;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{

    /* Array not used */
    Min = 0;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_5_28  = Min;
}
{
#define MR_PROC_LABEL mercury__string__to_string__array_to_revstrings_5_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__string__to_string__Array_8 , Array);
		{

    Max = Array->size - 1;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_6_29  = Max;
}
    {
      mercury__array__fetch_items_4_p_0(mercury__string__to_string__TypeInfo_for_T_19, mercury__string__to_string__Array_8, mercury__string__to_string__V_5_28, mercury__string__to_string__V_6_29, &mercury__string__to_string__V_15_15);
    }
    mercury__string__to_string__TypeCtorInfo_20_20 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__string__to_string__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_21_21, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_for_T_19));
    }
    mercury__string__to_string__TypeClassInfo_for_op_table_43 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_43, (MR_Integer) 0)), (MR_Integer) 12)));
    {
      mercury__string__to_string__conv1_V_40_40 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_43), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_40_40 = ((MR_Integer) mercury__string__to_string__conv1_V_40_40);
    mercury__string__to_string__Priority_39 = (mercury__string__to_string__V_40_40 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_21_21, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_39, ((MR_Box) (mercury__string__to_string__V_15_15)), mercury__string__to_string__STATE_VARIABLE_Rs_14_14, &mercury__string__to_string__STATE_VARIABLE_Rs_16_16);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__STATE_VARIABLE_Rs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_16_16));
    }
  }
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__arg_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 0)));
    MR_Box mercury__string__to_string__V_13_13 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__X_8, (MR_Integer) 1));

    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_15_15, mercury__string__to_string__NonCanon_6, (MR_Integer) 1000, mercury__string__to_string__V_13_13, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__NonCanon_1,
  MR_Word mercury__string__to_string__HeadVar__3_3,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__to_string__succeeded;

        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
        else
          {
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

            {
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
            }
            {
              mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__NonCanon_1,
  MR_Word mercury__string__to_string__HeadVar__3_3,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__to_string__succeeded;

        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
        else
          {
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

            {
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
            }
            {
              mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__NonCanon_1,
  MR_Word mercury__string__to_string__HeadVar__3_3,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__to_string__succeeded;

        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
        else
          {
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

            {
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
            }
            {
              mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__string__to_string__term_args_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__NonCanon_1,
  MR_Word mercury__string__to_string__HeadVar__3_3,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_4,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__to_string__succeeded;

        if ((mercury__string__to_string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__string__to_string__STATE_VARIABLE_Rs_5 = mercury__string__to_string__STATE_VARIABLE_Rs_0_4;
        else
          {
            MR_Word mercury__string__to_string__X_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word mercury__string__to_string__Xs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__HeadVar__3_3, (MR_Integer) 1)));
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_19_19;
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

            {
              mercury__string__to_string__STATE_VARIABLE_Rs_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_19_19, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_4));
            }
            {
              mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_1, mercury__string__to_string__X_13, mercury__string__to_string__STATE_VARIABLE_Rs_19_19, &mercury__string__to_string__STATE_VARIABLE_Rs_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__to_string__HeadVar__3__tmp_copy_3 = mercury__string__to_string__Xs_14;
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4 = mercury__string__to_string__STATE_VARIABLE_Rs_20_20;

              mercury__string__to_string__STATE_VARIABLE_Rs_0_4 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_4;
              mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__HeadVar__3__tmp_copy_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__Univ_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__to_string__succeeded;
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
        MR_String mercury__string__to_string__Functor_10;
        MR_Word mercury__string__to_string__Args_12;
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
        MR_Integer mercury__string__to_string___Arity_11;
        MR_Word mercury__string__to_string__ListHead_13;
        MR_Word mercury__string__to_string__ListTail_14;
        MR_Word mercury__string__to_string__V_18_18;
        MR_Word mercury__string__to_string__V_19_19;

        {
          mercury__deconstruct__deconstruct_5_p_3(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
        if (mercury__string__to_string__succeeded)
          {
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

            {
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
            }
            {
              mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
            }
            continue;
          }
        else
          {
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
            if (mercury__string__to_string__succeeded)
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__string__to_string__succeeded)
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
            else
              {
                MR_Word mercury__string__to_string__TypeInfo_29_29;
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
                MR_Box mercury__string__to_string__V_26_26;
                MR_Integer mercury__string__to_string__Priority_42;
                MR_Integer mercury__string__to_string__V_43_43;
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
                MR_Box mercury__string__to_string__conv1_V_43_43;

                {
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
                }
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
                {
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
                {
                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__Univ_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__to_string__succeeded;
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
        MR_String mercury__string__to_string__Functor_10;
        MR_Word mercury__string__to_string__Args_12;
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
        MR_Integer mercury__string__to_string___Arity_11;
        MR_Word mercury__string__to_string__ListHead_13;
        MR_Word mercury__string__to_string__ListTail_14;
        MR_Word mercury__string__to_string__V_18_18;
        MR_Word mercury__string__to_string__V_19_19;

        {
          mercury__deconstruct__deconstruct_5_p_2(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
        if (mercury__string__to_string__succeeded)
          {
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

            {
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
            }
            {
              mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
            }
            continue;
          }
        else
          {
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
            if (mercury__string__to_string__succeeded)
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__string__to_string__succeeded)
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
            else
              {
                MR_Word mercury__string__to_string__TypeInfo_29_29;
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
                MR_Box mercury__string__to_string__V_26_26;
                MR_Integer mercury__string__to_string__Priority_42;
                MR_Integer mercury__string__to_string__V_43_43;
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
                MR_Box mercury__string__to_string__conv1_V_43_43;

                {
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
                }
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
                {
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
                {
                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__Univ_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__to_string__succeeded;
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
        MR_String mercury__string__to_string__Functor_10;
        MR_Word mercury__string__to_string__Args_12;
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
        MR_Integer mercury__string__to_string___Arity_11;
        MR_Word mercury__string__to_string__ListHead_13;
        MR_Word mercury__string__to_string__ListTail_14;
        MR_Word mercury__string__to_string__V_18_18;
        MR_Word mercury__string__to_string__V_19_19;

        {
          mercury__deconstruct__deconstruct_5_p_1(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
        if (mercury__string__to_string__succeeded)
          {
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

            {
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
            }
            {
              mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
            }
            continue;
          }
        else
          {
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
            if (mercury__string__to_string__succeeded)
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__string__to_string__succeeded)
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
            else
              {
                MR_Word mercury__string__to_string__TypeInfo_29_29;
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
                MR_Box mercury__string__to_string__V_26_26;
                MR_Integer mercury__string__to_string__Priority_42;
                MR_Integer mercury__string__to_string__V_43_43;
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
                MR_Box mercury__string__to_string__conv1_V_43_43;

                {
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
                }
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
                {
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
                {
                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Word mercury__string__to_string__Univ_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_15,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_16)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__string__to_string__succeeded;
        MR_Word mercury__string__to_string__TypeInfo_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
        MR_String mercury__string__to_string__Functor_10;
        MR_Word mercury__string__to_string__Args_12;
        MR_Box mercury__string__to_string__V_17_17 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
        MR_Integer mercury__string__to_string___Arity_11;
        MR_Word mercury__string__to_string__ListHead_13;
        MR_Word mercury__string__to_string__ListTail_14;
        MR_Word mercury__string__to_string__V_18_18;
        MR_Word mercury__string__to_string__V_19_19;

        {
          mercury__deconstruct__deconstruct_5_p_0(mercury__string__to_string__TypeInfo_28_28, mercury__string__to_string__V_17_17, mercury__string__to_string__NonCanon_6, &mercury__string__to_string__Functor_10, &mercury__string__to_string___Arity_11, &mercury__string__to_string__Args_12);
        }
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[|]") == 0);
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_12)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__ListHead_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
                mercury__string__to_string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_18_18)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__ListTail_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 0)));
                    mercury__string__to_string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_18_18, (MR_Integer) 1)));
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
              }
          }
        if (mercury__string__to_string__succeeded)
          {
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_21_21;
            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

            {
              mercury__string__to_string__STATE_VARIABLE_Rs_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 0) = ((MR_Box) ((MR_String) ", "));
              MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_21_21, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
            }
            {
              mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_6, mercury__string__to_string__ListHead_13, mercury__string__to_string__STATE_VARIABLE_Rs_21_21, &mercury__string__to_string__STATE_VARIABLE_Rs_22_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__to_string__Univ__tmp_copy_8 = mercury__string__to_string__ListTail_14;
              MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15 = mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

              mercury__string__to_string__STATE_VARIABLE_Rs_0_15 = mercury__string__to_string__STATE_VARIABLE_Rs_0__tmp_copy_15;
              mercury__string__to_string__Univ_8 = mercury__string__to_string__Univ__tmp_copy_8;
            }
            continue;
          }
        else
          {
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_10, (MR_String) "[]") == 0);
            if (mercury__string__to_string__succeeded)
              mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__string__to_string__succeeded)
              *mercury__string__to_string__STATE_VARIABLE_Rs_16 = mercury__string__to_string__STATE_VARIABLE_Rs_0_15;
            else
              {
                MR_Word mercury__string__to_string__TypeInfo_29_29;
                MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_46;
                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_25_25;
                MR_Box mercury__string__to_string__V_26_26;
                MR_Integer mercury__string__to_string__Priority_42;
                MR_Integer mercury__string__to_string__V_43_43;
                MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box);
                MR_Box mercury__string__to_string__conv1_V_43_43;

                {
                  mercury__string__to_string__STATE_VARIABLE_Rs_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 0) = ((MR_Box) ((MR_String) " | "));
                  MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_25_25, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_15));
                }
                mercury__string__to_string__TypeInfo_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 0)));
                mercury__string__to_string__V_26_26 = (MR_hl_field(MR_mktag(0), mercury__string__to_string__Univ_8, (MR_Integer) 1));
                mercury__string__to_string__TypeClassInfo_for_op_table_46 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
                mercury__string__to_string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_46, (MR_Integer) 0)), (MR_Integer) 12)));
                {
                  mercury__string__to_string__conv1_V_43_43 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_46), ((MR_Box) ((MR_Integer) 0)));
                }
                mercury__string__to_string__V_43_43 = ((MR_Integer) mercury__string__to_string__conv1_V_43_43);
                mercury__string__to_string__Priority_42 = (mercury__string__to_string__V_43_43 + (MR_Integer) 1);
                {
                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_29_29, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_42, mercury__string__to_string__V_26_26, mercury__string__to_string__STATE_VARIABLE_Rs_25_25, mercury__string__to_string__STATE_VARIABLE_Rs_16);
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__string__to_string__adjust_priority_3_p_0(
  MR_Integer mercury__string__to_string__Priority_1,
  MR_Word mercury__string__to_string__HeadVar__2_2,
  MR_Integer * mercury__string__to_string__HeadVar__3_3)
{
  {
    MR_bool mercury__string__to_string__succeeded;

    switch (mercury__string__to_string__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__string__to_string__HeadVar__3_3 = (mercury__string__to_string__Priority_1 - (MR_Integer) 1);
        }
        break;
      case (MR_Integer) 1:
        *mercury__string__to_string__HeadVar__3_3 = mercury__string__to_string__Priority_1;
        break;
    }
  }
}

static void MR_CALL 
mercury__string__to_string__maybe_add_revstring_5_p_0(
  MR_String mercury__string__to_string__String_6,
  MR_Integer mercury__string__to_string__Priority_7,
  MR_Integer mercury__string__to_string__OpPriority_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_10,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_11)
{
  {
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__OpPriority_8 > mercury__string__to_string__Priority_7);

    if (mercury__string__to_string__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__string__to_string__STATE_VARIABLE_Rs_11 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__String_6));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_10));
      }
    else
      *mercury__string__to_string__STATE_VARIABLE_Rs_11 = mercury__string__to_string__STATE_VARIABLE_Rs_0_10;
  }
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_3(
  MR_Word mercury__string__to_string__NonCanon_8,
  MR_Integer mercury__string__to_string__Priority_10,
  MR_String mercury__string__to_string__Functor_11,
  MR_Word mercury__string__to_string__Args_12,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
{
  {
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
    MR_Integer mercury__string__to_string__V_18_18;
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv2_V_18_18;

    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
        {
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
            {
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
          }
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
        MR_String mercury__string__to_string__V_21_21;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

        {
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
        }
        {
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
        }
      }
    else
      {
        MR_String mercury__string__to_string__V_25_25;

        {
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
        }
      }
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
    else
      {
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

        {
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
        }
        {
          mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
        {
          mercury__string__to_string__term_args_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
        }
      }
  }
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_2(
  MR_Word mercury__string__to_string__NonCanon_8,
  MR_Integer mercury__string__to_string__Priority_10,
  MR_String mercury__string__to_string__Functor_11,
  MR_Word mercury__string__to_string__Args_12,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
{
  {
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
    MR_Integer mercury__string__to_string__V_18_18;
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv2_V_18_18;

    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
        {
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
            {
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
          }
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
        MR_String mercury__string__to_string__V_21_21;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

        {
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
        }
        {
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
        }
      }
    else
      {
        MR_String mercury__string__to_string__V_25_25;

        {
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
        }
      }
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
    else
      {
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

        {
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
        }
        {
          mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
        {
          mercury__string__to_string__term_args_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
        }
      }
  }
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_1(
  MR_Word mercury__string__to_string__NonCanon_8,
  MR_Integer mercury__string__to_string__Priority_10,
  MR_String mercury__string__to_string__Functor_11,
  MR_Word mercury__string__to_string__Args_12,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
{
  {
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
    MR_Integer mercury__string__to_string__V_18_18;
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv2_V_18_18;

    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
        {
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
            {
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
          }
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
        MR_String mercury__string__to_string__V_21_21;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

        {
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
        }
        {
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
        }
      }
    else
      {
        MR_String mercury__string__to_string__V_25_25;

        {
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
        }
      }
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
    else
      {
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

        {
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
        }
        {
          mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
        {
          mercury__string__to_string__term_args_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
        }
      }
  }
}

static void MR_CALL 
mercury__string__to_string__plain_term_to_revstrings_7_p_0(
  MR_Word mercury__string__to_string__NonCanon_8,
  MR_Integer mercury__string__to_string__Priority_10,
  MR_String mercury__string__to_string__Functor_11,
  MR_Word mercury__string__to_string__Args_12,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_16,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_17)
{
  {
    MR_bool mercury__string__to_string__succeeded = (mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_34;
    MR_Integer mercury__string__to_string__V_18_18;
    MR_bool MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box, MR_Box);
    MR_Box MR_CALL (* mercury__string__to_string__func_1)(MR_Box, MR_Box);
    MR_Box mercury__string__to_string__conv2_V_18_18;

    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__TypeClassInfo_for_op_table_34 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
        mercury__string__to_string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 9)));
        {
          mercury__string__to_string__succeeded = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (mercury__string__to_string__Functor_11)));
        }
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_34, (MR_Integer) 0)), (MR_Integer) 12)));
            {
              mercury__string__to_string__conv2_V_18_18 = mercury__string__to_string__func_1(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_34), ((MR_Box) ((MR_Integer) 0)));
            }
            mercury__string__to_string__V_18_18 = ((MR_Integer) mercury__string__to_string__conv2_V_18_18);
            mercury__string__to_string__succeeded = (mercury__string__to_string__Priority_10 <= mercury__string__to_string__V_18_18);
          }
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_20_20;
        MR_String mercury__string__to_string__V_21_21;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_22_22;

        {
          mercury__string__to_string__STATE_VARIABLE_Rs_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 0) = ((MR_Box) ((MR_String) "("));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_20_20, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
        }
        {
          mercury__string__to_string__V_21_21 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 1);
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 0) = ((MR_Box) (mercury__string__to_string__V_21_21));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_22_22, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_20_20));
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) ((MR_String) ")"));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_22_22));
        }
      }
    else
      {
        MR_String mercury__string__to_string__V_25_25;

        {
          mercury__string__to_string__V_25_25 = mercury__term_io__quoted_atom_agt_2_f_0(mercury__string__to_string__Functor_11, (MR_Integer) 0);
        }
        {
          mercury__string__to_string__STATE_VARIABLE_Rs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 0) = ((MR_Box) (mercury__string__to_string__V_25_25));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_24_24, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_16));
        }
      }
    if ((mercury__string__to_string__Args_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__string__to_string__STATE_VARIABLE_Rs_17 = mercury__string__to_string__STATE_VARIABLE_Rs_24_24;
    else
      {
        MR_Word mercury__string__to_string__Y_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 0)));
        MR_Word mercury__string__to_string__Ys_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_12, (MR_Integer) 1)));
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_29_29;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_30_30;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_31_31;

        {
          mercury__string__to_string__STATE_VARIABLE_Rs_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 0) = ((MR_Box) ((MR_String) "("));
          MR_hl_field(MR_mktag(1), mercury__string__to_string__STATE_VARIABLE_Rs_29_29, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_24_24));
        }
        {
          mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Y_14, mercury__string__to_string__STATE_VARIABLE_Rs_29_29, &mercury__string__to_string__STATE_VARIABLE_Rs_30_30);
        }
        {
          mercury__string__to_string__term_args_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_8, mercury__string__to_string__Ys_15, mercury__string__to_string__STATE_VARIABLE_Rs_30_30, &mercury__string__to_string__STATE_VARIABLE_Rs_31_31);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__to_string__STATE_VARIABLE_Rs_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) ")"));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_31_31));
        }
      }
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__Functor_12;
    MR_Word mercury__string__to_string__Args_14;
    MR_Integer mercury__string__to_string___Arity_13;
    MR_Word mercury__string__to_string__ListHead_15;
    MR_Word mercury__string__to_string__ListTail_16;
    MR_Word mercury__string__to_string__V_38_38;
    MR_Word mercury__string__to_string__V_39_39;

    {
      mercury__deconstruct__deconstruct_5_p_3(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

        {
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
        {
          mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
        {
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
        {
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
        }
      }
    else
      {
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
        if (mercury__string__to_string__succeeded)
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__string__to_string__succeeded)
          {
            {
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
            }
          }
        else
          {
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
            if (mercury__string__to_string__succeeded)
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                  }
                }
              else
                {
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
                      MR_Box mercury__string__to_string__V_57_57;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
                      {
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
                      {
                        mercury__string__to_string__value_to_revstrings_5_p_3(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                    }
                  else
                    {
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
                      {
                        mercury__string__to_string__arg_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
                      {
                        mercury__string__to_string__term_args_to_revstrings_5_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                    }
                }
            else
              {
                MR_Word mercury__string__to_string__Arg_22;
                MR_Word mercury__string__to_string__V_63_63;

                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                if (mercury__string__to_string__succeeded)
                  {
                    MR_Integer mercury__string__to_string__OpPriority_23;
                    MR_Word mercury__string__to_string__OpAssoc_24;
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                    {
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
                        MR_Integer mercury__string__to_string__NewPriority_25;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
                        MR_String mercury__string__to_string__V_66_66;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
                        MR_Box mercury__string__to_string__V_70_70;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

                        {
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
                        {
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
                        {
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
                        {
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
                        {
                          mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
                        {
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                        }
                      }
                    else
                      {
                        MR_Integer mercury__string__to_string__OpPriority_120;
                        MR_Word mercury__string__to_string__OpAssoc_121;
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                        {
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
                            MR_Box mercury__string__to_string__V_76_76;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
                            MR_String mercury__string__to_string__V_80_80;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
                            MR_Integer mercury__string__to_string__NewPriority_119;

                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
                            {
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
                            {
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
                            {
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
                            {
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                            }
                          }
                        else
                          {
                            mercury__string__to_string__plain_term_to_revstrings_7_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                          }
                      }
                  }
                else
                  {
                    MR_Word mercury__string__to_string__Arg1_26;
                    MR_Word mercury__string__to_string__Arg2_27;
                    MR_Word mercury__string__to_string__V_85_85;
                    MR_Word mercury__string__to_string__V_86_86;

                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__string__to_string__succeeded)
                      {
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_Word mercury__string__to_string__LeftAssoc_28;
                        MR_Word mercury__string__to_string__RightAssoc_29;
                        MR_Integer mercury__string__to_string__OpPriority_124;
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                        {
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
                            MR_Integer mercury__string__to_string__LeftPriority_30;
                            MR_Integer mercury__string__to_string__RightPriority_31;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
                            MR_Box mercury__string__to_string__V_89_89;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
                            MR_Box mercury__string__to_string__V_99_99;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
                            {
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
                            if (mercury__string__to_string__succeeded)
                              {
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
                              }
                            else
                              {
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
                                MR_String mercury__string__to_string__V_95_95;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
                                {
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
                              }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
                            {
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                            }
                          }
                        else
                          {
                            MR_Word mercury__string__to_string__FirstAssoc_32;
                            MR_Word mercury__string__to_string__SecondAssoc_33;
                            MR_Integer mercury__string__to_string__OpPriority_123;
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                            {
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
                            if (mercury__string__to_string__succeeded)
                              {
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
                                MR_Integer mercury__string__to_string__FirstPriority_34;
                                MR_Integer mercury__string__to_string__SecondPriority_35;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
                                MR_String mercury__string__to_string__V_105_105;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
                                MR_Box mercury__string__to_string__V_109_109;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
                                MR_Box mercury__string__to_string__V_113_113;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

                                {
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
                                {
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
                                {
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
                                {
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
                                {
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
                                {
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
                                {
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
                                {
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
                                {
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                                }
                              }
                            else
                              {
                                mercury__string__to_string__plain_term_to_revstrings_7_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                              }
                          }
                      }
                    else
                      {
                        mercury__string__to_string__plain_term_to_revstrings_7_p_3(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__Functor_12;
    MR_Word mercury__string__to_string__Args_14;
    MR_Integer mercury__string__to_string___Arity_13;
    MR_Word mercury__string__to_string__ListHead_15;
    MR_Word mercury__string__to_string__ListTail_16;
    MR_Word mercury__string__to_string__V_38_38;
    MR_Word mercury__string__to_string__V_39_39;

    {
      mercury__deconstruct__deconstruct_5_p_2(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

        {
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
        {
          mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
        {
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
        {
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
        }
      }
    else
      {
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
        if (mercury__string__to_string__succeeded)
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__string__to_string__succeeded)
          {
            {
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
            }
          }
        else
          {
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
            if (mercury__string__to_string__succeeded)
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                  }
                }
              else
                {
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
                      MR_Box mercury__string__to_string__V_57_57;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
                      {
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
                      {
                        mercury__string__to_string__value_to_revstrings_5_p_2(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                    }
                  else
                    {
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
                      {
                        mercury__string__to_string__arg_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
                      {
                        mercury__string__to_string__term_args_to_revstrings_5_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                    }
                }
            else
              {
                MR_Word mercury__string__to_string__Arg_22;
                MR_Word mercury__string__to_string__V_63_63;

                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                if (mercury__string__to_string__succeeded)
                  {
                    MR_Integer mercury__string__to_string__OpPriority_23;
                    MR_Word mercury__string__to_string__OpAssoc_24;
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                    {
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
                        MR_Integer mercury__string__to_string__NewPriority_25;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
                        MR_String mercury__string__to_string__V_66_66;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
                        MR_Box mercury__string__to_string__V_70_70;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

                        {
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
                        {
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
                        {
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
                        {
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
                        {
                          mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
                        {
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                        }
                      }
                    else
                      {
                        MR_Integer mercury__string__to_string__OpPriority_120;
                        MR_Word mercury__string__to_string__OpAssoc_121;
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                        {
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
                            MR_Box mercury__string__to_string__V_76_76;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
                            MR_String mercury__string__to_string__V_80_80;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
                            MR_Integer mercury__string__to_string__NewPriority_119;

                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
                            {
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
                            {
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
                            {
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
                            {
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                            }
                          }
                        else
                          {
                            mercury__string__to_string__plain_term_to_revstrings_7_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                          }
                      }
                  }
                else
                  {
                    MR_Word mercury__string__to_string__Arg1_26;
                    MR_Word mercury__string__to_string__Arg2_27;
                    MR_Word mercury__string__to_string__V_85_85;
                    MR_Word mercury__string__to_string__V_86_86;

                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__string__to_string__succeeded)
                      {
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_Word mercury__string__to_string__LeftAssoc_28;
                        MR_Word mercury__string__to_string__RightAssoc_29;
                        MR_Integer mercury__string__to_string__OpPriority_124;
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                        {
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
                            MR_Integer mercury__string__to_string__LeftPriority_30;
                            MR_Integer mercury__string__to_string__RightPriority_31;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
                            MR_Box mercury__string__to_string__V_89_89;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
                            MR_Box mercury__string__to_string__V_99_99;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
                            {
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
                            if (mercury__string__to_string__succeeded)
                              {
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
                              }
                            else
                              {
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
                                MR_String mercury__string__to_string__V_95_95;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
                                {
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
                              }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
                            {
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                            }
                          }
                        else
                          {
                            MR_Word mercury__string__to_string__FirstAssoc_32;
                            MR_Word mercury__string__to_string__SecondAssoc_33;
                            MR_Integer mercury__string__to_string__OpPriority_123;
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                            {
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
                            if (mercury__string__to_string__succeeded)
                              {
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
                                MR_Integer mercury__string__to_string__FirstPriority_34;
                                MR_Integer mercury__string__to_string__SecondPriority_35;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
                                MR_String mercury__string__to_string__V_105_105;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
                                MR_Box mercury__string__to_string__V_109_109;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
                                MR_Box mercury__string__to_string__V_113_113;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

                                {
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
                                {
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
                                {
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
                                {
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
                                {
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
                                {
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
                                {
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
                                {
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
                                {
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                                }
                              }
                            else
                              {
                                mercury__string__to_string__plain_term_to_revstrings_7_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                              }
                          }
                      }
                    else
                      {
                        mercury__string__to_string__plain_term_to_revstrings_7_p_2(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__Functor_12;
    MR_Word mercury__string__to_string__Args_14;
    MR_Integer mercury__string__to_string___Arity_13;
    MR_Word mercury__string__to_string__ListHead_15;
    MR_Word mercury__string__to_string__ListTail_16;
    MR_Word mercury__string__to_string__V_38_38;
    MR_Word mercury__string__to_string__V_39_39;

    {
      mercury__deconstruct__deconstruct_5_p_1(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

        {
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
        {
          mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
        {
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
        {
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
        }
      }
    else
      {
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
        if (mercury__string__to_string__succeeded)
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__string__to_string__succeeded)
          {
            {
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
            }
          }
        else
          {
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
            if (mercury__string__to_string__succeeded)
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                  }
                }
              else
                {
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
                      MR_Box mercury__string__to_string__V_57_57;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
                      {
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
                      {
                        mercury__string__to_string__value_to_revstrings_5_p_1(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                    }
                  else
                    {
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
                      {
                        mercury__string__to_string__arg_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
                      {
                        mercury__string__to_string__term_args_to_revstrings_5_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                    }
                }
            else
              {
                MR_Word mercury__string__to_string__Arg_22;
                MR_Word mercury__string__to_string__V_63_63;

                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                if (mercury__string__to_string__succeeded)
                  {
                    MR_Integer mercury__string__to_string__OpPriority_23;
                    MR_Word mercury__string__to_string__OpAssoc_24;
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                    {
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
                        MR_Integer mercury__string__to_string__NewPriority_25;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
                        MR_String mercury__string__to_string__V_66_66;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
                        MR_Box mercury__string__to_string__V_70_70;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

                        {
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
                        {
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
                        {
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
                        {
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
                        {
                          mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
                        {
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                        }
                      }
                    else
                      {
                        MR_Integer mercury__string__to_string__OpPriority_120;
                        MR_Word mercury__string__to_string__OpAssoc_121;
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                        {
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
                            MR_Box mercury__string__to_string__V_76_76;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
                            MR_String mercury__string__to_string__V_80_80;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
                            MR_Integer mercury__string__to_string__NewPriority_119;

                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
                            {
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
                            {
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
                            {
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
                            {
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                            }
                          }
                        else
                          {
                            mercury__string__to_string__plain_term_to_revstrings_7_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                          }
                      }
                  }
                else
                  {
                    MR_Word mercury__string__to_string__Arg1_26;
                    MR_Word mercury__string__to_string__Arg2_27;
                    MR_Word mercury__string__to_string__V_85_85;
                    MR_Word mercury__string__to_string__V_86_86;

                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__string__to_string__succeeded)
                      {
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_Word mercury__string__to_string__LeftAssoc_28;
                        MR_Word mercury__string__to_string__RightAssoc_29;
                        MR_Integer mercury__string__to_string__OpPriority_124;
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                        {
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
                            MR_Integer mercury__string__to_string__LeftPriority_30;
                            MR_Integer mercury__string__to_string__RightPriority_31;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
                            MR_Box mercury__string__to_string__V_89_89;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
                            MR_Box mercury__string__to_string__V_99_99;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
                            {
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
                            if (mercury__string__to_string__succeeded)
                              {
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
                              }
                            else
                              {
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
                                MR_String mercury__string__to_string__V_95_95;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
                                {
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
                              }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
                            {
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                            }
                          }
                        else
                          {
                            MR_Word mercury__string__to_string__FirstAssoc_32;
                            MR_Word mercury__string__to_string__SecondAssoc_33;
                            MR_Integer mercury__string__to_string__OpPriority_123;
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                            {
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
                            if (mercury__string__to_string__succeeded)
                              {
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
                                MR_Integer mercury__string__to_string__FirstPriority_34;
                                MR_Integer mercury__string__to_string__SecondPriority_35;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
                                MR_String mercury__string__to_string__V_105_105;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
                                MR_Box mercury__string__to_string__V_109_109;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
                                MR_Box mercury__string__to_string__V_113_113;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

                                {
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
                                {
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
                                {
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
                                {
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
                                {
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
                                {
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
                                {
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
                                {
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
                                {
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                                }
                              }
                            else
                              {
                                mercury__string__to_string__plain_term_to_revstrings_7_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                              }
                          }
                      }
                    else
                      {
                        mercury__string__to_string__plain_term_to_revstrings_7_p_1(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_126,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_36,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_37)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__Functor_12;
    MR_Word mercury__string__to_string__Args_14;
    MR_Integer mercury__string__to_string___Arity_13;
    MR_Word mercury__string__to_string__ListHead_15;
    MR_Word mercury__string__to_string__ListTail_16;
    MR_Word mercury__string__to_string__V_38_38;
    MR_Word mercury__string__to_string__V_39_39;

    {
      mercury__deconstruct__deconstruct_5_p_0(mercury__string__to_string__TypeInfo_for_T_126, mercury__string__to_string__X_10, mercury__string__to_string__NonCanon_7, &mercury__string__to_string__Functor_12, &mercury__string__to_string___Arity_13, &mercury__string__to_string__Args_14);
    }
    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[|]") == 0);
    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__ListHead_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
            mercury__string__to_string__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_38_38)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__ListTail_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 0)));
                mercury__string__to_string__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_38_38, (MR_Integer) 1)));
                mercury__string__to_string__succeeded = (mercury__string__to_string__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_41_41;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_42_42;
        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_43_43;

        {
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "[", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_41_41);
        }
        {
          mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListHead_15, mercury__string__to_string__STATE_VARIABLE_Rs_41_41, &mercury__string__to_string__STATE_VARIABLE_Rs_42_42);
        }
        {
          mercury__string__to_string__univ_list_tail_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__ListTail_16, mercury__string__to_string__STATE_VARIABLE_Rs_42_42, &mercury__string__to_string__STATE_VARIABLE_Rs_43_43);
        }
        {
          mercury__string__to_string__add_revstring_3_p_0((MR_String) "]", mercury__string__to_string__STATE_VARIABLE_Rs_43_43, mercury__string__to_string__STATE_VARIABLE_Rs_37);
        }
      }
    else
      {
        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "[]") == 0);
        if (mercury__string__to_string__succeeded)
          mercury__string__to_string__succeeded = (mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__string__to_string__succeeded)
          {
            {
              mercury__string__to_string__add_revstring_3_p_0((MR_String) "[]", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
            }
          }
        else
          {
            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) "{}") == 0);
            if (mercury__string__to_string__succeeded)
              if ((mercury__string__to_string__Args_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__string__to_string__add_revstring_3_p_0((MR_String) "{}", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                  }
                }
              else
                {
                  MR_Word mercury__string__to_string__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                  MR_Word mercury__string__to_string__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));

                  if ((mercury__string__to_string__V_138_138 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      MR_Word mercury__string__to_string__TypeInfo_127_127;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_56_56;
                      MR_Box mercury__string__to_string__V_57_57;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_58_58;

                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{ ", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_56_56);
                      }
                      {
                        mercury__string__to_string__V_57_57 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__V_139_139);
                      }
                      {
                        mercury__string__to_string__value_to_revstrings_5_p_0(mercury__string__to_string__TypeInfo_127_127, mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_57_57, mercury__string__to_string__STATE_VARIABLE_Rs_56_56, &mercury__string__to_string__STATE_VARIABLE_Rs_58_58);
                      }
                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) " }", mercury__string__to_string__STATE_VARIABLE_Rs_58_58, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                    }
                  else
                    {
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_49_49;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_50_50;
                      MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_51_51;

                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "{", mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_49_49);
                      }
                      {
                        mercury__string__to_string__arg_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_139_139, mercury__string__to_string__STATE_VARIABLE_Rs_49_49, &mercury__string__to_string__STATE_VARIABLE_Rs_50_50);
                      }
                      {
                        mercury__string__to_string__term_args_to_revstrings_5_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__V_138_138, mercury__string__to_string__STATE_VARIABLE_Rs_50_50, &mercury__string__to_string__STATE_VARIABLE_Rs_51_51);
                      }
                      {
                        mercury__string__to_string__add_revstring_3_p_0((MR_String) "}", mercury__string__to_string__STATE_VARIABLE_Rs_51_51, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                    }
                }
            else
              {
                MR_Word mercury__string__to_string__Arg_22;
                MR_Word mercury__string__to_string__V_63_63;

                mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__Arg_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
                    mercury__string__to_string__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                    mercury__string__to_string__succeeded = (mercury__string__to_string__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                if (mercury__string__to_string__succeeded)
                  {
                    MR_Integer mercury__string__to_string__OpPriority_23;
                    MR_Word mercury__string__to_string__OpAssoc_24;
                    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_128 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                    {
                      mercury__string__to_string__succeeded = mercury__ops__lookup_prefix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_128, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_23, &mercury__string__to_string__OpAssoc_24);
                    }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_Word mercury__string__to_string__TypeInfo_129_129;
                        MR_Integer mercury__string__to_string__NewPriority_25;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_65_65;
                        MR_String mercury__string__to_string__V_66_66;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_67_67;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_69_69;
                        MR_Box mercury__string__to_string__V_70_70;
                        MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_71_71;

                        {
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_65_65);
                        }
                        {
                          mercury__string__to_string__V_66_66 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_66_66, mercury__string__to_string__STATE_VARIABLE_Rs_65_65, &mercury__string__to_string__STATE_VARIABLE_Rs_67_67);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_67_67, &mercury__string__to_string__STATE_VARIABLE_Rs_69_69);
                        }
                        {
                          mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_23, mercury__string__to_string__OpAssoc_24, &mercury__string__to_string__NewPriority_25);
                        }
                        {
                          mercury__string__to_string__V_70_70 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__Arg_22);
                        }
                        {
                          mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_129_129, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_25, mercury__string__to_string__V_70_70, mercury__string__to_string__STATE_VARIABLE_Rs_69_69, &mercury__string__to_string__STATE_VARIABLE_Rs_71_71);
                        }
                        {
                          mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_23, mercury__string__to_string__STATE_VARIABLE_Rs_71_71, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                        }
                      }
                    else
                      {
                        MR_Integer mercury__string__to_string__OpPriority_120;
                        MR_Word mercury__string__to_string__OpAssoc_121;
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_130 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                        {
                          mercury__string__to_string__succeeded = mercury__ops__lookup_postfix_op_4_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_130, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_120, &mercury__string__to_string__OpAssoc_121);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            MR_Word mercury__string__to_string__TypeInfo_131_131;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_75_75;
                            MR_Box mercury__string__to_string__V_76_76;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_77_77;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_79_79;
                            MR_String mercury__string__to_string__V_80_80;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_81_81;
                            MR_Integer mercury__string__to_string__NewPriority_119;

                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_75_75);
                            }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_120, mercury__string__to_string__OpAssoc_121, &mercury__string__to_string__NewPriority_119);
                            }
                            {
                              mercury__string__to_string__V_76_76 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__Arg_22);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_131_131, mercury__string__to_string__NonCanon_7, mercury__string__to_string__NewPriority_119, mercury__string__to_string__V_76_76, mercury__string__to_string__STATE_VARIABLE_Rs_75_75, &mercury__string__to_string__STATE_VARIABLE_Rs_77_77);
                            }
                            {
                              mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_77_77, &mercury__string__to_string__STATE_VARIABLE_Rs_79_79);
                            }
                            {
                              mercury__string__to_string__V_80_80 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                            }
                            {
                              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_80_80, mercury__string__to_string__STATE_VARIABLE_Rs_79_79, &mercury__string__to_string__STATE_VARIABLE_Rs_81_81);
                            }
                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_120, mercury__string__to_string__STATE_VARIABLE_Rs_81_81, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                            }
                          }
                        else
                          {
                            mercury__string__to_string__plain_term_to_revstrings_7_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                          }
                      }
                  }
                else
                  {
                    MR_Word mercury__string__to_string__Arg1_26;
                    MR_Word mercury__string__to_string__Arg2_27;
                    MR_Word mercury__string__to_string__V_85_85;
                    MR_Word mercury__string__to_string__V_86_86;

                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__Args_14)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__string__to_string__succeeded)
                      {
                        mercury__string__to_string__Arg1_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 0)));
                        mercury__string__to_string__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__Args_14, (MR_Integer) 1)));
                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__V_85_85)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__Arg2_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 0)));
                            mercury__string__to_string__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__V_85_85, (MR_Integer) 1)));
                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_86_86 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                      }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_Word mercury__string__to_string__LeftAssoc_28;
                        MR_Word mercury__string__to_string__RightAssoc_29;
                        MR_Integer mercury__string__to_string__OpPriority_124;
                        MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_132 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                        {
                          mercury__string__to_string__succeeded = mercury__ops__lookup_infix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_132, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_124, &mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__RightAssoc_29);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            MR_Word mercury__string__to_string__TypeInfo_133_133;
                            MR_Word mercury__string__to_string__TypeInfo_134_134;
                            MR_Integer mercury__string__to_string__LeftPriority_30;
                            MR_Integer mercury__string__to_string__RightPriority_31;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_88_88;
                            MR_Box mercury__string__to_string__V_89_89;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_90_90;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_92_92;
                            MR_Box mercury__string__to_string__V_99_99;
                            MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_100_100;

                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_88_88);
                            }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__LeftAssoc_28, &mercury__string__to_string__LeftPriority_30);
                            }
                            {
                              mercury__string__to_string__V_89_89 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__Arg1_26);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_133_133, mercury__string__to_string__NonCanon_7, mercury__string__to_string__LeftPriority_30, mercury__string__to_string__V_89_89, mercury__string__to_string__STATE_VARIABLE_Rs_88_88, &mercury__string__to_string__STATE_VARIABLE_Rs_90_90);
                            }
                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__Functor_12, (MR_String) ",") == 0);
                            if (mercury__string__to_string__succeeded)
                              {
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) ", ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
                              }
                            else
                              {
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_94_94;
                                MR_String mercury__string__to_string__V_95_95;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_96_96;

                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_90_90, &mercury__string__to_string__STATE_VARIABLE_Rs_94_94);
                                }
                                {
                                  mercury__string__to_string__V_95_95 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_95_95, mercury__string__to_string__STATE_VARIABLE_Rs_94_94, &mercury__string__to_string__STATE_VARIABLE_Rs_96_96);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_96_96, &mercury__string__to_string__STATE_VARIABLE_Rs_92_92);
                                }
                              }
                            {
                              mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_124, mercury__string__to_string__RightAssoc_29, &mercury__string__to_string__RightPriority_31);
                            }
                            {
                              mercury__string__to_string__V_99_99 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__Arg2_27);
                            }
                            {
                              mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_134_134, mercury__string__to_string__NonCanon_7, mercury__string__to_string__RightPriority_31, mercury__string__to_string__V_99_99, mercury__string__to_string__STATE_VARIABLE_Rs_92_92, &mercury__string__to_string__STATE_VARIABLE_Rs_100_100);
                            }
                            {
                              mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_124, mercury__string__to_string__STATE_VARIABLE_Rs_100_100, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                            }
                          }
                        else
                          {
                            MR_Word mercury__string__to_string__FirstAssoc_32;
                            MR_Word mercury__string__to_string__SecondAssoc_33;
                            MR_Integer mercury__string__to_string__OpPriority_123;
                            MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_135 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];

                            {
                              mercury__string__to_string__succeeded = mercury__ops__lookup_binary_prefix_op_5_p_0(mercury__string__to_string__TypeClassInfo_for_op_table_135, ((MR_Box) ((MR_Integer) 0)), mercury__string__to_string__Functor_12, &mercury__string__to_string__OpPriority_123, &mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__SecondAssoc_33);
                            }
                            if (mercury__string__to_string__succeeded)
                              {
                                MR_Word mercury__string__to_string__TypeInfo_136_136;
                                MR_Word mercury__string__to_string__TypeInfo_137_137;
                                MR_Integer mercury__string__to_string__FirstPriority_34;
                                MR_Integer mercury__string__to_string__SecondPriority_35;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_104_104;
                                MR_String mercury__string__to_string__V_105_105;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_106_106;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_108_108;
                                MR_Box mercury__string__to_string__V_109_109;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_110_110;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_112_112;
                                MR_Box mercury__string__to_string__V_113_113;
                                MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_114_114;

                                {
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) "(", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, &mercury__string__to_string__STATE_VARIABLE_Rs_104_104);
                                }
                                {
                                  mercury__string__to_string__V_105_105 = mercury__term_io__quoted_atom_1_f_0(mercury__string__to_string__Functor_12);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_105_105, mercury__string__to_string__STATE_VARIABLE_Rs_104_104, &mercury__string__to_string__STATE_VARIABLE_Rs_106_106);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_106_106, &mercury__string__to_string__STATE_VARIABLE_Rs_108_108);
                                }
                                {
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__FirstAssoc_32, &mercury__string__to_string__FirstPriority_34);
                                }
                                {
                                  mercury__string__to_string__V_109_109 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__Arg1_26);
                                }
                                {
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_136_136, mercury__string__to_string__NonCanon_7, mercury__string__to_string__FirstPriority_34, mercury__string__to_string__V_109_109, mercury__string__to_string__STATE_VARIABLE_Rs_108_108, &mercury__string__to_string__STATE_VARIABLE_Rs_110_110);
                                }
                                {
                                  mercury__string__to_string__add_revstring_3_p_0((MR_String) " ", mercury__string__to_string__STATE_VARIABLE_Rs_110_110, &mercury__string__to_string__STATE_VARIABLE_Rs_112_112);
                                }
                                {
                                  mercury__string__to_string__adjust_priority_3_p_0(mercury__string__to_string__OpPriority_123, mercury__string__to_string__SecondAssoc_33, &mercury__string__to_string__SecondPriority_35);
                                }
                                {
                                  mercury__string__to_string__V_113_113 = mercury__univ__univ_value_1_f_0(&mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__Arg2_27);
                                }
                                {
                                  mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_137_137, mercury__string__to_string__NonCanon_7, mercury__string__to_string__SecondPriority_35, mercury__string__to_string__V_113_113, mercury__string__to_string__STATE_VARIABLE_Rs_112_112, &mercury__string__to_string__STATE_VARIABLE_Rs_114_114);
                                }
                                {
                                  mercury__string__to_string__maybe_add_revstring_5_p_0((MR_String) ")", mercury__string__to_string__Priority_9, mercury__string__to_string__OpPriority_123, mercury__string__to_string__STATE_VARIABLE_Rs_114_114, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                                }
                              }
                            else
                              {
                                mercury__string__to_string__plain_term_to_revstrings_7_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                              }
                          }
                      }
                    else
                      {
                        mercury__string__to_string__plain_term_to_revstrings_7_p_0(mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__Functor_12, mercury__string__to_string__Args_14, mercury__string__to_string__STATE_VARIABLE_Rs_0_36, mercury__string__to_string__STATE_VARIABLE_Rs_37);
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_3(
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__String_12;
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box mercury__string__to_string__conv0_String_12;

    {
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
        mercury__string__to_string__succeeded = MR_TRUE;
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_String mercury__string__to_string__V_29_29;

        {
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
        }
      }
    else
      {
        MR_Char mercury__string__to_string__Char_13;
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        MR_Box mercury__string__to_string__conv1_Char_13;

        {
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
            mercury__string__to_string__succeeded = MR_TRUE;
          }
        if (mercury__string__to_string__succeeded)
          {
            MR_String mercury__string__to_string__V_31_31;

            {
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
            {
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
            }
          }
        else
          {
            MR_Integer mercury__string__to_string__Int_14;
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__string__to_string__conv2_Int_14;

            {
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
                mercury__string__to_string__succeeded = MR_TRUE;
              }
            if (mercury__string__to_string__succeeded)
              {
                MR_String mercury__string__to_string__V_33_33;

                {
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
                {
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                }
              }
            else
              {
                MR_Float mercury__string__to_string__Float_15;
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                MR_Box mercury__string__to_string__conv3_Float_15;

                {
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
                    mercury__string__to_string__succeeded = MR_TRUE;
                  }
                if (mercury__string__to_string__succeeded)
                  {
                    MR_String mercury__string__to_string__V_35_35;

                    {
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
                    {
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                    }
                  }
                else
                  {
                    MR_Box mercury__string__to_string__Bitmap_16;
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

                    {
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
                    if (mercury__string__to_string__succeeded)
                      {
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
                        mercury__string__to_string__succeeded = MR_TRUE;
                      }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_String mercury__string__to_string__V_37_37;
                        MR_String mercury__string__to_string__V_39_39;

                        {
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
                        {
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                        }
                      }
                    else
                      {
                        MR_Word mercury__string__to_string__TypeDesc_17;
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

                        {
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
                            mercury__string__to_string__succeeded = MR_TRUE;
                          }
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                          }
                        else
                          {
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

                            {
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
                            if (mercury__string__to_string__succeeded)
                              {
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
                                mercury__string__to_string__succeeded = MR_TRUE;
                              }
                            if (mercury__string__to_string__succeeded)
                              {
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                              }
                            else
                              {
                                MR_Word mercury__string__to_string__C_Pointer_19;
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

                                {
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
                                if (mercury__string__to_string__succeeded)
                                  {
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
                                    mercury__string__to_string__succeeded = MR_TRUE;
                                  }
                                if (mercury__string__to_string__succeeded)
                                  {
                                    MR_String mercury__string__to_string__V_42_42;

                                    {
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
                                    {
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                    }
                                  }
                                else
                                  {
                                    MR_Word mercury__string__to_string__ElemType_22;
                                    MR_Word mercury__string__to_string__TypeCtor_20;
                                    MR_Word mercury__string__to_string__ArgTypes_21;
                                    MR_Word mercury__string__to_string__V_44_44;
                                    MR_Word mercury__string__to_string__V_45_45;
                                    MR_String mercury__string__to_string__V_46_46;
                                    MR_String mercury__string__to_string__V_47_47;
                                    MR_Box mercury__string__to_string__V_91_91;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
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
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
}
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
                                    if (mercury__string__to_string__succeeded)
                                      {
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            {
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                {
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
                                              }
                                          }
                                      }
                                    if (mercury__string__to_string__succeeded)
                                      {
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
                                        MR_Box mercury__string__to_string__Elem_23;
                                        MR_Box mercury__string__to_string__conv8_Array_24;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
}
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                                        {
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
                                        }
                                        {
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
                                        {
                                          mercury__string__to_string__array_to_revstrings_5_p_3(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                        }
                                      }
                                    else
                                      {
                                        MR_Word mercury__string__to_string__ElemType_72;
                                        MR_Word mercury__string__to_string__V_49_49;
                                        MR_Word mercury__string__to_string__V_50_50;
                                        MR_String mercury__string__to_string__V_51_51;
                                        MR_String mercury__string__to_string__V_52_52;
                                        MR_Word mercury__string__to_string__TypeCtor_60;
                                        MR_Word mercury__string__to_string__ArgTypes_61;
                                        MR_Box mercury__string__to_string__V_92_92;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
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
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
}
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                {
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
                                                if (mercury__string__to_string__succeeded)
                                                  {
                                                    {
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
                                                  }
                                              }
                                          }
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
                                            MR_Box mercury__string__to_string__VersionArray_25;
                                            MR_Box mercury__string__to_string__Elem_62;
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
}
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                                            {
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
                                            }
                                            {
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
                                            {
                                              mercury__string__to_string__version_array_to_revstrings_5_p_3(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                            }
                                          }
                                        else
                                          {
                                            MR_Word mercury__string__to_string__V_54_54;
                                            MR_Word mercury__string__to_string__V_55_55;
                                            MR_String mercury__string__to_string__V_56_56;
                                            MR_String mercury__string__to_string__V_57_57;
                                            MR_Word mercury__string__to_string__TypeCtor_63;
                                            MR_Word mercury__string__to_string__ArgTypes_64;
                                            MR_Box mercury__string__to_string__V_93_93;
                                            MR_Word mercury__string__to_string__ElemType_68;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_3

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
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
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
}
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (mercury__string__to_string__succeeded)
                                                  {
                                                    {
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
                                                    if (mercury__string__to_string__succeeded)
                                                      {
                                                        {
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
                                                      }
                                                  }
                                              }
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

                                                {
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                {
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                                }
                                              }
                                            else
                                              {
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_3(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_2(
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__String_12;
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box mercury__string__to_string__conv0_String_12;

    {
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
        mercury__string__to_string__succeeded = MR_TRUE;
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_String mercury__string__to_string__V_29_29;

        {
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
        }
      }
    else
      {
        MR_Char mercury__string__to_string__Char_13;
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        MR_Box mercury__string__to_string__conv1_Char_13;

        {
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
            mercury__string__to_string__succeeded = MR_TRUE;
          }
        if (mercury__string__to_string__succeeded)
          {
            MR_String mercury__string__to_string__V_31_31;

            {
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
            {
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
            }
          }
        else
          {
            MR_Integer mercury__string__to_string__Int_14;
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__string__to_string__conv2_Int_14;

            {
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
                mercury__string__to_string__succeeded = MR_TRUE;
              }
            if (mercury__string__to_string__succeeded)
              {
                MR_String mercury__string__to_string__V_33_33;

                {
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
                {
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                }
              }
            else
              {
                MR_Float mercury__string__to_string__Float_15;
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                MR_Box mercury__string__to_string__conv3_Float_15;

                {
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
                    mercury__string__to_string__succeeded = MR_TRUE;
                  }
                if (mercury__string__to_string__succeeded)
                  {
                    MR_String mercury__string__to_string__V_35_35;

                    {
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
                    {
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                    }
                  }
                else
                  {
                    MR_Box mercury__string__to_string__Bitmap_16;
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

                    {
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
                    if (mercury__string__to_string__succeeded)
                      {
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
                        mercury__string__to_string__succeeded = MR_TRUE;
                      }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_String mercury__string__to_string__V_37_37;
                        MR_String mercury__string__to_string__V_39_39;

                        {
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
                        {
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                        }
                      }
                    else
                      {
                        MR_Word mercury__string__to_string__TypeDesc_17;
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

                        {
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
                            mercury__string__to_string__succeeded = MR_TRUE;
                          }
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                          }
                        else
                          {
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

                            {
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
                            if (mercury__string__to_string__succeeded)
                              {
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
                                mercury__string__to_string__succeeded = MR_TRUE;
                              }
                            if (mercury__string__to_string__succeeded)
                              {
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                              }
                            else
                              {
                                MR_Word mercury__string__to_string__C_Pointer_19;
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

                                {
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
                                if (mercury__string__to_string__succeeded)
                                  {
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
                                    mercury__string__to_string__succeeded = MR_TRUE;
                                  }
                                if (mercury__string__to_string__succeeded)
                                  {
                                    MR_String mercury__string__to_string__V_42_42;

                                    {
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
                                    {
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                    }
                                  }
                                else
                                  {
                                    MR_Word mercury__string__to_string__ElemType_22;
                                    MR_Word mercury__string__to_string__TypeCtor_20;
                                    MR_Word mercury__string__to_string__ArgTypes_21;
                                    MR_Word mercury__string__to_string__V_44_44;
                                    MR_Word mercury__string__to_string__V_45_45;
                                    MR_String mercury__string__to_string__V_46_46;
                                    MR_String mercury__string__to_string__V_47_47;
                                    MR_Box mercury__string__to_string__V_91_91;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
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
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
}
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
                                    if (mercury__string__to_string__succeeded)
                                      {
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            {
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                {
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
                                              }
                                          }
                                      }
                                    if (mercury__string__to_string__succeeded)
                                      {
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
                                        MR_Box mercury__string__to_string__Elem_23;
                                        MR_Box mercury__string__to_string__conv8_Array_24;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
}
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                                        {
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
                                        }
                                        {
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
                                        {
                                          mercury__string__to_string__array_to_revstrings_5_p_2(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                        }
                                      }
                                    else
                                      {
                                        MR_Word mercury__string__to_string__ElemType_72;
                                        MR_Word mercury__string__to_string__V_49_49;
                                        MR_Word mercury__string__to_string__V_50_50;
                                        MR_String mercury__string__to_string__V_51_51;
                                        MR_String mercury__string__to_string__V_52_52;
                                        MR_Word mercury__string__to_string__TypeCtor_60;
                                        MR_Word mercury__string__to_string__ArgTypes_61;
                                        MR_Box mercury__string__to_string__V_92_92;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
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
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
}
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                {
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
                                                if (mercury__string__to_string__succeeded)
                                                  {
                                                    {
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
                                                  }
                                              }
                                          }
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
                                            MR_Box mercury__string__to_string__VersionArray_25;
                                            MR_Box mercury__string__to_string__Elem_62;
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
}
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                                            {
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
                                            }
                                            {
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
                                            {
                                              mercury__string__to_string__version_array_to_revstrings_5_p_2(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                            }
                                          }
                                        else
                                          {
                                            MR_Word mercury__string__to_string__V_54_54;
                                            MR_Word mercury__string__to_string__V_55_55;
                                            MR_String mercury__string__to_string__V_56_56;
                                            MR_String mercury__string__to_string__V_57_57;
                                            MR_Word mercury__string__to_string__TypeCtor_63;
                                            MR_Word mercury__string__to_string__ArgTypes_64;
                                            MR_Box mercury__string__to_string__V_93_93;
                                            MR_Word mercury__string__to_string__ElemType_68;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_2

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
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
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
}
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (mercury__string__to_string__succeeded)
                                                  {
                                                    {
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
                                                    if (mercury__string__to_string__succeeded)
                                                      {
                                                        {
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
                                                      }
                                                  }
                                              }
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

                                                {
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                {
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                                }
                                              }
                                            else
                                              {
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_2(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_1(
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__String_12;
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box mercury__string__to_string__conv0_String_12;

    {
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
        mercury__string__to_string__succeeded = MR_TRUE;
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_String mercury__string__to_string__V_29_29;

        {
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
        }
      }
    else
      {
        MR_Char mercury__string__to_string__Char_13;
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        MR_Box mercury__string__to_string__conv1_Char_13;

        {
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
            mercury__string__to_string__succeeded = MR_TRUE;
          }
        if (mercury__string__to_string__succeeded)
          {
            MR_String mercury__string__to_string__V_31_31;

            {
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
            {
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
            }
          }
        else
          {
            MR_Integer mercury__string__to_string__Int_14;
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__string__to_string__conv2_Int_14;

            {
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
                mercury__string__to_string__succeeded = MR_TRUE;
              }
            if (mercury__string__to_string__succeeded)
              {
                MR_String mercury__string__to_string__V_33_33;

                {
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
                {
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                }
              }
            else
              {
                MR_Float mercury__string__to_string__Float_15;
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                MR_Box mercury__string__to_string__conv3_Float_15;

                {
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
                    mercury__string__to_string__succeeded = MR_TRUE;
                  }
                if (mercury__string__to_string__succeeded)
                  {
                    MR_String mercury__string__to_string__V_35_35;

                    {
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
                    {
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                    }
                  }
                else
                  {
                    MR_Box mercury__string__to_string__Bitmap_16;
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

                    {
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
                    if (mercury__string__to_string__succeeded)
                      {
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
                        mercury__string__to_string__succeeded = MR_TRUE;
                      }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_String mercury__string__to_string__V_37_37;
                        MR_String mercury__string__to_string__V_39_39;

                        {
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
                        {
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                        }
                      }
                    else
                      {
                        MR_Word mercury__string__to_string__TypeDesc_17;
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

                        {
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
                            mercury__string__to_string__succeeded = MR_TRUE;
                          }
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                          }
                        else
                          {
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

                            {
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
                            if (mercury__string__to_string__succeeded)
                              {
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
                                mercury__string__to_string__succeeded = MR_TRUE;
                              }
                            if (mercury__string__to_string__succeeded)
                              {
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                              }
                            else
                              {
                                MR_Word mercury__string__to_string__C_Pointer_19;
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

                                {
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
                                if (mercury__string__to_string__succeeded)
                                  {
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
                                    mercury__string__to_string__succeeded = MR_TRUE;
                                  }
                                if (mercury__string__to_string__succeeded)
                                  {
                                    MR_String mercury__string__to_string__V_42_42;

                                    {
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
                                    {
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                    }
                                  }
                                else
                                  {
                                    MR_Word mercury__string__to_string__ElemType_22;
                                    MR_Word mercury__string__to_string__TypeCtor_20;
                                    MR_Word mercury__string__to_string__ArgTypes_21;
                                    MR_Word mercury__string__to_string__V_44_44;
                                    MR_Word mercury__string__to_string__V_45_45;
                                    MR_String mercury__string__to_string__V_46_46;
                                    MR_String mercury__string__to_string__V_47_47;
                                    MR_Box mercury__string__to_string__V_91_91;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
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
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
}
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
                                    if (mercury__string__to_string__succeeded)
                                      {
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            {
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                {
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
                                              }
                                          }
                                      }
                                    if (mercury__string__to_string__succeeded)
                                      {
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
                                        MR_Box mercury__string__to_string__Elem_23;
                                        MR_Box mercury__string__to_string__conv8_Array_24;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
}
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                                        {
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
                                        }
                                        {
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
                                        {
                                          mercury__string__to_string__array_to_revstrings_5_p_1(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                        }
                                      }
                                    else
                                      {
                                        MR_Word mercury__string__to_string__ElemType_72;
                                        MR_Word mercury__string__to_string__V_49_49;
                                        MR_Word mercury__string__to_string__V_50_50;
                                        MR_String mercury__string__to_string__V_51_51;
                                        MR_String mercury__string__to_string__V_52_52;
                                        MR_Word mercury__string__to_string__TypeCtor_60;
                                        MR_Word mercury__string__to_string__ArgTypes_61;
                                        MR_Box mercury__string__to_string__V_92_92;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
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
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
}
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                {
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
                                                if (mercury__string__to_string__succeeded)
                                                  {
                                                    {
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
                                                  }
                                              }
                                          }
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
                                            MR_Box mercury__string__to_string__VersionArray_25;
                                            MR_Box mercury__string__to_string__Elem_62;
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
}
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                                            {
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
                                            }
                                            {
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
                                            {
                                              mercury__string__to_string__version_array_to_revstrings_5_p_1(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                            }
                                          }
                                        else
                                          {
                                            MR_Word mercury__string__to_string__V_54_54;
                                            MR_Word mercury__string__to_string__V_55_55;
                                            MR_String mercury__string__to_string__V_56_56;
                                            MR_String mercury__string__to_string__V_57_57;
                                            MR_Word mercury__string__to_string__TypeCtor_63;
                                            MR_Word mercury__string__to_string__ArgTypes_64;
                                            MR_Box mercury__string__to_string__V_93_93;
                                            MR_Word mercury__string__to_string__ElemType_68;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_1

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
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
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
}
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (mercury__string__to_string__succeeded)
                                                  {
                                                    {
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
                                                    if (mercury__string__to_string__succeeded)
                                                      {
                                                        {
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
                                                      }
                                                  }
                                              }
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

                                                {
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                {
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                                }
                                              }
                                            else
                                              {
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_prio_6_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_74,
  MR_Word mercury__string__to_string__NonCanon_7,
  MR_Integer mercury__string__to_string__Priority_9,
  MR_Box mercury__string__to_string__X_10,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_27,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_28)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__String_12;
    MR_Word mercury__string__to_string__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    MR_Box mercury__string__to_string__conv0_String_12;

    {
      mercury__string__to_string__succeeded = mercury__private_builtin__typed_unify_2_p_1(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_75_75, mercury__string__to_string__X_10, &mercury__string__to_string__conv0_String_12);
    }
    if (mercury__string__to_string__succeeded)
      {
        mercury__string__to_string__String_12 = ((MR_String) mercury__string__to_string__conv0_String_12);
        mercury__string__to_string__succeeded = MR_TRUE;
      }
    if (mercury__string__to_string__succeeded)
      {
        MR_String mercury__string__to_string__V_29_29;

        {
          mercury__string__to_string__V_29_29 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__String_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__to_string__STATE_VARIABLE_Rs_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__V_29_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__STATE_VARIABLE_Rs_0_27));
        }
      }
    else
      {
        MR_Char mercury__string__to_string__Char_13;
        MR_Word mercury__string__to_string__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        MR_Box mercury__string__to_string__conv1_Char_13;

        {
          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_76_76, mercury__string__to_string__X_10, &mercury__string__to_string__conv1_Char_13);
        }
        if (mercury__string__to_string__succeeded)
          {
            mercury__string__to_string__Char_13 = ((MR_Char) (MR_Word) mercury__string__to_string__conv1_Char_13);
            mercury__string__to_string__succeeded = MR_TRUE;
          }
        if (mercury__string__to_string__succeeded)
          {
            MR_String mercury__string__to_string__V_31_31;

            {
              mercury__string__to_string__V_31_31 = mercury__term_io__quoted_char_1_f_0(mercury__string__to_string__Char_13);
            }
            {
              mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_31_31, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
            }
          }
        else
          {
            MR_Integer mercury__string__to_string__Int_14;
            MR_Word mercury__string__to_string__TypeCtorInfo_77_77 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            MR_Box mercury__string__to_string__conv2_Int_14;

            {
              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_77_77, mercury__string__to_string__X_10, &mercury__string__to_string__conv2_Int_14);
            }
            if (mercury__string__to_string__succeeded)
              {
                mercury__string__to_string__Int_14 = ((MR_Integer) mercury__string__to_string__conv2_Int_14);
                mercury__string__to_string__succeeded = MR_TRUE;
              }
            if (mercury__string__to_string__succeeded)
              {
                MR_String mercury__string__to_string__V_33_33;

                {
                  mercury__string__to_string__V_33_33 = mercury__string__int_to_string_1_f_0(mercury__string__to_string__Int_14);
                }
                {
                  mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_33_33, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                }
              }
            else
              {
                MR_Float mercury__string__to_string__Float_15;
                MR_Word mercury__string__to_string__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
                MR_Box mercury__string__to_string__conv3_Float_15;

                {
                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_78_78, mercury__string__to_string__X_10, &mercury__string__to_string__conv3_Float_15);
                }
                if (mercury__string__to_string__succeeded)
                  {
                    mercury__string__to_string__Float_15 = MR_unbox_float(mercury__string__to_string__conv3_Float_15);
                    mercury__string__to_string__succeeded = MR_TRUE;
                  }
                if (mercury__string__to_string__succeeded)
                  {
                    MR_String mercury__string__to_string__V_35_35;

                    {
                      mercury__string__to_string__V_35_35 = mercury__string__float_to_string_1_f_0(mercury__string__to_string__Float_15);
                    }
                    {
                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_35_35, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                    }
                  }
                else
                  {
                    MR_Box mercury__string__to_string__Bitmap_16;
                    MR_Word mercury__string__to_string__TypeCtorInfo_79_79 = (MR_Word) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0;
                    MR_Box mercury__string__to_string__conv4_Bitmap_16;

                    {
                      mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_79_79, mercury__string__to_string__X_10, &mercury__string__to_string__conv4_Bitmap_16);
                    }
                    if (mercury__string__to_string__succeeded)
                      {
                        mercury__string__to_string__Bitmap_16 = ((MR_Box) mercury__string__to_string__conv4_Bitmap_16);
                        mercury__string__to_string__succeeded = MR_TRUE;
                      }
                    if (mercury__string__to_string__succeeded)
                      {
                        MR_String mercury__string__to_string__V_37_37;
                        MR_String mercury__string__to_string__V_39_39;

                        {
                          mercury__string__to_string__V_39_39 = mercury__bitmap__to_string_1_f_0(mercury__string__to_string__Bitmap_16);
                        }
                        {
                          mercury__string__to_string__V_37_37 = mercury__term_io__quoted_string_1_f_0(mercury__string__to_string__V_39_39);
                        }
                        {
                          mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_37_37, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                        }
                      }
                    else
                      {
                        MR_Word mercury__string__to_string__TypeDesc_17;
                        MR_Word mercury__string__to_string__TypeCtorInfo_80_80 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0;
                        MR_Box mercury__string__to_string__conv5_TypeDesc_17;

                        {
                          mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_80_80, mercury__string__to_string__X_10, &mercury__string__to_string__conv5_TypeDesc_17);
                        }
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__TypeDesc_17 = ((MR_Word) mercury__string__to_string__conv5_TypeDesc_17);
                            mercury__string__to_string__succeeded = MR_TRUE;
                          }
                        if (mercury__string__to_string__succeeded)
                          {
                            mercury__string__to_string__type_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeDesc_17, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                          }
                        else
                          {
                            MR_Word mercury__string__to_string__TypeCtorDesc_18;
                            MR_Word mercury__string__to_string__TypeCtorInfo_81_81 = (MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0;
                            MR_Box mercury__string__to_string__conv6_TypeCtorDesc_18;

                            {
                              mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_81_81, mercury__string__to_string__X_10, &mercury__string__to_string__conv6_TypeCtorDesc_18);
                            }
                            if (mercury__string__to_string__succeeded)
                              {
                                mercury__string__to_string__TypeCtorDesc_18 = ((MR_Word) mercury__string__to_string__conv6_TypeCtorDesc_18);
                                mercury__string__to_string__succeeded = MR_TRUE;
                              }
                            if (mercury__string__to_string__succeeded)
                              {
                                mercury__string__to_string__type_ctor_desc_to_revstrings_3_p_0(mercury__string__to_string__TypeCtorDesc_18, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                              }
                            else
                              {
                                MR_Word mercury__string__to_string__C_Pointer_19;
                                MR_Word mercury__string__to_string__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_c_pointer_0;
                                MR_Box mercury__string__to_string__conv7_C_Pointer_19;

                                {
                                  mercury__string__to_string__succeeded = mercury__builtin__dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_82_82, mercury__string__to_string__X_10, &mercury__string__to_string__conv7_C_Pointer_19);
                                }
                                if (mercury__string__to_string__succeeded)
                                  {
                                    mercury__string__to_string__C_Pointer_19 = ((MR_Word) mercury__string__to_string__conv7_C_Pointer_19);
                                    mercury__string__to_string__succeeded = MR_TRUE;
                                  }
                                if (mercury__string__to_string__succeeded)
                                  {
                                    MR_String mercury__string__to_string__V_42_42;

                                    {
                                      mercury__string__to_string__V_42_42 = mercury__string__c_pointer_to_string_1_f_0(mercury__string__to_string__C_Pointer_19);
                                    }
                                    {
                                      mercury__string__to_string__add_revstring_3_p_0(mercury__string__to_string__V_42_42, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                    }
                                  }
                                else
                                  {
                                    MR_Word mercury__string__to_string__ElemType_22;
                                    MR_Word mercury__string__to_string__TypeCtor_20;
                                    MR_Word mercury__string__to_string__ArgTypes_21;
                                    MR_Word mercury__string__to_string__V_44_44;
                                    MR_Word mercury__string__to_string__V_45_45;
                                    MR_String mercury__string__to_string__V_46_46;
                                    MR_String mercury__string__to_string__V_47_47;
                                    MR_Box mercury__string__to_string__V_91_91;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_44_44  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_44_44 ;
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
	 mercury__string__to_string__TypeCtor_20  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_21  = ArgTypes;
}
                                    mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_21)) == (MR_mktag((MR_Integer) 1)));
                                    if (mercury__string__to_string__succeeded)
                                      {
                                        mercury__string__to_string__ElemType_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 0)));
                                        mercury__string__to_string__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_21, (MR_Integer) 1)));
                                        mercury__string__to_string__succeeded = (mercury__string__to_string__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            {
                                              mercury__string__to_string__V_46_46 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                            }
                                            mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_46_46, (MR_String) "array") == 0);
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                {
                                                  mercury__string__to_string__V_47_47 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_20);
                                                }
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_47_47, (MR_String) "array") == 0);
                                              }
                                          }
                                      }
                                    if (mercury__string__to_string__succeeded)
                                      {
                                        MR_Word mercury__string__to_string__TypeInfo_83_83;
                                        MR_Word mercury__string__to_string__TypeCtorInfo_84_84;
                                        MR_Word mercury__string__to_string__TypeInfo_85_85;
                                        MR_ArrayPtr mercury__string__to_string__Array_24;
                                        MR_Box mercury__string__to_string__Elem_23;
                                        MR_Box mercury__string__to_string__conv8_Array_24;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_22 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_83_83  = TypeInfo_for_T;
}
                                        mercury__string__to_string__TypeCtorInfo_84_84 = (MR_Word) &mercury__array__array__type_ctor_info_array_1;
                                        {
                                          mercury__string__to_string__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_84_84));
                                          MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_85_85, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_83_83));
                                        }
                                        {
                                          mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_85_85, mercury__string__to_string__X_10, &mercury__string__to_string__conv8_Array_24);
                                        }
                                        mercury__string__to_string__Array_24 = ((MR_ArrayPtr) mercury__string__to_string__conv8_Array_24);
                                        {
                                          mercury__string__to_string__array_to_revstrings_5_p_0(mercury__string__to_string__TypeInfo_83_83, mercury__string__to_string__NonCanon_7, (MR_ArrayPtr) mercury__string__to_string__Array_24, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                        }
                                      }
                                    else
                                      {
                                        MR_Word mercury__string__to_string__ElemType_72;
                                        MR_Word mercury__string__to_string__V_49_49;
                                        MR_Word mercury__string__to_string__V_50_50;
                                        MR_String mercury__string__to_string__V_51_51;
                                        MR_String mercury__string__to_string__V_52_52;
                                        MR_Word mercury__string__to_string__TypeCtor_60;
                                        MR_Word mercury__string__to_string__ArgTypes_61;
                                        MR_Box mercury__string__to_string__V_92_92;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_49_49  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_49_49 ;
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
	 mercury__string__to_string__TypeCtor_60  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_61  = ArgTypes;
}
                                        mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_61)) == (MR_mktag((MR_Integer) 1)));
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            mercury__string__to_string__ElemType_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 0)));
                                            mercury__string__to_string__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_61, (MR_Integer) 1)));
                                            mercury__string__to_string__succeeded = (mercury__string__to_string__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                {
                                                  mercury__string__to_string__V_51_51 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                }
                                                mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_51_51, (MR_String) "version_array") == 0);
                                                if (mercury__string__to_string__succeeded)
                                                  {
                                                    {
                                                      mercury__string__to_string__V_52_52 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_60);
                                                    }
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_52_52, (MR_String) "version_array") == 0);
                                                  }
                                              }
                                          }
                                        if (mercury__string__to_string__succeeded)
                                          {
                                            MR_Word mercury__string__to_string__TypeInfo_86_86;
                                            MR_Word mercury__string__to_string__TypeCtorInfo_87_87;
                                            MR_Word mercury__string__to_string__TypeInfo_88_88;
                                            MR_Box mercury__string__to_string__VersionArray_25;
                                            MR_Box mercury__string__to_string__Elem_62;
                                            MR_Box mercury__string__to_string__conv9_VersionArray_25;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo =  mercury__string__to_string__ElemType_72 ;
		{

    TypeInfo_for_T = TypeInfo;


		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__TypeInfo_86_86  = TypeInfo_for_T;
}
                                            mercury__string__to_string__TypeCtorInfo_87_87 = (MR_Word) &mercury__version_array__version_array__type_ctor_info_version_array_1;
                                            {
                                              mercury__string__to_string__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 0) = ((MR_Box) (mercury__string__to_string__TypeCtorInfo_87_87));
                                              MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeInfo_88_88, 1) = ((MR_Box) (mercury__string__to_string__TypeInfo_86_86));
                                            }
                                            {
                                              mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeInfo_88_88, mercury__string__to_string__X_10, &mercury__string__to_string__conv9_VersionArray_25);
                                            }
                                            mercury__string__to_string__VersionArray_25 = ((MR_Box) mercury__string__to_string__conv9_VersionArray_25);
                                            {
                                              mercury__string__to_string__version_array_to_revstrings_5_p_0(mercury__string__to_string__TypeInfo_86_86, mercury__string__to_string__NonCanon_7, mercury__string__to_string__VersionArray_25, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                            }
                                          }
                                        else
                                          {
                                            MR_Word mercury__string__to_string__V_54_54;
                                            MR_Word mercury__string__to_string__V_55_55;
                                            MR_String mercury__string__to_string__V_56_56;
                                            MR_String mercury__string__to_string__V_57_57;
                                            MR_Word mercury__string__to_string__TypeCtor_63;
                                            MR_Word mercury__string__to_string__ArgTypes_64;
                                            MR_Box mercury__string__to_string__V_93_93;
                                            MR_Word mercury__string__to_string__ElemType_68;

{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo;

	TypeInfo_for_T =  mercury__string__to_string__TypeInfo_for_T_74 ;
		{
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

}

		;}
#undef MR_PROC_LABEL
	 mercury__string__to_string__V_54_54  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__string__to_string__value_to_revstrings_prio_6_p_0

	MR_Word TypeDesc;
	MR_Word TypeCtorDesc;
	MR_Word ArgTypes;

	TypeDesc =  mercury__string__to_string__V_54_54 ;
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
	 mercury__string__to_string__TypeCtor_63  = TypeCtorDesc;
	 mercury__string__to_string__ArgTypes_64  = ArgTypes;
}
                                            mercury__string__to_string__succeeded = ((MR_tag((MR_Word) mercury__string__to_string__ArgTypes_64)) == (MR_mktag((MR_Integer) 1)));
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                mercury__string__to_string__ElemType_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 0)));
                                                mercury__string__to_string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__to_string__ArgTypes_64, (MR_Integer) 1)));
                                                mercury__string__to_string__succeeded = (mercury__string__to_string__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                                if (mercury__string__to_string__succeeded)
                                                  {
                                                    {
                                                      mercury__string__to_string__V_56_56 = mercury__type_desc__type_ctor_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                    }
                                                    mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_56_56, (MR_String) "type_info") == 0);
                                                    if (mercury__string__to_string__succeeded)
                                                      {
                                                        {
                                                          mercury__string__to_string__V_57_57 = mercury__type_desc__type_ctor_module_name_1_f_0(mercury__string__to_string__TypeCtor_63);
                                                        }
                                                        mercury__string__to_string__succeeded = (strcmp(mercury__string__to_string__V_57_57, (MR_String) "private_builtin") == 0);
                                                      }
                                                  }
                                              }
                                            if (mercury__string__to_string__succeeded)
                                              {
                                                MR_Word mercury__string__to_string__PrivateBuiltinTypeInfo_26;
                                                MR_Word mercury__string__to_string__TypeCtorInfo_90_90 = (MR_Word) &mercury__private_builtin__private_builtin__type_ctor_info_type_info_0;
                                                MR_Box mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26;

                                                {
                                                  mercury__string__to_string__det_dynamic_cast_2_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__TypeCtorInfo_90_90, mercury__string__to_string__X_10, &mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                }
                                                mercury__string__to_string__PrivateBuiltinTypeInfo_26 = ((MR_Word) mercury__string__to_string__conv10_PrivateBuiltinTypeInfo_26);
                                                {
                                                  mercury__string__to_string__private_builtin_type_info_to_revstrings_3_p_0(mercury__string__to_string__PrivateBuiltinTypeInfo_26, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                                }
                                              }
                                            else
                                              {
                                                mercury__string__to_string__ordinary_term_to_revstrings_6_p_0(mercury__string__to_string__TypeInfo_for_T_74, mercury__string__to_string__NonCanon_7, mercury__string__to_string__Priority_9, mercury__string__to_string__X_10, mercury__string__to_string__STATE_VARIABLE_Rs_0_27, mercury__string__to_string__STATE_VARIABLE_Rs_28);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_3(
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    MR_Integer mercury__string__to_string__Priority_10;
    MR_Integer mercury__string__to_string__V_13_13;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__to_string__conv1_V_13_13;

    {
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
    }
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_2(
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    MR_Integer mercury__string__to_string__Priority_10;
    MR_Integer mercury__string__to_string__V_13_13;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__to_string__conv1_V_13_13;

    {
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
    }
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_1(
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    MR_Integer mercury__string__to_string__Priority_10;
    MR_Integer mercury__string__to_string__V_13_13;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__to_string__conv1_V_13_13;

    {
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
    }
  }
}

void MR_CALL 
mercury__string__to_string__value_to_revstrings_5_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_16,
  MR_Word mercury__string__to_string__NonCanon_6,
  MR_Box mercury__string__to_string__X_8,
  MR_Word mercury__string__to_string__STATE_VARIABLE_Rs_0_11,
  MR_Word * mercury__string__to_string__STATE_VARIABLE_Rs_12)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_17 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    MR_Integer mercury__string__to_string__Priority_10;
    MR_Integer mercury__string__to_string__V_13_13;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_17, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__to_string__conv1_V_13_13;

    {
      mercury__string__to_string__conv1_V_13_13 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_17), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_13_13 = ((MR_Integer) mercury__string__to_string__conv1_V_13_13);
    mercury__string__to_string__Priority_10 = (mercury__string__to_string__V_13_13 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_for_T_16, mercury__string__to_string__NonCanon_6, mercury__string__to_string__Priority_10, mercury__string__to_string__X_8, mercury__string__to_string__STATE_VARIABLE_Rs_0_11, mercury__string__to_string__STATE_VARIABLE_Rs_12);
    }
  }
}

static void MR_CALL 
mercury__string__to_string__add_revstring_3_p_0(
  MR_String mercury__string__to_string__String_4,
  MR_Word mercury__string__to_string__RevStrings_5,
  MR_Word * mercury__string__to_string__HeadVar__3_3)
{
  {
    MR_bool mercury__string__to_string__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__to_string__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__to_string__String_4));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__to_string__RevStrings_5));
    }
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_3(
  MR_Word mercury__string__to_string__TypeInfo_for_T_12,
  MR_Word mercury__string__to_string__NonCanon_5,
  MR_Box mercury__string__to_string__X_7,
  MR_String * mercury__string__to_string__String_8)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    MR_Word mercury__string__to_string__RevStrings_9;
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__to_string__V_11_11;
    MR_Integer mercury__string__to_string__Priority_20;
    MR_Integer mercury__string__to_string__V_21_21;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__to_string__conv1_V_21_21;

    {
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
    {
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_2(
  MR_Word mercury__string__to_string__TypeInfo_for_T_12,
  MR_Word mercury__string__to_string__NonCanon_5,
  MR_Box mercury__string__to_string__X_7,
  MR_String * mercury__string__to_string__String_8)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    MR_Word mercury__string__to_string__RevStrings_9;
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__to_string__V_11_11;
    MR_Integer mercury__string__to_string__Priority_20;
    MR_Integer mercury__string__to_string__V_21_21;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__to_string__conv1_V_21_21;

    {
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
    {
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_1(
  MR_Word mercury__string__to_string__TypeInfo_for_T_12,
  MR_Word mercury__string__to_string__NonCanon_5,
  MR_Box mercury__string__to_string__X_7,
  MR_String * mercury__string__to_string__String_8)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    MR_Word mercury__string__to_string__RevStrings_9;
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__to_string__V_11_11;
    MR_Integer mercury__string__to_string__Priority_20;
    MR_Integer mercury__string__to_string__V_21_21;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__to_string__conv1_V_21_21;

    {
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
    {
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
  }
}

void MR_CALL 
mercury__string__to_string__string_ops_noncanon_impl_4_p_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_12,
  MR_Word mercury__string__to_string__NonCanon_5,
  MR_Box mercury__string__to_string__X_7,
  MR_String * mercury__string__to_string__String_8)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_Word mercury__string__to_string__TypeCtorInfo_13_13;
    MR_Word mercury__string__to_string__TypeClassInfo_for_op_table_24 = (MR_Word) &mercury__string__to_string_scalar_common_1[0];
    MR_Word mercury__string__to_string__RevStrings_9;
    MR_Word mercury__string__to_string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__to_string__V_11_11;
    MR_Integer mercury__string__to_string__Priority_20;
    MR_Integer mercury__string__to_string__V_21_21;
    MR_Box MR_CALL (* mercury__string__to_string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__to_string__TypeClassInfo_for_op_table_24, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__to_string__conv1_V_21_21;

    {
      mercury__string__to_string__conv1_V_21_21 = mercury__string__to_string__func_0(((MR_Box) mercury__string__to_string__TypeClassInfo_for_op_table_24), ((MR_Box) ((MR_Integer) 0)));
    }
    mercury__string__to_string__V_21_21 = ((MR_Integer) mercury__string__to_string__conv1_V_21_21);
    mercury__string__to_string__Priority_20 = (mercury__string__to_string__V_21_21 + (MR_Integer) 1);
    {
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__to_string__TypeInfo_for_T_12, mercury__string__to_string__NonCanon_5, mercury__string__to_string__Priority_20, mercury__string__to_string__X_7, mercury__string__to_string__V_10_10, &mercury__string__to_string__RevStrings_9);
    }
    mercury__string__to_string__TypeCtorInfo_13_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__reverse_2_p_0(mercury__string__to_string__TypeCtorInfo_13_13, mercury__string__to_string__RevStrings_9, &mercury__string__to_string__V_11_11);
    }
    {
      *mercury__string__to_string__String_8 = mercury__string__append_list_1_f_0(mercury__string__to_string__V_11_11);
    }
  }
}

MR_String MR_CALL 
mercury__string__to_string__string_ops_impl_2_f_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_8,
  MR_Box mercury__string__to_string__Univ_5)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__String_6;

    {
      mercury__string__to_string__string_ops_noncanon_impl_4_p_1(mercury__string__to_string__TypeInfo_for_T_8, (MR_Integer) 1, mercury__string__to_string__Univ_5, &mercury__string__to_string__String_6);
    }
    return mercury__string__to_string__String_6;
  }
}

MR_String MR_CALL 
mercury__string__to_string__string_impl_1_f_0(
  MR_Word mercury__string__to_string__TypeInfo_for_T_7,
  MR_Box mercury__string__to_string__Univ_3)
{
  {
    MR_bool mercury__string__to_string__succeeded;
    MR_String mercury__string__to_string__String_4;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    {
      mercury__string__to_string__string_ops_noncanon_impl_4_p_1(mercury__string__to_string__TypeInfo_for_T_7, (MR_Integer) 1, mercury__string__to_string__Univ_3, &mercury__string__to_string__String_4);
    }
    return mercury__string__to_string__String_4;
  }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string.to_string. */
