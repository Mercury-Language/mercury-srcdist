/*
** Automatically generated from `test_bitset.m'
** by the Mercury compiler,
** version rotd=2018-01-08
** configured for x86_64-pc-linux-gnu.
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
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1;

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

static MR_Integer MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__241__1_3_p_0(
  MR_Word TypeClassInfo_for_enum_27,
  MR_Word SetB_13,
  MR_Box * LambdaHeadVar__1_21,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__240__1_3_p_0(
  MR_Word TypeClassInfo_for_enum_27,
  MR_Word SetA_12,
  MR_Box * LambdaHeadVar__1_20,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_30,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word V_8_8,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_Integer V_12_12,
  MR_Box V_19_13,
  MR_Box * V_20_14);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
  MR_Word TypeClassInfo_for_enum_21,
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
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word V_8_8,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_Integer V_12_12,
  MR_Word V_19_13,
  MR_Word * V_20_14);

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

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word V_3_3,
  MR_Word * V_4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word V_8_8,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_Integer V_12_12,
  MR_Integer V_19_13,
  MR_Integer * V_20_14);

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

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[1][7];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_8[2][6];




static /* final */ const MR_Box mercury__test_bitset_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__test_bitset_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_5[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) (&mercury__test_bitset_scalar_common_4[0])))),
    ((MR_Box) (((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
  },
};

static /* final */ const MR_Integer mercury__test_bitset_scalar_common_6[2][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67631
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__test_bitset__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__test_bitset__list__pti_list_1__pseudo_1))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_8[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_6[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_6[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
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
#include "uint8.mh"
#include "version_array.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0 = {
  (MR_String) "zero_argument",
  (MR_Integer) 2,
  (MR_Integer) 2,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1 = {
  (MR_String) "one_argument",
  (MR_Integer) 3,
  (MR_Integer) 6,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_2[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2 = {
  (MR_String) "two_arguments",
  (MR_Integer) 4,
  (MR_Integer) 14,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__test_bitset____Unify____bitset_error_1_0_10001)),
  ((MR_Box) (mercury__test_bitset____Compare____bitset_error_1_0_10001)),
  (MR_String) "test_bitset",
  (MR_String) "bitset_error",
  {     mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1 },
  {     mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1
};

const MR_TypeCtorInfo_Struct mercury__test_bitset__test_bitset__type_ctor_info_test_bitset_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__test_bitset____Unify____test_bitset_1_0_10001)),
  ((MR_Box) (mercury__test_bitset____Compare____test_bitset_1_0_10001)),
  (MR_String) "test_bitset",
  (MR_String) "test_bitset",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__241__1_3_p_0(
  MR_Word TypeClassInfo_for_enum_27,
  MR_Word SetB_13,
  MR_Box * LambdaHeadVar__1_21,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Word TypeInfo_31_31;

{
#define MR_PROC_LABEL mercury__test_bitset__IntroducedFrom__pred__member__241__1_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_31_31  = TypeInfo;
}
    mercury__set_ordlist__member_2_p_1(TypeInfo_31_31, LambdaHeadVar__1_21, SetB_13, cont, cont_env_ptr);
  }
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__240__1_3_p_0(
  MR_Word TypeClassInfo_for_enum_27,
  MR_Word SetA_12,
  MR_Box * LambdaHeadVar__1_20,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__tree_bitset__member_2_p_1(TypeClassInfo_for_enum_27, LambdaHeadVar__1_20, SetA_12, cont, cont_env_ptr);
}

void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
    MR_Word TypeInfo_8_8;
    MR_Word TypeCtorInfo_9_9;
    MR_Word TypeInfo_10_10;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    {
      TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    TypeCtorInfo_9_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_6));
    }
    mercury__pair____Compare____pair_2_0(TypeInfo_8_8, TypeInfo_10_10, HeadVar__1_1, (MR_Word) Cast_HeadVar1_4, (MR_Word) Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
    MR_Word TypeInfo_7_7;
    MR_Word TypeCtorInfo_8_8 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word TypeInfo_9_9;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    {
      TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_5));
    }
    succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_7_7, TypeInfo_9_9, (MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0(
  MR_Word TypeInfo_for_T_66,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_64 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_65 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_64 == CastY_65);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
            MR_String Var_114 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word Var_8;
                  MR_Integer V_7_128;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_114 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_128  = Res;
}
                  succeeded = (V_7_128 < (MR_Integer) 0);
                  if (succeeded)
                    Var_8 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_128 == (MR_Integer) 0);
                    if (succeeded)
                      Var_8 = (MR_Integer) 0;
                    else
                      Var_8 = (MR_Integer) 2;
                  }
                  succeeded = (Var_8 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_8;
                  else
                  {
                    MR_Word TypeCtorInfo_100_100 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                    MR_Word TypeInfo_101_101;
                    MR_Word TypeCtorInfo_102_102;
                    MR_Word TypeInfo_103_103;

                    {
                      TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_101_101, 0) = ((MR_Box) (TypeCtorInfo_100_100));
                      MR_hl_field(MR_mktag(0), TypeInfo_101_101, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    TypeCtorInfo_102_102 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                    {
                      TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_103_103, 0) = ((MR_Box) (TypeCtorInfo_102_102));
                      MR_hl_field(MR_mktag(0), TypeInfo_103_103, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    mercury__pair____Compare____pair_2_0(TypeInfo_101_101, TypeInfo_103_103, HeadVar__1_1, (MR_Word) Var_113, (MR_Word) ArgY2_7);
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
            MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_String Var_108 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_26 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word Var_31;
                  MR_Integer V_7_118;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_108 ;
	S2 =  ArgY1_26 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_118  = Res;
}
                  succeeded = (V_7_118 < (MR_Integer) 0);
                  if (succeeded)
                    Var_31 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_118 == (MR_Integer) 0);
                    if (succeeded)
                      Var_31 = (MR_Integer) 0;
                    else
                      Var_31 = (MR_Integer) 2;
                  }
                  succeeded = (Var_31 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_31;
                  else
                  {
                    MR_Word Var_32;
                    MR_Word TypeCtorInfo_87_87 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                    MR_Word TypeInfo_88_88;
                    MR_Word TypeCtorInfo_89_89 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                    MR_Word TypeInfo_90_90;

                    {
                      TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_88_88, 0) = ((MR_Box) (TypeCtorInfo_87_87));
                      MR_hl_field(MR_mktag(0), TypeInfo_88_88, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    {
                      TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_90_90, 0) = ((MR_Box) (TypeCtorInfo_89_89));
                      MR_hl_field(MR_mktag(0), TypeInfo_90_90, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    mercury__pair____Compare____pair_2_0(TypeInfo_88_88, TypeInfo_90_90, &Var_32, (MR_Word) Var_107, (MR_Word) ArgY2_28);
                    succeeded = (Var_32 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_32;
                    else
                    {
                      MR_Word TypeCtorInfo_93_93 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                      MR_Word TypeInfo_94_94;
                      MR_Word TypeCtorInfo_95_95;
                      MR_Word TypeInfo_96_96;

                      {
                        TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_94_94, 0) = ((MR_Box) (TypeCtorInfo_93_93));
                        MR_hl_field(MR_mktag(0), TypeInfo_94_94, 1) = ((MR_Box) (TypeInfo_for_T_66));
                      }
                      TypeCtorInfo_95_95 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                      {
                        TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_96_96, 0) = ((MR_Box) (TypeCtorInfo_95_95));
                        MR_hl_field(MR_mktag(0), TypeInfo_96_96, 1) = ((MR_Box) (TypeInfo_for_T_66));
                      }
                      mercury__pair____Compare____pair_2_0(TypeInfo_94_94, TypeInfo_96_96, HeadVar__1_1, (MR_Word) Var_106, (MR_Word) ArgY3_30);
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
            MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3)));
            MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
            MR_String Var_112 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String ArgY1_54 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word ArgY4_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word Var_61;
                  MR_Integer V_7_123;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_112 ;
	S2 =  ArgY1_54 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_123  = Res;
}
                  succeeded = (V_7_123 < (MR_Integer) 0);
                  if (succeeded)
                    Var_61 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_123 == (MR_Integer) 0);
                    if (succeeded)
                      Var_61 = (MR_Integer) 0;
                    else
                      Var_61 = (MR_Integer) 2;
                  }
                  succeeded = (Var_61 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_61;
                  else
                  {
                    MR_Word Var_62;
                    MR_Word TypeCtorInfo_68_68 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                    MR_Word TypeInfo_69_69;
                    MR_Word TypeCtorInfo_70_70 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                    MR_Word TypeInfo_71_71;

                    {
                      TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_69_69, 0) = ((MR_Box) (TypeCtorInfo_68_68));
                      MR_hl_field(MR_mktag(0), TypeInfo_69_69, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    {
                      TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_71_71, 0) = ((MR_Box) (TypeCtorInfo_70_70));
                      MR_hl_field(MR_mktag(0), TypeInfo_71_71, 1) = ((MR_Box) (TypeInfo_for_T_66));
                    }
                    mercury__pair____Compare____pair_2_0(TypeInfo_69_69, TypeInfo_71_71, &Var_62, (MR_Word) Var_111, (MR_Word) ArgY2_56);
                    succeeded = (Var_62 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_62;
                    else
                    {
                      MR_Word Var_63;
                      MR_Word TypeCtorInfo_74_74 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                      MR_Word TypeInfo_75_75;
                      MR_Word TypeCtorInfo_76_76 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                      MR_Word TypeInfo_77_77;

                      {
                        TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_75_75, 0) = ((MR_Box) (TypeCtorInfo_74_74));
                        MR_hl_field(MR_mktag(0), TypeInfo_75_75, 1) = ((MR_Box) (TypeInfo_for_T_66));
                      }
                      {
                        TypeInfo_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), TypeInfo_77_77, 0) = ((MR_Box) (TypeCtorInfo_76_76));
                        MR_hl_field(MR_mktag(0), TypeInfo_77_77, 1) = ((MR_Box) (TypeInfo_for_T_66));
                      }
                      mercury__pair____Compare____pair_2_0(TypeInfo_75_75, TypeInfo_77_77, &Var_63, (MR_Word) Var_110, (MR_Word) ArgY3_58);
                      succeeded = (Var_63 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_63;
                      else
                      {
                        MR_Word TypeCtorInfo_80_80 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                        MR_Word TypeInfo_81_81;
                        MR_Word TypeCtorInfo_82_82;
                        MR_Word TypeInfo_83_83;

                        {
                          TypeInfo_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), TypeInfo_81_81, 0) = ((MR_Box) (TypeCtorInfo_80_80));
                          MR_hl_field(MR_mktag(0), TypeInfo_81_81, 1) = ((MR_Box) (TypeInfo_for_T_66));
                        }
                        TypeCtorInfo_82_82 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                        {
                          TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), TypeInfo_83_83, 0) = ((MR_Box) (TypeCtorInfo_82_82));
                          MR_hl_field(MR_mktag(0), TypeInfo_83_83, 1) = ((MR_Box) (TypeInfo_for_T_66));
                        }
                        mercury__pair____Compare____pair_2_0(TypeInfo_81_81, TypeInfo_83_83, HeadVar__1_1, (MR_Word) Var_109, (MR_Word) ArgY4_60);
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
}

MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_22 = (MR_Integer) HeadVar__2_2;

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
            MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
              if (succeeded)
              {
                TypeCtorInfo_54_54 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                TypeCtorInfo_56_56 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                {
                  TypeInfo_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeInfo_55_55, 0) = ((MR_Box) (TypeCtorInfo_54_54));
                  MR_hl_field(MR_mktag(0), TypeInfo_55_55, 1) = ((MR_Box) (TypeInfo_for_T_23));
                }
                {
                  TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeInfo_57_57, 0) = ((MR_Box) (TypeCtorInfo_56_56));
                  MR_hl_field(MR_mktag(0), TypeInfo_57_57, 1) = ((MR_Box) (TypeInfo_for_T_23));
                }
                succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_55_55, TypeInfo_57_57, (MR_Word) ArgX2_5, (MR_Word) ArgY2_6);
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
            MR_String ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_10;
            MR_Word ArgX3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
              if (succeeded)
              {
                TypeCtorInfo_24_24 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                {
                  TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (TypeCtorInfo_24_24));
                  MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_23));
                }
                {
                  TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeInfo_33_33, 0) = ((MR_Box) (TypeCtorInfo_26_26));
                  MR_hl_field(MR_mktag(0), TypeInfo_33_33, 1) = ((MR_Box) (TypeInfo_for_T_23));
                }
                succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_31_31, TypeInfo_33_33, (MR_Word) ArgX2_9, (MR_Word) ArgY2_10);
                if (succeeded)
                  succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_31_31, TypeInfo_33_33, (MR_Word) ArgX3_11, (MR_Word) ArgY3_12);
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
            MR_String ArgX1_13 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_14;
            MR_Word ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_16;
            MR_Word ArgX3_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_18;
            MR_Word ArgX4_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word ArgY4_20;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_14 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3)));
              succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
              if (succeeded)
              {
                TypeCtorInfo_36_36 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                TypeCtorInfo_38_38 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                {
                  TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeInfo_49_49, 0) = ((MR_Box) (TypeCtorInfo_36_36));
                  MR_hl_field(MR_mktag(0), TypeInfo_49_49, 1) = ((MR_Box) (TypeInfo_for_T_23));
                }
                {
                  TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), TypeInfo_51_51, 0) = ((MR_Box) (TypeCtorInfo_38_38));
                  MR_hl_field(MR_mktag(0), TypeInfo_51_51, 1) = ((MR_Box) (TypeInfo_for_T_23));
                }
                succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_49_49, TypeInfo_51_51, (MR_Word) ArgX2_15, (MR_Word) ArgY2_16);
                if (succeeded)
                {
                  succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_49_49, TypeInfo_51_51, (MR_Word) ArgX3_17, (MR_Word) ArgY3_18);
                  if (succeeded)
                    succeeded = mercury__pair____Unify____pair_2_0(TypeInfo_49_49, TypeInfo_51_51, (MR_Word) ArgX4_19, (MR_Word) ArgY4_20);
                }
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__test_bitset__filter_4_p_0(
  MR_Word TypeClassInfo_for_enum_23,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_8,
  MR_Word * ResultOut_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_26_26;
    MR_Word TypeInfo_14_50;
    MR_Word SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
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
    MR_Word V_9_46;
    MR_Word V_10_47;
    MR_Word V_11_48;
    MR_Word V_5_54;
    MR_Word V_8_89;
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_38_38;
    MR_Integer PolyConst1_33;
    MR_Integer PolyConst1_37;

    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_23, SetA_6, &SetListA_10);
    SetListB_11 = (MR_Word) SetB_7;
    V_5_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_8_89 = (MR_Word) SetA_6;
    if (((MR_tag((MR_Word) V_8_89)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word V_11_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_8_89, (MR_Integer) 1)));
      MR_Integer V_10_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_8_89, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_23, TypeClassInfo_for_enum_23, V_11_93, V_5_54, &V_9_46);
    }
    else
    {
      MR_Word V_9_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_8_89, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_23, TypeClassInfo_for_enum_23, V_9_91, V_5_54, &V_9_46);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_14_50  = TypeInfo;
}
    mercury__list__filter_4_p_0(TypeInfo_14_50, Pred_5, V_9_46, &V_10_47, &V_11_48);
    InSetA_12 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_23, V_10_47);
    OutSetA_13 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_23, V_11_48);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_26_26  = TypeInfo;
}
    mercury__set_ordlist__filter_4_p_0(TypeInfo_26_26, Pred_5, SetB_7, &InSetB_14, &OutSetB_15);
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_23, InSetA_12, &InSetListA_16);
    InSetListB_17 = (MR_Word) InSetB_14;
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_23, OutSetA_13, &OutSetListA_18);
    OutSetListB_19 = (MR_Word) OutSetB_15;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_30_30  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_30_30, SetListA_10, SetListB_11);
    if (succeeded)
    {
      PolyConst1_33 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_23 ;
	Index =  PolyConst1_33 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_34_34  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_34_34, InSetListA_16, InSetListB_17);
      if (succeeded)
      {
        PolyConst1_37 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_23 ;
	Index =  PolyConst1_37 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_38_38  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_38_38, OutSetListA_18, OutSetListB_19);
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *ResultIn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InSetA_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InSetB_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *ResultOut_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutSetA_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OutSetB_15));
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.filter\'/4", (MR_String) "failed");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__test_bitset__filter_2_f_0(
  MR_Word TypeClassInfo_for_enum_17,
  MR_Word Pred_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Result_7;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_11_37;
    MR_Word SetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetListA_8;
    MR_Word SetListB_9;
    MR_Word InSetA_10;
    MR_Word InSetB_11;
    MR_Word InSetListA_12;
    MR_Word InSetListB_13;
    MR_Word V_7_34;
    MR_Word V_8_35;
    MR_Word V_5_41;
    MR_Word V_8_76;
    MR_Word TypeInfo_23_23;
    MR_Word TypeInfo_27_27;
    MR_Integer PolyConst1_26;

    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_17, SetA_5, &SetListA_8);
    SetListB_9 = (MR_Word) SetB_6;
    V_5_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_8_76 = (MR_Word) SetA_5;
    if (((MR_tag((MR_Word) V_8_76)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word V_11_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_8_76, (MR_Integer) 1)));
      MR_Integer V_10_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_8_76, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_17, TypeClassInfo_for_enum_17, V_11_80, V_5_41, &V_7_34);
    }
    else
    {
      MR_Word V_9_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_8_76, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_17, TypeClassInfo_for_enum_17, V_9_78, V_5_41, &V_7_34);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_11_37  = TypeInfo;
}
    mercury__list__filter_3_p_0(TypeInfo_11_37, Pred_4, V_7_34, &V_8_35);
    InSetA_10 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_17, V_8_35);
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_20_20  = TypeInfo;
}
    InSetB_11 = mercury__set_ordlist__filter_2_f_0(TypeInfo_20_20, Pred_4, SetB_6);
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_17, InSetA_10, &InSetListA_12);
    InSetListB_13 = (MR_Word) InSetB_11;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_23_23  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_23_23, SetListA_8, SetListB_9);
    if (succeeded)
    {
      PolyConst1_26 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_17 ;
	Index =  PolyConst1_26 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_27_27  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_27_27, InSetListA_12, InSetListB_13);
    }
    if (succeeded)
      {
        Result_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Result_7, 0) = ((MR_Box) (InSetA_10));
        MR_hl_field(MR_mktag(0), Result_7, 1) = ((MR_Box) (InSetB_11));
      }
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.filter\'/2", (MR_String) "failed");
    }
    return Result_7;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__all_true_2_p_0(
  MR_Word TypeClassInfo_for_enum_12,
  MR_Word Pred_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word SetA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word V_5_19 = (MR_Word) SetA_4;

    if (((MR_tag((MR_Word) V_5_19)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word V_8_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_5_19, (MR_Integer) 1)));
      MR_Integer V_7_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_5_19, (MR_Integer) 0)));

      succeeded = mercury__tree_bitset__interior_all_true_2_p_0(TypeClassInfo_for_enum_12, Pred_3, V_8_23);
    }
    else
    {
      MR_Word V_6_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_5_19, (MR_Integer) 0)));

      succeeded = mercury__tree_bitset__leaf_all_true_2_p_0(TypeClassInfo_for_enum_12, Pred_3, V_6_21);
    }
    if (succeeded)
    {
      MR_Word TypeInfo_14_14;
      MR_Word V_4_25;

{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_14_14  = TypeInfo;
}
      V_4_25 = (MR_Word) SetB_5;
      succeeded = mercury__list__all_true_2_p_0(TypeInfo_14_14, Pred_3, V_4_25);
      if (!(succeeded))
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.all_true\'/2", (MR_String) "tree_bitset but not set_ordlist");
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeInfo_16_16;
      MR_String Var_9;
      MR_String Var_10;
      MR_String Var_11;
      MR_Word V_4_27;

{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_16_16  = TypeInfo;
}
      V_4_27 = (MR_Word) SetB_5;
      succeeded = mercury__list__all_true_2_p_0(TypeInfo_16_16, Pred_3, V_4_27);
      if (succeeded)
      {
        Var_9 = (MR_String) "test_bitset";
        Var_10 = (MR_String) "predicate \140test_bitset.all_true\'/2";
        Var_11 = (MR_String) "set_ordlist but not tree_bitset";
        mercury__require__unexpected_3_p_0(Var_9, Var_10, Var_11);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_Box MR_CALL 
mercury__test_bitset__foldl_3_f_0(
  MR_Word TypeInfo_for_Acc_18,
  MR_Word TypeClassInfo_for_enum_17,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_8)
{
  {
    MR_bool succeeded;
    MR_Box Acc_9;
    MR_Word SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetListA_10;
    MR_Box AccA_12;
    MR_Box AccB_13;
    MR_Word V_8_50;
    MR_Word V_9_63;
    MR_Word TypeInfo_23_23;

    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_17, SetA_6, &SetListA_10);
    V_9_63 = (MR_Word) SetB_7;
    V_8_50 = (MR_Word) SetA_6;
    if (((MR_tag((MR_Word) V_8_50)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word V_11_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_8_50, (MR_Integer) 1)));
      MR_Integer V_10_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_8_50, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Pred_5, TypeClassInfo_for_enum_17, V_11_54, Acc0_8, &AccA_12);
    }
    else
    {
      MR_Word V_9_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_8_50, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Pred_5, TypeClassInfo_for_enum_17, V_9_52, Acc0_8, &AccA_12);
    }
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(Pred_5, V_9_63, Acc0_8, &AccB_13);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_23_23  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_23_23, SetListA_10, V_9_63);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_18, AccA_12, AccB_13);
    if (succeeded)
      Acc_9 = AccA_12;
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.foldl\'/3", (MR_String) "failed");
    }
    return Acc_9;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word V_13_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 2)));
      MR_Box V_20_17;
      MR_Integer V_22_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 0)));
      MR_Integer V_23_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      if (((MR_tag((MR_Word) V_13_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word V_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_13_15, (MR_Integer) 1)));
        MR_Integer V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_13_15, (MR_Integer) 0)));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_enum_20, V_16_19, HeadVar__3_3, &V_20_17);
      }
      else
      {
        MR_Word V_14_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_13_15, (MR_Integer) 0)));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_enum_20, V_14_16, HeadVar__3_3, &V_20_17);
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_20_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_24,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 0)));
      MR_Integer V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 1)));
      MR_Integer V_18_18;
      MR_Box V_19_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 V_18_18  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_24, TypeClassInfo_for_enum_20, (MR_Integer) 0, V_22_16, V_17_17, V_18_18, HeadVar__3_3, &V_19_19);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_30,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word V_8_8,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_Integer V_12_12,
  MR_Box V_19_13,
  MR_Box * V_20_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      *V_20_14 = V_19_13;
    else
    {
      succeeded = (V_12_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box V_14_15;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

        V_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(TypeClassInfo_for_enum_26, V_10_10);
        func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1)));
        *V_20_14 = func_0(((MR_Box) Var_30), V_14_15, V_19_13);
      }
      else
      {
        MR_Integer V_15_16 = (V_12_12 >> (MR_Integer) 1);
        MR_Integer V_16_18;
        MR_Integer V_17_19;
        MR_Integer V_18_20;
        MR_Integer V_23_21;
        MR_Integer V_4_52 = ((MR_Integer) -1 << V_15_16);

        V_16_18 = ~(V_4_52);
        V_17_19 = (V_16_18 & V_11_11);
        V_23_21 = (V_11_11 >> V_15_16);
        V_18_20 = (V_16_18 & V_23_21);
        switch (V_8_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer V_24_24 = (V_10_10 + V_15_16);
              MR_Box V_25_25;
              MR_Integer next_value_of_V_11_11;
              MR_Integer next_value_of_V_12_12;
              MR_Box next_value_of_V_19_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_30, TypeClassInfo_for_enum_26, V_8_8, V_24_24, V_18_20, V_15_16, V_19_13, &V_25_25);
              // direct tailcall eliminated
              next_value_of_V_11_11 = V_17_19;
              next_value_of_V_12_12 = V_15_16;
              next_value_of_V_19_13 = V_25_25;
              V_11_11 = next_value_of_V_11_11;
              V_12_12 = next_value_of_V_12_12;
              V_19_13 = next_value_of_V_19_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box V_27_22;
              MR_Integer V_28_23;
              MR_Integer next_value_of_V_10_10;
              MR_Integer next_value_of_V_11_11;
              MR_Integer next_value_of_V_12_12;
              MR_Box next_value_of_V_19_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(Var_30, TypeClassInfo_for_enum_26, V_8_8, V_10_10, V_17_19, V_15_16, V_19_13, &V_27_22);
              V_28_23 = (V_10_10 + V_15_16);
              // direct tailcall eliminated
              next_value_of_V_10_10 = V_28_23;
              next_value_of_V_11_11 = V_18_20;
              next_value_of_V_12_12 = V_15_16;
              next_value_of_V_19_13 = V_27_22;
              V_10_10 = next_value_of_V_10_10;
              V_11_11 = next_value_of_V_11_11;
              V_12_12 = next_value_of_V_12_12;
              V_19_13 = next_value_of_V_19_13;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box V_10_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box V_15_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      V_15_13 = func_0(((MR_Box) Var_18), V_10_9, HeadVar__3_3);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__foldl_4_p_1(
  MR_Word TypeInfo_for_Acc_18,
  MR_Word TypeClassInfo_for_enum_17,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_8,
  MR_Box * Acc_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_21_21;
    MR_Word SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetListA_10;
    MR_Word SetListB_11;
    MR_Box AccA_12;
    MR_Box AccB_13;
    MR_Word V_8_31;
    MR_Word V_10_44;
    MR_Word TypeInfo_23_23;
    MR_Integer PolyConst1_22;

    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_17, SetA_6, &SetListA_10);
    SetListB_11 = (MR_Word) SetB_7;
    V_8_31 = (MR_Word) SetA_6;
    if (((MR_tag((MR_Word) V_8_31)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word V_11_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_8_31, (MR_Integer) 1)));
      MR_Integer V_10_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_8_31, (MR_Integer) 0)));

      succeeded = mercury__tree_bitset__do_foldl_pred_4_p_3(TypeInfo_for_Acc_18, TypeClassInfo_for_enum_17, Pred_5, V_11_35, Acc0_8, &AccA_12);
    }
    else
    {
      MR_Word V_9_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_8_31, (MR_Integer) 0)));

      succeeded = mercury__tree_bitset__leaf_foldl_pred_4_p_3(TypeInfo_for_Acc_18, TypeClassInfo_for_enum_17, Pred_5, V_9_33, Acc0_8, &AccA_12);
    }
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
      V_10_44 = (MR_Word) SetB_7;
      succeeded = mercury__list__foldl_4_p_3(TypeInfo_21_21, TypeInfo_for_Acc_18, Pred_5, V_10_44, Acc0_8, &AccB_13);
      if (succeeded)
      {
        PolyConst1_22 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_17 ;
	Index =  PolyConst1_22 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_23_23  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_23_23, SetListA_10, SetListB_11);
        if (succeeded)
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_18, AccA_12, AccB_13);
        if (succeeded)
          *Acc_9 = AccA_12;
        else
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__test_bitset__foldl_4_p_0(
  MR_Word TypeInfo_for_Acc_18,
  MR_Word TypeClassInfo_for_enum_17,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Box Acc0_8,
  MR_Box * Acc_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_21_21;
    MR_Word SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetListA_10;
    MR_Word SetListB_11;
    MR_Box AccA_12;
    MR_Box AccB_13;
    MR_Word V_8_31;
    MR_Word V_10_44;
    MR_Word TypeInfo_23_23;

    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_17, SetA_6, &SetListA_10);
    SetListB_11 = (MR_Word) SetB_7;
    V_8_31 = (MR_Word) SetA_6;
    if (((MR_tag((MR_Word) V_8_31)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word V_11_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_8_31, (MR_Integer) 1)));
      MR_Integer V_10_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_8_31, (MR_Integer) 0)));

      mercury__tree_bitset__do_foldl_pred_4_p_0(TypeInfo_for_Acc_18, TypeClassInfo_for_enum_17, Pred_5, V_11_35, Acc0_8, &AccA_12);
    }
    else
    {
      MR_Word V_9_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_8_31, (MR_Integer) 0)));

      mercury__tree_bitset__leaf_foldl_pred_4_p_0(TypeInfo_for_Acc_18, TypeClassInfo_for_enum_17, Pred_5, V_9_33, Acc0_8, &AccA_12);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_21_21  = TypeInfo;
}
    V_10_44 = (MR_Word) SetB_7;
    mercury__list__foldl_4_p_0(TypeInfo_21_21, TypeInfo_for_Acc_18, Pred_5, V_10_44, Acc0_8, &AccB_13);
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_23_23  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_23_23, SetListA_10, SetListB_11);
    if (succeeded)
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_Acc_18, AccA_12, AccB_13);
    if (succeeded)
      *Acc_9 = AccA_12;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
        return;
      }
    }
  }
}

void MR_CALL 
mercury__test_bitset__divide_by_set_4_p_0(
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_9,
  MR_Word * ResultOut_10)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_28_28;
    MR_Word DivideBySetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word DivideBySetB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word SetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
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
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_38_38;
    MR_Word TypeInfo_42_42;
    MR_Word TypeInfo_46_46;
    MR_Integer PolyConst1_37;
    MR_Integer PolyConst1_41;
    MR_Integer PolyConst1_45;

    mercury__tree_bitset__divide_by_set_4_p_0(TypeClassInfo_for_enum_26, DivideBySetA_5, SetA_7, &InSetA_11, &OutSetA_12);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_28_28  = TypeInfo;
}
    mercury__set_ordlist__divide_by_set_4_p_0(TypeInfo_28_28, DivideBySetB_6, SetB_8, &InSetB_13, &OutSetB_14);
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_26, DivideBySetA_5, &DivideBySetListA_15);
    DivideBySetListB_16 = (MR_Word) DivideBySetB_6;
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_26, SetA_7, &SetListA_17);
    SetListB_18 = (MR_Word) SetB_8;
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_26, InSetA_11, &InSetListA_19);
    InSetListB_20 = (MR_Word) InSetB_13;
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_26, OutSetA_12, &OutSetListA_21);
    OutSetListB_22 = (MR_Word) OutSetB_14;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_34_34  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_34_34, DivideBySetListA_15, DivideBySetListB_16);
    if (succeeded)
    {
      PolyConst1_37 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_26 ;
	Index =  PolyConst1_37 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_38_38  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_38_38, SetListA_17, SetListB_18);
      if (succeeded)
      {
        PolyConst1_41 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_26 ;
	Index =  PolyConst1_41 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_42_42  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_42_42, InSetListA_19, InSetListB_20);
        if (succeeded)
        {
          PolyConst1_45 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_26 ;
	Index =  PolyConst1_45 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_46_46  = TypeInfo;
}
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_46_46, OutSetListA_21, OutSetListB_22);
        }
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *ResultIn_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InSetA_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InSetB_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *ResultOut_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutSetA_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OutSetB_14));
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.divide_by_set\'/4", (MR_String) "failed");
        return;
      }
    }
  }
}

void MR_CALL 
mercury__test_bitset__divide_4_p_0(
  MR_Word TypeClassInfo_for_enum_23,
  MR_Word Pred_5,
  MR_Word HeadVar__2_2,
  MR_Word * ResultIn_8,
  MR_Word * ResultOut_9)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_25_25;
    MR_Word SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
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
    MR_Word V_6_42;
    MR_Word V_7_43;
    MR_Word V_8_44;
    MR_Word V_11_45;
    MR_Word V_12_47;
    MR_Word V_9_48;
    MR_Word V_10_49;
    MR_Word TypeInfo_30_30;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_38_38;
    MR_Integer PolyConst1_33;
    MR_Integer PolyConst1_37;

    mercury__tree_bitset__divide_4_p_0(TypeClassInfo_for_enum_23, Pred_5, SetA_6, &InSetA_10, &OutSetA_11);
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_25_25  = TypeInfo;
}
    V_6_42 = (MR_Word) SetB_7;
    V_11_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_12_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__set_ordlist__divide_loop_6_p_0(TypeInfo_25_25, Pred_5, V_6_42, V_11_45, &V_9_48, V_12_47, &V_10_49);
    mercury__list__reverse_2_p_0(TypeInfo_25_25, V_9_48, &V_7_43);
    InSetB_12 = (MR_Word) V_7_43;
    mercury__list__reverse_2_p_0(TypeInfo_25_25, V_10_49, &V_8_44);
    OutSetB_13 = (MR_Word) V_8_44;
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_23, SetA_6, &SetListA_14);
    SetListB_15 = (MR_Word) SetB_7;
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_23, InSetA_10, &InSetListA_16);
    InSetListB_17 = (MR_Word) InSetB_12;
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_23, OutSetA_11, &OutSetListA_18);
    OutSetListB_19 = (MR_Word) OutSetB_13;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_30_30  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_30_30, SetListA_14, SetListB_15);
    if (succeeded)
    {
      PolyConst1_33 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_23 ;
	Index =  PolyConst1_33 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_34_34  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_34_34, InSetListA_16, InSetListB_17);
      if (succeeded)
      {
        PolyConst1_37 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_23 ;
	Index =  PolyConst1_37 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_38_38  = TypeInfo;
}
        succeeded = mercury__list____Unify____list_1_0(TypeInfo_38_38, OutSetListA_18, OutSetListB_19);
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *ResultIn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (InSetA_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InSetB_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *ResultOut_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OutSetA_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OutSetB_13));
      }
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.divide\'/4", (MR_String) "failed");
        return;
      }
    }
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

void MR_CALL 
mercury__test_bitset__intersect_list_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word Sets_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__intersect_list_1_f_0(TypeClassInfo_for_enum_4, Sets_3);
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

void MR_CALL 
mercury__test_bitset__union_list_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word Sets_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__union_list_1_f_0(TypeClassInfo_for_enum_4, Sets_3);
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
mercury__test_bitset__difference_2_f_0(
  MR_Word TypeClassInfo_for_enum_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word Result_8;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA_9;
    MR_Word SetB_10;
    MR_Word Var_14;
    MR_Word V_4_22;
    MR_Word V_5_23;
    MR_Word V_6_24;

{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
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

	TypeClassInfo =  TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_18  = TypeInfo;
}
    V_4_22 = (MR_Word) SetB1_5;
    V_5_23 = (MR_Word) SetB2_7;
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_18_18, V_4_22, V_5_23, &V_6_24);
    SetB_10 = (MR_Word) V_6_24;
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (SetA_9));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (SetB_10));
    }
    mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_enum_15, (MR_String) "difference", HeadVar__1_1, HeadVar__2_2, Var_14, &Result_8);
    return Result_8;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__intersect_list_1_f_0(
  MR_Word TypeClassInfo_for_enum_12,
  MR_Word SetsAB_3)
{
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

	TypeClassInfo =  TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
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

	TypeClassInfo =  TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    SetB_8 = mercury__set_ordlist__intersect_list_1_f_0(TypeInfo_15_15, SetsB_6);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (SetA_7));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (SetB_8));
    }
    mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_enum_12, (MR_String) "intersect_list", Var_11, &Result_4);
    return Result_4;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__intersect_2_f_0(
  MR_Word TypeClassInfo_for_enum_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word Result_8;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA_9;
    MR_Word SetB_10;
    MR_Word Var_14;
    MR_Word V_4_22;
    MR_Word V_5_23;
    MR_Word V_6_24;

{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
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

	TypeClassInfo =  TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_18  = TypeInfo;
}
    V_4_22 = (MR_Word) SetB1_5;
    V_5_23 = (MR_Word) SetB2_7;
    mercury__set_ordlist__intersect_loop_3_p_0(TypeInfo_18_18, V_4_22, V_5_23, &V_6_24);
    SetB_10 = (MR_Word) V_6_24;
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (SetA_9));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (SetB_10));
    }
    mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_enum_15, (MR_String) "intersect", HeadVar__1_1, HeadVar__2_2, Var_14, &Result_8);
    return Result_8;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__union_list_1_f_0(
  MR_Word TypeClassInfo_for_enum_12,
  MR_Word SetsAB_3)
{
  {
    MR_Word Result_4;
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word SetsA_5;
    MR_Word SetsB_6;
    MR_Word SetA_7;
    MR_Word SetB_8;
    MR_Word Var_11;
    MR_Word V_5_20;
    MR_Word V_2_21;

    mercury__test_bitset__get_sets_4_p_0(TypeClassInfo_for_enum_12, (MR_String) "union_list", SetsAB_3, &SetsA_5, &SetsB_6);
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
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

	TypeClassInfo =  TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    V_2_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_5_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__set_ordlist__power_union_2_3_p_0(TypeInfo_15_15, SetsB_6, V_5_20, &SetB_8);
    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (SetA_7));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (SetB_8));
    }
    mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_enum_12, (MR_String) "union_list", Var_11, &Result_4);
    return Result_4;
  }
}

static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
  MR_Word TypeClassInfo_for_enum_21,
  MR_String Op_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word SetA_7;
      MR_Word SetB_8;
      MR_Word SetsAB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word SetsA_10;
      MR_Word SetsB_11;
      MR_Word SetListA_12;
      MR_Word SetListB_13;
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word TypeInfo_25_25;

      SetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
      SetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
      mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_21, SetA_7, &SetListA_12);
      SetListB_13 = (MR_Word) SetB_8;
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_21 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_25_25  = TypeInfo;
}
      succeeded = mercury__list____Unify____list_1_0(TypeInfo_25_25, SetListA_12, SetListB_13);
      if (succeeded)
        mercury__test_bitset__get_sets_4_p_0(TypeClassInfo_for_enum_21, Op_1, SetsAB_9, &SetsA_10, &SetsB_11);
      else
      {
        MR_String Var_17;
        MR_String Var_19;

        mercury__string__append_3_p_2(Op_1, (MR_String) " arg list", &Var_19);
        mercury__string__append_3_p_2((MR_String) "unequal sets in ", Var_19, &Var_17);
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.get_sets\'/4", Var_17);
          return;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetA_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetsA_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetB_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SetsB_11));
      }
    }
  }
}

MR_Word MR_CALL 
mercury__test_bitset__union_2_f_0(
  MR_Word TypeClassInfo_for_enum_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word Result_8;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA_9;
    MR_Word SetB_10;
    MR_Word Var_14;
    MR_Word V_4_22;
    MR_Word V_5_23;
    MR_Word V_6_24;

{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
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

	TypeClassInfo =  TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_18_18  = TypeInfo;
}
    V_4_22 = (MR_Word) SetB1_5;
    V_5_23 = (MR_Word) SetB2_7;
    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_18_18, V_4_22, V_5_23, &V_6_24);
    SetB_10 = (MR_Word) V_6_24;
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (SetA_9));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (SetB_10));
    }
    mercury__test_bitset__check2_5_p_0(TypeClassInfo_for_enum_15, (MR_String) "union", HeadVar__1_1, HeadVar__2_2, Var_14, &Result_8);
    return Result_8;
  }
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
  {
    MR_bool succeeded;
    MR_Word BitSetA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TesterA_7, (MR_Integer) 0)));
    MR_Word SetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), TesterA_7, (MR_Integer) 1)));
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
    SetListA_14 = (MR_Word) SetA_12;
    BitSetB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TesterB_8, (MR_Integer) 0)));
    SetB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TesterB_8, (MR_Integer) 1)));
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_24, BitSetB_15, &BitSetListB_17);
    SetListB_18 = (MR_Word) SetB_16;
    BitSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tester_9, (MR_Integer) 0)));
    Set_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tester_9, (MR_Integer) 1)));
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_24, BitSet_19, &BitSetList_21);
    SetList_22 = (MR_Word) Set_20;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_24 ;
	Index =  (MR_Integer) 1 ;
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

	TypeClassInfo =  TypeClassInfo_for_enum_24 ;
	Index =  PolyConst1_36 ;
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

	TypeClassInfo =  TypeClassInfo_for_enum_24 ;
	Index =  PolyConst1_40 ;
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
      MR_Word TypeCtorInfo_30_30;
      MR_Word TypeInfo_31_31;
      MR_Word Var_23;

      {
        Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_23, 0) = ((MR_Box) (Op_6));
        MR_hl_field(MR_mktag(2), Var_23, 1) = ((MR_Box) (TesterA_7));
        MR_hl_field(MR_mktag(2), Var_23, 2) = ((MR_Box) (TesterB_8));
        MR_hl_field(MR_mktag(2), Var_23, 3) = ((MR_Box) (Tester_9));
      }
      TypeCtorInfo_30_30 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_24 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_29_29  = TypeInfo;
}
      {
        TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_31_31, 0) = ((MR_Box) (TypeCtorInfo_30_30));
        MR_hl_field(MR_mktag(0), TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_29_29));
      }
      {
        mercury__exception__throw_1_p_0(TypeInfo_31_31, ((MR_Box) (Var_23)));
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__remove_least_3_p_0(
  MR_Word TypeClassInfo_for_enum_26,
  MR_Box * Least_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  {
    MR_bool succeeded;
    MR_Word SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Box LeastA_8;
    MR_Word SetA1_9;

    succeeded = mercury__tree_bitset__remove_least_3_p_0(TypeClassInfo_for_enum_26, &LeastA_8, SetA0_5, &SetA1_9);
    if (succeeded)
    {
      MR_Box LeastB_10;
      MR_Word SetB1_11;
      MR_Word V_6_34 = (MR_Word) SetB0_6;
      MR_Word V_5_35;

      succeeded = ((MR_tag((MR_Word) V_6_34)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        LeastB_10 = (MR_hl_field(MR_mktag(1), V_6_34, (MR_Integer) 0));
        V_5_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_6_34, (MR_Integer) 1)));
        SetB1_11 = (MR_Word) V_5_35;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeInfo_32_32;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_32_32  = TypeInfo;
}
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, LeastA_8, LeastB_10);
        if (succeeded)
        {
          MR_Word Var_16;

          *Least_4 = LeastA_8;
          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (SetA1_9));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (SetB1_11));
          }
          mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_26, (MR_String) "remove_least", HeadVar__2_2, Var_16, Result_7);
        }
        else
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "wrong least element");
        }
      }
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "should be no least value");
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String Var_23;
      MR_String Var_24;
      MR_String Var_25;
      MR_Word V_6_38 = (MR_Word) SetB0_6;
      MR_Box Var_12;
      MR_Word V_5_39;

      succeeded = ((MR_tag((MR_Word) V_6_38)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        Var_12 = (MR_hl_field(MR_mktag(1), V_6_38, (MR_Integer) 0));
        V_5_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_6_38, (MR_Integer) 1)));
        Var_23 = (MR_String) "test_bitset";
        Var_24 = (MR_String) "predicate \140test_bitset.remove_least\'/3";
        Var_25 = (MR_String) "failed";
        mercury__require__unexpected_3_p_0(Var_23, Var_24, Var_25);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__remove_list_3_p_0(
  MR_Word TypeClassInfo_for_enum_22,
  MR_Word Es_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  {
    MR_bool succeeded;
    MR_Word SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA1_8;
    MR_Word TypeInfo_10_32;
    MR_Word TypeInfo_11_33;
    MR_Word TypeInfo_8_38;
    MR_Word V_6_30;
    MR_Word V_4_36;
    MR_Integer V_5_43;
    MR_Word Var_52;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_38  = TypeInfo;
}
    mercury__list__length_acc_3_p_0(TypeInfo_8_38, Es_4, (MR_Integer) 0, &V_5_43);
    mercury__list__merge_sort_3_p_0(TypeInfo_8_38, V_5_43, Es_4, &V_4_36);
    V_6_30 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_22, V_4_36);
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_10_32  = TypeInfo;
}
    Var_52 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_10_32, SetA0_5, V_6_30);
    succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_10_32, V_6_30, Var_52);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_11_33  = TypeInfo;
}
      SetA1_8 = mercury__tree_bitset__difference_2_f_0(TypeInfo_11_33, SetA0_5, V_6_30);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SetB1_9;
      MR_Word TypeInfo_24_24;
      MR_Word V_6_61;
      MR_Word V_4_65;
      MR_Word V_6_67;
      MR_Word V_4_68;
      MR_Word V_5_69;
      MR_Word V_6_70;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_24_24, Es_4, &V_6_61);
      if (succeeded)
      {
        V_4_65 = (MR_Word) SetB0_6;
        V_6_67 = (MR_Word) V_6_61;
        succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_24_24, V_4_65, V_6_67, V_6_67);
        if (succeeded)
        {
          V_4_68 = (MR_Word) SetB0_6;
          V_5_69 = (MR_Word) V_6_61;
          mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_24_24, V_4_68, V_5_69, &V_6_70);
          SetB1_9 = (MR_Word) V_6_70;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (SetA1_8));
          MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (SetB1_9));
        }
        mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_22, (MR_String) "remove_list", HeadVar__2_2, Var_15, Result_7);
      }
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_list\'/3", (MR_String) "unexpected success");
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeInfo_26_26;
      MR_String Var_19;
      MR_String Var_20;
      MR_String Var_21;
      MR_Word V_6_74;
      MR_Word V_4_78;
      MR_Word V_6_80;
      MR_Word V_4_81;
      MR_Word V_5_82;
      MR_Word V_6_83;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_26_26  = TypeInfo;
}
      succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(TypeInfo_26_26, Es_4, &V_6_74);
      if (succeeded)
      {
        V_4_78 = (MR_Word) SetB0_6;
        V_6_80 = (MR_Word) V_6_74;
        succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_26_26, V_4_78, V_6_80, V_6_80);
        if (succeeded)
        {
          V_4_81 = (MR_Word) SetB0_6;
          V_5_82 = (MR_Word) V_6_74;
          mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_26_26, V_4_81, V_5_82, &V_6_83);
          Var_19 = (MR_String) "test_bitset";
          Var_20 = (MR_String) "predicate \140test_bitset.remove_list\'/3";
          Var_21 = (MR_String) "unexpected failure";
          mercury__require__unexpected_3_p_0(Var_19, Var_20, Var_21);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__remove_3_p_0(
  MR_Word TypeClassInfo_for_enum_22,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  {
    MR_bool succeeded;
    MR_Word SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA1_8;

    succeeded = mercury__tree_bitset__contains_2_p_0(TypeClassInfo_for_enum_22, SetA0_5, E_4);
    if (succeeded)
    {
      SetA1_8 = mercury__tree_bitset__delete_2_f_0(TypeClassInfo_for_enum_22, SetA0_5, E_4);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word SetB1_9;
      MR_Word TypeInfo_24_24;
      MR_Word V_5_31;
      MR_Word V_6_32;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      V_5_31 = (MR_Word) SetB0_6;
      succeeded = mercury__list__delete_first_3_p_0(TypeInfo_24_24, V_5_31, E_4, &V_6_32);
      if (succeeded)
      {
        SetB1_9 = (MR_Word) V_6_32;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_15;

        {
          Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (SetA1_8));
          MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (SetB1_9));
        }
        mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_22, (MR_String) "remove", HeadVar__2_2, Var_15, Result_7);
      }
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove\'/3", (MR_String) "unexpected success");
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeInfo_26_26;
      MR_String Var_19;
      MR_String Var_20;
      MR_String Var_21;
      MR_Word V_5_34;
      MR_Word V_6_35;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_26_26  = TypeInfo;
}
      V_5_34 = (MR_Word) SetB0_6;
      succeeded = mercury__list__delete_first_3_p_0(TypeInfo_26_26, V_5_34, E_4, &V_6_35);
      if (succeeded)
      {
        Var_19 = (MR_String) "test_bitset";
        Var_20 = (MR_String) "predicate \140test_bitset.remove\'/3";
        Var_21 = (MR_String) "unexpected failure";
        mercury__require__unexpected_3_p_0(Var_19, Var_20, Var_21);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__test_bitset__delete_list_3_p_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Word Es_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_10_24;
    MR_Word TypeInfo_8_29;
    MR_Word SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA_8;
    MR_Word SetB_9;
    MR_Word Var_12;
    MR_Word V_6_22;
    MR_Word V_4_27;
    MR_Integer V_5_34;
    MR_Integer V_5_48;
    MR_Word V_4_54;
    MR_Word V_5_55;
    MR_Word V_6_56;

{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_10_24  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_29  = TypeInfo;
}
    mercury__list__length_acc_3_p_0(TypeInfo_8_29, Es_4, (MR_Integer) 0, &V_5_34);
    mercury__list__merge_sort_3_p_0(TypeInfo_8_29, V_5_34, Es_4, &V_4_27);
    V_6_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_13, V_4_27);
    SetA_8 = mercury__tree_bitset__difference_2_f_0(TypeInfo_10_24, SetA0_5, V_6_22);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    mercury__list__length_acc_3_p_0(TypeInfo_15_15, Es_4, (MR_Integer) 0, &V_5_48);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, V_5_48, Es_4, &V_5_55);
    V_4_54 = (MR_Word) SetB0_6;
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_15_15, V_4_54, V_5_55, &V_6_56);
    SetB_9 = (MR_Word) V_6_56;
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SetA_8));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (SetB_9));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_13, (MR_String) "delete_list", HeadVar__2_2, Var_12, Result_7);
  }
}

void MR_CALL 
mercury__test_bitset__delete_3_p_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  {
    MR_Word TypeInfo_15_15;
    MR_Word SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA_8;
    MR_Word SetB_9;
    MR_Word Var_12;
    MR_Word V_11_25;
    MR_Word V_4_26;
    MR_Word V_5_27;
    MR_Word V_6_28;

    SetA_8 = mercury__tree_bitset__delete_2_f_0(TypeClassInfo_for_enum_13, SetA0_5, E_4);
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    V_11_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      V_5_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_5_27, 0) = E_4;
      MR_hl_field(MR_mktag(1), V_5_27, 1) = ((MR_Box) (V_11_25));
    }
    V_4_26 = (MR_Word) SetB0_6;
    mercury__set_ordlist__difference_loop_3_p_0(TypeInfo_15_15, V_4_26, V_5_27, &V_6_28);
    SetB_9 = (MR_Word) V_6_28;
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SetA_8));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (SetB_9));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_13, (MR_String) "delete", HeadVar__2_2, Var_12, Result_7);
  }
}

void MR_CALL 
mercury__test_bitset__insert_list_3_p_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Word Es_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_10_24;
    MR_Word TypeInfo_8_29;
    MR_Word SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA_8;
    MR_Word SetB_9;
    MR_Word Var_12;
    MR_Word V_6_22;
    MR_Word V_4_27;
    MR_Integer V_5_34;
    MR_Integer V_5_48;
    MR_Word V_4_54;
    MR_Word V_5_55;
    MR_Word V_6_56;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_10_24  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_29  = TypeInfo;
}
    mercury__list__length_acc_3_p_0(TypeInfo_8_29, Es_4, (MR_Integer) 0, &V_5_34);
    mercury__list__merge_sort_3_p_0(TypeInfo_8_29, V_5_34, Es_4, &V_4_27);
    V_6_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_13, V_4_27);
    SetA_8 = mercury__tree_bitset__union_2_f_0(TypeInfo_10_24, V_6_22, SetA0_5);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    mercury__list__length_acc_3_p_0(TypeInfo_15_15, Es_4, (MR_Integer) 0, &V_5_48);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, V_5_48, Es_4, &V_4_54);
    V_5_55 = (MR_Word) SetB0_6;
    mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_15_15, V_4_54, V_5_55, &V_6_56);
    SetB_9 = (MR_Word) V_6_56;
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SetA_8));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (SetB_9));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_13, (MR_String) "insert_list", HeadVar__2_2, Var_12, Result_7);
  }
}

MR_bool MR_CALL 
mercury__test_bitset__insert_new_3_p_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  {
    MR_bool succeeded;
    MR_Word SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA_8;

    succeeded = mercury__tree_bitset__insert_new_3_p_0(TypeClassInfo_for_enum_20, E_4, SetA0_5, &SetA_8);
    if (succeeded)
    {
      MR_Word SetB_9;
      MR_Word TypeInfo_22_22;
      MR_Word V_5_26;
      MR_Word V_6_27;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_20 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_22_22  = TypeInfo;
}
      V_5_26 = (MR_Word) SetB0_6;
      succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_22_22, V_5_26, E_4, &V_6_27);
      if (succeeded)
      {
        SetB_9 = (MR_Word) V_6_27;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word Var_13;

        {
          Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (SetA_8));
          MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (SetB_9));
        }
        mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_20, (MR_String) "insert", HeadVar__2_2, Var_13, Result_7);
      }
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.insert_new\'/3", (MR_String) "success/fail in tree_bitset/set_ordlist");
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeInfo_24_24;
      MR_String Var_17;
      MR_String Var_18;
      MR_String Var_19;
      MR_Word V_5_29;
      MR_Word V_6_30;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_20 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_24_24  = TypeInfo;
}
      V_5_29 = (MR_Word) SetB0_6;
      succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(TypeInfo_24_24, V_5_29, E_4, &V_6_30);
      if (succeeded)
      {
        Var_17 = (MR_String) "test_bitset";
        Var_18 = (MR_String) "predicate \140test_bitset.insert_new\'/3";
        Var_19 = (MR_String) "fail/success in tree_bitset/set_ordlist";
        mercury__require__unexpected_3_p_0(Var_17, Var_18, Var_19);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__test_bitset__insert_3_p_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Box E_4,
  MR_Word HeadVar__2_2,
  MR_Word * Result_7)
{
  {
    MR_Word TypeInfo_15_15;
    MR_Word SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word SetA_8;
    MR_Word SetB_9;
    MR_Word Var_12;
    MR_Word V_5_20;
    MR_Word V_6_21;

    SetA_8 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_enum_13, SetA0_5, E_4);
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    V_5_20 = (MR_Word) SetB0_6;
    mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_15_15, V_5_20, E_4, &V_6_21);
    SetB_9 = (MR_Word) V_6_21;
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (SetA_8));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (SetB_9));
    }
    mercury__test_bitset__check1_4_p_0(TypeClassInfo_for_enum_13, (MR_String) "insert", HeadVar__2_2, Var_12, Result_7);
  }
}

void MR_CALL 
mercury__test_bitset__check1_4_p_0(
  MR_Word TypeClassInfo_for_enum_18,
  MR_String Op_5,
  MR_Word TesterA_6,
  MR_Word Tester_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Word BitSetA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), TesterA_6, (MR_Integer) 0)));
    MR_Word SetA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), TesterA_6, (MR_Integer) 1)));
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
    SetListA_12 = (MR_Word) SetA_10;
    BitSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tester_7, (MR_Integer) 0)));
    Set_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tester_7, (MR_Integer) 1)));
    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_18, BitSet_13, &BitSetList_15);
    SetList_16 = (MR_Word) Set_14;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_18 ;
	Index =  (MR_Integer) 1 ;
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

	TypeClassInfo =  TypeClassInfo_for_enum_18 ;
	Index =  PolyConst1_29 ;
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
      MR_Word TypeCtorInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word Var_17;

      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Op_5));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (TesterA_6));
        MR_hl_field(MR_mktag(1), Var_17, 2) = ((MR_Box) (Tester_7));
      }
      TypeCtorInfo_23_23 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_18 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_22_22  = TypeInfo;
}
      {
        TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (TypeCtorInfo_23_23));
        MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_22_22));
      }
      {
        mercury__exception__throw_1_p_0(TypeInfo_24_24, ((MR_Box) (Var_17)));
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__test_bitset__to_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word Set_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__test_bitset__bitset_to_set_1_f_0(TypeClassInfo_for_enum_4, Set_3);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__from_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word Set_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SortedList_8;
    MR_Word TypeInfo_10_11;

{
#define MR_PROC_LABEL mercury__test_bitset__from_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_4 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_10_11  = TypeInfo;
}
    SortedList_8 = (MR_Word) Set_3;
    HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_4, SortedList_8);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__bitset_to_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_8,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Set_5;
    MR_Word TypeInfo_10_10;
    MR_Word SortedList_6;
    MR_Word V_4_14;

    SortedList_6 = mercury__test_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_enum_8, HeadVar__1_1);
{
#define MR_PROC_LABEL mercury__test_bitset__bitset_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_10_10  = TypeInfo;
}
    if ((SortedList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      V_4_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_3_15 = (MR_hl_field(MR_mktag(1), SortedList_6, (MR_Integer) 0));
      MR_Word V_4_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), SortedList_6, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_10_10, V_3_15, V_4_16, &V_4_14);
    }
    Set_5 = (MR_Word) V_4_14;
    return Set_5;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__set_to_bitset_1_f_0(
  MR_Word TypeClassInfo_for_enum_8,
  MR_Word Set_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word SortedList_6;
    MR_Word TypeInfo_10_10;

{
#define MR_PROC_LABEL mercury__test_bitset__set_to_bitset_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_10_10  = TypeInfo;
}
    SortedList_6 = (MR_Word) Set_3;
    HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_8, SortedList_6);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__test_bitset__to_sorted_list_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word A_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_enum_4, A_3);
}

void MR_CALL 
mercury__test_bitset__sorted_list_to_set_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word A_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_4, A_3);
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
mercury__test_bitset__to_sorted_list_1_f_0(
  MR_Word TypeClassInfo_for_enum_11,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word List_5;
    MR_Word A_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word B_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word ListA_6;
    MR_Word ListB_7;
    MR_Word V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_8_56 = (MR_Word) A_3;
    MR_Word TypeInfo_15_15;

    if (((MR_tag((MR_Word) V_8_56)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word V_11_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_8_56, (MR_Integer) 1)));
      MR_Integer V_10_59 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_8_56, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_11, TypeClassInfo_for_enum_11, V_11_60, V_5_21, &ListA_6);
    }
    else
    {
      MR_Word V_9_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_8_56, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_11, TypeClassInfo_for_enum_11, V_9_58, V_5_21, &ListA_6);
    }
    ListB_7 = (MR_Word) B_4;
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_15_15, ListA_6, ListB_7);
    if (succeeded)
      List_5 = ListB_7;
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.to_sorted_list\'/1", (MR_String) "failed");
    }
    return List_5;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word V_19_13;
      MR_Word V_13_16;
      MR_Integer V_22_14;
      MR_Integer V_23_15;

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_enum_20, V_11_10, HeadVar__3_3, &V_19_13);
      V_22_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 0)));
      V_23_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 1)));
      V_13_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 2)));
      if (((MR_tag((MR_Word) V_13_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word V_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_13_16, (MR_Integer) 1)));
        MR_Integer V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_13_16, (MR_Integer) 0)));
        MR_Word next_value_of_HeadVar__2_2 = V_16_19;
        MR_Word next_value_of_HeadVar__3_3 = V_19_13;

        // direct tailcall eliminated
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
      else
      {
        MR_Word V_14_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_13_16, (MR_Integer) 0)));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_enum_20, V_14_17, V_19_13, HeadVar__4_4);
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word Var_29,
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word V_15_13;
    MR_Integer V_22_17;
    MR_Integer V_18_18;
    MR_Integer V_19_19;

    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_enum_20, V_11_10, HeadVar__3_3, &V_15_13);
    V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 0)));
    V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 V_19_19  = Bits;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_29, TypeClassInfo_for_enum_20, (MR_Integer) 1, V_22_17, V_18_18, V_19_19, V_15_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
  MR_Word Var_35,
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word V_8_8,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_Integer V_12_12,
  MR_Word V_19_13,
  MR_Word * V_20_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      *V_20_14 = V_19_13;
    else
    {
      succeeded = (V_12_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box V_14_15;

        V_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(TypeClassInfo_for_enum_26, V_10_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *V_20_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = V_14_15;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_19_13));
        }
      }
      else
      {
        MR_Integer V_15_16 = (V_12_12 >> (MR_Integer) 1);
        MR_Integer V_16_18;
        MR_Integer V_17_19;
        MR_Integer V_18_20;
        MR_Integer V_23_21;
        MR_Integer V_4_73 = ((MR_Integer) -1 << V_15_16);

        V_16_18 = ~(V_4_73);
        V_17_19 = (V_16_18 & V_11_11);
        V_23_21 = (V_11_11 >> V_15_16);
        V_18_20 = (V_16_18 & V_23_21);
        switch (V_8_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer V_24_24 = (V_10_10 + V_15_16);
              MR_Word V_25_25;
              MR_Integer next_value_of_V_11_11;
              MR_Integer next_value_of_V_12_12;
              MR_Word next_value_of_V_19_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_35, TypeClassInfo_for_enum_26, V_8_8, V_24_24, V_18_20, V_15_16, V_19_13, &V_25_25);
              // direct tailcall eliminated
              next_value_of_V_11_11 = V_17_19;
              next_value_of_V_12_12 = V_15_16;
              next_value_of_V_19_13 = V_25_25;
              V_11_11 = next_value_of_V_11_11;
              V_12_12 = next_value_of_V_12_12;
              V_19_13 = next_value_of_V_19_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word V_27_22;
              MR_Integer V_28_23;
              MR_Integer next_value_of_V_10_10;
              MR_Integer next_value_of_V_11_11;
              MR_Integer next_value_of_V_12_12;
              MR_Word next_value_of_V_19_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(Var_35, TypeClassInfo_for_enum_26, V_8_8, V_10_10, V_17_19, V_15_16, V_19_13, &V_27_22);
              V_28_23 = (V_10_10 + V_15_16);
              // direct tailcall eliminated
              next_value_of_V_10_10 = V_28_23;
              next_value_of_V_11_11 = V_18_20;
              next_value_of_V_12_12 = V_15_16;
              next_value_of_V_19_13 = V_27_22;
              V_10_10 = next_value_of_V_10_10;
              V_11_11 = next_value_of_V_11_11;
              V_12_12 = next_value_of_V_12_12;
              V_19_13 = next_value_of_V_19_13;
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
mercury__test_bitset__sorted_list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_9,
  MR_Word List_3)
{
  {
    MR_Word Result_4;
    MR_Word TypeInfo_11_11;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word V_4_15;

    Var_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_9, List_3);
{
#define MR_PROC_LABEL mercury__test_bitset__sorted_list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_11_11  = TypeInfo;
}
    if ((List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      V_4_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_3_16 = (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 0));
      MR_Word V_4_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_3, (MR_Integer) 1)));

      mercury__list__remove_adjacent_dups_loop_3_p_0(TypeInfo_11_11, V_3_16, V_4_17, &V_4_15);
    }
    Var_8 = (MR_Word) V_4_15;
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (Var_8));
    }
    mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_enum_9, (MR_String) "sorted_list_to_set", Var_6, &Result_4);
    return Result_4;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__list_to_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_9,
  MR_Word List_3)
{
  {
    MR_Word Result_4;
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_8_16;
    MR_Word Var_6;
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word V_4_14;
    MR_Integer V_5_21;
    MR_Word V_4_30;
    MR_Integer V_5_33;

{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_16  = TypeInfo;
}
    mercury__list__length_acc_3_p_0(TypeInfo_8_16, List_3, (MR_Integer) 0, &V_5_21);
    mercury__list__merge_sort_3_p_0(TypeInfo_8_16, V_5_21, List_3, &V_4_14);
    Var_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(TypeClassInfo_for_enum_9, V_4_14);
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_11_11  = TypeInfo;
}
    mercury__list__length_acc_3_p_0(TypeInfo_11_11, List_3, (MR_Integer) 0, &V_5_33);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_11_11, V_5_33, List_3, &V_4_30);
    Var_8 = (MR_Word) V_4_30;
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (Var_7));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (Var_8));
    }
    mercury__test_bitset__check0_3_p_0(TypeClassInfo_for_enum_9, (MR_String) "list_to_set", Var_6, &Result_4);
    return Result_4;
  }
}

void MR_CALL 
mercury__test_bitset__check0_3_p_0(
  MR_Word TypeClassInfo_for_enum_12,
  MR_String Op_4,
  MR_Word Tester_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word BitSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tester_5, (MR_Integer) 0)));
    MR_Word Set_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Tester_5, (MR_Integer) 1)));
    MR_Word BitSetList_9;
    MR_Word SetList_10;
    MR_Word TypeInfo_19_19;

    mercury__tree_bitset__to_sorted_list_2_p_0(TypeClassInfo_for_enum_12, BitSet_7, &BitSetList_9);
    SetList_10 = (MR_Word) Set_8;
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
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
      MR_Word TypeCtorInfo_16_16;
      MR_Word TypeInfo_17_17;
      MR_Word Var_11;

      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (Op_4));
        MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (Tester_5));
      }
      TypeCtorInfo_16_16 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_15_15  = TypeInfo;
}
      {
        TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (TypeCtorInfo_16_16));
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_15_15));
      }
      {
        mercury__exception__throw_1_p_0(TypeInfo_17_17, ((MR_Box) (Var_11)));
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__superset_2_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_19;

    Var_19 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_for_T_13, SetA1_3, SetA2_5);
    succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_13, SetA2_5, Var_19);
    if (succeeded)
    {
      MR_Word V_4_30 = (MR_Word) SetB1_4;
      MR_Word V_6_32 = (MR_Word) SetB2_6;

      succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_13, V_4_30, V_6_32, V_6_32);
      if (!(succeeded))
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.superset\'/2", (MR_String) "unexpected success");
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String Var_10;
      MR_String Var_11;
      MR_String Var_12;
      MR_Word V_4_38 = (MR_Word) SetB1_4;
      MR_Word V_6_40 = (MR_Word) SetB2_6;

      succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_13, V_4_38, V_6_40, V_6_40);
      if (succeeded)
      {
        Var_10 = (MR_String) "test_bitset";
        Var_11 = (MR_String) "predicate \140test_bitset.superset\'/2";
        Var_12 = (MR_String) "unexpected failure";
        mercury__require__unexpected_3_p_0(Var_10, Var_11, Var_12);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__subset_2_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word Var_17;

    Var_17 = mercury__tree_bitset__intersect_2_f_0(TypeInfo_for_T_13, SetA2_5, SetA1_3);
    succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_13, SetA1_3, Var_17);
    if (succeeded)
    {
      MR_Word V_4_26 = (MR_Word) SetB2_6;
      MR_Word V_6_28 = (MR_Word) SetB1_4;

      succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_13, V_4_26, V_6_28, V_6_28);
      if (!(succeeded))
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.subset\'/2", (MR_String) "unexpected success");
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String Var_10;
      MR_String Var_11;
      MR_String Var_12;
      MR_Word V_4_32 = (MR_Word) SetB2_6;
      MR_Word V_6_34 = (MR_Word) SetB1_4;

      succeeded = mercury__set_ordlist__intersect_loop_3_p_1(TypeInfo_for_T_13, V_4_32, V_6_34, V_6_34);
      if (succeeded)
      {
        Var_10 = (MR_String) "test_bitset";
        Var_11 = (MR_String) "predicate \140test_bitset.subset\'/2";
        Var_12 = (MR_String) "unexpected failure";
        mercury__require__unexpected_3_p_0(Var_10, Var_11, Var_12);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__equal_2_p_0(
  MR_Word TypeClassInfo_for_enum_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word EqualA_7;
    MR_Word EqualB_8;
    MR_Word TypeInfo_14_14;

    succeeded = mercury__tree_bitset__equal_2_p_0(TypeClassInfo_for_enum_12, SetA1_3, SetA2_5);
    if (succeeded)
      EqualA_7 = (MR_Integer) 1;
    else
      EqualA_7 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_14_14  = TypeInfo;
}
    succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(TypeInfo_14_14, SetB2_6, SetB1_4);
    if (succeeded)
      EqualB_8 = (MR_Integer) 1;
    else
      EqualB_8 = (MR_Integer) 0;
    succeeded = (EqualA_7 == EqualB_8);
    if (succeeded)
      succeeded = (EqualA_7 == (MR_Integer) 1);
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.equal\'/2", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), wrapper_arg_1, ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Box closure = closure_arg;

    mercury__test_bitset__IntroducedFrom__pred__member__241__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), wrapper_arg_1, cont, cont_env_ptr);
  }
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Box closure = closure_arg;

    mercury__test_bitset__IntroducedFrom__pred__member__240__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), wrapper_arg_1, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__test_bitset__member_2_p_1(
  MR_Word TypeClassInfo_for_enum_27,
  MR_Box * E_1,
  MR_Word HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word SetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word PredA_14;
    MR_Word PredB_16;
    MR_Word SolnsA_18;
    MR_Word SolnsB_19;
    MR_Word TypeCtorInfo_13_52;
    MR_Word TypeInfo_14_53;
    MR_Word V_6_42;
    MR_Word V_6_45;
    MR_Word V_7_47;
    MR_Integer V_5_67;
    MR_Box conv1_V_6_42;
    MR_Word TypeInfo_36_36;

    {
      PredA_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredA_14, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), PredA_14, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_1));
      MR_hl_field(MR_mktag(0), PredA_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), PredA_14, 3) = ((MR_Box) (TypeClassInfo_for_enum_27));
      MR_hl_field(MR_mktag(0), PredA_14, 4) = ((MR_Box) (SetA_12));
    }
    {
      PredB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredB_16, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), PredB_16, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_2));
      MR_hl_field(MR_mktag(0), PredB_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), PredB_16, 3) = ((MR_Box) (TypeClassInfo_for_enum_27));
      MR_hl_field(MR_mktag(0), PredB_16, 4) = ((MR_Box) (SetB_13));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_33_33  = TypeInfo;
}
    {
      V_6_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), V_6_45, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), V_6_45, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_3));
      MR_hl_field(MR_mktag(0), V_6_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), V_6_45, 3) = ((MR_Box) (TypeInfo_33_33));
    }
    V_7_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeCtorInfo_13_52 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      TypeInfo_14_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_53, 0) = ((MR_Box) (TypeCtorInfo_13_52));
      MR_hl_field(MR_mktag(0), TypeInfo_14_53, 1) = ((MR_Box) (TypeInfo_33_33));
    }
    mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_33_33, TypeInfo_14_53, PredA_14, V_6_45, ((MR_Box) (V_7_47)), &conv1_V_6_42);
    V_6_42 = ((MR_Word) conv1_V_6_42);
    mercury__list__length_acc_3_p_0(TypeInfo_33_33, V_6_42, (MR_Integer) 0, &V_5_67);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_33_33, V_5_67, V_6_42, &SolnsA_18);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_34_34  = TypeInfo;
}
    mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(TypeInfo_34_34, PredB_16, &SolnsB_19);
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_36_36  = TypeInfo;
}
    succeeded = mercury__list____Unify____list_1_0(TypeInfo_36_36, SolnsA_18, SolnsB_19);
    if (succeeded)
      mercury__tree_bitset__member_2_p_1(TypeClassInfo_for_enum_27, E_1, SetA_12, cont, cont_env_ptr);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (out, in)");
        return;
      }
      cont(cont_env_ptr);
    }
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), wrapper_arg_1, ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word V_3_3,
  MR_Word * V_4_4)
{
  {
    MR_Word TypeCtorInfo_13_19;
    MR_Word TypeInfo_14_20;
    MR_Word V_6_6;
    MR_Word V_6_12;
    MR_Word V_7_14;
    MR_Integer V_5_34;
    MR_Box conv1_V_6_6;

    {
      V_6_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), V_6_12, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), V_6_12, 1) = ((MR_Box) (mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1));
      MR_hl_field(MR_mktag(0), V_6_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), V_6_12, 3) = ((MR_Box) (TypeInfo_for_T_7));
    }
    V_7_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeCtorInfo_13_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      TypeInfo_14_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_20, 0) = ((MR_Box) (TypeCtorInfo_13_19));
      MR_hl_field(MR_mktag(0), TypeInfo_14_20, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_for_T_7, TypeInfo_14_20, V_3_3, V_6_12, ((MR_Box) (V_7_14)), &conv1_V_6_6);
    V_6_6 = ((MR_Word) conv1_V_6_6);
    mercury__list__length_acc_3_p_0(TypeInfo_for_T_7, V_6_6, (MR_Integer) 0, &V_5_34);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_for_T_7, V_5_34, V_6_6, V_4_4);
  }
}

MR_bool MR_CALL 
mercury__test_bitset__member_2_p_0(
  MR_Word TypeClassInfo_for_enum_27,
  MR_Box E_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word SetA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
    MR_Word SetB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
    MR_Word InSetA_6;
    MR_Word InSetB_7;
    MR_Word TypeInfo_29_29;

    succeeded = mercury__tree_bitset__member_2_p_0(TypeClassInfo_for_enum_27, E_1, SetA_4);
    if (succeeded)
      InSetA_6 = (MR_Integer) 1;
    else
      InSetA_6 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_29_29  = TypeInfo;
}
    succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_29_29, E_1, SetB_5);
    if (succeeded)
      InSetB_7 = (MR_Integer) 1;
    else
      InSetB_7 = (MR_Integer) 0;
    succeeded = (InSetA_6 == InSetB_7);
    if (succeeded)
      succeeded = (InSetA_6 == (MR_Integer) 1);
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (in, in)");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__contains_2_p_0(
  MR_Word TypeClassInfo_for_enum_11,
  MR_Word HeadVar__1_1,
  MR_Box E_5)
{
  {
    MR_bool succeeded;
    MR_Word SetA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word SetB_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word InSetA_6;
    MR_Word InSetB_7;
    MR_Word TypeInfo_13_13;

    succeeded = mercury__tree_bitset__contains_2_p_0(TypeClassInfo_for_enum_11, SetA_3, E_5);
    if (succeeded)
      InSetA_6 = (MR_Integer) 1;
    else
      InSetA_6 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_13_13  = TypeInfo;
}
    succeeded = mercury__set_ordlist__member_2_p_0(TypeInfo_13_13, E_5, SetB_4);
    if (succeeded)
      InSetB_7 = (MR_Integer) 1;
    else
      InSetB_7 = (MR_Integer) 0;
    succeeded = (InSetA_6 == InSetB_7);
    if (succeeded)
      succeeded = (InSetA_6 == (MR_Integer) 1);
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.contains\'/2", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__is_singleton_2_p_0(
  MR_Word TypeClassInfo_for_enum_13,
  MR_Word HeadVar__1_1,
  MR_Box * E_5)
{
  {
    MR_bool succeeded;
    MR_Word A_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word B_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word NonEmptyA_7;
    MR_Word NonEmptyB_9;
    MR_Box AE_6;
    MR_Box BE_8;
    MR_Word V_4_21;
    MR_Word V_5_22;
    MR_Word TypeInfo_17_17;

    succeeded = mercury__tree_bitset__is_singleton_2_p_0(TypeClassInfo_for_enum_13, A_3, &AE_6);
    if (succeeded)
      {
        NonEmptyA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NonEmptyA_7, 0) = AE_6;
      }
    else
      NonEmptyA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_4_21 = (MR_Word) B_4;
    succeeded = ((MR_tag((MR_Word) V_4_21)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      BE_8 = (MR_hl_field(MR_mktag(1), V_4_21, (MR_Integer) 0));
      V_5_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_4_21, (MR_Integer) 1)));
      succeeded = (V_5_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
      {
        NonEmptyB_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), NonEmptyB_9, 0) = BE_8;
      }
    else
      NonEmptyB_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_17_17  = TypeInfo;
}
    succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_17_17, NonEmptyA_7, NonEmptyB_9);
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) NonEmptyA_7)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
        *E_5 = (MR_hl_field(MR_mktag(1), NonEmptyA_7, (MR_Integer) 0));
    }
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_singleton\'/2", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word A_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word B_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word NonEmptyA_4;
    MR_Word NonEmptyB_5;
    MR_Word Var_12 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    MR_Word V_2_16 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    MR_Word V_3_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_4_26;
    MR_Box V_2_27;
    MR_Word V_3_28;

    succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_9, A_2, Var_12);
    succeeded = !(succeeded);
    if (succeeded)
      NonEmptyA_4 = (MR_Integer) 1;
    else
      NonEmptyA_4 = (MR_Integer) 0;
    V_4_26 = (MR_Word) B_3;
    succeeded = ((MR_tag((MR_Word) V_4_26)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      V_2_27 = (MR_hl_field(MR_mktag(1), V_4_26, (MR_Integer) 0));
      V_3_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_4_26, (MR_Integer) 1)));
      NonEmptyB_5 = (MR_Integer) 1;
    }
    else
      NonEmptyB_5 = (MR_Integer) 0;
    succeeded = (NonEmptyA_4 == NonEmptyB_5);
    if (succeeded)
      succeeded = (NonEmptyA_4 == (MR_Integer) 1);
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_non_empty\'/1", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word A_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word B_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word EmptyA_4;
    MR_Word EmptyB_5;
    MR_Word Var_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    MR_Word V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    MR_Word V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_2_25;

    succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(TypeInfo_for_T_9, A_2, Var_11);
    if (succeeded)
      EmptyA_4 = (MR_Integer) 1;
    else
      EmptyA_4 = (MR_Integer) 0;
    V_2_25 = (MR_Word) B_3;
    succeeded = (V_2_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
      EmptyB_5 = (MR_Integer) 1;
    else
      EmptyB_5 = (MR_Integer) 0;
    succeeded = (EmptyA_4 == EmptyB_5);
    if (succeeded)
      succeeded = (EmptyA_4 == (MR_Integer) 1);
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_empty\'/1", (MR_String) "failed");
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__test_bitset__count_1_f_0(
  MR_Word TypeClassInfo_for_enum_11,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Integer Count_5;
    MR_Word TypeInfo_13_13;
    MR_Word SetA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word SetB_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer CountA_6;
    MR_Integer CountB_7;
    MR_Word V_8_55 = (MR_Word) SetA_3;
    MR_Word V_3_65;

    if (((MR_tag((MR_Word) V_8_55)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word V_11_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_8_55, (MR_Integer) 1)));
      MR_Integer V_10_58 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_8_55, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_11, V_11_59, (MR_Integer) 0, &CountA_6);
    }
    else
    {
      MR_Word V_9_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_8_55, (MR_Integer) 0)));

      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_11, V_9_57, (MR_Integer) 0, &CountA_6);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__count_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_13_13  = TypeInfo;
}
    V_3_65 = (MR_Word) SetB_4;
    mercury__list__length_acc_3_p_0(TypeInfo_13_13, V_3_65, (MR_Integer) 0, &CountB_7);
    succeeded = (CountA_6 == CountB_7);
    if (succeeded)
      Count_5 = CountA_6;
    else
    {
      mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.count\'/1", (MR_String) "failed");
    }
    return Count_5;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word V_13_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 2)));
      MR_Integer V_20_17;
      MR_Integer V_22_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 0)));
      MR_Integer V_23_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      if (((MR_tag((MR_Word) V_13_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word V_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), V_13_15, (MR_Integer) 1)));
        MR_Integer V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), V_13_15, (MR_Integer) 0)));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_20, V_16_19, HeadVar__3_3, &V_20_17);
      }
      else
      {
        MR_Word V_14_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), V_13_15, (MR_Integer) 0)));

        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(TypeClassInfo_for_enum_20, V_14_16, HeadVar__3_3, &V_20_17);
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_20_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_20,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 0)));
      MR_Integer V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), V_10_9, (MR_Integer) 1)));
      MR_Integer V_18_18;
      MR_Integer V_19_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 V_18_18  = Bits;
}
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_enum_20, (MR_Integer) 0, V_22_16, V_17_17, V_18_18, HeadVar__3_3, &V_19_19);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
  MR_Word TypeClassInfo_for_enum_26,
  MR_Word V_8_8,
  MR_Integer V_10_10,
  MR_Integer V_11_11,
  MR_Integer V_12_12,
  MR_Integer V_19_13,
  MR_Integer * V_20_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (V_11_11 == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
      *V_20_14 = V_19_13;
    else
    {
      succeeded = (V_12_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box V_14_15;

        V_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(TypeClassInfo_for_enum_26, V_10_10);
        *V_20_14 = (V_19_13 + (MR_Integer) 1);
      }
      else
      {
        MR_Integer V_15_16 = (V_12_12 >> (MR_Integer) 1);
        MR_Integer V_16_18;
        MR_Integer V_17_19;
        MR_Integer V_18_20;
        MR_Integer V_23_21;
        MR_Integer V_4_72 = ((MR_Integer) -1 << V_15_16);

        V_16_18 = ~(V_4_72);
        V_17_19 = (V_16_18 & V_11_11);
        V_23_21 = (V_11_11 >> V_15_16);
        V_18_20 = (V_16_18 & V_23_21);
        switch (V_8_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer V_24_24 = (V_10_10 + V_15_16);
              MR_Integer V_25_25;
              MR_Integer next_value_of_V_11_11;
              MR_Integer next_value_of_V_12_12;
              MR_Integer next_value_of_V_19_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_enum_26, V_8_8, V_24_24, V_18_20, V_15_16, V_19_13, &V_25_25);
              // direct tailcall eliminated
              next_value_of_V_11_11 = V_17_19;
              next_value_of_V_12_12 = V_15_16;
              next_value_of_V_19_13 = V_25_25;
              V_11_11 = next_value_of_V_11_11;
              V_12_12 = next_value_of_V_12_12;
              V_19_13 = next_value_of_V_19_13;
              continue;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer V_27_22;
              MR_Integer V_28_23;
              MR_Integer next_value_of_V_10_10;
              MR_Integer next_value_of_V_11_11;
              MR_Integer next_value_of_V_12_12;
              MR_Integer next_value_of_V_19_13;

              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(TypeClassInfo_for_enum_26, V_8_8, V_10_10, V_17_19, V_15_16, V_19_13, &V_27_22);
              V_28_23 = (V_10_10 + V_15_16);
              // direct tailcall eliminated
              next_value_of_V_10_10 = V_28_23;
              next_value_of_V_11_11 = V_18_20;
              next_value_of_V_12_12 = V_15_16;
              next_value_of_V_19_13 = V_27_22;
              V_10_10 = next_value_of_V_10_10;
              V_11_11 = next_value_of_V_11_11;
              V_12_12 = next_value_of_V_12_12;
              V_19_13 = next_value_of_V_19_13;
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
mercury__test_bitset__make_singleton_set_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word * HeadVar__1_1,
  MR_Box A_3)
{
  *HeadVar__1_1 = mercury__test_bitset__make_singleton_set_1_f_0(TypeClassInfo_for_enum_4, A_3);
}

void MR_CALL 
mercury__test_bitset__singleton_set_2_p_0(
  MR_Word TypeClassInfo_for_enum_4,
  MR_Word * HeadVar__1_1,
  MR_Box A_3)
{
  *HeadVar__1_1 = mercury__test_bitset__singleton_set_1_f_0(TypeClassInfo_for_enum_4, A_3);
}

void MR_CALL 
mercury__test_bitset__init_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  {
    MR_Word Var_3 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    MR_Word Var_4 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word V_2_6 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    MR_Word V_3_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *HeadVar__1_1 = (MR_Word) &mercury__test_bitset_scalar_common_5[0];
  }
}

MR_Word MR_CALL 
mercury__test_bitset__make_singleton_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_6,
  MR_Box A_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Word V_4_11;
    MR_Word V_2_15;
    MR_Word V_3_16;
    MR_Word V_4_28;
    MR_Word V_5_29;
    MR_Word TypeInfo_8_13;
    MR_Word TypeInfo_8_8;

{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_13  = TypeInfo;
}
    V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    V_4_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    Var_4 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_enum_6, V_4_11, A_3);
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_8  = TypeInfo;
}
    V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      V_4_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_4_28, 0) = A_3;
      MR_hl_field(MR_mktag(1), V_4_28, 1) = ((MR_Box) (V_5_29));
    }
    Var_5 = (MR_Word) V_4_28;
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__singleton_set_1_f_0(
  MR_Word TypeClassInfo_for_enum_6,
  MR_Box A_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_Word V_4_11;
    MR_Word V_2_15;
    MR_Word V_3_16;
    MR_Word V_4_28;
    MR_Word V_5_29;
    MR_Word TypeInfo_8_13;
    MR_Word TypeInfo_8_8;

{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_13  = TypeInfo;
}
    V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    V_4_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    Var_4 = mercury__tree_bitset__insert_2_f_0(TypeClassInfo_for_enum_6, V_4_11, A_3);
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 TypeInfo_8_8  = TypeInfo;
}
    V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      V_4_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_4_28, 0) = A_3;
      MR_hl_field(MR_mktag(1), V_4_28, 1) = ((MR_Box) (V_5_29));
    }
    Var_5 = (MR_Word) V_4_28;
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__init_0_f_0(
  MR_Word TypeInfo_for_T_4)
{
  {
    MR_Word HeadVar__1_1 = (MR_Word) &mercury__test_bitset_scalar_common_5[0];
    MR_Word Var_2 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    MR_Word Var_3 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word V_2_6 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    MR_Word V_3_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__test_bitset____Unify____bitset_error_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__test_bitset____Compare____bitset_error_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__test_bitset____Unify____test_bitset_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__test_bitset____Compare____test_bitset_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
