/*
** Automatically generated from `test_bitset.m'
** by the Mercury compiler,
** version DEV
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




#line 95 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1;

#line 98 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 101 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1;

#line 104 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 107 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_0[2];

#line 110 "test_bitset.c"
static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0;

#line 113 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_1[3];

#line 116 "test_bitset.c"
static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1;

#line 119 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_2[4];

#line 122 "test_bitset.c"
static const MR_DuFunctorDesc mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2;

#line 125 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0[1];

#line 128 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1[1];

#line 131 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2[1];

#line 134 "test_bitset.c"
static const MR_DuPtagLayout mercury__test_bitset__test_bitset__du_ptag_ordered_bitset_error_1[3];

#line 137 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1[3];

#line 140 "test_bitset.c"
static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1[3];

#line 143 "test_bitset.c"
static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
#line 146 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 148 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 150 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3);

#line 153 "test_bitset.c"
static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
#line 156 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 158 "test_bitset.c"
  MR_Box * mercury__test_bitset__wrapper_arg_2,
#line 160 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3,
#line 162 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_4);

#line 165 "test_bitset.c"
static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
#line 168 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 170 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 172 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3);

#line 175 "test_bitset.c"
static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
#line 178 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 180 "test_bitset.c"
  MR_Box * mercury__test_bitset__wrapper_arg_2,
#line 182 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3,
#line 184 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_4);

#line 141 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_35_35,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_8_8,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_10_10,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_11_11,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_12_12,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_19_13,
#line 141 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__V_20_14);

#line 141 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_8_8,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_10_10,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_11_11,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_12_12,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_19_13,
#line 141 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__V_20_14);

#line 53 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 53 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__HeadVar__3_3,
#line 53 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__HeadVar__4_4);

#line 66 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 66 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__HeadVar__3_3,
#line 66 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__HeadVar__4_4);

#line 141 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_30_30,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_8_8,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_10_10,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_11_11,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_12_12,
#line 141 "tree_bitset.opt"
  MR_Box mercury__test_bitset__V_19_13,
#line 141 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__V_20_14);

#line 102 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
#line 102 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_29_29,
#line 102 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 102 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 102 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__3_3,
#line 102 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__HeadVar__4_4);

#line 111 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
#line 111 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_29_29,
#line 111 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 111 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 111 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__3_3,
#line 111 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__HeadVar__4_4);

#line 53 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_24_24,
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 53 "tree_bitset.opt"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 53 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__HeadVar__4_4);

#line 66 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_24_24,
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 66 "tree_bitset.opt"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 66 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__HeadVar__4_4);

#line 84 "solutions.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__closure_arg,
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 84 "solutions.opt"
  MR_Box * mercury__test_bitset__wrapper_arg_3);

#line 29 "solutions.int"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
#line 29 "solutions.int"
  MR_Word mercury__test_bitset__TypeInfo_for_T_7,
#line 29 "solutions.int"
  MR_Word mercury__test_bitset__V_3_3,
#line 29 "solutions.int"
  MR_Word * mercury__test_bitset__V_4_4);

#line 126 "list.int"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__test_bitset__V_18_18,
#line 126 "list.int"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 126 "list.int"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 126 "list.int"
  MR_Box * mercury__test_bitset__HeadVar__4_4);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 233 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__233__1_3_p_0(
#line 233 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 233 "test_bitset.m"
  MR_Word mercury__test_bitset__SetB_13,
#line 233 "test_bitset.m"
  MR_Box * mercury__test_bitset__HeadVar__3_21,
#line 233 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 233 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr);

#line 232 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__232__1_3_p_0(
#line 232 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 232 "test_bitset.m"
  MR_Word mercury__test_bitset__SetA_12,
#line 232 "test_bitset.m"
  MR_Box * mercury__test_bitset__HeadVar__3_20,
#line 232 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 232 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr);

#line 598 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
#line 598 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_24,
#line 598 "test_bitset.m"
  MR_String mercury__test_bitset__Op_6,
#line 598 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterA_7,
#line 598 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterB_8,
#line 598 "test_bitset.m"
  MR_Word mercury__test_bitset__Tester_9,
#line 598 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_10);

#line 437 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
#line 437 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_21,
#line 437 "test_bitset.m"
  MR_String mercury__test_bitset__Op_1,
#line 437 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 437 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__3_3,
#line 437 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__4_4);

#line 84 "solutions.opt"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__closure_arg,
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 84 "solutions.opt"
  MR_Box * mercury__test_bitset__wrapper_arg_3);

#line 233 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
#line 233 "test_bitset.m"
  MR_Box mercury__test_bitset__closure_arg,
#line 233 "test_bitset.m"
  MR_Box * mercury__test_bitset__wrapper_arg_1,
#line 233 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 233 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr);

#line 232 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
#line 232 "test_bitset.m"
  MR_Box mercury__test_bitset__closure_arg,
#line 232 "test_bitset.m"
  MR_Box * mercury__test_bitset__wrapper_arg_1,
#line 232 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 232 "test_bitset.m"
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
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 699 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 707 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 715 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__test_bitset__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 723 "test_bitset.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__test_bitset__tree_bitset__pti_tree_bitset_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__test_bitset__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

#line 732 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 738 "test_bitset.c"
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

#line 753 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_1[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 760 "test_bitset.c"
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

#line 775 "test_bitset.c"
static const MR_PseudoTypeInfo mercury__test_bitset__test_bitset__field_types_bitset_error_1_2[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__test_bitset__pair__pti_pair_2__pseudo_tree_bitset__pti_tree_bitset_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

#line 783 "test_bitset.c"
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

#line 798 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_0[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0
};

#line 803 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_1[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1
};

#line 808 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_stag_ordered_bitset_error_1_2[1] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2
};

#line 813 "test_bitset.c"
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

#line 832 "test_bitset.c"
static const MR_DuFunctorDescPtr mercury__test_bitset__test_bitset__du_name_ordered_bitset_error_1[3] = {
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_1,
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_2,
  &mercury__test_bitset__test_bitset__du_functor_desc_bitset_error_1_0
};

#line 839 "test_bitset.c"
static const MR_Integer mercury__test_bitset__test_bitset__functor_number_map_bitset_error_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 846 "test_bitset.c"
const MR_TypeCtorInfo_Struct mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 863 "test_bitset.c"
const MR_TypeCtorInfo_Struct mercury__test_bitset__test_bitset__type_ctor_info_test_bitset_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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

#line 880 "test_bitset.c"
static MR_bool MR_CALL 
mercury__test_bitset____Unify____bitset_error_1_0_10001(
#line 883 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 885 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 887 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3)
#line 889 "test_bitset.c"
{
#line 891 "test_bitset.c"
  {
#line 893 "test_bitset.c"
    MR_bool mercury__test_bitset__succeeded;

#line 896 "test_bitset.c"
    {
#line 898 "test_bitset.c"
      mercury__test_bitset__succeeded = mercury__test_bitset____Unify____bitset_error_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), ((MR_Word) mercury__test_bitset__wrapper_arg_2), ((MR_Word) mercury__test_bitset__wrapper_arg_3));
    }
#line 901 "test_bitset.c"
    return mercury__test_bitset__succeeded;
#line 903 "test_bitset.c"
  }
#line 905 "test_bitset.c"
}

#line 908 "test_bitset.c"
static void MR_CALL 
mercury__test_bitset____Compare____bitset_error_1_0_10001(
#line 911 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 913 "test_bitset.c"
  MR_Box * mercury__test_bitset__wrapper_arg_2,
#line 915 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3,
#line 917 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_4)
#line 919 "test_bitset.c"
{
#line 921 "test_bitset.c"
  {
#line 923 "test_bitset.c"
    MR_Word mercury__test_bitset__conv0_HeadVar__1_1;

#line 926 "test_bitset.c"
    {
#line 928 "test_bitset.c"
      mercury__test_bitset____Compare____bitset_error_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), &mercury__test_bitset__conv0_HeadVar__1_1, ((MR_Word) mercury__test_bitset__wrapper_arg_3), ((MR_Word) mercury__test_bitset__wrapper_arg_4));
    }
#line 931 "test_bitset.c"
    *mercury__test_bitset__wrapper_arg_2 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__1_1));
#line 933 "test_bitset.c"
  }
#line 935 "test_bitset.c"
}

#line 938 "test_bitset.c"
static MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0_10001(
#line 941 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 943 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 945 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3)
#line 947 "test_bitset.c"
{
#line 949 "test_bitset.c"
  {
#line 951 "test_bitset.c"
    MR_bool mercury__test_bitset__succeeded;

#line 954 "test_bitset.c"
    {
#line 956 "test_bitset.c"
      mercury__test_bitset__succeeded = mercury__test_bitset____Unify____test_bitset_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), ((MR_Word) mercury__test_bitset__wrapper_arg_2), ((MR_Word) mercury__test_bitset__wrapper_arg_3));
    }
#line 959 "test_bitset.c"
    return mercury__test_bitset__succeeded;
#line 961 "test_bitset.c"
  }
#line 963 "test_bitset.c"
}

#line 966 "test_bitset.c"
static void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0_10001(
#line 969 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 971 "test_bitset.c"
  MR_Box * mercury__test_bitset__wrapper_arg_2,
#line 973 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_3,
#line 975 "test_bitset.c"
  MR_Box mercury__test_bitset__wrapper_arg_4)
#line 977 "test_bitset.c"
{
#line 979 "test_bitset.c"
  {
#line 981 "test_bitset.c"
    MR_Word mercury__test_bitset__conv0_HeadVar__1_1;

#line 984 "test_bitset.c"
    {
#line 986 "test_bitset.c"
      mercury__test_bitset____Compare____test_bitset_1_0(((MR_Word) mercury__test_bitset__wrapper_arg_1), &mercury__test_bitset__conv0_HeadVar__1_1, ((MR_Word) mercury__test_bitset__wrapper_arg_3), ((MR_Word) mercury__test_bitset__wrapper_arg_4));
    }
#line 989 "test_bitset.c"
    *mercury__test_bitset__wrapper_arg_2 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__1_1));
#line 991 "test_bitset.c"
  }
#line 993 "test_bitset.c"
}

#line 141 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_35_35,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_8_8,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_10_10,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_11_11,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_12_12,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_19_13,
#line 141 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__V_20_14)
#line 141 "tree_bitset.opt"
{
#line 586 "tree_bitset.opt"
  while (MR_TRUE)
#line 586 "tree_bitset.opt"
    {
#line 586 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 586 "tree_bitset.opt"
      {
#line 586 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded = (mercury__test_bitset__V_11_11 == (MR_Integer) 0);

#line 586 "tree_bitset.opt"
        if (mercury__test_bitset__succeeded)
#line 585 "tree_bitset.opt"
          *mercury__test_bitset__V_20_14 = mercury__test_bitset__V_19_13;
#line 586 "tree_bitset.opt"
        else
#line 592 "tree_bitset.opt"
          {
#line 588 "tree_bitset.opt"
            mercury__test_bitset__succeeded = (mercury__test_bitset__V_12_12 == (MR_Integer) 1);
#line 592 "tree_bitset.opt"
            if (mercury__test_bitset__succeeded)
#line 590 "tree_bitset.opt"
              {
#line 590 "tree_bitset.opt"
                MR_Box mercury__test_bitset__V_14_15;

#line 590 "tree_bitset.opt"
                {
#line 590 "tree_bitset.opt"
                  mercury__test_bitset__V_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_10_10);
                }
#line 54 "list.opt"
                {
#line 54 "list.opt"
                  MR_Word base;
#line 54 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 54 "list.opt"
                  *mercury__test_bitset__V_20_14 = base;
#line 54 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__test_bitset__V_14_15;
#line 54 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__test_bitset__V_19_13));
#line 54 "list.opt"
                }
#line 590 "tree_bitset.opt"
              }
#line 592 "tree_bitset.opt"
            else
#line 593 "tree_bitset.opt"
              {
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_15_16 = (mercury__test_bitset__V_12_12 >> (MR_Integer) 1);
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_16_18;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_17_19;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_18_20;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_23_21;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_4_73 = ((MR_Integer) -1 << mercury__test_bitset__V_15_16);

#line 489 "tree_bitset.opt"
                mercury__test_bitset__V_16_18 = ~(mercury__test_bitset__V_4_73);
#line 596 "tree_bitset.opt"
                mercury__test_bitset__V_17_19 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_11_11);
#line 598 "tree_bitset.opt"
                mercury__test_bitset__V_23_21 = (mercury__test_bitset__V_11_11 >> mercury__test_bitset__V_15_16);
#line 597 "tree_bitset.opt"
                mercury__test_bitset__V_18_20 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_23_21);
#line 604 "tree_bitset.opt"
#line 604 "tree_bitset.opt"
                switch (mercury__test_bitset__V_8_8) {
#line 604 "tree_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 604 "tree_bitset.opt"
                  case (MR_Integer) 1:
#line 605 "tree_bitset.opt"
                    {
#line 605 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__V_24_24 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
#line 605 "tree_bitset.opt"
                      MR_Word mercury__test_bitset__V_25_25;

#line 607 "tree_bitset.opt"
                      {
#line 607 "tree_bitset.opt"
                        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_35_35, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_24_24, mercury__test_bitset__V_18_20, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_25_25);
                      }
#line 608 "tree_bitset.opt"
                      /* direct tailcall eliminated */
#line 608 "tree_bitset.opt"
                      {
#line 608 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_11__tmp_copy_11 = mercury__test_bitset__V_17_19;
#line 608 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_12__tmp_copy_12 = mercury__test_bitset__V_15_16;
#line 608 "tree_bitset.opt"
                        MR_Word mercury__test_bitset__V_19__tmp_copy_13 = mercury__test_bitset__V_25_25;

#line 608 "tree_bitset.opt"
                        mercury__test_bitset__V_19_13 = mercury__test_bitset__V_19__tmp_copy_13;
#line 608 "tree_bitset.opt"
                        mercury__test_bitset__V_12_12 = mercury__test_bitset__V_12__tmp_copy_12;
#line 608 "tree_bitset.opt"
                        mercury__test_bitset__V_11_11 = mercury__test_bitset__V_11__tmp_copy_11;
#line 608 "tree_bitset.opt"
                      }
#line 608 "tree_bitset.opt"
                      continue;
#line 605 "tree_bitset.opt"
                    }
#line 604 "tree_bitset.opt"
                    break;
#line 604 "tree_bitset.opt"
                  case (MR_Integer) 0:
#line 600 "tree_bitset.opt"
                    {
#line 600 "tree_bitset.opt"
                      MR_Word mercury__test_bitset__V_27_22;
#line 600 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__V_28_23;

#line 601 "tree_bitset.opt"
                      {
#line 601 "tree_bitset.opt"
                        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_35_35, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_10_10, mercury__test_bitset__V_17_19, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_27_22);
                      }
#line 602 "tree_bitset.opt"
                      mercury__test_bitset__V_28_23 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
#line 603 "tree_bitset.opt"
                      /* direct tailcall eliminated */
#line 603 "tree_bitset.opt"
                      {
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_10__tmp_copy_10 = mercury__test_bitset__V_28_23;
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_11__tmp_copy_11 = mercury__test_bitset__V_18_20;
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_12__tmp_copy_12 = mercury__test_bitset__V_15_16;
#line 603 "tree_bitset.opt"
                        MR_Word mercury__test_bitset__V_19__tmp_copy_13 = mercury__test_bitset__V_27_22;

#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_19_13 = mercury__test_bitset__V_19__tmp_copy_13;
#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_12_12 = mercury__test_bitset__V_12__tmp_copy_12;
#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_11_11 = mercury__test_bitset__V_11__tmp_copy_11;
#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_10_10 = mercury__test_bitset__V_10__tmp_copy_10;
#line 603 "tree_bitset.opt"
                      }
#line 603 "tree_bitset.opt"
                      continue;
#line 600 "tree_bitset.opt"
                    }
#line 604 "tree_bitset.opt"
                    break;
#line 604 "tree_bitset.opt"
                }
#line 593 "tree_bitset.opt"
              }
#line 592 "tree_bitset.opt"
          }
#line 586 "tree_bitset.opt"
      }
#line 586 "tree_bitset.opt"
      break;
#line 586 "tree_bitset.opt"
    }
#line 141 "tree_bitset.opt"
}

#line 141 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_8_8,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_10_10,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_11_11,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_12_12,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_19_13,
#line 141 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__V_20_14)
#line 141 "tree_bitset.opt"
{
#line 586 "tree_bitset.opt"
  while (MR_TRUE)
#line 586 "tree_bitset.opt"
    {
#line 586 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 586 "tree_bitset.opt"
      {
#line 586 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded = (mercury__test_bitset__V_11_11 == (MR_Integer) 0);

#line 586 "tree_bitset.opt"
        if (mercury__test_bitset__succeeded)
#line 585 "tree_bitset.opt"
          *mercury__test_bitset__V_20_14 = mercury__test_bitset__V_19_13;
#line 586 "tree_bitset.opt"
        else
#line 592 "tree_bitset.opt"
          {
#line 588 "tree_bitset.opt"
            mercury__test_bitset__succeeded = (mercury__test_bitset__V_12_12 == (MR_Integer) 1);
#line 592 "tree_bitset.opt"
            if (mercury__test_bitset__succeeded)
#line 590 "tree_bitset.opt"
              {
#line 590 "tree_bitset.opt"
                MR_Box mercury__test_bitset__V_14_15;

#line 590 "tree_bitset.opt"
                {
#line 590 "tree_bitset.opt"
                  mercury__test_bitset__V_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_10_10);
                }
#line 271 "tree_bitset.opt"
                *mercury__test_bitset__V_20_14 = (mercury__test_bitset__V_19_13 + (MR_Integer) 1);
#line 590 "tree_bitset.opt"
              }
#line 592 "tree_bitset.opt"
            else
#line 593 "tree_bitset.opt"
              {
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_15_16 = (mercury__test_bitset__V_12_12 >> (MR_Integer) 1);
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_16_18;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_17_19;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_18_20;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_23_21;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_4_72 = ((MR_Integer) -1 << mercury__test_bitset__V_15_16);

#line 489 "tree_bitset.opt"
                mercury__test_bitset__V_16_18 = ~(mercury__test_bitset__V_4_72);
#line 596 "tree_bitset.opt"
                mercury__test_bitset__V_17_19 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_11_11);
#line 598 "tree_bitset.opt"
                mercury__test_bitset__V_23_21 = (mercury__test_bitset__V_11_11 >> mercury__test_bitset__V_15_16);
#line 597 "tree_bitset.opt"
                mercury__test_bitset__V_18_20 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_23_21);
#line 604 "tree_bitset.opt"
#line 604 "tree_bitset.opt"
                switch (mercury__test_bitset__V_8_8) {
#line 604 "tree_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 604 "tree_bitset.opt"
                  case (MR_Integer) 1:
#line 605 "tree_bitset.opt"
                    {
#line 605 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__V_24_24 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
#line 605 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__V_25_25;

#line 607 "tree_bitset.opt"
                      {
#line 607 "tree_bitset.opt"
                        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_24_24, mercury__test_bitset__V_18_20, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_25_25);
                      }
#line 608 "tree_bitset.opt"
                      /* direct tailcall eliminated */
#line 608 "tree_bitset.opt"
                      {
#line 608 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_11__tmp_copy_11 = mercury__test_bitset__V_17_19;
#line 608 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_12__tmp_copy_12 = mercury__test_bitset__V_15_16;
#line 608 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_19__tmp_copy_13 = mercury__test_bitset__V_25_25;

#line 608 "tree_bitset.opt"
                        mercury__test_bitset__V_19_13 = mercury__test_bitset__V_19__tmp_copy_13;
#line 608 "tree_bitset.opt"
                        mercury__test_bitset__V_12_12 = mercury__test_bitset__V_12__tmp_copy_12;
#line 608 "tree_bitset.opt"
                        mercury__test_bitset__V_11_11 = mercury__test_bitset__V_11__tmp_copy_11;
#line 608 "tree_bitset.opt"
                      }
#line 608 "tree_bitset.opt"
                      continue;
#line 605 "tree_bitset.opt"
                    }
#line 604 "tree_bitset.opt"
                    break;
#line 604 "tree_bitset.opt"
                  case (MR_Integer) 0:
#line 600 "tree_bitset.opt"
                    {
#line 600 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__V_27_22;
#line 600 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__V_28_23;

#line 601 "tree_bitset.opt"
                      {
#line 601 "tree_bitset.opt"
                        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_10_10, mercury__test_bitset__V_17_19, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_27_22);
                      }
#line 602 "tree_bitset.opt"
                      mercury__test_bitset__V_28_23 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
#line 603 "tree_bitset.opt"
                      /* direct tailcall eliminated */
#line 603 "tree_bitset.opt"
                      {
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_10__tmp_copy_10 = mercury__test_bitset__V_28_23;
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_11__tmp_copy_11 = mercury__test_bitset__V_18_20;
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_12__tmp_copy_12 = mercury__test_bitset__V_15_16;
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_19__tmp_copy_13 = mercury__test_bitset__V_27_22;

#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_19_13 = mercury__test_bitset__V_19__tmp_copy_13;
#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_12_12 = mercury__test_bitset__V_12__tmp_copy_12;
#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_11_11 = mercury__test_bitset__V_11__tmp_copy_11;
#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_10_10 = mercury__test_bitset__V_10__tmp_copy_10;
#line 603 "tree_bitset.opt"
                      }
#line 603 "tree_bitset.opt"
                      continue;
#line 600 "tree_bitset.opt"
                    }
#line 604 "tree_bitset.opt"
                    break;
#line 604 "tree_bitset.opt"
                }
#line 593 "tree_bitset.opt"
              }
#line 592 "tree_bitset.opt"
          }
#line 586 "tree_bitset.opt"
      }
#line 586 "tree_bitset.opt"
      break;
#line 586 "tree_bitset.opt"
    }
#line 141 "tree_bitset.opt"
}

#line 53 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 53 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__HeadVar__3_3,
#line 53 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__HeadVar__4_4)
#line 53 "tree_bitset.opt"
{
#line 493 "tree_bitset.opt"
  while (MR_TRUE)
#line 493 "tree_bitset.opt"
    {
#line 493 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 493 "tree_bitset.opt"
      {
#line 493 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 493 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 493 "tree_bitset.opt"
        else
#line 495 "tree_bitset.opt"
          {
#line 495 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 495 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 495 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_13_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 2)));
#line 495 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_20_17;
#line 496 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
#line 496 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_23_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));

#line 500 "tree_bitset.opt"
            if (((MR_tag((MR_Word) mercury__test_bitset__V_13_15)) == (MR_mktag((MR_Integer) 1))))
#line 501 "tree_bitset.opt"
              {
#line 501 "tree_bitset.opt"
                MR_Word mercury__test_bitset__V_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_15, (MR_Integer) 1)));
#line 501 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_15, (MR_Integer) 0)));

#line 502 "tree_bitset.opt"
                {
#line 502 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_16_19, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_20_17);
                }
#line 501 "tree_bitset.opt"
              }
#line 500 "tree_bitset.opt"
            else
#line 498 "tree_bitset.opt"
              {
#line 498 "tree_bitset.opt"
                MR_Word mercury__test_bitset__V_14_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_15, (MR_Integer) 0)));

#line 499 "tree_bitset.opt"
                {
#line 499 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_14_16, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_20_17);
                }
#line 498 "tree_bitset.opt"
              }
#line 504 "tree_bitset.opt"
            /* direct tailcall eliminated */
#line 504 "tree_bitset.opt"
            {
#line 504 "tree_bitset.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__V_11_10;
#line 504 "tree_bitset.opt"
              MR_Integer mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__V_20_17;

#line 504 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 504 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 504 "tree_bitset.opt"
            }
#line 504 "tree_bitset.opt"
            continue;
#line 495 "tree_bitset.opt"
          }
#line 493 "tree_bitset.opt"
      }
#line 493 "tree_bitset.opt"
      break;
#line 493 "tree_bitset.opt"
    }
#line 53 "tree_bitset.opt"
}

#line 66 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 66 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__HeadVar__3_3,
#line 66 "tree_bitset.opt"
  MR_Integer * mercury__test_bitset__HeadVar__4_4)
#line 66 "tree_bitset.opt"
{
#line 505 "tree_bitset.opt"
  while (MR_TRUE)
#line 505 "tree_bitset.opt"
    {
#line 505 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 505 "tree_bitset.opt"
      {
#line 505 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 505 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 505 "tree_bitset.opt"
        else
#line 507 "tree_bitset.opt"
          {
#line 507 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 507 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 507 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
#line 507 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));
#line 507 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_18_18;
#line 507 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_19_19;

#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 1539 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_18_18  = Bits;
#line 132 "int.opt"
}
#line 512 "tree_bitset.opt"
            {
#line 512 "tree_bitset.opt"
              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_53_95_95_91_49_44_32_50_44_32_51_44_32_54_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__test_bitset__V_22_16, mercury__test_bitset__V_17_17, mercury__test_bitset__V_18_18, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_19_19);
            }
#line 513 "tree_bitset.opt"
            /* direct tailcall eliminated */
#line 513 "tree_bitset.opt"
            {
#line 513 "tree_bitset.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__V_11_10;
#line 513 "tree_bitset.opt"
              MR_Integer mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__V_19_19;

#line 513 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 513 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 513 "tree_bitset.opt"
            }
#line 513 "tree_bitset.opt"
            continue;
#line 507 "tree_bitset.opt"
          }
#line 505 "tree_bitset.opt"
      }
#line 505 "tree_bitset.opt"
      break;
#line 505 "tree_bitset.opt"
    }
#line 66 "tree_bitset.opt"
}

#line 141 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_30_30,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_26,
#line 141 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_8_8,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_10_10,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_11_11,
#line 141 "tree_bitset.opt"
  MR_Integer mercury__test_bitset__V_12_12,
#line 141 "tree_bitset.opt"
  MR_Box mercury__test_bitset__V_19_13,
#line 141 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__V_20_14)
#line 141 "tree_bitset.opt"
{
#line 586 "tree_bitset.opt"
  while (MR_TRUE)
#line 586 "tree_bitset.opt"
    {
#line 586 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 586 "tree_bitset.opt"
      {
#line 586 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded = (mercury__test_bitset__V_11_11 == (MR_Integer) 0);

#line 586 "tree_bitset.opt"
        if (mercury__test_bitset__succeeded)
#line 585 "tree_bitset.opt"
          *mercury__test_bitset__V_20_14 = mercury__test_bitset__V_19_13;
#line 586 "tree_bitset.opt"
        else
#line 592 "tree_bitset.opt"
          {
#line 588 "tree_bitset.opt"
            mercury__test_bitset__succeeded = (mercury__test_bitset__V_12_12 == (MR_Integer) 1);
#line 592 "tree_bitset.opt"
            if (mercury__test_bitset__succeeded)
#line 590 "tree_bitset.opt"
              {
#line 590 "tree_bitset.opt"
                MR_Box mercury__test_bitset__V_14_15;
#line 282 "tree_bitset.opt"
                MR_Box MR_CALL (* mercury__test_bitset__func_0)(MR_Box, MR_Box, MR_Box);

#line 590 "tree_bitset.opt"
                {
#line 590 "tree_bitset.opt"
                  mercury__test_bitset__V_14_15 = mercury__tree_bitset__index_to_enum_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_10_10);
                }
#line 282 "tree_bitset.opt"
                mercury__test_bitset__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_30_30, (MR_Integer) 1)));
#line 282 "tree_bitset.opt"
                {
#line 282 "tree_bitset.opt"
                  *mercury__test_bitset__V_20_14 = mercury__test_bitset__func_0(((MR_Box) mercury__test_bitset__V_30_30), mercury__test_bitset__V_14_15, mercury__test_bitset__V_19_13);
                }
#line 590 "tree_bitset.opt"
              }
#line 592 "tree_bitset.opt"
            else
#line 593 "tree_bitset.opt"
              {
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_15_16 = (mercury__test_bitset__V_12_12 >> (MR_Integer) 1);
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_16_18;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_17_19;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_18_20;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_23_21;
#line 593 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_4_52 = ((MR_Integer) -1 << mercury__test_bitset__V_15_16);

#line 489 "tree_bitset.opt"
                mercury__test_bitset__V_16_18 = ~(mercury__test_bitset__V_4_52);
#line 596 "tree_bitset.opt"
                mercury__test_bitset__V_17_19 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_11_11);
#line 598 "tree_bitset.opt"
                mercury__test_bitset__V_23_21 = (mercury__test_bitset__V_11_11 >> mercury__test_bitset__V_15_16);
#line 597 "tree_bitset.opt"
                mercury__test_bitset__V_18_20 = (mercury__test_bitset__V_16_18 & mercury__test_bitset__V_23_21);
#line 604 "tree_bitset.opt"
#line 604 "tree_bitset.opt"
                switch (mercury__test_bitset__V_8_8) {
#line 604 "tree_bitset.opt"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 604 "tree_bitset.opt"
                  case (MR_Integer) 1:
#line 605 "tree_bitset.opt"
                    {
#line 605 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__V_24_24 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
#line 605 "tree_bitset.opt"
                      MR_Box mercury__test_bitset__V_25_25;

#line 607 "tree_bitset.opt"
                      {
#line 607 "tree_bitset.opt"
                        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_30_30, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_24_24, mercury__test_bitset__V_18_20, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_25_25);
                      }
#line 608 "tree_bitset.opt"
                      /* direct tailcall eliminated */
#line 608 "tree_bitset.opt"
                      {
#line 608 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_11__tmp_copy_11 = mercury__test_bitset__V_17_19;
#line 608 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_12__tmp_copy_12 = mercury__test_bitset__V_15_16;
#line 608 "tree_bitset.opt"
                        MR_Box mercury__test_bitset__V_19__tmp_copy_13 = mercury__test_bitset__V_25_25;

#line 608 "tree_bitset.opt"
                        mercury__test_bitset__V_19_13 = mercury__test_bitset__V_19__tmp_copy_13;
#line 608 "tree_bitset.opt"
                        mercury__test_bitset__V_12_12 = mercury__test_bitset__V_12__tmp_copy_12;
#line 608 "tree_bitset.opt"
                        mercury__test_bitset__V_11_11 = mercury__test_bitset__V_11__tmp_copy_11;
#line 608 "tree_bitset.opt"
                      }
#line 608 "tree_bitset.opt"
                      continue;
#line 605 "tree_bitset.opt"
                    }
#line 604 "tree_bitset.opt"
                    break;
#line 604 "tree_bitset.opt"
                  case (MR_Integer) 0:
#line 600 "tree_bitset.opt"
                    {
#line 600 "tree_bitset.opt"
                      MR_Box mercury__test_bitset__V_27_22;
#line 600 "tree_bitset.opt"
                      MR_Integer mercury__test_bitset__V_28_23;

#line 601 "tree_bitset.opt"
                      {
#line 601 "tree_bitset.opt"
                        mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_30_30, mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__V_8_8, mercury__test_bitset__V_10_10, mercury__test_bitset__V_17_19, mercury__test_bitset__V_15_16, mercury__test_bitset__V_19_13, &mercury__test_bitset__V_27_22);
                      }
#line 602 "tree_bitset.opt"
                      mercury__test_bitset__V_28_23 = (mercury__test_bitset__V_10_10 + mercury__test_bitset__V_15_16);
#line 603 "tree_bitset.opt"
                      /* direct tailcall eliminated */
#line 603 "tree_bitset.opt"
                      {
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_10__tmp_copy_10 = mercury__test_bitset__V_28_23;
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_11__tmp_copy_11 = mercury__test_bitset__V_18_20;
#line 603 "tree_bitset.opt"
                        MR_Integer mercury__test_bitset__V_12__tmp_copy_12 = mercury__test_bitset__V_15_16;
#line 603 "tree_bitset.opt"
                        MR_Box mercury__test_bitset__V_19__tmp_copy_13 = mercury__test_bitset__V_27_22;

#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_19_13 = mercury__test_bitset__V_19__tmp_copy_13;
#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_12_12 = mercury__test_bitset__V_12__tmp_copy_12;
#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_11_11 = mercury__test_bitset__V_11__tmp_copy_11;
#line 603 "tree_bitset.opt"
                        mercury__test_bitset__V_10_10 = mercury__test_bitset__V_10__tmp_copy_10;
#line 603 "tree_bitset.opt"
                      }
#line 603 "tree_bitset.opt"
                      continue;
#line 600 "tree_bitset.opt"
                    }
#line 604 "tree_bitset.opt"
                    break;
#line 604 "tree_bitset.opt"
                }
#line 593 "tree_bitset.opt"
              }
#line 592 "tree_bitset.opt"
          }
#line 586 "tree_bitset.opt"
      }
#line 586 "tree_bitset.opt"
      break;
#line 586 "tree_bitset.opt"
    }
#line 141 "tree_bitset.opt"
}

#line 102 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
#line 102 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_29_29,
#line 102 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 102 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 102 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__3_3,
#line 102 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__HeadVar__4_4)
#line 102 "tree_bitset.opt"
{
#line 537 "tree_bitset.opt"
  while (MR_TRUE)
#line 537 "tree_bitset.opt"
    {
#line 537 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 537 "tree_bitset.opt"
      {
#line 537 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 537 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 537 "tree_bitset.opt"
        else
#line 539 "tree_bitset.opt"
          {
#line 539 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 539 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 539 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_19_13;
#line 539 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_13_16;
#line 541 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_14;
#line 541 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_23_15;

#line 540 "tree_bitset.opt"
            {
#line 540 "tree_bitset.opt"
              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_29_29, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_11_10, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_19_13);
            }
#line 541 "tree_bitset.opt"
            mercury__test_bitset__V_22_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
#line 541 "tree_bitset.opt"
            mercury__test_bitset__V_23_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));
#line 541 "tree_bitset.opt"
            mercury__test_bitset__V_13_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 2)));
#line 545 "tree_bitset.opt"
            if (((MR_tag((MR_Word) mercury__test_bitset__V_13_16)) == (MR_mktag((MR_Integer) 1))))
#line 546 "tree_bitset.opt"
              {
#line 546 "tree_bitset.opt"
                MR_Word mercury__test_bitset__V_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_16, (MR_Integer) 1)));
#line 546 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_16, (MR_Integer) 0)));

#line 547 "tree_bitset.opt"
                /* direct tailcall eliminated */
#line 547 "tree_bitset.opt"
                {
#line 547 "tree_bitset.opt"
                  MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__V_16_19;
#line 547 "tree_bitset.opt"
                  MR_Word mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__V_19_13;

#line 547 "tree_bitset.opt"
                  mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 547 "tree_bitset.opt"
                  mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 547 "tree_bitset.opt"
                }
#line 547 "tree_bitset.opt"
                continue;
#line 546 "tree_bitset.opt"
              }
#line 545 "tree_bitset.opt"
            else
#line 543 "tree_bitset.opt"
              {
#line 543 "tree_bitset.opt"
                MR_Word mercury__test_bitset__V_14_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_16, (MR_Integer) 0)));

#line 544 "tree_bitset.opt"
                {
#line 544 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_29_29, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_14_17, mercury__test_bitset__V_19_13, mercury__test_bitset__HeadVar__4_4);
#line 544 "tree_bitset.opt"
                  return;
                }
#line 543 "tree_bitset.opt"
              }
#line 539 "tree_bitset.opt"
          }
#line 537 "tree_bitset.opt"
      }
#line 537 "tree_bitset.opt"
      break;
#line 537 "tree_bitset.opt"
    }
#line 102 "tree_bitset.opt"
}

#line 111 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(
#line 111 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_29_29,
#line 111 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 111 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 111 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__3_3,
#line 111 "tree_bitset.opt"
  MR_Word * mercury__test_bitset__HeadVar__4_4)
#line 111 "tree_bitset.opt"
{
#line 549 "tree_bitset.opt"
  {
#line 549 "tree_bitset.opt"
    MR_bool mercury__test_bitset__succeeded;

#line 549 "tree_bitset.opt"
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 549 "tree_bitset.opt"
      *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 549 "tree_bitset.opt"
    else
#line 551 "tree_bitset.opt"
      {
#line 551 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 551 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 551 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_15_13;
#line 551 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_22_17;
#line 551 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_18_18;
#line 551 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_19_19;

#line 552 "tree_bitset.opt"
        {
#line 552 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_29_29, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_11_10, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_15_13);
        }
#line 554 "tree_bitset.opt"
        mercury__test_bitset__V_22_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
#line 554 "tree_bitset.opt"
        mercury__test_bitset__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));
#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 1947 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_19_19  = Bits;
#line 132 "int.opt"
}
#line 557 "tree_bitset.opt"
        {
#line 557 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_49_48_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_29_29, mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_Integer) 1, mercury__test_bitset__V_22_17, mercury__test_bitset__V_18_18, mercury__test_bitset__V_19_19, mercury__test_bitset__V_15_13, mercury__test_bitset__HeadVar__4_4);
#line 557 "tree_bitset.opt"
          return;
        }
#line 551 "tree_bitset.opt"
      }
#line 549 "tree_bitset.opt"
  }
#line 111 "tree_bitset.opt"
}

#line 53 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_24_24,
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 53 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 53 "tree_bitset.opt"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 53 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__HeadVar__4_4)
#line 53 "tree_bitset.opt"
{
#line 493 "tree_bitset.opt"
  while (MR_TRUE)
#line 493 "tree_bitset.opt"
    {
#line 493 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 493 "tree_bitset.opt"
      {
#line 493 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 493 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 493 "tree_bitset.opt"
        else
#line 495 "tree_bitset.opt"
          {
#line 495 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 495 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 495 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_13_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 2)));
#line 495 "tree_bitset.opt"
            MR_Box mercury__test_bitset__V_20_17;
#line 496 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
#line 496 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_23_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));

#line 500 "tree_bitset.opt"
            if (((MR_tag((MR_Word) mercury__test_bitset__V_13_15)) == (MR_mktag((MR_Integer) 1))))
#line 501 "tree_bitset.opt"
              {
#line 501 "tree_bitset.opt"
                MR_Word mercury__test_bitset__V_16_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_15, (MR_Integer) 1)));
#line 501 "tree_bitset.opt"
                MR_Integer mercury__test_bitset__V_15_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_13_15, (MR_Integer) 0)));

#line 502 "tree_bitset.opt"
                {
#line 502 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_24_24, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_16_19, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_20_17);
                }
#line 501 "tree_bitset.opt"
              }
#line 500 "tree_bitset.opt"
            else
#line 498 "tree_bitset.opt"
              {
#line 498 "tree_bitset.opt"
                MR_Word mercury__test_bitset__V_14_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_15, (MR_Integer) 0)));

#line 499 "tree_bitset.opt"
                {
#line 499 "tree_bitset.opt"
                  mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__V_24_24, mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__V_14_16, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_20_17);
                }
#line 498 "tree_bitset.opt"
              }
#line 504 "tree_bitset.opt"
            /* direct tailcall eliminated */
#line 504 "tree_bitset.opt"
            {
#line 504 "tree_bitset.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__V_11_10;
#line 504 "tree_bitset.opt"
              MR_Box mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__V_20_17;

#line 504 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 504 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 504 "tree_bitset.opt"
            }
#line 504 "tree_bitset.opt"
            continue;
#line 495 "tree_bitset.opt"
          }
#line 493 "tree_bitset.opt"
      }
#line 493 "tree_bitset.opt"
      break;
#line 493 "tree_bitset.opt"
    }
#line 53 "tree_bitset.opt"
}

#line 66 "tree_bitset.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__V_24_24,
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_20,
#line 66 "tree_bitset.opt"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 66 "tree_bitset.opt"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 66 "tree_bitset.opt"
  MR_Box * mercury__test_bitset__HeadVar__4_4)
#line 66 "tree_bitset.opt"
{
#line 505 "tree_bitset.opt"
  while (MR_TRUE)
#line 505 "tree_bitset.opt"
    {
#line 505 "tree_bitset.opt"
      /* tailcall optimized into a loop */
#line 505 "tree_bitset.opt"
      {
#line 505 "tree_bitset.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 505 "tree_bitset.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "tree_bitset.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 505 "tree_bitset.opt"
        else
#line 507 "tree_bitset.opt"
          {
#line 507 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 507 "tree_bitset.opt"
            MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 507 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_22_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 0)));
#line 507 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_10_9, (MR_Integer) 1)));
#line 507 "tree_bitset.opt"
            MR_Integer mercury__test_bitset__V_18_18;
#line 507 "tree_bitset.opt"
            MR_Box mercury__test_bitset__V_19_19;

#line 132 "int.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0

	MR_Integer Bits;

		{
#line 132 "int.opt"

    Bits = ML_BITS_PER_INT;

#line 2131 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_18_18  = Bits;
#line 132 "int.opt"
}
#line 512 "tree_bitset.opt"
            {
#line 512 "tree_bitset.opt"
              mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_98_105_116_115_95_95_104_111_51_49_95_95_91_49_44_32_50_44_32_52_44_32_55_93_95_48_7_p_in__tree_bitset_0(mercury__test_bitset__V_24_24, mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_Integer) 0, mercury__test_bitset__V_22_16, mercury__test_bitset__V_17_17, mercury__test_bitset__V_18_18, mercury__test_bitset__HeadVar__3_3, &mercury__test_bitset__V_19_19);
            }
#line 513 "tree_bitset.opt"
            /* direct tailcall eliminated */
#line 513 "tree_bitset.opt"
            {
#line 513 "tree_bitset.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__V_11_10;
#line 513 "tree_bitset.opt"
              MR_Box mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__V_19_19;

#line 513 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 513 "tree_bitset.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 513 "tree_bitset.opt"
            }
#line 513 "tree_bitset.opt"
            continue;
#line 507 "tree_bitset.opt"
          }
#line 505 "tree_bitset.opt"
      }
#line 505 "tree_bitset.opt"
      break;
#line 505 "tree_bitset.opt"
    }
#line 66 "tree_bitset.opt"
}

#line 84 "solutions.opt"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1(
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__closure_arg,
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 84 "solutions.opt"
  MR_Box * mercury__test_bitset__wrapper_arg_3)
#line 84 "solutions.opt"
{
#line 84 "solutions.opt"
  {
#line 84 "solutions.opt"
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;
#line 84 "solutions.opt"
    MR_Word mercury__test_bitset__conv0_HeadVar__3_3;

#line 84 "solutions.opt"
    {
#line 84 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), mercury__test_bitset__wrapper_arg_1, ((MR_Word) mercury__test_bitset__wrapper_arg_2), &mercury__test_bitset__conv0_HeadVar__3_3);
    }
#line 84 "solutions.opt"
    *mercury__test_bitset__wrapper_arg_3 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__3_3));
#line 84 "solutions.opt"
  }
#line 84 "solutions.opt"
}

#line 29 "solutions.int"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(
#line 29 "solutions.int"
  MR_Word mercury__test_bitset__TypeInfo_for_T_7,
#line 29 "solutions.int"
  MR_Word mercury__test_bitset__V_3_3,
#line 29 "solutions.int"
  MR_Word * mercury__test_bitset__V_4_4)
#line 29 "solutions.int"
{
#line 41 "solutions.opt"
  {
#line 41 "solutions.opt"
    MR_bool mercury__test_bitset__succeeded;
#line 41 "solutions.opt"
    MR_Word mercury__test_bitset__TypeCtorInfo_13_19;
#line 41 "solutions.opt"
    MR_Word mercury__test_bitset__TypeInfo_14_20;
#line 41 "solutions.opt"
    MR_Word mercury__test_bitset__V_5_5;
#line 41 "solutions.opt"
    MR_Word mercury__test_bitset__V_6_12;
#line 41 "solutions.opt"
    MR_Word mercury__test_bitset__V_7_14;
#line 41 "solutions.opt"
    MR_Integer mercury__test_bitset__V_5_34;
#line 86 "solutions.opt"
    MR_Box mercury__test_bitset__conv1_V_5_5;

#line 84 "solutions.opt"
    {
#line 84 "solutions.opt"
      mercury__test_bitset__V_6_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 84 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_12, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[0]));
#line 84 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_12, 1) = ((MR_Box) (mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0_1));
#line 84 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 84 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_12, 3) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_7));
#line 84 "solutions.opt"
    }
#line 85 "solutions.opt"
    mercury__test_bitset__V_7_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2249 "test_bitset.c"
    mercury__test_bitset__TypeCtorInfo_13_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 2251 "test_bitset.c"
    {
#line 2253 "test_bitset.c"
      mercury__test_bitset__TypeInfo_14_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2255 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_14_20, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_13_19));
#line 2257 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_14_20, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_7));
#line 2259 "test_bitset.c"
    }
#line 86 "solutions.opt"
    {
#line 86 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__test_bitset__TypeInfo_for_T_7, mercury__test_bitset__TypeInfo_14_20, mercury__test_bitset__V_3_3, mercury__test_bitset__V_6_12, ((MR_Box) (mercury__test_bitset__V_7_14)), &mercury__test_bitset__conv1_V_5_5);
    }
#line 86 "solutions.opt"
    mercury__test_bitset__V_5_5 = ((MR_Word) mercury__test_bitset__conv1_V_5_5);
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_for_T_7, mercury__test_bitset__V_5_5, (MR_Integer) 0, &mercury__test_bitset__V_5_34);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_for_T_7, mercury__test_bitset__V_5_34, mercury__test_bitset__V_5_5, mercury__test_bitset__V_4_4);
#line 123 "list.opt"
      return;
    }
#line 41 "solutions.opt"
  }
#line 29 "solutions.int"
}

#line 126 "list.int"
static void MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__test_bitset__V_18_18,
#line 126 "list.int"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 126 "list.int"
  MR_Box mercury__test_bitset__HeadVar__3_3,
#line 126 "list.int"
  MR_Box * mercury__test_bitset__HeadVar__4_4)
#line 126 "list.int"
{
#line 394 "list.opt"
  while (MR_TRUE)
#line 394 "list.opt"
    {
#line 394 "list.opt"
      /* tailcall optimized into a loop */
#line 394 "list.opt"
      {
#line 394 "list.opt"
        MR_bool mercury__test_bitset__succeeded;

#line 394 "list.opt"
        if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "list.opt"
          *mercury__test_bitset__HeadVar__4_4 = mercury__test_bitset__HeadVar__3_3;
#line 394 "list.opt"
        else
#line 396 "list.opt"
          {
#line 396 "list.opt"
            MR_Box mercury__test_bitset__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0));
#line 396 "list.opt"
            MR_Word mercury__test_bitset__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "list.opt"
            MR_Box mercury__test_bitset__V_15_13;
#line 404 "list.opt"
            MR_Box MR_CALL (* mercury__test_bitset__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_18_18, (MR_Integer) 1)));

#line 404 "list.opt"
            {
#line 404 "list.opt"
              mercury__test_bitset__V_15_13 = mercury__test_bitset__func_0(((MR_Box) mercury__test_bitset__V_18_18), mercury__test_bitset__V_10_9, mercury__test_bitset__HeadVar__3_3);
            }
#line 398 "list.opt"
            /* direct tailcall eliminated */
#line 398 "list.opt"
            {
#line 398 "list.opt"
              MR_Word mercury__test_bitset__HeadVar__2__tmp_copy_2 = mercury__test_bitset__V_11_10;
#line 398 "list.opt"
              MR_Box mercury__test_bitset__HeadVar__3__tmp_copy_3 = mercury__test_bitset__V_15_13;

#line 398 "list.opt"
              mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__HeadVar__3__tmp_copy_3;
#line 398 "list.opt"
              mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__HeadVar__2__tmp_copy_2;
#line 398 "list.opt"
            }
#line 398 "list.opt"
            continue;
#line 396 "list.opt"
          }
#line 394 "list.opt"
      }
#line 394 "list.opt"
      break;
#line 394 "list.opt"
    }
#line 126 "list.int"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__test_bitset__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 233 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__233__1_3_p_0(
#line 233 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 233 "test_bitset.m"
  MR_Word mercury__test_bitset__SetB_13,
#line 233 "test_bitset.m"
  MR_Box * mercury__test_bitset__HeadVar__3_21,
#line 233 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 233 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr)
#line 233 "test_bitset.m"
{
#line 233 "test_bitset.m"
  {
#line 233 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 233 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_31_31;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__IntroducedFrom__pred__member__233__1_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2413 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_31_31  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 233 "test_bitset.m"
    {
#line 233 "test_bitset.m"
      mercury__set_ordlist__member_2_p_1(mercury__test_bitset__TypeInfo_31_31, mercury__test_bitset__HeadVar__3_21, mercury__test_bitset__SetB_13, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 233 "test_bitset.m"
      return;
    }
#line 233 "test_bitset.m"
  }
#line 233 "test_bitset.m"
}

#line 232 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__IntroducedFrom__pred__member__232__1_3_p_0(
#line 232 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_27,
#line 232 "test_bitset.m"
  MR_Word mercury__test_bitset__SetA_12,
#line 232 "test_bitset.m"
  MR_Box * mercury__test_bitset__HeadVar__3_20,
#line 232 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 232 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr)
#line 232 "test_bitset.m"
{
#line 232 "test_bitset.m"
  {
#line 232 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 232 "test_bitset.m"
    {
#line 232 "test_bitset.m"
      mercury__tree_bitset__member_2_p_1(mercury__test_bitset__TypeClassInfo_for_enum_27, mercury__test_bitset__HeadVar__3_20, mercury__test_bitset__SetA_12, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 232 "test_bitset.m"
      return;
    }
#line 232 "test_bitset.m"
  }
#line 232 "test_bitset.m"
}

#line 157 "test_bitset.m"
void MR_CALL 
mercury__test_bitset____Compare____test_bitset_1_0(
#line 157 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_6,
#line 157 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__1_1,
#line 157 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 157 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__3_3)
#line 157 "test_bitset.m"
{
#line 157 "test_bitset.m"
  {
#line 157 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_7_7 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_8_8;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_9_9;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_10_10;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__Cast_HeadVar1_4 = mercury__test_bitset__HeadVar__2_2;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__Cast_HeadVar2_5 = mercury__test_bitset__HeadVar__3_3;

#line 2494 "test_bitset.c"
    {
#line 2496 "test_bitset.c"
      mercury__test_bitset__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2498 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_8_8, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_7_7));
#line 2500 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_8_8, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_6));
#line 2502 "test_bitset.c"
    }
#line 2504 "test_bitset.c"
    mercury__test_bitset__TypeCtorInfo_9_9 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2506 "test_bitset.c"
    {
#line 2508 "test_bitset.c"
      mercury__test_bitset__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2510 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_10_10, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_9_9));
#line 2512 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_10_10, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_6));
#line 2514 "test_bitset.c"
    }
#line 157 "test_bitset.m"
    {
#line 157 "test_bitset.m"
      mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_8_8, mercury__test_bitset__TypeInfo_10_10, mercury__test_bitset__HeadVar__1_1, (MR_Word) mercury__test_bitset__Cast_HeadVar1_4, (MR_Word) mercury__test_bitset__Cast_HeadVar2_5);
#line 157 "test_bitset.m"
      return;
    }
#line 157 "test_bitset.m"
  }
#line 157 "test_bitset.m"
}

#line 157 "test_bitset.m"
MR_bool MR_CALL 
mercury__test_bitset____Unify____test_bitset_1_0(
#line 157 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeInfo_for_T_5,
#line 157 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__1_1,
#line 157 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2)
#line 157 "test_bitset.m"
{
#line 157 "test_bitset.m"
  {
#line 157 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_6_6 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_7_7;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_8_8 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_9_9;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__Cast_HeadVar1_3 = mercury__test_bitset__HeadVar__1_1;
#line 157 "test_bitset.m"
    MR_Word mercury__test_bitset__Cast_HeadVar2_4 = mercury__test_bitset__HeadVar__2_2;

#line 2556 "test_bitset.c"
    {
#line 2558 "test_bitset.c"
      mercury__test_bitset__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2560 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_7_7, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_6_6));
#line 2562 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_7_7, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_5));
#line 2564 "test_bitset.c"
    }
#line 2566 "test_bitset.c"
    {
#line 2568 "test_bitset.c"
      mercury__test_bitset__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2570 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_9_9, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_8_8));
#line 2572 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_9_9, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_5));
#line 2574 "test_bitset.c"
    }
#line 157 "test_bitset.m"
    {
#line 157 "test_bitset.m"
      return mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_7_7, mercury__test_bitset__TypeInfo_9_9, (MR_Word) mercury__test_bitset__Cast_HeadVar1_3, (MR_Word) mercury__test_bitset__Cast_HeadVar2_4);
    }
#line 157 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 157 "test_bitset.m"
  }
#line 157 "test_bitset.m"
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
#line 2614 "test_bitset.c"
      *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 0;
#line 24 "test_bitset.m"
    else
#line 24 "test_bitset.m"
#line 24 "test_bitset.m"
      switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__2_2)) {
#line 24 "test_bitset.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 24 "test_bitset.m"
        case (MR_Integer) 0:
#line 24 "test_bitset.m"
          {
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 24 "test_bitset.m"
            MR_String mercury__test_bitset__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));

#line 24 "test_bitset.m"
#line 24 "test_bitset.m"
            switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) {
#line 24 "test_bitset.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 24 "test_bitset.m"
              case (MR_Integer) 0:
#line 24 "test_bitset.m"
                {
#line 24 "test_bitset.m"
                  MR_String mercury__test_bitset__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 0)));
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__3_3, (MR_Integer) 1)));
#line 24 "test_bitset.m"
                  MR_Word mercury__test_bitset__V_8_8;
#line 24 "test_bitset.m"
                  MR_Integer mercury__test_bitset__V_7_128;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__test_bitset__V_114_114 ;
	S2 =  mercury__test_bitset__V_6_6 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2665 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_7_128  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_128 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__test_bitset__succeeded)
#line 72 "private_builtin.opt"
                    mercury__test_bitset__V_8_8 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_128 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__test_bitset__succeeded)
#line 77 "private_builtin.opt"
                        mercury__test_bitset__V_8_8 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        mercury__test_bitset__V_8_8 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 2694 "test_bitset.c"
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

#line 2715 "test_bitset.c"
                      {
#line 2717 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2719 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_101_101, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_100_100));
#line 2721 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_101_101, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2723 "test_bitset.c"
                      }
#line 2725 "test_bitset.c"
                      mercury__test_bitset__TypeCtorInfo_102_102 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2727 "test_bitset.c"
                      {
#line 2729 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2731 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_103_103, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_102_102));
#line 2733 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_103_103, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2735 "test_bitset.c"
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
                break;
#line 24 "test_bitset.m"
              case (MR_Integer) 1:
#line 2752 "test_bitset.c"
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 1;
#line 24 "test_bitset.m"
                break;
#line 24 "test_bitset.m"
              case (MR_Integer) 2:
#line 2758 "test_bitset.c"
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 1;
#line 24 "test_bitset.m"
                break;
#line 24 "test_bitset.m"
            }
#line 24 "test_bitset.m"
          }
#line 24 "test_bitset.m"
          break;
#line 24 "test_bitset.m"
        case (MR_Integer) 1:
#line 24 "test_bitset.m"
          {
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 2)));
#line 24 "test_bitset.m"
            MR_Word mercury__test_bitset__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 24 "test_bitset.m"
            MR_String mercury__test_bitset__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));

#line 24 "test_bitset.m"
#line 24 "test_bitset.m"
            switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) {
#line 24 "test_bitset.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 24 "test_bitset.m"
              case (MR_Integer) 0:
#line 2786 "test_bitset.c"
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 2;
#line 24 "test_bitset.m"
                break;
#line 24 "test_bitset.m"
              case (MR_Integer) 1:
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
                  MR_Integer mercury__test_bitset__V_7_118;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__test_bitset__V_108_108 ;
	S2 =  mercury__test_bitset__V_28_28 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 2820 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_7_118  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_118 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__test_bitset__succeeded)
#line 72 "private_builtin.opt"
                    mercury__test_bitset__V_31_31 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_118 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__test_bitset__succeeded)
#line 77 "private_builtin.opt"
                        mercury__test_bitset__V_31_31 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        mercury__test_bitset__V_31_31 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 2849 "test_bitset.c"
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

#line 2872 "test_bitset.c"
                      {
#line 2874 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2876 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_88_88, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_87_87));
#line 2878 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_88_88, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2880 "test_bitset.c"
                      }
#line 2882 "test_bitset.c"
                      {
#line 2884 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2886 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_90_90, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_89_89));
#line 2888 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_90_90, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2890 "test_bitset.c"
                      }
#line 24 "test_bitset.m"
                      {
#line 24 "test_bitset.m"
                        mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_88_88, mercury__test_bitset__TypeInfo_90_90, &mercury__test_bitset__V_32_32, (MR_Word) mercury__test_bitset__V_107_107, (MR_Word) mercury__test_bitset__V_29_29);
                      }
#line 2897 "test_bitset.c"
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

#line 2918 "test_bitset.c"
                          {
#line 2920 "test_bitset.c"
                            mercury__test_bitset__TypeInfo_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2922 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_94_94, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_93_93));
#line 2924 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_94_94, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2926 "test_bitset.c"
                          }
#line 2928 "test_bitset.c"
                          mercury__test_bitset__TypeCtorInfo_95_95 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 2930 "test_bitset.c"
                          {
#line 2932 "test_bitset.c"
                            mercury__test_bitset__TypeInfo_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2934 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_96_96, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_95_95));
#line 2936 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_96_96, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 2938 "test_bitset.c"
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
                break;
#line 24 "test_bitset.m"
              case (MR_Integer) 2:
#line 2957 "test_bitset.c"
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 1;
#line 24 "test_bitset.m"
                break;
#line 24 "test_bitset.m"
            }
#line 24 "test_bitset.m"
          }
#line 24 "test_bitset.m"
          break;
#line 24 "test_bitset.m"
        case (MR_Integer) 2:
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
#line 24 "test_bitset.m"
            switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__3_3)) {
#line 24 "test_bitset.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 24 "test_bitset.m"
              case (MR_Integer) 0:
#line 2987 "test_bitset.c"
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 2;
#line 24 "test_bitset.m"
                break;
#line 24 "test_bitset.m"
              case (MR_Integer) 1:
#line 2993 "test_bitset.c"
                *mercury__test_bitset__HeadVar__1_1 = (MR_Integer) 2;
#line 24 "test_bitset.m"
                break;
#line 24 "test_bitset.m"
              case (MR_Integer) 2:
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
                  MR_Integer mercury__test_bitset__V_7_123;

#line 98 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset____Compare____bitset_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__test_bitset__V_112_112 ;
	S2 =  mercury__test_bitset__V_57_57 ;
		{
#line 98 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 3029 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__V_7_123  = Res;
#line 98 "private_builtin.opt"
}
#line 70 "private_builtin.opt"
                  mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_123 < (MR_Integer) 0);
#line 73 "private_builtin.opt"
                  if (mercury__test_bitset__succeeded)
#line 72 "private_builtin.opt"
                    mercury__test_bitset__V_61_61 = (MR_Integer) 1;
#line 73 "private_builtin.opt"
                  else
#line 78 "private_builtin.opt"
                    {
#line 75 "private_builtin.opt"
                      mercury__test_bitset__succeeded = (mercury__test_bitset__V_7_123 == (MR_Integer) 0);
#line 78 "private_builtin.opt"
                      if (mercury__test_bitset__succeeded)
#line 77 "private_builtin.opt"
                        mercury__test_bitset__V_61_61 = (MR_Integer) 0;
#line 78 "private_builtin.opt"
                      else
#line 79 "private_builtin.opt"
                        mercury__test_bitset__V_61_61 = (MR_Integer) 2;
#line 78 "private_builtin.opt"
                    }
#line 3058 "test_bitset.c"
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

#line 3081 "test_bitset.c"
                      {
#line 3083 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3085 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_69_69, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_68_68));
#line 3087 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_69_69, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3089 "test_bitset.c"
                      }
#line 3091 "test_bitset.c"
                      {
#line 3093 "test_bitset.c"
                        mercury__test_bitset__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3095 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_71_71, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_70_70));
#line 3097 "test_bitset.c"
                        MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_71_71, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3099 "test_bitset.c"
                      }
#line 24 "test_bitset.m"
                      {
#line 24 "test_bitset.m"
                        mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_69_69, mercury__test_bitset__TypeInfo_71_71, &mercury__test_bitset__V_62_62, (MR_Word) mercury__test_bitset__V_111_111, (MR_Word) mercury__test_bitset__V_58_58);
                      }
#line 3106 "test_bitset.c"
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

#line 3129 "test_bitset.c"
                          {
#line 3131 "test_bitset.c"
                            mercury__test_bitset__TypeInfo_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3133 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_75_75, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_74_74));
#line 3135 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_75_75, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3137 "test_bitset.c"
                          }
#line 3139 "test_bitset.c"
                          {
#line 3141 "test_bitset.c"
                            mercury__test_bitset__TypeInfo_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3143 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_77_77, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_76_76));
#line 3145 "test_bitset.c"
                            MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_77_77, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3147 "test_bitset.c"
                          }
#line 24 "test_bitset.m"
                          {
#line 24 "test_bitset.m"
                            mercury__pair____Compare____pair_2_0(mercury__test_bitset__TypeInfo_75_75, mercury__test_bitset__TypeInfo_77_77, &mercury__test_bitset__V_63_63, (MR_Word) mercury__test_bitset__V_110_110, (MR_Word) mercury__test_bitset__V_59_59);
                          }
#line 3154 "test_bitset.c"
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

#line 3175 "test_bitset.c"
                              {
#line 3177 "test_bitset.c"
                                mercury__test_bitset__TypeInfo_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3179 "test_bitset.c"
                                MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_81_81, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_80_80));
#line 3181 "test_bitset.c"
                                MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_81_81, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3183 "test_bitset.c"
                              }
#line 3185 "test_bitset.c"
                              mercury__test_bitset__TypeCtorInfo_82_82 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3187 "test_bitset.c"
                              {
#line 3189 "test_bitset.c"
                                mercury__test_bitset__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3191 "test_bitset.c"
                                MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_83_83, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_82_82));
#line 3193 "test_bitset.c"
                                MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_83_83, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_66));
#line 3195 "test_bitset.c"
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
                break;
#line 24 "test_bitset.m"
            }
#line 24 "test_bitset.m"
          }
#line 24 "test_bitset.m"
          break;
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
#line 24 "test_bitset.m"
      switch (MR_tag((MR_Word) mercury__test_bitset__HeadVar__1_1)) {
#line 24 "test_bitset.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 24 "test_bitset.m"
        case (MR_Integer) 0:
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
#line 3291 "test_bitset.c"
                mercury__test_bitset__succeeded = (strcmp(mercury__test_bitset__V_3_3, mercury__test_bitset__V_5_5) == 0);
#line 24 "test_bitset.m"
                if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                  {
#line 3297 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_54_54 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 3299 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_56_56 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3301 "test_bitset.c"
                    {
#line 3303 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3305 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_55_55, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_54_54));
#line 3307 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_55_55, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3309 "test_bitset.c"
                    }
#line 3311 "test_bitset.c"
                    {
#line 3313 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3315 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_57_57, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_56_56));
#line 3317 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_57_57, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3319 "test_bitset.c"
                    }
#line 3321 "test_bitset.c"
                    {
#line 3323 "test_bitset.c"
                      return mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_55_55, mercury__test_bitset__TypeInfo_57_57, (MR_Word) mercury__test_bitset__V_4_4, (MR_Word) mercury__test_bitset__V_6_6);
                    }
#line 24 "test_bitset.m"
                  }
#line 24 "test_bitset.m"
              }
#line 24 "test_bitset.m"
          }
#line 24 "test_bitset.m"
          break;
#line 24 "test_bitset.m"
        case (MR_Integer) 1:
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
#line 3371 "test_bitset.c"
                mercury__test_bitset__succeeded = (strcmp(mercury__test_bitset__V_7_7, mercury__test_bitset__V_10_10) == 0);
#line 24 "test_bitset.m"
                if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                  {
#line 3377 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_24_24 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 3379 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_26_26 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3381 "test_bitset.c"
                    {
#line 3383 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3385 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_24_24));
#line 3387 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3389 "test_bitset.c"
                    }
#line 3391 "test_bitset.c"
                    {
#line 3393 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3395 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_33_33, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_26_26));
#line 3397 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_33_33, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3399 "test_bitset.c"
                    }
#line 3401 "test_bitset.c"
                    {
#line 3403 "test_bitset.c"
                      mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_31_31, mercury__test_bitset__TypeInfo_33_33, (MR_Word) mercury__test_bitset__V_8_8, (MR_Word) mercury__test_bitset__V_11_11);
                    }
#line 24 "test_bitset.m"
                    if (mercury__test_bitset__succeeded)
#line 3408 "test_bitset.c"
                      {
#line 3410 "test_bitset.c"
                        return mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_31_31, mercury__test_bitset__TypeInfo_33_33, (MR_Word) mercury__test_bitset__V_9_9, (MR_Word) mercury__test_bitset__V_12_12);
                      }
#line 24 "test_bitset.m"
                  }
#line 24 "test_bitset.m"
              }
#line 24 "test_bitset.m"
          }
#line 24 "test_bitset.m"
          break;
#line 24 "test_bitset.m"
        case (MR_Integer) 2:
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
#line 3464 "test_bitset.c"
                mercury__test_bitset__succeeded = (strcmp(mercury__test_bitset__V_13_13, mercury__test_bitset__V_17_17) == 0);
#line 24 "test_bitset.m"
                if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                  {
#line 3470 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_36_36 = (MR_Word) &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1;
#line 3472 "test_bitset.c"
                    mercury__test_bitset__TypeCtorInfo_38_38 = (MR_Word) &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1;
#line 3474 "test_bitset.c"
                    {
#line 3476 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3478 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_49_49, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_36_36));
#line 3480 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_49_49, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3482 "test_bitset.c"
                    }
#line 3484 "test_bitset.c"
                    {
#line 3486 "test_bitset.c"
                      mercury__test_bitset__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3488 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_51_51, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_38_38));
#line 3490 "test_bitset.c"
                      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_51_51, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_for_T_23));
#line 3492 "test_bitset.c"
                    }
#line 3494 "test_bitset.c"
                    {
#line 3496 "test_bitset.c"
                      mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_49_49, mercury__test_bitset__TypeInfo_51_51, (MR_Word) mercury__test_bitset__V_14_14, (MR_Word) mercury__test_bitset__V_18_18);
                    }
#line 24 "test_bitset.m"
                    if (mercury__test_bitset__succeeded)
#line 24 "test_bitset.m"
                      {
#line 3503 "test_bitset.c"
                        {
#line 3505 "test_bitset.c"
                          mercury__test_bitset__succeeded = mercury__pair____Unify____pair_2_0(mercury__test_bitset__TypeInfo_49_49, mercury__test_bitset__TypeInfo_51_51, (MR_Word) mercury__test_bitset__V_15_15, (MR_Word) mercury__test_bitset__V_19_19);
                        }
#line 24 "test_bitset.m"
                        if (mercury__test_bitset__succeeded)
#line 3510 "test_bitset.c"
                          {
#line 3512 "test_bitset.c"
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
          break;
#line 24 "test_bitset.m"
      }
#line 24 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 24 "test_bitset.m"
  }
#line 24 "test_bitset.m"
}

#line 598 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__check2_5_p_0(
#line 598 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_24,
#line 598 "test_bitset.m"
  MR_String mercury__test_bitset__Op_6,
#line 598 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterA_7,
#line 598 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterB_8,
#line 598 "test_bitset.m"
  MR_Word mercury__test_bitset__Tester_9,
#line 598 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_10)
#line 598 "test_bitset.m"
{
#line 601 "test_bitset.m"
  {
#line 601 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_7, (MR_Integer) 0)));
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_7, (MR_Integer) 1)));
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetListA_13;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_14;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetB_15;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_16;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetListB_17;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_18;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSet_19;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_20;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetList_21;
#line 601 "test_bitset.m"
    MR_Word mercury__test_bitset__SetList_22;
#line 612 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_33_33;
#line 612 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_37_37;
#line 612 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_41_41;
#line 612 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_36;
#line 612 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_40;

#line 603 "test_bitset.m"
    {
#line 603 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_24, mercury__test_bitset__BitSetA_11, &mercury__test_bitset__BitSetListA_13);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetListA_14 = (MR_Word) mercury__test_bitset__SetA_12;
#line 605 "test_bitset.m"
    mercury__test_bitset__BitSetB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterB_8, (MR_Integer) 0)));
#line 605 "test_bitset.m"
    mercury__test_bitset__SetB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterB_8, (MR_Integer) 1)));
#line 606 "test_bitset.m"
    {
#line 606 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_24, mercury__test_bitset__BitSetB_15, &mercury__test_bitset__BitSetListB_17);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetListB_18 = (MR_Word) mercury__test_bitset__SetB_16;
#line 608 "test_bitset.m"
    mercury__test_bitset__BitSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_9, (MR_Integer) 0)));
#line 608 "test_bitset.m"
    mercury__test_bitset__Set_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_9, (MR_Integer) 1)));
#line 609 "test_bitset.m"
    {
#line 609 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_24, mercury__test_bitset__BitSet_19, &mercury__test_bitset__BitSetList_21);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetList_22 = (MR_Word) mercury__test_bitset__Set_20;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3634 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_33_33  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 612 "test_bitset.m"
    {
#line 612 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__BitSetListA_13, mercury__test_bitset__SetListA_14);
    }
#line 612 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 612 "test_bitset.m"
      {
#line 3650 "test_bitset.c"
        mercury__test_bitset__PolyConst1_36 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  mercury__test_bitset__PolyConst1_36 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3667 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_37_37  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 612 "test_bitset.m"
        {
#line 612 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_37_37, mercury__test_bitset__BitSetListB_17, mercury__test_bitset__SetListB_18);
        }
#line 612 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 612 "test_bitset.m"
          {
#line 3683 "test_bitset.c"
            mercury__test_bitset__PolyConst1_40 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  mercury__test_bitset__PolyConst1_40 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3700 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_41_41  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 612 "test_bitset.m"
            {
#line 612 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_41_41, mercury__test_bitset__BitSetList_21, mercury__test_bitset__SetList_22);
            }
#line 612 "test_bitset.m"
          }
#line 612 "test_bitset.m"
      }
#line 614 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 613 "test_bitset.m"
      *mercury__test_bitset__Result_10 = mercury__test_bitset__Tester_9;
#line 614 "test_bitset.m"
    else
#line 615 "test_bitset.m"
      {
#line 615 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_29_29;
#line 615 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeCtorInfo_30_30;
#line 615 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_31_31;
#line 615 "test_bitset.m"
        MR_Word mercury__test_bitset__V_23_23;

#line 615 "test_bitset.m"
        {
#line 615 "test_bitset.m"
          mercury__test_bitset__V_23_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 615 "test_bitset.m"
          MR_hl_field(MR_mktag(2), mercury__test_bitset__V_23_23, 0) = ((MR_Box) (mercury__test_bitset__Op_6));
#line 615 "test_bitset.m"
          MR_hl_field(MR_mktag(2), mercury__test_bitset__V_23_23, 1) = ((MR_Box) (mercury__test_bitset__TesterA_7));
#line 615 "test_bitset.m"
          MR_hl_field(MR_mktag(2), mercury__test_bitset__V_23_23, 2) = ((MR_Box) (mercury__test_bitset__TesterB_8));
#line 615 "test_bitset.m"
          MR_hl_field(MR_mktag(2), mercury__test_bitset__V_23_23, 3) = ((MR_Box) (mercury__test_bitset__Tester_9));
#line 615 "test_bitset.m"
        }
#line 3747 "test_bitset.c"
        mercury__test_bitset__TypeCtorInfo_30_30 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check2_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_24 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3764 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_29_29  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 3771 "test_bitset.c"
        {
#line 3773 "test_bitset.c"
          mercury__test_bitset__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3775 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_30_30));
#line 3777 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_31_31, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_29_29));
#line 3779 "test_bitset.c"
        }
#line 615 "test_bitset.m"
        {
#line 615 "test_bitset.m"
          mercury__exception__throw_1_p_0(mercury__test_bitset__TypeInfo_31_31, ((MR_Box) (mercury__test_bitset__V_23_23)));
#line 615 "test_bitset.m"
          return;
        }
#line 615 "test_bitset.m"
      }
#line 601 "test_bitset.m"
  }
#line 598 "test_bitset.m"
}

#line 582 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__check1_4_p_0(
#line 582 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_18,
#line 582 "test_bitset.m"
  MR_String mercury__test_bitset__Op_5,
#line 582 "test_bitset.m"
  MR_Word mercury__test_bitset__TesterA_6,
#line 582 "test_bitset.m"
  MR_Word mercury__test_bitset__Tester_7,
#line 582 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_8)
#line 582 "test_bitset.m"
{
#line 585 "test_bitset.m"
  {
#line 585 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 585 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_6, (MR_Integer) 0)));
#line 585 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__TesterA_6, (MR_Integer) 1)));
#line 585 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetListA_11;
#line 585 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_12;
#line 585 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSet_13;
#line 585 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_14;
#line 585 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetList_15;
#line 585 "test_bitset.m"
    MR_Word mercury__test_bitset__SetList_16;
#line 592 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_26_26;
#line 592 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_30_30;
#line 592 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_29;

#line 587 "test_bitset.m"
    {
#line 587 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_18, mercury__test_bitset__BitSetA_9, &mercury__test_bitset__BitSetListA_11);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetListA_12 = (MR_Word) mercury__test_bitset__SetA_10;
#line 589 "test_bitset.m"
    mercury__test_bitset__BitSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_7, (MR_Integer) 0)));
#line 589 "test_bitset.m"
    mercury__test_bitset__Set_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_7, (MR_Integer) 1)));
#line 590 "test_bitset.m"
    {
#line 590 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_18, mercury__test_bitset__BitSet_13, &mercury__test_bitset__BitSetList_15);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetList_16 = (MR_Word) mercury__test_bitset__Set_14;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_18 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3870 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 592 "test_bitset.m"
    {
#line 592 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__BitSetListA_11, mercury__test_bitset__SetListA_12);
    }
#line 592 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 592 "test_bitset.m"
      {
#line 3886 "test_bitset.c"
        mercury__test_bitset__PolyConst1_29 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_18 ;
	Index =  mercury__test_bitset__PolyConst1_29 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3903 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_30_30  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 592 "test_bitset.m"
        {
#line 592 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_30_30, mercury__test_bitset__BitSetList_15, mercury__test_bitset__SetList_16);
        }
#line 592 "test_bitset.m"
      }
#line 594 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 593 "test_bitset.m"
      *mercury__test_bitset__Result_8 = mercury__test_bitset__Tester_7;
#line 594 "test_bitset.m"
    else
#line 595 "test_bitset.m"
      {
#line 595 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_22_22;
#line 595 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeCtorInfo_23_23;
#line 595 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_24_24;
#line 595 "test_bitset.m"
        MR_Word mercury__test_bitset__V_17_17;

#line 595 "test_bitset.m"
        {
#line 595 "test_bitset.m"
          mercury__test_bitset__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 595 "test_bitset.m"
          MR_hl_field(MR_mktag(1), mercury__test_bitset__V_17_17, 0) = ((MR_Box) (mercury__test_bitset__Op_5));
#line 595 "test_bitset.m"
          MR_hl_field(MR_mktag(1), mercury__test_bitset__V_17_17, 1) = ((MR_Box) (mercury__test_bitset__TesterA_6));
#line 595 "test_bitset.m"
          MR_hl_field(MR_mktag(1), mercury__test_bitset__V_17_17, 2) = ((MR_Box) (mercury__test_bitset__Tester_7));
#line 595 "test_bitset.m"
        }
#line 3946 "test_bitset.c"
        mercury__test_bitset__TypeCtorInfo_23_23 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check1_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_18 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 3963 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_22_22  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 3970 "test_bitset.c"
        {
#line 3972 "test_bitset.c"
          mercury__test_bitset__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3974 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_24_24, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_23_23));
#line 3976 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_24_24, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_22_22));
#line 3978 "test_bitset.c"
        }
#line 595 "test_bitset.m"
        {
#line 595 "test_bitset.m"
          mercury__exception__throw_1_p_0(mercury__test_bitset__TypeInfo_24_24, ((MR_Box) (mercury__test_bitset__V_17_17)));
#line 595 "test_bitset.m"
          return;
        }
#line 595 "test_bitset.m"
      }
#line 585 "test_bitset.m"
  }
#line 582 "test_bitset.m"
}

#line 569 "test_bitset.m"
void MR_CALL 
mercury__test_bitset__check0_3_p_0(
#line 569 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_12,
#line 569 "test_bitset.m"
  MR_String mercury__test_bitset__Op_4,
#line 569 "test_bitset.m"
  MR_Word mercury__test_bitset__Tester_5,
#line 569 "test_bitset.m"
  MR_Word * mercury__test_bitset__Result_6)
#line 569 "test_bitset.m"
{
#line 572 "test_bitset.m"
  {
#line 572 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 572 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_5, (MR_Integer) 0)));
#line 572 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__Tester_5, (MR_Integer) 1)));
#line 572 "test_bitset.m"
    MR_Word mercury__test_bitset__BitSetList_9;
#line 572 "test_bitset.m"
    MR_Word mercury__test_bitset__SetList_10;
#line 576 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_19_19;

#line 574 "test_bitset.m"
    {
#line 574 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__BitSet_7, &mercury__test_bitset__BitSetList_9);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetList_10 = (MR_Word) mercury__test_bitset__Set_8;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4044 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_19_19  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 576 "test_bitset.m"
    {
#line 576 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_19_19, mercury__test_bitset__BitSetList_9, mercury__test_bitset__SetList_10);
    }
#line 578 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 577 "test_bitset.m"
      *mercury__test_bitset__Result_6 = mercury__test_bitset__Tester_5;
#line 578 "test_bitset.m"
    else
#line 579 "test_bitset.m"
      {
#line 579 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 579 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeCtorInfo_16_16;
#line 579 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_17_17;
#line 579 "test_bitset.m"
        MR_Word mercury__test_bitset__V_11_11;

#line 579 "test_bitset.m"
        {
#line 579 "test_bitset.m"
          mercury__test_bitset__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 579 "test_bitset.m"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 0) = ((MR_Box) (mercury__test_bitset__Op_4));
#line 579 "test_bitset.m"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 1) = ((MR_Box) (mercury__test_bitset__Tester_5));
#line 579 "test_bitset.m"
        }
#line 4083 "test_bitset.c"
        mercury__test_bitset__TypeCtorInfo_16_16 = (MR_Word) &mercury__test_bitset__test_bitset__type_ctor_info_bitset_error_1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__check0_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4100 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 4107 "test_bitset.c"
        {
#line 4109 "test_bitset.c"
          mercury__test_bitset__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4111 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_17_17, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_16_16));
#line 4113 "test_bitset.c"
          MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_17_17, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_15_15));
#line 4115 "test_bitset.c"
        }
#line 579 "test_bitset.m"
        {
#line 579 "test_bitset.m"
          mercury__exception__throw_1_p_0(mercury__test_bitset__TypeInfo_17_17, ((MR_Box) (mercury__test_bitset__V_11_11)));
#line 579 "test_bitset.m"
          return;
        }
#line 579 "test_bitset.m"
      }
#line 572 "test_bitset.m"
  }
#line 569 "test_bitset.m"
}

#line 437 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__get_sets_4_p_0(
#line 437 "test_bitset.m"
  MR_Word mercury__test_bitset__TypeClassInfo_for_enum_21,
#line 437 "test_bitset.m"
  MR_String mercury__test_bitset__Op_1,
#line 437 "test_bitset.m"
  MR_Word mercury__test_bitset__HeadVar__2_2,
#line 437 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__3_3,
#line 437 "test_bitset.m"
  MR_Word * mercury__test_bitset__HeadVar__4_4)
#line 437 "test_bitset.m"
{
#line 440 "test_bitset.m"
  {
#line 440 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 440 "test_bitset.m"
    if ((mercury__test_bitset__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 440 "test_bitset.m"
      {
#line 440 "test_bitset.m"
        *mercury__test_bitset__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 440 "test_bitset.m"
        *mercury__test_bitset__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 440 "test_bitset.m"
      }
#line 440 "test_bitset.m"
    else
#line 441 "test_bitset.m"
      {
#line 441 "test_bitset.m"
        MR_Word mercury__test_bitset__SetA_7;
#line 441 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB_8;
#line 441 "test_bitset.m"
        MR_Word mercury__test_bitset__SetsAB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 441 "test_bitset.m"
        MR_Word mercury__test_bitset__SetsA_10;
#line 441 "test_bitset.m"
        MR_Word mercury__test_bitset__SetsB_11;
#line 441 "test_bitset.m"
        MR_Word mercury__test_bitset__SetListA_12;
#line 441 "test_bitset.m"
        MR_Word mercury__test_bitset__SetListB_13;
#line 441 "test_bitset.m"
        MR_Word mercury__test_bitset__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 444 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_25_25;

#line 441 "test_bitset.m"
        mercury__test_bitset__SetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, (MR_Integer) 0)));
#line 441 "test_bitset.m"
        mercury__test_bitset__SetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, (MR_Integer) 1)));
#line 442 "test_bitset.m"
        {
#line 442 "test_bitset.m"
          mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_21, mercury__test_bitset__SetA_7, &mercury__test_bitset__SetListA_12);
        }
#line 43 "set_ordlist.opt"
        mercury__test_bitset__SetListB_13 = (MR_Word) mercury__test_bitset__SetB_8;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__get_sets_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_21 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4210 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_25_25  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 444 "test_bitset.m"
        {
#line 444 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__SetListA_12, mercury__test_bitset__SetListB_13);
        }
#line 446 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 445 "test_bitset.m"
          {
#line 445 "test_bitset.m"
            mercury__test_bitset__get_sets_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_21, mercury__test_bitset__Op_1, mercury__test_bitset__SetsAB_9, &mercury__test_bitset__SetsA_10, &mercury__test_bitset__SetsB_11);
          }
#line 446 "test_bitset.m"
        else
#line 447 "test_bitset.m"
          {
#line 447 "test_bitset.m"
            MR_String mercury__test_bitset__V_17_17;
#line 447 "test_bitset.m"
            MR_String mercury__test_bitset__V_19_19;

#line 390 "string.opt"
            {
#line 390 "string.opt"
              mercury__string__append_3_p_2(mercury__test_bitset__Op_1, (MR_String) " arg list", &mercury__test_bitset__V_19_19);
            }
#line 390 "string.opt"
            {
#line 390 "string.opt"
              mercury__string__append_3_p_2((MR_String) "unequal sets in ", mercury__test_bitset__V_19_19, &mercury__test_bitset__V_17_17);
            }
#line 447 "test_bitset.m"
            {
#line 447 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.get_sets\'/4", mercury__test_bitset__V_17_17);
#line 447 "test_bitset.m"
              return;
            }
#line 447 "test_bitset.m"
          }
#line 441 "test_bitset.m"
        {
#line 441 "test_bitset.m"
          MR_Word base;
#line 441 "test_bitset.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "test_bitset.m"
          *mercury__test_bitset__HeadVar__3_3 = base;
#line 441 "test_bitset.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__test_bitset__SetA_7));
#line 441 "test_bitset.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__test_bitset__SetsA_10));
#line 441 "test_bitset.m"
        }
#line 441 "test_bitset.m"
        {
#line 441 "test_bitset.m"
          MR_Word base;
#line 441 "test_bitset.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "test_bitset.m"
          *mercury__test_bitset__HeadVar__4_4 = base;
#line 441 "test_bitset.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__test_bitset__SetB_8));
#line 441 "test_bitset.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__test_bitset__SetsB_11));
#line 441 "test_bitset.m"
        }
#line 441 "test_bitset.m"
      }
#line 440 "test_bitset.m"
  }
#line 437 "test_bitset.m"
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
#line 547 "test_bitset.m"
  {
#line 547 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_26_26;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_14_50;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_10;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_11;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_12;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetA_13;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_14;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetB_15;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListA_16;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListB_17;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListA_18;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListB_19;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__V_9_46;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__V_10_47;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__V_11_48;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_54;
#line 547 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_89;
#line 557 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_30_30;
#line 557 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_34_34;
#line 557 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_38_38;
#line 557 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_33;
#line 557 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_37;

#line 548 "test_bitset.m"
    {
#line 548 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetListB_11 = (MR_Word) mercury__test_bitset__SetB_7;
#line 201 "tree_bitset.opt"
    mercury__test_bitset__V_5_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 318 "tree_bitset.opt"
    mercury__test_bitset__V_8_89 = (MR_Word) mercury__test_bitset__SetA_6;
#line 322 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_89)) == (MR_mktag((MR_Integer) 1))))
#line 323 "tree_bitset.opt"
      {
#line 323 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_11_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_89, (MR_Integer) 1)));
#line 323 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_92 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_89, (MR_Integer) 0)));

#line 324 "tree_bitset.opt"
        {
#line 324 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__V_11_93, mercury__test_bitset__V_5_54, &mercury__test_bitset__V_9_46);
        }
#line 323 "tree_bitset.opt"
      }
#line 322 "tree_bitset.opt"
    else
#line 320 "tree_bitset.opt"
      {
#line 320 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_9_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_89, (MR_Integer) 0)));

#line 321 "tree_bitset.opt"
        {
#line 321 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__V_9_91, mercury__test_bitset__V_5_54, &mercury__test_bitset__V_9_46);
        }
#line 320 "tree_bitset.opt"
      }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4416 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_50  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 350 "tree_bitset.opt"
    {
#line 350 "tree_bitset.opt"
      mercury__list__filter_4_p_0(mercury__test_bitset__TypeInfo_14_50, mercury__test_bitset__Pred_5, mercury__test_bitset__V_9_46, &mercury__test_bitset__V_10_47, &mercury__test_bitset__V_11_48);
    }
#line 351 "tree_bitset.opt"
    {
#line 351 "tree_bitset.opt"
      mercury__test_bitset__InSetA_12 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__V_10_47);
    }
#line 352 "tree_bitset.opt"
    {
#line 352 "tree_bitset.opt"
      mercury__test_bitset__OutSetA_13 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__V_11_48);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4453 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 551 "test_bitset.m"
    {
#line 551 "test_bitset.m"
      mercury__set_ordlist__filter_4_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__Pred_5, mercury__test_bitset__SetB_7, &mercury__test_bitset__InSetB_14, &mercury__test_bitset__OutSetB_15);
    }
#line 552 "test_bitset.m"
    {
#line 552 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__InSetA_12, &mercury__test_bitset__InSetListA_16);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__InSetListB_17 = (MR_Word) mercury__test_bitset__InSetB_14;
#line 554 "test_bitset.m"
    {
#line 554 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__OutSetA_13, &mercury__test_bitset__OutSetListA_18);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__OutSetListB_19 = (MR_Word) mercury__test_bitset__OutSetB_15;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4494 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_30_30  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 557 "test_bitset.m"
    {
#line 557 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_30_30, mercury__test_bitset__SetListA_10, mercury__test_bitset__SetListB_11);
    }
#line 557 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 557 "test_bitset.m"
      {
#line 4510 "test_bitset.c"
        mercury__test_bitset__PolyConst1_33 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_33 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4527 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 558 "test_bitset.m"
        {
#line 558 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__InSetListA_16, mercury__test_bitset__InSetListB_17);
        }
#line 557 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 557 "test_bitset.m"
          {
#line 4543 "test_bitset.c"
            mercury__test_bitset__PolyConst1_37 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_37 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4560 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_38_38  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 559 "test_bitset.m"
            {
#line 559 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_38_38, mercury__test_bitset__OutSetListA_18, mercury__test_bitset__OutSetListB_19);
            }
#line 557 "test_bitset.m"
          }
#line 557 "test_bitset.m"
      }
#line 563 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 561 "test_bitset.m"
      {
#line 561 "test_bitset.m"
        {
#line 561 "test_bitset.m"
          MR_Word base;
#line 561 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "test_bitset.m"
          *mercury__test_bitset__ResultIn_8 = base;
#line 561 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__InSetA_12));
#line 561 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__InSetB_14));
#line 561 "test_bitset.m"
        }
#line 562 "test_bitset.m"
        {
#line 562 "test_bitset.m"
          MR_Word base;
#line 562 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "test_bitset.m"
          *mercury__test_bitset__ResultOut_9 = base;
#line 562 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__OutSetA_13));
#line 562 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__OutSetB_15));
#line 562 "test_bitset.m"
        }
#line 561 "test_bitset.m"
      }
#line 563 "test_bitset.m"
    else
#line 564 "test_bitset.m"
      {
#line 564 "test_bitset.m"
        {
#line 564 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.filter\'/4", (MR_String) "failed");
#line 564 "test_bitset.m"
          return;
        }
#line 564 "test_bitset.m"
      }
#line 547 "test_bitset.m"
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
#line 534 "test_bitset.m"
  {
#line 534 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_7;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_20_20;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_11_37;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_8;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_9;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_10;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_11;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListA_12;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListB_13;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__V_7_34;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_35;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_41;
#line 534 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_76;
#line 541 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_23_23;
#line 541 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_27_27;
#line 541 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_26;

#line 535 "test_bitset.m"
    {
#line 535 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_5, &mercury__test_bitset__SetListA_8);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetListB_9 = (MR_Word) mercury__test_bitset__SetB_6;
#line 201 "tree_bitset.opt"
    mercury__test_bitset__V_5_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 318 "tree_bitset.opt"
    mercury__test_bitset__V_8_76 = (MR_Word) mercury__test_bitset__SetA_5;
#line 322 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_76)) == (MR_mktag((MR_Integer) 1))))
#line 323 "tree_bitset.opt"
      {
#line 323 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_11_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_76, (MR_Integer) 1)));
#line 323 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_76, (MR_Integer) 0)));

#line 324 "tree_bitset.opt"
        {
#line 324 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_11_80, mercury__test_bitset__V_5_41, &mercury__test_bitset__V_7_34);
        }
#line 323 "tree_bitset.opt"
      }
#line 322 "tree_bitset.opt"
    else
#line 320 "tree_bitset.opt"
      {
#line 320 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_9_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_76, (MR_Integer) 0)));

#line 321 "tree_bitset.opt"
        {
#line 321 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_9_78, mercury__test_bitset__V_5_41, &mercury__test_bitset__V_7_34);
        }
#line 320 "tree_bitset.opt"
      }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4736 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_37  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 686 "list.opt"
    {
#line 686 "list.opt"
      mercury__list__filter_3_p_0(mercury__test_bitset__TypeInfo_11_37, mercury__test_bitset__Pred_4, mercury__test_bitset__V_7_34, &mercury__test_bitset__V_8_35);
    }
#line 347 "tree_bitset.opt"
    {
#line 347 "tree_bitset.opt"
      mercury__test_bitset__InSetA_10 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_8_35);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4768 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_20_20  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 538 "test_bitset.m"
    {
#line 538 "test_bitset.m"
      mercury__test_bitset__InSetB_11 = mercury__set_ordlist__filter_2_f_0(mercury__test_bitset__TypeInfo_20_20, mercury__test_bitset__Pred_4, mercury__test_bitset__SetB_6);
    }
#line 539 "test_bitset.m"
    {
#line 539 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__InSetA_10, &mercury__test_bitset__InSetListA_12);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__InSetListB_13 = (MR_Word) mercury__test_bitset__InSetB_11;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4802 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 541 "test_bitset.m"
    {
#line 541 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_8, mercury__test_bitset__SetListB_9);
    }
#line 541 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 541 "test_bitset.m"
      {
#line 4818 "test_bitset.c"
        mercury__test_bitset__PolyConst1_26 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__filter_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  mercury__test_bitset__PolyConst1_26 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4835 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_27_27  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 541 "test_bitset.m"
        {
#line 541 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_27_27, mercury__test_bitset__InSetListA_12, mercury__test_bitset__InSetListB_13);
        }
#line 541 "test_bitset.m"
      }
#line 543 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 542 "test_bitset.m"
      {
#line 542 "test_bitset.m"
        mercury__test_bitset__Result_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 542 "test_bitset.m"
        MR_hl_field(MR_mktag(0), mercury__test_bitset__Result_7, 0) = ((MR_Box) (mercury__test_bitset__InSetA_10));
#line 542 "test_bitset.m"
        MR_hl_field(MR_mktag(0), mercury__test_bitset__Result_7, 1) = ((MR_Box) (mercury__test_bitset__InSetB_11));
#line 542 "test_bitset.m"
      }
#line 543 "test_bitset.m"
    else
#line 544 "test_bitset.m"
      {
#line 544 "test_bitset.m"
        {
#line 544 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.filter\'/2", (MR_String) "failed");
        }
#line 544 "test_bitset.m"
      }
#line 534 "test_bitset.m"
    return mercury__test_bitset__Result_7;
#line 534 "test_bitset.m"
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
#line 519 "test_bitset.m"
  {
#line 519 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 519 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 519 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_5_19 = (MR_Word) mercury__test_bitset__SetA_4;

#line 340 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__V_5_19)) == (MR_mktag((MR_Integer) 1))))
#line 341 "tree_bitset.opt"
      {
#line 341 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_8_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_5_19, (MR_Integer) 1)));
#line 341 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_7_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_5_19, (MR_Integer) 0)));

#line 342 "tree_bitset.opt"
        {
#line 342 "tree_bitset.opt"
          mercury__test_bitset__succeeded = mercury__tree_bitset__interior_all_true_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__Pred_3, mercury__test_bitset__V_8_23);
        }
#line 341 "tree_bitset.opt"
      }
#line 340 "tree_bitset.opt"
    else
#line 338 "tree_bitset.opt"
      {
#line 338 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_6_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_5_19, (MR_Integer) 0)));

#line 339 "tree_bitset.opt"
        {
#line 339 "tree_bitset.opt"
          mercury__test_bitset__succeeded = mercury__tree_bitset__leaf_all_true_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__Pred_3, mercury__test_bitset__V_6_21);
        }
#line 338 "tree_bitset.opt"
      }
#line 526 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 523 "test_bitset.m"
      {
#line 521 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_14_14;
#line 521 "test_bitset.m"
        MR_Word mercury__test_bitset__V_4_25;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 4955 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 194 "set_ordlist.opt"
        mercury__test_bitset__V_4_25 = (MR_Word) mercury__test_bitset__SetB_5;
#line 195 "set_ordlist.opt"
        {
#line 195 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__all_true_2_p_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__Pred_3, mercury__test_bitset__V_4_25);
        }
#line 523 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 522 "test_bitset.m"
          {
#line 522 "test_bitset.m"
          }
#line 523 "test_bitset.m"
        else
#line 524 "test_bitset.m"
          {
#line 524 "test_bitset.m"
            {
#line 524 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.all_true\'/2", (MR_String) "tree_bitset but not set_ordlist");
            }
#line 524 "test_bitset.m"
          }
#line 523 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 523 "test_bitset.m"
      }
#line 526 "test_bitset.m"
    else
#line 529 "test_bitset.m"
      {
#line 529 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_16_16;
#line 529 "test_bitset.m"
        MR_String mercury__test_bitset__V_9_9;
#line 529 "test_bitset.m"
        MR_String mercury__test_bitset__V_10_10;
#line 529 "test_bitset.m"
        MR_String mercury__test_bitset__V_11_11;
#line 529 "test_bitset.m"
        MR_Word mercury__test_bitset__V_4_27;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__all_true_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5020 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_16_16  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 194 "set_ordlist.opt"
        mercury__test_bitset__V_4_27 = (MR_Word) mercury__test_bitset__SetB_5;
#line 195 "set_ordlist.opt"
        {
#line 195 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__all_true_2_p_0(mercury__test_bitset__TypeInfo_16_16, mercury__test_bitset__Pred_3, mercury__test_bitset__V_4_27);
        }
#line 529 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 529 "test_bitset.m"
          {
#line 528 "test_bitset.m"
            mercury__test_bitset__V_9_9 = (MR_String) "test_bitset";
#line 528 "test_bitset.m"
            mercury__test_bitset__V_10_10 = (MR_String) "predicate \140test_bitset.all_true\'/2";
#line 528 "test_bitset.m"
            mercury__test_bitset__V_11_11 = (MR_String) "set_ordlist but not tree_bitset";
#line 528 "test_bitset.m"
            {
#line 528 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_9_9, mercury__test_bitset__V_10_10, mercury__test_bitset__V_11_11);
            }
#line 528 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 529 "test_bitset.m"
          }
#line 529 "test_bitset.m"
      }
#line 519 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 519 "test_bitset.m"
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
#line 508 "test_bitset.m"
  {
#line 508 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 508 "test_bitset.m"
    MR_Box mercury__test_bitset__Acc_9;
#line 508 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 508 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 508 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_10;
#line 508 "test_bitset.m"
    MR_Box mercury__test_bitset__AccA_12;
#line 508 "test_bitset.m"
    MR_Box mercury__test_bitset__AccB_13;
#line 508 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_50;
#line 508 "test_bitset.m"
    MR_Word mercury__test_bitset__V_9_63;
#line 513 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_23_23;

#line 509 "test_bitset.m"
    {
#line 509 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__V_9_63 = (MR_Word) mercury__test_bitset__SetB_7;
#line 289 "tree_bitset.opt"
    mercury__test_bitset__V_8_50 = (MR_Word) mercury__test_bitset__SetA_6;
#line 293 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_50)) == (MR_mktag((MR_Integer) 1))))
#line 294 "tree_bitset.opt"
      {
#line 294 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_11_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_50, (MR_Integer) 1)));
#line 294 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_50, (MR_Integer) 0)));

#line 295 "tree_bitset.opt"
        {
#line 295 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Pred_5, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_11_54, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 294 "tree_bitset.opt"
      }
#line 293 "tree_bitset.opt"
    else
#line 291 "tree_bitset.opt"
      {
#line 291 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_9_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_50, (MR_Integer) 0)));

#line 292 "tree_bitset.opt"
        {
#line 292 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__Pred_5, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__V_9_52, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 291 "tree_bitset.opt"
      }
#line 409 "list.opt"
    {
#line 409 "list.opt"
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__test_bitset__Pred_5, mercury__test_bitset__V_9_63, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccB_13);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_3_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5159 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 513 "test_bitset.m"
    {
#line 513 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_10, mercury__test_bitset__V_9_63);
    }
#line 513 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 513 "test_bitset.m"
      {
#line 513 "test_bitset.m"
        mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__AccA_12, mercury__test_bitset__AccB_13);
      }
#line 515 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 514 "test_bitset.m"
      mercury__test_bitset__Acc_9 = mercury__test_bitset__AccA_12;
#line 515 "test_bitset.m"
    else
#line 516 "test_bitset.m"
      {
#line 516 "test_bitset.m"
        {
#line 516 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.foldl\'/3", (MR_String) "failed");
        }
#line 516 "test_bitset.m"
      }
#line 508 "test_bitset.m"
    return mercury__test_bitset__Acc_9;
#line 508 "test_bitset.m"
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
#line 497 "test_bitset.m"
  {
#line 497 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_21_21;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_10;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_11;
#line 497 "test_bitset.m"
    MR_Box mercury__test_bitset__AccA_12;
#line 497 "test_bitset.m"
    MR_Box mercury__test_bitset__AccB_13;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_31;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__V_10_44;
#line 502 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_23_23;
#line 502 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_22;

#line 498 "test_bitset.m"
    {
#line 498 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetListB_11 = (MR_Word) mercury__test_bitset__SetB_7;
#line 289 "tree_bitset.opt"
    mercury__test_bitset__V_8_31 = (MR_Word) mercury__test_bitset__SetA_6;
#line 293 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_31)) == (MR_mktag((MR_Integer) 1))))
#line 294 "tree_bitset.opt"
      {
#line 294 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_11_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_31, (MR_Integer) 1)));
#line 294 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_31, (MR_Integer) 0)));

#line 295 "tree_bitset.opt"
        {
#line 295 "tree_bitset.opt"
          mercury__test_bitset__succeeded = mercury__tree_bitset__do_foldl_pred_4_p_3(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__V_11_35, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 294 "tree_bitset.opt"
      }
#line 293 "tree_bitset.opt"
    else
#line 291 "tree_bitset.opt"
      {
#line 291 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_9_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_31, (MR_Integer) 0)));

#line 292 "tree_bitset.opt"
        {
#line 292 "tree_bitset.opt"
          mercury__test_bitset__succeeded = mercury__tree_bitset__leaf_foldl_pred_4_p_3(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__V_9_33, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 291 "tree_bitset.opt"
      }
#line 497 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 497 "test_bitset.m"
      {
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5302 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_21_21  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 43 "set_ordlist.opt"
        mercury__test_bitset__V_10_44 = (MR_Word) mercury__test_bitset__SetB_7;
#line 168 "set_ordlist.opt"
        {
#line 168 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__foldl_4_p_3(mercury__test_bitset__TypeInfo_21_21, mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__Pred_5, mercury__test_bitset__V_10_44, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccB_13);
        }
#line 497 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 497 "test_bitset.m"
          {
#line 5320 "test_bitset.c"
            mercury__test_bitset__PolyConst1_22 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  mercury__test_bitset__PolyConst1_22 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5337 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 502 "test_bitset.m"
            {
#line 502 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_10, mercury__test_bitset__SetListB_11);
            }
#line 502 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 502 "test_bitset.m"
              {
#line 502 "test_bitset.m"
                mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__AccA_12, mercury__test_bitset__AccB_13);
              }
#line 504 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 503 "test_bitset.m"
              *mercury__test_bitset__Acc_9 = mercury__test_bitset__AccA_12;
#line 504 "test_bitset.m"
            else
#line 505 "test_bitset.m"
              {
#line 505 "test_bitset.m"
                {
#line 505 "test_bitset.m"
                  mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
                }
#line 505 "test_bitset.m"
              }
#line 504 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 497 "test_bitset.m"
          }
#line 497 "test_bitset.m"
      }
#line 497 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 497 "test_bitset.m"
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
#line 497 "test_bitset.m"
  {
#line 497 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_21_21;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_10;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_11;
#line 497 "test_bitset.m"
    MR_Box mercury__test_bitset__AccA_12;
#line 497 "test_bitset.m"
    MR_Box mercury__test_bitset__AccB_13;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_31;
#line 497 "test_bitset.m"
    MR_Word mercury__test_bitset__V_10_44;
#line 502 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_23_23;

#line 498 "test_bitset.m"
    {
#line 498 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_10);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetListB_11 = (MR_Word) mercury__test_bitset__SetB_7;
#line 289 "tree_bitset.opt"
    mercury__test_bitset__V_8_31 = (MR_Word) mercury__test_bitset__SetA_6;
#line 293 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_31)) == (MR_mktag((MR_Integer) 1))))
#line 294 "tree_bitset.opt"
      {
#line 294 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_11_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_31, (MR_Integer) 1)));
#line 294 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_31, (MR_Integer) 0)));

#line 295 "tree_bitset.opt"
        {
#line 295 "tree_bitset.opt"
          mercury__tree_bitset__do_foldl_pred_4_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__V_11_35, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 294 "tree_bitset.opt"
      }
#line 293 "tree_bitset.opt"
    else
#line 291 "tree_bitset.opt"
      {
#line 291 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_9_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_31, (MR_Integer) 0)));

#line 292 "tree_bitset.opt"
        {
#line 292 "tree_bitset.opt"
          mercury__tree_bitset__leaf_foldl_pred_4_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__TypeClassInfo_for_enum_17, mercury__test_bitset__Pred_5, mercury__test_bitset__V_9_33, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccA_12);
        }
#line 291 "tree_bitset.opt"
      }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5480 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_21_21  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 43 "set_ordlist.opt"
    mercury__test_bitset__V_10_44 = (MR_Word) mercury__test_bitset__SetB_7;
#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl_4_p_0(mercury__test_bitset__TypeInfo_21_21, mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__Pred_5, mercury__test_bitset__V_10_44, mercury__test_bitset__Acc0_8, &mercury__test_bitset__AccB_13);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__foldl_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5509 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_23_23  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 502 "test_bitset.m"
    {
#line 502 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_23_23, mercury__test_bitset__SetListA_10, mercury__test_bitset__SetListB_11);
    }
#line 502 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 502 "test_bitset.m"
      {
#line 502 "test_bitset.m"
        mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_for_Acc_18, mercury__test_bitset__AccA_12, mercury__test_bitset__AccB_13);
      }
#line 504 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 503 "test_bitset.m"
      *mercury__test_bitset__Acc_9 = mercury__test_bitset__AccA_12;
#line 504 "test_bitset.m"
    else
#line 505 "test_bitset.m"
      {
#line 505 "test_bitset.m"
        {
#line 505 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.foldl\'/4", (MR_String) "failed");
#line 505 "test_bitset.m"
          return;
        }
#line 505 "test_bitset.m"
      }
#line 497 "test_bitset.m"
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
#line 471 "test_bitset.m"
  {
#line 471 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_28_28;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__DivideBySetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__DivideBySetB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_11;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetA_12;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_13;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetB_14;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__DivideBySetListA_15;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__DivideBySetListB_16;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_17;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_18;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListA_19;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListB_20;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListA_21;
#line 471 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListB_22;
#line 484 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_34_34;
#line 484 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_38_38;
#line 484 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_42_42;
#line 484 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_46_46;
#line 484 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_37;
#line 484 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_41;
#line 484 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_45;

#line 472 "test_bitset.m"
    {
#line 472 "test_bitset.m"
      mercury__tree_bitset__divide_by_set_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__DivideBySetA_5, mercury__test_bitset__SetA_7, &mercury__test_bitset__InSetA_11, &mercury__test_bitset__OutSetA_12);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5638 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_28_28  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 473 "test_bitset.m"
    {
#line 473 "test_bitset.m"
      mercury__set_ordlist__divide_by_set_4_p_0(mercury__test_bitset__TypeInfo_28_28, mercury__test_bitset__DivideBySetB_6, mercury__test_bitset__SetB_8, &mercury__test_bitset__InSetB_13, &mercury__test_bitset__OutSetB_14);
    }
#line 475 "test_bitset.m"
    {
#line 475 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__DivideBySetA_5, &mercury__test_bitset__DivideBySetListA_15);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__DivideBySetListB_16 = (MR_Word) mercury__test_bitset__DivideBySetB_6;
#line 477 "test_bitset.m"
    {
#line 477 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__SetA_7, &mercury__test_bitset__SetListA_17);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetListB_18 = (MR_Word) mercury__test_bitset__SetB_8;
#line 479 "test_bitset.m"
    {
#line 479 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__InSetA_11, &mercury__test_bitset__InSetListA_19);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__InSetListB_20 = (MR_Word) mercury__test_bitset__InSetB_13;
#line 481 "test_bitset.m"
    {
#line 481 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, mercury__test_bitset__OutSetA_12, &mercury__test_bitset__OutSetListA_21);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__OutSetListB_22 = (MR_Word) mercury__test_bitset__OutSetB_14;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5693 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 484 "test_bitset.m"
    {
#line 484 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__DivideBySetListA_15, mercury__test_bitset__DivideBySetListB_16);
    }
#line 484 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 484 "test_bitset.m"
      {
#line 5709 "test_bitset.c"
        mercury__test_bitset__PolyConst1_37 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  mercury__test_bitset__PolyConst1_37 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5726 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_38_38  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 485 "test_bitset.m"
        {
#line 485 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_38_38, mercury__test_bitset__SetListA_17, mercury__test_bitset__SetListB_18);
        }
#line 484 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 484 "test_bitset.m"
          {
#line 5742 "test_bitset.c"
            mercury__test_bitset__PolyConst1_41 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  mercury__test_bitset__PolyConst1_41 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5759 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_42_42  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 486 "test_bitset.m"
            {
#line 486 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_42_42, mercury__test_bitset__InSetListA_19, mercury__test_bitset__InSetListB_20);
            }
#line 484 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 484 "test_bitset.m"
              {
#line 5775 "test_bitset.c"
                mercury__test_bitset__PolyConst1_45 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  mercury__test_bitset__PolyConst1_45 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5792 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_46_46  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 487 "test_bitset.m"
                {
#line 487 "test_bitset.m"
                  mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_46_46, mercury__test_bitset__OutSetListA_21, mercury__test_bitset__OutSetListB_22);
                }
#line 484 "test_bitset.m"
              }
#line 484 "test_bitset.m"
          }
#line 484 "test_bitset.m"
      }
#line 491 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 489 "test_bitset.m"
      {
#line 489 "test_bitset.m"
        {
#line 489 "test_bitset.m"
          MR_Word base;
#line 489 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 489 "test_bitset.m"
          *mercury__test_bitset__ResultIn_9 = base;
#line 489 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__InSetA_11));
#line 489 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__InSetB_13));
#line 489 "test_bitset.m"
        }
#line 490 "test_bitset.m"
        {
#line 490 "test_bitset.m"
          MR_Word base;
#line 490 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 490 "test_bitset.m"
          *mercury__test_bitset__ResultOut_10 = base;
#line 490 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__OutSetA_12));
#line 490 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__OutSetB_14));
#line 490 "test_bitset.m"
        }
#line 489 "test_bitset.m"
      }
#line 491 "test_bitset.m"
    else
#line 492 "test_bitset.m"
      {
#line 492 "test_bitset.m"
        {
#line 492 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.divide_by_set\'/4", (MR_String) "failed");
#line 492 "test_bitset.m"
          return;
        }
#line 492 "test_bitset.m"
      }
#line 471 "test_bitset.m"
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
#line 450 "test_bitset.m"
  {
#line 450 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_25_25;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_10;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetA_11;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_12;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetB_13;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListA_14;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__SetListB_15;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListA_16;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetListB_17;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListA_18;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__OutSetListB_19;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_42;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__V_7_43;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_44;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__V_11_45;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_47;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__V_9_48;
#line 450 "test_bitset.m"
    MR_Word mercury__test_bitset__V_10_49;
#line 461 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_30_30;
#line 461 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_34_34;
#line 461 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_38_38;
#line 461 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_33;
#line 461 "test_bitset.m"
    MR_Integer mercury__test_bitset__PolyConst1_37;

#line 451 "test_bitset.m"
    {
#line 451 "test_bitset.m"
      mercury__tree_bitset__divide_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__Pred_5, mercury__test_bitset__SetA_6, &mercury__test_bitset__InSetA_10, &mercury__test_bitset__OutSetA_11);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 5952 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_25_25  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 196 "set_ordlist.opt"
    mercury__test_bitset__V_6_42 = (MR_Word) mercury__test_bitset__SetB_7;
#line 197 "set_ordlist.opt"
    mercury__test_bitset__V_11_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "set_ordlist.opt"
    mercury__test_bitset__V_12_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 199 "set_ordlist.opt"
    {
#line 199 "set_ordlist.opt"
      mercury__set_ordlist__divide_loop_6_p_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__Pred_5, mercury__test_bitset__V_6_42, mercury__test_bitset__V_11_45, &mercury__test_bitset__V_9_48, mercury__test_bitset__V_12_47, &mercury__test_bitset__V_10_49);
    }
#line 200 "set_ordlist.opt"
    {
#line 200 "set_ordlist.opt"
      mercury__list__reverse_2_p_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__V_9_48, &mercury__test_bitset__V_7_43);
    }
#line 196 "set_ordlist.opt"
    mercury__test_bitset__InSetB_12 = (MR_Word) mercury__test_bitset__V_7_43;
#line 201 "set_ordlist.opt"
    {
#line 201 "set_ordlist.opt"
      mercury__list__reverse_2_p_0(mercury__test_bitset__TypeInfo_25_25, mercury__test_bitset__V_10_49, &mercury__test_bitset__V_8_44);
    }
#line 196 "set_ordlist.opt"
    mercury__test_bitset__OutSetB_13 = (MR_Word) mercury__test_bitset__V_8_44;
#line 454 "test_bitset.m"
    {
#line 454 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__SetA_6, &mercury__test_bitset__SetListA_14);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SetListB_15 = (MR_Word) mercury__test_bitset__SetB_7;
#line 456 "test_bitset.m"
    {
#line 456 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__InSetA_10, &mercury__test_bitset__InSetListA_16);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__InSetListB_17 = (MR_Word) mercury__test_bitset__InSetB_12;
#line 458 "test_bitset.m"
    {
#line 458 "test_bitset.m"
      mercury__tree_bitset__to_sorted_list_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_23, mercury__test_bitset__OutSetA_11, &mercury__test_bitset__OutSetListA_18);
    }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__OutSetListB_19 = (MR_Word) mercury__test_bitset__OutSetB_13;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6020 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_30_30  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 461 "test_bitset.m"
    {
#line 461 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_30_30, mercury__test_bitset__SetListA_14, mercury__test_bitset__SetListB_15);
    }
#line 461 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 461 "test_bitset.m"
      {
#line 6036 "test_bitset.c"
        mercury__test_bitset__PolyConst1_33 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_33 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6053 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 462 "test_bitset.m"
        {
#line 462 "test_bitset.m"
          mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__InSetListA_16, mercury__test_bitset__InSetListB_17);
        }
#line 461 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 461 "test_bitset.m"
          {
#line 6069 "test_bitset.c"
            mercury__test_bitset__PolyConst1_37 = (MR_Integer) 1;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__divide_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_23 ;
	Index =  mercury__test_bitset__PolyConst1_37 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6086 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_38_38  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 463 "test_bitset.m"
            {
#line 463 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_38_38, mercury__test_bitset__OutSetListA_18, mercury__test_bitset__OutSetListB_19);
            }
#line 461 "test_bitset.m"
          }
#line 461 "test_bitset.m"
      }
#line 467 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 465 "test_bitset.m"
      {
#line 465 "test_bitset.m"
        {
#line 465 "test_bitset.m"
          MR_Word base;
#line 465 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "test_bitset.m"
          *mercury__test_bitset__ResultIn_8 = base;
#line 465 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__InSetA_10));
#line 465 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__InSetB_12));
#line 465 "test_bitset.m"
        }
#line 466 "test_bitset.m"
        {
#line 466 "test_bitset.m"
          MR_Word base;
#line 466 "test_bitset.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 466 "test_bitset.m"
          *mercury__test_bitset__ResultOut_9 = base;
#line 466 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__test_bitset__OutSetA_11));
#line 466 "test_bitset.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__test_bitset__OutSetB_13));
#line 466 "test_bitset.m"
        }
#line 465 "test_bitset.m"
      }
#line 467 "test_bitset.m"
    else
#line 468 "test_bitset.m"
      {
#line 468 "test_bitset.m"
        {
#line 468 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.divide\'/4", (MR_String) "failed");
#line 468 "test_bitset.m"
          return;
        }
#line 468 "test_bitset.m"
      }
#line 450 "test_bitset.m"
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
#line 435 "test_bitset.m"
  {
#line 435 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 435 "test_bitset.m"
    {
#line 435 "test_bitset.m"
      *mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__difference_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__A_4, mercury__test_bitset__B_5);
    }
#line 435 "test_bitset.m"
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
#line 434 "test_bitset.m"
  {
#line 434 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 434 "test_bitset.m"
    {
#line 434 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__intersect_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__Sets_3);
    }
#line 434 "test_bitset.m"
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
#line 433 "test_bitset.m"
  {
#line 433 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 433 "test_bitset.m"
    {
#line 433 "test_bitset.m"
      *mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__intersect_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__A_4, mercury__test_bitset__B_5);
    }
#line 433 "test_bitset.m"
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
#line 432 "test_bitset.m"
  {
#line 432 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 432 "test_bitset.m"
    {
#line 432 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__union_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__Sets_3);
    }
#line 432 "test_bitset.m"
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
#line 431 "test_bitset.m"
  {
#line 431 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 431 "test_bitset.m"
    {
#line 431 "test_bitset.m"
      *mercury__test_bitset__HeadVar__3_3 = mercury__test_bitset__union_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__A_4, mercury__test_bitset__B_5);
    }
#line 431 "test_bitset.m"
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
#line 426 "test_bitset.m"
  {
#line 426 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_8;
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_17_17;
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_18_18;
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_9;
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_10;
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__V_14_14;
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_22;
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_23;
#line 426 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_24;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6347 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 245 "tree_bitset.opt"
    {
#line 245 "tree_bitset.opt"
      mercury__test_bitset__SetA_9 = mercury__tree_bitset__difference_2_f_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__SetA1_4, mercury__test_bitset__SetA2_6);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__difference_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6374 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_18_18  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 128 "set_ordlist.opt"
    mercury__test_bitset__V_4_22 = (MR_Word) mercury__test_bitset__SetB1_5;
#line 128 "set_ordlist.opt"
    mercury__test_bitset__V_5_23 = (MR_Word) mercury__test_bitset__SetB2_7;
#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_18_18, mercury__test_bitset__V_4_22, mercury__test_bitset__V_5_23, &mercury__test_bitset__V_6_24);
    }
#line 128 "set_ordlist.opt"
    mercury__test_bitset__SetB_10 = (MR_Word) mercury__test_bitset__V_6_24;
#line 429 "test_bitset.m"
    {
#line 429 "test_bitset.m"
      mercury__test_bitset__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 0) = ((MR_Box) (mercury__test_bitset__SetA_9));
#line 429 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 1) = ((MR_Box) (mercury__test_bitset__SetB_10));
#line 429 "test_bitset.m"
    }
#line 429 "test_bitset.m"
    {
#line 429 "test_bitset.m"
      mercury__test_bitset__check2_5_p_0(mercury__test_bitset__TypeClassInfo_for_enum_15, (MR_String) "difference", mercury__test_bitset__HeadVar__1_1, mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_14_14, &mercury__test_bitset__Result_8);
    }
#line 426 "test_bitset.m"
    return mercury__test_bitset__Result_8;
#line 426 "test_bitset.m"
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
#line 420 "test_bitset.m"
  {
#line 420 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 420 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_4;
#line 420 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_14_14;
#line 420 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 420 "test_bitset.m"
    MR_Word mercury__test_bitset__SetsA_5;
#line 420 "test_bitset.m"
    MR_Word mercury__test_bitset__SetsB_6;
#line 420 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_7;
#line 420 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_8;
#line 420 "test_bitset.m"
    MR_Word mercury__test_bitset__V_11_11;

#line 421 "test_bitset.m"
    {
#line 421 "test_bitset.m"
      mercury__test_bitset__get_sets_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "intersect_list", mercury__test_bitset__SetsAB_3, &mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetsB_6);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6464 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 243 "tree_bitset.opt"
    {
#line 243 "tree_bitset.opt"
      mercury__tree_bitset__intersect_list_2_p_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetA_7);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6491 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 423 "test_bitset.m"
    {
#line 423 "test_bitset.m"
      mercury__test_bitset__SetB_8 = mercury__set_ordlist__intersect_list_1_f_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__SetsB_6);
    }
#line 424 "test_bitset.m"
    {
#line 424 "test_bitset.m"
      mercury__test_bitset__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 424 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 0) = ((MR_Box) (mercury__test_bitset__SetA_7));
#line 424 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 1) = ((MR_Box) (mercury__test_bitset__SetB_8));
#line 424 "test_bitset.m"
    }
#line 424 "test_bitset.m"
    {
#line 424 "test_bitset.m"
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "intersect_list", mercury__test_bitset__V_11_11, &mercury__test_bitset__Result_4);
    }
#line 420 "test_bitset.m"
    return mercury__test_bitset__Result_4;
#line 420 "test_bitset.m"
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
#line 415 "test_bitset.m"
  {
#line 415 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_8;
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_17_17;
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_18_18;
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_9;
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_10;
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__V_14_14;
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_22;
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_23;
#line 415 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_24;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6582 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 241 "tree_bitset.opt"
    {
#line 241 "tree_bitset.opt"
      mercury__test_bitset__SetA_9 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__SetA1_4, mercury__test_bitset__SetA2_6);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__intersect_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6609 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_18_18  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 118 "set_ordlist.opt"
    mercury__test_bitset__V_4_22 = (MR_Word) mercury__test_bitset__SetB1_5;
#line 118 "set_ordlist.opt"
    mercury__test_bitset__V_5_23 = (MR_Word) mercury__test_bitset__SetB2_7;
#line 119 "set_ordlist.opt"
    {
#line 119 "set_ordlist.opt"
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__test_bitset__TypeInfo_18_18, mercury__test_bitset__V_4_22, mercury__test_bitset__V_5_23, &mercury__test_bitset__V_6_24);
    }
#line 118 "set_ordlist.opt"
    mercury__test_bitset__SetB_10 = (MR_Word) mercury__test_bitset__V_6_24;
#line 418 "test_bitset.m"
    {
#line 418 "test_bitset.m"
      mercury__test_bitset__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 0) = ((MR_Box) (mercury__test_bitset__SetA_9));
#line 418 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 1) = ((MR_Box) (mercury__test_bitset__SetB_10));
#line 418 "test_bitset.m"
    }
#line 418 "test_bitset.m"
    {
#line 418 "test_bitset.m"
      mercury__test_bitset__check2_5_p_0(mercury__test_bitset__TypeClassInfo_for_enum_15, (MR_String) "intersect", mercury__test_bitset__HeadVar__1_1, mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_14_14, &mercury__test_bitset__Result_8);
    }
#line 415 "test_bitset.m"
    return mercury__test_bitset__Result_8;
#line 415 "test_bitset.m"
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
#line 409 "test_bitset.m"
  {
#line 409 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_4;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_14_14;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__SetsA_5;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__SetsB_6;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_7;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_8;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__V_11_11;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_20;
#line 409 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_21;

#line 410 "test_bitset.m"
    {
#line 410 "test_bitset.m"
      mercury__test_bitset__get_sets_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "union_list", mercury__test_bitset__SetsAB_3, &mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetsB_6);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6703 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 239 "tree_bitset.opt"
    {
#line 239 "tree_bitset.opt"
      mercury__tree_bitset__union_list_2_p_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__SetsA_5, &mercury__test_bitset__SetA_7);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__union_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6730 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 28 "set_ordlist.opt"
    mercury__test_bitset__V_2_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 27 "set_ordlist.opt"
    mercury__test_bitset__V_5_20 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 113 "set_ordlist.opt"
    {
#line 113 "set_ordlist.opt"
      mercury__set_ordlist__power_union_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__SetsB_6, mercury__test_bitset__V_5_20, &mercury__test_bitset__SetB_8);
    }
#line 413 "test_bitset.m"
    {
#line 413 "test_bitset.m"
      mercury__test_bitset__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 413 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 0) = ((MR_Box) (mercury__test_bitset__SetA_7));
#line 413 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_11_11, 1) = ((MR_Box) (mercury__test_bitset__SetB_8));
#line 413 "test_bitset.m"
    }
#line 413 "test_bitset.m"
    {
#line 413 "test_bitset.m"
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, (MR_String) "union_list", mercury__test_bitset__V_11_11, &mercury__test_bitset__Result_4);
    }
#line 409 "test_bitset.m"
    return mercury__test_bitset__Result_4;
#line 409 "test_bitset.m"
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
#line 404 "test_bitset.m"
  {
#line 404 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_8;
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_17_17;
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_18_18;
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_9;
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_10;
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__V_14_14;
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_22;
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_23;
#line 404 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_24;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6825 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 237 "tree_bitset.opt"
    {
#line 237 "tree_bitset.opt"
      mercury__test_bitset__SetA_9 = mercury__tree_bitset__union_2_f_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__SetA1_4, mercury__test_bitset__SetA2_6);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__union_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_15 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6852 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_18_18  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 105 "set_ordlist.opt"
    mercury__test_bitset__V_4_22 = (MR_Word) mercury__test_bitset__SetB1_5;
#line 105 "set_ordlist.opt"
    mercury__test_bitset__V_5_23 = (MR_Word) mercury__test_bitset__SetB2_7;
#line 106 "set_ordlist.opt"
    {
#line 106 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_18_18, mercury__test_bitset__V_4_22, mercury__test_bitset__V_5_23, &mercury__test_bitset__V_6_24);
    }
#line 105 "set_ordlist.opt"
    mercury__test_bitset__SetB_10 = (MR_Word) mercury__test_bitset__V_6_24;
#line 407 "test_bitset.m"
    {
#line 407 "test_bitset.m"
      mercury__test_bitset__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 0) = ((MR_Box) (mercury__test_bitset__SetA_9));
#line 407 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_14_14, 1) = ((MR_Box) (mercury__test_bitset__SetB_10));
#line 407 "test_bitset.m"
    }
#line 407 "test_bitset.m"
    {
#line 407 "test_bitset.m"
      mercury__test_bitset__check2_5_p_0(mercury__test_bitset__TypeClassInfo_for_enum_15, (MR_String) "union", mercury__test_bitset__HeadVar__1_1, mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_14_14, &mercury__test_bitset__Result_8);
    }
#line 404 "test_bitset.m"
    return mercury__test_bitset__Result_8;
#line 404 "test_bitset.m"
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
#line 384 "test_bitset.m"
  {
#line 384 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 384 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 384 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "test_bitset.m"
    MR_Box mercury__test_bitset__LeastA_8;
#line 396 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_9;

#line 385 "test_bitset.m"
    {
#line 385 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__remove_least_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, &mercury__test_bitset__LeastA_8, mercury__test_bitset__SetA0_5, &mercury__test_bitset__SetA1_9);
    }
#line 396 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 393 "test_bitset.m"
      {
#line 393 "test_bitset.m"
        MR_Box mercury__test_bitset__LeastB_10;
#line 393 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB1_11;
#line 386 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_34 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 386 "test_bitset.m"
        MR_Word mercury__test_bitset__V_5_35;

#line 104 "set_ordlist.opt"
        mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_6_34)) == (MR_mktag((MR_Integer) 1)));
#line 104 "set_ordlist.opt"
        if (mercury__test_bitset__succeeded)
#line 104 "set_ordlist.opt"
          {
#line 104 "set_ordlist.opt"
            mercury__test_bitset__LeastB_10 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_34, (MR_Integer) 0));
#line 104 "set_ordlist.opt"
            mercury__test_bitset__V_5_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_34, (MR_Integer) 1)));
#line 103 "set_ordlist.opt"
            mercury__test_bitset__SetB1_11 = (MR_Word) mercury__test_bitset__V_5_35;
#line 103 "set_ordlist.opt"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 104 "set_ordlist.opt"
          }
#line 393 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 390 "test_bitset.m"
          {
#line 387 "test_bitset.m"
            MR_Word mercury__test_bitset__TypeInfo_32_32;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_26 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 6974 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_32_32  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 387 "test_bitset.m"
            {
#line 387 "test_bitset.m"
              mercury__test_bitset__succeeded = mercury__builtin__unify_2_p_0(mercury__test_bitset__TypeInfo_32_32, mercury__test_bitset__LeastA_8, mercury__test_bitset__LeastB_10);
            }
#line 390 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 388 "test_bitset.m"
              {
#line 388 "test_bitset.m"
                MR_Word mercury__test_bitset__V_16_16;

#line 388 "test_bitset.m"
                *mercury__test_bitset__Least_4 = mercury__test_bitset__LeastA_8;
#line 389 "test_bitset.m"
                {
#line 389 "test_bitset.m"
                  mercury__test_bitset__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "test_bitset.m"
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__V_16_16, 0) = ((MR_Box) (mercury__test_bitset__SetA1_9));
#line 389 "test_bitset.m"
                  MR_hl_field(MR_mktag(0), mercury__test_bitset__V_16_16, 1) = ((MR_Box) (mercury__test_bitset__SetB1_11));
#line 389 "test_bitset.m"
                }
#line 389 "test_bitset.m"
                {
#line 389 "test_bitset.m"
                  mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_26, (MR_String) "remove_least", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_16_16, mercury__test_bitset__Result_7);
                }
#line 388 "test_bitset.m"
              }
#line 390 "test_bitset.m"
            else
#line 391 "test_bitset.m"
              {
#line 391 "test_bitset.m"
                {
#line 391 "test_bitset.m"
                  mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "wrong least element");
                }
#line 391 "test_bitset.m"
              }
#line 390 "test_bitset.m"
          }
#line 393 "test_bitset.m"
        else
#line 394 "test_bitset.m"
          {
#line 394 "test_bitset.m"
            {
#line 394 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_least\'/3", (MR_String) "should be no least value");
            }
#line 394 "test_bitset.m"
          }
#line 393 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 393 "test_bitset.m"
      }
#line 396 "test_bitset.m"
    else
#line 398 "test_bitset.m"
      {
#line 398 "test_bitset.m"
        MR_String mercury__test_bitset__V_23_23;
#line 398 "test_bitset.m"
        MR_String mercury__test_bitset__V_24_24;
#line 398 "test_bitset.m"
        MR_String mercury__test_bitset__V_25_25;
#line 398 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_38 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 104 "set_ordlist.opt"
        MR_Box mercury__test_bitset__V_12_12;
#line 104 "set_ordlist.opt"
        MR_Word mercury__test_bitset__V_5_39;

#line 104 "set_ordlist.opt"
        mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_6_38)) == (MR_mktag((MR_Integer) 1)));
#line 104 "set_ordlist.opt"
        if (mercury__test_bitset__succeeded)
#line 104 "set_ordlist.opt"
          {
#line 104 "set_ordlist.opt"
            mercury__test_bitset__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_38, (MR_Integer) 0));
#line 104 "set_ordlist.opt"
            mercury__test_bitset__V_5_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_6_38, (MR_Integer) 1)));
#line 397 "test_bitset.m"
            mercury__test_bitset__V_23_23 = (MR_String) "test_bitset";
#line 397 "test_bitset.m"
            mercury__test_bitset__V_24_24 = (MR_String) "predicate \140test_bitset.remove_least\'/3";
#line 397 "test_bitset.m"
            mercury__test_bitset__V_25_25 = (MR_String) "failed";
#line 397 "test_bitset.m"
            {
#line 397 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_23_23, mercury__test_bitset__V_24_24, mercury__test_bitset__V_25_25);
            }
#line 397 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 104 "set_ordlist.opt"
          }
#line 398 "test_bitset.m"
      }
#line 384 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 384 "test_bitset.m"
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
#line 369 "test_bitset.m"
  {
#line 369 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 369 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 369 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 378 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_8;
#line 232 "tree_bitset.opt"
    MR_Word mercury__test_bitset__TypeInfo_10_32;
#line 232 "tree_bitset.opt"
    MR_Word mercury__test_bitset__TypeInfo_11_33;
#line 232 "tree_bitset.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_38;
#line 232 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_6_30;
#line 232 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_4_36;
#line 232 "tree_bitset.opt"
    MR_Integer mercury__test_bitset__V_5_45;
#line 232 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_54_54;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7144 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_38  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_8_38, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_45);
    }
#line 896 "list.opt"
    {
#line 896 "list.opt"
      mercury__list__merge_sort_2_3_p_0(mercury__test_bitset__TypeInfo_8_38, mercury__test_bitset__V_5_45, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_36);
    }
#line 189 "tree_bitset.opt"
    {
#line 189 "tree_bitset.opt"
      mercury__test_bitset__V_6_30 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_22, mercury__test_bitset__V_4_36);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7181 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_32  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 241 "tree_bitset.opt"
    {
#line 241 "tree_bitset.opt"
      mercury__test_bitset__V_54_54 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_10_32, mercury__test_bitset__SetA0_5, mercury__test_bitset__V_6_30);
    }
#line 212 "tree_bitset.opt"
    {
#line 212 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_10_32, mercury__test_bitset__V_6_30, mercury__test_bitset__V_54_54);
    }
#line 232 "tree_bitset.opt"
    if (mercury__test_bitset__succeeded)
#line 232 "tree_bitset.opt"
      {
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7217 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_33  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 235 "tree_bitset.opt"
        {
#line 235 "tree_bitset.opt"
          mercury__test_bitset__SetA1_8 = mercury__tree_bitset__difference_2_f_0(mercury__test_bitset__TypeInfo_11_33, mercury__test_bitset__SetA0_5, mercury__test_bitset__V_6_30);
        }
#line 235 "tree_bitset.opt"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 232 "tree_bitset.opt"
      }
#line 378 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 375 "test_bitset.m"
      {
#line 375 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB1_9;
#line 371 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_24_24;
#line 371 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_63;
#line 371 "test_bitset.m"
        MR_Word mercury__test_bitset__V_4_67;
#line 371 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_69;
#line 371 "test_bitset.m"
        MR_Word mercury__test_bitset__V_4_70;
#line 371 "test_bitset.m"
        MR_Word mercury__test_bitset__V_5_71;
#line 371 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_72;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7269 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_24_24  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 100 "set_ordlist.opt"
        {
#line 100 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__Es_4, &mercury__test_bitset__V_6_63);
        }
#line 371 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 371 "test_bitset.m"
          {
#line 118 "set_ordlist.opt"
            mercury__test_bitset__V_4_67 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 118 "set_ordlist.opt"
            mercury__test_bitset__V_6_69 = (MR_Word) mercury__test_bitset__V_6_63;
#line 119 "set_ordlist.opt"
            {
#line 119 "set_ordlist.opt"
              mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__V_4_67, mercury__test_bitset__V_6_69, mercury__test_bitset__V_6_69);
            }
#line 371 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 371 "test_bitset.m"
              {
#line 128 "set_ordlist.opt"
                mercury__test_bitset__V_4_70 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 128 "set_ordlist.opt"
                mercury__test_bitset__V_5_71 = (MR_Word) mercury__test_bitset__V_6_63;
#line 129 "set_ordlist.opt"
                {
#line 129 "set_ordlist.opt"
                  mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__V_4_70, mercury__test_bitset__V_5_71, &mercury__test_bitset__V_6_72);
                }
#line 128 "set_ordlist.opt"
                mercury__test_bitset__SetB1_9 = (MR_Word) mercury__test_bitset__V_6_72;
#line 128 "set_ordlist.opt"
                mercury__test_bitset__succeeded = MR_TRUE;
#line 371 "test_bitset.m"
              }
#line 371 "test_bitset.m"
          }
#line 375 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 372 "test_bitset.m"
          {
#line 372 "test_bitset.m"
            MR_Word mercury__test_bitset__V_15_15;

#line 374 "test_bitset.m"
            {
#line 374 "test_bitset.m"
              mercury__test_bitset__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_15_15, 0) = ((MR_Box) (mercury__test_bitset__SetA1_8));
#line 374 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_15_15, 1) = ((MR_Box) (mercury__test_bitset__SetB1_9));
#line 374 "test_bitset.m"
            }
#line 374 "test_bitset.m"
            {
#line 374 "test_bitset.m"
              mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_22, (MR_String) "remove_list", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_15_15, mercury__test_bitset__Result_7);
            }
#line 372 "test_bitset.m"
          }
#line 375 "test_bitset.m"
        else
#line 376 "test_bitset.m"
          {
#line 376 "test_bitset.m"
            {
#line 376 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove_list\'/3", (MR_String) "unexpected success");
            }
#line 376 "test_bitset.m"
          }
#line 375 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 375 "test_bitset.m"
      }
#line 378 "test_bitset.m"
    else
#line 380 "test_bitset.m"
      {
#line 380 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_26_26;
#line 380 "test_bitset.m"
        MR_String mercury__test_bitset__V_19_19;
#line 380 "test_bitset.m"
        MR_String mercury__test_bitset__V_20_20;
#line 380 "test_bitset.m"
        MR_String mercury__test_bitset__V_21_21;
#line 380 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_76;
#line 380 "test_bitset.m"
        MR_Word mercury__test_bitset__V_4_80;
#line 380 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_82;
#line 380 "test_bitset.m"
        MR_Word mercury__test_bitset__V_4_83;
#line 380 "test_bitset.m"
        MR_Word mercury__test_bitset__V_5_84;
#line 129 "set_ordlist.opt"
        MR_Word mercury__test_bitset__V_6_85;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7394 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 100 "set_ordlist.opt"
        {
#line 100 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__Es_4, &mercury__test_bitset__V_6_76);
        }
#line 380 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 380 "test_bitset.m"
          {
#line 118 "set_ordlist.opt"
            mercury__test_bitset__V_4_80 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 118 "set_ordlist.opt"
            mercury__test_bitset__V_6_82 = (MR_Word) mercury__test_bitset__V_6_76;
#line 119 "set_ordlist.opt"
            {
#line 119 "set_ordlist.opt"
              mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__V_4_80, mercury__test_bitset__V_6_82, mercury__test_bitset__V_6_82);
            }
#line 380 "test_bitset.m"
            if (mercury__test_bitset__succeeded)
#line 380 "test_bitset.m"
              {
#line 128 "set_ordlist.opt"
                mercury__test_bitset__V_4_83 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 128 "set_ordlist.opt"
                mercury__test_bitset__V_5_84 = (MR_Word) mercury__test_bitset__V_6_76;
#line 129 "set_ordlist.opt"
                {
#line 129 "set_ordlist.opt"
                  mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__V_4_83, mercury__test_bitset__V_5_84, &mercury__test_bitset__V_6_85);
                }
#line 379 "test_bitset.m"
                mercury__test_bitset__V_19_19 = (MR_String) "test_bitset";
#line 379 "test_bitset.m"
                mercury__test_bitset__V_20_20 = (MR_String) "predicate \140test_bitset.remove_list\'/3";
#line 379 "test_bitset.m"
                mercury__test_bitset__V_21_21 = (MR_String) "unexpected failure";
#line 379 "test_bitset.m"
                {
#line 379 "test_bitset.m"
                  mercury__require__unexpected_3_p_0(mercury__test_bitset__V_19_19, mercury__test_bitset__V_20_20, mercury__test_bitset__V_21_21);
                }
#line 379 "test_bitset.m"
                mercury__test_bitset__succeeded = MR_TRUE;
#line 380 "test_bitset.m"
              }
#line 380 "test_bitset.m"
          }
#line 380 "test_bitset.m"
      }
#line 369 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 369 "test_bitset.m"
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
#line 354 "test_bitset.m"
  {
#line 354 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 354 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 354 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 363 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_8;

#line 230 "tree_bitset.opt"
    {
#line 230 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset__contains_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_22, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
    }
#line 229 "tree_bitset.opt"
    if (mercury__test_bitset__succeeded)
#line 229 "tree_bitset.opt"
      {
#line 231 "tree_bitset.opt"
        {
#line 231 "tree_bitset.opt"
          mercury__test_bitset__SetA1_8 = mercury__tree_bitset__delete_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_22, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
        }
#line 231 "tree_bitset.opt"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 229 "tree_bitset.opt"
      }
#line 363 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 360 "test_bitset.m"
      {
#line 360 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB1_9;
#line 356 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_24_24;
#line 356 "test_bitset.m"
        MR_Word mercury__test_bitset__V_5_31;
#line 356 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_32;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7528 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_24_24  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 97 "set_ordlist.opt"
        mercury__test_bitset__V_5_31 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 98 "set_ordlist.opt"
        {
#line 98 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__delete_first_3_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__V_5_31, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_32);
        }
#line 356 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 356 "test_bitset.m"
          {
#line 97 "set_ordlist.opt"
            mercury__test_bitset__SetB1_9 = (MR_Word) mercury__test_bitset__V_6_32;
#line 97 "set_ordlist.opt"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 356 "test_bitset.m"
          }
#line 360 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 357 "test_bitset.m"
          {
#line 357 "test_bitset.m"
            MR_Word mercury__test_bitset__V_15_15;

#line 359 "test_bitset.m"
            {
#line 359 "test_bitset.m"
              mercury__test_bitset__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 359 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_15_15, 0) = ((MR_Box) (mercury__test_bitset__SetA1_8));
#line 359 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_15_15, 1) = ((MR_Box) (mercury__test_bitset__SetB1_9));
#line 359 "test_bitset.m"
            }
#line 359 "test_bitset.m"
            {
#line 359 "test_bitset.m"
              mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_22, (MR_String) "remove", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_15_15, mercury__test_bitset__Result_7);
            }
#line 357 "test_bitset.m"
          }
#line 360 "test_bitset.m"
        else
#line 361 "test_bitset.m"
          {
#line 361 "test_bitset.m"
            {
#line 361 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.remove\'/3", (MR_String) "unexpected success");
            }
#line 361 "test_bitset.m"
          }
#line 360 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 360 "test_bitset.m"
      }
#line 363 "test_bitset.m"
    else
#line 365 "test_bitset.m"
      {
#line 365 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_26_26;
#line 365 "test_bitset.m"
        MR_String mercury__test_bitset__V_19_19;
#line 365 "test_bitset.m"
        MR_String mercury__test_bitset__V_20_20;
#line 365 "test_bitset.m"
        MR_String mercury__test_bitset__V_21_21;
#line 365 "test_bitset.m"
        MR_Word mercury__test_bitset__V_5_34;
#line 98 "set_ordlist.opt"
        MR_Word mercury__test_bitset__V_6_35;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_22 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7623 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_26_26  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 97 "set_ordlist.opt"
        mercury__test_bitset__V_5_34 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 98 "set_ordlist.opt"
        {
#line 98 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__list__delete_first_3_p_0(mercury__test_bitset__TypeInfo_26_26, mercury__test_bitset__V_5_34, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_35);
        }
#line 365 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 365 "test_bitset.m"
          {
#line 364 "test_bitset.m"
            mercury__test_bitset__V_19_19 = (MR_String) "test_bitset";
#line 364 "test_bitset.m"
            mercury__test_bitset__V_20_20 = (MR_String) "predicate \140test_bitset.remove\'/3";
#line 364 "test_bitset.m"
            mercury__test_bitset__V_21_21 = (MR_String) "unexpected failure";
#line 364 "test_bitset.m"
            {
#line 364 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_19_19, mercury__test_bitset__V_20_20, mercury__test_bitset__V_21_21);
            }
#line 364 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 365 "test_bitset.m"
          }
#line 365 "test_bitset.m"
      }
#line 354 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 354 "test_bitset.m"
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
#line 349 "test_bitset.m"
  {
#line 349 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_10_24;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_8_29;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_9;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_12;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_22;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_27;
#line 349 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_36;
#line 349 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_50;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_56;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_57;
#line 349 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_58;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7728 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_24  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7750 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_29  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_36);
    }
#line 896 "list.opt"
    {
#line 896 "list.opt"
      mercury__list__merge_sort_2_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__V_5_36, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_27);
    }
#line 189 "tree_bitset.opt"
    {
#line 189 "tree_bitset.opt"
      mercury__test_bitset__V_6_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__V_4_27);
    }
#line 225 "tree_bitset.opt"
    {
#line 225 "tree_bitset.opt"
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__difference_2_f_0(mercury__test_bitset__TypeInfo_10_24, mercury__test_bitset__SetA0_5, mercury__test_bitset__V_6_22);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7792 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_50);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_5_50, mercury__test_bitset__Es_4, &mercury__test_bitset__V_5_57);
    }
#line 128 "set_ordlist.opt"
    mercury__test_bitset__V_4_56 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_4_56, mercury__test_bitset__V_5_57, &mercury__test_bitset__V_6_58);
    }
#line 128 "set_ordlist.opt"
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_58;
#line 352 "test_bitset.m"
    {
#line 352 "test_bitset.m"
      mercury__test_bitset__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 352 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 352 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 352 "test_bitset.m"
    }
#line 352 "test_bitset.m"
    {
#line 352 "test_bitset.m"
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "delete_list", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_12_12, mercury__test_bitset__Result_7);
#line 352 "test_bitset.m"
      return;
    }
#line 349 "test_bitset.m"
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
#line 344 "test_bitset.m"
  {
#line 344 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_9;
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_12;
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__V_11_25;
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_26;
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_27;
#line 344 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_28;

#line 223 "tree_bitset.opt"
    {
#line 223 "tree_bitset.opt"
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__delete_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__delete_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 7898 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 87 "set_ordlist.opt"
    mercury__test_bitset__V_11_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 86 "set_ordlist.opt"
    {
#line 86 "set_ordlist.opt"
      mercury__test_bitset__V_5_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 86 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_5_27, 0) = mercury__test_bitset__E_4;
#line 86 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_5_27, 1) = ((MR_Box) (mercury__test_bitset__V_11_25));
#line 86 "set_ordlist.opt"
    }
#line 128 "set_ordlist.opt"
    mercury__test_bitset__V_4_26 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_4_26, mercury__test_bitset__V_5_27, &mercury__test_bitset__V_6_28);
    }
#line 128 "set_ordlist.opt"
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_28;
#line 347 "test_bitset.m"
    {
#line 347 "test_bitset.m"
      mercury__test_bitset__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 347 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 347 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 347 "test_bitset.m"
    }
#line 347 "test_bitset.m"
    {
#line 347 "test_bitset.m"
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "delete", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_12_12, mercury__test_bitset__Result_7);
#line 347 "test_bitset.m"
      return;
    }
#line 344 "test_bitset.m"
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
#line 339 "test_bitset.m"
  {
#line 339 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_10_24;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_8_29;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_9;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_12;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_22;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_27;
#line 339 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_36;
#line 339 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_50;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_56;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_57;
#line 339 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_58;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8011 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_24  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8033 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_29  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_36);
    }
#line 896 "list.opt"
    {
#line 896 "list.opt"
      mercury__list__merge_sort_2_3_p_0(mercury__test_bitset__TypeInfo_8_29, mercury__test_bitset__V_5_36, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_27);
    }
#line 189 "tree_bitset.opt"
    {
#line 189 "tree_bitset.opt"
      mercury__test_bitset__V_6_22 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__V_4_27);
    }
#line 218 "tree_bitset.opt"
    {
#line 218 "tree_bitset.opt"
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__union_2_f_0(mercury__test_bitset__TypeInfo_10_24, mercury__test_bitset__V_6_22, mercury__test_bitset__SetA0_5);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8075 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__Es_4, (MR_Integer) 0, &mercury__test_bitset__V_5_50);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_5_50, mercury__test_bitset__Es_4, &mercury__test_bitset__V_4_56);
    }
#line 105 "set_ordlist.opt"
    mercury__test_bitset__V_5_57 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 106 "set_ordlist.opt"
    {
#line 106 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_4_56, mercury__test_bitset__V_5_57, &mercury__test_bitset__V_6_58);
    }
#line 105 "set_ordlist.opt"
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_58;
#line 342 "test_bitset.m"
    {
#line 342 "test_bitset.m"
      mercury__test_bitset__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 342 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 342 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 342 "test_bitset.m"
    }
#line 342 "test_bitset.m"
    {
#line 342 "test_bitset.m"
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "insert_list", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_12_12, mercury__test_bitset__Result_7);
#line 342 "test_bitset.m"
      return;
    }
#line 339 "test_bitset.m"
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
#line 321 "test_bitset.m"
  {
#line 321 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 321 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 321 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 329 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;

#line 322 "test_bitset.m"
    {
#line 322 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__insert_new_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_20, mercury__test_bitset__E_4, mercury__test_bitset__SetA0_5, &mercury__test_bitset__SetA_8);
    }
#line 329 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 325 "test_bitset.m"
      {
#line 325 "test_bitset.m"
        MR_Word mercury__test_bitset__SetB_9;
#line 323 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_22_22;
#line 323 "test_bitset.m"
        MR_Word mercury__test_bitset__V_5_26;
#line 323 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_27;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_20 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8180 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_22_22  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 76 "set_ordlist.opt"
        mercury__test_bitset__V_5_26 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 77 "set_ordlist.opt"
        {
#line 77 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(mercury__test_bitset__TypeInfo_22_22, mercury__test_bitset__V_5_26, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_27);
        }
#line 323 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 323 "test_bitset.m"
          {
#line 76 "set_ordlist.opt"
            mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_27;
#line 76 "set_ordlist.opt"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 323 "test_bitset.m"
          }
#line 325 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 324 "test_bitset.m"
          {
#line 324 "test_bitset.m"
            MR_Word mercury__test_bitset__V_13_13;

#line 324 "test_bitset.m"
            {
#line 324 "test_bitset.m"
              mercury__test_bitset__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_13, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 324 "test_bitset.m"
              MR_hl_field(MR_mktag(0), mercury__test_bitset__V_13_13, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 324 "test_bitset.m"
            }
#line 324 "test_bitset.m"
            {
#line 324 "test_bitset.m"
              mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_20, (MR_String) "insert", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_13_13, mercury__test_bitset__Result_7);
            }
#line 324 "test_bitset.m"
          }
#line 325 "test_bitset.m"
        else
#line 326 "test_bitset.m"
          {
#line 326 "test_bitset.m"
            {
#line 326 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.insert_new\'/3", (MR_String) "success/fail in tree_bitset/set_ordlist");
            }
#line 326 "test_bitset.m"
          }
#line 325 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 325 "test_bitset.m"
      }
#line 329 "test_bitset.m"
    else
#line 333 "test_bitset.m"
      {
#line 333 "test_bitset.m"
        MR_Word mercury__test_bitset__TypeInfo_24_24;
#line 333 "test_bitset.m"
        MR_String mercury__test_bitset__V_17_17;
#line 333 "test_bitset.m"
        MR_String mercury__test_bitset__V_18_18;
#line 333 "test_bitset.m"
        MR_String mercury__test_bitset__V_19_19;
#line 333 "test_bitset.m"
        MR_Word mercury__test_bitset__V_5_29;
#line 77 "set_ordlist.opt"
        MR_Word mercury__test_bitset__V_6_30;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_20 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8275 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_24_24  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 76 "set_ordlist.opt"
        mercury__test_bitset__V_5_29 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 77 "set_ordlist.opt"
        {
#line 77 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(mercury__test_bitset__TypeInfo_24_24, mercury__test_bitset__V_5_29, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_30);
        }
#line 333 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 333 "test_bitset.m"
          {
#line 331 "test_bitset.m"
            mercury__test_bitset__V_17_17 = (MR_String) "test_bitset";
#line 331 "test_bitset.m"
            mercury__test_bitset__V_18_18 = (MR_String) "predicate \140test_bitset.insert_new\'/3";
#line 332 "test_bitset.m"
            mercury__test_bitset__V_19_19 = (MR_String) "fail/success in tree_bitset/set_ordlist";
#line 331 "test_bitset.m"
            {
#line 331 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_17_17, mercury__test_bitset__V_18_18, mercury__test_bitset__V_19_19);
            }
#line 331 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 333 "test_bitset.m"
          }
#line 333 "test_bitset.m"
      }
#line 321 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 321 "test_bitset.m"
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
#line 316 "test_bitset.m"
  {
#line 316 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 316 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;
#line 316 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 316 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 316 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_8;
#line 316 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_9;
#line 316 "test_bitset.m"
    MR_Word mercury__test_bitset__V_12_12;
#line 316 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_20;
#line 316 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_21;

#line 216 "tree_bitset.opt"
    {
#line 216 "tree_bitset.opt"
      mercury__test_bitset__SetA_8 = mercury__tree_bitset__insert_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__SetA0_5, mercury__test_bitset__E_4);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__insert_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8371 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 72 "set_ordlist.opt"
    mercury__test_bitset__V_5_20 = (MR_Word) mercury__test_bitset__SetB0_6;
#line 73 "set_ordlist.opt"
    {
#line 73 "set_ordlist.opt"
      mercury__set_ordlist__insert_loop_3_p_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__V_5_20, mercury__test_bitset__E_4, &mercury__test_bitset__V_6_21);
    }
#line 72 "set_ordlist.opt"
    mercury__test_bitset__SetB_9 = (MR_Word) mercury__test_bitset__V_6_21;
#line 319 "test_bitset.m"
    {
#line 319 "test_bitset.m"
      mercury__test_bitset__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 319 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 0) = ((MR_Box) (mercury__test_bitset__SetA_8));
#line 319 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_12_12, 1) = ((MR_Box) (mercury__test_bitset__SetB_9));
#line 319 "test_bitset.m"
    }
#line 319 "test_bitset.m"
    {
#line 319 "test_bitset.m"
      mercury__test_bitset__check1_4_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, (MR_String) "insert", mercury__test_bitset__HeadVar__2_2, mercury__test_bitset__V_12_12, mercury__test_bitset__Result_7);
#line 319 "test_bitset.m"
      return;
    }
#line 316 "test_bitset.m"
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
#line 312 "test_bitset.m"
  {
#line 312 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 312 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;

#line 312 "test_bitset.m"
    {
#line 312 "test_bitset.m"
      return mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__bitset_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__Set_3);
    }
#line 312 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 312 "test_bitset.m"
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
#line 303 "test_bitset.m"
  {
#line 303 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 303 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;
#line 303 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedList_8;
#line 101 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_10_11;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__from_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_4 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8472 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_11  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SortedList_8 = (MR_Word) mercury__test_bitset__Set_3;
#line 305 "test_bitset.m"
    {
#line 305 "test_bitset.m"
      return mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__SortedList_8);
    }
#line 303 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 303 "test_bitset.m"
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
#line 307 "test_bitset.m"
  {
#line 307 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 307 "test_bitset.m"
    MR_Word mercury__test_bitset__Set_5;
#line 307 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_10_10;
#line 307 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedList_6;
#line 307 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_14;

#line 308 "test_bitset.m"
    {
#line 308 "test_bitset.m"
      mercury__test_bitset__SortedList_6 = mercury__test_bitset__to_sorted_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_8, mercury__test_bitset__HeadVar__1_1);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__bitset_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8535 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_10  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 68 "list.opt"
    if ((mercury__test_bitset__SortedList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "list.opt"
      mercury__test_bitset__V_4_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "list.opt"
    else
#line 69 "list.opt"
      {
#line 69 "list.opt"
        MR_Box mercury__test_bitset__V_3_15 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__SortedList_6, (MR_Integer) 0));
#line 69 "list.opt"
        MR_Word mercury__test_bitset__V_4_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__SortedList_6, (MR_Integer) 1)));

#line 70 "list.opt"
        {
#line 70 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__test_bitset__TypeInfo_10_10, mercury__test_bitset__V_3_15, mercury__test_bitset__V_4_16, &mercury__test_bitset__V_4_14);
        }
#line 69 "list.opt"
      }
#line 37 "set_ordlist.opt"
    mercury__test_bitset__Set_5 = (MR_Word) mercury__test_bitset__V_4_14;
#line 307 "test_bitset.m"
    return mercury__test_bitset__Set_5;
#line 307 "test_bitset.m"
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
#line 303 "test_bitset.m"
  {
#line 303 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 303 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;
#line 303 "test_bitset.m"
    MR_Word mercury__test_bitset__SortedList_6;
#line 101 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_10_10;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__set_to_bitset_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8606 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_10_10  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 43 "set_ordlist.opt"
    mercury__test_bitset__SortedList_6 = (MR_Word) mercury__test_bitset__Set_3;
#line 305 "test_bitset.m"
    {
#line 305 "test_bitset.m"
      return mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_8, mercury__test_bitset__SortedList_6);
    }
#line 303 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 303 "test_bitset.m"
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
#line 301 "test_bitset.m"
  {
#line 301 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 301 "test_bitset.m"
    {
#line 301 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__to_sorted_list_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 301 "test_bitset.m"
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
#line 300 "test_bitset.m"
  {
#line 300 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 300 "test_bitset.m"
    {
#line 300 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 300 "test_bitset.m"
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
#line 299 "test_bitset.m"
  {
#line 299 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 299 "test_bitset.m"
    {
#line 299 "test_bitset.m"
      *mercury__test_bitset__HeadVar__2_2 = mercury__test_bitset__list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 299 "test_bitset.m"
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
#line 290 "test_bitset.m"
  {
#line 290 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 290 "test_bitset.m"
    MR_Word mercury__test_bitset__List_5;
#line 290 "test_bitset.m"
    MR_Word mercury__test_bitset__A_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "test_bitset.m"
    MR_Word mercury__test_bitset__B_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "test_bitset.m"
    MR_Word mercury__test_bitset__ListA_6;
#line 290 "test_bitset.m"
    MR_Word mercury__test_bitset__ListB_7;
#line 290 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 290 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_56 = (MR_Word) mercury__test_bitset__A_3;
#line 293 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_15_15;

#line 322 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_56)) == (MR_mktag((MR_Integer) 1))))
#line 323 "tree_bitset.opt"
      {
#line 323 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_11_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_56, (MR_Integer) 1)));
#line 323 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_59 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_56, (MR_Integer) 0)));

#line 324 "tree_bitset.opt"
        {
#line 324 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_57_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__V_11_60, mercury__test_bitset__V_5_21, &mercury__test_bitset__ListA_6);
        }
#line 323 "tree_bitset.opt"
      }
#line 322 "tree_bitset.opt"
    else
#line 320 "tree_bitset.opt"
      {
#line 320 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_9_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_56, (MR_Integer) 0)));

#line 321 "tree_bitset.opt"
        {
#line 321 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_114_95_112_114_101_100_95_95_104_111_50_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_55_44_32_57_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__V_9_58, mercury__test_bitset__V_5_21, &mercury__test_bitset__ListA_6);
        }
#line 320 "tree_bitset.opt"
      }
#line 43 "set_ordlist.opt"
    mercury__test_bitset__ListB_7 = (MR_Word) mercury__test_bitset__B_4;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__to_sorted_list_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8782 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_15_15  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 293 "test_bitset.m"
    {
#line 293 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_15_15, mercury__test_bitset__ListA_6, mercury__test_bitset__ListB_7);
    }
#line 295 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 294 "test_bitset.m"
      mercury__test_bitset__List_5 = mercury__test_bitset__ListB_7;
#line 295 "test_bitset.m"
    else
#line 296 "test_bitset.m"
      {
#line 296 "test_bitset.m"
        {
#line 296 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.to_sorted_list\'/1", (MR_String) "failed");
        }
#line 296 "test_bitset.m"
      }
#line 290 "test_bitset.m"
    return mercury__test_bitset__List_5;
#line 290 "test_bitset.m"
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
#line 284 "test_bitset.m"
  {
#line 284 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 284 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_4;
#line 284 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_11_11;
#line 284 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_6;
#line 284 "test_bitset.m"
    MR_Word mercury__test_bitset__V_7_7;
#line 284 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_8;
#line 284 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_15;

#line 286 "test_bitset.m"
    {
#line 286 "test_bitset.m"
      mercury__test_bitset__V_7_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_9, mercury__test_bitset__List_3);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__sorted_list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8862 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_11  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 68 "list.opt"
    if ((mercury__test_bitset__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "list.opt"
      mercury__test_bitset__V_4_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "list.opt"
    else
#line 69 "list.opt"
      {
#line 69 "list.opt"
        MR_Box mercury__test_bitset__V_3_16 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_3, (MR_Integer) 0));
#line 69 "list.opt"
        MR_Word mercury__test_bitset__V_4_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__List_3, (MR_Integer) 1)));

#line 70 "list.opt"
        {
#line 70 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__test_bitset__TypeInfo_11_11, mercury__test_bitset__V_3_16, mercury__test_bitset__V_4_17, &mercury__test_bitset__V_4_15);
        }
#line 69 "list.opt"
      }
#line 37 "set_ordlist.opt"
    mercury__test_bitset__V_8_8 = (MR_Word) mercury__test_bitset__V_4_15;
#line 286 "test_bitset.m"
    {
#line 286 "test_bitset.m"
      mercury__test_bitset__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 286 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_6, 0) = ((MR_Box) (mercury__test_bitset__V_7_7));
#line 286 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_6, 1) = ((MR_Box) (mercury__test_bitset__V_8_8));
#line 286 "test_bitset.m"
    }
#line 285 "test_bitset.m"
    {
#line 285 "test_bitset.m"
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_9, (MR_String) "sorted_list_to_set", mercury__test_bitset__V_6_6, &mercury__test_bitset__Result_4);
    }
#line 284 "test_bitset.m"
    return mercury__test_bitset__Result_4;
#line 284 "test_bitset.m"
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
#line 279 "test_bitset.m"
  {
#line 279 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 279 "test_bitset.m"
    MR_Word mercury__test_bitset__Result_4;
#line 279 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_11_11;
#line 279 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_8_16;
#line 279 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_6;
#line 279 "test_bitset.m"
    MR_Word mercury__test_bitset__V_7_7;
#line 279 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_8;
#line 279 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_14;
#line 279 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_23;
#line 279 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_32;
#line 279 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_35;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8962 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_16  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_8_16, mercury__test_bitset__List_3, (MR_Integer) 0, &mercury__test_bitset__V_5_23);
    }
#line 896 "list.opt"
    {
#line 896 "list.opt"
      mercury__list__merge_sort_2_3_p_0(mercury__test_bitset__TypeInfo_8_16, mercury__test_bitset__V_5_23, mercury__test_bitset__List_3, &mercury__test_bitset__V_4_14);
    }
#line 189 "tree_bitset.opt"
    {
#line 189 "tree_bitset.opt"
      mercury__test_bitset__V_7_7 = mercury__tree_bitset__sorted_list_to_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_9, mercury__test_bitset__V_4_14);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__list_to_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 8999 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_11_11  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_11_11, mercury__test_bitset__List_3, (MR_Integer) 0, &mercury__test_bitset__V_5_35);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_11_11, mercury__test_bitset__V_5_35, mercury__test_bitset__List_3, &mercury__test_bitset__V_4_32);
    }
#line 31 "set_ordlist.opt"
    mercury__test_bitset__V_8_8 = (MR_Word) mercury__test_bitset__V_4_32;
#line 281 "test_bitset.m"
    {
#line 281 "test_bitset.m"
      mercury__test_bitset__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_6, 0) = ((MR_Box) (mercury__test_bitset__V_7_7));
#line 281 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_6, 1) = ((MR_Box) (mercury__test_bitset__V_8_8));
#line 281 "test_bitset.m"
    }
#line 280 "test_bitset.m"
    {
#line 280 "test_bitset.m"
      mercury__test_bitset__check0_3_p_0(mercury__test_bitset__TypeClassInfo_for_enum_9, (MR_String) "list_to_set", mercury__test_bitset__V_6_6, &mercury__test_bitset__Result_4);
    }
#line 279 "test_bitset.m"
    return mercury__test_bitset__Result_4;
#line 279 "test_bitset.m"
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
#line 264 "test_bitset.m"
  {
#line 264 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 264 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 264 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 264 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 210 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_19_19;

#line 241 "tree_bitset.opt"
    {
#line 241 "tree_bitset.opt"
      mercury__test_bitset__V_19_19 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA1_3, mercury__test_bitset__SetA2_5);
    }
#line 212 "tree_bitset.opt"
    {
#line 212 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA2_5, mercury__test_bitset__V_19_19);
    }
#line 271 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 268 "test_bitset.m"
      {
#line 118 "set_ordlist.opt"
        MR_Word mercury__test_bitset__V_4_30 = (MR_Word) mercury__test_bitset__SetB1_4;
#line 118 "set_ordlist.opt"
        MR_Word mercury__test_bitset__V_6_32 = (MR_Word) mercury__test_bitset__SetB2_6;

#line 119 "set_ordlist.opt"
        {
#line 119 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__V_4_30, mercury__test_bitset__V_6_32, mercury__test_bitset__V_6_32);
        }
#line 268 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 267 "test_bitset.m"
          {
#line 267 "test_bitset.m"
          }
#line 268 "test_bitset.m"
        else
#line 269 "test_bitset.m"
          {
#line 269 "test_bitset.m"
            {
#line 269 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.superset\'/2", (MR_String) "unexpected success");
            }
#line 269 "test_bitset.m"
          }
#line 268 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 268 "test_bitset.m"
      }
#line 271 "test_bitset.m"
    else
#line 273 "test_bitset.m"
      {
#line 273 "test_bitset.m"
        MR_String mercury__test_bitset__V_10_10;
#line 273 "test_bitset.m"
        MR_String mercury__test_bitset__V_11_11;
#line 273 "test_bitset.m"
        MR_String mercury__test_bitset__V_12_12;
#line 273 "test_bitset.m"
        MR_Word mercury__test_bitset__V_4_38 = (MR_Word) mercury__test_bitset__SetB1_4;
#line 273 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_40 = (MR_Word) mercury__test_bitset__SetB2_6;

#line 119 "set_ordlist.opt"
        {
#line 119 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__V_4_38, mercury__test_bitset__V_6_40, mercury__test_bitset__V_6_40);
        }
#line 273 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 273 "test_bitset.m"
          {
#line 272 "test_bitset.m"
            mercury__test_bitset__V_10_10 = (MR_String) "test_bitset";
#line 272 "test_bitset.m"
            mercury__test_bitset__V_11_11 = (MR_String) "predicate \140test_bitset.superset\'/2";
#line 272 "test_bitset.m"
            mercury__test_bitset__V_12_12 = (MR_String) "unexpected failure";
#line 272 "test_bitset.m"
            {
#line 272 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_10_10, mercury__test_bitset__V_11_11, mercury__test_bitset__V_12_12);
            }
#line 272 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 273 "test_bitset.m"
          }
#line 273 "test_bitset.m"
      }
#line 264 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 264 "test_bitset.m"
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
#line 251 "test_bitset.m"
  {
#line 251 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 251 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 251 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 251 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 251 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 210 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_17_17;

#line 241 "tree_bitset.opt"
    {
#line 241 "tree_bitset.opt"
      mercury__test_bitset__V_17_17 = mercury__tree_bitset__intersect_2_f_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA2_5, mercury__test_bitset__SetA1_3);
    }
#line 212 "tree_bitset.opt"
    {
#line 212 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__SetA1_3, mercury__test_bitset__V_17_17);
    }
#line 258 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 255 "test_bitset.m"
      {
#line 118 "set_ordlist.opt"
        MR_Word mercury__test_bitset__V_4_26 = (MR_Word) mercury__test_bitset__SetB2_6;
#line 118 "set_ordlist.opt"
        MR_Word mercury__test_bitset__V_6_28 = (MR_Word) mercury__test_bitset__SetB1_4;

#line 119 "set_ordlist.opt"
        {
#line 119 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__V_4_26, mercury__test_bitset__V_6_28, mercury__test_bitset__V_6_28);
        }
#line 255 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 254 "test_bitset.m"
          {
#line 254 "test_bitset.m"
          }
#line 255 "test_bitset.m"
        else
#line 256 "test_bitset.m"
          {
#line 256 "test_bitset.m"
            {
#line 256 "test_bitset.m"
              mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.subset\'/2", (MR_String) "unexpected success");
            }
#line 256 "test_bitset.m"
          }
#line 255 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 255 "test_bitset.m"
      }
#line 258 "test_bitset.m"
    else
#line 260 "test_bitset.m"
      {
#line 260 "test_bitset.m"
        MR_String mercury__test_bitset__V_10_10;
#line 260 "test_bitset.m"
        MR_String mercury__test_bitset__V_11_11;
#line 260 "test_bitset.m"
        MR_String mercury__test_bitset__V_12_12;
#line 260 "test_bitset.m"
        MR_Word mercury__test_bitset__V_4_32 = (MR_Word) mercury__test_bitset__SetB2_6;
#line 260 "test_bitset.m"
        MR_Word mercury__test_bitset__V_6_34 = (MR_Word) mercury__test_bitset__SetB1_4;

#line 119 "set_ordlist.opt"
        {
#line 119 "set_ordlist.opt"
          mercury__test_bitset__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__test_bitset__TypeInfo_for_T_13, mercury__test_bitset__V_4_32, mercury__test_bitset__V_6_34, mercury__test_bitset__V_6_34);
        }
#line 260 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 260 "test_bitset.m"
          {
#line 259 "test_bitset.m"
            mercury__test_bitset__V_10_10 = (MR_String) "test_bitset";
#line 259 "test_bitset.m"
            mercury__test_bitset__V_11_11 = (MR_String) "predicate \140test_bitset.subset\'/2";
#line 259 "test_bitset.m"
            mercury__test_bitset__V_12_12 = (MR_String) "unexpected failure";
#line 259 "test_bitset.m"
            {
#line 259 "test_bitset.m"
              mercury__require__unexpected_3_p_0(mercury__test_bitset__V_10_10, mercury__test_bitset__V_11_11, mercury__test_bitset__V_12_12);
            }
#line 259 "test_bitset.m"
            mercury__test_bitset__succeeded = MR_TRUE;
#line 260 "test_bitset.m"
          }
#line 260 "test_bitset.m"
      }
#line 251 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 251 "test_bitset.m"
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
#line 242 "test_bitset.m"
  {
#line 242 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 242 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 242 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 242 "test_bitset.m"
    MR_Word mercury__test_bitset__EqualA_7;
#line 242 "test_bitset.m"
    MR_Word mercury__test_bitset__EqualB_8;
#line 244 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_14_14;

#line 243 "test_bitset.m"
    {
#line 243 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__equal_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_12, mercury__test_bitset__SetA1_3, mercury__test_bitset__SetA2_5);
    }
#line 243 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 243 "test_bitset.m"
      mercury__test_bitset__EqualA_7 = (MR_Integer) 1;
#line 243 "test_bitset.m"
    else
#line 243 "test_bitset.m"
      mercury__test_bitset__EqualA_7 = (MR_Integer) 0;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__equal_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9336 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_14_14  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 54 "set_ordlist.opt"
    {
#line 54 "set_ordlist.opt"
      mercury__test_bitset__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__test_bitset__TypeInfo_14_14, mercury__test_bitset__SetB2_6, mercury__test_bitset__SetB1_4);
    }
#line 244 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 244 "test_bitset.m"
      mercury__test_bitset__EqualB_8 = (MR_Integer) 1;
#line 244 "test_bitset.m"
    else
#line 244 "test_bitset.m"
      mercury__test_bitset__EqualB_8 = (MR_Integer) 0;
#line 245 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__EqualA_7 == mercury__test_bitset__EqualB_8);
#line 247 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 246 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__EqualA_7 == (MR_Integer) 1);
#line 247 "test_bitset.m"
    else
#line 248 "test_bitset.m"
      {
#line 248 "test_bitset.m"
        {
#line 248 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.equal\'/2", (MR_String) "failed");
        }
#line 248 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 248 "test_bitset.m"
      }
#line 242 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 242 "test_bitset.m"
  }
#line 54 "test_bitset.m"
}

#line 84 "solutions.opt"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_3(
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__closure_arg,
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_1,
#line 84 "solutions.opt"
  MR_Box mercury__test_bitset__wrapper_arg_2,
#line 84 "solutions.opt"
  MR_Box * mercury__test_bitset__wrapper_arg_3)
#line 84 "solutions.opt"
{
#line 84 "solutions.opt"
  {
#line 84 "solutions.opt"
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;
#line 84 "solutions.opt"
    MR_Word mercury__test_bitset__conv0_HeadVar__3_3;

#line 84 "solutions.opt"
    {
#line 84 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), mercury__test_bitset__wrapper_arg_1, ((MR_Word) mercury__test_bitset__wrapper_arg_2), &mercury__test_bitset__conv0_HeadVar__3_3);
    }
#line 84 "solutions.opt"
    *mercury__test_bitset__wrapper_arg_3 = ((MR_Box) (mercury__test_bitset__conv0_HeadVar__3_3));
#line 84 "solutions.opt"
  }
#line 84 "solutions.opt"
}

#line 233 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_2(
#line 233 "test_bitset.m"
  MR_Box mercury__test_bitset__closure_arg,
#line 233 "test_bitset.m"
  MR_Box * mercury__test_bitset__wrapper_arg_1,
#line 233 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 233 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr)
#line 233 "test_bitset.m"
{
#line 233 "test_bitset.m"
  {
#line 233 "test_bitset.m"
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;

#line 233 "test_bitset.m"
    {
#line 233 "test_bitset.m"
      mercury__test_bitset__IntroducedFrom__pred__member__233__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 4))), mercury__test_bitset__wrapper_arg_1, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 233 "test_bitset.m"
      return;
    }
#line 233 "test_bitset.m"
  }
#line 233 "test_bitset.m"
}

#line 232 "test_bitset.m"
static void MR_CALL 
mercury__test_bitset__member_2_p_1_1(
#line 232 "test_bitset.m"
  MR_Box mercury__test_bitset__closure_arg,
#line 232 "test_bitset.m"
  MR_Box * mercury__test_bitset__wrapper_arg_1,
#line 232 "test_bitset.m"
  MR_Cont mercury__test_bitset__cont,
#line 232 "test_bitset.m"
  void * mercury__test_bitset__cont_env_ptr)
#line 232 "test_bitset.m"
{
#line 232 "test_bitset.m"
  {
#line 232 "test_bitset.m"
    MR_Box mercury__test_bitset__closure = mercury__test_bitset__closure_arg;

#line 232 "test_bitset.m"
    {
#line 232 "test_bitset.m"
      mercury__test_bitset__IntroducedFrom__pred__member__232__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__closure, (MR_Integer) 4))), mercury__test_bitset__wrapper_arg_1, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 232 "test_bitset.m"
      return;
    }
#line 232 "test_bitset.m"
  }
#line 232 "test_bitset.m"
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
#line 231 "test_bitset.m"
  {
#line 231 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_33_33;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_34_34;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeCtorInfo_13_52;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_14_53;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__PredA_14;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__PredB_16;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__SolnsA_18;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__SolnsB_19;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_41;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__V_6_45;
#line 231 "test_bitset.m"
    MR_Word mercury__test_bitset__V_7_47;
#line 231 "test_bitset.m"
    MR_Integer mercury__test_bitset__V_5_67;
#line 86 "solutions.opt"
    MR_Box mercury__test_bitset__conv1_V_5_41;
#line 236 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_36_36;

#line 232 "test_bitset.m"
    {
#line 232 "test_bitset.m"
      mercury__test_bitset__PredA_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 232 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[0]));
#line 232 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_1));
#line 232 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 232 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 3) = ((MR_Box) (mercury__test_bitset__TypeClassInfo_for_enum_27));
#line 232 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredA_14, 4) = ((MR_Box) (mercury__test_bitset__SetA_12));
#line 232 "test_bitset.m"
    }
#line 233 "test_bitset.m"
    {
#line 233 "test_bitset.m"
      mercury__test_bitset__PredB_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 233 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_7[1]));
#line 233 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_2));
#line 233 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 233 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 3) = ((MR_Box) (mercury__test_bitset__TypeClassInfo_for_enum_27));
#line 233 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__PredB_16, 4) = ((MR_Box) (mercury__test_bitset__SetB_13));
#line 233 "test_bitset.m"
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9573 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_33_33  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 85 "solutions.opt"
    mercury__test_bitset__V_7_47 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9582 "test_bitset.c"
    mercury__test_bitset__TypeCtorInfo_13_52 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 84 "solutions.opt"
    {
#line 84 "solutions.opt"
      mercury__test_bitset__V_6_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 84 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_45, 0) = ((MR_Box) (&mercury__test_bitset_scalar_common_8[0]));
#line 84 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_45, 1) = ((MR_Box) (mercury__test_bitset__member_2_p_1_3));
#line 84 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 84 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__V_6_45, 3) = ((MR_Box) (mercury__test_bitset__TypeInfo_33_33));
#line 84 "solutions.opt"
    }
#line 9598 "test_bitset.c"
    {
#line 9600 "test_bitset.c"
      mercury__test_bitset__TypeInfo_14_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9602 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_14_53, 0) = ((MR_Box) (mercury__test_bitset__TypeCtorInfo_13_52));
#line 9604 "test_bitset.c"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__TypeInfo_14_53, 1) = ((MR_Box) (mercury__test_bitset__TypeInfo_33_33));
#line 9606 "test_bitset.c"
    }
#line 86 "solutions.opt"
    {
#line 86 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__TypeInfo_14_53, mercury__test_bitset__PredA_14, mercury__test_bitset__V_6_45, ((MR_Box) (mercury__test_bitset__V_7_47)), &mercury__test_bitset__conv1_V_5_41);
    }
#line 86 "solutions.opt"
    mercury__test_bitset__V_5_41 = ((MR_Word) mercury__test_bitset__conv1_V_5_41);
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__V_5_41, (MR_Integer) 0, &mercury__test_bitset__V_5_67);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__test_bitset__TypeInfo_33_33, mercury__test_bitset__V_5_67, mercury__test_bitset__V_5_41, &mercury__test_bitset__SolnsA_18);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9640 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_34_34  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 235 "test_bitset.m"
    {
#line 235 "test_bitset.m"
      mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_53_95_95_91_49_44_32_50_93_95_48_2_p_in__solutions_0(mercury__test_bitset__TypeInfo_34_34, mercury__test_bitset__PredB_16, &mercury__test_bitset__SolnsB_19);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_1

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9667 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_36_36  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 236 "test_bitset.m"
    {
#line 236 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__list____Unify____list_1_0(mercury__test_bitset__TypeInfo_36_36, mercury__test_bitset__SolnsA_18, mercury__test_bitset__SolnsB_19);
    }
#line 238 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 237 "test_bitset.m"
      {
#line 237 "test_bitset.m"
        mercury__tree_bitset__member_2_p_1(mercury__test_bitset__TypeClassInfo_for_enum_27, mercury__test_bitset__E_1, mercury__test_bitset__SetA_12, mercury__test_bitset__cont, mercury__test_bitset__cont_env_ptr);
#line 237 "test_bitset.m"
        return;
      }
#line 238 "test_bitset.m"
    else
#line 239 "test_bitset.m"
      {
#line 239 "test_bitset.m"
        {
#line 239 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (out, in)");
#line 239 "test_bitset.m"
          return;
        }
#line 239 "test_bitset.m"
        {
#line 239 "test_bitset.m"
          mercury__test_bitset__cont(mercury__test_bitset__cont_env_ptr);
#line 239 "test_bitset.m"
          return;
        }
#line 239 "test_bitset.m"
      }
#line 231 "test_bitset.m"
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
#line 222 "test_bitset.m"
  {
#line 222 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 222 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 0)));
#line 222 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, (MR_Integer) 1)));
#line 222 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_6;
#line 222 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_7;
#line 224 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_29_29;

#line 223 "test_bitset.m"
    {
#line 223 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__member_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_27, mercury__test_bitset__E_1, mercury__test_bitset__SetA_4);
    }
#line 223 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 223 "test_bitset.m"
      mercury__test_bitset__InSetA_6 = (MR_Integer) 1;
#line 223 "test_bitset.m"
    else
#line 223 "test_bitset.m"
      mercury__test_bitset__InSetA_6 = (MR_Integer) 0;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__member_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_27 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9767 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_29_29  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 224 "test_bitset.m"
    {
#line 224 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__set_ordlist__member_2_p_0(mercury__test_bitset__TypeInfo_29_29, mercury__test_bitset__E_1, mercury__test_bitset__SetB_5);
    }
#line 224 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 224 "test_bitset.m"
      mercury__test_bitset__InSetB_7 = (MR_Integer) 1;
#line 224 "test_bitset.m"
    else
#line 224 "test_bitset.m"
      mercury__test_bitset__InSetB_7 = (MR_Integer) 0;
#line 225 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == mercury__test_bitset__InSetB_7);
#line 227 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 226 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == (MR_Integer) 1);
#line 227 "test_bitset.m"
    else
#line 228 "test_bitset.m"
      {
#line 228 "test_bitset.m"
        {
#line 228 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.member\'/2", (MR_String) "failed (in, in)");
        }
#line 228 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 228 "test_bitset.m"
      }
#line 222 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 222 "test_bitset.m"
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
#line 211 "test_bitset.m"
  {
#line 211 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 211 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetA_6;
#line 211 "test_bitset.m"
    MR_Word mercury__test_bitset__InSetB_7;
#line 213 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_13_13;

#line 212 "test_bitset.m"
    {
#line 212 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__contains_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__SetA_3, mercury__test_bitset__E_5);
    }
#line 212 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 212 "test_bitset.m"
      mercury__test_bitset__InSetA_6 = (MR_Integer) 1;
#line 212 "test_bitset.m"
    else
#line 212 "test_bitset.m"
      mercury__test_bitset__InSetA_6 = (MR_Integer) 0;
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__contains_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9867 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_13_13  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 71 "set_ordlist.opt"
    {
#line 71 "set_ordlist.opt"
      mercury__test_bitset__succeeded = mercury__set_ordlist__member_2_p_0(mercury__test_bitset__TypeInfo_13_13, mercury__test_bitset__E_5, mercury__test_bitset__SetB_4);
    }
#line 213 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 213 "test_bitset.m"
      mercury__test_bitset__InSetB_7 = (MR_Integer) 1;
#line 213 "test_bitset.m"
    else
#line 213 "test_bitset.m"
      mercury__test_bitset__InSetB_7 = (MR_Integer) 0;
#line 214 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == mercury__test_bitset__InSetB_7);
#line 216 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 215 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__InSetA_6 == (MR_Integer) 1);
#line 216 "test_bitset.m"
    else
#line 217 "test_bitset.m"
      {
#line 217 "test_bitset.m"
        {
#line 217 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.contains\'/2", (MR_String) "failed");
        }
#line 217 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 217 "test_bitset.m"
      }
#line 211 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 211 "test_bitset.m"
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
#line 202 "test_bitset.m"
  {
#line 202 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 202 "test_bitset.m"
    MR_Word mercury__test_bitset__A_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 202 "test_bitset.m"
    MR_Word mercury__test_bitset__B_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 202 "test_bitset.m"
    MR_Word mercury__test_bitset__NonEmptyA_7;
#line 202 "test_bitset.m"
    MR_Word mercury__test_bitset__NonEmptyB_9;
#line 203 "test_bitset.m"
    MR_Box mercury__test_bitset__AE_6;
#line 204 "test_bitset.m"
    MR_Box mercury__test_bitset__BE_8;
#line 204 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_21;
#line 204 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_22;
#line 205 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_17_17;

#line 203 "test_bitset.m"
    {
#line 203 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__tree_bitset__is_singleton_2_p_0(mercury__test_bitset__TypeClassInfo_for_enum_13, mercury__test_bitset__A_3, &mercury__test_bitset__AE_6);
    }
#line 203 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 203 "test_bitset.m"
      {
#line 203 "test_bitset.m"
        mercury__test_bitset__NonEmptyA_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 203 "test_bitset.m"
        MR_hl_field(MR_mktag(1), mercury__test_bitset__NonEmptyA_7, 0) = mercury__test_bitset__AE_6;
#line 203 "test_bitset.m"
      }
#line 203 "test_bitset.m"
    else
#line 203 "test_bitset.m"
      mercury__test_bitset__NonEmptyA_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 51 "set_ordlist.opt"
    mercury__test_bitset__V_4_21 = (MR_Word) mercury__test_bitset__B_4;
#line 52 "set_ordlist.opt"
    mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_4_21)) == (MR_mktag((MR_Integer) 1)));
#line 52 "set_ordlist.opt"
    if (mercury__test_bitset__succeeded)
#line 52 "set_ordlist.opt"
      {
#line 52 "set_ordlist.opt"
        mercury__test_bitset__BE_8 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_21, (MR_Integer) 0));
#line 52 "set_ordlist.opt"
        mercury__test_bitset__V_5_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_21, (MR_Integer) 1)));
#line 53 "set_ordlist.opt"
        mercury__test_bitset__succeeded = (mercury__test_bitset__V_5_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 52 "set_ordlist.opt"
      }
#line 204 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 204 "test_bitset.m"
      {
#line 204 "test_bitset.m"
        mercury__test_bitset__NonEmptyB_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 204 "test_bitset.m"
        MR_hl_field(MR_mktag(1), mercury__test_bitset__NonEmptyB_9, 0) = mercury__test_bitset__BE_8;
#line 204 "test_bitset.m"
      }
#line 204 "test_bitset.m"
    else
#line 204 "test_bitset.m"
      mercury__test_bitset__NonEmptyB_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__is_singleton_2_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10011 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_17_17  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 205 "test_bitset.m"
    {
#line 205 "test_bitset.m"
      mercury__test_bitset__succeeded = mercury__maybe____Unify____maybe_1_0(mercury__test_bitset__TypeInfo_17_17, mercury__test_bitset__NonEmptyA_7, mercury__test_bitset__NonEmptyB_9);
    }
#line 207 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 206 "test_bitset.m"
      {
#line 206 "test_bitset.m"
        mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__NonEmptyA_7)) == (MR_mktag((MR_Integer) 1)));
#line 206 "test_bitset.m"
        if (mercury__test_bitset__succeeded)
#line 206 "test_bitset.m"
          *mercury__test_bitset__E_5 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__NonEmptyA_7, (MR_Integer) 0));
#line 206 "test_bitset.m"
      }
#line 207 "test_bitset.m"
    else
#line 208 "test_bitset.m"
      {
#line 208 "test_bitset.m"
        {
#line 208 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_singleton\'/2", (MR_String) "failed");
        }
#line 208 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 208 "test_bitset.m"
      }
#line 202 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 202 "test_bitset.m"
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
#line 193 "test_bitset.m"
  {
#line 193 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 193 "test_bitset.m"
    MR_Word mercury__test_bitset__A_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 193 "test_bitset.m"
    MR_Word mercury__test_bitset__B_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 193 "test_bitset.m"
    MR_Word mercury__test_bitset__NonEmptyA_4;
#line 193 "test_bitset.m"
    MR_Word mercury__test_bitset__NonEmptyB_5;
#line 183 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_12_12 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 183 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_2_16 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 183 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_3_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 61 "set_ordlist.opt"
    MR_Word mercury__test_bitset__V_4_26;
#line 62 "set_ordlist.opt"
    MR_Box mercury__test_bitset__V_2_27;
#line 62 "set_ordlist.opt"
    MR_Word mercury__test_bitset__V_3_28;

#line 183 "tree_bitset.opt"
    {
#line 183 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_9, mercury__test_bitset__A_2, mercury__test_bitset__V_12_12);
    }
#line 185 "tree_bitset.opt"
    mercury__test_bitset__succeeded = !(mercury__test_bitset__succeeded);
#line 194 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 194 "test_bitset.m"
      mercury__test_bitset__NonEmptyA_4 = (MR_Integer) 1;
#line 194 "test_bitset.m"
    else
#line 194 "test_bitset.m"
      mercury__test_bitset__NonEmptyA_4 = (MR_Integer) 0;
#line 61 "set_ordlist.opt"
    mercury__test_bitset__V_4_26 = (MR_Word) mercury__test_bitset__B_3;
#line 62 "set_ordlist.opt"
    mercury__test_bitset__succeeded = ((MR_tag((MR_Word) mercury__test_bitset__V_4_26)) == (MR_mktag((MR_Integer) 1)));
#line 62 "set_ordlist.opt"
    if (mercury__test_bitset__succeeded)
#line 62 "set_ordlist.opt"
      {
#line 62 "set_ordlist.opt"
        mercury__test_bitset__V_2_27 = (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_26, (MR_Integer) 0));
#line 62 "set_ordlist.opt"
        mercury__test_bitset__V_3_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_26, (MR_Integer) 1)));
#line 195 "test_bitset.m"
        mercury__test_bitset__NonEmptyB_5 = (MR_Integer) 1;
#line 62 "set_ordlist.opt"
      }
#line 62 "set_ordlist.opt"
    else
#line 195 "test_bitset.m"
      mercury__test_bitset__NonEmptyB_5 = (MR_Integer) 0;
#line 196 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__NonEmptyA_4 == mercury__test_bitset__NonEmptyB_5);
#line 198 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 197 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__NonEmptyA_4 == (MR_Integer) 1);
#line 198 "test_bitset.m"
    else
#line 199 "test_bitset.m"
      {
#line 199 "test_bitset.m"
        {
#line 199 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_non_empty\'/1", (MR_String) "failed");
        }
#line 199 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 199 "test_bitset.m"
      }
#line 193 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 193 "test_bitset.m"
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
#line 184 "test_bitset.m"
  {
#line 184 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 184 "test_bitset.m"
    MR_Word mercury__test_bitset__A_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 184 "test_bitset.m"
    MR_Word mercury__test_bitset__B_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 184 "test_bitset.m"
    MR_Word mercury__test_bitset__EmptyA_4;
#line 184 "test_bitset.m"
    MR_Word mercury__test_bitset__EmptyB_5;
#line 183 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_11_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 183 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 183 "tree_bitset.opt"
    MR_Word mercury__test_bitset__V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 57 "set_ordlist.opt"
    MR_Word mercury__test_bitset__V_2_25;

#line 183 "tree_bitset.opt"
    {
#line 183 "tree_bitset.opt"
      mercury__test_bitset__succeeded = mercury__tree_bitset____Unify____tree_bitset_1_0(mercury__test_bitset__TypeInfo_for_T_9, mercury__test_bitset__A_2, mercury__test_bitset__V_11_11);
    }
#line 185 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 185 "test_bitset.m"
      mercury__test_bitset__EmptyA_4 = (MR_Integer) 1;
#line 185 "test_bitset.m"
    else
#line 185 "test_bitset.m"
      mercury__test_bitset__EmptyA_4 = (MR_Integer) 0;
#line 57 "set_ordlist.opt"
    mercury__test_bitset__V_2_25 = (MR_Word) mercury__test_bitset__B_3;
#line 58 "set_ordlist.opt"
    mercury__test_bitset__succeeded = (mercury__test_bitset__V_2_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 186 "test_bitset.m"
      mercury__test_bitset__EmptyB_5 = (MR_Integer) 1;
#line 186 "test_bitset.m"
    else
#line 186 "test_bitset.m"
      mercury__test_bitset__EmptyB_5 = (MR_Integer) 0;
#line 187 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__EmptyA_4 == mercury__test_bitset__EmptyB_5);
#line 189 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 188 "test_bitset.m"
      mercury__test_bitset__succeeded = (mercury__test_bitset__EmptyA_4 == (MR_Integer) 1);
#line 189 "test_bitset.m"
    else
#line 190 "test_bitset.m"
      {
#line 190 "test_bitset.m"
        {
#line 190 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "predicate \140test_bitset.is_empty\'/1", (MR_String) "failed");
        }
#line 190 "test_bitset.m"
        mercury__test_bitset__succeeded = MR_TRUE;
#line 190 "test_bitset.m"
      }
#line 184 "test_bitset.m"
    return mercury__test_bitset__succeeded;
#line 184 "test_bitset.m"
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
#line 173 "test_bitset.m"
  {
#line 173 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 173 "test_bitset.m"
    MR_Integer mercury__test_bitset__Count_5;
#line 173 "test_bitset.m"
    MR_Word mercury__test_bitset__TypeInfo_13_13;
#line 173 "test_bitset.m"
    MR_Word mercury__test_bitset__SetA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 0)));
#line 173 "test_bitset.m"
    MR_Word mercury__test_bitset__SetB_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__1_1, (MR_Integer) 1)));
#line 173 "test_bitset.m"
    MR_Integer mercury__test_bitset__CountA_6;
#line 173 "test_bitset.m"
    MR_Integer mercury__test_bitset__CountB_7;
#line 173 "test_bitset.m"
    MR_Word mercury__test_bitset__V_8_55 = (MR_Word) mercury__test_bitset__SetA_3;
#line 173 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_65;

#line 293 "tree_bitset.opt"
    if (((MR_tag((MR_Word) mercury__test_bitset__V_8_55)) == (MR_mktag((MR_Integer) 1))))
#line 294 "tree_bitset.opt"
      {
#line 294 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_11_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_55, (MR_Integer) 1)));
#line 294 "tree_bitset.opt"
        MR_Integer mercury__test_bitset__V_10_58 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__test_bitset__V_8_55, (MR_Integer) 0)));

#line 295 "tree_bitset.opt"
        {
#line 295 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_51_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__V_11_59, (MR_Integer) 0, &mercury__test_bitset__CountA_6);
        }
#line 294 "tree_bitset.opt"
      }
#line 293 "tree_bitset.opt"
    else
#line 291 "tree_bitset.opt"
      {
#line 291 "tree_bitset.opt"
        MR_Word mercury__test_bitset__V_9_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__test_bitset__V_8_55, (MR_Integer) 0)));

#line 292 "tree_bitset.opt"
        {
#line 292 "tree_bitset.opt"
          mercury__test_bitset__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_102_95_102_111_108_100_108_95_112_114_101_100_95_95_104_111_51_50_95_95_91_49_44_32_50_44_32_51_44_32_53_93_95_48_4_p_in__tree_bitset_0(mercury__test_bitset__TypeClassInfo_for_enum_11, mercury__test_bitset__V_9_57, (MR_Integer) 0, &mercury__test_bitset__CountA_6);
        }
#line 291 "tree_bitset.opt"
      }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__count_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10306 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_13_13  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 132 "set_ordlist.opt"
    mercury__test_bitset__V_3_65 = (MR_Word) mercury__test_bitset__SetB_4;
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__test_bitset__TypeInfo_13_13, mercury__test_bitset__V_3_65, (MR_Integer) 0, &mercury__test_bitset__CountB_7);
    }
#line 176 "test_bitset.m"
    mercury__test_bitset__succeeded = (mercury__test_bitset__CountA_6 == mercury__test_bitset__CountB_7);
#line 178 "test_bitset.m"
    if (mercury__test_bitset__succeeded)
#line 177 "test_bitset.m"
      mercury__test_bitset__Count_5 = mercury__test_bitset__CountA_6;
#line 178 "test_bitset.m"
    else
#line 179 "test_bitset.m"
      {
#line 179 "test_bitset.m"
        {
#line 179 "test_bitset.m"
          mercury__require__unexpected_3_p_0((MR_String) "test_bitset", (MR_String) "function \140test_bitset.count\'/1", (MR_String) "failed");
        }
#line 179 "test_bitset.m"
      }
#line 173 "test_bitset.m"
    return mercury__test_bitset__Count_5;
#line 173 "test_bitset.m"
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
#line 171 "test_bitset.m"
  {
#line 171 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 171 "test_bitset.m"
    {
#line 171 "test_bitset.m"
      *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__make_singleton_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 171 "test_bitset.m"
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
#line 170 "test_bitset.m"
  {
#line 170 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;

#line 170 "test_bitset.m"
    {
#line 170 "test_bitset.m"
      *mercury__test_bitset__HeadVar__1_1 = mercury__test_bitset__singleton_set_1_f_0(mercury__test_bitset__TypeClassInfo_for_enum_4, mercury__test_bitset__A_3);
    }
#line 170 "test_bitset.m"
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
#line 161 "test_bitset.m"
  {
#line 161 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_3 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_4 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_6 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 161 "test_bitset.m"
    *mercury__test_bitset__HeadVar__1_1 = (MR_Word) &mercury__test_bitset_scalar_common_5[0];
#line 161 "test_bitset.m"
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
#line 166 "test_bitset.m"
  {
#line 166 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 166 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;
#line 166 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_4;
#line 166 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_5;
#line 166 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_11;
#line 166 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_15;
#line 166 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_16;
#line 166 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_28;
#line 166 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_29;
#line 101 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_13;
#line 101 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_8;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10476 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_13  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 179 "tree_bitset.opt"
    mercury__test_bitset__V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "tree_bitset.opt"
    mercury__test_bitset__V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 374 "tree_bitset.opt"
    mercury__test_bitset__V_4_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 208 "tree_bitset.opt"
    {
#line 208 "tree_bitset.opt"
      mercury__test_bitset__V_4_4 = mercury__tree_bitset__insert_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__V_4_11, mercury__test_bitset__A_3);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10509 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_8  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 48 "set_ordlist.opt"
    mercury__test_bitset__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "set_ordlist.opt"
    {
#line 47 "set_ordlist.opt"
      mercury__test_bitset__V_4_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 47 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 0) = mercury__test_bitset__A_3;
#line 47 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 1) = ((MR_Box) (mercury__test_bitset__V_5_29));
#line 47 "set_ordlist.opt"
    }
#line 46 "set_ordlist.opt"
    mercury__test_bitset__V_5_5 = (MR_Word) mercury__test_bitset__V_4_28;
#line 167 "test_bitset.m"
    {
#line 167 "test_bitset.m"
      mercury__test_bitset__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 167 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 0) = ((MR_Box) (mercury__test_bitset__V_4_4));
#line 167 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 1) = ((MR_Box) (mercury__test_bitset__V_5_5));
#line 167 "test_bitset.m"
    }
#line 166 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 166 "test_bitset.m"
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
#line 163 "test_bitset.m"
  {
#line 163 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__2_2;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_4;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_5;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_11;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_15;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_16;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_4_28;
#line 163 "test_bitset.m"
    MR_Word mercury__test_bitset__V_5_29;
#line 101 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_13;
#line 101 "private_builtin.opt"
    MR_Word mercury__test_bitset__TypeInfo_8_8;

#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10596 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_13  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 179 "tree_bitset.opt"
    mercury__test_bitset__V_3_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "tree_bitset.opt"
    mercury__test_bitset__V_2_15 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 374 "tree_bitset.opt"
    mercury__test_bitset__V_4_11 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 208 "tree_bitset.opt"
    {
#line 208 "tree_bitset.opt"
      mercury__test_bitset__V_4_4 = mercury__tree_bitset__insert_2_f_0(mercury__test_bitset__TypeClassInfo_for_enum_6, mercury__test_bitset__V_4_11, mercury__test_bitset__A_3);
    }
#line 101 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__test_bitset__singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__test_bitset__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 101 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 10629 "test_bitset.c"

		;}
#undef MR_PROC_LABEL
	 mercury__test_bitset__TypeInfo_8_8  = TypeInfo;
#line 101 "private_builtin.opt"
}
#line 48 "set_ordlist.opt"
    mercury__test_bitset__V_5_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 47 "set_ordlist.opt"
    {
#line 47 "set_ordlist.opt"
      mercury__test_bitset__V_4_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 47 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 0) = mercury__test_bitset__A_3;
#line 47 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__test_bitset__V_4_28, 1) = ((MR_Box) (mercury__test_bitset__V_5_29));
#line 47 "set_ordlist.opt"
    }
#line 46 "set_ordlist.opt"
    mercury__test_bitset__V_5_5 = (MR_Word) mercury__test_bitset__V_4_28;
#line 164 "test_bitset.m"
    {
#line 164 "test_bitset.m"
      mercury__test_bitset__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 164 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 0) = ((MR_Box) (mercury__test_bitset__V_4_4));
#line 164 "test_bitset.m"
      MR_hl_field(MR_mktag(0), mercury__test_bitset__HeadVar__2_2, 1) = ((MR_Box) (mercury__test_bitset__V_5_5));
#line 164 "test_bitset.m"
    }
#line 163 "test_bitset.m"
    return mercury__test_bitset__HeadVar__2_2;
#line 163 "test_bitset.m"
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
#line 161 "test_bitset.m"
  {
#line 161 "test_bitset.m"
    MR_bool mercury__test_bitset__succeeded;
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__HeadVar__1_1 = (MR_Word) &mercury__test_bitset_scalar_common_5[0];
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_2 = (MR_Word) ((MR_Box) (&mercury__test_bitset_scalar_common_4[0]));
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_3 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_6 = (MR_Word) &mercury__test_bitset_scalar_common_4[0];
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_3_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 161 "test_bitset.m"
    MR_Word mercury__test_bitset__V_2_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 161 "test_bitset.m"
    return mercury__test_bitset__HeadVar__1_1;
#line 161 "test_bitset.m"
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
