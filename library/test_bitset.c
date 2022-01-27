/*
** Automatically generated from `test_bitset.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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
#include "char.mih"
#include "construct.mih"
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 87 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1;

#line 90 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 93 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1;

#line 96 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 99 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_0[2];

#line 102 "test_bitset.c"
static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0;

#line 105 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_1[3];

#line 108 "test_bitset.c"
static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1;

#line 111 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_2[4];

#line 114 "test_bitset.c"
static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2;

#line 117 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0[1];

#line 120 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1[1];

#line 123 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2[1];

#line 126 "test_bitset.c"
static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1[3];

#line 129 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1[3];

#line 132 "test_bitset.c"
static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1[3];

#line 135 "test_bitset.c"
static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
#line 138 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 140 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 142 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3);

#line 145 "test_bitset.c"
static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
#line 148 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 150 "test_bitset.c"
  MR_Box * mercury__test_bitset__wrapper_arg_2,
#line 152 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3,
#line 154 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_4);

#line 157 "test_bitset.c"
static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
#line 160 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 162 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 164 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3);

#line 167 "test_bitset.c"
static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
#line 170 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 172 "test_bitset.c"
  MR_Box * mercury__test_bitset__wrapper_arg_2,
#line 174 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3,
#line 176 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_4);

#line 131 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_35_35,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__Dir_8_8,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Offset_10_10,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Bits_11_11,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Size_12_12,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13,
#line 131 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__STATE_VARIABLE_Acc_20_14);

#line 131 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__Dir_8_8,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Offset_10_10,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Bits_11_11,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Size_12_12,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13,
#line 131 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__STATE_VARIABLE_Acc_20_14);

#line 43 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 43 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__HeadVar__3_3,
#line 43 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__HeadVar__4_4);

#line 56 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 56 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__HeadVar__3_3,
#line 56 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__HeadVar__4_4);

#line 131 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_30_30,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__Dir_8_8,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Offset_10_10,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Bits_11_11,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Size_12_12,
#line 131 "tree_bitset.opt"
  MR_Box mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13,
#line 131 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__STATE_VARIABLE_Acc_20_14);

#line 92 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
#line 92 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_29_29,
#line 92 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 92 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 92 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__3_3,
#line 92 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__HeadVar__4_4);

#line 101 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
#line 101 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_29_29,
#line 101 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 101 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 101 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__3_3,
#line 101 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__HeadVar__4_4);

#line 43 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_24_24,
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 43 "tree_bitset.opt"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 43 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__HeadVar__4_4);

#line 56 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_24_24,
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 56 "tree_bitset.opt"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 56 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__HeadVar__4_4);

#line 130 "list.int"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__test_bitset__V_18_18,
#line 130 "list.int"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 130 "list.int"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 130 "list.int"
  MR_Box * mercury__test_bitset__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 235 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__235__1_3_p_0(
#line 235 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 235 "test_bitset.m"
  MR_Word mercury__test_bitset__SetB_13,
#line 235 "test_bitset.m"
  MR_Box * mercury__test_bitset__HeadVar__3_21,
#line 235 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 235 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr);

#line 234 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__234__1_3_p_0(
#line 234 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 234 "test_bitset.m"
  MR_Word mercury__test_bitset__SetA_12,
#line 234 "test_bitset.m"
  MR_Box * mercury__test_bitset__HeadVar__3_20,
#line 234 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 234 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr);

#line 600 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
#line 600 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_24,
#line 600 "test_bitset.m"
  MR_String mercury__test_bitset__Op_6,
#line 600 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterA_7,
#line 600 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterB_8,
#line 600 "test_bitset.m"
  MR_Word mercury__test_bitset__Tester_9,
#line 600 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_10);

#line 439 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
#line 439 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_21,
#line 439 "test_bitset.m"
  MR_String mercury__test_bitset__Op_1,
#line 439 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 439 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__3_3,
#line 439 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__4_4);

#line 69 "solutions.opt"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_4(
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__test_bitset__wrapper_arg_3);

#line 69 "solutions.opt"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__test_bitset__wrapper_arg_3);

#line 235 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
#line 235 "test_bitset.m"
  MR_Box mercury__test_bitset__closure_arg,
#line 235 "test_bitset.m"
  MR_Box * mercury__test_bitset__wrapper_arg_1,
#line 235 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 235 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr);

#line 234 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
#line 234 "test_bitset.m"
  MR_Box mercury__test_bitset__closure_arg,
#line 234 "test_bitset.m"
  MR_Box * mercury__test_bitset__wrapper_arg_1,
#line 234 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 234 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr);


static /* final */ const MR_Box mercury__test_bitset_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_4[1][1];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_5[1][2];

static /* final */ const MR_Integer mercury__test_bitset_scalar_common_6[2][2];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[2][6];

static /* final */ const MR_Box mercury__test_bitset_scalar_common_8[1][7];




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
    (MR_Integer) 67631
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box mercury__test_bitset_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__test_bitset_scalar_common_6[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__test_bitset__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__test_bitset__list__pti_list_1__pseudo_1))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 877 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 885 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 893 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 901 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 910 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 916 "test_bitset.c"
static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0 = {
  (MR_String) "zero_argument",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_0,
  NULL,
  NULL,
  NULL
};

#line 931 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 938 "test_bitset.c"
static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1 = {
  (MR_String) "one_argument",
  (MR_Integer) 3,
  (MR_Integer) 6,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_1,
  NULL,
  NULL,
  NULL
};

#line 953 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_2[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 961 "test_bitset.c"
static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2 = {
  (MR_String) "two_arguments",
  (MR_Integer) 4,
  (MR_Integer) 14,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__test_bitset__test_bitset__field_types_bitset_error_1_2,
  NULL,
  NULL,
  NULL
};

#line 976 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0
};

#line 981 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1
};

#line 986 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2
};

#line 991 "test_bitset.c"
static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2
  }
};

#line 1010 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1[3] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1,
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2,
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0
};

#line 1017 "test_bitset.c"
static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1024 "test_bitset.c"
const MR_TypeCtorInfo_Struct mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__test_bitset____Unify____bitset_error_1_0_10001)),
  ((MR_Box) (mercury__test_bitset____Compare____bitset_error_1_0_10001)),
  (MR_String) "test_bitset",
  (MR_String) "bitset_error",
  {
    mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1
  },
  {
    mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1
};

#line 1045 "test_bitset.c"
const MR_TypeCtorInfo_Struct mercury__test_bitset__test_bitset__type_ctor_info_test_bitset_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__test_bitset____Unify____test_bitset_1_0_10001)),
  ((MR_Box) (mercury__test_bitset____Compare____test_bitset_1_0_10001)),
  (MR_String) "test_bitset",
  (MR_String) "test_bitset",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1066 "test_bitset.c"
static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
#line 1069 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 1071 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 1073 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3)
#line 1075 "test_bitset.c"
{
#line 1077 "test_bitset.c"
  {
#line 1079 "test_bitset.c"
    MR_bool mercury__test_bitset__succeeded;

#line 1082 "test_bitset.c"
    {
#line 1084 "test_bitset.c"
      mercury__test_bitset__succeeded = mercury__test_bitset____Unify____bitset_error_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), ((MR_Word) mercury__test_bitset__wrapper_arg_2), ((MR_Word) mercury__test_bitset__wrapper_arg_3));
    }
#line 1087 "test_bitset.c"
    return mercury__test_bitset__succeeded;
#line 1089 "test_bitset.c"
  }
#line 1091 "test_bitset.c"
}

#line 1094 "test_bitset.c"
static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
#line 1097 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 1099 "test_bitset.c"
  MR_Box * mercury__test_bitset__wrapper_arg_2,
#line 1101 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3,
#line 1103 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_4)
#line 1105 "test_bitset.c"
{
#line 1107 "test_bitset.c"
  {
#line 1109 "test_bitset.c"
    MR_Word mercury__test_bitset__conv0_HeadVar__1_1;

#line 1112 "test_bitset.c"
    {
#line 1114 "test_bitset.c"
      mercury__test_bitset____Compare____bitset_error_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), &mercury__test_bitset__conv0_HeadVar__1_1, ((MR_Word) mercury__test_bitset__wrapper_arg_3), ((MR_Word) mercury__test_bitset__wrapper_arg_4));
    }
#line 1117 "test_bitset.c"
    *mercury__test_bitset__wrapper_arg_2 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__1_1));
#line 1119 "test_bitset.c"
  }
#line 1121 "test_bitset.c"
}

#line 1124 "test_bitset.c"
static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
#line 1127 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 1129 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 1131 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3)
#line 1133 "test_bitset.c"
{
#line 1135 "test_bitset.c"
  {
#line 1137 "test_bitset.c"
    MR_bool mercury__test_bitset__succeeded;

#line 1140 "test_bitset.c"
    {
#line 1142 "test_bitset.c"
      mercury__test_bitset__succeeded = mercury__test_bitset____Unify____test_bitset_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), ((MR_Word) mercury__test_bitset__wrapper_arg_2), ((MR_Word) mercury__test_bitset__wrapper_arg_3));
    }
#line 1145 "test_bitset.c"
    return mercury__test_bitset__succeeded;
#line 1147 "test_bitset.c"
  }
#line 1149 "test_bitset.c"
}

#line 1152 "test_bitset.c"
static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
#line 1155 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 1157 "test_bitset.c"
  MR_Box * mercury__test_bitset__wrapper_arg_2,
#line 1159 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3,
#line 1161 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_4)
#line 1163 "test_bitset.c"
{
#line 1165 "test_bitset.c"
  {
#line 1167 "test_bitset.c"
    MR_Word mercury__test_bitset__conv0_HeadVar__1_1;

#line 1170 "test_bitset.c"
    {
#line 1172 "test_bitset.c"
      mercury__test_bitset____Compare____test_bitset_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), &mercury__test_bitset__conv0_HeadVar__1_1, ((MR_Word) mercury__test_bitset__wrapper_arg_3), ((MR_Word) mercury__test_bitset__wrapper_arg_4));
    }
#line 1175 "test_bitset.c"
    *mercury__test_bitset__wrapper_arg_2 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__1_1));
#line 1177 "test_bitset.c"
  }
#line 1179 "test_bitset.c"
}

#line 131 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_35_35,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__Dir_8_8,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Offset_10_10,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Bits_11_11,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Size_12_12,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13,
#line 131 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__STATE_VARIABLE_Acc_20_14)
#line 131 "tree_bitset.opt"
{
#line 576 "tree_bitset.opt"
  while (MR_TRUE)
#line 576 "tree_bitset.opt"
    {
#line 576 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 576 "tree_bitset.opt"
      {
#line 576 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded = (mercury__test_bitset__Bits_11_11 == (MR_Integer) 0);

#line 576 "tree_bitset.opt"
        if (mercury__test_bitset__succeeded)
#line 575 "tree_bitset.opt"
          *mercury__test_bitset__STATE_VARIABLE_Acc_20_14 = mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13;
#line 576 "tree_bitset.opt"
        else
#line 582 "tree_bitset.opt"
          {
#line 578 "tree_bitset.opt"
            mercury__test_bitset__succeeded = (mercury__test_bitset__Size_12_12 == (MR_Integer) 1);
#line 582 "tree_bitset.opt"
            if (mercury__test_bitset__succeeded)
#line 580 "tree_bitset.opt"
              {
#line 580 "tree_bitset.opt"
                MR_Box mercury__test_bitset__Elem_14_15;

#line 580 "tree_bitset.opt"
                {
#line 580 "tree_bitset.opt"
                  mercury__test_bitset__Elem_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__Offset_10_10);
                }
#line 44 "list.opt"
                {
#line 44 "list.opt"
                  MR_Word base;
#line 44 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 44 "list.opt"
                  *mercury__test_bitset__STATE_VARIABLE_Acc_20_14 = base;
#line 44 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__test_bitset__Elem_14_15;
#line 44 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13));
#line 44 "list.opt"
                }
#line 580 "tree_bitset.opt"
              }
#line 582 "tree_bitset.opt"
            else
#line 583 "tree_bitset.opt"
              {
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__HalfSize_15_16 = (mercury__test_bitset__Size_12_12 >> (MR_Integer) 1);
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__Mask_16_18;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__LowBits_17_19;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__HighBits_18_20;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_23_21;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_4_73 = ((MR_Integer) -1 << mercury__test_bitset__HalfSize_15_16);

#line 479 "tree_bitset.opt"
                mercury__test_bitset__Mask_16_18 = ~(mercury__test_bitset__V_4_73);
#line 586 "tree_bitset.opt"
                mercury__test_bitset__LowBits_17_19 = (mercury__test_bitset__Mask_16_18 & mercury__test_bitset__Bits_11_11);
#line 588 "tree_bitset.opt"
                mercury__test_bitset__V_23_21 = (mercury__test_bitset__Bits_11_11 >> mercury__test_bitset__HalfSize_15_16);
#line 587 "tree_bitset.opt"
                mercury__test_bitset__HighBits_18_20 = (mercury__test_bitset__Mask_16_18 & mercury__test_bitset__V_23_21);
#line 594 "tree_bitset.opt"
                if ((mercury__test_bitset__Dir_8_8 == (MR_Integer) 1))
#line 595 "tree_bitset.opt"
                  {
#line 595 "tree_bitset.opt"
                    MR_Integer mercury__test_bitset__V_24_24 = (mercury__test_bitset__Offset_10_10 + mercury__test_bitset__HalfSize_15_16);
#line 595 "tree_bitset.opt"
                    MR_Word mercury__test_bitset__STATE_VARIABLE_Acc_25_25_25;

#line 597 "tree_bitset.opt"
                    {
#line 597 "tree_bitset.opt"
                      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_35_35, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__Dir_8_8, mercury__test_bitset__V_24_24, mercury__test_bitset__HighBits_18_20, mercury__test_bitset__HalfSize_15_16, mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13, &mercury__test_bitset__STATE_VARIABLE_Acc_25_25_25);
                    }
#line 598 "tree_bitset.opt"
                    /* direct tailcall eliminated */
#line 598 "tree_bitset.opt"
                    {
#line 598 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Bits_11__tmp_copy_11 = mercury__test_bitset__LowBits_17_19;
#line 598 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Size_12__tmp_copy_12 = mercury__test_bitset__HalfSize_15_16;
#line 598 "tree_bitset.opt"
                      MR_Word mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__test_bitset__STATE_VARIABLE_Acc_25_25_25;

#line 598 "tree_bitset.opt"
                      mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13 = mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 598 "tree_bitset.opt"
                      mercury__test_bitset__Size_12_12 = mercury__test_bitset__Size_12__tmp_copy_12;
#line 598 "tree_bitset.opt"
                      mercury__test_bitset__Bits_11_11 = mercury__test_bitset__Bits_11__tmp_copy_11;
#line 598 "tree_bitset.opt"
                    }
#line 598 "tree_bitset.opt"
                    continue;
#line 595 "tree_bitset.opt"
                  }
#line 594 "tree_bitset.opt"
                else
#line 590 "tree_bitset.opt"
                  {
#line 590 "tree_bitset.opt"
                    MR_Word mercury__test_bitset__STATE_VARIABLE_Acc_27_27_22;
#line 590 "tree_bitset.opt"
                    MR_Integer mercury__test_bitset__V_28_23;

#line 591 "tree_bitset.opt"
                    {
#line 591 "tree_bitset.opt"
                      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_35_35, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__Dir_8_8, mercury__test_bitset__Offset_10_10, mercury__test_bitset__LowBits_17_19, mercury__test_bitset__HalfSize_15_16, mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13, &mercury__test_bitset__STATE_VARIABLE_Acc_27_27_22);
                    }
#line 592 "tree_bitset.opt"
                    mercury__test_bitset__V_28_23 = (mercury__test_bitset__Offset_10_10 + mercury__test_bitset__HalfSize_15_16);
#line 593 "tree_bitset.opt"
                    /* direct tailcall eliminated */
#line 593 "tree_bitset.opt"
                    {
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Offset_10__tmp_copy_10 = mercury__test_bitset__V_28_23;
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Bits_11__tmp_copy_11 = mercury__test_bitset__HighBits_18_20;
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Size_12__tmp_copy_12 = mercury__test_bitset__HalfSize_15_16;
#line 593 "tree_bitset.opt"
                      MR_Word mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__test_bitset__STATE_VARIABLE_Acc_27_27_22;

#line 593 "tree_bitset.opt"
                      mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13 = mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 593 "tree_bitset.opt"
                      mercury__test_bitset__Size_12_12 = mercury__test_bitset__Size_12__tmp_copy_12;
#line 593 "tree_bitset.opt"
                      mercury__test_bitset__Bits_11_11 = mercury__test_bitset__Bits_11__tmp_copy_11;
#line 593 "tree_bitset.opt"
                      mercury__test_bitset__Offset_10_10 = mercury__test_bitset__Offset_10__tmp_copy_10;
#line 593 "tree_bitset.opt"
                    }
#line 593 "tree_bitset.opt"
                    continue;
#line 590 "tree_bitset.opt"
                  }
#line 583 "tree_bitset.opt"
              }
#line 582 "tree_bitset.opt"
          }
#line 576 "tree_bitset.opt"
      }
#line 576 "tree_bitset.opt"
      break;
#line 576 "tree_bitset.opt"
    }
#line 131 "tree_bitset.opt"
}

#line 131 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__Dir_8_8,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Offset_10_10,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Bits_11_11,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Size_12_12,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13,
#line 131 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__STATE_VARIABLE_Acc_20_14)
#line 131 "tree_bitset.opt"
{
#line 576 "tree_bitset.opt"
  while (MR_TRUE)
#line 576 "tree_bitset.opt"
    {
#line 576 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 576 "tree_bitset.opt"
      {
#line 576 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded = (mercury__test_bitset__Bits_11_11 == (MR_Integer) 0);

#line 576 "tree_bitset.opt"
        if (mercury__test_bitset__succeeded)
#line 575 "tree_bitset.opt"
          *mercury__test_bitset__STATE_VARIABLE_Acc_20_14 = mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13;
#line 576 "tree_bitset.opt"
        else
#line 582 "tree_bitset.opt"
          {
#line 578 "tree_bitset.opt"
            mercury__test_bitset__succeeded = (mercury__test_bitset__Size_12_12 == (MR_Integer) 1);
#line 582 "tree_bitset.opt"
            if (mercury__test_bitset__succeeded)
#line 580 "tree_bitset.opt"
              {
#line 580 "tree_bitset.opt"
                MR_Box mercury__test_bitset__Elem_14_15;

#line 580 "tree_bitset.opt"
                {
#line 580 "tree_bitset.opt"
                  mercury__test_bitset__Elem_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__Offset_10_10);
                }
#line 261 "tree_bitset.opt"
                *mercury__test_bitset__STATE_VARIABLE_Acc_20_14 = (mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13 + (MR_Integer) 1);
#line 580 "tree_bitset.opt"
              }
#line 582 "tree_bitset.opt"
            else
#line 583 "tree_bitset.opt"
              {
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__HalfSize_15_16 = (mercury__test_bitset__Size_12_12 >> (MR_Integer) 1);
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__Mask_16_18;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__LowBits_17_19;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__HighBits_18_20;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_23_21;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_4_72 = ((MR_Integer) -1 << mercury__test_bitset__HalfSize_15_16);

#line 479 "tree_bitset.opt"
                mercury__test_bitset__Mask_16_18 = ~(mercury__test_bitset__V_4_72);
#line 586 "tree_bitset.opt"
                mercury__test_bitset__LowBits_17_19 = (mercury__test_bitset__Mask_16_18 & mercury__test_bitset__Bits_11_11);
#line 588 "tree_bitset.opt"
                mercury__test_bitset__V_23_21 = (mercury__test_bitset__Bits_11_11 >> mercury__test_bitset__HalfSize_15_16);
#line 587 "tree_bitset.opt"
                mercury__test_bitset__HighBits_18_20 = (mercury__test_bitset__Mask_16_18 & mercury__test_bitset__V_23_21);
#line 594 "tree_bitset.opt"
                if ((mercury__test_bitset__Dir_8_8 == (MR_Integer) 1))
#line 595 "tree_bitset.opt"
                  {
#line 595 "tree_bitset.opt"
                    MR_Integer mercury__test_bitset__V_24_24 = (mercury__test_bitset__Offset_10_10 + mercury__test_bitset__HalfSize_15_16);
#line 595 "tree_bitset.opt"
                    MR_Integer mercury__test_bitset__STATE_VARIABLE_Acc_25_25_25;

#line 597 "tree_bitset.opt"
                    {
#line 597 "tree_bitset.opt"
                      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__Dir_8_8, mercury__test_bitset__V_24_24, mercury__test_bitset__HighBits_18_20, mercury__test_bitset__HalfSize_15_16, mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13, &mercury__test_bitset__STATE_VARIABLE_Acc_25_25_25);
                    }
#line 598 "tree_bitset.opt"
                    /* direct tailcall eliminated */
#line 598 "tree_bitset.opt"
                    {
#line 598 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Bits_11__tmp_copy_11 = mercury__test_bitset__LowBits_17_19;
#line 598 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Size_12__tmp_copy_12 = mercury__test_bitset__HalfSize_15_16;
#line 598 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__test_bitset__STATE_VARIABLE_Acc_25_25_25;

#line 598 "tree_bitset.opt"
                      mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13 = mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 598 "tree_bitset.opt"
                      mercury__test_bitset__Size_12_12 = mercury__test_bitset__Size_12__tmp_copy_12;
#line 598 "tree_bitset.opt"
                      mercury__test_bitset__Bits_11_11 = mercury__test_bitset__Bits_11__tmp_copy_11;
#line 598 "tree_bitset.opt"
                    }
#line 598 "tree_bitset.opt"
                    continue;
#line 595 "tree_bitset.opt"
                  }
#line 594 "tree_bitset.opt"
                else
#line 590 "tree_bitset.opt"
                  {
#line 590 "tree_bitset.opt"
                    MR_Integer mercury__test_bitset__STATE_VARIABLE_Acc_27_27_22;
#line 590 "tree_bitset.opt"
                    MR_Integer mercury__test_bitset__V_28_23;

#line 591 "tree_bitset.opt"
                    {
#line 591 "tree_bitset.opt"
                      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__Dir_8_8, mercury__test_bitset__Offset_10_10, mercury__test_bitset__LowBits_17_19, mercury__test_bitset__HalfSize_15_16, mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13, &mercury__test_bitset__STATE_VARIABLE_Acc_27_27_22);
                    }
#line 592 "tree_bitset.opt"
                    mercury__test_bitset__V_28_23 = (mercury__test_bitset__Offset_10_10 + mercury__test_bitset__HalfSize_15_16);
#line 593 "tree_bitset.opt"
                    /* direct tailcall eliminated */
#line 593 "tree_bitset.opt"
                    {
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Offset_10__tmp_copy_10 = mercury__test_bitset__V_28_23;
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Bits_11__tmp_copy_11 = mercury__test_bitset__HighBits_18_20;
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Size_12__tmp_copy_12 = mercury__test_bitset__HalfSize_15_16;
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__test_bitset__STATE_VARIABLE_Acc_27_27_22;

#line 593 "tree_bitset.opt"
                      mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13 = mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 593 "tree_bitset.opt"
                      mercury__test_bitset__Size_12_12 = mercury__test_bitset__Size_12__tmp_copy_12;
#line 593 "tree_bitset.opt"
                      mercury__test_bitset__Bits_11_11 = mercury__test_bitset__Bits_11__tmp_copy_11;
#line 593 "tree_bitset.opt"
                      mercury__test_bitset__Offset_10_10 = mercury__test_bitset__Offset_10__tmp_copy_10;
#line 593 "tree_bitset.opt"
                    }
#line 593 "tree_bitset.opt"
                    continue;
#line 590 "tree_bitset.opt"
                  }
#line 583 "tree_bitset.opt"
              }
#line 582 "tree_bitset.opt"
          }
#line 576 "tree_bitset.opt"
      }
#line 576 "tree_bitset.opt"
      break;
#line 576 "tree_bitset.opt"
    }
#line 131 "tree_bitset.opt"
}

#line 43 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 43 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__HeadVar__3_3,
#line 43 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__HeadVar__4_4)
#line 43 "tree_bitset.opt"
{
#line 483 "tree_bitset.opt"
  while (MR_TRUE)
#line 483 "tree_bitset.opt"
    {
#line 483 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 483 "tree_bitset.opt"
      {
#line 483 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 483 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 483 "tree_bitset.opt"
        else
#line 485 "tree_bitset.opt"
          {
#line 485 "tree_bitset.opt"
            MR_Word mercury__test_bitset__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 485 "tree_bitset.opt"
            MR_Word mercury__test_bitset__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 485 "tree_bitset.opt"
            MR_Word mercury__test_bitset__Components_13_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 2)));
#line 485 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__STATE_VARIABLE_Acc_20_20_17;
#line 486 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 0)));
#line 486 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_23_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 1)));

#line 490 "tree_bitset.opt"
            if (((MR_tag((MR_Word) mercury__test_bitset__Components_13_15)) == (MR_mktag((MR_Integer) 1))))
#line 491 "tree_bitset.opt"
              {
#line 491 "tree_bitset.opt"
                MR_Word mercury__test_bitset__InteriorNodes_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__Components_13_15, (MR_Integer) 1)));
#line 491 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__Components_13_15, (MR_Integer) 0)));

#line 492 "tree_bitset.opt"
                {
#line 492 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__InteriorNodes_16_19, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__STATE_VARIABLE_Acc_20_20_17);
                }
#line 491 "tree_bitset.opt"
              }
#line 490 "tree_bitset.opt"
            else
#line 488 "tree_bitset.opt"
              {
#line 488 "tree_bitset.opt"
                MR_Word mercury__test_bitset__LeafNodes_14_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Components_13_15, (MR_Integer) 0)));

#line 489 "tree_bitset.opt"
                {
#line 489 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__LeafNodes_14_16, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__STATE_VARIABLE_Acc_20_20_17);
                }
#line 488 "tree_bitset.opt"
              }
#line 494 "tree_bitset.opt"
            /* direct tailcall eliminated */
#line 494 "tree_bitset.opt"
            {
#line 494 "tree_bitset.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__T_11_10;
#line 494 "tree_bitset.opt"
              MR_Integer mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__STATE_VARIABLE_Acc_20_20_17;

#line 494 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 494 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 494 "tree_bitset.opt"
            }
#line 494 "tree_bitset.opt"
            continue;
#line 485 "tree_bitset.opt"
          }
#line 483 "tree_bitset.opt"
      }
#line 483 "tree_bitset.opt"
      break;
#line 483 "tree_bitset.opt"
    }
#line 43 "tree_bitset.opt"
}

#line 56 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 56 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__HeadVar__3_3,
#line 56 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__HeadVar__4_4)
#line 56 "tree_bitset.opt"
{
#line 495 "tree_bitset.opt"
  while (MR_TRUE)
#line 495 "tree_bitset.opt"
    {
#line 495 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 495 "tree_bitset.opt"
      {
#line 495 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 495 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 495 "tree_bitset.opt"
        else
#line 497 "tree_bitset.opt"
          {
#line 497 "tree_bitset.opt"
            MR_Word mercury__test_bitset__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 497 "tree_bitset.opt"
            MR_Word mercury__test_bitset__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 497 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 0)));
#line 497 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 1)));
#line 497 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_18_18;
#line 497 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__STATE_VARIABLE_Acc_19_19_19;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 1703 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 502 "tree_bitset.opt"
            {
#line 502 "tree_bitset.opt"
              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_55_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__test_bitset__V_22_16, mercury__test_bitset__V_17_17, mercury__test_bitset__V_18_18, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__STATE_VARIABLE_Acc_19_19_19);
            }
#line 503 "tree_bitset.opt"
            /* direct tailcall eliminated */
#line 503 "tree_bitset.opt"
            {
#line 503 "tree_bitset.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__T_11_10;
#line 503 "tree_bitset.opt"
              MR_Integer mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__STATE_VARIABLE_Acc_19_19_19;

#line 503 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 503 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 503 "tree_bitset.opt"
            }
#line 503 "tree_bitset.opt"
            continue;
#line 497 "tree_bitset.opt"
          }
#line 495 "tree_bitset.opt"
      }
#line 495 "tree_bitset.opt"
      break;
#line 495 "tree_bitset.opt"
    }
#line 56 "tree_bitset.opt"
}

#line 131 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_30_30,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 131 "tree_bitset.opt"
  MR_Word mercury__test_bitset__Dir_8_8,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Offset_10_10,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Bits_11_11,
#line 131 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__Size_12_12,
#line 131 "tree_bitset.opt"
  MR_Box mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13,
#line 131 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__STATE_VARIABLE_Acc_20_14)
#line 131 "tree_bitset.opt"
{
#line 576 "tree_bitset.opt"
  while (MR_TRUE)
#line 576 "tree_bitset.opt"
    {
#line 576 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 576 "tree_bitset.opt"
      {
#line 576 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded = (mercury__test_bitset__Bits_11_11 == (MR_Integer) 0);

#line 576 "tree_bitset.opt"
        if (mercury__test_bitset__succeeded)
#line 575 "tree_bitset.opt"
          *mercury__test_bitset__STATE_VARIABLE_Acc_20_14 = mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13;
#line 576 "tree_bitset.opt"
        else
#line 582 "tree_bitset.opt"
          {
#line 578 "tree_bitset.opt"
            mercury__test_bitset__succeeded = (mercury__test_bitset__Size_12_12 == (MR_Integer) 1);
#line 582 "tree_bitset.opt"
            if (mercury__test_bitset__succeeded)
#line 580 "tree_bitset.opt"
              {
#line 580 "tree_bitset.opt"
                MR_Box mercury__test_bitset__Elem_14_15;
#line 272 "tree_bitset.opt"
                MR_Box MR_CALL (* mercury__test_bitset__func_0)(MR_Box, MR_Box, MR_Box);

#line 580 "tree_bitset.opt"
                {
#line 580 "tree_bitset.opt"
                  mercury__test_bitset__Elem_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__Offset_10_10);
                }
#line 272 "tree_bitset.opt"
                mercury__test_bitset__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_30_30, (MR_Integer) 1)));
#line 272 "tree_bitset.opt"
                {
#line 272 "tree_bitset.opt"
                  *mercury__test_bitset__STATE_VARIABLE_Acc_20_14 = mercury__test_bitset__func_0(((MR_Box) mercury__test_bitset__V_30_30), mercury__test_bitset__Elem_14_15, mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13);
                }
#line 580 "tree_bitset.opt"
              }
#line 582 "tree_bitset.opt"
            else
#line 583 "tree_bitset.opt"
              {
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__HalfSize_15_16 = (mercury__test_bitset__Size_12_12 >> (MR_Integer) 1);
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__Mask_16_18;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__LowBits_17_19;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__HighBits_18_20;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_23_21;
#line 583 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_4_52 = ((MR_Integer) -1 << mercury__test_bitset__HalfSize_15_16);

#line 479 "tree_bitset.opt"
                mercury__test_bitset__Mask_16_18 = ~(mercury__test_bitset__V_4_52);
#line 586 "tree_bitset.opt"
                mercury__test_bitset__LowBits_17_19 = (mercury__test_bitset__Mask_16_18 & mercury__test_bitset__Bits_11_11);
#line 588 "tree_bitset.opt"
                mercury__test_bitset__V_23_21 = (mercury__test_bitset__Bits_11_11 >> mercury__test_bitset__HalfSize_15_16);
#line 587 "tree_bitset.opt"
                mercury__test_bitset__HighBits_18_20 = (mercury__test_bitset__Mask_16_18 & mercury__test_bitset__V_23_21);
#line 594 "tree_bitset.opt"
                if ((mercury__test_bitset__Dir_8_8 == (MR_Integer) 1))
#line 595 "tree_bitset.opt"
                  {
#line 595 "tree_bitset.opt"
                    MR_Integer mercury__test_bitset__V_24_24 = (mercury__test_bitset__Offset_10_10 + mercury__test_bitset__HalfSize_15_16);
#line 595 "tree_bitset.opt"
                    MR_Box mercury__test_bitset__STATE_VARIABLE_Acc_25_25_25;

#line 597 "tree_bitset.opt"
                    {
#line 597 "tree_bitset.opt"
                      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_30_30, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__Dir_8_8, mercury__test_bitset__V_24_24, mercury__test_bitset__HighBits_18_20, mercury__test_bitset__HalfSize_15_16, mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13, &mercury__test_bitset__STATE_VARIABLE_Acc_25_25_25);
                    }
#line 598 "tree_bitset.opt"
                    /* direct tailcall eliminated */
#line 598 "tree_bitset.opt"
                    {
#line 598 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Bits_11__tmp_copy_11 = mercury__test_bitset__LowBits_17_19;
#line 598 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Size_12__tmp_copy_12 = mercury__test_bitset__HalfSize_15_16;
#line 598 "tree_bitset.opt"
                      MR_Box mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__test_bitset__STATE_VARIABLE_Acc_25_25_25;

#line 598 "tree_bitset.opt"
                      mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13 = mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 598 "tree_bitset.opt"
                      mercury__test_bitset__Size_12_12 = mercury__test_bitset__Size_12__tmp_copy_12;
#line 598 "tree_bitset.opt"
                      mercury__test_bitset__Bits_11_11 = mercury__test_bitset__Bits_11__tmp_copy_11;
#line 598 "tree_bitset.opt"
                    }
#line 598 "tree_bitset.opt"
                    continue;
#line 595 "tree_bitset.opt"
                  }
#line 594 "tree_bitset.opt"
                else
#line 590 "tree_bitset.opt"
                  {
#line 590 "tree_bitset.opt"
                    MR_Box mercury__test_bitset__STATE_VARIABLE_Acc_27_27_22;
#line 590 "tree_bitset.opt"
                    MR_Integer mercury__test_bitset__V_28_23;

#line 591 "tree_bitset.opt"
                    {
#line 591 "tree_bitset.opt"
                      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_30_30, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__Dir_8_8, mercury__test_bitset__Offset_10_10, mercury__test_bitset__LowBits_17_19, mercury__test_bitset__HalfSize_15_16, mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13, &mercury__test_bitset__STATE_VARIABLE_Acc_27_27_22);
                    }
#line 592 "tree_bitset.opt"
                    mercury__test_bitset__V_28_23 = (mercury__test_bitset__Offset_10_10 + mercury__test_bitset__HalfSize_15_16);
#line 593 "tree_bitset.opt"
                    /* direct tailcall eliminated */
#line 593 "tree_bitset.opt"
                    {
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Offset_10__tmp_copy_10 = mercury__test_bitset__V_28_23;
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Bits_11__tmp_copy_11 = mercury__test_bitset__HighBits_18_20;
#line 593 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__Size_12__tmp_copy_12 = mercury__test_bitset__HalfSize_15_16;
#line 593 "tree_bitset.opt"
                      MR_Box mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13 = mercury__test_bitset__STATE_VARIABLE_Acc_27_27_22;

#line 593 "tree_bitset.opt"
                      mercury__test_bitset__STATE_VARIABLE_Acc_0_19_13 = mercury__test_bitset__STATE_VARIABLE_Acc_0_19__tmp_copy_13;
#line 593 "tree_bitset.opt"
                      mercury__test_bitset__Size_12_12 = mercury__test_bitset__Size_12__tmp_copy_12;
#line 593 "tree_bitset.opt"
                      mercury__test_bitset__Bits_11_11 = mercury__test_bitset__Bits_11__tmp_copy_11;
#line 593 "tree_bitset.opt"
                      mercury__test_bitset__Offset_10_10 = mercury__test_bitset__Offset_10__tmp_copy_10;
#line 593 "tree_bitset.opt"
                    }
#line 593 "tree_bitset.opt"
                    continue;
#line 590 "tree_bitset.opt"
                  }
#line 583 "tree_bitset.opt"
              }
#line 582 "tree_bitset.opt"
          }
#line 576 "tree_bitset.opt"
      }
#line 576 "tree_bitset.opt"
      break;
#line 576 "tree_bitset.opt"
    }
#line 131 "tree_bitset.opt"
}

#line 92 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
#line 92 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_29_29,
#line 92 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 92 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 92 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__3_3,
#line 92 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__HeadVar__4_4)
#line 92 "tree_bitset.opt"
{
#line 527 "tree_bitset.opt"
  while (MR_TRUE)
#line 527 "tree_bitset.opt"
    {
#line 527 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 527 "tree_bitset.opt"
      {
#line 527 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 527 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 527 "tree_bitset.opt"
        else
#line 529 "tree_bitset.opt"
          {
#line 529 "tree_bitset.opt"
            MR_Word mercury__test_bitset__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 529 "tree_bitset.opt"
            MR_Word mercury__test_bitset__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 529 "tree_bitset.opt"
            MR_Word mercury__test_bitset__STATE_VARIABLE_Acc_19_19_13;
#line 529 "tree_bitset.opt"
            MR_Word mercury__test_bitset__Components_13_16;
#line 531 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_14;
#line 531 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_23_15;

#line 530 "tree_bitset.opt"
            {
#line 530 "tree_bitset.opt"
              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_29_29, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__T_11_10, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__STATE_VARIABLE_Acc_19_19_13);
            }
#line 531 "tree_bitset.opt"
            mercury__test_bitset__V_22_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 0)));
#line 531 "tree_bitset.opt"
            mercury__test_bitset__V_23_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 1)));
#line 531 "tree_bitset.opt"
            mercury__test_bitset__Components_13_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 2)));
#line 535 "tree_bitset.opt"
            if (((MR_tag((MR_Word) mercury__test_bitset__Components_13_16)) == (MR_mktag((MR_Integer) 1))))
#line 536 "tree_bitset.opt"
              {
#line 536 "tree_bitset.opt"
                MR_Word mercury__test_bitset__InteriorNodes_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__Components_13_16, (MR_Integer) 1)));
#line 536 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__Components_13_16, (MR_Integer) 0)));

#line 537 "tree_bitset.opt"
                /* direct tailcall eliminated */
#line 537 "tree_bitset.opt"
                {
#line 537 "tree_bitset.opt"
                  MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__InteriorNodes_16_19;
#line 537 "tree_bitset.opt"
                  MR_Word mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__STATE_VARIABLE_Acc_19_19_13;

#line 537 "tree_bitset.opt"
                  mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 537 "tree_bitset.opt"
                  mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 537 "tree_bitset.opt"
                }
#line 537 "tree_bitset.opt"
                continue;
#line 536 "tree_bitset.opt"
              }
#line 535 "tree_bitset.opt"
            else
#line 533 "tree_bitset.opt"
              {
#line 533 "tree_bitset.opt"
                MR_Word mercury__test_bitset__LeafNodes_14_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Components_13_16, (MR_Integer) 0)));

#line 534 "tree_bitset.opt"
                {
#line 534 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_29_29, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__LeafNodes_14_17, mercury__test_bitset__STATE_VARIABLE_Acc_19_19_13, mercury__test_bitset__HeadVar__4_4);
#line 534 "tree_bitset.opt"
                  return;
                }
#line 533 "tree_bitset.opt"
              }
#line 529 "tree_bitset.opt"
          }
#line 527 "tree_bitset.opt"
      }
#line 527 "tree_bitset.opt"
      break;
#line 527 "tree_bitset.opt"
    }
#line 92 "tree_bitset.opt"
}

#line 101 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
#line 101 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_29_29,
#line 101 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 101 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 101 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__3_3,
#line 101 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__HeadVar__4_4)
#line 101 "tree_bitset.opt"
{
#line 539 "tree_bitset.opt"
  {
#line 539 "tree_bitset.opt"
    MR_bool mercury__test_bitset__succeeded;

#line 539 "tree_bitset.opt"
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 539 "tree_bitset.opt"
      *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 539 "tree_bitset.opt"
    else
#line 541 "tree_bitset.opt"
      {
#line 541 "tree_bitset.opt"
        MR_Word mercury__test_bitset__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 541 "tree_bitset.opt"
        MR_Word mercury__test_bitset__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 541 "tree_bitset.opt"
        MR_Word mercury__test_bitset__STATE_VARIABLE_Acc_15_15_13;
#line 541 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_22_17;
#line 541 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_18_18;
#line 541 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_19_19;

#line 542 "tree_bitset.opt"
        {
#line 542 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_29_29, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__T_11_10, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__STATE_VARIABLE_Acc_15_15_13);
        }
#line 544 "tree_bitset.opt"
        mercury__test_bitset__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 0)));
#line 544 "tree_bitset.opt"
        mercury__test_bitset__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 1)));
#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2100 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_19_19  = Bits;
#line 171 "int.opt"
}
#line 547 "tree_bitset.opt"
        {
#line 547 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_29_29, mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__test_bitset__V_22_17, mercury__test_bitset__V_18_18, mercury__test_bitset__V_19_19, mercury__test_bitset__STATE_VARIABLE_Acc_15_15_13, mercury__test_bitset__HeadVar__4_4);
#line 547 "tree_bitset.opt"
          return;
        }
#line 541 "tree_bitset.opt"
      }
#line 539 "tree_bitset.opt"
  }
#line 101 "tree_bitset.opt"
}

#line 43 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_24_24,
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 43 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 43 "tree_bitset.opt"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 43 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__HeadVar__4_4)
#line 43 "tree_bitset.opt"
{
#line 483 "tree_bitset.opt"
  while (MR_TRUE)
#line 483 "tree_bitset.opt"
    {
#line 483 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 483 "tree_bitset.opt"
      {
#line 483 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 483 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 483 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 483 "tree_bitset.opt"
        else
#line 485 "tree_bitset.opt"
          {
#line 485 "tree_bitset.opt"
            MR_Word mercury__test_bitset__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 485 "tree_bitset.opt"
            MR_Word mercury__test_bitset__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 485 "tree_bitset.opt"
            MR_Word mercury__test_bitset__Components_13_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 2)));
#line 485 "tree_bitset.opt"
            MR_Box mercury__test_bitset__STATE_VARIABLE_Acc_20_20_17;
#line 486 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 0)));
#line 486 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_23_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 1)));

#line 490 "tree_bitset.opt"
            if (((MR_tag((MR_Word) mercury__test_bitset__Components_13_15)) == (MR_mktag((MR_Integer) 1))))
#line 491 "tree_bitset.opt"
              {
#line 491 "tree_bitset.opt"
                MR_Word mercury__test_bitset__InteriorNodes_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__Components_13_15, (MR_Integer) 1)));
#line 491 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__Components_13_15, (MR_Integer) 0)));

#line 492 "tree_bitset.opt"
                {
#line 492 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_24_24, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__InteriorNodes_16_19, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__STATE_VARIABLE_Acc_20_20_17);
                }
#line 491 "tree_bitset.opt"
              }
#line 490 "tree_bitset.opt"
            else
#line 488 "tree_bitset.opt"
              {
#line 488 "tree_bitset.opt"
                MR_Word mercury__test_bitset__LeafNodes_14_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Components_13_15, (MR_Integer) 0)));

#line 489 "tree_bitset.opt"
                {
#line 489 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_24_24, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__LeafNodes_14_16, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__STATE_VARIABLE_Acc_20_20_17);
                }
#line 488 "tree_bitset.opt"
              }
#line 494 "tree_bitset.opt"
            /* direct tailcall eliminated */
#line 494 "tree_bitset.opt"
            {
#line 494 "tree_bitset.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__T_11_10;
#line 494 "tree_bitset.opt"
              MR_Box mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__STATE_VARIABLE_Acc_20_20_17;

#line 494 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 494 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 494 "tree_bitset.opt"
            }
#line 494 "tree_bitset.opt"
            continue;
#line 485 "tree_bitset.opt"
          }
#line 483 "tree_bitset.opt"
      }
#line 483 "tree_bitset.opt"
      break;
#line 483 "tree_bitset.opt"
    }
#line 43 "tree_bitset.opt"
}

#line 56 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_24_24,
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 56 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 56 "tree_bitset.opt"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 56 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__HeadVar__4_4)
#line 56 "tree_bitset.opt"
{
#line 495 "tree_bitset.opt"
  while (MR_TRUE)
#line 495 "tree_bitset.opt"
    {
#line 495 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 495 "tree_bitset.opt"
      {
#line 495 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 495 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 495 "tree_bitset.opt"
        else
#line 497 "tree_bitset.opt"
          {
#line 497 "tree_bitset.opt"
            MR_Word mercury__test_bitset__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 497 "tree_bitset.opt"
            MR_Word mercury__test_bitset__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 497 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 0)));
#line 497 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__H_10_9, (MR_Integer) 1)));
#line 497 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_18_18;
#line 497 "tree_bitset.opt"
            MR_Box mercury__test_bitset__STATE_VARIABLE_Acc_19_19_19;

#line 171 "int.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{
#line 171 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2284 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_18_18  = Bits;
#line 171 "int.opt"
}
#line 502 "tree_bitset.opt"
            {
#line 502 "tree_bitset.opt"
              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_24_24, mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__test_bitset__V_22_16, mercury__test_bitset__V_17_17, mercury__test_bitset__V_18_18, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__STATE_VARIABLE_Acc_19_19_19);
            }
#line 503 "tree_bitset.opt"
            /* direct tailcall eliminated */
#line 503 "tree_bitset.opt"
            {
#line 503 "tree_bitset.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__T_11_10;
#line 503 "tree_bitset.opt"
              MR_Box mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__STATE_VARIABLE_Acc_19_19_19;

#line 503 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 503 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 503 "tree_bitset.opt"
            }
#line 503 "tree_bitset.opt"
            continue;
#line 497 "tree_bitset.opt"
          }
#line 495 "tree_bitset.opt"
      }
#line 495 "tree_bitset.opt"
      break;
#line 495 "tree_bitset.opt"
    }
#line 56 "tree_bitset.opt"
}

#line 130 "list.int"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 130 "list.int"
  MR_Word mercury__test_bitset__V_18_18,
#line 130 "list.int"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 130 "list.int"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 130 "list.int"
  MR_Box * mercury__test_bitset__HeadVar__4_4)
#line 130 "list.int"
{
#line 332 "list.opt"
  while (MR_TRUE)
#line 332 "list.opt"
    {
#line 332 "list.opt"
      /* tailcall optimized into a loop */
#line 332 "list.opt"
      {
#line 332 "list.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 332 "list.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Box mercury__test_bitset__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0));
#line 334 "list.opt"
            MR_Word mercury__test_bitset__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Box mercury__test_bitset__STATE_VARIABLE_A_15_15_13;
#line 342 "list.opt"
            MR_Box MR_CALL (* mercury__test_bitset__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_18_18, (MR_Integer) 1)));

#line 342 "list.opt"
            {
#line 342 "list.opt"
              mercury__test_bitset__STATE_VARIABLE_A_15_15_13 = mercury__test_bitset__func_0(((MR_Box) mercury__test_bitset__V_18_18), mercury__test_bitset__H_10_9, mercury__test_bitset__HeadVar__3_3);
            }
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__T_11_10;
#line 336 "list.opt"
              MR_Box mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 336 "list.opt"
            }
#line 336 "list.opt"
            continue;
#line 334 "list.opt"
          }
#line 332 "list.opt"
      }
#line 332 "list.opt"
      break;
#line 332 "list.opt"
    }
#line 130 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__test_bitset__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 235 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__235__1_3_p_0(
#line 235 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 235 "test_bitset.m"
  MR_Word mercury__test_bitset__SetB_13,
#line 235 "test_bitset.m"
  MR_Box * mercury__test_bitset__HeadVar__3_21,
#line 235 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 235 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr)
#line 235 "test_bitset.m"
{
#line 235 "test_bitset.m"
  {
#line 235 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 235 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_31_31;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__IntroducedFrom__pred__member__235__1_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2452 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_31_31  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 235 "test_bitset.m"
    {
#line 235 "test_bitset.m"
      mercury__set_ordlist__member_2_p_1(mercury__test_bitset__TypeInfo_31_31, mercury__test_bitset__HeadVar__3_21, mercury__test_bitset__SetB_13, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 235 "test_bitset.m"
      return;
    }
#line 235 "test_bitset.m"
  }
#line 235 "test_bitset.m"
}

#line 234 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__234__1_3_p_0(
#line 234 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 234 "test_bitset.m"
  MR_Word mercury__test_bitset__SetA_12,
#line 234 "test_bitset.m"
  MR_Box * mercury__test_bitset__HeadVar__3_20,
#line 234 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 234 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr)
#line 234 "test_bitset.m"
{
#line 234 "test_bitset.m"
  {
#line 234 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 234 "test_bitset.m"
    {
#line 234 "test_bitset.m"
      mercury__tree_bitset__member_2_p_1(mercury__test_bitset__TypeClassInfo_for_enum_27, mercury__test_bitset__HeadVar__3_20, mercury__test_bitset__SetA_12, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 234 "test_bitset.m"
      return;
    }
#line 234 "test_bitset.m"
  }
#line 234 "test_bitset.m"
}

#line 159 "test_bitset.m"
void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0(
#line 159 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_6,
#line 159 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__1_1,
#line 159 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 159 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__3_3)
#line 159 "test_bitset.m"
{
#line 159 "test_bitset.m"
  {
#line 159 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_7_7 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_8_8;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_9_9;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_10_10;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__Cast_HeadVar1_4 = mercury__test_bitset__HeadVar__2_2;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__Cast_HeadVar2_5 = mercury__test_bitset__HeadVar__3_3;

#line 2533 "test_bitset.c"
    {
#line 2535 "test_bitset.c"
      mercury__test_bitset__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2537 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_8_8, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_7_7));
#line 2539 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_8_8, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_6));
#line 2541 "test_bitset.c"
    }
#line 2543 "test_bitset.c"
    mercury__test_bitset__TypeCtorInfo_9_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2545 "test_bitset.c"
    {
#line 2547 "test_bitset.c"
      mercury__test_bitset__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2549 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_10_10, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_9_9));
#line 2551 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_10_10, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_6));
#line 2553 "test_bitset.c"
    }
#line 159 "test_bitset.m"
    {
#line 159 "test_bitset.m"
      mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_8_8, mercury__test_bitset__TypeInfo_10_10, mercury__test_bitset__HeadVar__1_1, (MR_Word) mercury__test_bitset__Cast_HeadVar1_4, (MR_Word) mercury__test_bitset__Cast_HeadVar2_5);
#line 159 "test_bitset.m"
      return;
    }
#line 159 "test_bitset.m"
  }
#line 159 "test_bitset.m"
}

#line 159 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0(
#line 159 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_5,
#line 159 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 159 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 159 "test_bitset.m"
{
#line 159 "test_bitset.m"
  {
#line 159 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_6_6 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_7_7;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_8_8 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_9_9;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__Cast_HeadVar1_3 = mercury__test_bitset__HeadVar__1_1;
#line 159 "test_bitset.m"
    MR_Word mercury__test_bitset__Cast_HeadVar2_4 = mercury__test_bitset__HeadVar__2_2;

#line 2595 "test_bitset.c"
    {
#line 2597 "test_bitset.c"
      mercury__test_bitset__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2599 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_7_7, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_6_6));
#line 2601 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_7_7, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_5));
#line 2603 "test_bitset.c"
    }
#line 2605 "test_bitset.c"
    {
#line 2607 "test_bitset.c"
      mercury__test_bitset__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2609 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_9_9, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_8_8));
#line 2611 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_9_9, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_5));
#line 2613 "test_bitset.c"
    }
#line 159 "test_bitset.m"
    {
#line 159 "test_bitset.m"
      return mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_7_7, mercury__test_bitset__TypeInfo_9_9, (MR_Word) mercury__test_bitset__Cast_HeadVar1_3, (MR_Word) mercury__test_bitset__Cast_HeadVar2_4);
    }
#line 159 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 159 "test_bitset.m"
  }
#line 159 "test_bitset.m"
}

#line 24 "test_bitset.m"
void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0(
#line 24 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_66,
#line 24 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__1_1,
#line 24 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 24 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__3_3)
#line 24 "test_bitset.m"
{
#line 24 "test_bitset.m"
  {
#line 24 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 24 "test_bitset.m"
    MR_Integer mercury__test_bitset__CastX_64 = (MR_Integer) mercury__test_bitset__HeadVar__2_2;
#line 24 "test_bitset.m"
    MR_Integer mercury__test_bitset__CastY_65 = (MR_Integer) mercury__test_bitset__HeadVar__3_3;

#line 24 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__CastX_64 == mercury__test_bitset__CastY_65);
#line 24 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 2653 "test_bitset.c"
      *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 0;
#line 24 "test_bitset.m"
    else
#line 24 "test_bitset.m"
      if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 24 "test_bitset.m"
        {
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 2)));
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 24 "test_bitset.m"
          MR_String mercury__test_bitset__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));

#line 24 "test_bitset.m"
          if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 24 "test_bitset.m"
            {
#line 24 "test_bitset.m"
              MR_String mercury__test_bitset__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 0)));
#line 24 "test_bitset.m"
              MR_Word mercury__test_bitset__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 1)));
#line 24 "test_bitset.m"
              MR_Word mercury__test_bitset__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 2)));
#line 24 "test_bitset.m"
              MR_Word mercury__test_bitset__V_31_31;
#line 24 "test_bitset.m"
              MR_Integer mercury__test_bitset__Res_7_118;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__test_bitset__V_108_108 ;
	S2 =  mercury__test_bitset__V_28_28 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2698 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__Res_7_118  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
              mercury__test_bitset__succeeded = (mercury__test_bitset__Res_7_118 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
              if (mercury__test_bitset__succeeded)
#line 104 "private_builtin.opt"
                mercury__test_bitset__V_31_31 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
              else
#line 110 "private_builtin.opt"
                {
#line 107 "private_builtin.opt"
                  mercury__test_bitset__succeeded = (mercury__test_bitset__Res_7_118 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                  if (mercury__test_bitset__succeeded)
#line 109 "private_builtin.opt"
                    mercury__test_bitset__V_31_31 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                  else
#line 111 "private_builtin.opt"
                    mercury__test_bitset__V_31_31 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                }
#line 2727 "test_bitset.c"
              mercury__test_bitset__succeeded = (mercury__test_bitset__V_31_31 == (MR_Integer) 0);
#line 24 "test_bitset.m"
              mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
#line 24 "test_bitset.m"
              if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__V_31_31;
#line 24 "test_bitset.m"
              else
#line 24 "test_bitset.m"
                {
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__V_32_32;
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__TypeCtorInfo_87_87 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__TypeInfo_88_88;
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__TypeCtorInfo_89_89 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__TypeInfo_90_90;

#line 2750 "test_bitset.c"
                  {
#line 2752 "test_bitset.c"
                    mercury__test_bitset__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2754 "test_bitset.c"
                    MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_88_88, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_87_87));
#line 2756 "test_bitset.c"
                    MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_88_88, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2758 "test_bitset.c"
                  }
#line 2760 "test_bitset.c"
                  {
#line 2762 "test_bitset.c"
                    mercury__test_bitset__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2764 "test_bitset.c"
                    MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_90_90, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_89_89));
#line 2766 "test_bitset.c"
                    MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_90_90, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2768 "test_bitset.c"
                  }
#line 24 "test_bitset.m"
                  {
#line 24 "test_bitset.m"
                    mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_88_88, mercury__test_bitset__TypeInfo_90_90, &mercury__test_bitset__V_32_32, (MR_Word) mercury__test_bitset__V_107_107, (MR_Word) mercury__test_bitset__V_29_29);
                  }
#line 2775 "test_bitset.c"
                  mercury__test_bitset__succeeded = (mercury__test_bitset__V_32_32 == (MR_Integer) 0);
#line 24 "test_bitset.m"
                  mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
#line 24 "test_bitset.m"
                  if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                    *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__V_32_32;
#line 24 "test_bitset.m"
                  else
#line 24 "test_bitset.m"
                    {
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeCtorInfo_93_93 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeInfo_94_94;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeCtorInfo_95_95;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeInfo_96_96;

#line 2796 "test_bitset.c"
                      {
#line 2798 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2800 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_94_94, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_93_93));
#line 2802 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_94_94, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2804 "test_bitset.c"
                      }
#line 2806 "test_bitset.c"
                      mercury__test_bitset__TypeCtorInfo_95_95 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2808 "test_bitset.c"
                      {
#line 2810 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2812 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_96_96, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_95_95));
#line 2814 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_96_96, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2816 "test_bitset.c"
                      }
#line 24 "test_bitset.m"
                      {
#line 24 "test_bitset.m"
                        mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_94_94, mercury__test_bitset__TypeInfo_96_96, mercury__test_bitset__HeadVar__1_1, (MR_Word) mercury__test_bitset__V_106_106, (MR_Word) mercury__test_bitset__V_30_30);
#line 24 "test_bitset.m"
                        return;
                      }
#line 24 "test_bitset.m"
                    }
#line 24 "test_bitset.m"
                }
#line 24 "test_bitset.m"
            }
#line 24 "test_bitset.m"
          else
#line 24 "test_bitset.m"
            if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2835 "test_bitset.c"
              *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 1;
#line 24 "test_bitset.m"
            else
#line 2839 "test_bitset.c"
              *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 2;
#line 24 "test_bitset.m"
        }
#line 24 "test_bitset.m"
      else
#line 24 "test_bitset.m"
        if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 24 "test_bitset.m"
          {
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 3)));
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 2)));
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 24 "test_bitset.m"
            MR_String mercury__test_bitset__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));

#line 24 "test_bitset.m"
            if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2860 "test_bitset.c"
              *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 2;
#line 24 "test_bitset.m"
            else
#line 24 "test_bitset.m"
              if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 24 "test_bitset.m"
                {
#line 24 "test_bitset.m"
                  MR_String mercury__test_bitset__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 0)));
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 1)));
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 2)));
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 3)));
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__V_61_61;
#line 24 "test_bitset.m"
                  MR_Integer mercury__test_bitset__Res_7_123;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__test_bitset__V_112_112 ;
	S2 =  mercury__test_bitset__V_57_57 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2896 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__Res_7_123  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__test_bitset__succeeded = (mercury__test_bitset__Res_7_123 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__test_bitset__succeeded)
#line 104 "private_builtin.opt"
                    mercury__test_bitset__V_61_61 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__test_bitset__succeeded = (mercury__test_bitset__Res_7_123 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__test_bitset__succeeded)
#line 109 "private_builtin.opt"
                        mercury__test_bitset__V_61_61 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        mercury__test_bitset__V_61_61 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 2925 "test_bitset.c"
                  mercury__test_bitset__succeeded = (mercury__test_bitset__V_61_61 == (MR_Integer) 0);
#line 24 "test_bitset.m"
                  mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
#line 24 "test_bitset.m"
                  if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                    *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__V_61_61;
#line 24 "test_bitset.m"
                  else
#line 24 "test_bitset.m"
                    {
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__V_62_62;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeCtorInfo_68_68 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeInfo_69_69;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeCtorInfo_70_70 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeInfo_71_71;

#line 2948 "test_bitset.c"
                      {
#line 2950 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2952 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_69_69, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_68_68));
#line 2954 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_69_69, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2956 "test_bitset.c"
                      }
#line 2958 "test_bitset.c"
                      {
#line 2960 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2962 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_71_71, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_70_70));
#line 2964 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_71_71, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2966 "test_bitset.c"
                      }
#line 24 "test_bitset.m"
                      {
#line 24 "test_bitset.m"
                        mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_69_69, mercury__test_bitset__TypeInfo_71_71, &mercury__test_bitset__V_62_62, (MR_Word) mercury__test_bitset__V_111_111, (MR_Word) mercury__test_bitset__V_58_58);
                      }
#line 2973 "test_bitset.c"
                      mercury__test_bitset__succeeded = (mercury__test_bitset__V_62_62 == (MR_Integer) 0);
#line 24 "test_bitset.m"
                      mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
#line 24 "test_bitset.m"
                      if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                        *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__V_62_62;
#line 24 "test_bitset.m"
                      else
#line 24 "test_bitset.m"
                        {
#line 24 "test_bitset.m"
                          MR_Word mercury__test_bitset__V_63_63;
#line 24 "test_bitset.m"
                          MR_Word mercury__test_bitset__TypeCtorInfo_74_74 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 24 "test_bitset.m"
                          MR_Word mercury__test_bitset__TypeInfo_75_75;
#line 24 "test_bitset.m"
                          MR_Word mercury__test_bitset__TypeCtorInfo_76_76 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 24 "test_bitset.m"
                          MR_Word mercury__test_bitset__TypeInfo_77_77;

#line 2996 "test_bitset.c"
                          {
#line 2998 "test_bitset.c"
                            mercury__test_bitset__TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3000 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_75_75, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_74_74));
#line 3002 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_75_75, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3004 "test_bitset.c"
                          }
#line 3006 "test_bitset.c"
                          {
#line 3008 "test_bitset.c"
                            mercury__test_bitset__TypeInfo_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3010 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_77_77, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_76_76));
#line 3012 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_77_77, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3014 "test_bitset.c"
                          }
#line 24 "test_bitset.m"
                          {
#line 24 "test_bitset.m"
                            mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_75_75, mercury__test_bitset__TypeInfo_77_77, &mercury__test_bitset__V_63_63, (MR_Word) mercury__test_bitset__V_110_110, (MR_Word) mercury__test_bitset__V_59_59);
                          }
#line 3021 "test_bitset.c"
                          mercury__test_bitset__succeeded = (mercury__test_bitset__V_63_63 == (MR_Integer) 0);
#line 24 "test_bitset.m"
                          mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
#line 24 "test_bitset.m"
                          if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                            *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__V_63_63;
#line 24 "test_bitset.m"
                          else
#line 24 "test_bitset.m"
                            {
#line 24 "test_bitset.m"
                              MR_Word mercury__test_bitset__TypeCtorInfo_80_80 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 24 "test_bitset.m"
                              MR_Word mercury__test_bitset__TypeInfo_81_81;
#line 24 "test_bitset.m"
                              MR_Word mercury__test_bitset__TypeCtorInfo_82_82;
#line 24 "test_bitset.m"
                              MR_Word mercury__test_bitset__TypeInfo_83_83;

#line 3042 "test_bitset.c"
                              {
#line 3044 "test_bitset.c"
                                mercury__test_bitset__TypeInfo_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3046 "test_bitset.c"
                                MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_81_81, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_80_80));
#line 3048 "test_bitset.c"
                                MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_81_81, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3050 "test_bitset.c"
                              }
#line 3052 "test_bitset.c"
                              mercury__test_bitset__TypeCtorInfo_82_82 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3054 "test_bitset.c"
                              {
#line 3056 "test_bitset.c"
                                mercury__test_bitset__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3058 "test_bitset.c"
                                MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_83_83, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_82_82));
#line 3060 "test_bitset.c"
                                MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_83_83, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3062 "test_bitset.c"
                              }
#line 24 "test_bitset.m"
                              {
#line 24 "test_bitset.m"
                                mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_81_81, mercury__test_bitset__TypeInfo_83_83, mercury__test_bitset__HeadVar__1_1, (MR_Word) mercury__test_bitset__V_109_109, (MR_Word) mercury__test_bitset__V_60_60);
#line 24 "test_bitset.m"
                                return;
                              }
#line 24 "test_bitset.m"
                            }
#line 24 "test_bitset.m"
                        }
#line 24 "test_bitset.m"
                    }
#line 24 "test_bitset.m"
                }
#line 24 "test_bitset.m"
              else
#line 3081 "test_bitset.c"
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 2;
#line 24 "test_bitset.m"
          }
#line 24 "test_bitset.m"
        else
#line 24 "test_bitset.m"
          {
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 24 "test_bitset.m"
            MR_String mercury__test_bitset__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));

#line 24 "test_bitset.m"
            if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3096 "test_bitset.c"
              *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 1;
#line 24 "test_bitset.m"
            else
#line 24 "test_bitset.m"
              if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3102 "test_bitset.c"
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 1;
#line 24 "test_bitset.m"
              else
#line 24 "test_bitset.m"
                {
#line 24 "test_bitset.m"
                  MR_String mercury__test_bitset__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 0)));
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 1)));
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__V_8_8;
#line 24 "test_bitset.m"
                  MR_Integer mercury__test_bitset__Res_7_128;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__test_bitset__V_114_114 ;
	S2 =  mercury__test_bitset__V_6_6 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3132 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__Res_7_128  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                  mercury__test_bitset__succeeded = (mercury__test_bitset__Res_7_128 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                  if (mercury__test_bitset__succeeded)
#line 104 "private_builtin.opt"
                    mercury__test_bitset__V_8_8 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                  else
#line 110 "private_builtin.opt"
                    {
#line 107 "private_builtin.opt"
                      mercury__test_bitset__succeeded = (mercury__test_bitset__Res_7_128 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                      if (mercury__test_bitset__succeeded)
#line 109 "private_builtin.opt"
                        mercury__test_bitset__V_8_8 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                      else
#line 111 "private_builtin.opt"
                        mercury__test_bitset__V_8_8 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                    }
#line 3161 "test_bitset.c"
                  mercury__test_bitset__succeeded = (mercury__test_bitset__V_8_8 == (MR_Integer) 0);
#line 24 "test_bitset.m"
                  mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
#line 24 "test_bitset.m"
                  if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                    *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__V_8_8;
#line 24 "test_bitset.m"
                  else
#line 24 "test_bitset.m"
                    {
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeCtorInfo_100_100 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeInfo_101_101;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeCtorInfo_102_102;
#line 24 "test_bitset.m"
                      MR_Word mercury__test_bitset__TypeInfo_103_103;

#line 3182 "test_bitset.c"
                      {
#line 3184 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3186 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_101_101, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_100_100));
#line 3188 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_101_101, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3190 "test_bitset.c"
                      }
#line 3192 "test_bitset.c"
                      mercury__test_bitset__TypeCtorInfo_102_102 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3194 "test_bitset.c"
                      {
#line 3196 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3198 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_103_103, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_102_102));
#line 3200 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_103_103, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3202 "test_bitset.c"
                      }
#line 24 "test_bitset.m"
                      {
#line 24 "test_bitset.m"
                        mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_101_101, mercury__test_bitset__TypeInfo_103_103, mercury__test_bitset__HeadVar__1_1, (MR_Word) mercury__test_bitset__V_113_113, (MR_Word) mercury__test_bitset__V_7_7);
#line 24 "test_bitset.m"
                        return;
                      }
#line 24 "test_bitset.m"
                    }
#line 24 "test_bitset.m"
                }
#line 24 "test_bitset.m"
          }
#line 24 "test_bitset.m"
  }
#line 24 "test_bitset.m"
}

#line 24 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0(
#line 24 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_23,
#line 24 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 24 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 24 "test_bitset.m"
{
#line 24 "test_bitset.m"
  {
#line 24 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 24 "test_bitset.m"
    MR_Integer mercury__test_bitset__CastX_21 = (MR_Integer) mercury__test_bitset__HeadVar__1_1;
#line 24 "test_bitset.m"
    MR_Integer mercury__test_bitset__CastY_22 = (MR_Integer) mercury__test_bitset__HeadVar__2_2;

#line 24 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__CastX_21 == mercury__test_bitset__CastY_22);
#line 24 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
      mercury__test_bitset__succeeded = MR_TRUE;
#line 24 "test_bitset.m"
    else
#line 24 "test_bitset.m"
      if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 24 "test_bitset.m"
        {
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__TypeCtorInfo_24_24;
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__TypeCtorInfo_26_26;
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__TypeInfo_31_31;
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__TypeInfo_33_33;
#line 24 "test_bitset.m"
          MR_String mercury__test_bitset__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 2)));
#line 24 "test_bitset.m"
          MR_String mercury__test_bitset__V_10_10;
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__V_11_11;
#line 24 "test_bitset.m"
          MR_Word mercury__test_bitset__V_12_12;

#line 24 "test_bitset.m"
          mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 24 "test_bitset.m"
          if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
            {
#line 24 "test_bitset.m"
              mercury__test_bitset__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 24 "test_bitset.m"
              mercury__test_bitset__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 24 "test_bitset.m"
              mercury__test_bitset__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 2)));
#line 3287 "test_bitset.c"
              mercury__test_bitset__succeeded = (strcmp(mercury__test_bitset__V_7_7, mercury__test_bitset__V_10_10) == 0);
#line 24 "test_bitset.m"
              if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                {
#line 3293 "test_bitset.c"
                  mercury__test_bitset__TypeCtorInfo_24_24 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 3295 "test_bitset.c"
                  mercury__test_bitset__TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3297 "test_bitset.c"
                  {
#line 3299 "test_bitset.c"
                    mercury__test_bitset__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3301 "test_bitset.c"
                    MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_24_24));
#line 3303 "test_bitset.c"
                    MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3305 "test_bitset.c"
                  }
#line 3307 "test_bitset.c"
                  {
#line 3309 "test_bitset.c"
                    mercury__test_bitset__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3311 "test_bitset.c"
                    MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_33_33, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_26_26));
#line 3313 "test_bitset.c"
                    MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_33_33, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3315 "test_bitset.c"
                  }
#line 3317 "test_bitset.c"
                  {
#line 3319 "test_bitset.c"
                    mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_31_31, mercury__test_bitset__TypeInfo_33_33, (MR_Word) mercury__test_bitset__V_8_8, (MR_Word) mercury__test_bitset__V_11_11);
                  }
#line 24 "test_bitset.m"
                  if (mercury__test_bitset__succeeded)
#line 3324 "test_bitset.c"
                    {
#line 3326 "test_bitset.c"
                      return mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_31_31, mercury__test_bitset__TypeInfo_33_33, (MR_Word) mercury__test_bitset__V_9_9, (MR_Word) mercury__test_bitset__V_12_12);
                    }
#line 24 "test_bitset.m"
                }
#line 24 "test_bitset.m"
            }
#line 24 "test_bitset.m"
        }
#line 24 "test_bitset.m"
      else
#line 24 "test_bitset.m"
        if (((MR_tag((MR_Word) mercury__test_bitset__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 24 "test_bitset.m"
          {
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeCtorInfo_36_36;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeCtorInfo_38_38;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeInfo_49_49;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeInfo_51_51;
#line 24 "test_bitset.m"
            MR_String mercury__test_bitset__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 2)));
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 3)));
#line 24 "test_bitset.m"
            MR_String mercury__test_bitset__V_17_17;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_18_18;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_19_19;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_20_20;

#line 24 "test_bitset.m"
            mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 24 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
              {
#line 24 "test_bitset.m"
                mercury__test_bitset__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 24 "test_bitset.m"
                mercury__test_bitset__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 24 "test_bitset.m"
                mercury__test_bitset__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 2)));
#line 24 "test_bitset.m"
                mercury__test_bitset__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 3)));
#line 3380 "test_bitset.c"
                mercury__test_bitset__succeeded = (strcmp(mercury__test_bitset__V_13_13, mercury__test_bitset__V_17_17) == 0);
#line 24 "test_bitset.m"
                if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                  {
#line 3386 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_36_36 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 3388 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_38_38 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3390 "test_bitset.c"
                    {
#line 3392 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3394 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_49_49, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_36_36));
#line 3396 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_49_49, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3398 "test_bitset.c"
                    }
#line 3400 "test_bitset.c"
                    {
#line 3402 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3404 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_51_51, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_38_38));
#line 3406 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_51_51, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3408 "test_bitset.c"
                    }
#line 3410 "test_bitset.c"
                    {
#line 3412 "test_bitset.c"
                      mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_49_49, mercury__test_bitset__TypeInfo_51_51, (MR_Word) mercury__test_bitset__V_14_14, (MR_Word) mercury__test_bitset__V_18_18);
                    }
#line 24 "test_bitset.m"
                    if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                      {
#line 3419 "test_bitset.c"
                        {
#line 3421 "test_bitset.c"
                          mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_49_49, mercury__test_bitset__TypeInfo_51_51, (MR_Word) mercury__test_bitset__V_15_15, (MR_Word) mercury__test_bitset__V_19_19);
                        }
#line 24 "test_bitset.m"
                        if (mercury__test_bitset__succeeded)
#line 3426 "test_bitset.c"
                          {
#line 3428 "test_bitset.c"
                            return mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_49_49, mercury__test_bitset__TypeInfo_51_51, (MR_Word) mercury__test_bitset__V_16_16, (MR_Word) mercury__test_bitset__V_20_20);
                          }
#line 24 "test_bitset.m"
                      }
#line 24 "test_bitset.m"
                  }
#line 24 "test_bitset.m"
              }
#line 24 "test_bitset.m"
          }
#line 24 "test_bitset.m"
        else
#line 24 "test_bitset.m"
          {
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeCtorInfo_54_54;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeInfo_55_55;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeCtorInfo_56_56;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeInfo_57_57;
#line 24 "test_bitset.m"
            MR_String mercury__test_bitset__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 24 "test_bitset.m"
            MR_String mercury__test_bitset__V_5_5;
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_6_6;

#line 24 "test_bitset.m"
            mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 24 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
              {
#line 24 "test_bitset.m"
                mercury__test_bitset__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 24 "test_bitset.m"
                mercury__test_bitset__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 3470 "test_bitset.c"
                mercury__test_bitset__succeeded = (strcmp(mercury__test_bitset__V_3_3, mercury__test_bitset__V_5_5) == 0);
#line 24 "test_bitset.m"
                if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                  {
#line 3476 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_54_54 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 3478 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_56_56 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3480 "test_bitset.c"
                    {
#line 3482 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3484 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_55_55, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_54_54));
#line 3486 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_55_55, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3488 "test_bitset.c"
                    }
#line 3490 "test_bitset.c"
                    {
#line 3492 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3494 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_57_57, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_56_56));
#line 3496 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_57_57, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3498 "test_bitset.c"
                    }
#line 3500 "test_bitset.c"
                    {
#line 3502 "test_bitset.c"
                      return mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_55_55, mercury__test_bitset__TypeInfo_57_57, (MR_Word) mercury__test_bitset__V_4_4, (MR_Word) mercury__test_bitset__V_6_6);
                    }
#line 24 "test_bitset.m"
                  }
#line 24 "test_bitset.m"
              }
#line 24 "test_bitset.m"
          }
#line 24 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 24 "test_bitset.m"
  }
#line 24 "test_bitset.m"
}

#line 600 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
#line 600 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_24,
#line 600 "test_bitset.m"
  MR_String mercury__test_bitset__Op_6,
#line 600 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterA_7,
#line 600 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterB_8,
#line 600 "test_bitset.m"
  MR_Word mercury__test_bitset__Tester_9,
#line 600 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_10)
#line 600 "test_bitset.m"
{
#line 603 "test_bitset.m"
  {
#line 603 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_7, (MR_Integer) 0)));
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_7, (MR_Integer) 1)));
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetListA_13;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_14;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetB_15;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_16;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetListB_17;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_18;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSet_19;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_20;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetList_21;
#line 603 "test_bitset.m"
    MR_Word mercury__test_bitset__SetList_22;
#line 614 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_33_33;
#line 614 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_37_37;
#line 614 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_41_41;
#line 614 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_36;
#line 614 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_40;

#line 605 "test_bitset.m"
    {
#line 605 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_24, mercury__test_bitset__BitSetA_11, &mercury__test_bitset__BitSetListA_13);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetListA_14 = (MR_Word) mercury__test_bitset__SetA_12;
#line 607 "test_bitset.m"
    mercury__test_bitset__BitSetB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterB_8, (MR_Integer) 0)));
#line 607 "test_bitset.m"
    mercury__test_bitset__SetB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterB_8, (MR_Integer) 1)));
#line 608 "test_bitset.m"
    {
#line 608 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_24, mercury__test_bitset__BitSetB_15, &mercury__test_bitset__BitSetListB_17);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetListB_18 = (MR_Word) mercury__test_bitset__SetB_16;
#line 610 "test_bitset.m"
    mercury__test_bitset__BitSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_9, (MR_Integer) 0)));
#line 610 "test_bitset.m"
    mercury__test_bitset__Set_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_9, (MR_Integer) 1)));
#line 611 "test_bitset.m"
    {
#line 611 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_24, mercury__test_bitset__BitSet_19, &mercury__test_bitset__BitSetList_21);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetList_22 = (MR_Word) mercury__test_bitset__Set_20;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3618 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_33_33  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 614 "test_bitset.m"
    {
#line 614 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__BitSetListA_13, mercury__test_bitset__SetListA_14);
    }
#line 614 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 614 "test_bitset.m"
      {
#line 3634 "test_bitset.c"
        mercury__test_bitset__PolyConst1_36 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  mercury__test_bitset__PolyConst1_36 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3651 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_37_37  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 614 "test_bitset.m"
        {
#line 614 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_37_37, mercury__test_bitset__BitSetListB_17, mercury__test_bitset__SetListB_18);
        }
#line 614 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 614 "test_bitset.m"
          {
#line 3667 "test_bitset.c"
            mercury__test_bitset__PolyConst1_40 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  mercury__test_bitset__PolyConst1_40 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3684 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_41_41  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 614 "test_bitset.m"
            {
#line 614 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_41_41, mercury__test_bitset__BitSetList_21, mercury__test_bitset__SetList_22);
            }
#line 614 "test_bitset.m"
          }
#line 614 "test_bitset.m"
      }
#line 616 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 615 "test_bitset.m"
      *mercury__test_bitset__Result_10 = mercury__test_bitset__Tester_9;
#line 616 "test_bitset.m"
    else
#line 617 "test_bitset.m"
      {
#line 617 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_29_29;
#line 617 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeCtorInfo_30_30;
#line 617 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_31_31;
#line 617 "test_bitset.m"
        MR_Word mercury__test_bitset__V_23_23;

#line 617 "test_bitset.m"
        {
#line 617 "test_bitset.m"
          mercury__test_bitset__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 617 "test_bitset.m"
          MR_hl_field(MR_mktag(2), mercury__test_bitset__V_23_23, 0) = ((MR_Box) (mercury__test_bitset__Op_6));
#line 617 "test_bitset.m"
          MR_hl_field(MR_mktag(2), mercury__test_bitset__V_23_23, 1) = ((MR_Box) (mercury__test_bitset__TesterA_7));
#line 617 "test_bitset.m"
          MR_hl_field(MR_mktag(2), mercury__test_bitset__V_23_23, 2) = ((MR_Box) (mercury__test_bitset__TesterB_8));
#line 617 "test_bitset.m"
          MR_hl_field(MR_mktag(2), mercury__test_bitset__V_23_23, 3) = ((MR_Box) (mercury__test_bitset__Tester_9));
#line 617 "test_bitset.m"
        }
#line 3731 "test_bitset.c"
        mercury__test_bitset__TypeCtorInfo_30_30 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3748 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_29_29  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 3755 "test_bitset.c"
        {
#line 3757 "test_bitset.c"
          mercury__test_bitset__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3759 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_30_30));
#line 3761 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_29_29));
#line 3763 "test_bitset.c"
        }
#line 617 "test_bitset.m"
        {
#line 617 "test_bitset.m"
          mercury__exception__throw_1_p_0(mercury__test_bitset__TypeInfo_31_31, ((MR_Box) (mercury__test_bitset__V_23_23)));
#line 617 "test_bitset.m"
          return;
        }
#line 617 "test_bitset.m"
      }
#line 603 "test_bitset.m"
  }
#line 600 "test_bitset.m"
}

#line 584 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__check1_4_p_0(
#line 584 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_18,
#line 584 "test_bitset.m"
  MR_String mercury__test_bitset__Op_5,
#line 584 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterA_6,
#line 584 "test_bitset.m"
  MR_Word mercury__test_bitset__Tester_7,
#line 584 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_8)
#line 584 "test_bitset.m"
{
#line 587 "test_bitset.m"
  {
#line 587 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 587 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_6, (MR_Integer) 0)));
#line 587 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_6, (MR_Integer) 1)));
#line 587 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetListA_11;
#line 587 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_12;
#line 587 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSet_13;
#line 587 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_14;
#line 587 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetList_15;
#line 587 "test_bitset.m"
    MR_Word mercury__test_bitset__SetList_16;
#line 594 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_26_26;
#line 594 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_30_30;
#line 594 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_29;

#line 589 "test_bitset.m"
    {
#line 589 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_18, mercury__test_bitset__BitSetA_9, &mercury__test_bitset__BitSetListA_11);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetListA_12 = (MR_Word) mercury__test_bitset__SetA_10;
#line 591 "test_bitset.m"
    mercury__test_bitset__BitSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_7, (MR_Integer) 0)));
#line 591 "test_bitset.m"
    mercury__test_bitset__Set_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_7, (MR_Integer) 1)));
#line 592 "test_bitset.m"
    {
#line 592 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_18, mercury__test_bitset__BitSet_13, &mercury__test_bitset__BitSetList_15);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetList_16 = (MR_Word) mercury__test_bitset__Set_14;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_18 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3854 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 594 "test_bitset.m"
    {
#line 594 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__BitSetListA_11, mercury__test_bitset__SetListA_12);
    }
#line 594 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 594 "test_bitset.m"
      {
#line 3870 "test_bitset.c"
        mercury__test_bitset__PolyConst1_29 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_18 ;
	Index =  mercury__test_bitset__PolyConst1_29 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3887 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_30_30  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 594 "test_bitset.m"
        {
#line 594 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_30_30, mercury__test_bitset__BitSetList_15, mercury__test_bitset__SetList_16);
        }
#line 594 "test_bitset.m"
      }
#line 596 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 595 "test_bitset.m"
      *mercury__test_bitset__Result_8 = mercury__test_bitset__Tester_7;
#line 596 "test_bitset.m"
    else
#line 597 "test_bitset.m"
      {
#line 597 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_22_22;
#line 597 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeCtorInfo_23_23;
#line 597 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_24_24;
#line 597 "test_bitset.m"
        MR_Word mercury__test_bitset__V_17_17;

#line 597 "test_bitset.m"
        {
#line 597 "test_bitset.m"
          mercury__test_bitset__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 597 "test_bitset.m"
          MR_hl_field(MR_mktag(1), mercury__test_bitset__V_17_17, 0) = ((MR_Box) (mercury__test_bitset__Op_5));
#line 597 "test_bitset.m"
          MR_hl_field(MR_mktag(1), mercury__test_bitset__V_17_17, 1) = ((MR_Box) (mercury__test_bitset__TesterA_6));
#line 597 "test_bitset.m"
          MR_hl_field(MR_mktag(1), mercury__test_bitset__V_17_17, 2) = ((MR_Box) (mercury__test_bitset__Tester_7));
#line 597 "test_bitset.m"
        }
#line 3930 "test_bitset.c"
        mercury__test_bitset__TypeCtorInfo_23_23 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_18 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3947 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_22_22  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 3954 "test_bitset.c"
        {
#line 3956 "test_bitset.c"
          mercury__test_bitset__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3958 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_24_24, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_23_23));
#line 3960 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_24_24, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_22_22));
#line 3962 "test_bitset.c"
        }
#line 597 "test_bitset.m"
        {
#line 597 "test_bitset.m"
          mercury__exception__throw_1_p_0(mercury__test_bitset__TypeInfo_24_24, ((MR_Box) (mercury__test_bitset__V_17_17)));
#line 597 "test_bitset.m"
          return;
        }
#line 597 "test_bitset.m"
      }
#line 587 "test_bitset.m"
  }
#line 584 "test_bitset.m"
}

#line 571 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__check0_3_p_0(
#line 571 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
#line 571 "test_bitset.m"
  MR_String mercury__test_bitset__Op_4,
#line 571 "test_bitset.m"
  MR_Word mercury__test_bitset__Tester_5,
#line 571 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_6)
#line 571 "test_bitset.m"
{
#line 574 "test_bitset.m"
  {
#line 574 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 574 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_5, (MR_Integer) 0)));
#line 574 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_5, (MR_Integer) 1)));
#line 574 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetList_9;
#line 574 "test_bitset.m"
    MR_Word mercury__test_bitset__SetList_10;
#line 578 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_19_19;

#line 576 "test_bitset.m"
    {
#line 576 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__BitSet_7, &mercury__test_bitset__BitSetList_9);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetList_10 = (MR_Word) mercury__test_bitset__Set_8;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4028 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_19_19  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 578 "test_bitset.m"
    {
#line 578 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_19_19, mercury__test_bitset__BitSetList_9, mercury__test_bitset__SetList_10);
    }
#line 580 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 579 "test_bitset.m"
      *mercury__test_bitset__Result_6 = mercury__test_bitset__Tester_5;
#line 580 "test_bitset.m"
    else
#line 581 "test_bitset.m"
      {
#line 581 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 581 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeCtorInfo_16_16;
#line 581 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_17_17;
#line 581 "test_bitset.m"
        MR_Word mercury__test_bitset__V_11_11;

#line 581 "test_bitset.m"
        {
#line 581 "test_bitset.m"
          mercury__test_bitset__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 581 "test_bitset.m"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 0) = ((MR_Box) (mercury__test_bitset__Op_4));
#line 581 "test_bitset.m"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 1) = ((MR_Box) (mercury__test_bitset__Tester_5));
#line 581 "test_bitset.m"
        }
#line 4067 "test_bitset.c"
        mercury__test_bitset__TypeCtorInfo_16_16 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4084 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 4091 "test_bitset.c"
        {
#line 4093 "test_bitset.c"
          mercury__test_bitset__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4095 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_17_17, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_16_16));
#line 4097 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_17_17, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_15_15));
#line 4099 "test_bitset.c"
        }
#line 581 "test_bitset.m"
        {
#line 581 "test_bitset.m"
          mercury__exception__throw_1_p_0(mercury__test_bitset__TypeInfo_17_17, ((MR_Box) (mercury__test_bitset__V_11_11)));
#line 581 "test_bitset.m"
          return;
        }
#line 581 "test_bitset.m"
      }
#line 574 "test_bitset.m"
  }
#line 571 "test_bitset.m"
}

#line 439 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
#line 439 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_21,
#line 439 "test_bitset.m"
  MR_String mercury__test_bitset__Op_1,
#line 439 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 439 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__3_3,
#line 439 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__4_4)
#line 439 "test_bitset.m"
{
#line 442 "test_bitset.m"
  {
#line 442 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 442 "test_bitset.m"
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "test_bitset.m"
      {
#line 442 "test_bitset.m"
        *mercury__test_bitset__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 442 "test_bitset.m"
        *mercury__test_bitset__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 442 "test_bitset.m"
      }
#line 442 "test_bitset.m"
    else
#line 443 "test_bitset.m"
      {
#line 443 "test_bitset.m"
        MR_Word mercury__test_bitset__SetA_7;
#line 443 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB_8;
#line 443 "test_bitset.m"
        MR_Word mercury__test_bitset__SetsAB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 443 "test_bitset.m"
        MR_Word mercury__test_bitset__SetsA_10;
#line 443 "test_bitset.m"
        MR_Word mercury__test_bitset__SetsB_11;
#line 443 "test_bitset.m"
        MR_Word mercury__test_bitset__SetListA_12;
#line 443 "test_bitset.m"
        MR_Word mercury__test_bitset__SetListB_13;
#line 443 "test_bitset.m"
        MR_Word mercury__test_bitset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 446 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_25_25;

#line 443 "test_bitset.m"
        mercury__test_bitset__SetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, (MR_Integer) 0)));
#line 443 "test_bitset.m"
        mercury__test_bitset__SetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, (MR_Integer) 1)));
#line 444 "test_bitset.m"
        {
#line 444 "test_bitset.m"
          mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_21, mercury__test_bitset__SetA_7, &mercury__test_bitset__SetListA_12);
        }
#line 38 "set_ordlist.opt"
        mercury__test_bitset__SetListB_13 = (MR_Word) mercury__test_bitset__SetB_8;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_21 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4194 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_25_25  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 446 "test_bitset.m"
        {
#line 446 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__SetListA_12, mercury__test_bitset__SetListB_13);
        }
#line 448 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 447 "test_bitset.m"
          {
#line 447 "test_bitset.m"
            mercury__test_bitset__get_sets_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_21, mercury__test_bitset__Op_1, mercury__test_bitset__SetsAB_9, &mercury__test_bitset__SetsA_10, &mercury__test_bitset__SetsB_11);
          }
#line 448 "test_bitset.m"
        else
#line 449 "test_bitset.m"
          {
#line 449 "test_bitset.m"
            MR_String mercury__test_bitset__V_17_17;
#line 449 "test_bitset.m"
            MR_String mercury__test_bitset__V_19_19;

#line 247 "string.opt"
            {
#line 247 "string.opt"
              mercury__string__append_3_p_2(mercury__test_bitset__Op_1, (MR_String) " arg list", &mercury__test_bitset__V_19_19);
            }
#line 247 "string.opt"
            {
#line 247 "string.opt"
              mercury__string__append_3_p_2((MR_String) "unequal sets in ", mercury__test_bitset__V_19_19, &mercury__test_bitset__V_17_17);
            }
#line 449 "test_bitset.m"
            {
#line 449 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.get_sets\'/4", mercury__test_bitset__V_17_17);
#line 449 "test_bitset.m"
              return;
            }
#line 449 "test_bitset.m"
          }
#line 443 "test_bitset.m"
        {
#line 443 "test_bitset.m"
          MR_Word base;
#line 443 "test_bitset.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "test_bitset.m"
          *mercury__test_bitset__HeadVar__3_3 = base;
#line 443 "test_bitset.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__test_bitset__SetA_7));
#line 443 "test_bitset.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__test_bitset__SetsA_10));
#line 443 "test_bitset.m"
        }
#line 443 "test_bitset.m"
        {
#line 443 "test_bitset.m"
          MR_Word base;
#line 443 "test_bitset.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "test_bitset.m"
          *mercury__test_bitset__HeadVar__4_4 = base;
#line 443 "test_bitset.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__test_bitset__SetB_8));
#line 443 "test_bitset.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__test_bitset__SetsB_11));
#line 443 "test_bitset.m"
        }
#line 443 "test_bitset.m"
      }
#line 442 "test_bitset.m"
  }
#line 439 "test_bitset.m"
}

#line 139 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__filter_4_p_0(
#line 139 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_23,
#line 139 "test_bitset.m"
  MR_Word mercury__test_bitset__Pred_5,
#line 139 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 139 "test_bitset.m"
  MR_Word * mercury__test_bitset__ResultIn_8,
#line 139 "test_bitset.m"
  MR_Word * mercury__test_bitset__ResultOut_9)
#line 139 "test_bitset.m"
{
#line 549 "test_bitset.m"
  {
#line 549 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_26_26;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_14_50;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_10;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_11;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_12;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetA_13;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_14;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetB_15;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListA_16;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListB_17;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListA_18;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListB_19;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedList_9_46;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedTrueList_10_47;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedFalseList_11_48;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_54;
#line 549 "test_bitset.m"
    MR_Word mercury__test_bitset__List_8_89;
#line 559 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_30_30;
#line 559 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_34_34;
#line 559 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_38_38;
#line 559 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_33;
#line 559 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_37;

#line 550 "test_bitset.m"
    {
#line 550 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetListB_11 = (MR_Word) mercury__test_bitset__SetB_7;
#line 191 "tree_bitset.opt"
    mercury__test_bitset__V_5_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "tree_bitset.opt"
    mercury__test_bitset__List_8_89 = (MR_Word) mercury__test_bitset__SetA_6;
#line 312 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__List_8_89)) == (MR_mktag((MR_Integer) 1))))
#line 313 "tree_bitset.opt"
      {
#line 313 "tree_bitset.opt"
        MR_Word mercury__test_bitset__InteriorNodes_11_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_89, (MR_Integer) 1)));
#line 313 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_89, (MR_Integer) 0)));

#line 314 "tree_bitset.opt"
        {
#line 314 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__InteriorNodes_11_93, mercury__test_bitset__V_5_54, &mercury__test_bitset__SortedList_9_46);
        }
#line 313 "tree_bitset.opt"
      }
#line 312 "tree_bitset.opt"
    else
#line 310 "tree_bitset.opt"
      {
#line 310 "tree_bitset.opt"
        MR_Word mercury__test_bitset__LeafNodes_9_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__List_8_89, (MR_Integer) 0)));

#line 311 "tree_bitset.opt"
        {
#line 311 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__LeafNodes_9_91, mercury__test_bitset__V_5_54, &mercury__test_bitset__SortedList_9_46);
        }
#line 310 "tree_bitset.opt"
      }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4400 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_50  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 340 "tree_bitset.opt"
    {
#line 340 "tree_bitset.opt"
      mercury__list__filter_4_p_0(mercury__test_bitset__TypeInfo_14_50, mercury__test_bitset__Pred_5, mercury__test_bitset__SortedList_9_46, &mercury__test_bitset__SortedTrueList_10_47, &mercury__test_bitset__SortedFalseList_11_48);
    }
#line 341 "tree_bitset.opt"
    {
#line 341 "tree_bitset.opt"
      mercury__test_bitset__InSetA_12 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__SortedTrueList_10_47);
    }
#line 342 "tree_bitset.opt"
    {
#line 342 "tree_bitset.opt"
      mercury__test_bitset__OutSetA_13 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__SortedFalseList_11_48);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4437 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 553 "test_bitset.m"
    {
#line 553 "test_bitset.m"
      mercury__set_ordlist__filter_4_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__Pred_5, mercury__test_bitset__SetB_7, &mercury__test_bitset__InSetB_14, &mercury__test_bitset__OutSetB_15);
    }
#line 554 "test_bitset.m"
    {
#line 554 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__InSetA_12, &mercury__test_bitset__InSetListA_16);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__InSetListB_17 = (MR_Word) mercury__test_bitset__InSetB_14;
#line 556 "test_bitset.m"
    {
#line 556 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__OutSetA_13, &mercury__test_bitset__OutSetListA_18);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__OutSetListB_19 = (MR_Word) mercury__test_bitset__OutSetB_15;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4478 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_30_30  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 559 "test_bitset.m"
    {
#line 559 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_30_30, mercury__test_bitset__SetListA_10, mercury__test_bitset__SetListB_11);
    }
#line 559 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 559 "test_bitset.m"
      {
#line 4494 "test_bitset.c"
        mercury__test_bitset__PolyConst1_33 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_33 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4511 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 560 "test_bitset.m"
        {
#line 560 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__InSetListA_16, mercury__test_bitset__InSetListB_17);
        }
#line 559 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 559 "test_bitset.m"
          {
#line 4527 "test_bitset.c"
            mercury__test_bitset__PolyConst1_37 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_37 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4544 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_38_38  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 561 "test_bitset.m"
            {
#line 561 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_38_38, mercury__test_bitset__OutSetListA_18, mercury__test_bitset__OutSetListB_19);
            }
#line 559 "test_bitset.m"
          }
#line 559 "test_bitset.m"
      }
#line 565 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 563 "test_bitset.m"
      {
#line 563 "test_bitset.m"
        {
#line 563 "test_bitset.m"
          MR_Word base;
#line 563 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 563 "test_bitset.m"
          *mercury__test_bitset__ResultIn_8 = base;
#line 563 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__InSetA_12));
#line 563 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__InSetB_14));
#line 563 "test_bitset.m"
        }
#line 564 "test_bitset.m"
        {
#line 564 "test_bitset.m"
          MR_Word base;
#line 564 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 564 "test_bitset.m"
          *mercury__test_bitset__ResultOut_9 = base;
#line 564 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__OutSetA_13));
#line 564 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__OutSetB_15));
#line 564 "test_bitset.m"
        }
#line 563 "test_bitset.m"
      }
#line 565 "test_bitset.m"
    else
#line 566 "test_bitset.m"
      {
#line 566 "test_bitset.m"
        {
#line 566 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.filter\'/4", (MR_String) "failed");
#line 566 "test_bitset.m"
          return;
        }
#line 566 "test_bitset.m"
      }
#line 549 "test_bitset.m"
  }
#line 139 "test_bitset.m"
}

#line 137 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__filter_2_f_0(
#line 137 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_17,
#line 137 "test_bitset.m"
  MR_Word mercury__test_bitset__Pred_4,
#line 137 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 137 "test_bitset.m"
{
#line 536 "test_bitset.m"
  {
#line 536 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_7;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_20_20;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_11_37;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_8;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_9;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_10;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_11;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListA_12;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListB_13;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedList_7_34;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedTrueList_8_35;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_41;
#line 536 "test_bitset.m"
    MR_Word mercury__test_bitset__List_8_76;
#line 543 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_23_23;
#line 543 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_27_27;
#line 543 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_26;

#line 537 "test_bitset.m"
    {
#line 537 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_5, &mercury__test_bitset__SetListA_8);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetListB_9 = (MR_Word) mercury__test_bitset__SetB_6;
#line 191 "tree_bitset.opt"
    mercury__test_bitset__V_5_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 308 "tree_bitset.opt"
    mercury__test_bitset__List_8_76 = (MR_Word) mercury__test_bitset__SetA_5;
#line 312 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__List_8_76)) == (MR_mktag((MR_Integer) 1))))
#line 313 "tree_bitset.opt"
      {
#line 313 "tree_bitset.opt"
        MR_Word mercury__test_bitset__InteriorNodes_11_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_76, (MR_Integer) 1)));
#line 313 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_76, (MR_Integer) 0)));

#line 314 "tree_bitset.opt"
        {
#line 314 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__InteriorNodes_11_80, mercury__test_bitset__V_5_41, &mercury__test_bitset__SortedList_7_34);
        }
#line 313 "tree_bitset.opt"
      }
#line 312 "tree_bitset.opt"
    else
#line 310 "tree_bitset.opt"
      {
#line 310 "tree_bitset.opt"
        MR_Word mercury__test_bitset__LeafNodes_9_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__List_8_76, (MR_Integer) 0)));

#line 311 "tree_bitset.opt"
        {
#line 311 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__LeafNodes_9_78, mercury__test_bitset__V_5_41, &mercury__test_bitset__SortedList_7_34);
        }
#line 310 "tree_bitset.opt"
      }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4720 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_37  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__filter_3_p_0(mercury__test_bitset__TypeInfo_11_37, mercury__test_bitset__Pred_4, mercury__test_bitset__SortedList_7_34, &mercury__test_bitset__SortedTrueList_8_35);
    }
#line 337 "tree_bitset.opt"
    {
#line 337 "tree_bitset.opt"
      mercury__test_bitset__InSetA_10 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SortedTrueList_8_35);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4752 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_20_20  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 540 "test_bitset.m"
    {
#line 540 "test_bitset.m"
      mercury__test_bitset__InSetB_11 = mercury__set_ordlist__filter_2_f_0(mercury__test_bitset__TypeInfo_20_20, mercury__test_bitset__Pred_4, mercury__test_bitset__SetB_6);
    }
#line 541 "test_bitset.m"
    {
#line 541 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__InSetA_10, &mercury__test_bitset__InSetListA_12);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__InSetListB_13 = (MR_Word) mercury__test_bitset__InSetB_11;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4786 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 543 "test_bitset.m"
    {
#line 543 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_8, mercury__test_bitset__SetListB_9);
    }
#line 543 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 543 "test_bitset.m"
      {
#line 4802 "test_bitset.c"
        mercury__test_bitset__PolyConst1_26 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  mercury__test_bitset__PolyConst1_26 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4819 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_27_27  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 543 "test_bitset.m"
        {
#line 543 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_27_27, mercury__test_bitset__InSetListA_12, mercury__test_bitset__InSetListB_13);
        }
#line 543 "test_bitset.m"
      }
#line 545 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 544 "test_bitset.m"
      {
#line 544 "test_bitset.m"
        mercury__test_bitset__Result_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 544 "test_bitset.m"
        MR_hl_field(MR_mktag(0), mercury__test_bitset__Result_7, 0) = ((MR_Box) (mercury__test_bitset__InSetA_10));
#line 544 "test_bitset.m"
        MR_hl_field(MR_mktag(0), mercury__test_bitset__Result_7, 1) = ((MR_Box) (mercury__test_bitset__InSetB_11));
#line 544 "test_bitset.m"
      }
#line 545 "test_bitset.m"
    else
#line 546 "test_bitset.m"
      {
#line 546 "test_bitset.m"
        {
#line 546 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.filter\'/2", (MR_String) "failed");
        }
#line 546 "test_bitset.m"
      }
#line 536 "test_bitset.m"
    return mercury__test_bitset__Result_7;
#line 536 "test_bitset.m"
  }
#line 137 "test_bitset.m"
}

#line 134 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__all_true_2_p_0(
#line 134 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
#line 134 "test_bitset.m"
  MR_Word mercury__test_bitset__Pred_3,
#line 134 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 134 "test_bitset.m"
{
#line 521 "test_bitset.m"
  {
#line 521 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 521 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 521 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "tree_bitset.opt"
    MR_Word mercury__test_bitset__List_5_19 = (MR_Word) mercury__test_bitset__SetA_4;

#line 330 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__List_5_19)) == (MR_mktag((MR_Integer) 1))))
#line 331 "tree_bitset.opt"
      {
#line 331 "tree_bitset.opt"
        MR_Word mercury__test_bitset__InteriorNodes_8_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_5_19, (MR_Integer) 1)));
#line 331 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_7_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_5_19, (MR_Integer) 0)));

#line 332 "tree_bitset.opt"
        {
#line 332 "tree_bitset.opt"
          mercury__test_bitset__succeeded = mercury__tree_bitset__interior_all_true_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__Pred_3, mercury__test_bitset__InteriorNodes_8_23);
        }
#line 331 "tree_bitset.opt"
      }
#line 330 "tree_bitset.opt"
    else
#line 328 "tree_bitset.opt"
      {
#line 328 "tree_bitset.opt"
        MR_Word mercury__test_bitset__LeafNodes_6_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__List_5_19, (MR_Integer) 0)));

#line 329 "tree_bitset.opt"
        {
#line 329 "tree_bitset.opt"
          mercury__test_bitset__succeeded = mercury__tree_bitset__leaf_all_true_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__Pred_3, mercury__test_bitset__LeafNodes_6_21);
        }
#line 328 "tree_bitset.opt"
      }
#line 528 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 525 "test_bitset.m"
      {
#line 523 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_14_14;
#line 523 "test_bitset.m"
        MR_Word mercury__test_bitset__L_4_25;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4939 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 189 "set_ordlist.opt"
        mercury__test_bitset__L_4_25 = (MR_Word) mercury__test_bitset__SetB_5;
#line 190 "set_ordlist.opt"
        {
#line 190 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__all_true_2_p_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__Pred_3, mercury__test_bitset__L_4_25);
        }
#line 525 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 524 "test_bitset.m"
          {
#line 524 "test_bitset.m"
          }
#line 525 "test_bitset.m"
        else
#line 526 "test_bitset.m"
          {
#line 526 "test_bitset.m"
            {
#line 526 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.all_true\'/2", (MR_String) "tree_bitset but not set_ordlist");
            }
#line 526 "test_bitset.m"
          }
#line 525 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 525 "test_bitset.m"
      }
#line 528 "test_bitset.m"
    else
#line 531 "test_bitset.m"
      {
#line 531 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_16_16;
#line 531 "test_bitset.m"
        MR_String mercury__test_bitset__V_9_9;
#line 531 "test_bitset.m"
        MR_String mercury__test_bitset__V_10_10;
#line 531 "test_bitset.m"
        MR_String mercury__test_bitset__V_11_11;
#line 531 "test_bitset.m"
        MR_Word mercury__test_bitset__L_4_27;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5004 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_16_16  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 189 "set_ordlist.opt"
        mercury__test_bitset__L_4_27 = (MR_Word) mercury__test_bitset__SetB_5;
#line 190 "set_ordlist.opt"
        {
#line 190 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__all_true_2_p_0(mercury__test_bitset__TypeInfo_16_16, mercury__test_bitset__Pred_3, mercury__test_bitset__L_4_27);
        }
#line 531 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 531 "test_bitset.m"
          {
#line 530 "test_bitset.m"
            mercury__test_bitset__V_9_9 = (MR_String) "test_bitset";
#line 530 "test_bitset.m"
            mercury__test_bitset__V_10_10 = (MR_String) "predicate \140test_bitset.all_true\'/2";
#line 530 "test_bitset.m"
            mercury__test_bitset__V_11_11 = (MR_String) "set_ordlist but not tree_bitset";
#line 530 "test_bitset.m"
            {
#line 530 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_9_9, mercury__test_bitset__V_10_10, mercury__test_bitset__V_11_11);
            }
#line 530 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 531 "test_bitset.m"
          }
#line 531 "test_bitset.m"
      }
#line 521 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 521 "test_bitset.m"
  }
#line 134 "test_bitset.m"
}

#line 129 "test_bitset.m"
MR_Box MR_CALL 
mercury__test_bitset__foldl_3_f_0(
#line 129 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_Acc_18,
#line 129 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_17,
#line 129 "test_bitset.m"
  MR_Word mercury__test_bitset__Pred_5,
#line 129 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 129 "test_bitset.m"
  MR_Box mercury__test_bitset__Acc0_8)
#line 129 "test_bitset.m"
{
#line 510 "test_bitset.m"
  {
#line 510 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 510 "test_bitset.m"
    MR_Box mercury__test_bitset__Acc_9;
#line 510 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 510 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 510 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_10;
#line 510 "test_bitset.m"
    MR_Box mercury__test_bitset__AccA_12;
#line 510 "test_bitset.m"
    MR_Box mercury__test_bitset__AccB_13;
#line 510 "test_bitset.m"
    MR_Word mercury__test_bitset__List_8_50;
#line 510 "test_bitset.m"
    MR_Word mercury__test_bitset__V_9_63;
#line 515 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_23_23;

#line 511 "test_bitset.m"
    {
#line 511 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__V_9_63 = (MR_Word) mercury__test_bitset__SetB_7;
#line 279 "tree_bitset.opt"
    mercury__test_bitset__List_8_50 = (MR_Word) mercury__test_bitset__SetA_6;
#line 283 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__List_8_50)) == (MR_mktag((MR_Integer) 1))))
#line 284 "tree_bitset.opt"
      {
#line 284 "tree_bitset.opt"
        MR_Word mercury__test_bitset__InteriorNodes_11_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_50, (MR_Integer) 1)));
#line 284 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_50, (MR_Integer) 0)));

#line 285 "tree_bitset.opt"
        {
#line 285 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Pred_5, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__InteriorNodes_11_54, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 284 "tree_bitset.opt"
      }
#line 283 "tree_bitset.opt"
    else
#line 281 "tree_bitset.opt"
      {
#line 281 "tree_bitset.opt"
        MR_Word mercury__test_bitset__LeafNodes_9_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__List_8_50, (MR_Integer) 0)));

#line 282 "tree_bitset.opt"
        {
#line 282 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Pred_5, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__LeafNodes_9_52, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 281 "tree_bitset.opt"
      }
#line 347 "list.opt"
    {
#line 347 "list.opt"
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__test_bitset__Pred_5, mercury__test_bitset__V_9_63, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccB_13);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5143 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 515 "test_bitset.m"
    {
#line 515 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_10, mercury__test_bitset__V_9_63);
    }
#line 515 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 515 "test_bitset.m"
      {
#line 515 "test_bitset.m"
        mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__AccA_12, mercury__test_bitset__AccB_13);
      }
#line 517 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 516 "test_bitset.m"
      mercury__test_bitset__Acc_9 = mercury__test_bitset__AccA_12;
#line 517 "test_bitset.m"
    else
#line 518 "test_bitset.m"
      {
#line 518 "test_bitset.m"
        {
#line 518 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.foldl\'/3", (MR_String) "failed");
        }
#line 518 "test_bitset.m"
      }
#line 510 "test_bitset.m"
    return mercury__test_bitset__Acc_9;
#line 510 "test_bitset.m"
  }
#line 129 "test_bitset.m"
}

#line 126 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__foldl_4_p_1(
#line 126 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_Acc_18,
#line 126 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_17,
#line 126 "test_bitset.m"
  MR_Word mercury__test_bitset__Pred_5,
#line 126 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 126 "test_bitset.m"
  MR_Box mercury__test_bitset__Acc0_8,
#line 126 "test_bitset.m"
  MR_Box * mercury__test_bitset__Acc_9)
#line 126 "test_bitset.m"
{
#line 499 "test_bitset.m"
  {
#line 499 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_21_21;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_10;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_11;
#line 499 "test_bitset.m"
    MR_Box mercury__test_bitset__AccA_12;
#line 499 "test_bitset.m"
    MR_Box mercury__test_bitset__AccB_13;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__List_8_31;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__V_10_44;
#line 504 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_23_23;
#line 504 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_22;

#line 500 "test_bitset.m"
    {
#line 500 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetListB_11 = (MR_Word) mercury__test_bitset__SetB_7;
#line 279 "tree_bitset.opt"
    mercury__test_bitset__List_8_31 = (MR_Word) mercury__test_bitset__SetA_6;
#line 283 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__List_8_31)) == (MR_mktag((MR_Integer) 1))))
#line 284 "tree_bitset.opt"
      {
#line 284 "tree_bitset.opt"
        MR_Word mercury__test_bitset__InteriorNodes_11_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_31, (MR_Integer) 1)));
#line 284 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_31, (MR_Integer) 0)));

#line 285 "tree_bitset.opt"
        {
#line 285 "tree_bitset.opt"
          mercury__test_bitset__succeeded = mercury__tree_bitset__do_foldl_pred_4_p_3(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__InteriorNodes_11_35, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 284 "tree_bitset.opt"
      }
#line 283 "tree_bitset.opt"
    else
#line 281 "tree_bitset.opt"
      {
#line 281 "tree_bitset.opt"
        MR_Word mercury__test_bitset__LeafNodes_9_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__List_8_31, (MR_Integer) 0)));

#line 282 "tree_bitset.opt"
        {
#line 282 "tree_bitset.opt"
          mercury__test_bitset__succeeded = mercury__tree_bitset__leaf_foldl_pred_4_p_3(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__LeafNodes_9_33, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 281 "tree_bitset.opt"
      }
#line 499 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 499 "test_bitset.m"
      {
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5286 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_21_21  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 38 "set_ordlist.opt"
        mercury__test_bitset__V_10_44 = (MR_Word) mercury__test_bitset__SetB_7;
#line 163 "set_ordlist.opt"
        {
#line 163 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__foldl_4_p_3(mercury__test_bitset__TypeInfo_21_21, mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__Pred_5, mercury__test_bitset__V_10_44, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccB_13);
        }
#line 499 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 499 "test_bitset.m"
          {
#line 5304 "test_bitset.c"
            mercury__test_bitset__PolyConst1_22 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  mercury__test_bitset__PolyConst1_22 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5321 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 504 "test_bitset.m"
            {
#line 504 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_10, mercury__test_bitset__SetListB_11);
            }
#line 504 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 504 "test_bitset.m"
              {
#line 504 "test_bitset.m"
                mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__AccA_12, mercury__test_bitset__AccB_13);
              }
#line 506 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 505 "test_bitset.m"
              *mercury__test_bitset__Acc_9 = mercury__test_bitset__AccA_12;
#line 506 "test_bitset.m"
            else
#line 507 "test_bitset.m"
              {
#line 507 "test_bitset.m"
                {
#line 507 "test_bitset.m"
                  mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
                }
#line 507 "test_bitset.m"
              }
#line 506 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 499 "test_bitset.m"
          }
#line 499 "test_bitset.m"
      }
#line 499 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 499 "test_bitset.m"
  }
#line 126 "test_bitset.m"
}

#line 125 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__foldl_4_p_0(
#line 125 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_Acc_18,
#line 125 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_17,
#line 125 "test_bitset.m"
  MR_Word mercury__test_bitset__Pred_5,
#line 125 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 125 "test_bitset.m"
  MR_Box mercury__test_bitset__Acc0_8,
#line 125 "test_bitset.m"
  MR_Box * mercury__test_bitset__Acc_9)
#line 125 "test_bitset.m"
{
#line 499 "test_bitset.m"
  {
#line 499 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_21_21;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_10;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_11;
#line 499 "test_bitset.m"
    MR_Box mercury__test_bitset__AccA_12;
#line 499 "test_bitset.m"
    MR_Box mercury__test_bitset__AccB_13;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__List_8_31;
#line 499 "test_bitset.m"
    MR_Word mercury__test_bitset__V_10_44;
#line 504 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_23_23;

#line 500 "test_bitset.m"
    {
#line 500 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetListB_11 = (MR_Word) mercury__test_bitset__SetB_7;
#line 279 "tree_bitset.opt"
    mercury__test_bitset__List_8_31 = (MR_Word) mercury__test_bitset__SetA_6;
#line 283 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__List_8_31)) == (MR_mktag((MR_Integer) 1))))
#line 284 "tree_bitset.opt"
      {
#line 284 "tree_bitset.opt"
        MR_Word mercury__test_bitset__InteriorNodes_11_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_31, (MR_Integer) 1)));
#line 284 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_31, (MR_Integer) 0)));

#line 285 "tree_bitset.opt"
        {
#line 285 "tree_bitset.opt"
          mercury__tree_bitset__do_foldl_pred_4_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__InteriorNodes_11_35, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 284 "tree_bitset.opt"
      }
#line 283 "tree_bitset.opt"
    else
#line 281 "tree_bitset.opt"
      {
#line 281 "tree_bitset.opt"
        MR_Word mercury__test_bitset__LeafNodes_9_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__List_8_31, (MR_Integer) 0)));

#line 282 "tree_bitset.opt"
        {
#line 282 "tree_bitset.opt"
          mercury__tree_bitset__leaf_foldl_pred_4_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__LeafNodes_9_33, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 281 "tree_bitset.opt"
      }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5464 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_21_21  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 38 "set_ordlist.opt"
    mercury__test_bitset__V_10_44 = (MR_Word) mercury__test_bitset__SetB_7;
#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      mercury__list__foldl_4_p_0(mercury__test_bitset__TypeInfo_21_21, mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__Pred_5, mercury__test_bitset__V_10_44, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccB_13);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5493 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 504 "test_bitset.m"
    {
#line 504 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_10, mercury__test_bitset__SetListB_11);
    }
#line 504 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 504 "test_bitset.m"
      {
#line 504 "test_bitset.m"
        mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__AccA_12, mercury__test_bitset__AccB_13);
      }
#line 506 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 505 "test_bitset.m"
      *mercury__test_bitset__Acc_9 = mercury__test_bitset__AccA_12;
#line 506 "test_bitset.m"
    else
#line 507 "test_bitset.m"
      {
#line 507 "test_bitset.m"
        {
#line 507 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
#line 507 "test_bitset.m"
          return;
        }
#line 507 "test_bitset.m"
      }
#line 499 "test_bitset.m"
  }
#line 125 "test_bitset.m"
}

#line 118 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__divide_by_set_4_p_0(
#line 118 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 118 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 118 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 118 "test_bitset.m"
  MR_Word * mercury__test_bitset__ResultIn_9,
#line 118 "test_bitset.m"
  MR_Word * mercury__test_bitset__ResultOut_10)
#line 118 "test_bitset.m"
{
#line 473 "test_bitset.m"
  {
#line 473 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_28_28;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__DivideBySetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__DivideBySetB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_11;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetA_12;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_13;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetB_14;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__DivideBySetListA_15;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__DivideBySetListB_16;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_17;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_18;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListA_19;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListB_20;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListA_21;
#line 473 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListB_22;
#line 486 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_34_34;
#line 486 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_38_38;
#line 486 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_42_42;
#line 486 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_46_46;
#line 486 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_37;
#line 486 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_41;
#line 486 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_45;

#line 474 "test_bitset.m"
    {
#line 474 "test_bitset.m"
      mercury__tree_bitset__divide_by_set_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__DivideBySetA_5, mercury__test_bitset__SetA_7, &mercury__test_bitset__InSetA_11, &mercury__test_bitset__OutSetA_12);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5622 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_28_28  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 475 "test_bitset.m"
    {
#line 475 "test_bitset.m"
      mercury__set_ordlist__divide_by_set_4_p_0(mercury__test_bitset__TypeInfo_28_28, mercury__test_bitset__DivideBySetB_6, mercury__test_bitset__SetB_8, &mercury__test_bitset__InSetB_13, &mercury__test_bitset__OutSetB_14);
    }
#line 477 "test_bitset.m"
    {
#line 477 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__DivideBySetA_5, &mercury__test_bitset__DivideBySetListA_15);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__DivideBySetListB_16 = (MR_Word) mercury__test_bitset__DivideBySetB_6;
#line 479 "test_bitset.m"
    {
#line 479 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__SetA_7, &mercury__test_bitset__SetListA_17);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetListB_18 = (MR_Word) mercury__test_bitset__SetB_8;
#line 481 "test_bitset.m"
    {
#line 481 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__InSetA_11, &mercury__test_bitset__InSetListA_19);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__InSetListB_20 = (MR_Word) mercury__test_bitset__InSetB_13;
#line 483 "test_bitset.m"
    {
#line 483 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__OutSetA_12, &mercury__test_bitset__OutSetListA_21);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__OutSetListB_22 = (MR_Word) mercury__test_bitset__OutSetB_14;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5677 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 486 "test_bitset.m"
    {
#line 486 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__DivideBySetListA_15, mercury__test_bitset__DivideBySetListB_16);
    }
#line 486 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 486 "test_bitset.m"
      {
#line 5693 "test_bitset.c"
        mercury__test_bitset__PolyConst1_37 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  mercury__test_bitset__PolyConst1_37 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5710 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_38_38  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 487 "test_bitset.m"
        {
#line 487 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_38_38, mercury__test_bitset__SetListA_17, mercury__test_bitset__SetListB_18);
        }
#line 486 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 486 "test_bitset.m"
          {
#line 5726 "test_bitset.c"
            mercury__test_bitset__PolyConst1_41 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  mercury__test_bitset__PolyConst1_41 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5743 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_42_42  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 488 "test_bitset.m"
            {
#line 488 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_42_42, mercury__test_bitset__InSetListA_19, mercury__test_bitset__InSetListB_20);
            }
#line 486 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 486 "test_bitset.m"
              {
#line 5759 "test_bitset.c"
                mercury__test_bitset__PolyConst1_45 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  mercury__test_bitset__PolyConst1_45 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5776 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_46_46  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 489 "test_bitset.m"
                {
#line 489 "test_bitset.m"
                  mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_46_46, mercury__test_bitset__OutSetListA_21, mercury__test_bitset__OutSetListB_22);
                }
#line 486 "test_bitset.m"
              }
#line 486 "test_bitset.m"
          }
#line 486 "test_bitset.m"
      }
#line 493 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 491 "test_bitset.m"
      {
#line 491 "test_bitset.m"
        {
#line 491 "test_bitset.m"
          MR_Word base;
#line 491 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 491 "test_bitset.m"
          *mercury__test_bitset__ResultIn_9 = base;
#line 491 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__InSetA_11));
#line 491 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__InSetB_13));
#line 491 "test_bitset.m"
        }
#line 492 "test_bitset.m"
        {
#line 492 "test_bitset.m"
          MR_Word base;
#line 492 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "test_bitset.m"
          *mercury__test_bitset__ResultOut_10 = base;
#line 492 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__OutSetA_12));
#line 492 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__OutSetB_14));
#line 492 "test_bitset.m"
        }
#line 491 "test_bitset.m"
      }
#line 493 "test_bitset.m"
    else
#line 494 "test_bitset.m"
      {
#line 494 "test_bitset.m"
        {
#line 494 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.divide_by_set\'/4", (MR_String) "failed");
#line 494 "test_bitset.m"
          return;
        }
#line 494 "test_bitset.m"
      }
#line 473 "test_bitset.m"
  }
#line 118 "test_bitset.m"
}

#line 115 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__divide_4_p_0(
#line 115 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_23,
#line 115 "test_bitset.m"
  MR_Word mercury__test_bitset__Pred_5,
#line 115 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 115 "test_bitset.m"
  MR_Word * mercury__test_bitset__ResultIn_8,
#line 115 "test_bitset.m"
  MR_Word * mercury__test_bitset__ResultOut_9)
#line 115 "test_bitset.m"
{
#line 452 "test_bitset.m"
  {
#line 452 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_25_25;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_10;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetA_11;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_12;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetB_13;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_14;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_15;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListA_16;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListB_17;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListA_18;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListB_19;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_6_42;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__TruePart_7_43;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__FalsePart_8_44;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__V_11_45;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_47;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__RevTruePart_9_48;
#line 452 "test_bitset.m"
    MR_Word mercury__test_bitset__RevFalsePart_10_49;
#line 463 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_30_30;
#line 463 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_34_34;
#line 463 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_38_38;
#line 463 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_33;
#line 463 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_37;

#line 453 "test_bitset.m"
    {
#line 453 "test_bitset.m"
      mercury__tree_bitset__divide_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__Pred_5, mercury__test_bitset__SetA_6, &mercury__test_bitset__InSetA_10, &mercury__test_bitset__OutSetA_11);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5936 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_25_25  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 191 "set_ordlist.opt"
    mercury__test_bitset__Set_6_42 = (MR_Word) mercury__test_bitset__SetB_7;
#line 192 "set_ordlist.opt"
    mercury__test_bitset__V_11_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "set_ordlist.opt"
    mercury__test_bitset__V_12_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "set_ordlist.opt"
    {
#line 194 "set_ordlist.opt"
      mercury__set_ordlist__divide_2_6_p_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__Pred_5, mercury__test_bitset__Set_6_42, mercury__test_bitset__V_11_45, &mercury__test_bitset__RevTruePart_9_48, mercury__test_bitset__V_12_47, &mercury__test_bitset__RevFalsePart_10_49);
    }
#line 195 "set_ordlist.opt"
    {
#line 195 "set_ordlist.opt"
      mercury__list__reverse_2_p_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__RevTruePart_9_48, &mercury__test_bitset__TruePart_7_43);
    }
#line 191 "set_ordlist.opt"
    mercury__test_bitset__InSetB_12 = (MR_Word) mercury__test_bitset__TruePart_7_43;
#line 196 "set_ordlist.opt"
    {
#line 196 "set_ordlist.opt"
      mercury__list__reverse_2_p_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__RevFalsePart_10_49, &mercury__test_bitset__FalsePart_8_44);
    }
#line 191 "set_ordlist.opt"
    mercury__test_bitset__OutSetB_13 = (MR_Word) mercury__test_bitset__FalsePart_8_44;
#line 456 "test_bitset.m"
    {
#line 456 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_14);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SetListB_15 = (MR_Word) mercury__test_bitset__SetB_7;
#line 458 "test_bitset.m"
    {
#line 458 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__InSetA_10, &mercury__test_bitset__InSetListA_16);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__InSetListB_17 = (MR_Word) mercury__test_bitset__InSetB_12;
#line 460 "test_bitset.m"
    {
#line 460 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__OutSetA_11, &mercury__test_bitset__OutSetListA_18);
    }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__OutSetListB_19 = (MR_Word) mercury__test_bitset__OutSetB_13;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6004 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_30_30  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 463 "test_bitset.m"
    {
#line 463 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_30_30, mercury__test_bitset__SetListA_14, mercury__test_bitset__SetListB_15);
    }
#line 463 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 463 "test_bitset.m"
      {
#line 6020 "test_bitset.c"
        mercury__test_bitset__PolyConst1_33 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_33 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6037 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 464 "test_bitset.m"
        {
#line 464 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__InSetListA_16, mercury__test_bitset__InSetListB_17);
        }
#line 463 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 463 "test_bitset.m"
          {
#line 6053 "test_bitset.c"
            mercury__test_bitset__PolyConst1_37 = (MR_Integer) 1;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_37 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6070 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_38_38  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 465 "test_bitset.m"
            {
#line 465 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_38_38, mercury__test_bitset__OutSetListA_18, mercury__test_bitset__OutSetListB_19);
            }
#line 463 "test_bitset.m"
          }
#line 463 "test_bitset.m"
      }
#line 469 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 467 "test_bitset.m"
      {
#line 467 "test_bitset.m"
        {
#line 467 "test_bitset.m"
          MR_Word base;
#line 467 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "test_bitset.m"
          *mercury__test_bitset__ResultIn_8 = base;
#line 467 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__InSetA_10));
#line 467 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__InSetB_12));
#line 467 "test_bitset.m"
        }
#line 468 "test_bitset.m"
        {
#line 468 "test_bitset.m"
          MR_Word base;
#line 468 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "test_bitset.m"
          *mercury__test_bitset__ResultOut_9 = base;
#line 468 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__OutSetA_11));
#line 468 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__OutSetB_13));
#line 468 "test_bitset.m"
        }
#line 467 "test_bitset.m"
      }
#line 469 "test_bitset.m"
    else
#line 470 "test_bitset.m"
      {
#line 470 "test_bitset.m"
        {
#line 470 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.divide\'/4", (MR_String) "failed");
#line 470 "test_bitset.m"
          return;
        }
#line 470 "test_bitset.m"
      }
#line 452 "test_bitset.m"
  }
#line 115 "test_bitset.m"
}

#line 112 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__difference_3_p_0(
#line 112 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
#line 112 "test_bitset.m"
  MR_Word mercury__test_bitset__A_4,
#line 112 "test_bitset.m"
  MR_Word mercury__test_bitset__B_5,
#line 112 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__3_3)
#line 112 "test_bitset.m"
{
#line 437 "test_bitset.m"
  {
#line 437 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 437 "test_bitset.m"
    {
#line 437 "test_bitset.m"
      *mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__difference_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__A_4, mercury__test_bitset__B_5);
    }
#line 437 "test_bitset.m"
  }
#line 112 "test_bitset.m"
}

#line 110 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__intersect_list_2_p_0(
#line 110 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
#line 110 "test_bitset.m"
  MR_Word mercury__test_bitset__Sets_3,
#line 110 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__2_2)
#line 110 "test_bitset.m"
{
#line 436 "test_bitset.m"
  {
#line 436 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 436 "test_bitset.m"
    {
#line 436 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__intersect_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__Sets_3);
    }
#line 436 "test_bitset.m"
  }
#line 110 "test_bitset.m"
}

#line 108 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__intersect_3_p_0(
#line 108 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
#line 108 "test_bitset.m"
  MR_Word mercury__test_bitset__A_4,
#line 108 "test_bitset.m"
  MR_Word mercury__test_bitset__B_5,
#line 108 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__3_3)
#line 108 "test_bitset.m"
{
#line 435 "test_bitset.m"
  {
#line 435 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 435 "test_bitset.m"
    {
#line 435 "test_bitset.m"
      *mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__intersect_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__A_4, mercury__test_bitset__B_5);
    }
#line 435 "test_bitset.m"
  }
#line 108 "test_bitset.m"
}

#line 106 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__union_list_2_p_0(
#line 106 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
#line 106 "test_bitset.m"
  MR_Word mercury__test_bitset__Sets_3,
#line 106 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__2_2)
#line 106 "test_bitset.m"
{
#line 434 "test_bitset.m"
  {
#line 434 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 434 "test_bitset.m"
    {
#line 434 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__union_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__Sets_3);
    }
#line 434 "test_bitset.m"
  }
#line 106 "test_bitset.m"
}

#line 104 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__union_3_p_0(
#line 104 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
#line 104 "test_bitset.m"
  MR_Word mercury__test_bitset__A_4,
#line 104 "test_bitset.m"
  MR_Word mercury__test_bitset__B_5,
#line 104 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__3_3)
#line 104 "test_bitset.m"
{
#line 433 "test_bitset.m"
  {
#line 433 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 433 "test_bitset.m"
    {
#line 433 "test_bitset.m"
      *mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__union_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__A_4, mercury__test_bitset__B_5);
    }
#line 433 "test_bitset.m"
  }
#line 104 "test_bitset.m"
}

#line 102 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__difference_2_f_0(
#line 102 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_15,
#line 102 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 102 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 102 "test_bitset.m"
{
#line 428 "test_bitset.m"
  {
#line 428 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_8;
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_17_17;
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_18_18;
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_9;
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_10;
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__V_14_14;
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__Xs_4_22;
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__Ys_5_23;
#line 428 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_6_24;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6331 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 235 "tree_bitset.opt"
    {
#line 235 "tree_bitset.opt"
      mercury__test_bitset__SetA_9 = mercury__tree_bitset__difference_2_f_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__SetA1_4, mercury__test_bitset__SetA2_6);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6358 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_18_18  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 123 "set_ordlist.opt"
    mercury__test_bitset__Xs_4_22 = (MR_Word) mercury__test_bitset__SetB1_5;
#line 123 "set_ordlist.opt"
    mercury__test_bitset__Ys_5_23 = (MR_Word) mercury__test_bitset__SetB2_7;
#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__test_bitset__TypeInfo_18_18, mercury__test_bitset__Xs_4_22, mercury__test_bitset__Ys_5_23, &mercury__test_bitset__Set_6_24);
    }
#line 123 "set_ordlist.opt"
    mercury__test_bitset__SetB_10 = (MR_Word) mercury__test_bitset__Set_6_24;
#line 431 "test_bitset.m"
    {
#line 431 "test_bitset.m"
      mercury__test_bitset__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 431 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 0) = ((MR_Box) (mercury__test_bitset__SetA_9));
#line 431 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 1) = ((MR_Box) (mercury__test_bitset__SetB_10));
#line 431 "test_bitset.m"
    }
#line 431 "test_bitset.m"
    {
#line 431 "test_bitset.m"
      mercury__test_bitset__check2_5_p_0(mercury__test_bitset__TypeClassInfo_for_enum_15, (MR_String) "difference", mercury__test_bitset__HeadVar__1_1, mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_14_14, &mercury__test_bitset__Result_8);
    }
#line 428 "test_bitset.m"
    return mercury__test_bitset__Result_8;
#line 428 "test_bitset.m"
  }
#line 102 "test_bitset.m"
}

#line 101 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__intersect_list_1_f_0(
#line 101 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
#line 101 "test_bitset.m"
  MR_Word mercury__test_bitset__SetsAB_3)
#line 101 "test_bitset.m"
{
#line 422 "test_bitset.m"
  {
#line 422 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 422 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_4;
#line 422 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_14_14;
#line 422 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 422 "test_bitset.m"
    MR_Word mercury__test_bitset__SetsA_5;
#line 422 "test_bitset.m"
    MR_Word mercury__test_bitset__SetsB_6;
#line 422 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_7;
#line 422 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_8;
#line 422 "test_bitset.m"
    MR_Word mercury__test_bitset__V_11_11;

#line 423 "test_bitset.m"
    {
#line 423 "test_bitset.m"
      mercury__test_bitset__get_sets_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "intersect_list", mercury__test_bitset__SetsAB_3, &mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetsB_6);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6448 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 233 "tree_bitset.opt"
    {
#line 233 "tree_bitset.opt"
      mercury__tree_bitset__intersect_list_2_p_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetA_7);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6475 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 425 "test_bitset.m"
    {
#line 425 "test_bitset.m"
      mercury__test_bitset__SetB_8 = mercury__set_ordlist__intersect_list_1_f_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__SetsB_6);
    }
#line 426 "test_bitset.m"
    {
#line 426 "test_bitset.m"
      mercury__test_bitset__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 426 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 0) = ((MR_Box) (mercury__test_bitset__SetA_7));
#line 426 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 1) = ((MR_Box) (mercury__test_bitset__SetB_8));
#line 426 "test_bitset.m"
    }
#line 426 "test_bitset.m"
    {
#line 426 "test_bitset.m"
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "intersect_list", mercury__test_bitset__V_11_11, &mercury__test_bitset__Result_4);
    }
#line 422 "test_bitset.m"
    return mercury__test_bitset__Result_4;
#line 422 "test_bitset.m"
  }
#line 101 "test_bitset.m"
}

#line 100 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__intersect_2_f_0(
#line 100 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_15,
#line 100 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 100 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 100 "test_bitset.m"
{
#line 417 "test_bitset.m"
  {
#line 417 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_8;
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_17_17;
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_18_18;
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_9;
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_10;
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__V_14_14;
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__Xs_4_22;
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__Ys_5_23;
#line 417 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_6_24;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6566 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 231 "tree_bitset.opt"
    {
#line 231 "tree_bitset.opt"
      mercury__test_bitset__SetA_9 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__SetA1_4, mercury__test_bitset__SetA2_6);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6593 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_18_18  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 113 "set_ordlist.opt"
    mercury__test_bitset__Xs_4_22 = (MR_Word) mercury__test_bitset__SetB1_5;
#line 113 "set_ordlist.opt"
    mercury__test_bitset__Ys_5_23 = (MR_Word) mercury__test_bitset__SetB2_7;
#line 114 "set_ordlist.opt"
    {
#line 114 "set_ordlist.opt"
      mercury__set_ordlist__intersect_2_3_p_0(mercury__test_bitset__TypeInfo_18_18, mercury__test_bitset__Xs_4_22, mercury__test_bitset__Ys_5_23, &mercury__test_bitset__Set_6_24);
    }
#line 113 "set_ordlist.opt"
    mercury__test_bitset__SetB_10 = (MR_Word) mercury__test_bitset__Set_6_24;
#line 420 "test_bitset.m"
    {
#line 420 "test_bitset.m"
      mercury__test_bitset__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 420 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 0) = ((MR_Box) (mercury__test_bitset__SetA_9));
#line 420 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 1) = ((MR_Box) (mercury__test_bitset__SetB_10));
#line 420 "test_bitset.m"
    }
#line 420 "test_bitset.m"
    {
#line 420 "test_bitset.m"
      mercury__test_bitset__check2_5_p_0(mercury__test_bitset__TypeClassInfo_for_enum_15, (MR_String) "intersect", mercury__test_bitset__HeadVar__1_1, mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_14_14, &mercury__test_bitset__Result_8);
    }
#line 417 "test_bitset.m"
    return mercury__test_bitset__Result_8;
#line 417 "test_bitset.m"
  }
#line 100 "test_bitset.m"
}

#line 99 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__union_list_1_f_0(
#line 99 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
#line 99 "test_bitset.m"
  MR_Word mercury__test_bitset__SetsAB_3)
#line 99 "test_bitset.m"
{
#line 411 "test_bitset.m"
  {
#line 411 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_4;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_14_14;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__SetsA_5;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__SetsB_6;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_7;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_8;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__V_11_11;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__Set0_5_20;
#line 411 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_21;

#line 412 "test_bitset.m"
    {
#line 412 "test_bitset.m"
      mercury__test_bitset__get_sets_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "union_list", mercury__test_bitset__SetsAB_3, &mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetsB_6);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6687 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 229 "tree_bitset.opt"
    {
#line 229 "tree_bitset.opt"
      mercury__tree_bitset__union_list_2_p_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetA_7);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6714 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 23 "set_ordlist.opt"
    mercury__test_bitset__V_2_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__test_bitset__Set0_5_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "set_ordlist.opt"
    {
#line 108 "set_ordlist.opt"
      mercury__set_ordlist__power_union_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__SetsB_6, mercury__test_bitset__Set0_5_20, &mercury__test_bitset__SetB_8);
    }
#line 415 "test_bitset.m"
    {
#line 415 "test_bitset.m"
      mercury__test_bitset__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 415 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 0) = ((MR_Box) (mercury__test_bitset__SetA_7));
#line 415 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 1) = ((MR_Box) (mercury__test_bitset__SetB_8));
#line 415 "test_bitset.m"
    }
#line 415 "test_bitset.m"
    {
#line 415 "test_bitset.m"
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "union_list", mercury__test_bitset__V_11_11, &mercury__test_bitset__Result_4);
    }
#line 411 "test_bitset.m"
    return mercury__test_bitset__Result_4;
#line 411 "test_bitset.m"
  }
#line 99 "test_bitset.m"
}

#line 98 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__union_2_f_0(
#line 98 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_15,
#line 98 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 98 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 98 "test_bitset.m"
{
#line 406 "test_bitset.m"
  {
#line 406 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_8;
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_17_17;
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_18_18;
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_9;
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_10;
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__V_14_14;
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__Set0_4_22;
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__Set1_5_23;
#line 406 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_6_24;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6809 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 227 "tree_bitset.opt"
    {
#line 227 "tree_bitset.opt"
      mercury__test_bitset__SetA_9 = mercury__tree_bitset__union_2_f_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__SetA1_4, mercury__test_bitset__SetA2_6);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6836 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_18_18  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 100 "set_ordlist.opt"
    mercury__test_bitset__Set0_4_22 = (MR_Word) mercury__test_bitset__SetB1_5;
#line 100 "set_ordlist.opt"
    mercury__test_bitset__Set1_5_23 = (MR_Word) mercury__test_bitset__SetB2_7;
#line 101 "set_ordlist.opt"
    {
#line 101 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_18_18, mercury__test_bitset__Set0_4_22, mercury__test_bitset__Set1_5_23, &mercury__test_bitset__Set_6_24);
    }
#line 100 "set_ordlist.opt"
    mercury__test_bitset__SetB_10 = (MR_Word) mercury__test_bitset__Set_6_24;
#line 409 "test_bitset.m"
    {
#line 409 "test_bitset.m"
      mercury__test_bitset__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 409 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 0) = ((MR_Box) (mercury__test_bitset__SetA_9));
#line 409 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 1) = ((MR_Box) (mercury__test_bitset__SetB_10));
#line 409 "test_bitset.m"
    }
#line 409 "test_bitset.m"
    {
#line 409 "test_bitset.m"
      mercury__test_bitset__check2_5_p_0(mercury__test_bitset__TypeClassInfo_for_enum_15, (MR_String) "union", mercury__test_bitset__HeadVar__1_1, mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_14_14, &mercury__test_bitset__Result_8);
    }
#line 406 "test_bitset.m"
    return mercury__test_bitset__Result_8;
#line 406 "test_bitset.m"
  }
#line 98 "test_bitset.m"
}

#line 92 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__remove_least_3_p_0(
#line 92 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 92 "test_bitset.m"
  MR_Box * mercury__test_bitset__Least_4,
#line 92 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 92 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_7)
#line 92 "test_bitset.m"
{
#line 386 "test_bitset.m"
  {
#line 386 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 386 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "test_bitset.m"
    MR_Box mercury__test_bitset__LeastA_8;
#line 398 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_9;

#line 387 "test_bitset.m"
    {
#line 387 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__remove_least_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, &mercury__test_bitset__LeastA_8, mercury__test_bitset__SetA0_5, &mercury__test_bitset__SetA1_9);
    }
#line 398 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 395 "test_bitset.m"
      {
#line 395 "test_bitset.m"
        MR_Box mercury__test_bitset__LeastB_10;
#line 395 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB1_11;
#line 388 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_34 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 388 "test_bitset.m"
        MR_Word mercury__test_bitset__Set_5_35;

#line 99 "set_ordlist.opt"
        mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_6_34)) == (MR_mktag((MR_Integer) 1)));
#line 99 "set_ordlist.opt"
        if (mercury__test_bitset__succeeded)
#line 99 "set_ordlist.opt"
          {
#line 99 "set_ordlist.opt"
            mercury__test_bitset__LeastB_10 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_34, (MR_Integer) 0));
#line 99 "set_ordlist.opt"
            mercury__test_bitset__Set_5_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_34, (MR_Integer) 1)));
#line 98 "set_ordlist.opt"
            mercury__test_bitset__SetB1_11 = (MR_Word) mercury__test_bitset__Set_5_35;
#line 98 "set_ordlist.opt"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 99 "set_ordlist.opt"
          }
#line 395 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 392 "test_bitset.m"
          {
#line 389 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeInfo_32_32;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6958 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_32_32  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 389 "test_bitset.m"
            {
#line 389 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_32_32, mercury__test_bitset__LeastA_8, mercury__test_bitset__LeastB_10);
            }
#line 392 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 390 "test_bitset.m"
              {
#line 390 "test_bitset.m"
                MR_Word mercury__test_bitset__V_16_16;

#line 390 "test_bitset.m"
                *mercury__test_bitset__Least_4 = mercury__test_bitset__LeastA_8;
#line 391 "test_bitset.m"
                {
#line 391 "test_bitset.m"
                  mercury__test_bitset__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 391 "test_bitset.m"
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__V_16_16, 0) = ((MR_Box) (mercury__test_bitset__SetA1_9));
#line 391 "test_bitset.m"
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__V_16_16, 1) = ((MR_Box) (mercury__test_bitset__SetB1_11));
#line 391 "test_bitset.m"
                }
#line 391 "test_bitset.m"
                {
#line 391 "test_bitset.m"
                  mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, (MR_String) "remove_least", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_16_16, mercury__test_bitset__Result_7);
                }
#line 390 "test_bitset.m"
              }
#line 392 "test_bitset.m"
            else
#line 393 "test_bitset.m"
              {
#line 393 "test_bitset.m"
                {
#line 393 "test_bitset.m"
                  mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "wrong least element");
                }
#line 393 "test_bitset.m"
              }
#line 392 "test_bitset.m"
          }
#line 395 "test_bitset.m"
        else
#line 396 "test_bitset.m"
          {
#line 396 "test_bitset.m"
            {
#line 396 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "should be no least value");
            }
#line 396 "test_bitset.m"
          }
#line 395 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 395 "test_bitset.m"
      }
#line 398 "test_bitset.m"
    else
#line 400 "test_bitset.m"
      {
#line 400 "test_bitset.m"
        MR_String mercury__test_bitset__V_23_23;
#line 400 "test_bitset.m"
        MR_String mercury__test_bitset__V_24_24;
#line 400 "test_bitset.m"
        MR_String mercury__test_bitset__V_25_25;
#line 400 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_38 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 99 "set_ordlist.opt"
        MR_Box mercury__test_bitset__V_12_12;
#line 99 "set_ordlist.opt"
        MR_Word mercury__test_bitset__Set_5_39;

#line 99 "set_ordlist.opt"
        mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_6_38)) == (MR_mktag((MR_Integer) 1)));
#line 99 "set_ordlist.opt"
        if (mercury__test_bitset__succeeded)
#line 99 "set_ordlist.opt"
          {
#line 99 "set_ordlist.opt"
            mercury__test_bitset__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_38, (MR_Integer) 0));
#line 99 "set_ordlist.opt"
            mercury__test_bitset__Set_5_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_38, (MR_Integer) 1)));
#line 399 "test_bitset.m"
            mercury__test_bitset__V_23_23 = (MR_String) "test_bitset";
#line 399 "test_bitset.m"
            mercury__test_bitset__V_24_24 = (MR_String) "predicate \140test_bitset.remove_least\'/3";
#line 399 "test_bitset.m"
            mercury__test_bitset__V_25_25 = (MR_String) "failed";
#line 399 "test_bitset.m"
            {
#line 399 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_23_23, mercury__test_bitset__V_24_24, mercury__test_bitset__V_25_25);
            }
#line 399 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 99 "set_ordlist.opt"
          }
#line 400 "test_bitset.m"
      }
#line 386 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 386 "test_bitset.m"
  }
#line 92 "test_bitset.m"
}

#line 90 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__remove_list_3_p_0(
#line 90 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_22,
#line 90 "test_bitset.m"
  MR_Word mercury__test_bitset__Es_4,
#line 90 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 90 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_7)
#line 90 "test_bitset.m"
{
#line 371 "test_bitset.m"
  {
#line 371 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 371 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 371 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_8;
#line 222 "tree_bitset.opt"
    MR_Word mercury__test_bitset__TypeInfo_10_32;
#line 222 "tree_bitset.opt"
    MR_Word mercury__test_bitset__TypeInfo_11_33;
#line 222 "tree_bitset.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_38;
#line 222 "tree_bitset.opt"
    MR_Word mercury__test_bitset__ElemsSet_6_30;
#line 222 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_4_36;
#line 222 "tree_bitset.opt"
    MR_Integer mercury__test_bitset__V_5_45;
#line 222 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_54_54;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7128 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_38  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_8_38, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_45);
    }
#line 814 "list.opt"
    {
#line 814 "list.opt"
      mercury__list__merge_sort_2_3_p_0(mercury__test_bitset__TypeInfo_8_38, mercury__test_bitset__V_5_45, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_36);
    }
#line 179 "tree_bitset.opt"
    {
#line 179 "tree_bitset.opt"
      mercury__test_bitset__ElemsSet_6_30 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_22, mercury__test_bitset__V_4_36);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7165 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_32  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 231 "tree_bitset.opt"
    {
#line 231 "tree_bitset.opt"
      mercury__test_bitset__V_54_54 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_10_32, mercury__test_bitset__SetA0_5, mercury__test_bitset__ElemsSet_6_30);
    }
#line 202 "tree_bitset.opt"
    {
#line 202 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_10_32, mercury__test_bitset__ElemsSet_6_30, mercury__test_bitset__V_54_54);
    }
#line 222 "tree_bitset.opt"
    if (mercury__test_bitset__succeeded)
#line 222 "tree_bitset.opt"
      {
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7201 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_33  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 225 "tree_bitset.opt"
        {
#line 225 "tree_bitset.opt"
          mercury__test_bitset__SetA1_8 = mercury__tree_bitset__difference_2_f_0(mercury__test_bitset__TypeInfo_11_33, mercury__test_bitset__SetA0_5, mercury__test_bitset__ElemsSet_6_30);
        }
#line 225 "tree_bitset.opt"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 222 "tree_bitset.opt"
      }
#line 380 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 377 "test_bitset.m"
      {
#line 377 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB1_9;
#line 373 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_24_24;
#line 373 "test_bitset.m"
        MR_Word mercury__test_bitset__ElemSet_6_63;
#line 373 "test_bitset.m"
        MR_Word mercury__test_bitset__Xs_4_67;
#line 373 "test_bitset.m"
        MR_Word mercury__test_bitset__Set_6_69;
#line 373 "test_bitset.m"
        MR_Word mercury__test_bitset__Xs_4_70;
#line 373 "test_bitset.m"
        MR_Word mercury__test_bitset__Ys_5_71;
#line 373 "test_bitset.m"
        MR_Word mercury__test_bitset__Set_6_72;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7253 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_24_24  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 95 "set_ordlist.opt"
        {
#line 95 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__Es_4, &mercury__test_bitset__ElemSet_6_63);
        }
#line 373 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 373 "test_bitset.m"
          {
#line 113 "set_ordlist.opt"
            mercury__test_bitset__Xs_4_67 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 113 "set_ordlist.opt"
            mercury__test_bitset__Set_6_69 = (MR_Word) mercury__test_bitset__ElemSet_6_63;
#line 114 "set_ordlist.opt"
            {
#line 114 "set_ordlist.opt"
              mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_2_3_p_1(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__Xs_4_67, mercury__test_bitset__Set_6_69, mercury__test_bitset__Set_6_69);
            }
#line 373 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 373 "test_bitset.m"
              {
#line 123 "set_ordlist.opt"
                mercury__test_bitset__Xs_4_70 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 123 "set_ordlist.opt"
                mercury__test_bitset__Ys_5_71 = (MR_Word) mercury__test_bitset__ElemSet_6_63;
#line 124 "set_ordlist.opt"
                {
#line 124 "set_ordlist.opt"
                  mercury__set_ordlist__difference_2_3_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__Xs_4_70, mercury__test_bitset__Ys_5_71, &mercury__test_bitset__Set_6_72);
                }
#line 123 "set_ordlist.opt"
                mercury__test_bitset__SetB1_9 = (MR_Word) mercury__test_bitset__Set_6_72;
#line 123 "set_ordlist.opt"
                mercury__test_bitset__succeeded = MR_TRUE;
#line 373 "test_bitset.m"
              }
#line 373 "test_bitset.m"
          }
#line 377 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 374 "test_bitset.m"
          {
#line 374 "test_bitset.m"
            MR_Word mercury__test_bitset__V_15_15;

#line 376 "test_bitset.m"
            {
#line 376 "test_bitset.m"
              mercury__test_bitset__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 376 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_15_15, 0) = ((MR_Box) (mercury__test_bitset__SetA1_8));
#line 376 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_15_15, 1) = ((MR_Box) (mercury__test_bitset__SetB1_9));
#line 376 "test_bitset.m"
            }
#line 376 "test_bitset.m"
            {
#line 376 "test_bitset.m"
              mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_22, (MR_String) "remove_list", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_15_15, mercury__test_bitset__Result_7);
            }
#line 374 "test_bitset.m"
          }
#line 377 "test_bitset.m"
        else
#line 378 "test_bitset.m"
          {
#line 378 "test_bitset.m"
            {
#line 378 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_list\'/3", (MR_String) "unexpected success");
            }
#line 378 "test_bitset.m"
          }
#line 377 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 377 "test_bitset.m"
      }
#line 380 "test_bitset.m"
    else
#line 382 "test_bitset.m"
      {
#line 382 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_26_26;
#line 382 "test_bitset.m"
        MR_String mercury__test_bitset__V_19_19;
#line 382 "test_bitset.m"
        MR_String mercury__test_bitset__V_20_20;
#line 382 "test_bitset.m"
        MR_String mercury__test_bitset__V_21_21;
#line 382 "test_bitset.m"
        MR_Word mercury__test_bitset__ElemSet_6_76;
#line 382 "test_bitset.m"
        MR_Word mercury__test_bitset__Xs_4_80;
#line 382 "test_bitset.m"
        MR_Word mercury__test_bitset__Set_6_82;
#line 382 "test_bitset.m"
        MR_Word mercury__test_bitset__Xs_4_83;
#line 382 "test_bitset.m"
        MR_Word mercury__test_bitset__Ys_5_84;
#line 124 "set_ordlist.opt"
        MR_Word mercury__test_bitset__Set_6_85;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7378 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 95 "set_ordlist.opt"
        {
#line 95 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__Es_4, &mercury__test_bitset__ElemSet_6_76);
        }
#line 382 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 382 "test_bitset.m"
          {
#line 113 "set_ordlist.opt"
            mercury__test_bitset__Xs_4_80 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 113 "set_ordlist.opt"
            mercury__test_bitset__Set_6_82 = (MR_Word) mercury__test_bitset__ElemSet_6_76;
#line 114 "set_ordlist.opt"
            {
#line 114 "set_ordlist.opt"
              mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_2_3_p_1(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__Xs_4_80, mercury__test_bitset__Set_6_82, mercury__test_bitset__Set_6_82);
            }
#line 382 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 382 "test_bitset.m"
              {
#line 123 "set_ordlist.opt"
                mercury__test_bitset__Xs_4_83 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 123 "set_ordlist.opt"
                mercury__test_bitset__Ys_5_84 = (MR_Word) mercury__test_bitset__ElemSet_6_76;
#line 124 "set_ordlist.opt"
                {
#line 124 "set_ordlist.opt"
                  mercury__set_ordlist__difference_2_3_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__Xs_4_83, mercury__test_bitset__Ys_5_84, &mercury__test_bitset__Set_6_85);
                }
#line 381 "test_bitset.m"
                mercury__test_bitset__V_19_19 = (MR_String) "test_bitset";
#line 381 "test_bitset.m"
                mercury__test_bitset__V_20_20 = (MR_String) "predicate \140test_bitset.remove_list\'/3";
#line 381 "test_bitset.m"
                mercury__test_bitset__V_21_21 = (MR_String) "unexpected failure";
#line 381 "test_bitset.m"
                {
#line 381 "test_bitset.m"
                  mercury__require__unexpected_3_p_0(mercury__test_bitset__V_19_19, mercury__test_bitset__V_20_20, mercury__test_bitset__V_21_21);
                }
#line 381 "test_bitset.m"
                mercury__test_bitset__succeeded = MR_TRUE;
#line 382 "test_bitset.m"
              }
#line 382 "test_bitset.m"
          }
#line 382 "test_bitset.m"
      }
#line 371 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 371 "test_bitset.m"
  }
#line 90 "test_bitset.m"
}

#line 88 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__remove_3_p_0(
#line 88 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_22,
#line 88 "test_bitset.m"
  MR_Box mercury__test_bitset__E_4,
#line 88 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 88 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_7)
#line 88 "test_bitset.m"
{
#line 356 "test_bitset.m"
  {
#line 356 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 356 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 356 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 365 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_8;

#line 220 "tree_bitset.opt"
    {
#line 220 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset__contains_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_22, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
    }
#line 219 "tree_bitset.opt"
    if (mercury__test_bitset__succeeded)
#line 219 "tree_bitset.opt"
      {
#line 221 "tree_bitset.opt"
        {
#line 221 "tree_bitset.opt"
          mercury__test_bitset__SetA1_8 = mercury__tree_bitset__delete_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_22, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
        }
#line 221 "tree_bitset.opt"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 219 "tree_bitset.opt"
      }
#line 365 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 362 "test_bitset.m"
      {
#line 362 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB1_9;
#line 358 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_24_24;
#line 358 "test_bitset.m"
        MR_Word mercury__test_bitset__Set0_5_31;
#line 358 "test_bitset.m"
        MR_Word mercury__test_bitset__Set_6_32;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7512 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_24_24  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 92 "set_ordlist.opt"
        mercury__test_bitset__Set0_5_31 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 93 "set_ordlist.opt"
        {
#line 93 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__delete_first_3_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__Set0_5_31, mercury__test_bitset__E_4, &mercury__test_bitset__Set_6_32);
        }
#line 358 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 358 "test_bitset.m"
          {
#line 92 "set_ordlist.opt"
            mercury__test_bitset__SetB1_9 = (MR_Word) mercury__test_bitset__Set_6_32;
#line 92 "set_ordlist.opt"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 358 "test_bitset.m"
          }
#line 362 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 359 "test_bitset.m"
          {
#line 359 "test_bitset.m"
            MR_Word mercury__test_bitset__V_15_15;

#line 361 "test_bitset.m"
            {
#line 361 "test_bitset.m"
              mercury__test_bitset__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 361 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_15_15, 0) = ((MR_Box) (mercury__test_bitset__SetA1_8));
#line 361 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_15_15, 1) = ((MR_Box) (mercury__test_bitset__SetB1_9));
#line 361 "test_bitset.m"
            }
#line 361 "test_bitset.m"
            {
#line 361 "test_bitset.m"
              mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_22, (MR_String) "remove", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_15_15, mercury__test_bitset__Result_7);
            }
#line 359 "test_bitset.m"
          }
#line 362 "test_bitset.m"
        else
#line 363 "test_bitset.m"
          {
#line 363 "test_bitset.m"
            {
#line 363 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove\'/3", (MR_String) "unexpected success");
            }
#line 363 "test_bitset.m"
          }
#line 362 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 362 "test_bitset.m"
      }
#line 365 "test_bitset.m"
    else
#line 367 "test_bitset.m"
      {
#line 367 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_26_26;
#line 367 "test_bitset.m"
        MR_String mercury__test_bitset__V_19_19;
#line 367 "test_bitset.m"
        MR_String mercury__test_bitset__V_20_20;
#line 367 "test_bitset.m"
        MR_String mercury__test_bitset__V_21_21;
#line 367 "test_bitset.m"
        MR_Word mercury__test_bitset__Set0_5_34;
#line 93 "set_ordlist.opt"
        MR_Word mercury__test_bitset__Set_6_35;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7607 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 92 "set_ordlist.opt"
        mercury__test_bitset__Set0_5_34 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 93 "set_ordlist.opt"
        {
#line 93 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__delete_first_3_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__Set0_5_34, mercury__test_bitset__E_4, &mercury__test_bitset__Set_6_35);
        }
#line 367 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 367 "test_bitset.m"
          {
#line 366 "test_bitset.m"
            mercury__test_bitset__V_19_19 = (MR_String) "test_bitset";
#line 366 "test_bitset.m"
            mercury__test_bitset__V_20_20 = (MR_String) "predicate \140test_bitset.remove\'/3";
#line 366 "test_bitset.m"
            mercury__test_bitset__V_21_21 = (MR_String) "unexpected failure";
#line 366 "test_bitset.m"
            {
#line 366 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_19_19, mercury__test_bitset__V_20_20, mercury__test_bitset__V_21_21);
            }
#line 366 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 367 "test_bitset.m"
          }
#line 367 "test_bitset.m"
      }
#line 356 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 356 "test_bitset.m"
  }
#line 88 "test_bitset.m"
}

#line 86 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__delete_list_3_p_0(
#line 86 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
#line 86 "test_bitset.m"
  MR_Word mercury__test_bitset__Es_4,
#line 86 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 86 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_7)
#line 86 "test_bitset.m"
{
#line 351 "test_bitset.m"
  {
#line 351 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_10_24;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_8_29;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_9;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_12;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_22;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_27;
#line 351 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_36;
#line 351 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_50;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__Xs_4_56;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__Ys_5_57;
#line 351 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_6_58;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7712 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_24  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7734 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_29  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_36);
    }
#line 814 "list.opt"
    {
#line 814 "list.opt"
      mercury__list__merge_sort_2_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__V_5_36, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_27);
    }
#line 179 "tree_bitset.opt"
    {
#line 179 "tree_bitset.opt"
      mercury__test_bitset__V_6_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__V_4_27);
    }
#line 215 "tree_bitset.opt"
    {
#line 215 "tree_bitset.opt"
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__difference_2_f_0(mercury__test_bitset__TypeInfo_10_24, mercury__test_bitset__SetA0_5, mercury__test_bitset__V_6_22);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7776 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_50);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_5_50, mercury__test_bitset__Es_4, &mercury__test_bitset__Ys_5_57);
    }
#line 123 "set_ordlist.opt"
    mercury__test_bitset__Xs_4_56 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__Xs_4_56, mercury__test_bitset__Ys_5_57, &mercury__test_bitset__Set_6_58);
    }
#line 123 "set_ordlist.opt"
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__Set_6_58;
#line 354 "test_bitset.m"
    {
#line 354 "test_bitset.m"
      mercury__test_bitset__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 354 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 354 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 354 "test_bitset.m"
    }
#line 354 "test_bitset.m"
    {
#line 354 "test_bitset.m"
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "delete_list", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_12_12, mercury__test_bitset__Result_7);
#line 354 "test_bitset.m"
      return;
    }
#line 351 "test_bitset.m"
  }
#line 86 "test_bitset.m"
}

#line 84 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__delete_3_p_0(
#line 84 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
#line 84 "test_bitset.m"
  MR_Box mercury__test_bitset__E_4,
#line 84 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 84 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_7)
#line 84 "test_bitset.m"
{
#line 346 "test_bitset.m"
  {
#line 346 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_9;
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_12;
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__V_11_25;
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__Xs_4_26;
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__Ys_5_27;
#line 346 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_6_28;

#line 213 "tree_bitset.opt"
    {
#line 213 "tree_bitset.opt"
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__delete_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7882 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 82 "set_ordlist.opt"
    mercury__test_bitset__V_11_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 81 "set_ordlist.opt"
    {
#line 81 "set_ordlist.opt"
      mercury__test_bitset__Ys_5_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__Ys_5_27, 0) = mercury__test_bitset__E_4;
#line 81 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__Ys_5_27, 1) = ((MR_Box) (mercury__test_bitset__V_11_25));
#line 81 "set_ordlist.opt"
    }
#line 123 "set_ordlist.opt"
    mercury__test_bitset__Xs_4_26 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__Xs_4_26, mercury__test_bitset__Ys_5_27, &mercury__test_bitset__Set_6_28);
    }
#line 123 "set_ordlist.opt"
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__Set_6_28;
#line 349 "test_bitset.m"
    {
#line 349 "test_bitset.m"
      mercury__test_bitset__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 349 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 349 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 349 "test_bitset.m"
    }
#line 349 "test_bitset.m"
    {
#line 349 "test_bitset.m"
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "delete", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_12_12, mercury__test_bitset__Result_7);
#line 349 "test_bitset.m"
      return;
    }
#line 346 "test_bitset.m"
  }
#line 84 "test_bitset.m"
}

#line 82 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__insert_list_3_p_0(
#line 82 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
#line 82 "test_bitset.m"
  MR_Word mercury__test_bitset__Es_4,
#line 82 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 82 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_7)
#line 82 "test_bitset.m"
{
#line 341 "test_bitset.m"
  {
#line 341 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_10_24;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_8_29;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_9;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_12;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_22;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_27;
#line 341 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_36;
#line 341 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_50;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__Set0_4_56;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__Set1_5_57;
#line 341 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_6_58;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7995 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_24  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8017 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_29  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_36);
    }
#line 814 "list.opt"
    {
#line 814 "list.opt"
      mercury__list__merge_sort_2_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__V_5_36, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_27);
    }
#line 179 "tree_bitset.opt"
    {
#line 179 "tree_bitset.opt"
      mercury__test_bitset__V_6_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__V_4_27);
    }
#line 208 "tree_bitset.opt"
    {
#line 208 "tree_bitset.opt"
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__union_2_f_0(mercury__test_bitset__TypeInfo_10_24, mercury__test_bitset__V_6_22, mercury__test_bitset__SetA0_5);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8059 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_50);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_5_50, mercury__test_bitset__Es_4, &mercury__test_bitset__Set0_4_56);
    }
#line 100 "set_ordlist.opt"
    mercury__test_bitset__Set1_5_57 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 101 "set_ordlist.opt"
    {
#line 101 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__Set0_4_56, mercury__test_bitset__Set1_5_57, &mercury__test_bitset__Set_6_58);
    }
#line 100 "set_ordlist.opt"
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__Set_6_58;
#line 344 "test_bitset.m"
    {
#line 344 "test_bitset.m"
      mercury__test_bitset__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 344 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 344 "test_bitset.m"
    }
#line 344 "test_bitset.m"
    {
#line 344 "test_bitset.m"
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "insert_list", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_12_12, mercury__test_bitset__Result_7);
#line 344 "test_bitset.m"
      return;
    }
#line 341 "test_bitset.m"
  }
#line 82 "test_bitset.m"
}

#line 80 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__insert_new_3_p_0(
#line 80 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 80 "test_bitset.m"
  MR_Box mercury__test_bitset__E_4,
#line 80 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 80 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_7)
#line 80 "test_bitset.m"
{
#line 323 "test_bitset.m"
  {
#line 323 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 323 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 323 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 331 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;

#line 324 "test_bitset.m"
    {
#line 324 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__insert_new_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__E_4, mercury__test_bitset__SetA0_5, &mercury__test_bitset__SetA_8);
    }
#line 331 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 327 "test_bitset.m"
      {
#line 327 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB_9;
#line 325 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_22_22;
#line 325 "test_bitset.m"
        MR_Word mercury__test_bitset__List0_5_26;
#line 325 "test_bitset.m"
        MR_Word mercury__test_bitset__List_6_27;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_20 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8164 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_22_22  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 71 "set_ordlist.opt"
        mercury__test_bitset__List0_5_26 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 72 "set_ordlist.opt"
        {
#line 72 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__insert_new_2_3_p_0(mercury__test_bitset__TypeInfo_22_22, mercury__test_bitset__List0_5_26, mercury__test_bitset__E_4, &mercury__test_bitset__List_6_27);
        }
#line 325 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 325 "test_bitset.m"
          {
#line 71 "set_ordlist.opt"
            mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__List_6_27;
#line 71 "set_ordlist.opt"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 325 "test_bitset.m"
          }
#line 327 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 326 "test_bitset.m"
          {
#line 326 "test_bitset.m"
            MR_Word mercury__test_bitset__V_13_13;

#line 326 "test_bitset.m"
            {
#line 326 "test_bitset.m"
              mercury__test_bitset__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_13, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 326 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_13, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 326 "test_bitset.m"
            }
#line 326 "test_bitset.m"
            {
#line 326 "test_bitset.m"
              mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_String) "insert", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_13_13, mercury__test_bitset__Result_7);
            }
#line 326 "test_bitset.m"
          }
#line 327 "test_bitset.m"
        else
#line 328 "test_bitset.m"
          {
#line 328 "test_bitset.m"
            {
#line 328 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.insert_new\'/3", (MR_String) "success/fail in tree_bitset/set_ordlist");
            }
#line 328 "test_bitset.m"
          }
#line 327 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 327 "test_bitset.m"
      }
#line 331 "test_bitset.m"
    else
#line 335 "test_bitset.m"
      {
#line 335 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_24_24;
#line 335 "test_bitset.m"
        MR_String mercury__test_bitset__V_17_17;
#line 335 "test_bitset.m"
        MR_String mercury__test_bitset__V_18_18;
#line 335 "test_bitset.m"
        MR_String mercury__test_bitset__V_19_19;
#line 335 "test_bitset.m"
        MR_Word mercury__test_bitset__List0_5_29;
#line 72 "set_ordlist.opt"
        MR_Word mercury__test_bitset__List_6_30;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_20 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8259 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_24_24  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 71 "set_ordlist.opt"
        mercury__test_bitset__List0_5_29 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 72 "set_ordlist.opt"
        {
#line 72 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__insert_new_2_3_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__List0_5_29, mercury__test_bitset__E_4, &mercury__test_bitset__List_6_30);
        }
#line 335 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 335 "test_bitset.m"
          {
#line 333 "test_bitset.m"
            mercury__test_bitset__V_17_17 = (MR_String) "test_bitset";
#line 333 "test_bitset.m"
            mercury__test_bitset__V_18_18 = (MR_String) "predicate \140test_bitset.insert_new\'/3";
#line 333 "test_bitset.m"
            mercury__test_bitset__V_19_19 = (MR_String) "fail/success in tree_bitset/set_ordlist";
#line 333 "test_bitset.m"
            {
#line 333 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_17_17, mercury__test_bitset__V_18_18, mercury__test_bitset__V_19_19);
            }
#line 333 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 335 "test_bitset.m"
          }
#line 335 "test_bitset.m"
      }
#line 323 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 323 "test_bitset.m"
  }
#line 80 "test_bitset.m"
}

#line 78 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__insert_3_p_0(
#line 78 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
#line 78 "test_bitset.m"
  MR_Box mercury__test_bitset__E_4,
#line 78 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 78 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_7)
#line 78 "test_bitset.m"
{
#line 318 "test_bitset.m"
  {
#line 318 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 318 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 318 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 318 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 318 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;
#line 318 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_9;
#line 318 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_12;
#line 318 "test_bitset.m"
    MR_Word mercury__test_bitset__List0_5_20;
#line 318 "test_bitset.m"
    MR_Word mercury__test_bitset__List_6_21;

#line 206 "tree_bitset.opt"
    {
#line 206 "tree_bitset.opt"
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__insert_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8355 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 67 "set_ordlist.opt"
    mercury__test_bitset__List0_5_20 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 68 "set_ordlist.opt"
    {
#line 68 "set_ordlist.opt"
      mercury__set_ordlist__insert_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__List0_5_20, mercury__test_bitset__E_4, &mercury__test_bitset__List_6_21);
    }
#line 67 "set_ordlist.opt"
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__List_6_21;
#line 321 "test_bitset.m"
    {
#line 321 "test_bitset.m"
      mercury__test_bitset__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 321 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 321 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 321 "test_bitset.m"
    }
#line 321 "test_bitset.m"
    {
#line 321 "test_bitset.m"
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "insert", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_12_12, mercury__test_bitset__Result_7);
#line 321 "test_bitset.m"
      return;
    }
#line 318 "test_bitset.m"
  }
#line 78 "test_bitset.m"
}

#line 73 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__to_set_1_f_0(
#line 73 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
#line 73 "test_bitset.m"
  MR_Word mercury__test_bitset__Set_3)
#line 73 "test_bitset.m"
{
#line 314 "test_bitset.m"
  {
#line 314 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 314 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;

#line 314 "test_bitset.m"
    {
#line 314 "test_bitset.m"
      return mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__bitset_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__Set_3);
    }
#line 314 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 314 "test_bitset.m"
  }
#line 73 "test_bitset.m"
}

#line 72 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__from_set_1_f_0(
#line 72 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
#line 72 "test_bitset.m"
  MR_Word mercury__test_bitset__Set_3)
#line 72 "test_bitset.m"
{
#line 305 "test_bitset.m"
  {
#line 305 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 305 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;
#line 305 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedList_8;
#line 133 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_10_11;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__from_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_4 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8456 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_11  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SortedList_8 = (MR_Word) mercury__test_bitset__Set_3;
#line 307 "test_bitset.m"
    {
#line 307 "test_bitset.m"
      return mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__SortedList_8);
    }
#line 305 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 305 "test_bitset.m"
  }
#line 72 "test_bitset.m"
}

#line 71 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__bitset_to_set_1_f_0(
#line 71 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_8,
#line 71 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1)
#line 71 "test_bitset.m"
{
#line 309 "test_bitset.m"
  {
#line 309 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 309 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_5;
#line 309 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_10_10;
#line 309 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedList_6;
#line 309 "test_bitset.m"
    MR_Word mercury__test_bitset__List_4_14;

#line 310 "test_bitset.m"
    {
#line 310 "test_bitset.m"
      mercury__test_bitset__SortedList_6 = mercury__test_bitset__to_sorted_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_8, mercury__test_bitset__HeadVar__1_1);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__bitset_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8519 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_10  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 58 "list.opt"
    if ((mercury__test_bitset__SortedList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__test_bitset__List_4_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__test_bitset__X_3_15 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__SortedList_6, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__test_bitset__Xs_4_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__SortedList_6, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__test_bitset__TypeInfo_10_10, mercury__test_bitset__Xs_4_16, mercury__test_bitset__X_3_15, &mercury__test_bitset__List_4_14);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    mercury__test_bitset__Set_5 = (MR_Word) mercury__test_bitset__List_4_14;
#line 309 "test_bitset.m"
    return mercury__test_bitset__Set_5;
#line 309 "test_bitset.m"
  }
#line 71 "test_bitset.m"
}

#line 70 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__set_to_bitset_1_f_0(
#line 70 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_8,
#line 70 "test_bitset.m"
  MR_Word mercury__test_bitset__Set_3)
#line 70 "test_bitset.m"
{
#line 305 "test_bitset.m"
  {
#line 305 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 305 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;
#line 305 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedList_6;
#line 133 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_10_10;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__set_to_bitset_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8590 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_10  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 38 "set_ordlist.opt"
    mercury__test_bitset__SortedList_6 = (MR_Word) mercury__test_bitset__Set_3;
#line 307 "test_bitset.m"
    {
#line 307 "test_bitset.m"
      return mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_8, mercury__test_bitset__SortedList_6);
    }
#line 305 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 305 "test_bitset.m"
  }
#line 70 "test_bitset.m"
}

#line 68 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__to_sorted_list_2_p_0(
#line 68 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
#line 68 "test_bitset.m"
  MR_Word mercury__test_bitset__A_3,
#line 68 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__2_2)
#line 68 "test_bitset.m"
{
#line 303 "test_bitset.m"
  {
#line 303 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 303 "test_bitset.m"
    {
#line 303 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__to_sorted_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 303 "test_bitset.m"
  }
#line 68 "test_bitset.m"
}

#line 67 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__sorted_list_to_set_2_p_0(
#line 67 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
#line 67 "test_bitset.m"
  MR_Word mercury__test_bitset__A_3,
#line 67 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__2_2)
#line 67 "test_bitset.m"
{
#line 302 "test_bitset.m"
  {
#line 302 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 302 "test_bitset.m"
    {
#line 302 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 302 "test_bitset.m"
  }
#line 67 "test_bitset.m"
}

#line 66 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__list_to_set_2_p_0(
#line 66 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
#line 66 "test_bitset.m"
  MR_Word mercury__test_bitset__A_3,
#line 66 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__2_2)
#line 66 "test_bitset.m"
{
#line 301 "test_bitset.m"
  {
#line 301 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 301 "test_bitset.m"
    {
#line 301 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 301 "test_bitset.m"
  }
#line 66 "test_bitset.m"
}

#line 64 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__to_sorted_list_1_f_0(
#line 64 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_11,
#line 64 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1)
#line 64 "test_bitset.m"
{
#line 292 "test_bitset.m"
  {
#line 292 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 292 "test_bitset.m"
    MR_Word mercury__test_bitset__List_5;
#line 292 "test_bitset.m"
    MR_Word mercury__test_bitset__A_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "test_bitset.m"
    MR_Word mercury__test_bitset__B_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 292 "test_bitset.m"
    MR_Word mercury__test_bitset__ListA_6;
#line 292 "test_bitset.m"
    MR_Word mercury__test_bitset__ListB_7;
#line 292 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 292 "test_bitset.m"
    MR_Word mercury__test_bitset__List_8_56 = (MR_Word) mercury__test_bitset__A_3;
#line 295 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;

#line 312 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__List_8_56)) == (MR_mktag((MR_Integer) 1))))
#line 313 "tree_bitset.opt"
      {
#line 313 "tree_bitset.opt"
        MR_Word mercury__test_bitset__InteriorNodes_11_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_56, (MR_Integer) 1)));
#line 313 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_59 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_56, (MR_Integer) 0)));

#line 314 "tree_bitset.opt"
        {
#line 314 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__InteriorNodes_11_60, mercury__test_bitset__V_5_21, &mercury__test_bitset__ListA_6);
        }
#line 313 "tree_bitset.opt"
      }
#line 312 "tree_bitset.opt"
    else
#line 310 "tree_bitset.opt"
      {
#line 310 "tree_bitset.opt"
        MR_Word mercury__test_bitset__LeafNodes_9_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__List_8_56, (MR_Integer) 0)));

#line 311 "tree_bitset.opt"
        {
#line 311 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_51_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__LeafNodes_9_58, mercury__test_bitset__V_5_21, &mercury__test_bitset__ListA_6);
        }
#line 310 "tree_bitset.opt"
      }
#line 38 "set_ordlist.opt"
    mercury__test_bitset__ListB_7 = (MR_Word) mercury__test_bitset__B_4;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8766 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 295 "test_bitset.m"
    {
#line 295 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__ListA_6, mercury__test_bitset__ListB_7);
    }
#line 297 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 296 "test_bitset.m"
      mercury__test_bitset__List_5 = mercury__test_bitset__ListB_7;
#line 297 "test_bitset.m"
    else
#line 298 "test_bitset.m"
      {
#line 298 "test_bitset.m"
        {
#line 298 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.to_sorted_list\'/1", (MR_String) "failed");
        }
#line 298 "test_bitset.m"
      }
#line 292 "test_bitset.m"
    return mercury__test_bitset__List_5;
#line 292 "test_bitset.m"
  }
#line 64 "test_bitset.m"
}

#line 63 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__sorted_list_to_set_1_f_0(
#line 63 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_9,
#line 63 "test_bitset.m"
  MR_Word mercury__test_bitset__List_3)
#line 63 "test_bitset.m"
{
#line 286 "test_bitset.m"
  {
#line 286 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 286 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_4;
#line 286 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_11_11;
#line 286 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_6;
#line 286 "test_bitset.m"
    MR_Word mercury__test_bitset__V_7_7;
#line 286 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_8;
#line 286 "test_bitset.m"
    MR_Word mercury__test_bitset__List_4_15;

#line 288 "test_bitset.m"
    {
#line 288 "test_bitset.m"
      mercury__test_bitset__V_7_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_9, mercury__test_bitset__List_3);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__sorted_list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8846 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_11  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 58 "list.opt"
    if ((mercury__test_bitset__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__test_bitset__List_4_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__test_bitset__X_3_16 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_3, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__test_bitset__Xs_4_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_3, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__test_bitset__TypeInfo_11_11, mercury__test_bitset__Xs_4_17, mercury__test_bitset__X_3_16, &mercury__test_bitset__List_4_15);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    mercury__test_bitset__V_8_8 = (MR_Word) mercury__test_bitset__List_4_15;
#line 287 "test_bitset.m"
    {
#line 287 "test_bitset.m"
      mercury__test_bitset__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 287 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_6, 0) = ((MR_Box) (mercury__test_bitset__V_7_7));
#line 287 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_6, 1) = ((MR_Box) (mercury__test_bitset__V_8_8));
#line 287 "test_bitset.m"
    }
#line 287 "test_bitset.m"
    {
#line 287 "test_bitset.m"
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_9, (MR_String) "sorted_list_to_set", mercury__test_bitset__V_6_6, &mercury__test_bitset__Result_4);
    }
#line 286 "test_bitset.m"
    return mercury__test_bitset__Result_4;
#line 286 "test_bitset.m"
  }
#line 63 "test_bitset.m"
}

#line 62 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__list_to_set_1_f_0(
#line 62 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_9,
#line 62 "test_bitset.m"
  MR_Word mercury__test_bitset__List_3)
#line 62 "test_bitset.m"
{
#line 281 "test_bitset.m"
  {
#line 281 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 281 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_4;
#line 281 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_11_11;
#line 281 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_8_16;
#line 281 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_6;
#line 281 "test_bitset.m"
    MR_Word mercury__test_bitset__V_7_7;
#line 281 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_8;
#line 281 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_14;
#line 281 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_23;
#line 281 "test_bitset.m"
    MR_Word mercury__test_bitset__List_4_32;
#line 281 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_35;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8946 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_16  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_8_16, mercury__test_bitset__List_3, (MR_Integer) 0, &mercury__test_bitset__V_5_23);
    }
#line 814 "list.opt"
    {
#line 814 "list.opt"
      mercury__list__merge_sort_2_3_p_0(mercury__test_bitset__TypeInfo_8_16, mercury__test_bitset__V_5_23, mercury__test_bitset__List_3, &mercury__test_bitset__V_4_14);
    }
#line 179 "tree_bitset.opt"
    {
#line 179 "tree_bitset.opt"
      mercury__test_bitset__V_7_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_9, mercury__test_bitset__V_4_14);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8983 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_11  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_11_11, mercury__test_bitset__List_3, (MR_Integer) 0, &mercury__test_bitset__V_5_35);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_11_11, mercury__test_bitset__V_5_35, mercury__test_bitset__List_3, &mercury__test_bitset__List_4_32);
    }
#line 26 "set_ordlist.opt"
    mercury__test_bitset__V_8_8 = (MR_Word) mercury__test_bitset__List_4_32;
#line 282 "test_bitset.m"
    {
#line 282 "test_bitset.m"
      mercury__test_bitset__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_6, 0) = ((MR_Box) (mercury__test_bitset__V_7_7));
#line 282 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_6, 1) = ((MR_Box) (mercury__test_bitset__V_8_8));
#line 282 "test_bitset.m"
    }
#line 282 "test_bitset.m"
    {
#line 282 "test_bitset.m"
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_9, (MR_String) "list_to_set", mercury__test_bitset__V_6_6, &mercury__test_bitset__Result_4);
    }
#line 281 "test_bitset.m"
    return mercury__test_bitset__Result_4;
#line 281 "test_bitset.m"
  }
#line 62 "test_bitset.m"
}

#line 57 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__superset_2_p_0(
#line 57 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_13,
#line 57 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 57 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 57 "test_bitset.m"
{
#line 266 "test_bitset.m"
  {
#line 266 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 266 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 266 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 266 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_19_19;

#line 231 "tree_bitset.opt"
    {
#line 231 "tree_bitset.opt"
      mercury__test_bitset__V_19_19 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA1_3, mercury__test_bitset__SetA2_5);
    }
#line 202 "tree_bitset.opt"
    {
#line 202 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA2_5, mercury__test_bitset__V_19_19);
    }
#line 273 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 270 "test_bitset.m"
      {
#line 113 "set_ordlist.opt"
        MR_Word mercury__test_bitset__Xs_4_30 = (MR_Word) mercury__test_bitset__SetB1_4;
#line 113 "set_ordlist.opt"
        MR_Word mercury__test_bitset__Set_6_32 = (MR_Word) mercury__test_bitset__SetB2_6;

#line 114 "set_ordlist.opt"
        {
#line 114 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_2_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__Xs_4_30, mercury__test_bitset__Set_6_32, mercury__test_bitset__Set_6_32);
        }
#line 270 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 269 "test_bitset.m"
          {
#line 269 "test_bitset.m"
          }
#line 270 "test_bitset.m"
        else
#line 271 "test_bitset.m"
          {
#line 271 "test_bitset.m"
            {
#line 271 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.superset\'/2", (MR_String) "unexpected success");
            }
#line 271 "test_bitset.m"
          }
#line 270 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 270 "test_bitset.m"
      }
#line 273 "test_bitset.m"
    else
#line 275 "test_bitset.m"
      {
#line 275 "test_bitset.m"
        MR_String mercury__test_bitset__V_10_10;
#line 275 "test_bitset.m"
        MR_String mercury__test_bitset__V_11_11;
#line 275 "test_bitset.m"
        MR_String mercury__test_bitset__V_12_12;
#line 275 "test_bitset.m"
        MR_Word mercury__test_bitset__Xs_4_38 = (MR_Word) mercury__test_bitset__SetB1_4;
#line 275 "test_bitset.m"
        MR_Word mercury__test_bitset__Set_6_40 = (MR_Word) mercury__test_bitset__SetB2_6;

#line 114 "set_ordlist.opt"
        {
#line 114 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_2_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__Xs_4_38, mercury__test_bitset__Set_6_40, mercury__test_bitset__Set_6_40);
        }
#line 275 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 275 "test_bitset.m"
          {
#line 274 "test_bitset.m"
            mercury__test_bitset__V_10_10 = (MR_String) "test_bitset";
#line 274 "test_bitset.m"
            mercury__test_bitset__V_11_11 = (MR_String) "predicate \140test_bitset.superset\'/2";
#line 274 "test_bitset.m"
            mercury__test_bitset__V_12_12 = (MR_String) "unexpected failure";
#line 274 "test_bitset.m"
            {
#line 274 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_10_10, mercury__test_bitset__V_11_11, mercury__test_bitset__V_12_12);
            }
#line 274 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 275 "test_bitset.m"
          }
#line 275 "test_bitset.m"
      }
#line 266 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 266 "test_bitset.m"
  }
#line 57 "test_bitset.m"
}

#line 56 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__subset_2_p_0(
#line 56 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_13,
#line 56 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 56 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 56 "test_bitset.m"
{
#line 253 "test_bitset.m"
  {
#line 253 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 253 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 253 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 253 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 253 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_17_17;

#line 231 "tree_bitset.opt"
    {
#line 231 "tree_bitset.opt"
      mercury__test_bitset__V_17_17 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA2_5, mercury__test_bitset__SetA1_3);
    }
#line 202 "tree_bitset.opt"
    {
#line 202 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA1_3, mercury__test_bitset__V_17_17);
    }
#line 260 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 257 "test_bitset.m"
      {
#line 113 "set_ordlist.opt"
        MR_Word mercury__test_bitset__Xs_4_26 = (MR_Word) mercury__test_bitset__SetB2_6;
#line 113 "set_ordlist.opt"
        MR_Word mercury__test_bitset__Set_6_28 = (MR_Word) mercury__test_bitset__SetB1_4;

#line 114 "set_ordlist.opt"
        {
#line 114 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_2_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__Xs_4_26, mercury__test_bitset__Set_6_28, mercury__test_bitset__Set_6_28);
        }
#line 257 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 256 "test_bitset.m"
          {
#line 256 "test_bitset.m"
          }
#line 257 "test_bitset.m"
        else
#line 258 "test_bitset.m"
          {
#line 258 "test_bitset.m"
            {
#line 258 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.subset\'/2", (MR_String) "unexpected success");
            }
#line 258 "test_bitset.m"
          }
#line 257 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 257 "test_bitset.m"
      }
#line 260 "test_bitset.m"
    else
#line 262 "test_bitset.m"
      {
#line 262 "test_bitset.m"
        MR_String mercury__test_bitset__V_10_10;
#line 262 "test_bitset.m"
        MR_String mercury__test_bitset__V_11_11;
#line 262 "test_bitset.m"
        MR_String mercury__test_bitset__V_12_12;
#line 262 "test_bitset.m"
        MR_Word mercury__test_bitset__Xs_4_32 = (MR_Word) mercury__test_bitset__SetB2_6;
#line 262 "test_bitset.m"
        MR_Word mercury__test_bitset__Set_6_34 = (MR_Word) mercury__test_bitset__SetB1_4;

#line 114 "set_ordlist.opt"
        {
#line 114 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_2_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__Xs_4_32, mercury__test_bitset__Set_6_34, mercury__test_bitset__Set_6_34);
        }
#line 262 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 262 "test_bitset.m"
          {
#line 261 "test_bitset.m"
            mercury__test_bitset__V_10_10 = (MR_String) "test_bitset";
#line 261 "test_bitset.m"
            mercury__test_bitset__V_11_11 = (MR_String) "predicate \140test_bitset.subset\'/2";
#line 261 "test_bitset.m"
            mercury__test_bitset__V_12_12 = (MR_String) "unexpected failure";
#line 261 "test_bitset.m"
            {
#line 261 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_10_10, mercury__test_bitset__V_11_11, mercury__test_bitset__V_12_12);
            }
#line 261 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 262 "test_bitset.m"
          }
#line 262 "test_bitset.m"
      }
#line 253 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 253 "test_bitset.m"
  }
#line 56 "test_bitset.m"
}

#line 54 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__equal_2_p_0(
#line 54 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
#line 54 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 54 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 54 "test_bitset.m"
{
#line 244 "test_bitset.m"
  {
#line 244 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 244 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 244 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 244 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 244 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 244 "test_bitset.m"
    MR_Word mercury__test_bitset__EqualA_7;
#line 244 "test_bitset.m"
    MR_Word mercury__test_bitset__EqualB_8;
#line 246 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_14_14;

#line 245 "test_bitset.m"
    {
#line 245 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__equal_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__SetA1_3, mercury__test_bitset__SetA2_5);
    }
#line 245 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 245 "test_bitset.m"
      mercury__test_bitset__EqualA_7 = (MR_Integer) 1;
#line 245 "test_bitset.m"
    else
#line 245 "test_bitset.m"
      mercury__test_bitset__EqualA_7 = (MR_Integer) 0;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9320 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 49 "set_ordlist.opt"
    {
#line 49 "set_ordlist.opt"
      mercury__test_bitset__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__SetB2_6, mercury__test_bitset__SetB1_4);
    }
#line 246 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 246 "test_bitset.m"
      mercury__test_bitset__EqualB_8 = (MR_Integer) 1;
#line 246 "test_bitset.m"
    else
#line 246 "test_bitset.m"
      mercury__test_bitset__EqualB_8 = (MR_Integer) 0;
#line 247 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__EqualA_7 == mercury__test_bitset__EqualB_8);
#line 249 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 248 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__EqualA_7 == (MR_Integer) 1);
#line 249 "test_bitset.m"
    else
#line 250 "test_bitset.m"
      {
#line 250 "test_bitset.m"
        {
#line 250 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.equal\'/2", (MR_String) "failed");
        }
#line 250 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 250 "test_bitset.m"
      }
#line 244 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 244 "test_bitset.m"
  }
#line 54 "test_bitset.m"
}

#line 69 "solutions.opt"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_4(
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__test_bitset__wrapper_arg_3)
#line 69 "solutions.opt"
{
#line 69 "solutions.opt"
  {
#line 69 "solutions.opt"
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;
#line 69 "solutions.opt"
    MR_Word mercury__test_bitset__conv2_HeadVar__3_3;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), mercury__test_bitset__wrapper_arg_1, ((MR_Word) mercury__test_bitset__wrapper_arg_2), &mercury__test_bitset__conv2_HeadVar__3_3);
    }
#line 69 "solutions.opt"
    *mercury__test_bitset__wrapper_arg_3 = ((MR_Box) (mercury__test_bitset__conv2_HeadVar__3_3));
#line 69 "solutions.opt"
  }
#line 69 "solutions.opt"
}

#line 69 "solutions.opt"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__test_bitset__wrapper_arg_3)
#line 69 "solutions.opt"
{
#line 69 "solutions.opt"
  {
#line 69 "solutions.opt"
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;
#line 69 "solutions.opt"
    MR_Word mercury__test_bitset__conv0_HeadVar__3_3;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), mercury__test_bitset__wrapper_arg_1, ((MR_Word) mercury__test_bitset__wrapper_arg_2), &mercury__test_bitset__conv0_HeadVar__3_3);
    }
#line 69 "solutions.opt"
    *mercury__test_bitset__wrapper_arg_3 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__3_3));
#line 69 "solutions.opt"
  }
#line 69 "solutions.opt"
}

#line 235 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
#line 235 "test_bitset.m"
  MR_Box mercury__test_bitset__closure_arg,
#line 235 "test_bitset.m"
  MR_Box * mercury__test_bitset__wrapper_arg_1,
#line 235 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 235 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr)
#line 235 "test_bitset.m"
{
#line 235 "test_bitset.m"
  {
#line 235 "test_bitset.m"
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;

#line 235 "test_bitset.m"
    {
#line 235 "test_bitset.m"
      mercury__test_bitset__IntroducedFrom__pred__member__235__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 4))), mercury__test_bitset__wrapper_arg_1, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 235 "test_bitset.m"
      return;
    }
#line 235 "test_bitset.m"
  }
#line 235 "test_bitset.m"
}

#line 234 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
#line 234 "test_bitset.m"
  MR_Box mercury__test_bitset__closure_arg,
#line 234 "test_bitset.m"
  MR_Box * mercury__test_bitset__wrapper_arg_1,
#line 234 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 234 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr)
#line 234 "test_bitset.m"
{
#line 234 "test_bitset.m"
  {
#line 234 "test_bitset.m"
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;

#line 234 "test_bitset.m"
    {
#line 234 "test_bitset.m"
      mercury__test_bitset__IntroducedFrom__pred__member__234__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 4))), mercury__test_bitset__wrapper_arg_1, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 234 "test_bitset.m"
      return;
    }
#line 234 "test_bitset.m"
  }
#line 234 "test_bitset.m"
}

#line 52 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__member_2_p_1(
#line 52 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 52 "test_bitset.m"
  MR_Box * mercury__test_bitset__E_1,
#line 52 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 52 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 52 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr)
#line 52 "test_bitset.m"
{
#line 233 "test_bitset.m"
  {
#line 233 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_33_33;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_34_34;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_12_50;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_13_51;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_12_71;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_13_72;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__PredA_14;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__PredB_16;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__SolnsA_18;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__SolnsB_19;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__UnsortedList_5_41;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_44;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_46;
#line 233 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_54;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__UnsortedList_5_62;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_65;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_67;
#line 233 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_75;
#line 71 "solutions.opt"
    MR_Box mercury__test_bitset__conv1_UnsortedList_5_41;
#line 71 "solutions.opt"
    MR_Box mercury__test_bitset__conv3_UnsortedList_5_62;
#line 238 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_36_36;

#line 234 "test_bitset.m"
    {
#line 234 "test_bitset.m"
      mercury__test_bitset__PredA_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 234 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[0]));
#line 234 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_1));
#line 234 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 234 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 3) = ((MR_Box) (mercury__test_bitset__TypeClassInfo_for_enum_27));
#line 234 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 4) = ((MR_Box) (mercury__test_bitset__SetA_12));
#line 234 "test_bitset.m"
    }
#line 235 "test_bitset.m"
    {
#line 235 "test_bitset.m"
      mercury__test_bitset__PredB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 235 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[1]));
#line 235 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_2));
#line 235 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 235 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 3) = ((MR_Box) (mercury__test_bitset__TypeClassInfo_for_enum_27));
#line 235 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 4) = ((MR_Box) (mercury__test_bitset__SetB_13));
#line 235 "test_bitset.m"
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9603 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_33_33  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 70 "solutions.opt"
    mercury__test_bitset__V_6_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9612 "test_bitset.c"
    mercury__test_bitset__TypeCtorInfo_12_50 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__test_bitset__V_5_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_44, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[0]));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_44, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_3));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_44, 3) = ((MR_Box) (mercury__test_bitset__TypeInfo_33_33));
#line 69 "solutions.opt"
    }
#line 9628 "test_bitset.c"
    {
#line 9630 "test_bitset.c"
      mercury__test_bitset__TypeInfo_13_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9632 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_13_51, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_12_50));
#line 9634 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_13_51, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_33_33));
#line 9636 "test_bitset.c"
    }
#line 71 "solutions.opt"
    {
#line 71 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__TypeInfo_13_51, mercury__test_bitset__PredA_14, mercury__test_bitset__V_5_44, ((MR_Box) (mercury__test_bitset__V_6_46)), &mercury__test_bitset__conv1_UnsortedList_5_41);
    }
#line 71 "solutions.opt"
    mercury__test_bitset__UnsortedList_5_41 = ((MR_Word) mercury__test_bitset__conv1_UnsortedList_5_41);
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__UnsortedList_5_41, (MR_Integer) 0, &mercury__test_bitset__V_5_54);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__V_5_54, mercury__test_bitset__UnsortedList_5_41, &mercury__test_bitset__SolnsA_18);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9670 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 70 "solutions.opt"
    mercury__test_bitset__V_6_67 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9679 "test_bitset.c"
    mercury__test_bitset__TypeCtorInfo_12_71 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__test_bitset__V_5_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_65, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[0]));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_65, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_4));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_65, 3) = ((MR_Box) (mercury__test_bitset__TypeInfo_34_34));
#line 69 "solutions.opt"
    }
#line 9695 "test_bitset.c"
    {
#line 9697 "test_bitset.c"
      mercury__test_bitset__TypeInfo_13_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9699 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_13_72, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_12_71));
#line 9701 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_13_72, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_34_34));
#line 9703 "test_bitset.c"
    }
#line 71 "solutions.opt"
    {
#line 71 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__TypeInfo_13_72, mercury__test_bitset__PredB_16, mercury__test_bitset__V_5_65, ((MR_Box) (mercury__test_bitset__V_6_67)), &mercury__test_bitset__conv3_UnsortedList_5_62);
    }
#line 71 "solutions.opt"
    mercury__test_bitset__UnsortedList_5_62 = ((MR_Word) mercury__test_bitset__conv3_UnsortedList_5_62);
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__UnsortedList_5_62, (MR_Integer) 0, &mercury__test_bitset__V_5_75);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__V_5_75, mercury__test_bitset__UnsortedList_5_62, &mercury__test_bitset__SolnsB_19);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9737 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_36_36  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 238 "test_bitset.m"
    {
#line 238 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_36_36, mercury__test_bitset__SolnsA_18, mercury__test_bitset__SolnsB_19);
    }
#line 240 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 239 "test_bitset.m"
      {
#line 239 "test_bitset.m"
        mercury__tree_bitset__member_2_p_1(mercury__test_bitset__TypeClassInfo_for_enum_27, mercury__test_bitset__E_1, mercury__test_bitset__SetA_12, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 239 "test_bitset.m"
        return;
      }
#line 240 "test_bitset.m"
    else
#line 241 "test_bitset.m"
      {
#line 241 "test_bitset.m"
        {
#line 241 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (out, in)");
#line 241 "test_bitset.m"
          return;
        }
#line 241 "test_bitset.m"
        {
#line 241 "test_bitset.m"
          mercury__test_bitset__cont(mercury__test_bitset__cont_env_ptr);
#line 241 "test_bitset.m"
          return;
        }
#line 241 "test_bitset.m"
      }
#line 233 "test_bitset.m"
  }
#line 52 "test_bitset.m"
}

#line 51 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__member_2_p_0(
#line 51 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 51 "test_bitset.m"
  MR_Box mercury__test_bitset__E_1,
#line 51 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 51 "test_bitset.m"
{
#line 224 "test_bitset.m"
  {
#line 224 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 224 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 224 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 224 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_6;
#line 224 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_7;
#line 226 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_29_29;

#line 225 "test_bitset.m"
    {
#line 225 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__member_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_27, mercury__test_bitset__E_1, mercury__test_bitset__SetA_4);
    }
#line 225 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 225 "test_bitset.m"
      mercury__test_bitset__InSetA_6 = (MR_Integer) 1;
#line 225 "test_bitset.m"
    else
#line 225 "test_bitset.m"
      mercury__test_bitset__InSetA_6 = (MR_Integer) 0;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9837 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_29_29  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 226 "test_bitset.m"
    {
#line 226 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__set_ordlist__member_2_p_0(mercury__test_bitset__TypeInfo_29_29, mercury__test_bitset__E_1, mercury__test_bitset__SetB_5);
    }
#line 226 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 226 "test_bitset.m"
      mercury__test_bitset__InSetB_7 = (MR_Integer) 1;
#line 226 "test_bitset.m"
    else
#line 226 "test_bitset.m"
      mercury__test_bitset__InSetB_7 = (MR_Integer) 0;
#line 227 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == mercury__test_bitset__InSetB_7);
#line 229 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 228 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == (MR_Integer) 1);
#line 229 "test_bitset.m"
    else
#line 230 "test_bitset.m"
      {
#line 230 "test_bitset.m"
        {
#line 230 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (in, in)");
        }
#line 230 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 230 "test_bitset.m"
      }
#line 224 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 224 "test_bitset.m"
  }
#line 51 "test_bitset.m"
}

#line 49 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__contains_2_p_0(
#line 49 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_11,
#line 49 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 49 "test_bitset.m"
  MR_Box mercury__test_bitset__E_5)
#line 49 "test_bitset.m"
{
#line 213 "test_bitset.m"
  {
#line 213 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 213 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 213 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 213 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_6;
#line 213 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_7;
#line 215 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_13_13;

#line 214 "test_bitset.m"
    {
#line 214 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__contains_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__SetA_3, mercury__test_bitset__E_5);
    }
#line 214 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 214 "test_bitset.m"
      mercury__test_bitset__InSetA_6 = (MR_Integer) 1;
#line 214 "test_bitset.m"
    else
#line 214 "test_bitset.m"
      mercury__test_bitset__InSetA_6 = (MR_Integer) 0;
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9937 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_13_13  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 66 "set_ordlist.opt"
    {
#line 66 "set_ordlist.opt"
      mercury__test_bitset__succeeded = mercury__set_ordlist__member_2_p_0(mercury__test_bitset__TypeInfo_13_13, mercury__test_bitset__E_5, mercury__test_bitset__SetB_4);
    }
#line 215 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 215 "test_bitset.m"
      mercury__test_bitset__InSetB_7 = (MR_Integer) 1;
#line 215 "test_bitset.m"
    else
#line 215 "test_bitset.m"
      mercury__test_bitset__InSetB_7 = (MR_Integer) 0;
#line 216 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == mercury__test_bitset__InSetB_7);
#line 218 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 217 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == (MR_Integer) 1);
#line 218 "test_bitset.m"
    else
#line 219 "test_bitset.m"
      {
#line 219 "test_bitset.m"
        {
#line 219 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.contains\'/2", (MR_String) "failed");
        }
#line 219 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 219 "test_bitset.m"
      }
#line 213 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 213 "test_bitset.m"
  }
#line 49 "test_bitset.m"
}

#line 47 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__is_singleton_2_p_0(
#line 47 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_13,
#line 47 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 47 "test_bitset.m"
  MR_Box * mercury__test_bitset__E_5)
#line 47 "test_bitset.m"
{
#line 204 "test_bitset.m"
  {
#line 204 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 204 "test_bitset.m"
    MR_Word mercury__test_bitset__A_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "test_bitset.m"
    MR_Word mercury__test_bitset__B_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 204 "test_bitset.m"
    MR_Word mercury__test_bitset__NonEmptyA_7;
#line 204 "test_bitset.m"
    MR_Word mercury__test_bitset__NonEmptyB_9;
#line 205 "test_bitset.m"
    MR_Box mercury__test_bitset__AE_6;
#line 206 "test_bitset.m"
    MR_Box mercury__test_bitset__BE_8;
#line 206 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_21;
#line 206 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_22;
#line 207 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_17_17;

#line 205 "test_bitset.m"
    {
#line 205 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__is_singleton_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__A_3, &mercury__test_bitset__AE_6);
    }
#line 205 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 205 "test_bitset.m"
      {
#line 205 "test_bitset.m"
        mercury__test_bitset__NonEmptyA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 205 "test_bitset.m"
        MR_hl_field(MR_mktag(1), mercury__test_bitset__NonEmptyA_7, 0) = mercury__test_bitset__AE_6;
#line 205 "test_bitset.m"
      }
#line 205 "test_bitset.m"
    else
#line 205 "test_bitset.m"
      mercury__test_bitset__NonEmptyA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 46 "set_ordlist.opt"
    mercury__test_bitset__V_4_21 = (MR_Word) mercury__test_bitset__B_4;
#line 47 "set_ordlist.opt"
    mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_4_21)) == (MR_mktag((MR_Integer) 1)));
#line 47 "set_ordlist.opt"
    if (mercury__test_bitset__succeeded)
#line 47 "set_ordlist.opt"
      {
#line 47 "set_ordlist.opt"
        mercury__test_bitset__BE_8 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_21, (MR_Integer) 0));
#line 47 "set_ordlist.opt"
        mercury__test_bitset__V_5_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_21, (MR_Integer) 1)));
#line 48 "set_ordlist.opt"
        mercury__test_bitset__succeeded = (mercury__test_bitset__V_5_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 47 "set_ordlist.opt"
      }
#line 206 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 206 "test_bitset.m"
      {
#line 206 "test_bitset.m"
        mercury__test_bitset__NonEmptyB_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 206 "test_bitset.m"
        MR_hl_field(MR_mktag(1), mercury__test_bitset__NonEmptyB_9, 0) = mercury__test_bitset__BE_8;
#line 206 "test_bitset.m"
      }
#line 206 "test_bitset.m"
    else
#line 206 "test_bitset.m"
      mercury__test_bitset__NonEmptyB_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10081 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 207 "test_bitset.m"
    {
#line 207 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__maybe____Unify____maybe_1_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__NonEmptyA_7, mercury__test_bitset__NonEmptyB_9);
    }
#line 209 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 208 "test_bitset.m"
      {
#line 208 "test_bitset.m"
        mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__NonEmptyA_7)) == (MR_mktag((MR_Integer) 1)));
#line 208 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 208 "test_bitset.m"
          *mercury__test_bitset__E_5 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__NonEmptyA_7, (MR_Integer) 0));
#line 208 "test_bitset.m"
      }
#line 209 "test_bitset.m"
    else
#line 210 "test_bitset.m"
      {
#line 210 "test_bitset.m"
        {
#line 210 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_singleton\'/2", (MR_String) "failed");
        }
#line 210 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 210 "test_bitset.m"
      }
#line 204 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 204 "test_bitset.m"
  }
#line 47 "test_bitset.m"
}

#line 46 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__is_non_empty_1_p_0(
#line 46 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_9,
#line 46 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1)
#line 46 "test_bitset.m"
{
#line 195 "test_bitset.m"
  {
#line 195 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 195 "test_bitset.m"
    MR_Word mercury__test_bitset__A_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 195 "test_bitset.m"
    MR_Word mercury__test_bitset__B_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 195 "test_bitset.m"
    MR_Word mercury__test_bitset__NonEmptyA_4;
#line 195 "test_bitset.m"
    MR_Word mercury__test_bitset__NonEmptyB_5;
#line 173 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_12_12;
#line 173 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_2_16 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 173 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_3_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_5_20;
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_6_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 56 "set_ordlist.opt"
    MR_Word mercury__test_bitset__V_4_26;
#line 57 "set_ordlist.opt"
    MR_Box mercury__test_bitset__V_2_27;
#line 57 "set_ordlist.opt"
    MR_Word mercury__test_bitset__V_3_28;

#line 352 "tree_bitset.opt"
    {
#line 352 "tree_bitset.opt"
      mercury__test_bitset__V_5_20 = mercury__tree_bitset__integrity_2_f_0(mercury__test_bitset__V_6_21, mercury__test_bitset__V_2_16);
    }
#line 354 "tree_bitset.opt"
    mercury__test_bitset__succeeded = (mercury__test_bitset__V_5_20 == (MR_Integer) 0);
#line 360 "tree_bitset.opt"
    if (mercury__test_bitset__succeeded)
#line 356 "tree_bitset.opt"
      {
#line 359 "tree_bitset.opt"
        {
#line 359 "tree_bitset.opt"
          mercury__require__unexpected_3_p_0((MR_String) "tree_bitset", (MR_String) "function \140tree_bitset.wrap_tree_bitset\'/1", (MR_String) "integrity failed");
        }
#line 356 "tree_bitset.opt"
      }
#line 360 "tree_bitset.opt"
    else
#line 361 "tree_bitset.opt"
      {
#line 361 "tree_bitset.opt"
      }
#line 364 "tree_bitset.opt"
    mercury__test_bitset__V_12_12 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 173 "tree_bitset.opt"
    {
#line 173 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_9, mercury__test_bitset__A_2, mercury__test_bitset__V_12_12);
    }
#line 175 "tree_bitset.opt"
    mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
#line 196 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 196 "test_bitset.m"
      mercury__test_bitset__NonEmptyA_4 = (MR_Integer) 1;
#line 196 "test_bitset.m"
    else
#line 196 "test_bitset.m"
      mercury__test_bitset__NonEmptyA_4 = (MR_Integer) 0;
#line 56 "set_ordlist.opt"
    mercury__test_bitset__V_4_26 = (MR_Word) mercury__test_bitset__B_3;
#line 57 "set_ordlist.opt"
    mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_4_26)) == (MR_mktag((MR_Integer) 1)));
#line 57 "set_ordlist.opt"
    if (mercury__test_bitset__succeeded)
#line 57 "set_ordlist.opt"
      {
#line 57 "set_ordlist.opt"
        mercury__test_bitset__V_2_27 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_26, (MR_Integer) 0));
#line 57 "set_ordlist.opt"
        mercury__test_bitset__V_3_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_26, (MR_Integer) 1)));
#line 197 "test_bitset.m"
        mercury__test_bitset__NonEmptyB_5 = (MR_Integer) 1;
#line 57 "set_ordlist.opt"
      }
#line 57 "set_ordlist.opt"
    else
#line 197 "test_bitset.m"
      mercury__test_bitset__NonEmptyB_5 = (MR_Integer) 0;
#line 198 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__NonEmptyA_4 == mercury__test_bitset__NonEmptyB_5);
#line 200 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 199 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__NonEmptyA_4 == (MR_Integer) 1);
#line 200 "test_bitset.m"
    else
#line 201 "test_bitset.m"
      {
#line 201 "test_bitset.m"
        {
#line 201 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_non_empty\'/1", (MR_String) "failed");
        }
#line 201 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 201 "test_bitset.m"
      }
#line 195 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 195 "test_bitset.m"
  }
#line 46 "test_bitset.m"
}

#line 45 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset__is_empty_1_p_0(
#line 45 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_9,
#line 45 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1)
#line 45 "test_bitset.m"
{
#line 186 "test_bitset.m"
  {
#line 186 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 186 "test_bitset.m"
    MR_Word mercury__test_bitset__A_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "test_bitset.m"
    MR_Word mercury__test_bitset__B_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 186 "test_bitset.m"
    MR_Word mercury__test_bitset__EmptyA_4;
#line 186 "test_bitset.m"
    MR_Word mercury__test_bitset__EmptyB_5;
#line 173 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_11_11;
#line 173 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 173 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_5_19;
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_6_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 52 "set_ordlist.opt"
    MR_Word mercury__test_bitset__V_2_25;

#line 352 "tree_bitset.opt"
    {
#line 352 "tree_bitset.opt"
      mercury__test_bitset__V_5_19 = mercury__tree_bitset__integrity_2_f_0(mercury__test_bitset__V_6_20, mercury__test_bitset__V_2_15);
    }
#line 354 "tree_bitset.opt"
    mercury__test_bitset__succeeded = (mercury__test_bitset__V_5_19 == (MR_Integer) 0);
#line 360 "tree_bitset.opt"
    if (mercury__test_bitset__succeeded)
#line 356 "tree_bitset.opt"
      {
#line 359 "tree_bitset.opt"
        {
#line 359 "tree_bitset.opt"
          mercury__require__unexpected_3_p_0((MR_String) "tree_bitset", (MR_String) "function \140tree_bitset.wrap_tree_bitset\'/1", (MR_String) "integrity failed");
        }
#line 356 "tree_bitset.opt"
      }
#line 360 "tree_bitset.opt"
    else
#line 361 "tree_bitset.opt"
      {
#line 361 "tree_bitset.opt"
      }
#line 364 "tree_bitset.opt"
    mercury__test_bitset__V_11_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 173 "tree_bitset.opt"
    {
#line 173 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_9, mercury__test_bitset__A_2, mercury__test_bitset__V_11_11);
    }
#line 187 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 187 "test_bitset.m"
      mercury__test_bitset__EmptyA_4 = (MR_Integer) 1;
#line 187 "test_bitset.m"
    else
#line 187 "test_bitset.m"
      mercury__test_bitset__EmptyA_4 = (MR_Integer) 0;
#line 52 "set_ordlist.opt"
    mercury__test_bitset__V_2_25 = (MR_Word) mercury__test_bitset__B_3;
#line 53 "set_ordlist.opt"
    mercury__test_bitset__succeeded = (mercury__test_bitset__V_2_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 188 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 188 "test_bitset.m"
      mercury__test_bitset__EmptyB_5 = (MR_Integer) 1;
#line 188 "test_bitset.m"
    else
#line 188 "test_bitset.m"
      mercury__test_bitset__EmptyB_5 = (MR_Integer) 0;
#line 189 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__EmptyA_4 == mercury__test_bitset__EmptyB_5);
#line 191 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 190 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__EmptyA_4 == (MR_Integer) 1);
#line 191 "test_bitset.m"
    else
#line 192 "test_bitset.m"
      {
#line 192 "test_bitset.m"
        {
#line 192 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_empty\'/1", (MR_String) "failed");
        }
#line 192 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 192 "test_bitset.m"
      }
#line 186 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 186 "test_bitset.m"
  }
#line 45 "test_bitset.m"
}

#line 40 "test_bitset.m"
MR_Integer MR_CALL 
mercury__test_bitset__count_1_f_0(
#line 40 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_11,
#line 40 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1)
#line 40 "test_bitset.m"
{
#line 175 "test_bitset.m"
  {
#line 175 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 175 "test_bitset.m"
    MR_Integer mercury__test_bitset__Count_5;
#line 175 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_13_13;
#line 175 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 175 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 175 "test_bitset.m"
    MR_Integer mercury__test_bitset__CountA_6;
#line 175 "test_bitset.m"
    MR_Integer mercury__test_bitset__CountB_7;
#line 175 "test_bitset.m"
    MR_Word mercury__test_bitset__List_8_55 = (MR_Word) mercury__test_bitset__SetA_3;
#line 175 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_3_65;

#line 283 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__List_8_55)) == (MR_mktag((MR_Integer) 1))))
#line 284 "tree_bitset.opt"
      {
#line 284 "tree_bitset.opt"
        MR_Word mercury__test_bitset__InteriorNodes_11_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_55, (MR_Integer) 1)));
#line 284 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_58 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_8_55, (MR_Integer) 0)));

#line 285 "tree_bitset.opt"
        {
#line 285 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__InteriorNodes_11_59, (MR_Integer) 0, &mercury__test_bitset__CountA_6);
        }
#line 284 "tree_bitset.opt"
      }
#line 283 "tree_bitset.opt"
    else
#line 281 "tree_bitset.opt"
      {
#line 281 "tree_bitset.opt"
        MR_Word mercury__test_bitset__LeafNodes_9_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__List_8_55, (MR_Integer) 0)));

#line 282 "tree_bitset.opt"
        {
#line 282 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_52_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__LeafNodes_9_57, (MR_Integer) 0, &mercury__test_bitset__CountA_6);
        }
#line 281 "tree_bitset.opt"
      }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__count_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10436 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_13_13  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 127 "set_ordlist.opt"
    mercury__test_bitset__Set_3_65 = (MR_Word) mercury__test_bitset__SetB_4;
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__test_bitset__TypeInfo_13_13, mercury__test_bitset__Set_3_65, (MR_Integer) 0, &mercury__test_bitset__CountB_7);
    }
#line 178 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__CountA_6 == mercury__test_bitset__CountB_7);
#line 180 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 179 "test_bitset.m"
      mercury__test_bitset__Count_5 = mercury__test_bitset__CountA_6;
#line 180 "test_bitset.m"
    else
#line 181 "test_bitset.m"
      {
#line 181 "test_bitset.m"
        {
#line 181 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.count\'/1", (MR_String) "failed");
        }
#line 181 "test_bitset.m"
      }
#line 175 "test_bitset.m"
    return mercury__test_bitset__Count_5;
#line 175 "test_bitset.m"
  }
#line 40 "test_bitset.m"
}

#line 38 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__make_singleton_set_2_p_0(
#line 38 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
#line 38 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__1_1,
#line 38 "test_bitset.m"
  MR_Box mercury__test_bitset__A_3)
#line 38 "test_bitset.m"
{
#line 173 "test_bitset.m"
  {
#line 173 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 173 "test_bitset.m"
    {
#line 173 "test_bitset.m"
      *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__make_singleton_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 173 "test_bitset.m"
  }
#line 38 "test_bitset.m"
}

#line 37 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__singleton_set_2_p_0(
#line 37 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_4,
#line 37 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__1_1,
#line 37 "test_bitset.m"
  MR_Box mercury__test_bitset__A_3)
#line 37 "test_bitset.m"
{
#line 172 "test_bitset.m"
  {
#line 172 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 172 "test_bitset.m"
    {
#line 172 "test_bitset.m"
      *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__singleton_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 172 "test_bitset.m"
  }
#line 37 "test_bitset.m"
}

#line 36 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__init_1_p_0(
#line 36 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_2,
#line 36 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__1_1)
#line 36 "test_bitset.m"
{
#line 171 "test_bitset.m"
  {
#line 171 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 171 "test_bitset.m"
    {
#line 171 "test_bitset.m"
      *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__init_0_f_0(mercury__test_bitset__TypeInfo_for_T_2);
    }
#line 171 "test_bitset.m"
  }
#line 36 "test_bitset.m"
}

#line 34 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__make_singleton_set_1_f_0(
#line 34 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
#line 34 "test_bitset.m"
  MR_Box mercury__test_bitset__A_3)
#line 34 "test_bitset.m"
{
#line 168 "test_bitset.m"
  {
#line 168 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 168 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;
#line 168 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_4;
#line 168 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_5;
#line 168 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_11;
#line 168 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_15;
#line 168 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_16;
#line 168 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_28;
#line 168 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_29;
#line 133 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_13;
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_5_19;
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_6_20;
#line 133 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_8;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10603 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_13  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 169 "tree_bitset.opt"
    mercury__test_bitset__V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 168 "tree_bitset.opt"
    mercury__test_bitset__V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 353 "tree_bitset.opt"
    mercury__test_bitset__V_6_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "tree_bitset.opt"
    {
#line 352 "tree_bitset.opt"
      mercury__test_bitset__V_5_19 = mercury__tree_bitset__integrity_2_f_0(mercury__test_bitset__V_6_20, mercury__test_bitset__V_2_15);
    }
#line 354 "tree_bitset.opt"
    mercury__test_bitset__succeeded = (mercury__test_bitset__V_5_19 == (MR_Integer) 0);
#line 360 "tree_bitset.opt"
    if (mercury__test_bitset__succeeded)
#line 356 "tree_bitset.opt"
      {
#line 359 "tree_bitset.opt"
        {
#line 359 "tree_bitset.opt"
          mercury__require__unexpected_3_p_0((MR_String) "tree_bitset", (MR_String) "function \140tree_bitset.wrap_tree_bitset\'/1", (MR_String) "integrity failed");
        }
#line 356 "tree_bitset.opt"
      }
#line 360 "tree_bitset.opt"
    else
#line 361 "tree_bitset.opt"
      {
#line 361 "tree_bitset.opt"
      }
#line 364 "tree_bitset.opt"
    mercury__test_bitset__V_4_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 198 "tree_bitset.opt"
    {
#line 198 "tree_bitset.opt"
      mercury__test_bitset__V_4_4 = mercury__tree_bitset__insert_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__V_4_11, mercury__test_bitset__A_3);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10662 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_8  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 43 "set_ordlist.opt"
    mercury__test_bitset__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 42 "set_ordlist.opt"
    {
#line 42 "set_ordlist.opt"
      mercury__test_bitset__V_4_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 0) = mercury__test_bitset__A_3;
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 1) = ((MR_Box) (mercury__test_bitset__V_5_29));
#line 42 "set_ordlist.opt"
    }
#line 41 "set_ordlist.opt"
    mercury__test_bitset__V_5_5 = (MR_Word) mercury__test_bitset__V_4_28;
#line 168 "test_bitset.m"
    {
#line 168 "test_bitset.m"
      mercury__test_bitset__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 168 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 0) = ((MR_Box) (mercury__test_bitset__V_4_4));
#line 168 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 1) = ((MR_Box) (mercury__test_bitset__V_5_5));
#line 168 "test_bitset.m"
    }
#line 168 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 168 "test_bitset.m"
  }
#line 34 "test_bitset.m"
}

#line 33 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__singleton_set_1_f_0(
#line 33 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_6,
#line 33 "test_bitset.m"
  MR_Box mercury__test_bitset__A_3)
#line 33 "test_bitset.m"
{
#line 165 "test_bitset.m"
  {
#line 165 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 165 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;
#line 165 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_4;
#line 165 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_5;
#line 165 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_11;
#line 165 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_15;
#line 165 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_16;
#line 165 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_28;
#line 165 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_29;
#line 133 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_13;
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_5_19;
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_6_20;
#line 133 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_8;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10753 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_13  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 169 "tree_bitset.opt"
    mercury__test_bitset__V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 168 "tree_bitset.opt"
    mercury__test_bitset__V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 353 "tree_bitset.opt"
    mercury__test_bitset__V_6_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "tree_bitset.opt"
    {
#line 352 "tree_bitset.opt"
      mercury__test_bitset__V_5_19 = mercury__tree_bitset__integrity_2_f_0(mercury__test_bitset__V_6_20, mercury__test_bitset__V_2_15);
    }
#line 354 "tree_bitset.opt"
    mercury__test_bitset__succeeded = (mercury__test_bitset__V_5_19 == (MR_Integer) 0);
#line 360 "tree_bitset.opt"
    if (mercury__test_bitset__succeeded)
#line 356 "tree_bitset.opt"
      {
#line 359 "tree_bitset.opt"
        {
#line 359 "tree_bitset.opt"
          mercury__require__unexpected_3_p_0((MR_String) "tree_bitset", (MR_String) "function \140tree_bitset.wrap_tree_bitset\'/1", (MR_String) "integrity failed");
        }
#line 356 "tree_bitset.opt"
      }
#line 360 "tree_bitset.opt"
    else
#line 361 "tree_bitset.opt"
      {
#line 361 "tree_bitset.opt"
      }
#line 364 "tree_bitset.opt"
    mercury__test_bitset__V_4_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 198 "tree_bitset.opt"
    {
#line 198 "tree_bitset.opt"
      mercury__test_bitset__V_4_4 = mercury__tree_bitset__insert_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__V_4_11, mercury__test_bitset__A_3);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10812 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_8  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 43 "set_ordlist.opt"
    mercury__test_bitset__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 42 "set_ordlist.opt"
    {
#line 42 "set_ordlist.opt"
      mercury__test_bitset__V_4_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 0) = mercury__test_bitset__A_3;
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 1) = ((MR_Box) (mercury__test_bitset__V_5_29));
#line 42 "set_ordlist.opt"
    }
#line 41 "set_ordlist.opt"
    mercury__test_bitset__V_5_5 = (MR_Word) mercury__test_bitset__V_4_28;
#line 165 "test_bitset.m"
    {
#line 165 "test_bitset.m"
      mercury__test_bitset__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 165 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 0) = ((MR_Box) (mercury__test_bitset__V_4_4));
#line 165 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 1) = ((MR_Box) (mercury__test_bitset__V_5_5));
#line 165 "test_bitset.m"
    }
#line 165 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 165 "test_bitset.m"
  }
#line 33 "test_bitset.m"
}

#line 32 "test_bitset.m"
MR_Word MR_CALL 
mercury__test_bitset__init_0_f_0(
#line 32 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_4)
#line 32 "test_bitset.m"
{
#line 163 "test_bitset.m"
  {
#line 163 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__1_1;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_2;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_3;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_6 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_17;
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_5_10;
#line 352 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_6_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 352 "tree_bitset.opt"
    {
#line 352 "tree_bitset.opt"
      mercury__test_bitset__V_5_10 = mercury__tree_bitset__integrity_2_f_0(mercury__test_bitset__V_6_11, mercury__test_bitset__V_2_6);
    }
#line 354 "tree_bitset.opt"
    mercury__test_bitset__succeeded = (mercury__test_bitset__V_5_10 == (MR_Integer) 0);
#line 360 "tree_bitset.opt"
    if (mercury__test_bitset__succeeded)
#line 356 "tree_bitset.opt"
      {
#line 359 "tree_bitset.opt"
        {
#line 359 "tree_bitset.opt"
          mercury__require__unexpected_3_p_0((MR_String) "tree_bitset", (MR_String) "function \140tree_bitset.wrap_tree_bitset\'/1", (MR_String) "integrity failed");
        }
#line 356 "tree_bitset.opt"
      }
#line 360 "tree_bitset.opt"
    else
#line 361 "tree_bitset.opt"
      {
#line 361 "tree_bitset.opt"
      }
#line 364 "tree_bitset.opt"
    mercury__test_bitset__V_2_2 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 23 "set_ordlist.opt"
    mercury__test_bitset__V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 22 "set_ordlist.opt"
    mercury__test_bitset__V_3_3 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 163 "test_bitset.m"
    mercury__test_bitset__HeadVar__1_1 = (MR_Word) &mercury__test_bitset_scalar_common_5[0];
#line 163 "test_bitset.m"
    return mercury__test_bitset__HeadVar__1_1;
#line 163 "test_bitset.m"
  }
#line 32 "test_bitset.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module test_bitset. */
