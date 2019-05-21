/*
** Automatically generated from `test_bitset.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module test_bitset. */
/* :- implementation. */

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
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
  MR_Word mercury__test_bitset__SetB_13,
  MR_Box * mercury__test_bitset__LambdaHeadVar__1_21,
  MR_Cont mercury__test_bitset__cont,
  void * mercury__test_bitset__cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__240__1_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
  MR_Word mercury__test_bitset__SetA_12,
  MR_Box * mercury__test_bitset__LambdaHeadVar__1_20,
  MR_Cont mercury__test_bitset__cont,
  void * mercury__test_bitset__cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_24,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Box mercury__test_bitset__HeadVar__3_3,
  MR_Box * mercury__test_bitset__HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_24,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Box mercury__test_bitset__HeadVar__3_3,
  MR_Box * mercury__test_bitset__HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_30,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
  MR_Word mercury__test_bitset__V_8_8,
  MR_Integer mercury__test_bitset__V_10_10,
  MR_Integer mercury__test_bitset__V_11_11,
  MR_Integer mercury__test_bitset__V_12_12,
  MR_Box mercury__test_bitset__V_19_13,
  MR_Box * mercury__test_bitset__V_20_14);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__test_bitset__Var_18,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Box mercury__test_bitset__HeadVar__3_3,
  MR_Box * mercury__test_bitset__HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_21,
  MR_String mercury__test_bitset__Op_1,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__HeadVar__3_3,
  MR_Word * mercury__test_bitset__HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_24,
  MR_String mercury__test_bitset__Op_6,
  MR_Word mercury__test_bitset__TesterA_7,
  MR_Word mercury__test_bitset__TesterB_8,
  MR_Word mercury__test_bitset__Tester_9,
  MR_Word * mercury__test_bitset__Result_10);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_29,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word mercury__test_bitset__HeadVar__3_3,
  MR_Word * mercury__test_bitset__HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_29,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word mercury__test_bitset__HeadVar__3_3,
  MR_Word * mercury__test_bitset__HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_35,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
  MR_Word mercury__test_bitset__V_8_8,
  MR_Integer mercury__test_bitset__V_10_10,
  MR_Integer mercury__test_bitset__V_11_11,
  MR_Integer mercury__test_bitset__V_12_12,
  MR_Word mercury__test_bitset__V_19_13,
  MR_Word * mercury__test_bitset__V_20_14);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
  MR_Box mercury__test_bitset__closure_arg,
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box mercury__test_bitset__wrapper_arg_2,
  MR_Box * mercury__test_bitset__wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
  MR_Box mercury__test_bitset__closure_arg,
  MR_Box * mercury__test_bitset__wrapper_arg_1,
  MR_Cont mercury__test_bitset__cont,
  void * mercury__test_bitset__cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
  MR_Box mercury__test_bitset__closure_arg,
  MR_Box * mercury__test_bitset__wrapper_arg_1,
  MR_Cont mercury__test_bitset__cont,
  void * mercury__test_bitset__cont_env_ptr);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box mercury__test_bitset__closure_arg,
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box mercury__test_bitset__wrapper_arg_2,
  MR_Box * mercury__test_bitset__wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_7,
  MR_Word mercury__test_bitset__V_3_3,
  MR_Word * mercury__test_bitset__V_4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Integer mercury__test_bitset__HeadVar__3_3,
  MR_Integer * mercury__test_bitset__HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Integer mercury__test_bitset__HeadVar__3_3,
  MR_Integer * mercury__test_bitset__HeadVar__4_4);

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
  MR_Word mercury__test_bitset__V_8_8,
  MR_Integer mercury__test_bitset__V_10_10,
  MR_Integer mercury__test_bitset__V_11_11,
  MR_Integer mercury__test_bitset__V_12_12,
  MR_Integer mercury__test_bitset__V_19_13,
  MR_Integer * mercury__test_bitset__V_20_14);

static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box mercury__test_bitset__wrapper_arg_2,
  MR_Box mercury__test_bitset__wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box * mercury__test_bitset__wrapper_arg_2,
  MR_Box mercury__test_bitset__wrapper_arg_3,
  MR_Box mercury__test_bitset__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box mercury__test_bitset__wrapper_arg_2,
  MR_Box mercury__test_bitset__wrapper_arg_3);

static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box * mercury__test_bitset__wrapper_arg_2,
  MR_Box mercury__test_bitset__wrapper_arg_3,
  MR_Box mercury__test_bitset__wrapper_arg_4);


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
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
  MR_Word mercury__test_bitset__SetB_13,
  MR_Box * mercury__test_bitset__LambdaHeadVar__1_21,
  MR_Cont mercury__test_bitset__cont,
  void * mercury__test_bitset__cont_env_ptr)
{
  {
    MR_Word mercury__test_bitset__TypeInfo_31_31;

{
#define MR_PROC_LABEL mercury__test_bitset__IntroducedFrom__pred__member__241__1_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_31_31  = TypeInfo;
}
    {
      mercury__set_ordlist__member_2_p_1(mercury__test_bitset__TypeInfo_31_31, mercury__test_bitset__LambdaHeadVar__1_21, mercury__test_bitset__SetB_13, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__240__1_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
  MR_Word mercury__test_bitset__SetA_12,
  MR_Box * mercury__test_bitset__LambdaHeadVar__1_20,
  MR_Cont mercury__test_bitset__cont,
  void * mercury__test_bitset__cont_env_ptr)
{
  {
    mercury__tree_bitset__member_2_p_1(mercury__test_bitset__TypeClassInfo_for_enum_27, mercury__test_bitset__LambdaHeadVar__1_20, mercury__test_bitset__SetA_12, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
  }
}

void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_6,
  MR_Word * mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word mercury__test_bitset__HeadVar__3_3)
{
  {
    MR_Word mercury__test_bitset__TypeCtorInfo_7_7 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
    MR_Word mercury__test_bitset__TypeInfo_8_8;
    MR_Word mercury__test_bitset__TypeCtorInfo_9_9;
    MR_Word mercury__test_bitset__TypeInfo_10_10;
    MR_Word mercury__test_bitset__Cast_HeadVar1_4 = mercury__test_bitset__HeadVar__2_2;
    MR_Word mercury__test_bitset__Cast_HeadVar2_5 = mercury__test_bitset__HeadVar__3_3;

    {
      mercury__test_bitset__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_8_8, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_8_8, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_6));
    }
    mercury__test_bitset__TypeCtorInfo_9_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    {
      mercury__test_bitset__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_10_10, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_10_10, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_6));
    }
    {
      mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_8_8, mercury__test_bitset__TypeInfo_10_10, mercury__test_bitset__HeadVar__1_1, (MR_Word) mercury__test_bitset__Cast_HeadVar1_4, (MR_Word) mercury__test_bitset__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_5,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__TypeCtorInfo_6_6 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
    MR_Word mercury__test_bitset__TypeInfo_7_7;
    MR_Word mercury__test_bitset__TypeCtorInfo_8_8 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
    MR_Word mercury__test_bitset__TypeInfo_9_9;
    MR_Word mercury__test_bitset__Cast_HeadVar1_3 = mercury__test_bitset__HeadVar__1_1;
    MR_Word mercury__test_bitset__Cast_HeadVar2_4 = mercury__test_bitset__HeadVar__2_2;

    {
      mercury__test_bitset__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_7_7, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_7_7, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_5));
    }
    {
      mercury__test_bitset__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_9_9, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_9_9, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_5));
    }
    {
      mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_7_7, mercury__test_bitset__TypeInfo_9_9, (MR_Word) mercury__test_bitset__Cast_HeadVar1_3, (MR_Word) mercury__test_bitset__Cast_HeadVar2_4);
    }
    return mercury__test_bitset__succeeded;
  }
}

void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_66,
  MR_Word * mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word mercury__test_bitset__HeadVar__3_3)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Integer mercury__test_bitset__CastX_64 = (MR_Integer) mercury__test_bitset__HeadVar__2_2;
    MR_Integer mercury__test_bitset__CastY_65 = (MR_Integer) mercury__test_bitset__HeadVar__3_3;

    mercury__test_bitset__succeeded = (mercury__test_bitset__CastX_64 == mercury__test_bitset__CastY_65);
    if (mercury__test_bitset__succeeded)
      *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__test_bitset__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mercury__test_bitset__Var_114 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String mercury__test_bitset__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__test_bitset__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__test_bitset__Var_8;
                  MR_Integer mercury__test_bitset__V_7_128;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__test_bitset__Var_114 ;
	S2 =  mercury__test_bitset__ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_7_128  = Res;
}
                  mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_128 < (MR_Integer) 0);
                  if (mercury__test_bitset__succeeded)
                    mercury__test_bitset__Var_8 = (MR_Integer) 1;
                  else
                  {
                    mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_128 == (MR_Integer) 0);
                    if (mercury__test_bitset__succeeded)
                      mercury__test_bitset__Var_8 = (MR_Integer) 0;
                    else
                      mercury__test_bitset__Var_8 = (MR_Integer) 2;
                  }
                  mercury__test_bitset__succeeded = (mercury__test_bitset__Var_8 == (MR_Integer) 0);
                  mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
                  if (mercury__test_bitset__succeeded)
                    *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__Var_8;
                  else
                  {
                    MR_Word mercury__test_bitset__TypeCtorInfo_100_100 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                    MR_Word mercury__test_bitset__TypeInfo_101_101;
                    MR_Word mercury__test_bitset__TypeCtorInfo_102_102;
                    MR_Word mercury__test_bitset__TypeInfo_103_103;

                    {
                      mercury__test_bitset__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_101_101, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_100_100));
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_101_101, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                    }
                    mercury__test_bitset__TypeCtorInfo_102_102 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                    {
                      mercury__test_bitset__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_103_103, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_102_102));
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_103_103, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                    }
                    {
                      mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_101_101, mercury__test_bitset__TypeInfo_103_103, mercury__test_bitset__HeadVar__1_1, (MR_Word) mercury__test_bitset__Var_113, (MR_Word) mercury__test_bitset__ArgY2_7);
                    }
                  }
                }
                break;
              case (MR_Integer) 1:
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__test_bitset__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__test_bitset__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mercury__test_bitset__Var_108 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__test_bitset__ArgY1_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__test_bitset__ArgY2_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__test_bitset__ArgY3_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__test_bitset__Var_31;
                  MR_Integer mercury__test_bitset__V_7_118;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__test_bitset__Var_108 ;
	S2 =  mercury__test_bitset__ArgY1_26 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_7_118  = Res;
}
                  mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_118 < (MR_Integer) 0);
                  if (mercury__test_bitset__succeeded)
                    mercury__test_bitset__Var_31 = (MR_Integer) 1;
                  else
                  {
                    mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_118 == (MR_Integer) 0);
                    if (mercury__test_bitset__succeeded)
                      mercury__test_bitset__Var_31 = (MR_Integer) 0;
                    else
                      mercury__test_bitset__Var_31 = (MR_Integer) 2;
                  }
                  mercury__test_bitset__succeeded = (mercury__test_bitset__Var_31 == (MR_Integer) 0);
                  mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
                  if (mercury__test_bitset__succeeded)
                    *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__Var_31;
                  else
                  {
                    MR_Word mercury__test_bitset__Var_32;
                    MR_Word mercury__test_bitset__TypeCtorInfo_87_87 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                    MR_Word mercury__test_bitset__TypeInfo_88_88;
                    MR_Word mercury__test_bitset__TypeCtorInfo_89_89 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                    MR_Word mercury__test_bitset__TypeInfo_90_90;

                    {
                      mercury__test_bitset__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_88_88, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_87_87));
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_88_88, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                    }
                    {
                      mercury__test_bitset__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_90_90, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_89_89));
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_90_90, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                    }
                    {
                      mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_88_88, mercury__test_bitset__TypeInfo_90_90, &mercury__test_bitset__Var_32, (MR_Word) mercury__test_bitset__Var_107, (MR_Word) mercury__test_bitset__ArgY2_28);
                    }
                    mercury__test_bitset__succeeded = (mercury__test_bitset__Var_32 == (MR_Integer) 0);
                    mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
                    if (mercury__test_bitset__succeeded)
                      *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__Var_32;
                    else
                    {
                      MR_Word mercury__test_bitset__TypeCtorInfo_93_93 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                      MR_Word mercury__test_bitset__TypeInfo_94_94;
                      MR_Word mercury__test_bitset__TypeCtorInfo_95_95;
                      MR_Word mercury__test_bitset__TypeInfo_96_96;

                      {
                        mercury__test_bitset__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_94_94, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_93_93));
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_94_94, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                      }
                      mercury__test_bitset__TypeCtorInfo_95_95 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                      {
                        mercury__test_bitset__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_96_96, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_95_95));
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_96_96, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                      }
                      {
                        mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_94_94, mercury__test_bitset__TypeInfo_96_96, mercury__test_bitset__HeadVar__1_1, (MR_Word) mercury__test_bitset__Var_106, (MR_Word) mercury__test_bitset__ArgY3_30);
                      }
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__test_bitset__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mercury__test_bitset__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__test_bitset__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
            MR_String mercury__test_bitset__Var_112 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__test_bitset__ArgY1_54 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__test_bitset__ArgY2_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__test_bitset__ArgY3_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__test_bitset__ArgY4_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mercury__test_bitset__Var_61;
                  MR_Integer mercury__test_bitset__V_7_123;

{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__test_bitset__Var_112 ;
	S2 =  mercury__test_bitset__ArgY1_54 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_7_123  = Res;
}
                  mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_123 < (MR_Integer) 0);
                  if (mercury__test_bitset__succeeded)
                    mercury__test_bitset__Var_61 = (MR_Integer) 1;
                  else
                  {
                    mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_123 == (MR_Integer) 0);
                    if (mercury__test_bitset__succeeded)
                      mercury__test_bitset__Var_61 = (MR_Integer) 0;
                    else
                      mercury__test_bitset__Var_61 = (MR_Integer) 2;
                  }
                  mercury__test_bitset__succeeded = (mercury__test_bitset__Var_61 == (MR_Integer) 0);
                  mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
                  if (mercury__test_bitset__succeeded)
                    *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__Var_61;
                  else
                  {
                    MR_Word mercury__test_bitset__Var_62;
                    MR_Word mercury__test_bitset__TypeCtorInfo_68_68 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                    MR_Word mercury__test_bitset__TypeInfo_69_69;
                    MR_Word mercury__test_bitset__TypeCtorInfo_70_70 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                    MR_Word mercury__test_bitset__TypeInfo_71_71;

                    {
                      mercury__test_bitset__TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_69_69, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_68_68));
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_69_69, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                    }
                    {
                      mercury__test_bitset__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_71_71, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_70_70));
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_71_71, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                    }
                    {
                      mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_69_69, mercury__test_bitset__TypeInfo_71_71, &mercury__test_bitset__Var_62, (MR_Word) mercury__test_bitset__Var_111, (MR_Word) mercury__test_bitset__ArgY2_56);
                    }
                    mercury__test_bitset__succeeded = (mercury__test_bitset__Var_62 == (MR_Integer) 0);
                    mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
                    if (mercury__test_bitset__succeeded)
                      *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__Var_62;
                    else
                    {
                      MR_Word mercury__test_bitset__Var_63;
                      MR_Word mercury__test_bitset__TypeCtorInfo_74_74 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                      MR_Word mercury__test_bitset__TypeInfo_75_75;
                      MR_Word mercury__test_bitset__TypeCtorInfo_76_76 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                      MR_Word mercury__test_bitset__TypeInfo_77_77;

                      {
                        mercury__test_bitset__TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_75_75, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_74_74));
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_75_75, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                      }
                      {
                        mercury__test_bitset__TypeInfo_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_77_77, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_76_76));
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_77_77, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                      }
                      {
                        mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_75_75, mercury__test_bitset__TypeInfo_77_77, &mercury__test_bitset__Var_63, (MR_Word) mercury__test_bitset__Var_110, (MR_Word) mercury__test_bitset__ArgY3_58);
                      }
                      mercury__test_bitset__succeeded = (mercury__test_bitset__Var_63 == (MR_Integer) 0);
                      mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
                      if (mercury__test_bitset__succeeded)
                        *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__Var_63;
                      else
                      {
                        MR_Word mercury__test_bitset__TypeCtorInfo_80_80 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                        MR_Word mercury__test_bitset__TypeInfo_81_81;
                        MR_Word mercury__test_bitset__TypeCtorInfo_82_82;
                        MR_Word mercury__test_bitset__TypeInfo_83_83;

                        {
                          mercury__test_bitset__TypeInfo_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_81_81, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_80_80));
                          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_81_81, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                        }
                        mercury__test_bitset__TypeCtorInfo_82_82 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                        {
                          mercury__test_bitset__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_83_83, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_82_82));
                          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_83_83, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
                        }
                        {
                          mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_81_81, mercury__test_bitset__TypeInfo_83_83, mercury__test_bitset__HeadVar__1_1, (MR_Word) mercury__test_bitset__Var_109, (MR_Word) mercury__test_bitset__ArgY4_60);
                        }
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
  MR_Word mercury__test_bitset__TypeInfo_for_T_23,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Integer mercury__test_bitset__CastX_21 = (MR_Integer) mercury__test_bitset__HeadVar__1_1;
    MR_Integer mercury__test_bitset__CastY_22 = (MR_Integer) mercury__test_bitset__HeadVar__2_2;

    mercury__test_bitset__succeeded = (mercury__test_bitset__CastX_21 == mercury__test_bitset__CastY_22);
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__test_bitset__TypeCtorInfo_54_54;
            MR_Word mercury__test_bitset__TypeInfo_55_55;
            MR_Word mercury__test_bitset__TypeCtorInfo_56_56;
            MR_Word mercury__test_bitset__TypeInfo_57_57;
            MR_String mercury__test_bitset__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__test_bitset__ArgY1_4;
            MR_Word mercury__test_bitset__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__test_bitset__ArgY2_6;

            mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__test_bitset__succeeded)
            {
              mercury__test_bitset__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
              mercury__test_bitset__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
              mercury__test_bitset__succeeded = (strcmp(mercury__test_bitset__ArgX1_3, mercury__test_bitset__ArgY1_4) == 0);
              if (mercury__test_bitset__succeeded)
              {
                mercury__test_bitset__TypeCtorInfo_54_54 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                mercury__test_bitset__TypeCtorInfo_56_56 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                {
                  mercury__test_bitset__TypeInfo_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_55_55, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_54_54));
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_55_55, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
                }
                {
                  mercury__test_bitset__TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_57_57, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_56_56));
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_57_57, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
                }
                {
                  mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_55_55, mercury__test_bitset__TypeInfo_57_57, (MR_Word) mercury__test_bitset__ArgX2_5, (MR_Word) mercury__test_bitset__ArgY2_6);
                }
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__test_bitset__TypeCtorInfo_24_24;
            MR_Word mercury__test_bitset__TypeCtorInfo_26_26;
            MR_Word mercury__test_bitset__TypeInfo_31_31;
            MR_Word mercury__test_bitset__TypeInfo_33_33;
            MR_String mercury__test_bitset__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__test_bitset__ArgY1_8;
            MR_Word mercury__test_bitset__ArgX2_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__test_bitset__ArgY2_10;
            MR_Word mercury__test_bitset__ArgX3_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__test_bitset__ArgY3_12;

            mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__test_bitset__succeeded)
            {
              mercury__test_bitset__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
              mercury__test_bitset__ArgY2_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
              mercury__test_bitset__ArgY3_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 2)));
              mercury__test_bitset__succeeded = (strcmp(mercury__test_bitset__ArgX1_7, mercury__test_bitset__ArgY1_8) == 0);
              if (mercury__test_bitset__succeeded)
              {
                mercury__test_bitset__TypeCtorInfo_24_24 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                mercury__test_bitset__TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                {
                  mercury__test_bitset__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_24_24));
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
                }
                {
                  mercury__test_bitset__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_33_33, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_26_26));
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_33_33, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
                }
                {
                  mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_31_31, mercury__test_bitset__TypeInfo_33_33, (MR_Word) mercury__test_bitset__ArgX2_9, (MR_Word) mercury__test_bitset__ArgY2_10);
                }
                if (mercury__test_bitset__succeeded)
                  {
                    mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_31_31, mercury__test_bitset__TypeInfo_33_33, (MR_Word) mercury__test_bitset__ArgX3_11, (MR_Word) mercury__test_bitset__ArgY3_12);
                  }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__test_bitset__TypeCtorInfo_36_36;
            MR_Word mercury__test_bitset__TypeCtorInfo_38_38;
            MR_Word mercury__test_bitset__TypeInfo_49_49;
            MR_Word mercury__test_bitset__TypeInfo_51_51;
            MR_String mercury__test_bitset__ArgX1_13 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__test_bitset__ArgY1_14;
            MR_Word mercury__test_bitset__ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__test_bitset__ArgY2_16;
            MR_Word mercury__test_bitset__ArgX3_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__test_bitset__ArgY3_18;
            MR_Word mercury__test_bitset__ArgX4_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__test_bitset__ArgY4_20;

            mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__test_bitset__succeeded)
            {
              mercury__test_bitset__ArgY1_14 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
              mercury__test_bitset__ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
              mercury__test_bitset__ArgY3_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 2)));
              mercury__test_bitset__ArgY4_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 3)));
              mercury__test_bitset__succeeded = (strcmp(mercury__test_bitset__ArgX1_13, mercury__test_bitset__ArgY1_14) == 0);
              if (mercury__test_bitset__succeeded)
              {
                mercury__test_bitset__TypeCtorInfo_36_36 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
                mercury__test_bitset__TypeCtorInfo_38_38 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
                {
                  mercury__test_bitset__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_49_49, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_36_36));
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_49_49, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
                }
                {
                  mercury__test_bitset__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_51_51, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_38_38));
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_51_51, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
                }
                {
                  mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_49_49, mercury__test_bitset__TypeInfo_51_51, (MR_Word) mercury__test_bitset__ArgX2_15, (MR_Word) mercury__test_bitset__ArgY2_16);
                }
                if (mercury__test_bitset__succeeded)
                {
                  {
                    mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_49_49, mercury__test_bitset__TypeInfo_51_51, (MR_Word) mercury__test_bitset__ArgX3_17, (MR_Word) mercury__test_bitset__ArgY3_18);
                  }
                  if (mercury__test_bitset__succeeded)
                    {
                      mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_49_49, mercury__test_bitset__TypeInfo_51_51, (MR_Word) mercury__test_bitset__ArgX4_19, (MR_Word) mercury__test_bitset__ArgY4_20);
                    }
                }
              }
            }
          }
          break;
      }
    return mercury__test_bitset__succeeded;
  }
}

void MR_CALL 
mercury__test_bitset__filter_4_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_23,
  MR_Word mercury__test_bitset__Pred_5,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__ResultIn_8,
  MR_Word * mercury__test_bitset__ResultOut_9)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__TypeInfo_26_26;
    MR_Word mercury__test_bitset__TypeInfo_14_50;
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetListA_10;
    MR_Word mercury__test_bitset__SetListB_11;
    MR_Word mercury__test_bitset__InSetA_12;
    MR_Word mercury__test_bitset__OutSetA_13;
    MR_Word mercury__test_bitset__InSetB_14;
    MR_Word mercury__test_bitset__OutSetB_15;
    MR_Word mercury__test_bitset__InSetListA_16;
    MR_Word mercury__test_bitset__InSetListB_17;
    MR_Word mercury__test_bitset__OutSetListA_18;
    MR_Word mercury__test_bitset__OutSetListB_19;
    MR_Word mercury__test_bitset__V_9_46;
    MR_Word mercury__test_bitset__V_10_47;
    MR_Word mercury__test_bitset__V_11_48;
    MR_Word mercury__test_bitset__V_5_54;
    MR_Word mercury__test_bitset__V_8_89;
    MR_Word mercury__test_bitset__TypeInfo_30_30;
    MR_Word mercury__test_bitset__TypeInfo_34_34;
    MR_Word mercury__test_bitset__TypeInfo_38_38;
    MR_Integer mercury__test_bitset__PolyConst1_33;
    MR_Integer mercury__test_bitset__PolyConst1_37;

    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
    mercury__test_bitset__SetListB_11 = (MR_Word) mercury__test_bitset__SetB_7;
    mercury__test_bitset__V_5_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__test_bitset__V_8_89 = (MR_Word) mercury__test_bitset__SetA_6;
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_89)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__test_bitset__V_11_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_89, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_10_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_89, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__V_11_93, mercury__test_bitset__V_5_54, &mercury__test_bitset__V_9_46);
      }
    }
    else
    {
      MR_Word mercury__test_bitset__V_9_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_89, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__V_9_91, mercury__test_bitset__V_5_54, &mercury__test_bitset__V_9_46);
      }
    }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_50  = TypeInfo;
}
    {
      mercury__list__filter_4_p_0(mercury__test_bitset__TypeInfo_14_50, mercury__test_bitset__Pred_5, mercury__test_bitset__V_9_46, &mercury__test_bitset__V_10_47, &mercury__test_bitset__V_11_48);
    }
    {
      mercury__test_bitset__InSetA_12 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__V_10_47);
    }
    {
      mercury__test_bitset__OutSetA_13 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__V_11_48);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
}
    {
      mercury__set_ordlist__filter_4_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__Pred_5, mercury__test_bitset__SetB_7, &mercury__test_bitset__InSetB_14, &mercury__test_bitset__OutSetB_15);
    }
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__InSetA_12, &mercury__test_bitset__InSetListA_16);
    }
    mercury__test_bitset__InSetListB_17 = (MR_Word) mercury__test_bitset__InSetB_14;
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__OutSetA_13, &mercury__test_bitset__OutSetListA_18);
    }
    mercury__test_bitset__OutSetListB_19 = (MR_Word) mercury__test_bitset__OutSetB_15;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_30_30  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_30_30, mercury__test_bitset__SetListA_10, mercury__test_bitset__SetListB_11);
    }
    if (mercury__test_bitset__succeeded)
    {
      mercury__test_bitset__PolyConst1_33 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_33 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
}
      {
        mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__InSetListA_16, mercury__test_bitset__InSetListB_17);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__PolyConst1_37 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_37 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_38_38  = TypeInfo;
}
        {
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_38_38, mercury__test_bitset__OutSetListA_18, mercury__test_bitset__OutSetListB_19);
        }
      }
    }
    if (mercury__test_bitset__succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *mercury__test_bitset__ResultIn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__InSetA_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__InSetB_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *mercury__test_bitset__ResultOut_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__OutSetA_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__OutSetB_15));
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
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_17,
  MR_Word mercury__test_bitset__Pred_4,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__Result_7;
    MR_Word mercury__test_bitset__TypeInfo_20_20;
    MR_Word mercury__test_bitset__TypeInfo_11_37;
    MR_Word mercury__test_bitset__SetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetListA_8;
    MR_Word mercury__test_bitset__SetListB_9;
    MR_Word mercury__test_bitset__InSetA_10;
    MR_Word mercury__test_bitset__InSetB_11;
    MR_Word mercury__test_bitset__InSetListA_12;
    MR_Word mercury__test_bitset__InSetListB_13;
    MR_Word mercury__test_bitset__V_7_34;
    MR_Word mercury__test_bitset__V_8_35;
    MR_Word mercury__test_bitset__V_5_41;
    MR_Word mercury__test_bitset__V_8_76;
    MR_Word mercury__test_bitset__TypeInfo_23_23;
    MR_Word mercury__test_bitset__TypeInfo_27_27;
    MR_Integer mercury__test_bitset__PolyConst1_26;

    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_5, &mercury__test_bitset__SetListA_8);
    }
    mercury__test_bitset__SetListB_9 = (MR_Word) mercury__test_bitset__SetB_6;
    mercury__test_bitset__V_5_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__test_bitset__V_8_76 = (MR_Word) mercury__test_bitset__SetA_5;
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_76)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__test_bitset__V_11_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_76, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_10_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_76, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_11_80, mercury__test_bitset__V_5_41, &mercury__test_bitset__V_7_34);
      }
    }
    else
    {
      MR_Word mercury__test_bitset__V_9_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_76, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_9_78, mercury__test_bitset__V_5_41, &mercury__test_bitset__V_7_34);
      }
    }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_37  = TypeInfo;
}
    {
      mercury__list__filter_3_p_0(mercury__test_bitset__TypeInfo_11_37, mercury__test_bitset__Pred_4, mercury__test_bitset__V_7_34, &mercury__test_bitset__V_8_35);
    }
    {
      mercury__test_bitset__InSetA_10 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_8_35);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_20_20  = TypeInfo;
}
    {
      mercury__test_bitset__InSetB_11 = mercury__set_ordlist__filter_2_f_0(mercury__test_bitset__TypeInfo_20_20, mercury__test_bitset__Pred_4, mercury__test_bitset__SetB_6);
    }
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__InSetA_10, &mercury__test_bitset__InSetListA_12);
    }
    mercury__test_bitset__InSetListB_13 = (MR_Word) mercury__test_bitset__InSetB_11;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_8, mercury__test_bitset__SetListB_9);
    }
    if (mercury__test_bitset__succeeded)
    {
      mercury__test_bitset__PolyConst1_26 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  mercury__test_bitset__PolyConst1_26 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_27_27  = TypeInfo;
}
      {
        mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_27_27, mercury__test_bitset__InSetListA_12, mercury__test_bitset__InSetListB_13);
      }
    }
    if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__Result_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__test_bitset__Result_7, 0) = ((MR_Box) (mercury__test_bitset__InSetA_10));
        MR_hl_field(MR_mktag(0), mercury__test_bitset__Result_7, 1) = ((MR_Box) (mercury__test_bitset__InSetB_11));
      }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.filter\'/2", (MR_String) "failed");
      }
    }
    return mercury__test_bitset__Result_7;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__all_true_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
  MR_Word mercury__test_bitset__Pred_3,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__V_5_19 = (MR_Word) mercury__test_bitset__SetA_4;

    if (((MR_tag((MR_Word) mercury__test_bitset__V_5_19)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__test_bitset__V_8_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_5_19, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_7_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_5_19, (MR_Integer) 0)));

      {
        mercury__test_bitset__succeeded = mercury__tree_bitset__interior_all_true_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__Pred_3, mercury__test_bitset__V_8_23);
      }
    }
    else
    {
      MR_Word mercury__test_bitset__V_6_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_19, (MR_Integer) 0)));

      {
        mercury__test_bitset__succeeded = mercury__tree_bitset__leaf_all_true_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__Pred_3, mercury__test_bitset__V_6_21);
      }
    }
    if (mercury__test_bitset__succeeded)
    {
      MR_Word mercury__test_bitset__TypeInfo_14_14;
      MR_Word mercury__test_bitset__V_4_25;

{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
}
      mercury__test_bitset__V_4_25 = (MR_Word) mercury__test_bitset__SetB_5;
      {
        mercury__test_bitset__succeeded = mercury__list__all_true_2_p_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__Pred_3, mercury__test_bitset__V_4_25);
      }
      if (mercury__test_bitset__succeeded)
      {
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.all_true\'/2", (MR_String) "tree_bitset but not set_ordlist");
        }
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word mercury__test_bitset__TypeInfo_16_16;
      MR_String mercury__test_bitset__Var_9;
      MR_String mercury__test_bitset__Var_10;
      MR_String mercury__test_bitset__Var_11;
      MR_Word mercury__test_bitset__V_4_27;

{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_16_16  = TypeInfo;
}
      mercury__test_bitset__V_4_27 = (MR_Word) mercury__test_bitset__SetB_5;
      {
        mercury__test_bitset__succeeded = mercury__list__all_true_2_p_0(mercury__test_bitset__TypeInfo_16_16, mercury__test_bitset__Pred_3, mercury__test_bitset__V_4_27);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__Var_9 = (MR_String) "test_bitset";
        mercury__test_bitset__Var_10 = (MR_String) "predicate \140test_bitset.all_true\'/2";
        mercury__test_bitset__Var_11 = (MR_String) "set_ordlist but not tree_bitset";
        {
          mercury__require__unexpected_3_p_0(mercury__test_bitset__Var_9, mercury__test_bitset__Var_10, mercury__test_bitset__Var_11);
        }
        mercury__test_bitset__succeeded = MR_TRUE;
      }
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_Box MR_CALL 
mercury__test_bitset__foldl_3_f_0(
  MR_Word mercury__test_bitset__TypeInfo_for_Acc_18,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_17,
  MR_Word mercury__test_bitset__Pred_5,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Box mercury__test_bitset__Acc0_8)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Box mercury__test_bitset__Acc_9;
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetListA_10;
    MR_Box mercury__test_bitset__AccA_12;
    MR_Box mercury__test_bitset__AccB_13;
    MR_Word mercury__test_bitset__V_8_50;
    MR_Word mercury__test_bitset__V_9_63;
    MR_Word mercury__test_bitset__TypeInfo_23_23;

    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
    mercury__test_bitset__V_9_63 = (MR_Word) mercury__test_bitset__SetB_7;
    mercury__test_bitset__V_8_50 = (MR_Word) mercury__test_bitset__SetA_6;
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_50)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__test_bitset__V_11_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_50, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_10_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_50, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Pred_5, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_11_54, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
      }
    }
    else
    {
      MR_Word mercury__test_bitset__V_9_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_50, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Pred_5, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_9_52, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
      }
    }
    {
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__test_bitset__Pred_5, mercury__test_bitset__V_9_63, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccB_13);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_10, mercury__test_bitset__V_9_63);
    }
    if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__AccA_12, mercury__test_bitset__AccB_13);
      }
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__Acc_9 = mercury__test_bitset__AccA_12;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.foldl\'/3", (MR_String) "failed");
      }
    }
    return mercury__test_bitset__Acc_9;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_24,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Box mercury__test_bitset__HeadVar__3_3,
  MR_Box * mercury__test_bitset__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
    else
    {
      MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__test_bitset__V_13_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 2)));
      MR_Box mercury__test_bitset__V_20_17;
      MR_Integer mercury__test_bitset__V_22_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
      MR_Integer mercury__test_bitset__V_23_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));

      if (((MR_tag((MR_Word) mercury__test_bitset__V_13_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__test_bitset__V_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_15, (MR_Integer) 1)));
        MR_Integer mercury__test_bitset__V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_15, (MR_Integer) 0)));

        {
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Var_24, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_16_19, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_20_17);
        }
      }
      else
      {
        MR_Word mercury__test_bitset__V_14_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_15, (MR_Integer) 0)));

        {
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Var_24, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_14_16, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_20_17);
        }
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__test_bitset__next_value_of_HeadVar__2_2 = mercury__test_bitset__V_11_10;
        MR_Box mercury__test_bitset__next_value_of_HeadVar__3_3 = mercury__test_bitset__V_20_17;

        mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__next_value_of_HeadVar__3_3;
        mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__next_value_of_HeadVar__2_2;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_24,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Box mercury__test_bitset__HeadVar__3_3,
  MR_Box * mercury__test_bitset__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
    else
    {
      MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
      MR_Integer mercury__test_bitset__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_18_18;
      MR_Box mercury__test_bitset__V_19_19;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_18_18  = Bits;
}
      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__Var_24, mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__test_bitset__V_22_16, mercury__test_bitset__V_17_17, mercury__test_bitset__V_18_18, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_19_19);
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__test_bitset__next_value_of_HeadVar__2_2 = mercury__test_bitset__V_11_10;
        MR_Box mercury__test_bitset__next_value_of_HeadVar__3_3 = mercury__test_bitset__V_19_19;

        mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__next_value_of_HeadVar__3_3;
        mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__next_value_of_HeadVar__2_2;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_30,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
  MR_Word mercury__test_bitset__V_8_8,
  MR_Integer mercury__test_bitset__V_10_10,
  MR_Integer mercury__test_bitset__V_11_11,
  MR_Integer mercury__test_bitset__V_12_12,
  MR_Box mercury__test_bitset__V_19_13,
  MR_Box * mercury__test_bitset__V_20_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__test_bitset__succeeded = (mercury__test_bitset__V_11_11 == (MR_Integer) 0);

      if (mercury__test_bitset__succeeded)
        *mercury__test_bitset__V_20_14 = mercury__test_bitset__V_19_13;
      else
      {
        mercury__test_bitset__succeeded = (mercury__test_bitset__V_12_12 == (MR_Integer) 1);
        if (mercury__test_bitset__succeeded)
        {
          MR_Box mercury__test_bitset__V_14_15;
          MR_Box MR_CALL (* mercury__test_bitset__func_0)(MR_Box, MR_Box, MR_Box);

          {
            mercury__test_bitset__V_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_10_10);
          }
          mercury__test_bitset__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_30, (MR_Integer) 1)));
          {
            *mercury__test_bitset__V_20_14 = mercury__test_bitset__func_0(((MR_Box) mercury__test_bitset__Var_30), mercury__test_bitset__V_14_15, mercury__test_bitset__V_19_13);
          }
        }
        else
        {
          MR_Integer mercury__test_bitset__V_15_16 = (mercury__test_bitset__V_12_12 >> (MR_Integer) 1);
          MR_Integer mercury__test_bitset__V_16_18;
          MR_Integer mercury__test_bitset__V_17_19;
          MR_Integer mercury__test_bitset__V_18_20;
          MR_Integer mercury__test_bitset__V_23_21;
          MR_Integer mercury__test_bitset__V_4_52 = ((MR_Integer) -1 << mercury__test_bitset__V_15_16);

          mercury__test_bitset__V_16_18 = ~(mercury__test_bitset__V_4_52);
          mercury__test_bitset__V_17_19 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_11_11);
          mercury__test_bitset__V_23_21 = (mercury__test_bitset__V_11_11 >> mercury__test_bitset__V_15_16);
          mercury__test_bitset__V_18_20 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_23_21);
          switch (mercury__test_bitset__V_8_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer mercury__test_bitset__V_24_24 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
                MR_Box mercury__test_bitset__V_25_25;

                {
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__Var_30, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_24_24, mercury__test_bitset__V_18_20, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_25_25);
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__test_bitset__next_value_of_V_11_11 = mercury__test_bitset__V_17_19;
                  MR_Integer mercury__test_bitset__next_value_of_V_12_12 = mercury__test_bitset__V_15_16;
                  MR_Box mercury__test_bitset__next_value_of_V_19_13 = mercury__test_bitset__V_25_25;

                  mercury__test_bitset__V_19_13 = mercury__test_bitset__next_value_of_V_19_13;
                  mercury__test_bitset__V_12_12 = mercury__test_bitset__next_value_of_V_12_12;
                  mercury__test_bitset__V_11_11 = mercury__test_bitset__next_value_of_V_11_11;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box mercury__test_bitset__V_27_22;
                MR_Integer mercury__test_bitset__V_28_23;

                {
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__Var_30, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_10_10, mercury__test_bitset__V_17_19, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_27_22);
                }
                mercury__test_bitset__V_28_23 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__test_bitset__next_value_of_V_10_10 = mercury__test_bitset__V_28_23;
                  MR_Integer mercury__test_bitset__next_value_of_V_11_11 = mercury__test_bitset__V_18_20;
                  MR_Integer mercury__test_bitset__next_value_of_V_12_12 = mercury__test_bitset__V_15_16;
                  MR_Box mercury__test_bitset__next_value_of_V_19_13 = mercury__test_bitset__V_27_22;

                  mercury__test_bitset__V_19_13 = mercury__test_bitset__next_value_of_V_19_13;
                  mercury__test_bitset__V_12_12 = mercury__test_bitset__next_value_of_V_12_12;
                  mercury__test_bitset__V_11_11 = mercury__test_bitset__next_value_of_V_11_11;
                  mercury__test_bitset__V_10_10 = mercury__test_bitset__next_value_of_V_10_10;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__test_bitset__Var_18,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Box mercury__test_bitset__HeadVar__3_3,
  MR_Box * mercury__test_bitset__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
    else
    {
      MR_Box mercury__test_bitset__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0));
      MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
      MR_Box mercury__test_bitset__V_15_13;
      MR_Box MR_CALL (* mercury__test_bitset__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_18, (MR_Integer) 1)));

      {
        mercury__test_bitset__V_15_13 = mercury__test_bitset__func_0(((MR_Box) mercury__test_bitset__Var_18), mercury__test_bitset__V_10_9, mercury__test_bitset__HeadVar__3_3);
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__test_bitset__next_value_of_HeadVar__2_2 = mercury__test_bitset__V_11_10;
        MR_Box mercury__test_bitset__next_value_of_HeadVar__3_3 = mercury__test_bitset__V_15_13;

        mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__next_value_of_HeadVar__3_3;
        mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__next_value_of_HeadVar__2_2;
      }
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__foldl_4_p_1(
  MR_Word mercury__test_bitset__TypeInfo_for_Acc_18,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_17,
  MR_Word mercury__test_bitset__Pred_5,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Box mercury__test_bitset__Acc0_8,
  MR_Box * mercury__test_bitset__Acc_9)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__TypeInfo_21_21;
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetListA_10;
    MR_Word mercury__test_bitset__SetListB_11;
    MR_Box mercury__test_bitset__AccA_12;
    MR_Box mercury__test_bitset__AccB_13;
    MR_Word mercury__test_bitset__V_8_31;
    MR_Word mercury__test_bitset__V_10_44;
    MR_Word mercury__test_bitset__TypeInfo_23_23;
    MR_Integer mercury__test_bitset__PolyConst1_22;

    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
    mercury__test_bitset__SetListB_11 = (MR_Word) mercury__test_bitset__SetB_7;
    mercury__test_bitset__V_8_31 = (MR_Word) mercury__test_bitset__SetA_6;
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_31)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__test_bitset__V_11_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_31, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_10_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_31, (MR_Integer) 0)));

      {
        mercury__test_bitset__succeeded = mercury__tree_bitset__do_foldl_pred_4_p_3(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__V_11_35, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
      }
    }
    else
    {
      MR_Word mercury__test_bitset__V_9_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_31, (MR_Integer) 0)));

      {
        mercury__test_bitset__succeeded = mercury__tree_bitset__leaf_foldl_pred_4_p_3(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__V_9_33, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
      }
    }
    if (mercury__test_bitset__succeeded)
    {
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_21_21  = TypeInfo;
}
      mercury__test_bitset__V_10_44 = (MR_Word) mercury__test_bitset__SetB_7;
      {
        mercury__test_bitset__succeeded = mercury__list__foldl_4_p_3(mercury__test_bitset__TypeInfo_21_21, mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__Pred_5, mercury__test_bitset__V_10_44, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccB_13);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__PolyConst1_22 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  mercury__test_bitset__PolyConst1_22 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
}
        {
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_10, mercury__test_bitset__SetListB_11);
        }
        if (mercury__test_bitset__succeeded)
          {
            mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__AccA_12, mercury__test_bitset__AccB_13);
          }
        if (mercury__test_bitset__succeeded)
          *mercury__test_bitset__Acc_9 = mercury__test_bitset__AccA_12;
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
          }
        }
        mercury__test_bitset__succeeded = MR_TRUE;
      }
    }
    return mercury__test_bitset__succeeded;
  }
}

void MR_CALL 
mercury__test_bitset__foldl_4_p_0(
  MR_Word mercury__test_bitset__TypeInfo_for_Acc_18,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_17,
  MR_Word mercury__test_bitset__Pred_5,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Box mercury__test_bitset__Acc0_8,
  MR_Box * mercury__test_bitset__Acc_9)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__TypeInfo_21_21;
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetListA_10;
    MR_Word mercury__test_bitset__SetListB_11;
    MR_Box mercury__test_bitset__AccA_12;
    MR_Box mercury__test_bitset__AccB_13;
    MR_Word mercury__test_bitset__V_8_31;
    MR_Word mercury__test_bitset__V_10_44;
    MR_Word mercury__test_bitset__TypeInfo_23_23;

    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
    mercury__test_bitset__SetListB_11 = (MR_Word) mercury__test_bitset__SetB_7;
    mercury__test_bitset__V_8_31 = (MR_Word) mercury__test_bitset__SetA_6;
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_31)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__test_bitset__V_11_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_31, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_10_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_31, (MR_Integer) 0)));

      {
        mercury__tree_bitset__do_foldl_pred_4_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__V_11_35, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
      }
    }
    else
    {
      MR_Word mercury__test_bitset__V_9_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_31, (MR_Integer) 0)));

      {
        mercury__tree_bitset__leaf_foldl_pred_4_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__V_9_33, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
      }
    }
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_21_21  = TypeInfo;
}
    mercury__test_bitset__V_10_44 = (MR_Word) mercury__test_bitset__SetB_7;
    {
      mercury__list__foldl_4_p_0(mercury__test_bitset__TypeInfo_21_21, mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__Pred_5, mercury__test_bitset__V_10_44, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccB_13);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_10, mercury__test_bitset__SetListB_11);
    }
    if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__AccA_12, mercury__test_bitset__AccB_13);
      }
    if (mercury__test_bitset__succeeded)
      *mercury__test_bitset__Acc_9 = mercury__test_bitset__AccA_12;
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
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__ResultIn_9,
  MR_Word * mercury__test_bitset__ResultOut_10)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__TypeInfo_28_28;
    MR_Word mercury__test_bitset__DivideBySetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__DivideBySetB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__InSetA_11;
    MR_Word mercury__test_bitset__OutSetA_12;
    MR_Word mercury__test_bitset__InSetB_13;
    MR_Word mercury__test_bitset__OutSetB_14;
    MR_Word mercury__test_bitset__DivideBySetListA_15;
    MR_Word mercury__test_bitset__DivideBySetListB_16;
    MR_Word mercury__test_bitset__SetListA_17;
    MR_Word mercury__test_bitset__SetListB_18;
    MR_Word mercury__test_bitset__InSetListA_19;
    MR_Word mercury__test_bitset__InSetListB_20;
    MR_Word mercury__test_bitset__OutSetListA_21;
    MR_Word mercury__test_bitset__OutSetListB_22;
    MR_Word mercury__test_bitset__TypeInfo_34_34;
    MR_Word mercury__test_bitset__TypeInfo_38_38;
    MR_Word mercury__test_bitset__TypeInfo_42_42;
    MR_Word mercury__test_bitset__TypeInfo_46_46;
    MR_Integer mercury__test_bitset__PolyConst1_37;
    MR_Integer mercury__test_bitset__PolyConst1_41;
    MR_Integer mercury__test_bitset__PolyConst1_45;

    {
      mercury__tree_bitset__divide_by_set_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__DivideBySetA_5, mercury__test_bitset__SetA_7, &mercury__test_bitset__InSetA_11, &mercury__test_bitset__OutSetA_12);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_28_28  = TypeInfo;
}
    {
      mercury__set_ordlist__divide_by_set_4_p_0(mercury__test_bitset__TypeInfo_28_28, mercury__test_bitset__DivideBySetB_6, mercury__test_bitset__SetB_8, &mercury__test_bitset__InSetB_13, &mercury__test_bitset__OutSetB_14);
    }
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__DivideBySetA_5, &mercury__test_bitset__DivideBySetListA_15);
    }
    mercury__test_bitset__DivideBySetListB_16 = (MR_Word) mercury__test_bitset__DivideBySetB_6;
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__SetA_7, &mercury__test_bitset__SetListA_17);
    }
    mercury__test_bitset__SetListB_18 = (MR_Word) mercury__test_bitset__SetB_8;
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__InSetA_11, &mercury__test_bitset__InSetListA_19);
    }
    mercury__test_bitset__InSetListB_20 = (MR_Word) mercury__test_bitset__InSetB_13;
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__OutSetA_12, &mercury__test_bitset__OutSetListA_21);
    }
    mercury__test_bitset__OutSetListB_22 = (MR_Word) mercury__test_bitset__OutSetB_14;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__DivideBySetListA_15, mercury__test_bitset__DivideBySetListB_16);
    }
    if (mercury__test_bitset__succeeded)
    {
      mercury__test_bitset__PolyConst1_37 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  mercury__test_bitset__PolyConst1_37 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_38_38  = TypeInfo;
}
      {
        mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_38_38, mercury__test_bitset__SetListA_17, mercury__test_bitset__SetListB_18);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__PolyConst1_41 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  mercury__test_bitset__PolyConst1_41 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_42_42  = TypeInfo;
}
        {
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_42_42, mercury__test_bitset__InSetListA_19, mercury__test_bitset__InSetListB_20);
        }
        if (mercury__test_bitset__succeeded)
        {
          mercury__test_bitset__PolyConst1_45 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  mercury__test_bitset__PolyConst1_45 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_46_46  = TypeInfo;
}
          {
            mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_46_46, mercury__test_bitset__OutSetListA_21, mercury__test_bitset__OutSetListB_22);
          }
        }
      }
    }
    if (mercury__test_bitset__succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *mercury__test_bitset__ResultIn_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__InSetA_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__InSetB_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *mercury__test_bitset__ResultOut_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__OutSetA_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__OutSetB_14));
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
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_23,
  MR_Word mercury__test_bitset__Pred_5,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__ResultIn_8,
  MR_Word * mercury__test_bitset__ResultOut_9)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__TypeInfo_25_25;
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__InSetA_10;
    MR_Word mercury__test_bitset__OutSetA_11;
    MR_Word mercury__test_bitset__InSetB_12;
    MR_Word mercury__test_bitset__OutSetB_13;
    MR_Word mercury__test_bitset__SetListA_14;
    MR_Word mercury__test_bitset__SetListB_15;
    MR_Word mercury__test_bitset__InSetListA_16;
    MR_Word mercury__test_bitset__InSetListB_17;
    MR_Word mercury__test_bitset__OutSetListA_18;
    MR_Word mercury__test_bitset__OutSetListB_19;
    MR_Word mercury__test_bitset__V_6_42;
    MR_Word mercury__test_bitset__V_7_43;
    MR_Word mercury__test_bitset__V_8_44;
    MR_Word mercury__test_bitset__V_11_45;
    MR_Word mercury__test_bitset__V_12_47;
    MR_Word mercury__test_bitset__V_9_48;
    MR_Word mercury__test_bitset__V_10_49;
    MR_Word mercury__test_bitset__TypeInfo_30_30;
    MR_Word mercury__test_bitset__TypeInfo_34_34;
    MR_Word mercury__test_bitset__TypeInfo_38_38;
    MR_Integer mercury__test_bitset__PolyConst1_33;
    MR_Integer mercury__test_bitset__PolyConst1_37;

    {
      mercury__tree_bitset__divide_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__Pred_5, mercury__test_bitset__SetA_6, &mercury__test_bitset__InSetA_10, &mercury__test_bitset__OutSetA_11);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_25_25  = TypeInfo;
}
    mercury__test_bitset__V_6_42 = (MR_Word) mercury__test_bitset__SetB_7;
    mercury__test_bitset__V_11_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__test_bitset__V_12_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__set_ordlist__divide_loop_6_p_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__Pred_5, mercury__test_bitset__V_6_42, mercury__test_bitset__V_11_45, &mercury__test_bitset__V_9_48, mercury__test_bitset__V_12_47, &mercury__test_bitset__V_10_49);
    }
    {
      mercury__list__reverse_2_p_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__V_9_48, &mercury__test_bitset__V_7_43);
    }
    mercury__test_bitset__InSetB_12 = (MR_Word) mercury__test_bitset__V_7_43;
    {
      mercury__list__reverse_2_p_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__V_10_49, &mercury__test_bitset__V_8_44);
    }
    mercury__test_bitset__OutSetB_13 = (MR_Word) mercury__test_bitset__V_8_44;
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_14);
    }
    mercury__test_bitset__SetListB_15 = (MR_Word) mercury__test_bitset__SetB_7;
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__InSetA_10, &mercury__test_bitset__InSetListA_16);
    }
    mercury__test_bitset__InSetListB_17 = (MR_Word) mercury__test_bitset__InSetB_12;
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__OutSetA_11, &mercury__test_bitset__OutSetListA_18);
    }
    mercury__test_bitset__OutSetListB_19 = (MR_Word) mercury__test_bitset__OutSetB_13;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_30_30  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_30_30, mercury__test_bitset__SetListA_14, mercury__test_bitset__SetListB_15);
    }
    if (mercury__test_bitset__succeeded)
    {
      mercury__test_bitset__PolyConst1_33 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_33 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
}
      {
        mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__InSetListA_16, mercury__test_bitset__InSetListB_17);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__PolyConst1_37 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_37 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_38_38  = TypeInfo;
}
        {
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_38_38, mercury__test_bitset__OutSetListA_18, mercury__test_bitset__OutSetListB_19);
        }
      }
    }
    if (mercury__test_bitset__succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *mercury__test_bitset__ResultIn_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__InSetA_10));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__InSetB_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        *mercury__test_bitset__ResultOut_9 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__OutSetA_11));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__OutSetB_13));
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
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
  MR_Word mercury__test_bitset__A_4,
  MR_Word mercury__test_bitset__B_5,
  MR_Word * mercury__test_bitset__HeadVar__3_3)
{
  {
    *mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__difference_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__A_4, mercury__test_bitset__B_5);
  }
}

void MR_CALL 
mercury__test_bitset__intersect_list_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
  MR_Word mercury__test_bitset__Sets_3,
  MR_Word * mercury__test_bitset__HeadVar__2_2)
{
  {
    *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__intersect_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__Sets_3);
  }
}

void MR_CALL 
mercury__test_bitset__intersect_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
  MR_Word mercury__test_bitset__A_4,
  MR_Word mercury__test_bitset__B_5,
  MR_Word * mercury__test_bitset__HeadVar__3_3)
{
  {
    *mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__intersect_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__A_4, mercury__test_bitset__B_5);
  }
}

void MR_CALL 
mercury__test_bitset__union_list_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
  MR_Word mercury__test_bitset__Sets_3,
  MR_Word * mercury__test_bitset__HeadVar__2_2)
{
  {
    *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__union_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__Sets_3);
  }
}

void MR_CALL 
mercury__test_bitset__union_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
  MR_Word mercury__test_bitset__A_4,
  MR_Word mercury__test_bitset__B_5,
  MR_Word * mercury__test_bitset__HeadVar__3_3)
{
  {
    *mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__union_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__A_4, mercury__test_bitset__B_5);
  }
}

MR_Word MR_CALL 
mercury__test_bitset__difference_2_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_15,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_Word mercury__test_bitset__Result_8;
    MR_Word mercury__test_bitset__TypeInfo_17_17;
    MR_Word mercury__test_bitset__TypeInfo_18_18;
    MR_Word mercury__test_bitset__SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA_9;
    MR_Word mercury__test_bitset__SetB_10;
    MR_Word mercury__test_bitset__Var_14;
    MR_Word mercury__test_bitset__V_4_22;
    MR_Word mercury__test_bitset__V_5_23;
    MR_Word mercury__test_bitset__V_6_24;

{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
}
    {
      mercury__test_bitset__SetA_9 = mercury__tree_bitset__difference_2_f_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__SetA1_4, mercury__test_bitset__SetA2_6);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_18_18  = TypeInfo;
}
    mercury__test_bitset__V_4_22 = (MR_Word) mercury__test_bitset__SetB1_5;
    mercury__test_bitset__V_5_23 = (MR_Word) mercury__test_bitset__SetB2_7;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_18_18, mercury__test_bitset__V_4_22, mercury__test_bitset__V_5_23, &mercury__test_bitset__V_6_24);
    }
    mercury__test_bitset__SetB_10 = (MR_Word) mercury__test_bitset__V_6_24;
    {
      mercury__test_bitset__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_14, 0) = ((MR_Box) (mercury__test_bitset__SetA_9));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_14, 1) = ((MR_Box) (mercury__test_bitset__SetB_10));
    }
    {
      mercury__test_bitset__check2_5_p_0(mercury__test_bitset__TypeClassInfo_for_enum_15, (MR_String) "difference", mercury__test_bitset__HeadVar__1_1, mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_14, &mercury__test_bitset__Result_8);
    }
    return mercury__test_bitset__Result_8;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__intersect_list_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
  MR_Word mercury__test_bitset__SetsAB_3)
{
  {
    MR_Word mercury__test_bitset__Result_4;
    MR_Word mercury__test_bitset__TypeInfo_14_14;
    MR_Word mercury__test_bitset__TypeInfo_15_15;
    MR_Word mercury__test_bitset__SetsA_5;
    MR_Word mercury__test_bitset__SetsB_6;
    MR_Word mercury__test_bitset__SetA_7;
    MR_Word mercury__test_bitset__SetB_8;
    MR_Word mercury__test_bitset__Var_11;

    {
      mercury__test_bitset__get_sets_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "intersect_list", mercury__test_bitset__SetsAB_3, &mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetsB_6);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
}
    {
      mercury__tree_bitset__intersect_list_2_p_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetA_7);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
}
    {
      mercury__test_bitset__SetB_8 = mercury__set_ordlist__intersect_list_1_f_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__SetsB_6);
    }
    {
      mercury__test_bitset__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_11, 0) = ((MR_Box) (mercury__test_bitset__SetA_7));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_11, 1) = ((MR_Box) (mercury__test_bitset__SetB_8));
    }
    {
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "intersect_list", mercury__test_bitset__Var_11, &mercury__test_bitset__Result_4);
    }
    return mercury__test_bitset__Result_4;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__intersect_2_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_15,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_Word mercury__test_bitset__Result_8;
    MR_Word mercury__test_bitset__TypeInfo_17_17;
    MR_Word mercury__test_bitset__TypeInfo_18_18;
    MR_Word mercury__test_bitset__SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA_9;
    MR_Word mercury__test_bitset__SetB_10;
    MR_Word mercury__test_bitset__Var_14;
    MR_Word mercury__test_bitset__V_4_22;
    MR_Word mercury__test_bitset__V_5_23;
    MR_Word mercury__test_bitset__V_6_24;

{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
}
    {
      mercury__test_bitset__SetA_9 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__SetA1_4, mercury__test_bitset__SetA2_6);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_18_18  = TypeInfo;
}
    mercury__test_bitset__V_4_22 = (MR_Word) mercury__test_bitset__SetB1_5;
    mercury__test_bitset__V_5_23 = (MR_Word) mercury__test_bitset__SetB2_7;
    {
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__test_bitset__TypeInfo_18_18, mercury__test_bitset__V_4_22, mercury__test_bitset__V_5_23, &mercury__test_bitset__V_6_24);
    }
    mercury__test_bitset__SetB_10 = (MR_Word) mercury__test_bitset__V_6_24;
    {
      mercury__test_bitset__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_14, 0) = ((MR_Box) (mercury__test_bitset__SetA_9));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_14, 1) = ((MR_Box) (mercury__test_bitset__SetB_10));
    }
    {
      mercury__test_bitset__check2_5_p_0(mercury__test_bitset__TypeClassInfo_for_enum_15, (MR_String) "intersect", mercury__test_bitset__HeadVar__1_1, mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_14, &mercury__test_bitset__Result_8);
    }
    return mercury__test_bitset__Result_8;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__union_list_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
  MR_Word mercury__test_bitset__SetsAB_3)
{
  {
    MR_Word mercury__test_bitset__Result_4;
    MR_Word mercury__test_bitset__TypeInfo_14_14;
    MR_Word mercury__test_bitset__TypeInfo_15_15;
    MR_Word mercury__test_bitset__SetsA_5;
    MR_Word mercury__test_bitset__SetsB_6;
    MR_Word mercury__test_bitset__SetA_7;
    MR_Word mercury__test_bitset__SetB_8;
    MR_Word mercury__test_bitset__Var_11;
    MR_Word mercury__test_bitset__V_5_20;
    MR_Word mercury__test_bitset__V_2_21;

    {
      mercury__test_bitset__get_sets_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "union_list", mercury__test_bitset__SetsAB_3, &mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetsB_6);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
}
    {
      mercury__tree_bitset__union_list_2_p_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetA_7);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
}
    mercury__test_bitset__V_2_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__test_bitset__V_5_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    {
      mercury__set_ordlist__power_union_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__SetsB_6, mercury__test_bitset__V_5_20, &mercury__test_bitset__SetB_8);
    }
    {
      mercury__test_bitset__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_11, 0) = ((MR_Box) (mercury__test_bitset__SetA_7));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_11, 1) = ((MR_Box) (mercury__test_bitset__SetB_8));
    }
    {
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "union_list", mercury__test_bitset__Var_11, &mercury__test_bitset__Result_4);
    }
    return mercury__test_bitset__Result_4;
  }
}

static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_21,
  MR_String mercury__test_bitset__Op_1,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__HeadVar__3_3,
  MR_Word * mercury__test_bitset__HeadVar__4_4)
{
  {
    MR_bool mercury__test_bitset__succeeded;

    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__test_bitset__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__test_bitset__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word mercury__test_bitset__SetA_7;
      MR_Word mercury__test_bitset__SetB_8;
      MR_Word mercury__test_bitset__SetsAB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__test_bitset__SetsA_10;
      MR_Word mercury__test_bitset__SetsB_11;
      MR_Word mercury__test_bitset__SetListA_12;
      MR_Word mercury__test_bitset__SetListB_13;
      MR_Word mercury__test_bitset__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__test_bitset__TypeInfo_25_25;

      mercury__test_bitset__SetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_14, (MR_Integer) 0)));
      mercury__test_bitset__SetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_14, (MR_Integer) 1)));
      {
        mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_21, mercury__test_bitset__SetA_7, &mercury__test_bitset__SetListA_12);
      }
      mercury__test_bitset__SetListB_13 = (MR_Word) mercury__test_bitset__SetB_8;
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_21 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_25_25  = TypeInfo;
}
      {
        mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__SetListA_12, mercury__test_bitset__SetListB_13);
      }
      if (mercury__test_bitset__succeeded)
        {
          mercury__test_bitset__get_sets_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_21, mercury__test_bitset__Op_1, mercury__test_bitset__SetsAB_9, &mercury__test_bitset__SetsA_10, &mercury__test_bitset__SetsB_11);
        }
      else
      {
        MR_String mercury__test_bitset__Var_17;
        MR_String mercury__test_bitset__Var_19;

        {
          mercury__string__append_3_p_2(mercury__test_bitset__Op_1, (MR_String) " arg list", &mercury__test_bitset__Var_19);
        }
        {
          mercury__string__append_3_p_2((MR_String) "unequal sets in ", mercury__test_bitset__Var_19, &mercury__test_bitset__Var_17);
        }
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.get_sets\'/4", mercury__test_bitset__Var_17);
          return;
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__test_bitset__HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__test_bitset__SetA_7));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__test_bitset__SetsA_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__test_bitset__HeadVar__4_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__test_bitset__SetB_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__test_bitset__SetsB_11));
      }
    }
  }
}

MR_Word MR_CALL 
mercury__test_bitset__union_2_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_15,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_Word mercury__test_bitset__Result_8;
    MR_Word mercury__test_bitset__TypeInfo_17_17;
    MR_Word mercury__test_bitset__TypeInfo_18_18;
    MR_Word mercury__test_bitset__SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA_9;
    MR_Word mercury__test_bitset__SetB_10;
    MR_Word mercury__test_bitset__Var_14;
    MR_Word mercury__test_bitset__V_4_22;
    MR_Word mercury__test_bitset__V_5_23;
    MR_Word mercury__test_bitset__V_6_24;

{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
}
    {
      mercury__test_bitset__SetA_9 = mercury__tree_bitset__union_2_f_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__SetA1_4, mercury__test_bitset__SetA2_6);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_18_18  = TypeInfo;
}
    mercury__test_bitset__V_4_22 = (MR_Word) mercury__test_bitset__SetB1_5;
    mercury__test_bitset__V_5_23 = (MR_Word) mercury__test_bitset__SetB2_7;
    {
      mercury__list__merge_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_18_18, mercury__test_bitset__V_4_22, mercury__test_bitset__V_5_23, &mercury__test_bitset__V_6_24);
    }
    mercury__test_bitset__SetB_10 = (MR_Word) mercury__test_bitset__V_6_24;
    {
      mercury__test_bitset__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_14, 0) = ((MR_Box) (mercury__test_bitset__SetA_9));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_14, 1) = ((MR_Box) (mercury__test_bitset__SetB_10));
    }
    {
      mercury__test_bitset__check2_5_p_0(mercury__test_bitset__TypeClassInfo_for_enum_15, (MR_String) "union", mercury__test_bitset__HeadVar__1_1, mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_14, &mercury__test_bitset__Result_8);
    }
    return mercury__test_bitset__Result_8;
  }
}

static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_24,
  MR_String mercury__test_bitset__Op_6,
  MR_Word mercury__test_bitset__TesterA_7,
  MR_Word mercury__test_bitset__TesterB_8,
  MR_Word mercury__test_bitset__Tester_9,
  MR_Word * mercury__test_bitset__Result_10)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__BitSetA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_7, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_7, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__BitSetListA_13;
    MR_Word mercury__test_bitset__SetListA_14;
    MR_Word mercury__test_bitset__BitSetB_15;
    MR_Word mercury__test_bitset__SetB_16;
    MR_Word mercury__test_bitset__BitSetListB_17;
    MR_Word mercury__test_bitset__SetListB_18;
    MR_Word mercury__test_bitset__BitSet_19;
    MR_Word mercury__test_bitset__Set_20;
    MR_Word mercury__test_bitset__BitSetList_21;
    MR_Word mercury__test_bitset__SetList_22;
    MR_Word mercury__test_bitset__TypeInfo_33_33;
    MR_Word mercury__test_bitset__TypeInfo_37_37;
    MR_Word mercury__test_bitset__TypeInfo_41_41;
    MR_Integer mercury__test_bitset__PolyConst1_36;
    MR_Integer mercury__test_bitset__PolyConst1_40;

    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_24, mercury__test_bitset__BitSetA_11, &mercury__test_bitset__BitSetListA_13);
    }
    mercury__test_bitset__SetListA_14 = (MR_Word) mercury__test_bitset__SetA_12;
    mercury__test_bitset__BitSetB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterB_8, (MR_Integer) 0)));
    mercury__test_bitset__SetB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterB_8, (MR_Integer) 1)));
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_24, mercury__test_bitset__BitSetB_15, &mercury__test_bitset__BitSetListB_17);
    }
    mercury__test_bitset__SetListB_18 = (MR_Word) mercury__test_bitset__SetB_16;
    mercury__test_bitset__BitSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_9, (MR_Integer) 0)));
    mercury__test_bitset__Set_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_9, (MR_Integer) 1)));
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_24, mercury__test_bitset__BitSet_19, &mercury__test_bitset__BitSetList_21);
    }
    mercury__test_bitset__SetList_22 = (MR_Word) mercury__test_bitset__Set_20;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_33_33  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__BitSetListA_13, mercury__test_bitset__SetListA_14);
    }
    if (mercury__test_bitset__succeeded)
    {
      mercury__test_bitset__PolyConst1_36 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  mercury__test_bitset__PolyConst1_36 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_37_37  = TypeInfo;
}
      {
        mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_37_37, mercury__test_bitset__BitSetListB_17, mercury__test_bitset__SetListB_18);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__PolyConst1_40 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  mercury__test_bitset__PolyConst1_40 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_41_41  = TypeInfo;
}
        {
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_41_41, mercury__test_bitset__BitSetList_21, mercury__test_bitset__SetList_22);
        }
      }
    }
    if (mercury__test_bitset__succeeded)
      *mercury__test_bitset__Result_10 = mercury__test_bitset__Tester_9;
    else
    {
      MR_Word mercury__test_bitset__TypeInfo_29_29;
      MR_Word mercury__test_bitset__TypeCtorInfo_30_30;
      MR_Word mercury__test_bitset__TypeInfo_31_31;
      MR_Word mercury__test_bitset__Var_23;

      {
        mercury__test_bitset__Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), mercury__test_bitset__Var_23, 0) = ((MR_Box) (mercury__test_bitset__Op_6));
        MR_hl_field(MR_mktag(2), mercury__test_bitset__Var_23, 1) = ((MR_Box) (mercury__test_bitset__TesterA_7));
        MR_hl_field(MR_mktag(2), mercury__test_bitset__Var_23, 2) = ((MR_Box) (mercury__test_bitset__TesterB_8));
        MR_hl_field(MR_mktag(2), mercury__test_bitset__Var_23, 3) = ((MR_Box) (mercury__test_bitset__Tester_9));
      }
      mercury__test_bitset__TypeCtorInfo_30_30 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_29_29  = TypeInfo;
}
      {
        mercury__test_bitset__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_30_30));
        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_29_29));
      }
      {
        mercury__exception__throw_1_p_0(mercury__test_bitset__TypeInfo_31_31, ((MR_Box) (mercury__test_bitset__Var_23)));
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__remove_least_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
  MR_Box * mercury__test_bitset__Least_4,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__Result_7)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Box mercury__test_bitset__LeastA_8;
    MR_Word mercury__test_bitset__SetA1_9;

    {
      mercury__test_bitset__succeeded = mercury__tree_bitset__remove_least_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, &mercury__test_bitset__LeastA_8, mercury__test_bitset__SetA0_5, &mercury__test_bitset__SetA1_9);
    }
    if (mercury__test_bitset__succeeded)
    {
      MR_Box mercury__test_bitset__LeastB_10;
      MR_Word mercury__test_bitset__SetB1_11;
      MR_Word mercury__test_bitset__V_6_34 = (MR_Word) mercury__test_bitset__SetB0_6;
      MR_Word mercury__test_bitset__V_5_35;

      mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_6_34)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__LeastB_10 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_34, (MR_Integer) 0));
        mercury__test_bitset__V_5_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_34, (MR_Integer) 1)));
        mercury__test_bitset__SetB1_11 = (MR_Word) mercury__test_bitset__V_5_35;
        mercury__test_bitset__succeeded = MR_TRUE;
      }
      if (mercury__test_bitset__succeeded)
      {
        MR_Word mercury__test_bitset__TypeInfo_32_32;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_32_32  = TypeInfo;
}
        {
          mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_32_32, mercury__test_bitset__LeastA_8, mercury__test_bitset__LeastB_10);
        }
        if (mercury__test_bitset__succeeded)
        {
          MR_Word mercury__test_bitset__Var_16;

          *mercury__test_bitset__Least_4 = mercury__test_bitset__LeastA_8;
          {
            mercury__test_bitset__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_16, 0) = ((MR_Box) (mercury__test_bitset__SetA1_9));
            MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_16, 1) = ((MR_Box) (mercury__test_bitset__SetB1_11));
          }
          {
            mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, (MR_String) "remove_least", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_16, mercury__test_bitset__Result_7);
          }
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "wrong least element");
          }
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "should be no least value");
        }
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    else
    {
      MR_String mercury__test_bitset__Var_23;
      MR_String mercury__test_bitset__Var_24;
      MR_String mercury__test_bitset__Var_25;
      MR_Word mercury__test_bitset__V_6_38 = (MR_Word) mercury__test_bitset__SetB0_6;
      MR_Box mercury__test_bitset__Var_12;
      MR_Word mercury__test_bitset__V_5_39;

      mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_6_38)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__Var_12 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_38, (MR_Integer) 0));
        mercury__test_bitset__V_5_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_38, (MR_Integer) 1)));
        mercury__test_bitset__Var_23 = (MR_String) "test_bitset";
        mercury__test_bitset__Var_24 = (MR_String) "predicate \140test_bitset.remove_least\'/3";
        mercury__test_bitset__Var_25 = (MR_String) "failed";
        {
          mercury__require__unexpected_3_p_0(mercury__test_bitset__Var_23, mercury__test_bitset__Var_24, mercury__test_bitset__Var_25);
        }
        mercury__test_bitset__succeeded = MR_TRUE;
      }
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__remove_list_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_22,
  MR_Word mercury__test_bitset__Es_4,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__Result_7)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA1_8;
    MR_Word mercury__test_bitset__TypeInfo_10_32;
    MR_Word mercury__test_bitset__TypeInfo_11_33;
    MR_Word mercury__test_bitset__TypeInfo_8_38;
    MR_Word mercury__test_bitset__V_6_30;
    MR_Word mercury__test_bitset__V_4_36;
    MR_Integer mercury__test_bitset__V_5_43;
    MR_Word mercury__test_bitset__Var_52;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_38  = TypeInfo;
}
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_8_38, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_43);
    }
    {
      mercury__list__merge_sort_3_p_0(mercury__test_bitset__TypeInfo_8_38, mercury__test_bitset__V_5_43, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_36);
    }
    {
      mercury__test_bitset__V_6_30 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_22, mercury__test_bitset__V_4_36);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_32  = TypeInfo;
}
    {
      mercury__test_bitset__Var_52 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_10_32, mercury__test_bitset__SetA0_5, mercury__test_bitset__V_6_30);
    }
    {
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_10_32, mercury__test_bitset__V_6_30, mercury__test_bitset__Var_52);
    }
    if (mercury__test_bitset__succeeded)
    {
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_33  = TypeInfo;
}
      {
        mercury__test_bitset__SetA1_8 = mercury__tree_bitset__difference_2_f_0(mercury__test_bitset__TypeInfo_11_33, mercury__test_bitset__SetA0_5, mercury__test_bitset__V_6_30);
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    if (mercury__test_bitset__succeeded)
    {
      MR_Word mercury__test_bitset__SetB1_9;
      MR_Word mercury__test_bitset__TypeInfo_24_24;
      MR_Word mercury__test_bitset__V_6_61;
      MR_Word mercury__test_bitset__V_4_65;
      MR_Word mercury__test_bitset__V_6_67;
      MR_Word mercury__test_bitset__V_4_68;
      MR_Word mercury__test_bitset__V_5_69;
      MR_Word mercury__test_bitset__V_6_70;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_24_24  = TypeInfo;
}
      {
        mercury__test_bitset__succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__Es_4, &mercury__test_bitset__V_6_61);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__V_4_65 = (MR_Word) mercury__test_bitset__SetB0_6;
        mercury__test_bitset__V_6_67 = (MR_Word) mercury__test_bitset__V_6_61;
        {
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__V_4_65, mercury__test_bitset__V_6_67, mercury__test_bitset__V_6_67);
        }
        if (mercury__test_bitset__succeeded)
        {
          mercury__test_bitset__V_4_68 = (MR_Word) mercury__test_bitset__SetB0_6;
          mercury__test_bitset__V_5_69 = (MR_Word) mercury__test_bitset__V_6_61;
          {
            mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__V_4_68, mercury__test_bitset__V_5_69, &mercury__test_bitset__V_6_70);
          }
          mercury__test_bitset__SetB1_9 = (MR_Word) mercury__test_bitset__V_6_70;
          mercury__test_bitset__succeeded = MR_TRUE;
        }
      }
      if (mercury__test_bitset__succeeded)
      {
        MR_Word mercury__test_bitset__Var_15;

        {
          mercury__test_bitset__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_15, 0) = ((MR_Box) (mercury__test_bitset__SetA1_8));
          MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_15, 1) = ((MR_Box) (mercury__test_bitset__SetB1_9));
        }
        {
          mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_22, (MR_String) "remove_list", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_15, mercury__test_bitset__Result_7);
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_list\'/3", (MR_String) "unexpected success");
        }
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word mercury__test_bitset__TypeInfo_26_26;
      MR_String mercury__test_bitset__Var_19;
      MR_String mercury__test_bitset__Var_20;
      MR_String mercury__test_bitset__Var_21;
      MR_Word mercury__test_bitset__V_6_74;
      MR_Word mercury__test_bitset__V_4_78;
      MR_Word mercury__test_bitset__V_6_80;
      MR_Word mercury__test_bitset__V_4_81;
      MR_Word mercury__test_bitset__V_5_82;
      MR_Word mercury__test_bitset__V_6_83;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
}
      {
        mercury__test_bitset__succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__Es_4, &mercury__test_bitset__V_6_74);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__V_4_78 = (MR_Word) mercury__test_bitset__SetB0_6;
        mercury__test_bitset__V_6_80 = (MR_Word) mercury__test_bitset__V_6_74;
        {
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__V_4_78, mercury__test_bitset__V_6_80, mercury__test_bitset__V_6_80);
        }
        if (mercury__test_bitset__succeeded)
        {
          mercury__test_bitset__V_4_81 = (MR_Word) mercury__test_bitset__SetB0_6;
          mercury__test_bitset__V_5_82 = (MR_Word) mercury__test_bitset__V_6_74;
          {
            mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__V_4_81, mercury__test_bitset__V_5_82, &mercury__test_bitset__V_6_83);
          }
          mercury__test_bitset__Var_19 = (MR_String) "test_bitset";
          mercury__test_bitset__Var_20 = (MR_String) "predicate \140test_bitset.remove_list\'/3";
          mercury__test_bitset__Var_21 = (MR_String) "unexpected failure";
          {
            mercury__require__unexpected_3_p_0(mercury__test_bitset__Var_19, mercury__test_bitset__Var_20, mercury__test_bitset__Var_21);
          }
          mercury__test_bitset__succeeded = MR_TRUE;
        }
      }
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__remove_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_22,
  MR_Box mercury__test_bitset__E_4,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__Result_7)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA1_8;

    {
      mercury__test_bitset__succeeded = mercury__tree_bitset__contains_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_22, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
    }
    if (mercury__test_bitset__succeeded)
    {
      {
        mercury__test_bitset__SetA1_8 = mercury__tree_bitset__delete_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_22, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    if (mercury__test_bitset__succeeded)
    {
      MR_Word mercury__test_bitset__SetB1_9;
      MR_Word mercury__test_bitset__TypeInfo_24_24;
      MR_Word mercury__test_bitset__V_5_31;
      MR_Word mercury__test_bitset__V_6_32;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_24_24  = TypeInfo;
}
      mercury__test_bitset__V_5_31 = (MR_Word) mercury__test_bitset__SetB0_6;
      {
        mercury__test_bitset__succeeded = mercury__list__delete_first_3_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__V_5_31, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_32);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__SetB1_9 = (MR_Word) mercury__test_bitset__V_6_32;
        mercury__test_bitset__succeeded = MR_TRUE;
      }
      if (mercury__test_bitset__succeeded)
      {
        MR_Word mercury__test_bitset__Var_15;

        {
          mercury__test_bitset__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_15, 0) = ((MR_Box) (mercury__test_bitset__SetA1_8));
          MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_15, 1) = ((MR_Box) (mercury__test_bitset__SetB1_9));
        }
        {
          mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_22, (MR_String) "remove", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_15, mercury__test_bitset__Result_7);
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove\'/3", (MR_String) "unexpected success");
        }
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word mercury__test_bitset__TypeInfo_26_26;
      MR_String mercury__test_bitset__Var_19;
      MR_String mercury__test_bitset__Var_20;
      MR_String mercury__test_bitset__Var_21;
      MR_Word mercury__test_bitset__V_5_34;
      MR_Word mercury__test_bitset__V_6_35;

{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
}
      mercury__test_bitset__V_5_34 = (MR_Word) mercury__test_bitset__SetB0_6;
      {
        mercury__test_bitset__succeeded = mercury__list__delete_first_3_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__V_5_34, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_35);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__Var_19 = (MR_String) "test_bitset";
        mercury__test_bitset__Var_20 = (MR_String) "predicate \140test_bitset.remove\'/3";
        mercury__test_bitset__Var_21 = (MR_String) "unexpected failure";
        {
          mercury__require__unexpected_3_p_0(mercury__test_bitset__Var_19, mercury__test_bitset__Var_20, mercury__test_bitset__Var_21);
        }
        mercury__test_bitset__succeeded = MR_TRUE;
      }
    }
    return mercury__test_bitset__succeeded;
  }
}

void MR_CALL 
mercury__test_bitset__delete_list_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
  MR_Word mercury__test_bitset__Es_4,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__Result_7)
{
  {
    MR_Word mercury__test_bitset__TypeInfo_15_15;
    MR_Word mercury__test_bitset__TypeInfo_10_24;
    MR_Word mercury__test_bitset__TypeInfo_8_29;
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA_8;
    MR_Word mercury__test_bitset__SetB_9;
    MR_Word mercury__test_bitset__Var_12;
    MR_Word mercury__test_bitset__V_6_22;
    MR_Word mercury__test_bitset__V_4_27;
    MR_Integer mercury__test_bitset__V_5_34;
    MR_Integer mercury__test_bitset__V_5_48;
    MR_Word mercury__test_bitset__V_4_54;
    MR_Word mercury__test_bitset__V_5_55;
    MR_Word mercury__test_bitset__V_6_56;

{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_24  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_29  = TypeInfo;
}
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_34);
    }
    {
      mercury__list__merge_sort_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__V_5_34, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_27);
    }
    {
      mercury__test_bitset__V_6_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__V_4_27);
    }
    {
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__difference_2_f_0(mercury__test_bitset__TypeInfo_10_24, mercury__test_bitset__SetA0_5, mercury__test_bitset__V_6_22);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
}
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_48);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_5_48, mercury__test_bitset__Es_4, &mercury__test_bitset__V_5_55);
    }
    mercury__test_bitset__V_4_54 = (MR_Word) mercury__test_bitset__SetB0_6;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_4_54, mercury__test_bitset__V_5_55, &mercury__test_bitset__V_6_56);
    }
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_56;
    {
      mercury__test_bitset__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
    }
    {
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "delete_list", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_12, mercury__test_bitset__Result_7);
    }
  }
}

void MR_CALL 
mercury__test_bitset__delete_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
  MR_Box mercury__test_bitset__E_4,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__Result_7)
{
  {
    MR_Word mercury__test_bitset__TypeInfo_15_15;
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA_8;
    MR_Word mercury__test_bitset__SetB_9;
    MR_Word mercury__test_bitset__Var_12;
    MR_Word mercury__test_bitset__V_11_25;
    MR_Word mercury__test_bitset__V_4_26;
    MR_Word mercury__test_bitset__V_5_27;
    MR_Word mercury__test_bitset__V_6_28;

    {
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__delete_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
}
    mercury__test_bitset__V_11_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__test_bitset__V_5_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_5_27, 0) = mercury__test_bitset__E_4;
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_5_27, 1) = ((MR_Box) (mercury__test_bitset__V_11_25));
    }
    mercury__test_bitset__V_4_26 = (MR_Word) mercury__test_bitset__SetB0_6;
    {
      mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_4_26, mercury__test_bitset__V_5_27, &mercury__test_bitset__V_6_28);
    }
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_28;
    {
      mercury__test_bitset__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
    }
    {
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "delete", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_12, mercury__test_bitset__Result_7);
    }
  }
}

void MR_CALL 
mercury__test_bitset__insert_list_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
  MR_Word mercury__test_bitset__Es_4,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__Result_7)
{
  {
    MR_Word mercury__test_bitset__TypeInfo_15_15;
    MR_Word mercury__test_bitset__TypeInfo_10_24;
    MR_Word mercury__test_bitset__TypeInfo_8_29;
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA_8;
    MR_Word mercury__test_bitset__SetB_9;
    MR_Word mercury__test_bitset__Var_12;
    MR_Word mercury__test_bitset__V_6_22;
    MR_Word mercury__test_bitset__V_4_27;
    MR_Integer mercury__test_bitset__V_5_34;
    MR_Integer mercury__test_bitset__V_5_48;
    MR_Word mercury__test_bitset__V_4_54;
    MR_Word mercury__test_bitset__V_5_55;
    MR_Word mercury__test_bitset__V_6_56;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_24  = TypeInfo;
}
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_29  = TypeInfo;
}
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_34);
    }
    {
      mercury__list__merge_sort_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__V_5_34, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_27);
    }
    {
      mercury__test_bitset__V_6_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__V_4_27);
    }
    {
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__union_2_f_0(mercury__test_bitset__TypeInfo_10_24, mercury__test_bitset__V_6_22, mercury__test_bitset__SetA0_5);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
}
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_48);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_5_48, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_54);
    }
    mercury__test_bitset__V_5_55 = (MR_Word) mercury__test_bitset__SetB0_6;
    {
      mercury__list__merge_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_4_54, mercury__test_bitset__V_5_55, &mercury__test_bitset__V_6_56);
    }
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_56;
    {
      mercury__test_bitset__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
    }
    {
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "insert_list", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_12, mercury__test_bitset__Result_7);
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__insert_new_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Box mercury__test_bitset__E_4,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__Result_7)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA_8;

    {
      mercury__test_bitset__succeeded = mercury__tree_bitset__insert_new_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__E_4, mercury__test_bitset__SetA0_5, &mercury__test_bitset__SetA_8);
    }
    if (mercury__test_bitset__succeeded)
    {
      MR_Word mercury__test_bitset__SetB_9;
      MR_Word mercury__test_bitset__TypeInfo_22_22;
      MR_Word mercury__test_bitset__V_5_26;
      MR_Word mercury__test_bitset__V_6_27;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_20 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_22_22  = TypeInfo;
}
      mercury__test_bitset__V_5_26 = (MR_Word) mercury__test_bitset__SetB0_6;
      {
        mercury__test_bitset__succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(mercury__test_bitset__TypeInfo_22_22, mercury__test_bitset__V_5_26, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_27);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_27;
        mercury__test_bitset__succeeded = MR_TRUE;
      }
      if (mercury__test_bitset__succeeded)
      {
        MR_Word mercury__test_bitset__Var_13;

        {
          mercury__test_bitset__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_13, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
          MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_13, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
        }
        {
          mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_String) "insert", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_13, mercury__test_bitset__Result_7);
        }
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.insert_new\'/3", (MR_String) "success/fail in tree_bitset/set_ordlist");
        }
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    else
    {
      MR_Word mercury__test_bitset__TypeInfo_24_24;
      MR_String mercury__test_bitset__Var_17;
      MR_String mercury__test_bitset__Var_18;
      MR_String mercury__test_bitset__Var_19;
      MR_Word mercury__test_bitset__V_5_29;
      MR_Word mercury__test_bitset__V_6_30;

{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_20 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_24_24  = TypeInfo;
}
      mercury__test_bitset__V_5_29 = (MR_Word) mercury__test_bitset__SetB0_6;
      {
        mercury__test_bitset__succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__V_5_29, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_30);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__Var_17 = (MR_String) "test_bitset";
        mercury__test_bitset__Var_18 = (MR_String) "predicate \140test_bitset.insert_new\'/3";
        mercury__test_bitset__Var_19 = (MR_String) "fail/success in tree_bitset/set_ordlist";
        {
          mercury__require__unexpected_3_p_0(mercury__test_bitset__Var_17, mercury__test_bitset__Var_18, mercury__test_bitset__Var_19);
        }
        mercury__test_bitset__succeeded = MR_TRUE;
      }
    }
    return mercury__test_bitset__succeeded;
  }
}

void MR_CALL 
mercury__test_bitset__insert_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
  MR_Box mercury__test_bitset__E_4,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word * mercury__test_bitset__Result_7)
{
  {
    MR_Word mercury__test_bitset__TypeInfo_15_15;
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA_8;
    MR_Word mercury__test_bitset__SetB_9;
    MR_Word mercury__test_bitset__Var_12;
    MR_Word mercury__test_bitset__V_5_20;
    MR_Word mercury__test_bitset__V_6_21;

    {
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__insert_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
}
    mercury__test_bitset__V_5_20 = (MR_Word) mercury__test_bitset__SetB0_6;
    {
      mercury__set_ordlist__insert_loop_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_5_20, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_21);
    }
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_21;
    {
      mercury__test_bitset__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
    }
    {
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "insert", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__Var_12, mercury__test_bitset__Result_7);
    }
  }
}

void MR_CALL 
mercury__test_bitset__check1_4_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_18,
  MR_String mercury__test_bitset__Op_5,
  MR_Word mercury__test_bitset__TesterA_6,
  MR_Word mercury__test_bitset__Tester_7,
  MR_Word * mercury__test_bitset__Result_8)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__BitSetA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_6, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_6, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__BitSetListA_11;
    MR_Word mercury__test_bitset__SetListA_12;
    MR_Word mercury__test_bitset__BitSet_13;
    MR_Word mercury__test_bitset__Set_14;
    MR_Word mercury__test_bitset__BitSetList_15;
    MR_Word mercury__test_bitset__SetList_16;
    MR_Word mercury__test_bitset__TypeInfo_26_26;
    MR_Word mercury__test_bitset__TypeInfo_30_30;
    MR_Integer mercury__test_bitset__PolyConst1_29;

    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_18, mercury__test_bitset__BitSetA_9, &mercury__test_bitset__BitSetListA_11);
    }
    mercury__test_bitset__SetListA_12 = (MR_Word) mercury__test_bitset__SetA_10;
    mercury__test_bitset__BitSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_7, (MR_Integer) 0)));
    mercury__test_bitset__Set_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_7, (MR_Integer) 1)));
    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_18, mercury__test_bitset__BitSet_13, &mercury__test_bitset__BitSetList_15);
    }
    mercury__test_bitset__SetList_16 = (MR_Word) mercury__test_bitset__Set_14;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_18 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__BitSetListA_11, mercury__test_bitset__SetListA_12);
    }
    if (mercury__test_bitset__succeeded)
    {
      mercury__test_bitset__PolyConst1_29 = (MR_Integer) 1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_18 ;
	Index =  mercury__test_bitset__PolyConst1_29 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_30_30  = TypeInfo;
}
      {
        mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_30_30, mercury__test_bitset__BitSetList_15, mercury__test_bitset__SetList_16);
      }
    }
    if (mercury__test_bitset__succeeded)
      *mercury__test_bitset__Result_8 = mercury__test_bitset__Tester_7;
    else
    {
      MR_Word mercury__test_bitset__TypeInfo_22_22;
      MR_Word mercury__test_bitset__TypeCtorInfo_23_23;
      MR_Word mercury__test_bitset__TypeInfo_24_24;
      MR_Word mercury__test_bitset__Var_17;

      {
        mercury__test_bitset__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__test_bitset__Var_17, 0) = ((MR_Box) (mercury__test_bitset__Op_5));
        MR_hl_field(MR_mktag(1), mercury__test_bitset__Var_17, 1) = ((MR_Box) (mercury__test_bitset__TesterA_6));
        MR_hl_field(MR_mktag(1), mercury__test_bitset__Var_17, 2) = ((MR_Box) (mercury__test_bitset__Tester_7));
      }
      mercury__test_bitset__TypeCtorInfo_23_23 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_18 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_22_22  = TypeInfo;
}
      {
        mercury__test_bitset__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_24_24, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_23_23));
        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_24_24, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_22_22));
      }
      {
        mercury__exception__throw_1_p_0(mercury__test_bitset__TypeInfo_24_24, ((MR_Box) (mercury__test_bitset__Var_17)));
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__test_bitset__to_set_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
  MR_Word mercury__test_bitset__Set_3)
{
  {
    MR_Word mercury__test_bitset__HeadVar__2_2;

    {
      mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__bitset_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__Set_3);
    }
    return mercury__test_bitset__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__from_set_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
  MR_Word mercury__test_bitset__Set_3)
{
  {
    MR_Word mercury__test_bitset__HeadVar__2_2;
    MR_Word mercury__test_bitset__SortedList_8;
    MR_Word mercury__test_bitset__TypeInfo_10_11;

{
#define MR_PROC_LABEL mercury__test_bitset__from_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_4 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_11  = TypeInfo;
}
    mercury__test_bitset__SortedList_8 = (MR_Word) mercury__test_bitset__Set_3;
    {
      mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__SortedList_8);
    }
    return mercury__test_bitset__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__bitset_to_set_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_8,
  MR_Word mercury__test_bitset__HeadVar__1_1)
{
  {
    MR_Word mercury__test_bitset__Set_5;
    MR_Word mercury__test_bitset__TypeInfo_10_10;
    MR_Word mercury__test_bitset__SortedList_6;
    MR_Word mercury__test_bitset__V_4_14;

    {
      mercury__test_bitset__SortedList_6 = mercury__test_bitset__to_sorted_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_8, mercury__test_bitset__HeadVar__1_1);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__bitset_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_10  = TypeInfo;
}
    if ((mercury__test_bitset__SortedList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__test_bitset__V_4_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box mercury__test_bitset__V_3_15 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__SortedList_6, (MR_Integer) 0));
      MR_Word mercury__test_bitset__V_4_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__SortedList_6, (MR_Integer) 1)));

      {
        mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__test_bitset__TypeInfo_10_10, mercury__test_bitset__V_3_15, mercury__test_bitset__V_4_16, &mercury__test_bitset__V_4_14);
      }
    }
    mercury__test_bitset__Set_5 = (MR_Word) mercury__test_bitset__V_4_14;
    return mercury__test_bitset__Set_5;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__set_to_bitset_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_8,
  MR_Word mercury__test_bitset__Set_3)
{
  {
    MR_Word mercury__test_bitset__HeadVar__2_2;
    MR_Word mercury__test_bitset__SortedList_6;
    MR_Word mercury__test_bitset__TypeInfo_10_10;

{
#define MR_PROC_LABEL mercury__test_bitset__set_to_bitset_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_10  = TypeInfo;
}
    mercury__test_bitset__SortedList_6 = (MR_Word) mercury__test_bitset__Set_3;
    {
      mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_8, mercury__test_bitset__SortedList_6);
    }
    return mercury__test_bitset__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__test_bitset__to_sorted_list_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
  MR_Word mercury__test_bitset__A_3,
  MR_Word * mercury__test_bitset__HeadVar__2_2)
{
  {
    *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__to_sorted_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
  }
}

void MR_CALL 
mercury__test_bitset__sorted_list_to_set_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
  MR_Word mercury__test_bitset__A_3,
  MR_Word * mercury__test_bitset__HeadVar__2_2)
{
  {
    *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
  }
}

void MR_CALL 
mercury__test_bitset__list_to_set_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
  MR_Word mercury__test_bitset__A_3,
  MR_Word * mercury__test_bitset__HeadVar__2_2)
{
  {
    *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
  }
}

MR_Word MR_CALL 
mercury__test_bitset__to_sorted_list_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_11,
  MR_Word mercury__test_bitset__HeadVar__1_1)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__List_5;
    MR_Word mercury__test_bitset__A_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__B_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__ListA_6;
    MR_Word mercury__test_bitset__ListB_7;
    MR_Word mercury__test_bitset__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__test_bitset__V_8_56 = (MR_Word) mercury__test_bitset__A_3;
    MR_Word mercury__test_bitset__TypeInfo_15_15;

    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_56)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__test_bitset__V_11_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_56, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_10_59 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_56, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__V_11_60, mercury__test_bitset__V_5_21, &mercury__test_bitset__ListA_6);
      }
    }
    else
    {
      MR_Word mercury__test_bitset__V_9_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_56, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__V_9_58, mercury__test_bitset__V_5_21, &mercury__test_bitset__ListA_6);
      }
    }
    mercury__test_bitset__ListB_7 = (MR_Word) mercury__test_bitset__B_4;
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__ListA_6, mercury__test_bitset__ListB_7);
    }
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__List_5 = mercury__test_bitset__ListB_7;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.to_sorted_list\'/1", (MR_String) "failed");
      }
    }
    return mercury__test_bitset__List_5;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_29,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word mercury__test_bitset__HeadVar__3_3,
  MR_Word * mercury__test_bitset__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
    else
    {
      MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__test_bitset__V_19_13;
      MR_Word mercury__test_bitset__V_13_16;
      MR_Integer mercury__test_bitset__V_22_14;
      MR_Integer mercury__test_bitset__V_23_15;

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Var_29, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_11_10, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_19_13);
      }
      mercury__test_bitset__V_22_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
      mercury__test_bitset__V_23_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));
      mercury__test_bitset__V_13_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 2)));
      if (((MR_tag((MR_Word) mercury__test_bitset__V_13_16)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__test_bitset__V_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_16, (MR_Integer) 1)));
        MR_Integer mercury__test_bitset__V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_16, (MR_Integer) 0)));

        /* direct tailcall eliminated */
        {
          MR_Word mercury__test_bitset__next_value_of_HeadVar__2_2 = mercury__test_bitset__V_16_19;
          MR_Word mercury__test_bitset__next_value_of_HeadVar__3_3 = mercury__test_bitset__V_19_13;

          mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__next_value_of_HeadVar__3_3;
          mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__next_value_of_HeadVar__2_2;
        }
        continue;
      }
      else
      {
        MR_Word mercury__test_bitset__V_14_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_16, (MR_Integer) 0)));

        {
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Var_29, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_14_17, mercury__test_bitset__V_19_13, mercury__test_bitset__HeadVar__4_4);
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_29,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Word mercury__test_bitset__HeadVar__3_3,
  MR_Word * mercury__test_bitset__HeadVar__4_4)
{
  if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
  else
  {
    MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__V_15_13;
    MR_Integer mercury__test_bitset__V_22_17;
    MR_Integer mercury__test_bitset__V_18_18;
    MR_Integer mercury__test_bitset__V_19_19;

    {
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Var_29, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_11_10, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_15_13);
    }
    mercury__test_bitset__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
    mercury__test_bitset__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_19_19  = Bits;
}
    {
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__Var_29, mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__test_bitset__V_22_17, mercury__test_bitset__V_18_18, mercury__test_bitset__V_19_19, mercury__test_bitset__V_15_13, mercury__test_bitset__HeadVar__4_4);
    }
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__Var_35,
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
  MR_Word mercury__test_bitset__V_8_8,
  MR_Integer mercury__test_bitset__V_10_10,
  MR_Integer mercury__test_bitset__V_11_11,
  MR_Integer mercury__test_bitset__V_12_12,
  MR_Word mercury__test_bitset__V_19_13,
  MR_Word * mercury__test_bitset__V_20_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__test_bitset__succeeded = (mercury__test_bitset__V_11_11 == (MR_Integer) 0);

      if (mercury__test_bitset__succeeded)
        *mercury__test_bitset__V_20_14 = mercury__test_bitset__V_19_13;
      else
      {
        mercury__test_bitset__succeeded = (mercury__test_bitset__V_12_12 == (MR_Integer) 1);
        if (mercury__test_bitset__succeeded)
        {
          MR_Box mercury__test_bitset__V_14_15;

          {
            mercury__test_bitset__V_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_10_10);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__test_bitset__V_20_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__test_bitset__V_14_15;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__test_bitset__V_19_13));
          }
        }
        else
        {
          MR_Integer mercury__test_bitset__V_15_16 = (mercury__test_bitset__V_12_12 >> (MR_Integer) 1);
          MR_Integer mercury__test_bitset__V_16_18;
          MR_Integer mercury__test_bitset__V_17_19;
          MR_Integer mercury__test_bitset__V_18_20;
          MR_Integer mercury__test_bitset__V_23_21;
          MR_Integer mercury__test_bitset__V_4_73 = ((MR_Integer) -1 << mercury__test_bitset__V_15_16);

          mercury__test_bitset__V_16_18 = ~(mercury__test_bitset__V_4_73);
          mercury__test_bitset__V_17_19 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_11_11);
          mercury__test_bitset__V_23_21 = (mercury__test_bitset__V_11_11 >> mercury__test_bitset__V_15_16);
          mercury__test_bitset__V_18_20 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_23_21);
          switch (mercury__test_bitset__V_8_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer mercury__test_bitset__V_24_24 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
                MR_Word mercury__test_bitset__V_25_25;

                {
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__Var_35, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_24_24, mercury__test_bitset__V_18_20, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_25_25);
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__test_bitset__next_value_of_V_11_11 = mercury__test_bitset__V_17_19;
                  MR_Integer mercury__test_bitset__next_value_of_V_12_12 = mercury__test_bitset__V_15_16;
                  MR_Word mercury__test_bitset__next_value_of_V_19_13 = mercury__test_bitset__V_25_25;

                  mercury__test_bitset__V_19_13 = mercury__test_bitset__next_value_of_V_19_13;
                  mercury__test_bitset__V_12_12 = mercury__test_bitset__next_value_of_V_12_12;
                  mercury__test_bitset__V_11_11 = mercury__test_bitset__next_value_of_V_11_11;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word mercury__test_bitset__V_27_22;
                MR_Integer mercury__test_bitset__V_28_23;

                {
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__Var_35, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_10_10, mercury__test_bitset__V_17_19, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_27_22);
                }
                mercury__test_bitset__V_28_23 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__test_bitset__next_value_of_V_10_10 = mercury__test_bitset__V_28_23;
                  MR_Integer mercury__test_bitset__next_value_of_V_11_11 = mercury__test_bitset__V_18_20;
                  MR_Integer mercury__test_bitset__next_value_of_V_12_12 = mercury__test_bitset__V_15_16;
                  MR_Word mercury__test_bitset__next_value_of_V_19_13 = mercury__test_bitset__V_27_22;

                  mercury__test_bitset__V_19_13 = mercury__test_bitset__next_value_of_V_19_13;
                  mercury__test_bitset__V_12_12 = mercury__test_bitset__next_value_of_V_12_12;
                  mercury__test_bitset__V_11_11 = mercury__test_bitset__next_value_of_V_11_11;
                  mercury__test_bitset__V_10_10 = mercury__test_bitset__next_value_of_V_10_10;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__sorted_list_to_set_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_9,
  MR_Word mercury__test_bitset__List_3)
{
  {
    MR_Word mercury__test_bitset__Result_4;
    MR_Word mercury__test_bitset__TypeInfo_11_11;
    MR_Word mercury__test_bitset__Var_6;
    MR_Word mercury__test_bitset__Var_7;
    MR_Word mercury__test_bitset__Var_8;
    MR_Word mercury__test_bitset__V_4_15;

    {
      mercury__test_bitset__Var_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_9, mercury__test_bitset__List_3);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__sorted_list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_11  = TypeInfo;
}
    if ((mercury__test_bitset__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__test_bitset__V_4_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box mercury__test_bitset__V_3_16 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_3, (MR_Integer) 0));
      MR_Word mercury__test_bitset__V_4_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_3, (MR_Integer) 1)));

      {
        mercury__list__remove_adjacent_dups_loop_3_p_0(mercury__test_bitset__TypeInfo_11_11, mercury__test_bitset__V_3_16, mercury__test_bitset__V_4_17, &mercury__test_bitset__V_4_15);
      }
    }
    mercury__test_bitset__Var_8 = (MR_Word) mercury__test_bitset__V_4_15;
    {
      mercury__test_bitset__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_6, 0) = ((MR_Box) (mercury__test_bitset__Var_7));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_6, 1) = ((MR_Box) (mercury__test_bitset__Var_8));
    }
    {
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_9, (MR_String) "sorted_list_to_set", mercury__test_bitset__Var_6, &mercury__test_bitset__Result_4);
    }
    return mercury__test_bitset__Result_4;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__list_to_set_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_9,
  MR_Word mercury__test_bitset__List_3)
{
  {
    MR_Word mercury__test_bitset__Result_4;
    MR_Word mercury__test_bitset__TypeInfo_11_11;
    MR_Word mercury__test_bitset__TypeInfo_8_16;
    MR_Word mercury__test_bitset__Var_6;
    MR_Word mercury__test_bitset__Var_7;
    MR_Word mercury__test_bitset__Var_8;
    MR_Word mercury__test_bitset__V_4_14;
    MR_Integer mercury__test_bitset__V_5_21;
    MR_Word mercury__test_bitset__V_4_30;
    MR_Integer mercury__test_bitset__V_5_33;

{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_16  = TypeInfo;
}
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_8_16, mercury__test_bitset__List_3, (MR_Integer) 0, &mercury__test_bitset__V_5_21);
    }
    {
      mercury__list__merge_sort_3_p_0(mercury__test_bitset__TypeInfo_8_16, mercury__test_bitset__V_5_21, mercury__test_bitset__List_3, &mercury__test_bitset__V_4_14);
    }
    {
      mercury__test_bitset__Var_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_9, mercury__test_bitset__V_4_14);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_11  = TypeInfo;
}
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_11_11, mercury__test_bitset__List_3, (MR_Integer) 0, &mercury__test_bitset__V_5_33);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_11_11, mercury__test_bitset__V_5_33, mercury__test_bitset__List_3, &mercury__test_bitset__V_4_30);
    }
    mercury__test_bitset__Var_8 = (MR_Word) mercury__test_bitset__V_4_30;
    {
      mercury__test_bitset__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_6, 0) = ((MR_Box) (mercury__test_bitset__Var_7));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_6, 1) = ((MR_Box) (mercury__test_bitset__Var_8));
    }
    {
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_9, (MR_String) "list_to_set", mercury__test_bitset__Var_6, &mercury__test_bitset__Result_4);
    }
    return mercury__test_bitset__Result_4;
  }
}

void MR_CALL 
mercury__test_bitset__check0_3_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
  MR_String mercury__test_bitset__Op_4,
  MR_Word mercury__test_bitset__Tester_5,
  MR_Word * mercury__test_bitset__Result_6)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__BitSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_5, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__Set_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_5, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__BitSetList_9;
    MR_Word mercury__test_bitset__SetList_10;
    MR_Word mercury__test_bitset__TypeInfo_19_19;

    {
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__BitSet_7, &mercury__test_bitset__BitSetList_9);
    }
    mercury__test_bitset__SetList_10 = (MR_Word) mercury__test_bitset__Set_8;
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_19_19  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_19_19, mercury__test_bitset__BitSetList_9, mercury__test_bitset__SetList_10);
    }
    if (mercury__test_bitset__succeeded)
      *mercury__test_bitset__Result_6 = mercury__test_bitset__Tester_5;
    else
    {
      MR_Word mercury__test_bitset__TypeInfo_15_15;
      MR_Word mercury__test_bitset__TypeCtorInfo_16_16;
      MR_Word mercury__test_bitset__TypeInfo_17_17;
      MR_Word mercury__test_bitset__Var_11;

      {
        mercury__test_bitset__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_11, 0) = ((MR_Box) (mercury__test_bitset__Op_4));
        MR_hl_field(MR_mktag(0), mercury__test_bitset__Var_11, 1) = ((MR_Box) (mercury__test_bitset__Tester_5));
      }
      mercury__test_bitset__TypeCtorInfo_16_16 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
}
      {
        mercury__test_bitset__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_17_17, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_16_16));
        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_17_17, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_15_15));
      }
      {
        mercury__exception__throw_1_p_0(mercury__test_bitset__TypeInfo_17_17, ((MR_Box) (mercury__test_bitset__Var_11)));
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__superset_2_p_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_13,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__Var_19;

    {
      mercury__test_bitset__Var_19 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA1_3, mercury__test_bitset__SetA2_5);
    }
    {
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA2_5, mercury__test_bitset__Var_19);
    }
    if (mercury__test_bitset__succeeded)
    {
      MR_Word mercury__test_bitset__V_4_30 = (MR_Word) mercury__test_bitset__SetB1_4;
      MR_Word mercury__test_bitset__V_6_32 = (MR_Word) mercury__test_bitset__SetB2_6;

      {
        mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__V_4_30, mercury__test_bitset__V_6_32, mercury__test_bitset__V_6_32);
      }
      if (mercury__test_bitset__succeeded)
      {
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.superset\'/2", (MR_String) "unexpected success");
        }
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    else
    {
      MR_String mercury__test_bitset__Var_10;
      MR_String mercury__test_bitset__Var_11;
      MR_String mercury__test_bitset__Var_12;
      MR_Word mercury__test_bitset__V_4_38 = (MR_Word) mercury__test_bitset__SetB1_4;
      MR_Word mercury__test_bitset__V_6_40 = (MR_Word) mercury__test_bitset__SetB2_6;

      {
        mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__V_4_38, mercury__test_bitset__V_6_40, mercury__test_bitset__V_6_40);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__Var_10 = (MR_String) "test_bitset";
        mercury__test_bitset__Var_11 = (MR_String) "predicate \140test_bitset.superset\'/2";
        mercury__test_bitset__Var_12 = (MR_String) "unexpected failure";
        {
          mercury__require__unexpected_3_p_0(mercury__test_bitset__Var_10, mercury__test_bitset__Var_11, mercury__test_bitset__Var_12);
        }
        mercury__test_bitset__succeeded = MR_TRUE;
      }
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__subset_2_p_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_13,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__Var_17;

    {
      mercury__test_bitset__Var_17 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA2_5, mercury__test_bitset__SetA1_3);
    }
    {
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA1_3, mercury__test_bitset__Var_17);
    }
    if (mercury__test_bitset__succeeded)
    {
      MR_Word mercury__test_bitset__V_4_26 = (MR_Word) mercury__test_bitset__SetB2_6;
      MR_Word mercury__test_bitset__V_6_28 = (MR_Word) mercury__test_bitset__SetB1_4;

      {
        mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__V_4_26, mercury__test_bitset__V_6_28, mercury__test_bitset__V_6_28);
      }
      if (mercury__test_bitset__succeeded)
      {
      }
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.subset\'/2", (MR_String) "unexpected success");
        }
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    else
    {
      MR_String mercury__test_bitset__Var_10;
      MR_String mercury__test_bitset__Var_11;
      MR_String mercury__test_bitset__Var_12;
      MR_Word mercury__test_bitset__V_4_32 = (MR_Word) mercury__test_bitset__SetB2_6;
      MR_Word mercury__test_bitset__V_6_34 = (MR_Word) mercury__test_bitset__SetB1_4;

      {
        mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__V_4_32, mercury__test_bitset__V_6_34, mercury__test_bitset__V_6_34);
      }
      if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__Var_10 = (MR_String) "test_bitset";
        mercury__test_bitset__Var_11 = (MR_String) "predicate \140test_bitset.subset\'/2";
        mercury__test_bitset__Var_12 = (MR_String) "unexpected failure";
        {
          mercury__require__unexpected_3_p_0(mercury__test_bitset__Var_10, mercury__test_bitset__Var_11, mercury__test_bitset__Var_12);
        }
        mercury__test_bitset__succeeded = MR_TRUE;
      }
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__equal_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__EqualA_7;
    MR_Word mercury__test_bitset__EqualB_8;
    MR_Word mercury__test_bitset__TypeInfo_14_14;

    {
      mercury__test_bitset__succeeded = mercury__tree_bitset__equal_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__SetA1_3, mercury__test_bitset__SetA2_5);
    }
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__EqualA_7 = (MR_Integer) 1;
    else
      mercury__test_bitset__EqualA_7 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__SetB2_6, mercury__test_bitset__SetB1_4);
    }
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__EqualB_8 = (MR_Integer) 1;
    else
      mercury__test_bitset__EqualB_8 = (MR_Integer) 0;
    mercury__test_bitset__succeeded = (mercury__test_bitset__EqualA_7 == mercury__test_bitset__EqualB_8);
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__succeeded = (mercury__test_bitset__EqualA_7 == (MR_Integer) 1);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.equal\'/2", (MR_String) "failed");
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    return mercury__test_bitset__succeeded;
  }
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
  MR_Box mercury__test_bitset__closure_arg,
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box mercury__test_bitset__wrapper_arg_2,
  MR_Box * mercury__test_bitset__wrapper_arg_3)
{
  {
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;
    MR_Word mercury__test_bitset__conv0_HeadVar__3_3;

    {
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), mercury__test_bitset__wrapper_arg_1, ((MR_Word) mercury__test_bitset__wrapper_arg_2), &mercury__test_bitset__conv0_HeadVar__3_3);
    }
    *mercury__test_bitset__wrapper_arg_3 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
  MR_Box mercury__test_bitset__closure_arg,
  MR_Box * mercury__test_bitset__wrapper_arg_1,
  MR_Cont mercury__test_bitset__cont,
  void * mercury__test_bitset__cont_env_ptr)
{
  {
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;

    {
      mercury__test_bitset__IntroducedFrom__pred__member__241__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 4))), mercury__test_bitset__wrapper_arg_1, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
    }
  }
}

static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
  MR_Box mercury__test_bitset__closure_arg,
  MR_Box * mercury__test_bitset__wrapper_arg_1,
  MR_Cont mercury__test_bitset__cont,
  void * mercury__test_bitset__cont_env_ptr)
{
  {
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;

    {
      mercury__test_bitset__IntroducedFrom__pred__member__240__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 4))), mercury__test_bitset__wrapper_arg_1, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__test_bitset__member_2_p_1(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
  MR_Box * mercury__test_bitset__E_1,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Cont mercury__test_bitset__cont,
  void * mercury__test_bitset__cont_env_ptr)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__TypeInfo_33_33;
    MR_Word mercury__test_bitset__TypeInfo_34_34;
    MR_Word mercury__test_bitset__SetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__PredA_14;
    MR_Word mercury__test_bitset__PredB_16;
    MR_Word mercury__test_bitset__SolnsA_18;
    MR_Word mercury__test_bitset__SolnsB_19;
    MR_Word mercury__test_bitset__TypeCtorInfo_13_52;
    MR_Word mercury__test_bitset__TypeInfo_14_53;
    MR_Word mercury__test_bitset__V_6_42;
    MR_Word mercury__test_bitset__V_6_45;
    MR_Word mercury__test_bitset__V_7_47;
    MR_Integer mercury__test_bitset__V_5_67;
    MR_Box mercury__test_bitset__conv1_V_6_42;
    MR_Word mercury__test_bitset__TypeInfo_36_36;

    {
      mercury__test_bitset__PredA_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_1));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 3) = ((MR_Box) (mercury__test_bitset__TypeClassInfo_for_enum_27));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 4) = ((MR_Box) (mercury__test_bitset__SetA_12));
    }
    {
      mercury__test_bitset__PredB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_2));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 3) = ((MR_Box) (mercury__test_bitset__TypeClassInfo_for_enum_27));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 4) = ((MR_Box) (mercury__test_bitset__SetB_13));
    }
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_33_33  = TypeInfo;
}
    {
      mercury__test_bitset__V_6_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_45, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_45, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_3));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_45, 3) = ((MR_Box) (mercury__test_bitset__TypeInfo_33_33));
    }
    mercury__test_bitset__V_7_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__test_bitset__TypeCtorInfo_13_52 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__test_bitset__TypeInfo_14_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_14_53, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_13_52));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_14_53, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_33_33));
    }
    {
      mercury__solutions__builtin_aggregate_4_p_7(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__TypeInfo_14_53, mercury__test_bitset__PredA_14, mercury__test_bitset__V_6_45, ((MR_Box) (mercury__test_bitset__V_7_47)), &mercury__test_bitset__conv1_V_6_42);
    }
    mercury__test_bitset__V_6_42 = ((MR_Word) mercury__test_bitset__conv1_V_6_42);
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__V_6_42, (MR_Integer) 0, &mercury__test_bitset__V_5_67);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__V_5_67, mercury__test_bitset__V_6_42, &mercury__test_bitset__SolnsA_18);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
}
    {
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__PredB_16, &mercury__test_bitset__SolnsB_19);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_36_36  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_36_36, mercury__test_bitset__SolnsA_18, mercury__test_bitset__SolnsB_19);
    }
    if (mercury__test_bitset__succeeded)
      {
        mercury__tree_bitset__member_2_p_1(mercury__test_bitset__TypeClassInfo_for_enum_27, mercury__test_bitset__E_1, mercury__test_bitset__SetA_12, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
      }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (out, in)");
        return;
      }
      {
        mercury__test_bitset__cont(mercury__test_bitset__cont_env_ptr);
      }
    }
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
  MR_Box mercury__test_bitset__closure_arg,
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box mercury__test_bitset__wrapper_arg_2,
  MR_Box * mercury__test_bitset__wrapper_arg_3)
{
  {
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;
    MR_Word mercury__test_bitset__conv0_HeadVar__3_3;

    {
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), mercury__test_bitset__wrapper_arg_1, ((MR_Word) mercury__test_bitset__wrapper_arg_2), &mercury__test_bitset__conv0_HeadVar__3_3);
    }
    *mercury__test_bitset__wrapper_arg_3 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_7,
  MR_Word mercury__test_bitset__V_3_3,
  MR_Word * mercury__test_bitset__V_4_4)
{
  {
    MR_Word mercury__test_bitset__TypeCtorInfo_13_19;
    MR_Word mercury__test_bitset__TypeInfo_14_20;
    MR_Word mercury__test_bitset__V_6_6;
    MR_Word mercury__test_bitset__V_6_12;
    MR_Word mercury__test_bitset__V_7_14;
    MR_Integer mercury__test_bitset__V_5_34;
    MR_Box mercury__test_bitset__conv1_V_6_6;

    {
      mercury__test_bitset__V_6_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_12, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_12, 1) = ((MR_Box) (mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_12, 3) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_7));
    }
    mercury__test_bitset__V_7_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__test_bitset__TypeCtorInfo_13_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__test_bitset__TypeInfo_14_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_14_20, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_13_19));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_14_20, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_7));
    }
    {
      mercury__solutions__builtin_aggregate_4_p_7(mercury__test_bitset__TypeInfo_for_T_7, mercury__test_bitset__TypeInfo_14_20, mercury__test_bitset__V_3_3, mercury__test_bitset__V_6_12, ((MR_Box) (mercury__test_bitset__V_7_14)), &mercury__test_bitset__conv1_V_6_6);
    }
    mercury__test_bitset__V_6_6 = ((MR_Word) mercury__test_bitset__conv1_V_6_6);
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_for_T_7, mercury__test_bitset__V_6_6, (MR_Integer) 0, &mercury__test_bitset__V_5_34);
    }
    {
      mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_for_T_7, mercury__test_bitset__V_5_34, mercury__test_bitset__V_6_6, mercury__test_bitset__V_4_4);
    }
  }
}

MR_bool MR_CALL 
mercury__test_bitset__member_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
  MR_Box mercury__test_bitset__E_1,
  MR_Word mercury__test_bitset__HeadVar__2_2)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__InSetA_6;
    MR_Word mercury__test_bitset__InSetB_7;
    MR_Word mercury__test_bitset__TypeInfo_29_29;

    {
      mercury__test_bitset__succeeded = mercury__tree_bitset__member_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_27, mercury__test_bitset__E_1, mercury__test_bitset__SetA_4);
    }
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__InSetA_6 = (MR_Integer) 1;
    else
      mercury__test_bitset__InSetA_6 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_29_29  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__set_ordlist__member_2_p_0(mercury__test_bitset__TypeInfo_29_29, mercury__test_bitset__E_1, mercury__test_bitset__SetB_5);
    }
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__InSetB_7 = (MR_Integer) 1;
    else
      mercury__test_bitset__InSetB_7 = (MR_Integer) 0;
    mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == mercury__test_bitset__InSetB_7);
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == (MR_Integer) 1);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (in, in)");
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__contains_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_11,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Box mercury__test_bitset__E_5)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__SetA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__InSetA_6;
    MR_Word mercury__test_bitset__InSetB_7;
    MR_Word mercury__test_bitset__TypeInfo_13_13;

    {
      mercury__test_bitset__succeeded = mercury__tree_bitset__contains_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__SetA_3, mercury__test_bitset__E_5);
    }
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__InSetA_6 = (MR_Integer) 1;
    else
      mercury__test_bitset__InSetA_6 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_13_13  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__set_ordlist__member_2_p_0(mercury__test_bitset__TypeInfo_13_13, mercury__test_bitset__E_5, mercury__test_bitset__SetB_4);
    }
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__InSetB_7 = (MR_Integer) 1;
    else
      mercury__test_bitset__InSetB_7 = (MR_Integer) 0;
    mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == mercury__test_bitset__InSetB_7);
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == (MR_Integer) 1);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.contains\'/2", (MR_String) "failed");
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__is_singleton_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
  MR_Word mercury__test_bitset__HeadVar__1_1,
  MR_Box * mercury__test_bitset__E_5)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__A_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__B_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__NonEmptyA_7;
    MR_Word mercury__test_bitset__NonEmptyB_9;
    MR_Box mercury__test_bitset__AE_6;
    MR_Box mercury__test_bitset__BE_8;
    MR_Word mercury__test_bitset__V_4_21;
    MR_Word mercury__test_bitset__V_5_22;
    MR_Word mercury__test_bitset__TypeInfo_17_17;

    {
      mercury__test_bitset__succeeded = mercury__tree_bitset__is_singleton_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__A_3, &mercury__test_bitset__AE_6);
    }
    if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__NonEmptyA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__test_bitset__NonEmptyA_7, 0) = mercury__test_bitset__AE_6;
      }
    else
      mercury__test_bitset__NonEmptyA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__test_bitset__V_4_21 = (MR_Word) mercury__test_bitset__B_4;
    mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_4_21)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__test_bitset__succeeded)
    {
      mercury__test_bitset__BE_8 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_21, (MR_Integer) 0));
      mercury__test_bitset__V_5_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_21, (MR_Integer) 1)));
      mercury__test_bitset__succeeded = (mercury__test_bitset__V_5_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (mercury__test_bitset__succeeded)
      {
        mercury__test_bitset__NonEmptyB_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__test_bitset__NonEmptyB_9, 0) = mercury__test_bitset__BE_8;
      }
    else
      mercury__test_bitset__NonEmptyB_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
}
    {
      mercury__test_bitset__succeeded = mercury__maybe____Unify____maybe_1_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__NonEmptyA_7, mercury__test_bitset__NonEmptyB_9);
    }
    if (mercury__test_bitset__succeeded)
    {
      mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__NonEmptyA_7)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__test_bitset__succeeded)
        *mercury__test_bitset__E_5 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__NonEmptyA_7, (MR_Integer) 0));
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_singleton\'/2", (MR_String) "failed");
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__is_non_empty_1_p_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_9,
  MR_Word mercury__test_bitset__HeadVar__1_1)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__A_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__B_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__NonEmptyA_4;
    MR_Word mercury__test_bitset__NonEmptyB_5;
    MR_Word mercury__test_bitset__Var_12 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    MR_Word mercury__test_bitset__V_2_16 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    MR_Word mercury__test_bitset__V_3_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__test_bitset__V_4_26;
    MR_Box mercury__test_bitset__V_2_27;
    MR_Word mercury__test_bitset__V_3_28;

    {
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_9, mercury__test_bitset__A_2, mercury__test_bitset__Var_12);
    }
    mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__NonEmptyA_4 = (MR_Integer) 1;
    else
      mercury__test_bitset__NonEmptyA_4 = (MR_Integer) 0;
    mercury__test_bitset__V_4_26 = (MR_Word) mercury__test_bitset__B_3;
    mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_4_26)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__test_bitset__succeeded)
    {
      mercury__test_bitset__V_2_27 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_26, (MR_Integer) 0));
      mercury__test_bitset__V_3_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_26, (MR_Integer) 1)));
      mercury__test_bitset__NonEmptyB_5 = (MR_Integer) 1;
    }
    else
      mercury__test_bitset__NonEmptyB_5 = (MR_Integer) 0;
    mercury__test_bitset__succeeded = (mercury__test_bitset__NonEmptyA_4 == mercury__test_bitset__NonEmptyB_5);
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__succeeded = (mercury__test_bitset__NonEmptyA_4 == (MR_Integer) 1);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_non_empty\'/1", (MR_String) "failed");
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_bool MR_CALL 
mercury__test_bitset__is_empty_1_p_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_9,
  MR_Word mercury__test_bitset__HeadVar__1_1)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Word mercury__test_bitset__A_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__B_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__test_bitset__EmptyA_4;
    MR_Word mercury__test_bitset__EmptyB_5;
    MR_Word mercury__test_bitset__Var_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    MR_Word mercury__test_bitset__V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    MR_Word mercury__test_bitset__V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__test_bitset__V_2_25;

    {
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_9, mercury__test_bitset__A_2, mercury__test_bitset__Var_11);
    }
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__EmptyA_4 = (MR_Integer) 1;
    else
      mercury__test_bitset__EmptyA_4 = (MR_Integer) 0;
    mercury__test_bitset__V_2_25 = (MR_Word) mercury__test_bitset__B_3;
    mercury__test_bitset__succeeded = (mercury__test_bitset__V_2_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__EmptyB_5 = (MR_Integer) 1;
    else
      mercury__test_bitset__EmptyB_5 = (MR_Integer) 0;
    mercury__test_bitset__succeeded = (mercury__test_bitset__EmptyA_4 == mercury__test_bitset__EmptyB_5);
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__succeeded = (mercury__test_bitset__EmptyA_4 == (MR_Integer) 1);
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_empty\'/1", (MR_String) "failed");
      }
      mercury__test_bitset__succeeded = MR_TRUE;
    }
    return mercury__test_bitset__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__test_bitset__count_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_11,
  MR_Word mercury__test_bitset__HeadVar__1_1)
{
  {
    MR_bool mercury__test_bitset__succeeded;
    MR_Integer mercury__test_bitset__Count_5;
    MR_Word mercury__test_bitset__TypeInfo_13_13;
    MR_Word mercury__test_bitset__SetA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__test_bitset__SetB_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__test_bitset__CountA_6;
    MR_Integer mercury__test_bitset__CountB_7;
    MR_Word mercury__test_bitset__V_8_55 = (MR_Word) mercury__test_bitset__SetA_3;
    MR_Word mercury__test_bitset__V_3_65;

    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_55)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__test_bitset__V_11_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_55, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_10_58 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_55, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__V_11_59, (MR_Integer) 0, &mercury__test_bitset__CountA_6);
      }
    }
    else
    {
      MR_Word mercury__test_bitset__V_9_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_55, (MR_Integer) 0)));

      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__V_9_57, (MR_Integer) 0, &mercury__test_bitset__CountA_6);
      }
    }
{
#define MR_PROC_LABEL mercury__test_bitset__count_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_13_13  = TypeInfo;
}
    mercury__test_bitset__V_3_65 = (MR_Word) mercury__test_bitset__SetB_4;
    {
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_13_13, mercury__test_bitset__V_3_65, (MR_Integer) 0, &mercury__test_bitset__CountB_7);
    }
    mercury__test_bitset__succeeded = (mercury__test_bitset__CountA_6 == mercury__test_bitset__CountB_7);
    if (mercury__test_bitset__succeeded)
      mercury__test_bitset__Count_5 = mercury__test_bitset__CountA_6;
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.count\'/1", (MR_String) "failed");
      }
    }
    return mercury__test_bitset__Count_5;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Integer mercury__test_bitset__HeadVar__3_3,
  MR_Integer * mercury__test_bitset__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
    else
    {
      MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__test_bitset__V_13_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 2)));
      MR_Integer mercury__test_bitset__V_20_17;
      MR_Integer mercury__test_bitset__V_22_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
      MR_Integer mercury__test_bitset__V_23_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));

      if (((MR_tag((MR_Word) mercury__test_bitset__V_13_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__test_bitset__V_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_15, (MR_Integer) 1)));
        MR_Integer mercury__test_bitset__V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_15, (MR_Integer) 0)));

        {
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_16_19, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_20_17);
        }
      }
      else
      {
        MR_Word mercury__test_bitset__V_14_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_15, (MR_Integer) 0)));

        {
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_14_16, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_20_17);
        }
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__test_bitset__next_value_of_HeadVar__2_2 = mercury__test_bitset__V_11_10;
        MR_Integer mercury__test_bitset__next_value_of_HeadVar__3_3 = mercury__test_bitset__V_20_17;

        mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__next_value_of_HeadVar__3_3;
        mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__next_value_of_HeadVar__2_2;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
  MR_Word mercury__test_bitset__HeadVar__2_2,
  MR_Integer mercury__test_bitset__HeadVar__3_3,
  MR_Integer * mercury__test_bitset__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
    else
    {
      MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
      MR_Integer mercury__test_bitset__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));
      MR_Integer mercury__test_bitset__V_18_18;
      MR_Integer mercury__test_bitset__V_19_19;

{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{

    Bits = ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_18_18  = Bits;
}
      {
        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__test_bitset__V_22_16, mercury__test_bitset__V_17_17, mercury__test_bitset__V_18_18, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_19_19);
      }
      /* direct tailcall eliminated */
      {
        MR_Word mercury__test_bitset__next_value_of_HeadVar__2_2 = mercury__test_bitset__V_11_10;
        MR_Integer mercury__test_bitset__next_value_of_HeadVar__3_3 = mercury__test_bitset__V_19_19;

        mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__next_value_of_HeadVar__3_3;
        mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__next_value_of_HeadVar__2_2;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
  MR_Word mercury__test_bitset__V_8_8,
  MR_Integer mercury__test_bitset__V_10_10,
  MR_Integer mercury__test_bitset__V_11_11,
  MR_Integer mercury__test_bitset__V_12_12,
  MR_Integer mercury__test_bitset__V_19_13,
  MR_Integer * mercury__test_bitset__V_20_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__test_bitset__succeeded = (mercury__test_bitset__V_11_11 == (MR_Integer) 0);

      if (mercury__test_bitset__succeeded)
        *mercury__test_bitset__V_20_14 = mercury__test_bitset__V_19_13;
      else
      {
        mercury__test_bitset__succeeded = (mercury__test_bitset__V_12_12 == (MR_Integer) 1);
        if (mercury__test_bitset__succeeded)
        {
          MR_Box mercury__test_bitset__V_14_15;

          {
            mercury__test_bitset__V_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_10_10);
          }
          *mercury__test_bitset__V_20_14 = (mercury__test_bitset__V_19_13 + (MR_Integer) 1);
        }
        else
        {
          MR_Integer mercury__test_bitset__V_15_16 = (mercury__test_bitset__V_12_12 >> (MR_Integer) 1);
          MR_Integer mercury__test_bitset__V_16_18;
          MR_Integer mercury__test_bitset__V_17_19;
          MR_Integer mercury__test_bitset__V_18_20;
          MR_Integer mercury__test_bitset__V_23_21;
          MR_Integer mercury__test_bitset__V_4_72 = ((MR_Integer) -1 << mercury__test_bitset__V_15_16);

          mercury__test_bitset__V_16_18 = ~(mercury__test_bitset__V_4_72);
          mercury__test_bitset__V_17_19 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_11_11);
          mercury__test_bitset__V_23_21 = (mercury__test_bitset__V_11_11 >> mercury__test_bitset__V_15_16);
          mercury__test_bitset__V_18_20 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_23_21);
          switch (mercury__test_bitset__V_8_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Integer mercury__test_bitset__V_24_24 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
                MR_Integer mercury__test_bitset__V_25_25;

                {
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_24_24, mercury__test_bitset__V_18_20, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_25_25);
                }
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__test_bitset__next_value_of_V_11_11 = mercury__test_bitset__V_17_19;
                  MR_Integer mercury__test_bitset__next_value_of_V_12_12 = mercury__test_bitset__V_15_16;
                  MR_Integer mercury__test_bitset__next_value_of_V_19_13 = mercury__test_bitset__V_25_25;

                  mercury__test_bitset__V_19_13 = mercury__test_bitset__next_value_of_V_19_13;
                  mercury__test_bitset__V_12_12 = mercury__test_bitset__next_value_of_V_12_12;
                  mercury__test_bitset__V_11_11 = mercury__test_bitset__next_value_of_V_11_11;
                }
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Integer mercury__test_bitset__V_27_22;
                MR_Integer mercury__test_bitset__V_28_23;

                {
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_10_10, mercury__test_bitset__V_17_19, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_27_22);
                }
                mercury__test_bitset__V_28_23 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__test_bitset__next_value_of_V_10_10 = mercury__test_bitset__V_28_23;
                  MR_Integer mercury__test_bitset__next_value_of_V_11_11 = mercury__test_bitset__V_18_20;
                  MR_Integer mercury__test_bitset__next_value_of_V_12_12 = mercury__test_bitset__V_15_16;
                  MR_Integer mercury__test_bitset__next_value_of_V_19_13 = mercury__test_bitset__V_27_22;

                  mercury__test_bitset__V_19_13 = mercury__test_bitset__next_value_of_V_19_13;
                  mercury__test_bitset__V_12_12 = mercury__test_bitset__next_value_of_V_12_12;
                  mercury__test_bitset__V_11_11 = mercury__test_bitset__next_value_of_V_11_11;
                  mercury__test_bitset__V_10_10 = mercury__test_bitset__next_value_of_V_10_10;
                }
                continue;
              }
              break;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__test_bitset__make_singleton_set_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
  MR_Word * mercury__test_bitset__HeadVar__1_1,
  MR_Box mercury__test_bitset__A_3)
{
  {
    *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__make_singleton_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
  }
}

void MR_CALL 
mercury__test_bitset__singleton_set_2_p_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
  MR_Word * mercury__test_bitset__HeadVar__1_1,
  MR_Box mercury__test_bitset__A_3)
{
  {
    *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__singleton_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
  }
}

void MR_CALL 
mercury__test_bitset__init_1_p_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_2,
  MR_Word * mercury__test_bitset__HeadVar__1_1)
{
  {
    MR_Word mercury__test_bitset__Var_3 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    MR_Word mercury__test_bitset__Var_4 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__test_bitset__V_2_6 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    MR_Word mercury__test_bitset__V_3_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__test_bitset__V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    *mercury__test_bitset__HeadVar__1_1 = (MR_Word) &mercury__test_bitset_scalar_common_5[0];
  }
}

MR_Word MR_CALL 
mercury__test_bitset__make_singleton_set_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
  MR_Box mercury__test_bitset__A_3)
{
  {
    MR_Word mercury__test_bitset__HeadVar__2_2;
    MR_Word mercury__test_bitset__Var_4;
    MR_Word mercury__test_bitset__Var_5;
    MR_Word mercury__test_bitset__V_4_11;
    MR_Word mercury__test_bitset__V_2_15;
    MR_Word mercury__test_bitset__V_3_16;
    MR_Word mercury__test_bitset__V_4_28;
    MR_Word mercury__test_bitset__V_5_29;
    MR_Word mercury__test_bitset__TypeInfo_8_13;
    MR_Word mercury__test_bitset__TypeInfo_8_8;

{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_13  = TypeInfo;
}
    mercury__test_bitset__V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__test_bitset__V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    mercury__test_bitset__V_4_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    {
      mercury__test_bitset__Var_4 = mercury__tree_bitset__insert_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__V_4_11, mercury__test_bitset__A_3);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_8  = TypeInfo;
}
    mercury__test_bitset__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__test_bitset__V_4_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 0) = mercury__test_bitset__A_3;
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 1) = ((MR_Box) (mercury__test_bitset__V_5_29));
    }
    mercury__test_bitset__Var_5 = (MR_Word) mercury__test_bitset__V_4_28;
    {
      mercury__test_bitset__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 0) = ((MR_Box) (mercury__test_bitset__Var_4));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 1) = ((MR_Box) (mercury__test_bitset__Var_5));
    }
    return mercury__test_bitset__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__singleton_set_1_f_0(
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
  MR_Box mercury__test_bitset__A_3)
{
  {
    MR_Word mercury__test_bitset__HeadVar__2_2;
    MR_Word mercury__test_bitset__Var_4;
    MR_Word mercury__test_bitset__Var_5;
    MR_Word mercury__test_bitset__V_4_11;
    MR_Word mercury__test_bitset__V_2_15;
    MR_Word mercury__test_bitset__V_3_16;
    MR_Word mercury__test_bitset__V_4_28;
    MR_Word mercury__test_bitset__V_5_29;
    MR_Word mercury__test_bitset__TypeInfo_8_13;
    MR_Word mercury__test_bitset__TypeInfo_8_8;

{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_13  = TypeInfo;
}
    mercury__test_bitset__V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__test_bitset__V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    mercury__test_bitset__V_4_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    {
      mercury__test_bitset__Var_4 = mercury__tree_bitset__insert_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__V_4_11, mercury__test_bitset__A_3);
    }
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);


		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_8  = TypeInfo;
}
    mercury__test_bitset__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__test_bitset__V_4_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 0) = mercury__test_bitset__A_3;
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 1) = ((MR_Box) (mercury__test_bitset__V_5_29));
    }
    mercury__test_bitset__Var_5 = (MR_Word) mercury__test_bitset__V_4_28;
    {
      mercury__test_bitset__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 0) = ((MR_Box) (mercury__test_bitset__Var_4));
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 1) = ((MR_Box) (mercury__test_bitset__Var_5));
    }
    return mercury__test_bitset__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__test_bitset__init_0_f_0(
  MR_Word mercury__test_bitset__TypeInfo_for_T_4)
{
  {
    MR_Word mercury__test_bitset__HeadVar__1_1 = (MR_Word) &mercury__test_bitset_scalar_common_5[0];
    MR_Word mercury__test_bitset__Var_2 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
    MR_Word mercury__test_bitset__Var_3 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    MR_Word mercury__test_bitset__V_2_6 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
    MR_Word mercury__test_bitset__V_3_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__test_bitset__V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__test_bitset__HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box mercury__test_bitset__wrapper_arg_2,
  MR_Box mercury__test_bitset__wrapper_arg_3)
{
  {
    MR_bool mercury__test_bitset__succeeded;

    {
      mercury__test_bitset__succeeded = mercury__test_bitset____Unify____bitset_error_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), ((MR_Word) mercury__test_bitset__wrapper_arg_2), ((MR_Word) mercury__test_bitset__wrapper_arg_3));
    }
    return mercury__test_bitset__succeeded;
  }
}

static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box * mercury__test_bitset__wrapper_arg_2,
  MR_Box mercury__test_bitset__wrapper_arg_3,
  MR_Box mercury__test_bitset__wrapper_arg_4)
{
  {
    MR_Word mercury__test_bitset__conv0_HeadVar__1_1;

    {
      mercury__test_bitset____Compare____bitset_error_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), &mercury__test_bitset__conv0_HeadVar__1_1, ((MR_Word) mercury__test_bitset__wrapper_arg_3), ((MR_Word) mercury__test_bitset__wrapper_arg_4));
    }
    *mercury__test_bitset__wrapper_arg_2 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box mercury__test_bitset__wrapper_arg_2,
  MR_Box mercury__test_bitset__wrapper_arg_3)
{
  {
    MR_bool mercury__test_bitset__succeeded;

    {
      mercury__test_bitset__succeeded = mercury__test_bitset____Unify____test_bitset_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), ((MR_Word) mercury__test_bitset__wrapper_arg_2), ((MR_Word) mercury__test_bitset__wrapper_arg_3));
    }
    return mercury__test_bitset__succeeded;
  }
}

static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
  MR_Box mercury__test_bitset__wrapper_arg_1,
  MR_Box * mercury__test_bitset__wrapper_arg_2,
  MR_Box mercury__test_bitset__wrapper_arg_3,
  MR_Box mercury__test_bitset__wrapper_arg_4)
{
  {
    MR_Word mercury__test_bitset__conv0_HeadVar__1_1;

    {
      mercury__test_bitset____Compare____test_bitset_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), &mercury__test_bitset__conv0_HeadVar__1_1, ((MR_Word) mercury__test_bitset__wrapper_arg_3), ((MR_Word) mercury__test_bitset__wrapper_arg_4));
    }
    *mercury__test_bitset__wrapper_arg_2 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__1_1));
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

/* :- end_module test_bitset. */
