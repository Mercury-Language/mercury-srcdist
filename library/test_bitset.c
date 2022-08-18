/*
** Automatically generated from `test_bitset.m'
** by the Mercury compiler,
** version rotd-2022-08-18
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


// :- module test_bitset.
// :- implementation.

/*
INIT mercury__test_bitset__init
ENDINIT
*/

#include "test_bitset.mih"


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
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_0[2];

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0;

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_1[3];

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1;

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_2[4];

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2;

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0[1];

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1[1];

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2[1];

static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1[3];

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1[3];

static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1[3];

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__286__1_3_p_0(
  MR_Word TypeClassInfo_for_enum_25,
  MR_Word SetB_12,
  MR_Box * LambdaHeadVar__1_20,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__285__1_3_p_0(
  MR_Word TypeClassInfo_for_enum_25,
  MR_Word SetA_11,
  MR_Box * LambdaHeadVar__1_19,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_30,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word HeadVar__1_8,
  MR_Integer HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Integer HeadVar__5_12,
  MR_Box HeadVar__6_13,
  MR_Box * HeadVar__7_14);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word HeadVar__1_8,
  MR_Integer HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Integer HeadVar__5_12,
  MR_Integer HeadVar__6_13,
  MR_Integer * HeadVar__7_14);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word HeadVar__1_8,
  MR_Integer HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Integer HeadVar__5_12,
  MR_Word HeadVar__6_13,
  MR_Word * HeadVar__7_14);

static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_String Op_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
  MR_Word TypeClassInfo_for_enum_24,
  MR_String Op_6,
  MR_Word TesterA_7,
  MR_Word TesterB_8,
  MR_Word Tester_9,
  MR_Word * Result_10);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__test_bitset_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_4[1][1];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_5[1][2];

static /* final */ const MR_Integer mercury__test_bitset_scalar_common_6[2][2];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[2][6];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_8[1][7];




static /* final */ const MR_Box mercury__test_bitset_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_4[1][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_5[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0])))),
    ((MR_Box) (((MR_Box) ((MR_Unsigned) 0U))))
  },
};

static /* final */ const MR_Integer mercury__test_bitset_scalar_common_6[2][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_6[1])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__test_bitset__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__test_bitset__list__pti_list_1__pseudo_1))
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
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0 = {
  (MR_String) "zero_argument",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1 = {
  (MR_String) "one_argument",
  INT16_C(3),
  UINT16_C(6),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_2[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2 = {
  (MR_String) "two_arguments",
  INT16_C(4),
  UINT16_C(14),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2
};

static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1[3] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1,
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2,
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0
};

static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__test_bitset____Unify____bitset_error_1_0_10001)),
  ((MR_Box) (mercury__test_bitset____Compare____bitset_error_1_0_10001)),
  (MR_String) "test_bitset",
  (MR_String) "bitset_error",
  { mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1 },
  { mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1,

};

const MR_TypeCtorInfo_Struct mercury__test_bitset__test_bitset__type_ctor_info_test_bitset_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__test_bitset____Unify____test_bitset_1_0_10001)),
  ((MR_Box) (mercury__test_bitset____Compare____test_bitset_1_0_10001)),
  (MR_String) "test_bitset",
  (MR_String) "test_bitset",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__286__1_3_p_0(
  MR_Word TypeClassInfo_for_enum_25,
  MR_Word SetB_12,
  MR_Box * LambdaHeadVar__1_20,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Word TypeInfo_29_29;

{
#define MR_PROC_LABEL mercury__test_bitset__IntroducedFrom__pred__member__286__1_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
  mercury__set_ordlist__member_2_p_1(TypeInfo_29_29, LambdaHeadVar__1_20, SetB_12, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__285__1_3_p_0(
  MR_Word TypeClassInfo_for_enum_25,
  MR_Word SetA_11,
  MR_Box * LambdaHeadVar__1_19,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__tree_bitset__member_2_p_1(TypeClassInfo_for_enum_25, LambdaHeadVar__1_19, SetA_11, cont, cont_env_ptr);
}

void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0(
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
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  {
    TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__pair____Compare____pair_2_0(TypeInfo_8_8, TypeInfo_10_10, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0(
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
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  {
    TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
    MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_7_7, TypeInfo_9_9, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0(
  MR_Word TypeInfo_for_T_66,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_64 == CastY_65);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_114 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;
                MR_Integer Var_119;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_114 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_119  = Res;
}
                succeeded = (Var_119 < (MR_Integer) 0);
                if (succeeded)
                  SubResult1_6 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_119 == (MR_Integer) 0);
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
                  MR_Word TypeInfo_101_101;
                  MR_Word TypeInfo_103_103;

                  {
                    TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_101_101, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
                    MR_hl_field(MR_mktag(0), TypeInfo_101_101, 1) = ((MR_Box) (TypeInfo_for_T_66));
                  }
                  {
                    TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_103_103, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
                    MR_hl_field(MR_mktag(0), TypeInfo_103_103, 1) = ((MR_Box) (TypeInfo_for_T_66));
                  }
                  mercury__pair____Compare____pair_2_0(TypeInfo_101_101, TypeInfo_103_103, HeadVar__1_1, (MR_Word) (Var_113), (MR_Word) (ArgY2_8));
                }
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_108 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_27;
                MR_Integer Var_115;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_108 ;
	S2 = ArgY1_26 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_115  = Res;
}
                succeeded = (Var_115 < (MR_Integer) 0);
                if (succeeded)
                  SubResult1_27 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_115 == (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_27 = (MR_Integer) 0;
                  else
                    SubResult1_27 = (MR_Integer) 2;
                }
                succeeded = (SubResult1_27 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_27;
                else
                {
                  MR_Word SubResult2_30;
                  MR_Word TypeInfo_88_88;
                  MR_Word TypeInfo_90_90;

                  {
                    TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_88_88, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
                    MR_hl_field(MR_mktag(0), TypeInfo_88_88, 1) = ((MR_Box) (TypeInfo_for_T_66));
                  }
                  {
                    TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_90_90, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
                    MR_hl_field(MR_mktag(0), TypeInfo_90_90, 1) = ((MR_Box) (TypeInfo_for_T_66));
                  }
                  mercury__pair____Compare____pair_2_0(TypeInfo_88_88, TypeInfo_90_90, &SubResult2_30, (MR_Word) (Var_107), (MR_Word) (ArgY2_29));
                  succeeded = (SubResult2_30 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_30;
                  else
                  {
                    MR_Word TypeInfo_94_94;
                    MR_Word TypeInfo_96_96;

                    {
                      TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_94_94, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
                      MR_hl_field(MR_mktag(0), TypeInfo_94_94, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    {
                      TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
                      MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    mercury__pair____Compare____pair_2_0(TypeInfo_94_94, TypeInfo_96_96, HeadVar__1_1, (MR_Word) (Var_106), (MR_Word) (ArgY3_32));
                  }
                }
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
          MR_Word Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_110 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_111 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_112 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_54 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_55;
                MR_Integer Var_117;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_112 ;
	S2 = ArgY1_54 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_117  = Res;
}
                succeeded = (Var_117 < (MR_Integer) 0);
                if (succeeded)
                  SubResult1_55 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_117 == (MR_Integer) 0);
                  if (succeeded)
                    SubResult1_55 = (MR_Integer) 0;
                  else
                    SubResult1_55 = (MR_Integer) 2;
                }
                succeeded = (SubResult1_55 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_55;
                else
                {
                  MR_Word SubResult2_58;
                  MR_Word TypeInfo_69_69;
                  MR_Word TypeInfo_71_71;

                  {
                    TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_69_69, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
                    MR_hl_field(MR_mktag(0), TypeInfo_69_69, 1) = ((MR_Box) (TypeInfo_for_T_66));
                  }
                  {
                    TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_71_71, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
                    MR_hl_field(MR_mktag(0), TypeInfo_71_71, 1) = ((MR_Box) (TypeInfo_for_T_66));
                  }
                  mercury__pair____Compare____pair_2_0(TypeInfo_69_69, TypeInfo_71_71, &SubResult2_58, (MR_Word) (Var_111), (MR_Word) (ArgY2_57));
                  succeeded = (SubResult2_58 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_58;
                  else
                  {
                    MR_Word SubResult3_61;
                    MR_Word TypeInfo_75_75;
                    MR_Word TypeInfo_77_77;

                    {
                      TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_75_75, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
                      MR_hl_field(MR_mktag(0), TypeInfo_75_75, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    {
                      TypeInfo_77_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_77_77, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
                      MR_hl_field(MR_mktag(0), TypeInfo_77_77, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    mercury__pair____Compare____pair_2_0(TypeInfo_75_75, TypeInfo_77_77, &SubResult3_61, (MR_Word) (Var_110), (MR_Word) (ArgY3_60));
                    succeeded = (SubResult3_61 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_61;
                    else
                    {
                      MR_Word TypeInfo_81_81;
                      MR_Word TypeInfo_83_83;

                      {
                        TypeInfo_81_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_81_81, 0) = ((MR_Box) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1));
                        MR_hl_field(MR_mktag(0), TypeInfo_81_81, 1) = ((MR_Box) (TypeInfo_for_T_66));
                      }
                      {
                        TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_83_83, 0) = ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1));
                        MR_hl_field(MR_mktag(0), TypeInfo_83_83, 1) = ((MR_Box) (TypeInfo_for_T_66));
                      }
                      mercury__pair____Compare____pair_2_0(TypeInfo_81_81, TypeInfo_83_83, HeadVar__1_1, (MR_Word) (Var_109), (MR_Word) (ArgY4_63));
                    }
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeCtorInfo_54_54;
          MR_Word TypeInfo_55_55;
          MR_Word TypeCtorInfo_56_56;
          MR_Word TypeInfo_57_57;
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
            {
              TypeCtorInfo_54_54 = (MR_Word) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1);
              TypeCtorInfo_56_56 = (MR_Word) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1);
              {
                TypeInfo_55_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_55_55, 0) = ((MR_Box) (TypeCtorInfo_54_54));
                MR_hl_field(MR_mktag(0), TypeInfo_55_55, 1) = ((MR_Box) (TypeInfo_for_T_23));
              }
              {
                TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_57_57, 0) = ((MR_Box) (TypeCtorInfo_56_56));
                MR_hl_field(MR_mktag(0), TypeInfo_57_57, 1) = ((MR_Box) (TypeInfo_for_T_23));
              }
              succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_55_55, TypeInfo_57_57, (MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeCtorInfo_24_24;
          MR_Word TypeCtorInfo_26_26;
          MR_Word TypeInfo_31_31;
          MR_Word TypeInfo_33_33;
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            if (succeeded)
            {
              TypeCtorInfo_24_24 = (MR_Word) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1);
              TypeCtorInfo_26_26 = (MR_Word) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1);
              {
                TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (TypeCtorInfo_24_24));
                MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_23));
              }
              {
                TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (TypeCtorInfo_26_26));
                MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_23));
              }
              succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_31_31, TypeInfo_33_33, (MR_Word) (ArgX2_9), (MR_Word) (ArgY2_10));
              if (succeeded)
                succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_31_31, TypeInfo_33_33, (MR_Word) (ArgX3_11), (MR_Word) (ArgY3_12));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_36_36;
          MR_Word TypeCtorInfo_38_38;
          MR_Word TypeInfo_49_49;
          MR_Word TypeInfo_51_51;
          MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_16;
          MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_18;
          MR_Word ArgX4_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_14 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
            if (succeeded)
            {
              TypeCtorInfo_36_36 = (MR_Word) (&mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1);
              TypeCtorInfo_38_38 = (MR_Word) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1);
              {
                TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_49_49, 0) = ((MR_Box) (TypeCtorInfo_36_36));
                MR_hl_field(MR_mktag(0), TypeInfo_49_49, 1) = ((MR_Box) (TypeInfo_for_T_23));
              }
              {
                TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_51_51, 0) = ((MR_Box) (TypeCtorInfo_38_38));
                MR_hl_field(MR_mktag(0), TypeInfo_51_51, 1) = ((MR_Box) (TypeInfo_for_T_23));
              }
              succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_49_49, TypeInfo_51_51, (MR_Word) (ArgX2_15), (MR_Word) (ArgY2_16));
              if (succeeded)
              {
                succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_49_49, TypeInfo_51_51, (MR_Word) (ArgX3_17), (MR_Word) (ArgY3_18));
                if (succeeded)
                  succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_49_49, TypeInfo_51_51, (MR_Word) (ArgX4_19), (MR_Word) (ArgY4_20));
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__foldl_4_p_1(
  MR_Word TypeInfo_for_Acc_17,
  MR_Word TypeClassInfo_for_enum_16,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_8,
  MR_Box * Acc_9)
{
  MR_bool succeeded;
  MR_Word TypeInfo_20_20;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetListA_10;
  MR_Word SetListB_11;
  MR_Box AccA_12;
  MR_Box AccB_13;
  MR_Word Var_25;
  MR_Word Var_29;
  MR_Word TypeInfo_22_22;
  MR_Integer PolyConst1_21;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_16, SetA_6, &SetListA_10);
  SetListB_11 = (MR_Word) (SetB_7);
  Var_25 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1))
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));

    succeeded = mercury__tree_bitset__do_foldl_pred_4_p_3(TypeInfo_for_Acc_17, TypeClassInfo_for_enum_16, Pred_5, Var_28, Acc0_8, &AccA_12);
  }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));

    succeeded = mercury__tree_bitset__leaf_foldl_pred_4_p_3(TypeInfo_for_Acc_17, TypeClassInfo_for_enum_16, Pred_5, Var_26, Acc0_8, &AccA_12);
  }
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_20_20  = TypeInfo;
}
    Var_29 = (MR_Word) (SetB_7);
    succeeded = mercury__list__foldl_4_p_3(TypeInfo_20_20, TypeInfo_for_Acc_17, Pred_5, Var_29, Acc0_8, &AccB_13);
    if (succeeded)
    {
      PolyConst1_21 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = PolyConst1_21 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_22_22, SetListA_10, SetListB_11);
      if (succeeded)
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_17, AccA_12, AccB_13);
      if (succeeded)
        *Acc_9 = AccA_12;
      else
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__foldl_4_p_0(
  MR_Word TypeInfo_for_Acc_17,
  MR_Word TypeClassInfo_for_enum_16,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_8,
  MR_Box * Acc_9)
{
  MR_bool succeeded;
  MR_Word TypeInfo_20_20;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetListA_10;
  MR_Word SetListB_11;
  MR_Box AccA_12;
  MR_Box AccB_13;
  MR_Word Var_25;
  MR_Word Var_29;
  MR_Word TypeInfo_22_22;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_16, SetA_6, &SetListA_10);
  SetListB_11 = (MR_Word) (SetB_7);
  Var_25 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1))
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));

    mercury__tree_bitset__do_foldl_pred_4_p_0(TypeInfo_for_Acc_17, TypeClassInfo_for_enum_16, Pred_5, Var_28, Acc0_8, &AccA_12);
  }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));

    mercury__tree_bitset__leaf_foldl_pred_4_p_0(TypeInfo_for_Acc_17, TypeClassInfo_for_enum_16, Pred_5, Var_26, Acc0_8, &AccA_12);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_20_20  = TypeInfo;
}
  Var_29 = (MR_Word) (SetB_7);
  mercury__list__foldl_4_p_0(TypeInfo_20_20, TypeInfo_for_Acc_17, Pred_5, Var_29, Acc0_8, &AccB_13);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_22_22, SetListA_10, SetListB_11);
  if (succeeded)
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_17, AccA_12, AccB_13);
  if (succeeded)
    *Acc_9 = AccA_12;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
      return;
    }
}

MR_Box MR_CALL 
mercury__test_bitset__foldl_3_f_0(
  MR_Word TypeInfo_for_Acc_17,
  MR_Word TypeClassInfo_for_enum_16,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_8)
{
  MR_bool succeeded;
  MR_Box Acc_9;
  MR_Word TypeInfo_20_20;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetListA_10;
  MR_Word SetListB_11;
  MR_Box AccA_12;
  MR_Box AccB_13;
  MR_Word Var_26;
  MR_Word Var_30;
  MR_Word TypeInfo_22_22;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_16, SetA_6, &SetListA_10);
  SetListB_11 = (MR_Word) (SetB_7);
  Var_26 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_26)) == (MR_Integer) 1))
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Pred_5, TypeClassInfo_for_enum_16, Var_29, Acc0_8, &AccA_12);
  }
  else
  {
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Pred_5, TypeClassInfo_for_enum_16, Var_27, Acc0_8, &AccA_12);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_20_20  = TypeInfo;
}
  Var_30 = (MR_Word) (SetB_7);
  AccB_13 = mercury__list__foldl_3_f_0(TypeInfo_20_20, TypeInfo_for_Acc_17, Pred_5, Var_30, Acc0_8);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_22_22, SetListA_10, SetListB_11);
  if (succeeded)
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_17, AccA_12, AccB_13);
  if (succeeded)
    Acc_9 = AccA_12;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.foldl\'/3", (MR_String) "failed");
  return Acc_9;
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
      MR_Box Var_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      if (((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1))
      {
        MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_enum_20, Var_19, HeadVar__3_3, &Var_17);
      }
      else
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_enum_20, Var_16, HeadVar__3_3, &Var_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      MR_Integer Var_18;
      MR_Box Var_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_enum_20, (MR_Integer) 0, Var_14, Var_15, Var_18, HeadVar__3_3, &Var_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_30,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word HeadVar__1_8,
  MR_Integer HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Integer HeadVar__5_12,
  MR_Box HeadVar__6_13,
  MR_Box * HeadVar__7_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_11 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__7_14 = HeadVar__6_13;
    else
    {
      succeeded = (HeadVar__5_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box Var_15;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

        Var_15 = mercury__tree_bitset__index_to_enum_1_f_0(TypeClassInfo_for_enum_26, HeadVar__3_10);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
        *HeadVar__7_14 = func_0(((MR_Box) (Var_30)), Var_15, HeadVar__6_13);
      }
      else
      {
        MR_Integer Var_16 = (HeadVar__5_12 >> 1);
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_31;
        MR_Unsigned Var_32 = ~((MR_Unsigned) 0U);

        Var_31 = (Var_32 << Var_16);
        Var_18 = ~(Var_31);
        Var_19 = (Var_18 & HeadVar__4_11);
        Var_21 = (HeadVar__4_11 >> Var_16);
        Var_20 = (Var_18 & Var_21);
        switch (HeadVar__1_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) HeadVar__3_10 + (MR_Unsigned) Var_16);
              MR_Box Var_25;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Integer next_value_of_HeadVar__5_12;
              MR_Box next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_30, TypeClassInfo_for_enum_26, HeadVar__1_8, Var_24, Var_20, Var_16, HeadVar__6_13, &Var_25);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_11 = Var_19;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_25;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box Var_22;
              MR_Integer Var_23;
              MR_Integer next_value_of_HeadVar__3_10;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Integer next_value_of_HeadVar__5_12;
              MR_Box next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_30, TypeClassInfo_for_enum_26, HeadVar__1_8, HeadVar__3_10, Var_19, Var_16, HeadVar__6_13, &Var_22);
              Var_23 = (MR_Integer) ((MR_Unsigned) HeadVar__3_10 + (MR_Unsigned) Var_16);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_10 = Var_23;
              next_value_of_HeadVar__4_11 = Var_20;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_22;
              HeadVar__3_10 = next_value_of_HeadVar__3_10;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__test_bitset__filter_4_p_0(
  MR_Word TypeClassInfo_for_enum_22,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_8,
  MR_Word * ResultOut_9)
{
  MR_bool succeeded;
  MR_Word TypeInfo_25_25;
  MR_Word TypeInfo_14_44;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetListA_10;
  MR_Word SetListB_11;
  MR_Word InSetA_12;
  MR_Word OutSetA_13;
  MR_Word InSetB_14;
  MR_Word OutSetB_15;
  MR_Word InSetListA_16;
  MR_Word InSetListB_17;
  MR_Word OutSetListA_18;
  MR_Word OutSetListB_19;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_53;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_66;
  MR_Word TypeInfo_29_29;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_37_37;
  MR_Integer PolyConst1_32;
  MR_Integer PolyConst1_36;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_22, SetA_6, &SetListA_10);
  SetListB_11 = (MR_Word) (SetB_7);
  Var_53 = (MR_Word) (SetA_6);
  if (((MR_tag((MR_Word) Var_53)) == (MR_Integer) 1))
  {
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_22, TypeClassInfo_for_enum_22, Var_56, (MR_Word) ((MR_Unsigned) 0U), &Var_40);
  }
  else
  {
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_53, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_22, TypeClassInfo_for_enum_22, Var_54, (MR_Word) ((MR_Unsigned) 0U), &Var_40);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_14_44  = TypeInfo;
}
  mercury__list__filter_4_p_0(TypeInfo_14_44, Pred_5, Var_40, &Var_41, &Var_42);
  InSetA_12 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_22, Var_41);
  OutSetA_13 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_22, Var_42);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_25_25  = TypeInfo;
}
  Var_59 = (MR_Word) (SetB_7);
  mercury__list__filter_4_p_0(TypeInfo_25_25, Pred_5, Var_59, &Var_60, &Var_61);
  if ((Var_60 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_62 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_63 = (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0));
    MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_25_25, Var_63, Var_64, &Var_62);
  }
  InSetB_14 = (MR_Word) (Var_62);
  if ((Var_61 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_66 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_67 = (MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 0));
    MR_Word Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_61, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_25_25, Var_67, Var_68, &Var_66);
  }
  OutSetB_15 = (MR_Word) (Var_66);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_22, InSetA_12, &InSetListA_16);
  InSetListB_17 = (MR_Word) (InSetB_14);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_22, OutSetA_13, &OutSetListA_18);
  OutSetListB_19 = (MR_Word) (OutSetB_15);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_29_29, SetListA_10, SetListB_11);
  if (succeeded)
  {
    PolyConst1_32 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_22 ;
	Index = PolyConst1_32 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_33  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_33_33, InSetListA_16, InSetListB_17);
    if (succeeded)
    {
      PolyConst1_36 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_22 ;
	Index = PolyConst1_36 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_37_37  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_37_37, OutSetListA_18, OutSetListB_19);
    }
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ResultIn_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InSetA_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InSetB_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ResultOut_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutSetA_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OutSetB_15));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.filter\'/4", (MR_String) "failed");
      return;
    }
}

MR_Word MR_CALL 
mercury__test_bitset__filter_2_f_0(
  MR_Word TypeClassInfo_for_enum_16,
  MR_Word Pred_4,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Result_7;
  MR_Word TypeInfo_19_19;
  MR_Word TypeInfo_11_32;
  MR_Word SetA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetListA_8;
  MR_Word SetListB_9;
  MR_Word InSetA_10;
  MR_Word InSetB_11;
  MR_Word InSetListA_12;
  MR_Word InSetListB_13;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_41;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word TypeInfo_22_22;
  MR_Word TypeInfo_26_26;
  MR_Integer PolyConst1_25;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_16, SetA_5, &SetListA_8);
  SetListB_9 = (MR_Word) (SetB_6);
  Var_41 = (MR_Word) (SetA_5);
  if (((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1))
  {
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_16, TypeClassInfo_for_enum_16, Var_44, (MR_Word) ((MR_Unsigned) 0U), &Var_29);
  }
  else
  {
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_16, TypeClassInfo_for_enum_16, Var_42, (MR_Word) ((MR_Unsigned) 0U), &Var_29);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_32  = TypeInfo;
}
  mercury__list__filter_3_p_0(TypeInfo_11_32, Pred_4, Var_29, &Var_30);
  InSetA_10 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_16, Var_30);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_19_19  = TypeInfo;
}
  Var_47 = (MR_Word) (SetB_6);
  mercury__list__filter_3_p_0(TypeInfo_19_19, Pred_4, Var_47, &Var_48);
  if ((Var_48 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_49 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_50 = (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_19_19, Var_50, Var_51, &Var_49);
  }
  InSetB_11 = (MR_Word) (Var_49);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_16, InSetA_10, &InSetListA_12);
  InSetListB_13 = (MR_Word) (InSetB_11);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_22_22, SetListA_8, SetListB_9);
  if (succeeded)
  {
    PolyConst1_25 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_16 ;
	Index = PolyConst1_25 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_26_26, InSetListA_12, InSetListB_13);
  }
  if (succeeded)
    {
      Result_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Result_7, 0) = ((MR_Box) (InSetA_10));
      MR_hl_field(MR_mktag(0), Result_7, 1) = ((MR_Box) (InSetB_11));
    }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.filter\'/2", (MR_String) "failed");
  return Result_7;
}

MR_bool MR_CALL 
mercury__test_bitset__all_true_2_p_0(
  MR_Word TypeClassInfo_for_enum_10,
  MR_Word Pred_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word SetA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Var_15 = (MR_Word) (SetA_4);

  if (((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1))
  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));

    succeeded = mercury__tree_bitset__interior_all_true_2_p_0(TypeClassInfo_for_enum_10, Pred_3, Var_18);
  }
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));

    succeeded = mercury__tree_bitset__leaf_all_true_2_p_0(TypeClassInfo_for_enum_10, Pred_3, Var_16);
  }
  if (succeeded)
  {
    MR_Word TypeInfo_12_12;
    MR_Word Var_19;

{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_10 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_12_12  = TypeInfo;
}
    Var_19 = (MR_Word) (SetB_5);
    succeeded = mercury__list__all_true_2_p_0(TypeInfo_12_12, Pred_3, Var_19);
    if (!(succeeded))
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.all_true\'/2", (MR_String) "tree_bitset but not set_ordlist");
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_String Var_8;
    MR_String Var_9;
    MR_Word Var_20;

{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_10 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_14_14  = TypeInfo;
}
    Var_20 = (MR_Word) (SetB_5);
    succeeded = mercury__list__all_true_2_p_0(TypeInfo_14_14, Pred_3, Var_20);
    if (succeeded)
    {
      Var_8 = (MR_String) "predicate \140test_bitset.all_true\'/2";
      Var_9 = (MR_String) "set_ordlist but not tree_bitset";
      mercury__require__unexpected_2_p_0(Var_8, Var_9);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Integer MR_CALL 
mercury__test_bitset__count_1_f_0(
  MR_Word TypeClassInfo_for_enum_10,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Integer Count_5;
  MR_Word TypeInfo_12_12;
  MR_Word SetA_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer CountA_6;
  MR_Integer CountB_7;
  MR_Word Var_18 = (MR_Word) (SetA_3);
  MR_Word Var_24;

  if (((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1))
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_10, Var_21, (MR_Integer) 0, &CountA_6);
  }
  else
  {
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_10, Var_19, (MR_Integer) 0, &CountA_6);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__count_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_10 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_12_12  = TypeInfo;
}
  Var_24 = (MR_Word) (SetB_4);
  mercury__list__length_acc_3_p_0(TypeInfo_12_12, Var_24, (MR_Integer) 0, &CountB_7);
  succeeded = (CountA_6 == CountB_7);
  if (succeeded)
    Count_5 = CountA_6;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.count\'/1", (MR_String) "failed");
  return Count_5;
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
      MR_Integer Var_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      if (((MR_tag((MR_Word) Var_15)) == (MR_Integer) 1))
      {
        MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 1))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_20, Var_19, HeadVar__3_3, &Var_17);
      }
      else
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_20, Var_16, HeadVar__3_3, &Var_17);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      MR_Unsigned Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
      MR_Integer Var_18;
      MR_Integer Var_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_enum_20, (MR_Integer) 0, Var_14, Var_15, Var_18, HeadVar__3_3, &Var_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word HeadVar__1_8,
  MR_Integer HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Integer HeadVar__5_12,
  MR_Integer HeadVar__6_13,
  MR_Integer * HeadVar__7_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_11 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__7_14 = HeadVar__6_13;
    else
    {
      succeeded = (HeadVar__5_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box Var_15;

        Var_15 = mercury__tree_bitset__index_to_enum_1_f_0(TypeClassInfo_for_enum_26, HeadVar__3_10);
        *HeadVar__7_14 = (MR_Integer) ((MR_Unsigned) HeadVar__6_13 + (MR_Unsigned) 1);
      }
      else
      {
        MR_Integer Var_16 = (HeadVar__5_12 >> 1);
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_36;
        MR_Unsigned Var_37 = ~((MR_Unsigned) 0U);

        Var_36 = (Var_37 << Var_16);
        Var_18 = ~(Var_36);
        Var_19 = (Var_18 & HeadVar__4_11);
        Var_21 = (HeadVar__4_11 >> Var_16);
        Var_20 = (Var_18 & Var_21);
        switch (HeadVar__1_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) HeadVar__3_10 + (MR_Unsigned) Var_16);
              MR_Integer Var_25;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Integer next_value_of_HeadVar__5_12;
              MR_Integer next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_enum_26, HeadVar__1_8, Var_24, Var_20, Var_16, HeadVar__6_13, &Var_25);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_11 = Var_19;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_25;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer Var_22;
              MR_Integer Var_23;
              MR_Integer next_value_of_HeadVar__3_10;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Integer next_value_of_HeadVar__5_12;
              MR_Integer next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_enum_26, HeadVar__1_8, HeadVar__3_10, Var_19, Var_16, HeadVar__6_13, &Var_22);
              Var_23 = (MR_Integer) ((MR_Unsigned) HeadVar__3_10 + (MR_Unsigned) Var_16);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_10 = Var_23;
              next_value_of_HeadVar__4_11 = Var_20;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_22;
              HeadVar__3_10 = next_value_of_HeadVar__3_10;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__to_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word Set_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__test_bitset__bitset_to_set_1_f_0(TypeClassInfo_for_enum_4, Set_3);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__test_bitset__bitset_to_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_8,
  MR_Word HeadVar__1_1)
{
  MR_Word Set_5;
  MR_Word TypeInfo_10_10;
  MR_Word SortedList_6;
  MR_Word Var_11;

  SortedList_6 = mercury__test_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_enum_8, HeadVar__1_1);
{
#define MR_PROC_LABEL mercury__test_bitset__bitset_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_8 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_10  = TypeInfo;
}
  if ((SortedList_6 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_11 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_12 = (MR_hl_field(MR_mktag(1), SortedList_6, (MR_Integer) 0));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SortedList_6, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_10_10, Var_12, Var_13, &Var_11);
  }
  Set_5 = (MR_Word) (Var_11);
  return Set_5;
}

MR_Word MR_CALL 
mercury__test_bitset__from_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word Set_3)
{
  MR_Word HeadVar__2_2;
  MR_Word SortedList_7 = (MR_Word) (Set_3);

  HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_4, SortedList_7);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__test_bitset__set_to_bitset_1_f_0(
  MR_Word TypeClassInfo_for_enum_8,
  MR_Word Set_3)
{
  MR_Word HeadVar__2_2;
  MR_Word SortedList_6 = (MR_Word) (Set_3);

  HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_8, SortedList_6);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__test_bitset__to_sorted_list_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word A_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_enum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__to_sorted_list_1_f_0(
  MR_Word TypeClassInfo_for_enum_10,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word List_5;
  MR_Word A_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word ListA_6;
  MR_Word ListB_7;
  MR_Word Var_25 = (MR_Word) (A_3);
  MR_Word TypeInfo_14_14;

  if (((MR_tag((MR_Word) Var_25)) == (MR_Integer) 1))
  {
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_10, TypeClassInfo_for_enum_10, Var_28, (MR_Word) ((MR_Unsigned) 0U), &ListA_6);
  }
  else
  {
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0))));

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_10, TypeClassInfo_for_enum_10, Var_26, (MR_Word) ((MR_Unsigned) 0U), &ListA_6);
  }
  ListB_7 = (MR_Word) (B_4);
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_10 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_14_14  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_14_14, ListA_6, ListB_7);
  if (succeeded)
    List_5 = ListB_7;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140test_bitset.to_sorted_list\'/1", (MR_String) "failed");
  return List_5;
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word Var_16;

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_enum_20, Var_10, HeadVar__3_3, &Var_13);
      Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
      if (((MR_tag((MR_Word) Var_16)) == (MR_Integer) 1))
      {
        MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__2_2 = Var_19;
        MR_Word next_value_of_HeadVar__3_3 = Var_13;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
      else
      {
        MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_enum_20, Var_17, Var_13, HeadVar__4_4);
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_13;
    MR_Integer Var_15;
    MR_Unsigned Var_16;
    MR_Integer Var_19;

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_enum_20, Var_10, HeadVar__3_3, &Var_13);
    Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_19  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_enum_20, (MR_Integer) 1, Var_15, Var_16, Var_19, Var_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word HeadVar__1_8,
  MR_Integer HeadVar__3_10,
  MR_Unsigned HeadVar__4_11,
  MR_Integer HeadVar__5_12,
  MR_Word HeadVar__6_13,
  MR_Word * HeadVar__7_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__4_11 == (MR_Unsigned) 0U);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *HeadVar__7_14 = HeadVar__6_13;
    else
    {
      succeeded = (HeadVar__5_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box Var_15;

        Var_15 = mercury__tree_bitset__index_to_enum_1_f_0(TypeClassInfo_for_enum_26, HeadVar__3_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = Var_15;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__6_13));
        }
      }
      else
      {
        MR_Integer Var_16 = (HeadVar__5_12 >> 1);
        MR_Unsigned Var_18;
        MR_Unsigned Var_19;
        MR_Unsigned Var_20;
        MR_Unsigned Var_21;
        MR_Unsigned Var_40;
        MR_Unsigned Var_41 = ~((MR_Unsigned) 0U);

        Var_40 = (Var_41 << Var_16);
        Var_18 = ~(Var_40);
        Var_19 = (Var_18 & HeadVar__4_11);
        Var_21 = (HeadVar__4_11 >> Var_16);
        Var_20 = (Var_18 & Var_21);
        switch (HeadVar__1_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) HeadVar__3_10 + (MR_Unsigned) Var_16);
              MR_Word Var_25;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Integer next_value_of_HeadVar__5_12;
              MR_Word next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_35, TypeClassInfo_for_enum_26, HeadVar__1_8, Var_24, Var_20, Var_16, HeadVar__6_13, &Var_25);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__4_11 = Var_19;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_25;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_22;
              MR_Integer Var_23;
              MR_Integer next_value_of_HeadVar__3_10;
              MR_Unsigned next_value_of_HeadVar__4_11;
              MR_Integer next_value_of_HeadVar__5_12;
              MR_Word next_value_of_HeadVar__6_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_35, TypeClassInfo_for_enum_26, HeadVar__1_8, HeadVar__3_10, Var_19, Var_16, HeadVar__6_13, &Var_22);
              Var_23 = (MR_Integer) ((MR_Unsigned) HeadVar__3_10 + (MR_Unsigned) Var_16);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__3_10 = Var_23;
              next_value_of_HeadVar__4_11 = Var_20;
              next_value_of_HeadVar__5_12 = Var_16;
              next_value_of_HeadVar__6_13 = Var_22;
              HeadVar__3_10 = next_value_of_HeadVar__3_10;
              HeadVar__4_11 = next_value_of_HeadVar__4_11;
              HeadVar__5_12 = next_value_of_HeadVar__5_12;
              HeadVar__6_13 = next_value_of_HeadVar__6_13;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__test_bitset__sorted_list_to_set_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word A_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__sorted_list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_9,
  MR_Word List_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_11_11;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_12;

  Var_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_9, List_3);
{
#define MR_PROC_LABEL mercury__test_bitset__sorted_list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_9 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_11  = TypeInfo;
}
  if ((List_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box Var_13 = (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 0));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 1))));

    mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_11_11, Var_13, Var_14, &Var_12);
  }
  Var_8 = (MR_Word) (Var_12);
  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_7));
    MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (Var_8));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_enum_9, (MR_String) "sorted_list_to_set", Var_6, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__test_bitset__list_to_set_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word A_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__list_to_set_1_f_0(TypeClassInfo_for_enum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_9,
  MR_Word List_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_11_11;
  MR_Word TypeInfo_8_14;
  MR_Word Var_6;
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_12;
  MR_Integer Var_15;
  MR_Word Var_17;
  MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_9 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_14  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_14, List_3, (MR_Integer) 0, &Var_15);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_14, Var_15, List_3, &Var_12);
  Var_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_9, Var_12);
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_9 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_11  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_11_11, List_3, (MR_Integer) 0, &Var_18);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_11_11, Var_18, List_3, &Var_17);
  Var_8 = (MR_Word) (Var_17);
  {
    Var_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_7));
    MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (Var_8));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_enum_9, (MR_String) "list_to_set", Var_6, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__test_bitset__divide_by_set_4_p_0(
  MR_Word TypeClassInfo_for_enum_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_9,
  MR_Word * ResultOut_10)
{
  MR_bool succeeded;
  MR_Word TypeInfo_27_27;
  MR_Word DivideBySetA_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word DivideBySetB_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word InSetA_11;
  MR_Word OutSetA_12;
  MR_Word InSetB_13;
  MR_Word OutSetB_14;
  MR_Word DivideBySetListA_15;
  MR_Word DivideBySetListB_16;
  MR_Word SetListA_17;
  MR_Word SetListB_18;
  MR_Word InSetListA_19;
  MR_Word InSetListB_20;
  MR_Word OutSetListA_21;
  MR_Word OutSetListB_22;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_37_37;
  MR_Word TypeInfo_41_41;
  MR_Word TypeInfo_45_45;
  MR_Integer PolyConst1_36;
  MR_Integer PolyConst1_40;
  MR_Integer PolyConst1_44;

  mercury__tree_bitset__divide_by_set_4_p_0(TypeClassInfo_for_enum_25, DivideBySetA_5, SetA_7, &InSetA_11, &OutSetA_12);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_27_27  = TypeInfo;
}
  mercury__set_ordlist__divide_by_set_4_p_0(TypeInfo_27_27, DivideBySetB_6, SetB_8, &InSetB_13, &OutSetB_14);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_25, DivideBySetA_5, &DivideBySetListA_15);
  DivideBySetListB_16 = (MR_Word) (DivideBySetB_6);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_25, SetA_7, &SetListA_17);
  SetListB_18 = (MR_Word) (SetB_8);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_25, InSetA_11, &InSetListA_19);
  InSetListB_20 = (MR_Word) (InSetB_13);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_25, OutSetA_12, &OutSetListA_21);
  OutSetListB_22 = (MR_Word) (OutSetB_14);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_33  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_33_33, DivideBySetListA_15, DivideBySetListB_16);
  if (succeeded)
  {
    PolyConst1_36 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = PolyConst1_36 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_37_37  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_37_37, SetListA_17, SetListB_18);
    if (succeeded)
    {
      PolyConst1_40 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = PolyConst1_40 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_41_41  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_41_41, InSetListA_19, InSetListB_20);
      if (succeeded)
      {
        PolyConst1_44 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = PolyConst1_44 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_45_45  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_45_45, OutSetListA_21, OutSetListB_22);
      }
    }
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ResultIn_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InSetA_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InSetB_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ResultOut_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutSetA_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OutSetB_14));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.divide_by_set\'/4", (MR_String) "failed");
      return;
    }
}

void MR_CALL 
mercury__test_bitset__divide_4_p_0(
  MR_Word TypeClassInfo_for_enum_22,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_8,
  MR_Word * ResultOut_9)
{
  MR_bool succeeded;
  MR_Word TypeInfo_24_24;
  MR_Word SetA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word InSetA_10;
  MR_Word OutSetA_11;
  MR_Word InSetB_12;
  MR_Word OutSetB_13;
  MR_Word SetListA_14;
  MR_Word SetListB_15;
  MR_Word InSetListA_16;
  MR_Word InSetListB_17;
  MR_Word OutSetListA_18;
  MR_Word OutSetListB_19;
  MR_Word Var_40 = (MR_Word) (SetA_6);
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word TypeInfo_29_29;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_37_37;
  MR_Integer PolyConst1_32;
  MR_Integer PolyConst1_36;

  if (((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1))
  {
    MR_Integer Var_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 1))));
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;

    mercury__tree_bitset__interiornode_divide_4_p_0(TypeClassInfo_for_enum_22, Pred_5, Var_47, &Var_48, &Var_49);
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_48));
    }
    mercury__tree_bitset__prune_top_levels_2_p_0(Var_50, &Var_51);
    InSetA_10 = (MR_Word) (Var_51);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_49));
    }
    mercury__tree_bitset__prune_top_levels_2_p_0(Var_52, &Var_53);
    OutSetA_11 = (MR_Word) (Var_53);
  }
  else
  {
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

    mercury__tree_bitset__leaflist_divide_4_p_0(TypeClassInfo_for_enum_22, Pred_5, Var_41, &Var_42, &Var_43);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Var_42));
    }
    InSetA_10 = (MR_Word) (Var_44);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_45, 0) = ((MR_Box) (Var_43));
    }
    OutSetA_11 = (MR_Word) (Var_45);
  }
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_24_24  = TypeInfo;
}
  Var_76 = (MR_Word) (SetB_7);
  mercury__set_ordlist__divide_loop_6_p_0(TypeInfo_24_24, Pred_5, Var_76, (MR_Word) ((MR_Unsigned) 0U), &Var_81, (MR_Word) ((MR_Unsigned) 0U), &Var_82);
  mercury__list__reverse_2_p_0(TypeInfo_24_24, Var_81, &Var_77);
  InSetB_12 = (MR_Word) (Var_77);
  mercury__list__reverse_2_p_0(TypeInfo_24_24, Var_82, &Var_78);
  OutSetB_13 = (MR_Word) (Var_78);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_22, SetA_6, &SetListA_14);
  SetListB_15 = (MR_Word) (SetB_7);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_22, InSetA_10, &InSetListA_16);
  InSetListB_17 = (MR_Word) (InSetB_12);
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_22, OutSetA_11, &OutSetListA_18);
  OutSetListB_19 = (MR_Word) (OutSetB_13);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_22 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_29_29, SetListA_14, SetListB_15);
  if (succeeded)
  {
    PolyConst1_32 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_22 ;
	Index = PolyConst1_32 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_33  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_33_33, InSetListA_16, InSetListB_17);
    if (succeeded)
    {
      PolyConst1_36 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_22 ;
	Index = PolyConst1_36 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_37_37  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_37_37, OutSetListA_18, OutSetListB_19);
    }
  }
  if (succeeded)
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ResultIn_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InSetA_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InSetB_12));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ResultOut_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutSetA_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OutSetB_13));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.divide\'/4", (MR_String) "failed");
      return;
    }
}

void MR_CALL 
mercury__test_bitset__difference_3_p_0(
  MR_Word TypeClassInfo_for_enum_6,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__test_bitset__difference_2_f_0(TypeClassInfo_for_enum_6, A_4, B_5);
}

MR_Word MR_CALL 
mercury__test_bitset__difference_2_f_0(
  MR_Word TypeClassInfo_for_enum_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word Result_8;
  MR_Word TypeInfo_17_17;
  MR_Word TypeInfo_18_18;
  MR_Word SetA1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetA2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA_9;
  MR_Word SetB_10;
  MR_Word Var_14;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_15 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_17_17  = TypeInfo;
}
  SetA_9 = mercury__tree_bitset__difference_2_f_0(TypeInfo_17_17, SetA1_4, SetA2_6);
{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_15 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_18_18  = TypeInfo;
}
  Var_19 = (MR_Word) (SetB1_5);
  Var_20 = (MR_Word) (SetB2_7);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_18_18, Var_19, Var_20, &Var_21);
  SetB_10 = (MR_Word) (Var_21);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (SetA_9));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (SetB_10));
  }
  mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_enum_15, (MR_String) "difference", HeadVar__1_1, HeadVar__2_2, Var_14, &Result_8);
  return Result_8;
}

void MR_CALL 
mercury__test_bitset__intersect_list_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word Sets_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__intersect_list_1_f_0(TypeClassInfo_for_enum_4, Sets_3);
}

MR_Word MR_CALL 
mercury__test_bitset__intersect_list_1_f_0(
  MR_Word TypeClassInfo_for_enum_12,
  MR_Word SetsAB_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_14_14;
  MR_Word TypeInfo_15_15;
  MR_Word SetsA_5;
  MR_Word SetsB_6;
  MR_Word SetA_7;
  MR_Word SetB_8;
  MR_Word Var_11;

  mercury__test_bitset__get_sets_4_p_0(TypeClassInfo_for_enum_12, (MR_String) "intersect_list", SetsAB_3, &SetsA_5, &SetsB_6);
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_14_14  = TypeInfo;
}
  mercury__tree_bitset__intersect_list_2_p_0(TypeInfo_14_14, SetsA_5, &SetA_7);
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_15_15  = TypeInfo;
}
  SetB_8 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_15_15, SetsB_6);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (SetA_7));
    MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (SetB_8));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_enum_12, (MR_String) "intersect_list", Var_11, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__test_bitset__intersect_3_p_0(
  MR_Word TypeClassInfo_for_enum_6,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__test_bitset__intersect_2_f_0(TypeClassInfo_for_enum_6, A_4, B_5);
}

MR_Word MR_CALL 
mercury__test_bitset__intersect_2_f_0(
  MR_Word TypeClassInfo_for_enum_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word Result_8;
  MR_Word TypeInfo_17_17;
  MR_Word TypeInfo_18_18;
  MR_Word SetA1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetA2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA_9;
  MR_Word SetB_10;
  MR_Word Var_14;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_15 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_17_17  = TypeInfo;
}
  SetA_9 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_17_17, SetA1_4, SetA2_6);
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_15 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_18_18  = TypeInfo;
}
  Var_19 = (MR_Word) (SetB1_5);
  Var_20 = (MR_Word) (SetB2_7);
  mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_18_18, Var_19, Var_20, &Var_21);
  SetB_10 = (MR_Word) (Var_21);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (SetA_9));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (SetB_10));
  }
  mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_enum_15, (MR_String) "intersect", HeadVar__1_1, HeadVar__2_2, Var_14, &Result_8);
  return Result_8;
}

void MR_CALL 
mercury__test_bitset__union_list_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word Sets_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__union_list_1_f_0(TypeClassInfo_for_enum_4, Sets_3);
}

MR_Word MR_CALL 
mercury__test_bitset__union_list_1_f_0(
  MR_Word TypeClassInfo_for_enum_12,
  MR_Word SetsAB_3)
{
  MR_Word Result_4;
  MR_Word TypeInfo_14_14;
  MR_Word TypeInfo_15_15;
  MR_Word SetsA_5;
  MR_Word SetsB_6;
  MR_Word SetA_7;
  MR_Word SetB_8;
  MR_Word Var_11;

  mercury__test_bitset__get_sets_4_p_0(TypeClassInfo_for_enum_12, (MR_String) "union_list", SetsAB_3, &SetsA_5, &SetsB_6);
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_14_14  = TypeInfo;
}
  mercury__tree_bitset__union_list_2_p_0(TypeInfo_14_14, SetsA_5, &SetA_7);
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_15_15  = TypeInfo;
}
  mercury__set_ordlist__union_list_loop_3_p_0(TypeInfo_15_15, SetsB_6, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &SetB_8);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (SetA_7));
    MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (SetB_8));
  }
  mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_enum_12, (MR_String) "union_list", Var_11, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__test_bitset__check0_3_p_0(
  MR_Word TypeClassInfo_for_enum_12,
  MR_String Op_4,
  MR_Word Tester_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word BitSet_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tester_5, (MR_Integer) 0))));
  MR_Word Set_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tester_5, (MR_Integer) 1))));
  MR_Word BitSetList_9;
  MR_Word SetList_10;
  MR_Word TypeInfo_19_19;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_12, BitSet_7, &BitSetList_9);
  SetList_10 = (MR_Word) (Set_8);
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_19_19  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_19_19, BitSetList_9, SetList_10);
  if (succeeded)
    *Result_6 = Tester_5;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_17_17;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Op_4));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Tester_5));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_15_15  = TypeInfo;
}
    {
      TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1));
      MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    {
      mercury__exception__throw_1_p_0(TypeInfo_17_17, ((MR_Box) (Var_11)));
      return;
    }
  }
}

static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_String Op_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word SetA_7;
    MR_Word SetB_8;
    MR_Word SetsAB_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SetsA_10;
    MR_Word SetsB_11;
    MR_Word SetListA_12;
    MR_Word SetListB_13;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word TypeInfo_24_24;

    SetA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
    SetB_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_20, SetA_7, &SetListA_12);
    SetListB_13 = (MR_Word) (SetB_8);
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_20 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_24_24  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_24_24, SetListA_12, SetListB_13);
    if (succeeded)
      mercury__test_bitset__get_sets_4_p_0(TypeClassInfo_for_enum_20, Op_1, SetsAB_9, &SetsA_10, &SetsB_11);
    else
    {
      MR_String Var_16;
      MR_String Var_18;

      mercury__string__append_3_p_2(Op_1, (MR_String) " arg list", &Var_18);
      mercury__string__append_3_p_2((MR_String) "unequal sets in ", Var_18, &Var_16);
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.get_sets\'/4", Var_16);
        return;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetA_7));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetsA_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetB_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetsB_11));
    }
  }
}

void MR_CALL 
mercury__test_bitset__union_3_p_0(
  MR_Word TypeClassInfo_for_enum_6,
  MR_Word A_4,
  MR_Word B_5,
  MR_Word * HeadVar__3_3)
{
  *HeadVar__3_3 = mercury__test_bitset__union_2_f_0(TypeClassInfo_for_enum_6, A_4, B_5);
}

MR_Word MR_CALL 
mercury__test_bitset__union_2_f_0(
  MR_Word TypeClassInfo_for_enum_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word Result_8;
  MR_Word TypeInfo_17_17;
  MR_Word TypeInfo_18_18;
  MR_Word SetA1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetA2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA_9;
  MR_Word SetB_10;
  MR_Word Var_14;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;

{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_15 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_17_17  = TypeInfo;
}
  SetA_9 = mercury__tree_bitset__union_2_f_0(TypeInfo_17_17, SetA1_4, SetA2_6);
{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_15 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_18_18  = TypeInfo;
}
  Var_19 = (MR_Word) (SetB1_5);
  Var_20 = (MR_Word) (SetB2_7);
  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_18_18, Var_19, Var_20, &Var_21);
  SetB_10 = (MR_Word) (Var_21);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (SetA_9));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (SetB_10));
  }
  mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_enum_15, (MR_String) "union", HeadVar__1_1, HeadVar__2_2, Var_14, &Result_8);
  return Result_8;
}

static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
  MR_Word TypeClassInfo_for_enum_24,
  MR_String Op_6,
  MR_Word TesterA_7,
  MR_Word TesterB_8,
  MR_Word Tester_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word BitSetA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TesterA_7, (MR_Integer) 0))));
  MR_Word SetA_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TesterA_7, (MR_Integer) 1))));
  MR_Word BitSetListA_13;
  MR_Word SetListA_14;
  MR_Word BitSetB_15;
  MR_Word SetB_16;
  MR_Word BitSetListB_17;
  MR_Word SetListB_18;
  MR_Word BitSet_19;
  MR_Word Set_20;
  MR_Word BitSetList_21;
  MR_Word SetList_22;
  MR_Word TypeInfo_33_33;
  MR_Word TypeInfo_37_37;
  MR_Word TypeInfo_41_41;
  MR_Integer PolyConst1_36;
  MR_Integer PolyConst1_40;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_24, BitSetA_11, &BitSetListA_13);
  SetListA_14 = (MR_Word) (SetA_12);
  BitSetB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TesterB_8, (MR_Integer) 0))));
  SetB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TesterB_8, (MR_Integer) 1))));
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_24, BitSetB_15, &BitSetListB_17);
  SetListB_18 = (MR_Word) (SetB_16);
  BitSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tester_9, (MR_Integer) 0))));
  Set_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tester_9, (MR_Integer) 1))));
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_24, BitSet_19, &BitSetList_21);
  SetList_22 = (MR_Word) (Set_20);
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_33_33  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_33_33, BitSetListA_13, SetListA_14);
  if (succeeded)
  {
    PolyConst1_36 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_24 ;
	Index = PolyConst1_36 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_37_37  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_37_37, BitSetListB_17, SetListB_18);
    if (succeeded)
    {
      PolyConst1_40 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_24 ;
	Index = PolyConst1_40 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_41_41  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_41_41, BitSetList_21, SetList_22);
    }
  }
  if (succeeded)
    *Result_10 = Tester_9;
  else
  {
    MR_Word TypeInfo_29_29;
    MR_Word TypeInfo_31_31;
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (Op_6));
      MR_hl_field(MR_mktag(2), Var_23, 1) = ((MR_Box) (TesterA_7));
      MR_hl_field(MR_mktag(2), Var_23, 2) = ((MR_Box) (TesterB_8));
      MR_hl_field(MR_mktag(2), Var_23, 3) = ((MR_Box) (Tester_9));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_24 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
    {
      TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1));
      MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_29_29));
    }
    {
      mercury__exception__throw_1_p_0(TypeInfo_31_31, ((MR_Box) (Var_23)));
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__superset_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word SetA1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetA2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Var_13;

  Var_13 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_for_T_11, SetA1_3, SetA2_5);
  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_11, SetA2_5, Var_13);
  if (succeeded)
  {
    MR_Word Var_17 = (MR_Word) (SetB1_4);
    MR_Word Var_18 = (MR_Word) (SetB2_6);

    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_11, Var_17, Var_18, Var_18);
    if (!(succeeded))
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.superset\'/2", (MR_String) "unexpected success");
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String Var_9;
    MR_String Var_10;
    MR_Word Var_21 = (MR_Word) (SetB1_4);
    MR_Word Var_22 = (MR_Word) (SetB2_6);

    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_11, Var_21, Var_22, Var_22);
    if (succeeded)
    {
      Var_9 = (MR_String) "predicate \140test_bitset.superset\'/2";
      Var_10 = (MR_String) "unexpected failure";
      mercury__require__unexpected_2_p_0(Var_9, Var_10);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__subset_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word SetA1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetA2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Var_13;

  Var_13 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_for_T_11, SetA2_5, SetA1_3);
  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_11, SetA1_3, Var_13);
  if (succeeded)
  {
    MR_Word Var_17 = (MR_Word) (SetB2_6);
    MR_Word Var_18 = (MR_Word) (SetB1_4);

    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_11, Var_17, Var_18, Var_18);
    if (!(succeeded))
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.subset\'/2", (MR_String) "unexpected success");
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String Var_9;
    MR_String Var_10;
    MR_Word Var_21 = (MR_Word) (SetB2_6);
    MR_Word Var_22 = (MR_Word) (SetB1_4);

    succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_11, Var_21, Var_22, Var_22);
    if (succeeded)
    {
      Var_9 = (MR_String) "predicate \140test_bitset.subset\'/2";
      Var_10 = (MR_String) "unexpected failure";
      mercury__require__unexpected_2_p_0(Var_9, Var_10);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__equal_2_p_0(
  MR_Word TypeClassInfo_for_enum_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word SetA1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word SetA2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word EqualA_7;
  MR_Word EqualB_8;
  MR_Word TypeInfo_13_13;

  succeeded = mercury__tree_bitset__equal_2_p_0(TypeClassInfo_for_enum_11, SetA1_3, SetA2_5);
  if (succeeded)
    EqualA_7 = (MR_Integer) 1;
  else
    EqualA_7 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_11 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_13_13  = TypeInfo;
}
  succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_13_13, SetB2_6, SetB1_4);
  if (succeeded)
    EqualB_8 = (MR_Integer) 1;
  else
    EqualB_8 = (MR_Integer) 0;
  succeeded = (EqualA_7 == EqualB_8);
  if (succeeded)
    succeeded = (EqualA_7 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.equal\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__remove_least_3_p_0(
  MR_Word TypeClassInfo_for_enum_23,
  MR_Box * Least_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  MR_bool succeeded;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Box LeastA_8;
  MR_Word SetA1_9;

  succeeded = mercury__tree_bitset__remove_least_3_p_0(TypeClassInfo_for_enum_23, &LeastA_8, SetA0_5, &SetA1_9);
  if (succeeded)
  {
    MR_Box LeastB_10;
    MR_Word SetB1_11;
    MR_Word Var_30 = (MR_Word) (SetB0_6);
    MR_Word Var_31;

    succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      LeastB_10 = (MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 0));
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_30, (MR_Integer) 1))));
      SetB1_11 = (MR_Word) (Var_31);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_29_29;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_23 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_29_29  = TypeInfo;
}
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, LeastA_8, LeastB_10);
      if (succeeded)
      {
        MR_Word Var_16;

        *Least_4 = LeastA_8;
        {
          Var_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (SetA1_9));
          MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (SetB1_11));
        }
        mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_23, (MR_String) "remove_least", HeadVar__2_2, Var_16, Result_7);
      }
      else
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "wrong least element");
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "should be no least value");
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String Var_21;
    MR_String Var_22;
    MR_Word Var_32 = (MR_Word) (SetB0_6);

    succeeded = (Var_32 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_21 = (MR_String) "predicate \140test_bitset.remove_least\'/3";
      Var_22 = (MR_String) "failed";
      mercury__require__unexpected_2_p_0(Var_21, Var_22);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__remove_list_3_p_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word Es_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  MR_bool succeeded;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA1_8;
  MR_Word TypeInfo_10_27;
  MR_Word TypeInfo_11_28;
  MR_Word TypeInfo_8_31;
  MR_Word Var_25;
  MR_Word Var_29;
  MR_Integer Var_32;
  MR_Word Var_35;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_20 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_31  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_31, Es_4, (MR_Integer) 0, &Var_32);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_31, Var_32, Es_4, &Var_29);
  Var_25 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_20, Var_29);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_20 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_27  = TypeInfo;
}
  Var_35 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_10_27, SetA0_5, Var_25);
  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_10_27, Var_25, Var_35);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_20 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_11_28  = TypeInfo;
}
    SetA1_8 = mercury__tree_bitset__difference_2_f_0(TypeInfo_11_28, SetA0_5, Var_25);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SetB1_9;
    MR_Word TypeInfo_22_22;
    MR_Word Var_38;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_20 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
    succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_22_22, Es_4, &Var_38);
    if (succeeded)
    {
      Var_40 = (MR_Word) (SetB0_6);
      Var_41 = (MR_Word) (Var_38);
      succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_22_22, Var_40, Var_41, Var_41);
      if (succeeded)
      {
        Var_43 = (MR_Word) (SetB0_6);
        Var_44 = (MR_Word) (Var_38);
        mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_22_22, Var_43, Var_44, &Var_45);
        SetB1_9 = (MR_Word) (Var_45);
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (SetA1_8));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (SetB1_9));
      }
      mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_20, (MR_String) "remove_list", HeadVar__2_2, Var_15, Result_7);
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.remove_list\'/3", (MR_String) "unexpected success");
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeInfo_24_24;
    MR_String Var_18;
    MR_String Var_19;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_20 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_24_24  = TypeInfo;
}
    succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_24_24, Es_4, &Var_46);
    if (succeeded)
    {
      Var_48 = (MR_Word) (SetB0_6);
      Var_49 = (MR_Word) (Var_46);
      succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_24_24, Var_48, Var_49, Var_49);
      if (succeeded)
      {
        Var_51 = (MR_Word) (SetB0_6);
        Var_52 = (MR_Word) (Var_46);
        mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_24_24, Var_51, Var_52, &Var_53);
        Var_18 = (MR_String) "predicate \140test_bitset.remove_list\'/3";
        Var_19 = (MR_String) "unexpected failure";
        mercury__require__unexpected_2_p_0(Var_18, Var_19);
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__remove_3_p_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  MR_bool succeeded;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA1_8;

  succeeded = mercury__tree_bitset__contains_2_p_0(TypeClassInfo_for_enum_20, SetA0_5, E_4);
  if (succeeded)
  {
    SetA1_8 = mercury__tree_bitset__delete_2_f_0(TypeClassInfo_for_enum_20, SetA0_5, E_4);
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word SetB1_9;
    MR_Word TypeInfo_22_22;
    MR_Word Var_25;
    MR_Word Var_26;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_20 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
    Var_25 = (MR_Word) (SetB0_6);
    succeeded = mercury__list__delete_first_3_p_0(TypeInfo_22_22, Var_25, E_4, &Var_26);
    if (succeeded)
    {
      SetB1_9 = (MR_Word) (Var_26);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (SetA1_8));
        MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (SetB1_9));
      }
      mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_20, (MR_String) "remove", HeadVar__2_2, Var_15, Result_7);
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.remove\'/3", (MR_String) "unexpected success");
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeInfo_24_24;
    MR_String Var_18;
    MR_String Var_19;
    MR_Word Var_27;
    MR_Word Var_28;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_20 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_24_24  = TypeInfo;
}
    Var_27 = (MR_Word) (SetB0_6);
    succeeded = mercury__list__delete_first_3_p_0(TypeInfo_24_24, Var_27, E_4, &Var_28);
    if (succeeded)
    {
      Var_18 = (MR_String) "predicate \140test_bitset.remove\'/3";
      Var_19 = (MR_String) "unexpected failure";
      mercury__require__unexpected_2_p_0(Var_18, Var_19);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__delete_list_3_p_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Word Es_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_10_18;
  MR_Word TypeInfo_8_21;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA_8;
  MR_Word SetB_9;
  MR_Word Var_12;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Integer Var_22;
  MR_Word Var_24;
  MR_Integer Var_26;
  MR_Word Var_28;
  MR_Word Var_30;

{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_13 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_18  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_13 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_21  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_21, Es_4, (MR_Integer) 0, &Var_22);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_21, Var_22, Es_4, &Var_19);
  Var_16 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_13, Var_19);
  SetA_8 = mercury__tree_bitset__difference_2_f_0(TypeInfo_10_18, SetA0_5, Var_16);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_13 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_15_15  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_15_15, Es_4, (MR_Integer) 0, &Var_26);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, Var_26, Es_4, &Var_24);
  Var_28 = (MR_Word) (SetB0_6);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_15_15, Var_28, Var_24, &Var_30);
  SetB_9 = (MR_Word) (Var_30);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SetA_8));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (SetB_9));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_13, (MR_String) "delete_list", HeadVar__2_2, Var_12, Result_7);
}

void MR_CALL 
mercury__test_bitset__delete_3_p_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  MR_Word TypeInfo_15_15;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA_8;
  MR_Word SetB_9;
  MR_Word Var_12;
  MR_Word Var_17;
  MR_Word Var_19;
  MR_Word Var_21;

  SetA_8 = mercury__tree_bitset__delete_2_f_0(TypeClassInfo_for_enum_13, SetA0_5, E_4);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_13 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_15_15  = TypeInfo;
}
  {
    Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_17, 0) = E_4;
    MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_19 = (MR_Word) (SetB0_6);
  mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_15_15, Var_19, Var_17, &Var_21);
  SetB_9 = (MR_Word) (Var_21);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SetA_8));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (SetB_9));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_13, (MR_String) "delete", HeadVar__2_2, Var_12, Result_7);
}

void MR_CALL 
mercury__test_bitset__insert_list_3_p_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Word Es_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  MR_Word TypeInfo_15_15;
  MR_Word TypeInfo_10_18;
  MR_Word TypeInfo_8_21;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA_8;
  MR_Word SetB_9;
  MR_Word Var_12;
  MR_Word Var_16;
  MR_Word Var_19;
  MR_Integer Var_22;
  MR_Word Var_24;
  MR_Integer Var_26;
  MR_Word Var_29;
  MR_Word Var_30;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_13 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_10_18  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_13 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_8_21  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_8_21, Es_4, (MR_Integer) 0, &Var_22);
  mercury__list__merge_sort_3_p_0(TypeInfo_8_21, Var_22, Es_4, &Var_19);
  Var_16 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_13, Var_19);
  SetA_8 = mercury__tree_bitset__union_2_f_0(TypeInfo_10_18, Var_16, SetA0_5);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_13 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_15_15  = TypeInfo;
}
  mercury__list__length_acc_3_p_0(TypeInfo_15_15, Es_4, (MR_Integer) 0, &Var_26);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, Var_26, Es_4, &Var_24);
  Var_29 = (MR_Word) (SetB0_6);
  mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_15_15, Var_24, Var_29, &Var_30);
  SetB_9 = (MR_Word) (Var_30);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SetA_8));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (SetB_9));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_13, (MR_String) "insert_list", HeadVar__2_2, Var_12, Result_7);
}

MR_bool MR_CALL 
mercury__test_bitset__insert_new_3_p_0(
  MR_Word TypeClassInfo_for_enum_18,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  MR_bool succeeded;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA_8;

  succeeded = mercury__tree_bitset__insert_new_3_p_0(TypeClassInfo_for_enum_18, E_4, SetA0_5, &SetA_8);
  if (succeeded)
  {
    MR_Word SetB_9;
    MR_Word TypeInfo_20_20;
    MR_Word Var_23;
    MR_Word Var_24;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_20_20  = TypeInfo;
}
    Var_23 = (MR_Word) (SetB0_6);
    succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_20_20, Var_23, E_4, &Var_24);
    if (succeeded)
    {
      SetB_9 = (MR_Word) (Var_24);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Var_13;

      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (SetA_8));
        MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (SetB_9));
      }
      mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_18, (MR_String) "insert", HeadVar__2_2, Var_13, Result_7);
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.insert_new\'/3", (MR_String) "success/fail in tree_bitset/set_ordlist");
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeInfo_22_22;
    MR_String Var_16;
    MR_String Var_17;
    MR_Word Var_25;
    MR_Word Var_26;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
    Var_25 = (MR_Word) (SetB0_6);
    succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_22_22, Var_25, E_4, &Var_26);
    if (succeeded)
    {
      Var_16 = (MR_String) "predicate \140test_bitset.insert_new\'/3";
      Var_17 = (MR_String) "fail/success in tree_bitset/set_ordlist";
      mercury__require__unexpected_2_p_0(Var_16, Var_17);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__insert_3_p_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  MR_Word TypeInfo_15_15;
  MR_Word SetA0_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word SetA_8;
  MR_Word SetB_9;
  MR_Word Var_12;
  MR_Word Var_16;
  MR_Word Var_17;

  SetA_8 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_enum_13, SetA0_5, E_4);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_13 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_15_15  = TypeInfo;
}
  Var_16 = (MR_Word) (SetB0_6);
  mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_15_15, Var_16, E_4, &Var_17);
  SetB_9 = (MR_Word) (Var_17);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SetA_8));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (SetB_9));
  }
  mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_13, (MR_String) "insert", HeadVar__2_2, Var_12, Result_7);
}

void MR_CALL 
mercury__test_bitset__check1_4_p_0(
  MR_Word TypeClassInfo_for_enum_18,
  MR_String Op_5,
  MR_Word TesterA_6,
  MR_Word Tester_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word BitSetA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TesterA_6, (MR_Integer) 0))));
  MR_Word SetA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TesterA_6, (MR_Integer) 1))));
  MR_Word BitSetListA_11;
  MR_Word SetListA_12;
  MR_Word BitSet_13;
  MR_Word Set_14;
  MR_Word BitSetList_15;
  MR_Word SetList_16;
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_30_30;
  MR_Integer PolyConst1_29;

  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_18, BitSetA_9, &BitSetListA_11);
  SetListA_12 = (MR_Word) (SetA_10);
  BitSet_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tester_7, (MR_Integer) 0))));
  Set_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Tester_7, (MR_Integer) 1))));
  mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_18, BitSet_13, &BitSetList_15);
  SetList_16 = (MR_Word) (Set_14);
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_26_26  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_26_26, BitSetListA_11, SetListA_12);
  if (succeeded)
  {
    PolyConst1_29 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_18 ;
	Index = PolyConst1_29 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_30_30  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_30_30, BitSetList_15, SetList_16);
  }
  if (succeeded)
    *Result_8 = Tester_7;
  else
  {
    MR_Word TypeInfo_22_22;
    MR_Word TypeInfo_24_24;
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Op_5));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (TesterA_6));
      MR_hl_field(MR_mktag(1), Var_17, 2) = ((MR_Box) (Tester_7));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_18 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_22_22  = TypeInfo;
}
    {
      TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1));
      MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_22_22));
    }
    {
      mercury__exception__throw_1_p_0(TypeInfo_24_24, ((MR_Box) (Var_17)));
      return;
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__contains_2_p_0(
  MR_Word TypeClassInfo_for_enum_10,
  MR_Word HeadVar__1_1,
  MR_Box E_5)
{
  MR_bool succeeded;
  MR_Word SetA_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word SetB_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word InSetA_6;
  MR_Word InSetB_7;
  MR_Word TypeInfo_12_12;

  succeeded = mercury__tree_bitset__contains_2_p_0(TypeClassInfo_for_enum_10, SetA_3, E_5);
  if (succeeded)
    InSetA_6 = (MR_Integer) 1;
  else
    InSetA_6 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_10 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_12_12  = TypeInfo;
}
  succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_12_12, E_5, SetB_4);
  if (succeeded)
    InSetB_7 = (MR_Integer) 1;
  else
    InSetB_7 = (MR_Integer) 0;
  succeeded = (InSetA_6 == InSetB_7);
  if (succeeded)
    succeeded = (InSetA_6 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.contains\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__3_3));
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__286__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Box closure = closure_arg;

  mercury__test_bitset__IntroducedFrom__pred__member__285__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), wrapper_arg_1, cont, cont_env_ptr);
}

void MR_CALL 
mercury__test_bitset__member_2_p_1(
  MR_Word TypeClassInfo_for_enum_25,
  MR_Box * E_1,
  MR_Word HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_bool succeeded;
  MR_Word TypeInfo_31_31;
  MR_Word TypeInfo_32_32;
  MR_Word SetA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word PredA_13;
  MR_Word PredB_15;
  MR_Word SolnsA_17;
  MR_Word SolnsB_18;
  MR_Word TypeInfo_14_43;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Integer Var_53;
  MR_Box conv1_Var_41;
  MR_Word TypeInfo_14_70;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Integer Var_80;
  MR_Box conv3_Var_68;
  MR_Word TypeInfo_34_34;

  {
    PredA_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PredA_13, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[0]));
    MR_hl_field(MR_mktag(0), PredA_13, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_1));
    MR_hl_field(MR_mktag(0), PredA_13, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), PredA_13, 3) = ((MR_Box) (TypeClassInfo_for_enum_25));
    MR_hl_field(MR_mktag(0), PredA_13, 4) = ((MR_Box) (SetA_11));
  }
  {
    PredB_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PredB_15, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[1]));
    MR_hl_field(MR_mktag(0), PredB_15, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_2));
    MR_hl_field(MR_mktag(0), PredB_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), PredB_15, 3) = ((MR_Box) (TypeClassInfo_for_enum_25));
    MR_hl_field(MR_mktag(0), PredB_15, 4) = ((MR_Box) (SetB_12));
  }
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_31_31  = TypeInfo;
}
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_3));
    MR_hl_field(MR_mktag(0), Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_39, 3) = ((MR_Box) (TypeInfo_31_31));
  }
  {
    TypeInfo_14_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_14_43, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_14_43, 1) = ((MR_Box) (TypeInfo_31_31));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_31_31, TypeInfo_14_43, PredA_13, Var_39, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_Var_41);
  Var_41 = ((MR_Word) (conv1_Var_41));
  mercury__list__length_acc_3_p_0(TypeInfo_31_31, Var_41, (MR_Integer) 0, &Var_53);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_31_31, Var_53, Var_41, &SolnsA_17);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_32_32  = TypeInfo;
}
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[0]));
    MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_4));
    MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (TypeInfo_32_32));
  }
  {
    TypeInfo_14_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_14_70, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
    MR_hl_field(MR_mktag(0), TypeInfo_14_70, 1) = ((MR_Box) (TypeInfo_32_32));
  }
  mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_32_32, TypeInfo_14_70, PredB_15, Var_66, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_Var_68);
  Var_68 = ((MR_Word) (conv3_Var_68));
  mercury__list__length_acc_3_p_0(TypeInfo_32_32, Var_68, (MR_Integer) 0, &Var_80);
  mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_32_32, Var_80, Var_68, &SolnsB_18);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_34_34  = TypeInfo;
}
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_34_34, SolnsA_17, SolnsB_18);
  if (succeeded)
    mercury__tree_bitset__member_2_p_1(TypeClassInfo_for_enum_25, E_1, SetA_11, cont, cont_env_ptr);
  else
  {
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (out, in)");
      return;
    }
    cont(cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__test_bitset__member_2_p_0(
  MR_Word TypeClassInfo_for_enum_25,
  MR_Box E_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word SetA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
  MR_Word SetB_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
  MR_Word InSetA_6;
  MR_Word InSetB_7;
  MR_Word TypeInfo_27_27;

  succeeded = mercury__tree_bitset__member_2_p_0(TypeClassInfo_for_enum_25, E_1, SetA_4);
  if (succeeded)
    InSetA_6 = (MR_Integer) 1;
  else
    InSetA_6 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_25 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_27_27  = TypeInfo;
}
  succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_27_27, E_1, SetB_5);
  if (succeeded)
    InSetB_7 = (MR_Integer) 1;
  else
    InSetB_7 = (MR_Integer) 0;
  succeeded = (InSetA_6 == InSetB_7);
  if (succeeded)
    succeeded = (InSetA_6 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (in, in)");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__is_singleton_2_p_0(
  MR_Word TypeClassInfo_for_enum_12,
  MR_Word HeadVar__1_1,
  MR_Box * E_5)
{
  MR_bool succeeded;
  MR_Word A_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word NonEmptyA_7;
  MR_Word NonEmptyB_9;
  MR_Box AE_6;
  MR_Box BE_8;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word TypeInfo_16_16;

  succeeded = mercury__tree_bitset__is_singleton_2_p_0(TypeClassInfo_for_enum_12, A_3, &AE_6);
  if (succeeded)
    {
      NonEmptyA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NonEmptyA_7, 0) = AE_6;
    }
  else
    NonEmptyA_7 = (MR_Word) ((MR_Unsigned) 0U);
  Var_19 = (MR_Word) (B_4);
  succeeded = (Var_19 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    BE_8 = (MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
    succeeded = (Var_20 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
    {
      NonEmptyB_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), NonEmptyB_9, 0) = BE_8;
    }
  else
    NonEmptyB_9 = (MR_Word) ((MR_Unsigned) 0U);
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo = TypeClassInfo_for_enum_12 ;
	Index = (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	TypeInfo_16_16  = TypeInfo;
}
  succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_16_16, NonEmptyA_7, NonEmptyB_9);
  if (succeeded)
  {
    succeeded = (NonEmptyA_7 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      *E_5 = (MR_hl_field(MR_mktag(1), NonEmptyA_7, (MR_Integer) 0));
  }
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.is_singleton\'/2", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word A_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word NonEmptyA_4;
  MR_Word NonEmptyB_5;
  MR_Word Var_18;

  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_8, A_2, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))));
  succeeded = !(succeeded);
  if (succeeded)
    NonEmptyA_4 = (MR_Integer) 1;
  else
    NonEmptyA_4 = (MR_Integer) 0;
  Var_18 = (MR_Word) (B_3);
  succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    NonEmptyB_5 = (MR_Integer) 1;
  else
    NonEmptyB_5 = (MR_Integer) 0;
  succeeded = (NonEmptyA_4 == NonEmptyB_5);
  if (succeeded)
    succeeded = (NonEmptyA_4 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.is_non_empty\'/1", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__test_bitset__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word A_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word B_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Word EmptyA_4;
  MR_Word EmptyB_5;
  MR_Word Var_18;

  succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_8, A_2, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))));
  if (succeeded)
    EmptyA_4 = (MR_Integer) 1;
  else
    EmptyA_4 = (MR_Integer) 0;
  Var_18 = (MR_Word) (B_3);
  succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    EmptyB_5 = (MR_Integer) 1;
  else
    EmptyB_5 = (MR_Integer) 0;
  succeeded = (EmptyA_4 == EmptyB_5);
  if (succeeded)
    succeeded = (EmptyA_4 == (MR_Integer) 1);
  else
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140test_bitset.is_empty\'/1", (MR_String) "failed");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__test_bitset__make_singleton_set_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word * HeadVar__1_1,
  MR_Box A_3)
{
  *HeadVar__1_1 = mercury__test_bitset__make_singleton_set_1_f_0(TypeClassInfo_for_enum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__make_singleton_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_6,
  MR_Box A_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_18;

  Var_4 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_enum_6, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))), A_3);
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = A_3;
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_5 = (MR_Word) (Var_18);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__test_bitset__singleton_set_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word * HeadVar__1_1,
  MR_Box A_3)
{
  *HeadVar__1_1 = mercury__test_bitset__singleton_set_1_f_0(TypeClassInfo_for_enum_4, A_3);
}

MR_Word MR_CALL 
mercury__test_bitset__singleton_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_6,
  MR_Box A_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;
  MR_Word Var_18;

  Var_4 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_enum_6, (MR_Word) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0]))), A_3);
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = A_3;
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_5 = (MR_Word) (Var_18);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__test_bitset__init_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) (&mercury__test_bitset_scalar_common_5[0]);
}

MR_Word MR_CALL 
mercury__test_bitset__init_0_f_0(
  MR_Word TypeInfo_for_T_4)
{
  return (MR_Word) (&mercury__test_bitset_scalar_common_5[0]);
}

static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__test_bitset____Unify____bitset_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__test_bitset____Compare____bitset_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__test_bitset____Unify____test_bitset_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__test_bitset____Compare____test_bitset_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__test_bitset__init(void)
{
}

void mercury__test_bitset__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1);
	MR_register_type_ctor_info(&mercury__test_bitset__test_bitset__type_ctor_info_test_bitset_1);
}

void mercury__test_bitset__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__test_bitset__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module test_bitset.
